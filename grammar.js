module.exports = grammar({
  name: 'QuakeC',

  rules: {
      source_file: $ => repeat($._definition),

      _definition: $ => choice(
          $.function_declaration
      ),

      function_declaration: $ => seq(
          $.primitive_type,
          $.parameter_list,
          $.identifier,
          ';'
      ),

      primitive_type: $ => choice(
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
          $.primitive_type,
          $.identifier
      ),

      identifier: $ => /[a-zA-Z][a-zA-Z0-9_]+/,
  }
});

function commaSeparated(rule) {
  return seq(rule, repeat(seq(',', rule)));
}
