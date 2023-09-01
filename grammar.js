module.exports = grammar({
    name: 'QuakeC',

    extras: $ => [
        /\s|\\\r?\n/,
        $.comment,
    ],

    rules: {
        source_file: $ => repeat($._definition),

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
                $.compound_statement
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
                seq($.identifier, seq('=', $.literal))
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

        compound_statement: $ => seq(
            '{',
            // repeat($.statement)
            '}'
        ),

        identifier: $ => /[a-zA-Z_][a-zA-Z0-9_]+/,

        // usual literals used in code, excluding the builtin function literals that can
        // only be used for function definition
        literal: $ => choice(
            $._numeric_literal,
            $._string_literal,
        ),

        _numeric_literal: $ => choice(
            // integer
            /-?[0-9]+/,
            // float
            /-?[0-9]+\.[0-9]+/,
            // vector
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

        _builtin_literal: $ => /#[0-9]+/,

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
