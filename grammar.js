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
            $.constant_definition
        ),

        function_declaration: $ => seq(
            $.simple_type,
            $.parameter_list,
            $.identifier,
            ';'
        ),

        constant_definition: $ => seq(
            $.simple_type,
            $.identifier,
            '=',
            $.immediate,
            ';'
        ),

        variable_definition: $ => seq(
            optional('local'),
            $.simple_type,
            $.identifier,
            optional(seq('=', $.immediate)),
            optional(commaSeparated(
                // name [ = immediate]
                seq($.identifier, seq('=', $.immediate))
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

        identifier: $ => /[a-zA-Z_][a-zA-Z0-9_]+/,

        // TODO: or it should be called literal?
        immediate: $ => choice(
            // integer
            /-?[0-9]+/,
            // float
            /-?[0-9]+\.[0-9]+/,
            // vector
            /`-?[0-9]+ -?[0-9]+ -?[0-9]+`/,
            /`-?[0-9]+\.[0-9]+ -?[0-9]+\.[0-9]+ -?[0-9]+\.[0-9]+`/,
            // string (TODO: escaping, see how javascript grammar does it)
            seq(
                '"',
                /[^"]*/,
                '"'
            )
        ),

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
