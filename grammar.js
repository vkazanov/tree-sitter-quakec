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
          // TODO: parameters
          ')'
      ),

      identifier: $ => /[a-zA-Z][a-zA-Z0-9_]+/,
  }
});
