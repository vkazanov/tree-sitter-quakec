// Operator precedence table
//
// TODO: manuals and qcc.h contradict each other on precedence, got to check code, maybe
// even fteqcc or gmqcc code
const PREC = {
    ASSIGNMENT: -2,
    CONDITIONAL: -1,
    DEFAULT: 0,
    LOGICAL_OR: 1,
    LOGICAL_AND: 2,
    RELATIONAL: 3,
    ADD: 4,                     // same as substraction
    BITWISE_OR: 5,
    BITWISE_AND: 6,
    MULTIPLY: 7,                 // same as division
    UNARY: 8,                    // positive/negative
    CALL: 9,
    FIELD: 10,
    SUBSCRIPT: 11,
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
            $.variable_definition,
            $.field_definition,
            $.function_definition,
            $.enum_definition,
            $.modelgen_pragma,
            $._preprocessor_top_level,
        ),

        function_declaration: $ => seq(
            field('result', $.simple_type),
            choice(
                // c-style
                seq(field('name', $.identifier), field('parameters', $.parameter_list)),
                // qc-style
                seq(field('parameters', $.parameter_list), field('name', $.identifier)),
            ),
            ';'
        ),

        function_definition: $ => seq(
            field('result', $.simple_type),
            choice(
                // c-style
                seq(field('parameters', $.parameter_list), field('name', $.identifier)),
                // qc-style
                seq(field('name', $.identifier), field('parameters', $.parameter_list), ),
            ),
            optional('='),
            optional($._frame_specifier),
            choice(
                $.builtin_literal,
                field('body', $._statement)
            ),
            optional(';')
        ),

        enum_definition: $ => seq(
            'enum',
            optional(
                seq('class', field('name', $.identifier))
            ),
            optional(
                seq(':', field('type', $.simple_type))
            ),
            '{',
            repeat(commaOneOrMore($._enum_constant_specifier)),
            '}',
            optional(';')
        ),

        _enum_constant_specifier: $ => seq(
            $.identifier,
            optional(seq(
                '=',
                $._expression
            ))
        ),

        _frame_specifier: $ => seq(
            '[',
            field('frame', choice(
                $.frame_identifier,
                $.integer_frame_literal
            )),
            ',' ,
            field('frame_function_name', $.identifier),
            ']'
        ),

        // TODO: Unify with field definition?
        variable_definition: $ => seq(
            optional(repeat($._type_modifier)),
            field('type', $.simple_type),
            commaOneOrMore(field('name', seq(
                $._variable_name_specifier,
                optional(seq(
                    '=', field('value', $._expression)
                ))
            ))),
            ';'
        ),

        _variable_name_specifier: $ => seq(
            field('name', $.identifier),
            field('array', optional($._array_declarator))
        ),

        _variable_def_type: $ => choice(
            $.simple_type,
            $.function_ref_type
        ),

        _array_declarator: $ => prec(1, seq(
            '[',
            optional($._expression),
            ']',
        )),

        // TODO: integrate into the more general variable_definition?
        field_definition: $ => seq(
            '.',
            choice(
                $._field_variable_definition,
                $._field_function_definition
            ),
            ';'
        ),

        _field_variable_definition: $ => seq(
            field('type', $.simple_type),
            commaOneOrMore(field('name', $.identifier))
        ),

        _field_function_definition: $ => seq(
            field('result', $.simple_type),
            field('parameters', $.parameter_list),
            commaOneOrMore(field('name', $.identifier)),
        ),

        parameter_list: $ => seq(
            '(',
            optional(commaOneOrMore($.parameter)),
            optional(seq(optional(','), '...')),
            ')'
        ),

        parameter: $ => seq(
            field('type', choice(
                $.simple_type,
                $.field_ptr_type,
                $.function_ref_type,
            )),
            field('name', $.identifier),
            optional(seq('=', field('init', $._parameter_initializer)))
        ),

        _parameter_initializer: $ => choice(
            $._literal,
            $.identifier
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
                'skin',
                'spritename',
                'type',
                'load',
            )),

            // TODO: let's just throw away all the args until a newline
            token(/[^\n]+/)
        ),

        //
        // Preprocessor (always a hack)
        //

        _preprocessor_top_level: $ => choice(
            alias($.preproc_ifdef_top_level, $.preproc_ifdef),
            $.preproc_def,
            $.preproc_undef,
        ),

        _preprocessor_local: $ => choice(
            alias($.preproc_ifdef_local, $.preproc_ifdef),
            $.preproc_def,
            $.preproc_undef,
        ),

        ...preprocessorRules('_top_level', $ => $._top_level),
        ...preprocessorRules('_local', $ => $._simple_statement),

        preproc_def: $ => seq(
            '#define',
            field('name', $.identifier),
            optional($._preproc_arg),
            token.immediate(/\r?\n/),
        ),

        preproc_undef: $ => seq(
            '#undef',
            field('name', $.identifier),
            token.immediate(/\r?\n/),
        ),

        _preproc_arg: _ => token(prec(-1, /\S([^/\n]|\/[^*]|\\\r?\n)*/)),

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
            $.continue_statement,
            $.if_statement,
            $.for_statement,
            $.while_statement,
            $.do_while_statement,
            $.return_statement,
            $._variable_definition_statement,
            $._expression_statement,
            $._preprocessor_local
        ),

        switch_statement: $ => seq(
            'switch',
            field('condition', $._parenthesized_expression),
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

        continue_statement: $ => seq(
            'continue', ';'
        ),

        for_statement: $ => seq(
            'for',
            '(',
            field('initial', $._expression), ';',
            field('condition', $._expression), ';',
            field('increment', $._expression),
            ')',
            $._statement,
        ),

        if_statement: $ => prec.right(seq(
            'if',
            field('condition', $._parenthesized_expression),
            $._statement,
            optional(seq('else', $._statement)),
        )),

        while_statement: $ => seq(
            'while',
            field('condition', $._parenthesized_expression),
            $._statement,
        ),

        do_while_statement: $ => seq(
            'do',
            $._statement,
            'while',
            field('condition', $._parenthesized_expression),
            ';'
        ),

        return_statement: $ => seq(
            'return',
            optional(field('value', $._expression)),
            ';'
        ),

        _variable_definition_statement: $ => $.variable_definition,

        _expression_statement: $ => seq($._expression, ';'),

        //
        // Expressions
        //

        _expression: $ => choice(
            $.identifier,
            $.frame_identifier,
            $._literal,
            $.unary_expression,
            $.update_expression,
            $.binary_expression,
            $.conditional_expression,
            $.assignment_expression,
            $.field_expression,
            $.funcall_expression,
            $.subscript_expression,
            $._parenthesized_expression,
        ),

        update_expression: $ => {
            const argument = $._expression;
            const operator = choice('--', '++');
            return prec.right(PREC.UNARY, choice(
                seq(operator, argument),
                seq(argument, operator),
            ));
        },

        unary_expression: $ => prec.left(PREC.UNARY, seq(
            choice('-', '+', '~', '!'),
            $._expression,
        )),

        binary_expression: $ => {
            const prec_table = [
                ['+', PREC.ADD],
                ['-', PREC.ADD],
                ['*', PREC.MULTIPLY],
                ['/', PREC.MULTIPLY],
                ['%', PREC.MULTIPLY],
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

        conditional_expression: $ => prec.right(PREC.CONDITIONAL, seq(
            field('condition', $._expression),
            '?',
            optional(field('consequence', $._expression)),
            ':',
            field('alternative', $._expression),
        )),

        assignment_expression: $ => prec.right(PREC.ASSIGNMENT, seq(
            field('target', choice($.identifier, $.field_expression)) ,
            choice('=', '+=', '-=', '*=', '/=', '|=', '&=', '&~=', '%=', '(-)', '(+)', '^='),
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
                field('operator', choice('.', '->')),
            )),
            field('field', $.identifier),
        ),

        funcall_expression: $ => prec(PREC.CALL, seq(
            field('function', $._expression),
            '(',
            optional(commaOneOrMore(field('arg', $._expression))),
            ')'
        )),

        _parenthesized_expression: $ => seq(
            '(', $._expression, ')',
        ),

        //
        // Terminal nodes
        //

        _type_modifier: $ => choice(
            'var', 'const', 'static', 'nosave', 'local'
        ),

        simple_type: $ => choice(
            'void', 'entity', 'float', 'vector', 'string', 'int', 'integer'
        ),

        field_ptr_type: $ => seq('.', $.simple_type),

        function_ref_type: $ => seq(
            field('result', $.simple_type),
            field('parameters', $.parameter_list)
        ),

        identifier: $ => /[a-zA-Z_][a-zA-Z0-9_]*/,

        frame_identifier: $ => seq('$', token.immediate(/[a-zA-Z_][a-zA-Z0-9_.]*/)),

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
            commaOneOrMore($._expression),
            '}'
        ),

        // string (TODO: escaping, see how javascript grammar does it)
        string_literal: $ => seq(
            '"',
            repeat(choice(
                // Normal chars
                token.immediate(prec(1, /[^\\"\n]+/)),

                $._escape_sequence
            )),
            /[^"]*/,
            '"'
        ),

        _escape_sequence: $ => token(prec(1, seq(
            '\\',
            choice(
                'n', 'r', '"', '\'', '\\', /[0-9]/
            ),
        ))),

        // only used assign builtin function names
        builtin_literal: $ => /#[0-9]+(:[a-zA-Z_][a-zA-Z0-9_]*)?/,

        // only used to specify frames in frame functions
        integer_frame_literal: $ => $._integer_literal,


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
function commaOneOrMore(rule) {
    return seq(rule, repeat(seq(',', rule)));
}

// Generate a set of preprocessor rules for global and local scopes
function preprocessorRules(suffix, content) {
    return {
        ['preproc_ifdef' + suffix]: $ => seq(
            choice('#ifdef', '#ifndef'),
            field('condition', $.identifier), token.immediate(/\r?\n/),
            repeat(content($)),
            optional(field('alternative', seq(
                '#else', token.immediate(/\r?\n/),
                repeat(content($)),
            ))),
            '#endif', token.immediate(/\r?\n/),
        ),
    };
}
