// Operator precedence table
//
// TODO: manuals and qcc.h contradict each other on precedence, got to check code, maybe
// even gmqcc or gteqcc code
const PREC = {
    DEFAULT: 0,
    LOGICAL_OR: 1,
    LOGICAL_AND: 2,
    LOGICAL_NOT: 3,
    RELATIONAL: 4,
    ADD: 5,                     // same as substraction
    BITWISE_OR: 6,
    BITWISE_AND: 7,
    MULTIPLY: 8,                 // same as division
    UNARY: 9,                    // positive/negative
    CALL: 10,
    FIELD: 11,
};

module.exports = grammar({
    name: 'quakec',

    extras: $ => [
        /\s|\\\r?\n/,
        $.comment,
    ],

    rules: {
        source_file: $ => repeat($._definition),

        //
        // Global definitions and declarations
        //

        _definition: $ => choice(
            $.function_declaration,
            $.constant_definition,
            $.variable_definition,
            $.field_definition,
            $.function_definition,
            $.modelgen_pragma
        ),

        function_declaration: $ => seq(
            field('result', $.simple_type),
            field('parameters', $.parameter_list),
            field('name', $.identifier),
            ';'
        ),

        function_definition: $ => seq(
            field('result', $.simple_type),
            choice(
                // c-style
                seq(field('parameters', $.parameter_list), field('name', $.identifier)),
                // qc-style
                seq(field('name', $.identifier), field('parameters', $.parameter_list)),
            ),
            optional('='),
            optional(seq('[', $.frame_identifier, ',' , $.identifier, ']')),
            choice(
                $.builtin_literal,
                field('body', $._statement)
            ),
            ';'
        ),

        constant_definition: $ => seq(
            field('type', $.simple_type),
            field('name', $.identifier),
            '=',
            field('value', $._literal),
            ';'
        ),

        variable_definition: $ => seq(
            field('type', $.simple_type),
            field('name', $.identifier),
            optional(seq(',', commaSeparated(field('name', $.identifier)))),
            ';'
        ),

        field_definition: $ => seq(
            '.',
            field('type', $.simple_type),
            field('name', $.identifier),
            optional(seq(',', commaSeparated(field('name', $.identifier)))),
            ';'
        ),

        parameter_list: $ => seq(
            '(',
            optional(commaSeparated($.parameter)),
            optional(seq(',', '...')),
            ')'
        ),

        parameter: $ => seq(
            field('type', $.simple_type),
            field('name', $.identifier)
        ),

        modelgen_pragma: $ => seq(
            '$',
            token.immediate(choice(
                'flags',
                'base',
                'cd',
                'frame',
                'modelname',
                'origin',
                'scale',
                'skin'
            )),

            // TODO: let's just throw away all the args until a newline
            token(/[^\n]+/)
        ),

        //
        // Statements
        //

        _statement: $ => choice(
            $.compound_statement,
            $._simple_statement,
        ),

        compound_statement: $ => seq(
            '{',
            repeat(seq($._simple_statement, ';')),
            '}'
        ),

        _simple_statement: $ => choice(
            $.assignment_statement,
            $.if_statement,
            $.while_statement,
            $.do_while_statement,
            $.return_statement,
            $.variable_definition_statement,
            $._expression_statement
        ),

        assignment_statement: $ => seq(
            field('target', choice($.identifier, $.field_expression)) ,
            choice('=', '+=', '-=', '*=', '/='),
            field('value', $._expression),
        ),

        if_statement: $ => prec.right(seq(
            'if',
            '(',
            field('condition', ($._expression)),
            ')',
            $._statement,
            optional(seq(
                'else',
                $._statement
            )),
        )),

        while_statement: $ => seq(
            'while',
            '(', field('condition', $._expression), ')',
            $._statement,
        ),

        do_while_statement: $ => seq(
            'do',
            $._statement,
            'while',
            '(', field('condition', $._expression), ')',
        ),

        return_statement: $ => seq(
            'return',
            optional(field('value', $._expression))
        ),

        variable_definition_statement: $ => seq(
            optional('local'),
            field('type', $.simple_type),
            field('name', $.identifier),
            optional(seq('=', $._literal)),
            optional(seq(',', commaSeparated(
                seq($.identifier, optional(seq('=', $._literal)))
            )))
        ),

        _expression_statement: $ => $._expression,

        //
        // Expressions
        //

        _expression: $ => choice(
            $.identifier,
            $._literal,
            $.unary_expression,
            $.binary_expression,
            $.field_expression,
            $.funcall_expression,
            $.parenthesized_expression, // TODO: should be used directly in statements
                                        // whenver paren-zed expressions are used?
        ),

        unary_expression: $ => prec.left(PREC.UNARY, seq(
            choice('-', '+'),
            $._expression,
        )),

        binary_expression: $ => {
            const prec_table = [
                ['+', PREC.ADD],
                ['-', PREC.ADD],
                ['*', PREC.MULTIPLY],
                ['/', PREC.MULTIPLY],
                ['||', PREC.LOGICAL_OR],
                ['&&', PREC.LOGICAL_AND],
                ['!', PREC.LOGICAL_NOT],
                ['|', PREC.BITWISE_OR],
                ['&', PREC.BITWISE_AND],
                ['==', PREC.RELATIONAL],
                ['!=', PREC.RELATIONAL],
                ['>', PREC.RELATIONAL],
                ['>=', PREC.RELATIONAL],
                ['<=', PREC.RELATIONAL],
                ['<', PREC.RELATIONAL],
            ];

            return choice(...prec_table.map(([operator, precedence]) => {
                return prec.left(
                    precedence,
                    seq($._expression, operator, $._expression)
                );
            }));
        },

        field_expression: $ => seq(
            prec(PREC.FIELD, seq(
                field('argument', $._expression),
                '.',
            )),
            field('field', $.identifier),
        ),

        funcall_expression: $ => seq(
            field('name', $.identifier),
            '(',
            optional(commaSeparated(field('arg', $._expression))),
            ')'
        ),

        parenthesized_expression: $ => seq(
            '(', $._expression, ')',
        ),

        //
        // Terminal nodes
        //

        simple_type: $ => choice(
            'void', 'entity', 'float', 'vector', 'string', 'int'
        ),

        identifier: $ => /[a-zA-Z_][a-zA-Z0-9_]*/,

        frame_identifier: $ => seq('$', token.immediate(/[a-zA-Z_][a-zA-Z0-9_]*/)),

        // NOTE: usual literals used in code, excluding the builtin function literals that
        // can only be used for function definition
        _literal: $ => choice(
            $.numeric_literal,
            $.vector_literal,
            $.string_literal,
        ),

        numeric_literal: $ => choice(
            $._integer_literal,
            $._float_literal,
        ),

        _integer_literal: $ => /-?[0-9]+/,

        _float_literal: $ => /-?([0-9]+)?\.[0-9]+/,

        vector_literal: $ => seq(
            '`',
            $.numeric_literal,
            $.numeric_literal,
            $.numeric_literal,
            '`'
        ),

        // string (TODO: escaping, see how javascript grammar does it)
        string_literal: $ => seq(
            '"',
            repeat(choice(
                // Normal chars
                token.immediate(prec(1, /[^\\"\n]+/)),
                // Escape sequence
                token(prec(1, seq('\\', choice('n', 'r'),))),
            )),
            /[^"]*/,
            '"'
        ),

        // only used assign builtin function names
        builtin_literal: $ => /#[0-9]+(:[a-zA-Z_][a-zA-Z0-9_]*)?/,

        //
        // Comments (to used in extras)
        //

        comment: _ => token(choice(
            seq('//', /.*/),
            seq(
                '/*',
                /[^*]*\*+([^/*][^*]*\*+)*/,
                '/',
            ),
        ))
    }
});

function commaSeparated(rule) {
    return seq(rule, repeat(seq(',', rule)));
}
