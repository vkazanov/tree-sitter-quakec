// Operator precedence table
//
// TODO: manuals and qcc.h contradict each other on precedence, got to check code, maybe
// even fteqcc or gmqcc code
const PREC = {
    ASSIGNMENT: -1,
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
    SUBSCRIPT: 12,
};

module.exports = grammar({
    name: 'quakec',

    extras: $ => [
        /\s|\\\r?\n/,
        $.comment,
    ],

    rules: {
        source_file: $ => repeat($._top_level),

        //
        // Global definitions and declarations
        //

        _top_level: $ => choice(
            $.function_declaration,
            $.constant_definition,
            $.variable_definition,
            $.field_definition,
            $.function_definition,
            $.modelgen_pragma,
            $._preprocessor_top_level,
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
            optional(';')
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
        _preprocessor_top_level: $ => choice(
            alias($.preproc_ifdef_top_level, $.preproc_ifdef),
        ),

        _preprocessor_local: $ => choice(
            alias($.preproc_ifdef_local, $.preproc_ifdef),
        ),

        ...preprocessorRules('_top_level', $ => $._top_level),
        ...preprocessorRules('_local', $ => $._simple_statement),

        //
        // Statements
        //

        _statement: $ => choice(
            $.case_statement,
            $._non_case_statement,
        ),

        _non_case_statement: $ => choice(
            $.compound_statement,
            $._simple_statement,
        ),

        compound_statement: $ => seq(
            '{',
            repeat($._statement),
            '}'
        ),

        _simple_statement: $ => choice(
            $.switch_statement,
            $.break_statement,
            $.if_statement,
            $.while_statement,
            $.do_while_statement,
            $.return_statement,
            $.variable_definition_statement,
            $._expression_statement,
            $._preprocessor_local
        ),

        switch_statement: $ => seq(
            'switch',
            field('condition', seq(
                '(',
                $._expression,
                ')',
            )),
            $.compound_statement,
        ),

        case_statement: $ => prec.right(seq(
            choice(
                seq('case', field('value', $._expression)),
                'default',
            ),
            ':',
            repeat($._non_case_statement),
        )),

        break_statement: $ => seq(
            'break', ';'
        ),

        if_statement: $ => prec.right(seq(
            'if',
            '(', field('condition', ($._expression)), ')',
            $._statement,
            optional(seq('else', $._statement)),
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
            ';'
        ),

        return_statement: $ => seq(
            'return',
            optional(field('value', $._expression)),
            ';'
        ),

        variable_definition_statement: $ => seq(
            optional('local'),
            field('type', $.simple_type),
            field('name', $.identifier),
            optional(seq('=', field('value', $._expression))),
            optional(seq(',', commaSeparated(
                seq(
                    field('name', $.identifier),
                    optional(seq('=', field('value', $._literal))))
            ))),
            ';'
        ),

        _expression_statement: $ => seq($._expression, ';'),

        //
        // Expressions
        //

        _expression: $ => choice(
            $.identifier,
            $._literal,
            $.unary_expression,
            $.binary_expression,
            $.assignment_expression,
            $.field_expression,
            $.funcall_expression,
            $.subscript_expression,
            $.negation_expression,
            // TODO: should be used directly in statements
            // whenver paren-zed expressions are used?
            $.parenthesized_expression,
        ),

        unary_expression: $ => prec.left(PREC.UNARY, seq(
            choice('-', '+'),
            $._expression,
        )),


        negation_expression: $ => prec.left(PREC.LOGICAL_NOT, seq(
            '!', $._expression,
        )),

        binary_expression: $ => {
            const prec_table = [
                ['+', PREC.ADD],
                ['-', PREC.ADD],
                ['*', PREC.MULTIPLY],
                ['/', PREC.MULTIPLY],
                ['||', PREC.LOGICAL_OR],
                ['&&', PREC.LOGICAL_AND],
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

        assignment_expression: $ => prec.right(PREC.ASSIGNMENT, seq(
            field('target', choice($.identifier, $.field_expression)) ,
            choice('=', '+=', '-=', '*=', '/='),
            field('value', $._expression),
        )),

        subscript_expression: $ => prec(PREC.SUBSCRIPT, seq(
            field('argument', $._expression),
            '[',
            field('index', $._expression),
            ']',
        )),

        field_expression: $ => seq(
            prec(PREC.FIELD, seq(
                field('argument', $._expression),
                choice('.', '->'),
            )),
            field('field', $.identifier),
        ),

        funcall_expression: $ => prec(PREC.CALL, seq(
            field('function', $._expression),
            '(',
            optional(commaSeparated(field('arg', $._expression))),
            ')'
        )),

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
            $.array_literal,
            $.string_literal,
        ),

        numeric_literal: $ => choice(
            $._integer_literal,
            $._float_literal,
        ),

        _integer_literal: $ => /-?[0-9]+i?/,

        _float_literal: $ => /-?([0-9]+)?\.([0-9]+f?)?/,

        vector_literal: $ => seq(
            '\'',
            $.numeric_literal,
            $.numeric_literal,
            $.numeric_literal,
            '\''
        ),

        // TODO: could find mention of this syntax anywhere but FTEQCC manual. The
        // rereleased quakec/buttons.qc contains this for as an init for a vector, which
        // contradicts the manual
        array_literal: $ => seq(
            '{',
            commaSeparated($._expression),
            '}'
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

// Generate a rule that comma-separated the provided rule
function commaSeparated(rule) {
    return seq(rule, repeat(seq(',', rule)));
}

// Generate a set of preprocessor rules for global and local scopes
function preprocessorRules(suffix, content) {
    return {
        ['preproc_ifdef' + suffix]: $ => seq(
            choice('#ifdef', '#ifndef'),
            field('condition', $.identifier), '\n',
            repeat(content($)),
            optional(field('alternative', seq(
                '#else', '\n',
                repeat(content($)),
            ))),
            '#endif', '\n'
        ),
    };
}
