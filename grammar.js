module.exports = grammar({
    name: 'QuakeC',

    extras: $ => [
        /\s|\\\r?\n/,
        $.comment,
    ],

    rules: {
        source_file: $ => repeat($._definition),

        // definitions and declarations

        _definition: $ => choice(
            $.function_declaration,
            $.constant_definition,
            $.function_definition
        ),

        function_declaration: $ => seq(
            $.simple_type,
            $.parameter_list,
            $.identifier,
            ';'
        ),

        function_definition: $ => seq(
            $.simple_type,
            $.parameter_list,
            $.identifier,
            '=',
            choice(
                $._builtin_literal,
                $._statement
            ),
            ';'
        ),

        constant_definition: $ => seq(
            $.simple_type,
            $.identifier,
            '=',
            $.literal,
            ';'
        ),

        variable_definition: $ => seq(
            optional('local'),
            $.simple_type,
            $.identifier,
            optional(seq('=', $.literal)),
            optional(commaSeparated(
                // name [ = literal]
                seq($.identifier, optional(seq('=', $.literal)))
            ))
        ),

        simple_type: $ => choice(
            'void', 'entity', 'float', 'vector', 'string', 'int'
        ),

        parameter_list: $ => seq(
            '(',
            optional(
                commaSeparated($._parameter),
            ),
            ')'
        ),

        _parameter: $ => seq(
            $.simple_type,
            $.identifier
        ),

        //
        // Statements
        //

        _statement: $ => choice(
            $._compound_statement,
            $._simple_statement,
        ),

        _compound_statement: $ => seq(
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
            // TODO
        ),

        assignment_statement: $ => seq(
            $.identifier,
            '=',
            $._expression,
        ),

        if_statement: $ => prec.right(seq(
            'if',
            '(',
            $._expression,
            ')',
            $._statement,
            optional(seq(
                'else',
                $._statement
            )),
        )),

        while_statement: $ => seq(
            'while',
            '(', $._expression, ')',
            $._statement,
        ),

        do_while_statement: $ => seq(
            'do',
            $._statement,
            'while',
            '(', $._expression, ')',
        ),

        return_statement: $ => seq(
            'return',
            $._expression
        ),

        //
        // Expressions
        //

        _expression: $ => choice(
            $.identifier,
            $.literal
            // TODO
        ),

        //
        // Terminal nodes
        //

        identifier: $ => /[a-zA-Z_][a-zA-Z0-9_]*/,

        // NOTE: usual literals used in code, excluding the builtin function literals that
        // can only be used for function definition
        literal: $ => choice(
            $._numeric_literal,
            $._string_literal,
        ),

        _numeric_literal: $ => choice(
            // integer
            /-?[0-9]+/,
            // float
            /-?[0-9]+\.[0-9]+/,
            // vector: `10 -1 10.0`
            /`-?[0-9]+ -?[0-9]+ -?[0-9]+`/,
            /`-?[0-9]+\.[0-9]+ -?[0-9]+\.[0-9]+ -?[0-9]+\.[0-9]+`/,
        ),

        // string (TODO: escaping, see how javascript grammar does it)
        _string_literal: $ => seq(
            seq(
                '"',
                /[^"]*/,
                '"'
            ),
        ),

        // only used assign builtin function names
        _builtin_literal: $ => /#[0-9]+/,

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
