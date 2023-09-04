#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 185
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 96
#define ALIAS_COUNT 0
#define TOKEN_COUNT 57
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 11
#define MAX_ALIAS_SEQUENCE_LENGTH 11
#define PRODUCTION_ID_COUNT 22

enum {
  anon_sym_SEMI = 1,
  anon_sym_EQ = 2,
  anon_sym_LBRACK = 3,
  anon_sym_COMMA = 4,
  anon_sym_RBRACK = 5,
  anon_sym_DOT = 6,
  anon_sym_LPAREN = 7,
  anon_sym_DOT_DOT_DOT = 8,
  anon_sym_RPAREN = 9,
  anon_sym_DOLLAR = 10,
  aux_sym_modelgen_pragma_token1 = 11,
  aux_sym_modelgen_pragma_token2 = 12,
  anon_sym_LBRACE = 13,
  anon_sym_RBRACE = 14,
  anon_sym_PLUS_EQ = 15,
  anon_sym_DASH_EQ = 16,
  anon_sym_STAR_EQ = 17,
  anon_sym_SLASH_EQ = 18,
  anon_sym_if = 19,
  anon_sym_else = 20,
  anon_sym_while = 21,
  anon_sym_do = 22,
  anon_sym_return = 23,
  anon_sym_local = 24,
  anon_sym_DASH = 25,
  anon_sym_PLUS = 26,
  anon_sym_STAR = 27,
  anon_sym_SLASH = 28,
  anon_sym_PIPE_PIPE = 29,
  anon_sym_AMP_AMP = 30,
  anon_sym_BANG = 31,
  anon_sym_PIPE = 32,
  anon_sym_AMP = 33,
  anon_sym_EQ_EQ = 34,
  anon_sym_BANG_EQ = 35,
  anon_sym_GT = 36,
  anon_sym_GT_EQ = 37,
  anon_sym_LT_EQ = 38,
  anon_sym_LT = 39,
  anon_sym_void = 40,
  anon_sym_entity = 41,
  anon_sym_float = 42,
  anon_sym_vector = 43,
  anon_sym_string = 44,
  anon_sym_int = 45,
  sym_identifier = 46,
  aux_sym_frame_identifier_token1 = 47,
  sym__integer_literal = 48,
  sym__float_literal = 49,
  anon_sym_BQUOTE = 50,
  anon_sym_DQUOTE = 51,
  aux_sym_string_literal_token1 = 52,
  aux_sym_string_literal_token2 = 53,
  aux_sym_string_literal_token3 = 54,
  sym_builtin_literal = 55,
  sym_comment = 56,
  sym_source_file = 57,
  sym__definition = 58,
  sym_function_declaration = 59,
  sym_function_definition = 60,
  sym_constant_definition = 61,
  sym_variable_definition = 62,
  sym_field_definition = 63,
  sym_parameter_list = 64,
  sym_parameter = 65,
  sym_modelgen_pragma = 66,
  sym__statement = 67,
  sym_compound_statement = 68,
  sym__simple_statement = 69,
  sym_assignment_statement = 70,
  sym_if_statement = 71,
  sym_while_statement = 72,
  sym_do_while_statement = 73,
  sym_return_statement = 74,
  sym_variable_definition_statement = 75,
  sym__expression_statement = 76,
  sym__expression = 77,
  sym_unary_expression = 78,
  sym_binary_expression = 79,
  sym_field_expression = 80,
  sym_funcall_expression = 81,
  sym_parenthesized_expression = 82,
  sym_simple_type = 83,
  sym_frame_identifier = 84,
  sym__literal = 85,
  sym_numeric_literal = 86,
  sym_vector_literal = 87,
  sym_string_literal = 88,
  aux_sym_source_file_repeat1 = 89,
  aux_sym_variable_definition_repeat1 = 90,
  aux_sym_parameter_list_repeat1 = 91,
  aux_sym_compound_statement_repeat1 = 92,
  aux_sym_variable_definition_statement_repeat1 = 93,
  aux_sym_funcall_expression_repeat1 = 94,
  aux_sym_string_literal_repeat1 = 95,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [anon_sym_SEMI] = ";",
  [anon_sym_EQ] = "=",
  [anon_sym_LBRACK] = "[",
  [anon_sym_COMMA] = ",",
  [anon_sym_RBRACK] = "]",
  [anon_sym_DOT] = ".",
  [anon_sym_LPAREN] = "(",
  [anon_sym_DOT_DOT_DOT] = "...",
  [anon_sym_RPAREN] = ")",
  [anon_sym_DOLLAR] = "$",
  [aux_sym_modelgen_pragma_token1] = "modelgen_pragma_token1",
  [aux_sym_modelgen_pragma_token2] = "modelgen_pragma_token2",
  [anon_sym_LBRACE] = "{",
  [anon_sym_RBRACE] = "}",
  [anon_sym_PLUS_EQ] = "+=",
  [anon_sym_DASH_EQ] = "-=",
  [anon_sym_STAR_EQ] = "*=",
  [anon_sym_SLASH_EQ] = "/=",
  [anon_sym_if] = "if",
  [anon_sym_else] = "else",
  [anon_sym_while] = "while",
  [anon_sym_do] = "do",
  [anon_sym_return] = "return",
  [anon_sym_local] = "local",
  [anon_sym_DASH] = "-",
  [anon_sym_PLUS] = "+",
  [anon_sym_STAR] = "*",
  [anon_sym_SLASH] = "/",
  [anon_sym_PIPE_PIPE] = "||",
  [anon_sym_AMP_AMP] = "&&",
  [anon_sym_BANG] = "!",
  [anon_sym_PIPE] = "|",
  [anon_sym_AMP] = "&",
  [anon_sym_EQ_EQ] = "==",
  [anon_sym_BANG_EQ] = "!=",
  [anon_sym_GT] = ">",
  [anon_sym_GT_EQ] = ">=",
  [anon_sym_LT_EQ] = "<=",
  [anon_sym_LT] = "<",
  [anon_sym_void] = "void",
  [anon_sym_entity] = "entity",
  [anon_sym_float] = "float",
  [anon_sym_vector] = "vector",
  [anon_sym_string] = "string",
  [anon_sym_int] = "int",
  [sym_identifier] = "identifier",
  [aux_sym_frame_identifier_token1] = "frame_identifier_token1",
  [sym__integer_literal] = "_integer_literal",
  [sym__float_literal] = "_float_literal",
  [anon_sym_BQUOTE] = "`",
  [anon_sym_DQUOTE] = "\"",
  [aux_sym_string_literal_token1] = "string_literal_token1",
  [aux_sym_string_literal_token2] = "string_literal_token2",
  [aux_sym_string_literal_token3] = "string_literal_token3",
  [sym_builtin_literal] = "builtin_literal",
  [sym_comment] = "comment",
  [sym_source_file] = "source_file",
  [sym__definition] = "_definition",
  [sym_function_declaration] = "function_declaration",
  [sym_function_definition] = "function_definition",
  [sym_constant_definition] = "constant_definition",
  [sym_variable_definition] = "variable_definition",
  [sym_field_definition] = "field_definition",
  [sym_parameter_list] = "parameter_list",
  [sym_parameter] = "parameter",
  [sym_modelgen_pragma] = "modelgen_pragma",
  [sym__statement] = "_statement",
  [sym_compound_statement] = "compound_statement",
  [sym__simple_statement] = "_simple_statement",
  [sym_assignment_statement] = "assignment_statement",
  [sym_if_statement] = "if_statement",
  [sym_while_statement] = "while_statement",
  [sym_do_while_statement] = "do_while_statement",
  [sym_return_statement] = "return_statement",
  [sym_variable_definition_statement] = "variable_definition_statement",
  [sym__expression_statement] = "_expression_statement",
  [sym__expression] = "_expression",
  [sym_unary_expression] = "unary_expression",
  [sym_binary_expression] = "binary_expression",
  [sym_field_expression] = "field_expression",
  [sym_funcall_expression] = "funcall_expression",
  [sym_parenthesized_expression] = "parenthesized_expression",
  [sym_simple_type] = "simple_type",
  [sym_frame_identifier] = "frame_identifier",
  [sym__literal] = "_literal",
  [sym_numeric_literal] = "numeric_literal",
  [sym_vector_literal] = "vector_literal",
  [sym_string_literal] = "string_literal",
  [aux_sym_source_file_repeat1] = "source_file_repeat1",
  [aux_sym_variable_definition_repeat1] = "variable_definition_repeat1",
  [aux_sym_parameter_list_repeat1] = "parameter_list_repeat1",
  [aux_sym_compound_statement_repeat1] = "compound_statement_repeat1",
  [aux_sym_variable_definition_statement_repeat1] = "variable_definition_statement_repeat1",
  [aux_sym_funcall_expression_repeat1] = "funcall_expression_repeat1",
  [aux_sym_string_literal_repeat1] = "string_literal_repeat1",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [anon_sym_SEMI] = anon_sym_SEMI,
  [anon_sym_EQ] = anon_sym_EQ,
  [anon_sym_LBRACK] = anon_sym_LBRACK,
  [anon_sym_COMMA] = anon_sym_COMMA,
  [anon_sym_RBRACK] = anon_sym_RBRACK,
  [anon_sym_DOT] = anon_sym_DOT,
  [anon_sym_LPAREN] = anon_sym_LPAREN,
  [anon_sym_DOT_DOT_DOT] = anon_sym_DOT_DOT_DOT,
  [anon_sym_RPAREN] = anon_sym_RPAREN,
  [anon_sym_DOLLAR] = anon_sym_DOLLAR,
  [aux_sym_modelgen_pragma_token1] = aux_sym_modelgen_pragma_token1,
  [aux_sym_modelgen_pragma_token2] = aux_sym_modelgen_pragma_token2,
  [anon_sym_LBRACE] = anon_sym_LBRACE,
  [anon_sym_RBRACE] = anon_sym_RBRACE,
  [anon_sym_PLUS_EQ] = anon_sym_PLUS_EQ,
  [anon_sym_DASH_EQ] = anon_sym_DASH_EQ,
  [anon_sym_STAR_EQ] = anon_sym_STAR_EQ,
  [anon_sym_SLASH_EQ] = anon_sym_SLASH_EQ,
  [anon_sym_if] = anon_sym_if,
  [anon_sym_else] = anon_sym_else,
  [anon_sym_while] = anon_sym_while,
  [anon_sym_do] = anon_sym_do,
  [anon_sym_return] = anon_sym_return,
  [anon_sym_local] = anon_sym_local,
  [anon_sym_DASH] = anon_sym_DASH,
  [anon_sym_PLUS] = anon_sym_PLUS,
  [anon_sym_STAR] = anon_sym_STAR,
  [anon_sym_SLASH] = anon_sym_SLASH,
  [anon_sym_PIPE_PIPE] = anon_sym_PIPE_PIPE,
  [anon_sym_AMP_AMP] = anon_sym_AMP_AMP,
  [anon_sym_BANG] = anon_sym_BANG,
  [anon_sym_PIPE] = anon_sym_PIPE,
  [anon_sym_AMP] = anon_sym_AMP,
  [anon_sym_EQ_EQ] = anon_sym_EQ_EQ,
  [anon_sym_BANG_EQ] = anon_sym_BANG_EQ,
  [anon_sym_GT] = anon_sym_GT,
  [anon_sym_GT_EQ] = anon_sym_GT_EQ,
  [anon_sym_LT_EQ] = anon_sym_LT_EQ,
  [anon_sym_LT] = anon_sym_LT,
  [anon_sym_void] = anon_sym_void,
  [anon_sym_entity] = anon_sym_entity,
  [anon_sym_float] = anon_sym_float,
  [anon_sym_vector] = anon_sym_vector,
  [anon_sym_string] = anon_sym_string,
  [anon_sym_int] = anon_sym_int,
  [sym_identifier] = sym_identifier,
  [aux_sym_frame_identifier_token1] = aux_sym_frame_identifier_token1,
  [sym__integer_literal] = sym__integer_literal,
  [sym__float_literal] = sym__float_literal,
  [anon_sym_BQUOTE] = anon_sym_BQUOTE,
  [anon_sym_DQUOTE] = anon_sym_DQUOTE,
  [aux_sym_string_literal_token1] = aux_sym_string_literal_token1,
  [aux_sym_string_literal_token2] = aux_sym_string_literal_token2,
  [aux_sym_string_literal_token3] = aux_sym_string_literal_token3,
  [sym_builtin_literal] = sym_builtin_literal,
  [sym_comment] = sym_comment,
  [sym_source_file] = sym_source_file,
  [sym__definition] = sym__definition,
  [sym_function_declaration] = sym_function_declaration,
  [sym_function_definition] = sym_function_definition,
  [sym_constant_definition] = sym_constant_definition,
  [sym_variable_definition] = sym_variable_definition,
  [sym_field_definition] = sym_field_definition,
  [sym_parameter_list] = sym_parameter_list,
  [sym_parameter] = sym_parameter,
  [sym_modelgen_pragma] = sym_modelgen_pragma,
  [sym__statement] = sym__statement,
  [sym_compound_statement] = sym_compound_statement,
  [sym__simple_statement] = sym__simple_statement,
  [sym_assignment_statement] = sym_assignment_statement,
  [sym_if_statement] = sym_if_statement,
  [sym_while_statement] = sym_while_statement,
  [sym_do_while_statement] = sym_do_while_statement,
  [sym_return_statement] = sym_return_statement,
  [sym_variable_definition_statement] = sym_variable_definition_statement,
  [sym__expression_statement] = sym__expression_statement,
  [sym__expression] = sym__expression,
  [sym_unary_expression] = sym_unary_expression,
  [sym_binary_expression] = sym_binary_expression,
  [sym_field_expression] = sym_field_expression,
  [sym_funcall_expression] = sym_funcall_expression,
  [sym_parenthesized_expression] = sym_parenthesized_expression,
  [sym_simple_type] = sym_simple_type,
  [sym_frame_identifier] = sym_frame_identifier,
  [sym__literal] = sym__literal,
  [sym_numeric_literal] = sym_numeric_literal,
  [sym_vector_literal] = sym_vector_literal,
  [sym_string_literal] = sym_string_literal,
  [aux_sym_source_file_repeat1] = aux_sym_source_file_repeat1,
  [aux_sym_variable_definition_repeat1] = aux_sym_variable_definition_repeat1,
  [aux_sym_parameter_list_repeat1] = aux_sym_parameter_list_repeat1,
  [aux_sym_compound_statement_repeat1] = aux_sym_compound_statement_repeat1,
  [aux_sym_variable_definition_statement_repeat1] = aux_sym_variable_definition_statement_repeat1,
  [aux_sym_funcall_expression_repeat1] = aux_sym_funcall_expression_repeat1,
  [aux_sym_string_literal_repeat1] = aux_sym_string_literal_repeat1,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [anon_sym_SEMI] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LBRACK] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COMMA] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RBRACK] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DOT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LPAREN] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DOT_DOT_DOT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RPAREN] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DOLLAR] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_modelgen_pragma_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_modelgen_pragma_token2] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_LBRACE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RBRACE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PLUS_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DASH_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_STAR_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_SLASH_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_if] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_else] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_while] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_do] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_return] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_local] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DASH] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PLUS] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_STAR] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_SLASH] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PIPE_PIPE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_AMP_AMP] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_BANG] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PIPE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_AMP] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_EQ_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_BANG_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_GT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_GT_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LT_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_void] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_entity] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_float] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_vector] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_string] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_int] = {
    .visible = true,
    .named = false,
  },
  [sym_identifier] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_frame_identifier_token1] = {
    .visible = false,
    .named = false,
  },
  [sym__integer_literal] = {
    .visible = false,
    .named = true,
  },
  [sym__float_literal] = {
    .visible = false,
    .named = true,
  },
  [anon_sym_BQUOTE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DQUOTE] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_string_literal_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_string_literal_token2] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_string_literal_token3] = {
    .visible = false,
    .named = false,
  },
  [sym_builtin_literal] = {
    .visible = true,
    .named = true,
  },
  [sym_comment] = {
    .visible = true,
    .named = true,
  },
  [sym_source_file] = {
    .visible = true,
    .named = true,
  },
  [sym__definition] = {
    .visible = false,
    .named = true,
  },
  [sym_function_declaration] = {
    .visible = true,
    .named = true,
  },
  [sym_function_definition] = {
    .visible = true,
    .named = true,
  },
  [sym_constant_definition] = {
    .visible = true,
    .named = true,
  },
  [sym_variable_definition] = {
    .visible = true,
    .named = true,
  },
  [sym_field_definition] = {
    .visible = true,
    .named = true,
  },
  [sym_parameter_list] = {
    .visible = true,
    .named = true,
  },
  [sym_parameter] = {
    .visible = true,
    .named = true,
  },
  [sym_modelgen_pragma] = {
    .visible = true,
    .named = true,
  },
  [sym__statement] = {
    .visible = false,
    .named = true,
  },
  [sym_compound_statement] = {
    .visible = true,
    .named = true,
  },
  [sym__simple_statement] = {
    .visible = false,
    .named = true,
  },
  [sym_assignment_statement] = {
    .visible = true,
    .named = true,
  },
  [sym_if_statement] = {
    .visible = true,
    .named = true,
  },
  [sym_while_statement] = {
    .visible = true,
    .named = true,
  },
  [sym_do_while_statement] = {
    .visible = true,
    .named = true,
  },
  [sym_return_statement] = {
    .visible = true,
    .named = true,
  },
  [sym_variable_definition_statement] = {
    .visible = true,
    .named = true,
  },
  [sym__expression_statement] = {
    .visible = false,
    .named = true,
  },
  [sym__expression] = {
    .visible = false,
    .named = true,
  },
  [sym_unary_expression] = {
    .visible = true,
    .named = true,
  },
  [sym_binary_expression] = {
    .visible = true,
    .named = true,
  },
  [sym_field_expression] = {
    .visible = true,
    .named = true,
  },
  [sym_funcall_expression] = {
    .visible = true,
    .named = true,
  },
  [sym_parenthesized_expression] = {
    .visible = true,
    .named = true,
  },
  [sym_simple_type] = {
    .visible = true,
    .named = true,
  },
  [sym_frame_identifier] = {
    .visible = true,
    .named = true,
  },
  [sym__literal] = {
    .visible = false,
    .named = true,
  },
  [sym_numeric_literal] = {
    .visible = true,
    .named = true,
  },
  [sym_vector_literal] = {
    .visible = true,
    .named = true,
  },
  [sym_string_literal] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_source_file_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_variable_definition_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_parameter_list_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_compound_statement_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_variable_definition_statement_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_funcall_expression_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_string_literal_repeat1] = {
    .visible = false,
    .named = false,
  },
};

enum {
  field_arg = 1,
  field_argument = 2,
  field_body = 3,
  field_condition = 4,
  field_field = 5,
  field_name = 6,
  field_parameters = 7,
  field_result = 8,
  field_target = 9,
  field_type = 10,
  field_value = 11,
};

static const char * const ts_field_names[] = {
  [0] = NULL,
  [field_arg] = "arg",
  [field_argument] = "argument",
  [field_body] = "body",
  [field_condition] = "condition",
  [field_field] = "field",
  [field_name] = "name",
  [field_parameters] = "parameters",
  [field_result] = "result",
  [field_target] = "target",
  [field_type] = "type",
  [field_value] = "value",
};

static const TSFieldMapSlice ts_field_map_slices[PRODUCTION_ID_COUNT] = {
  [1] = {.index = 0, .length = 2},
  [2] = {.index = 2, .length = 2},
  [3] = {.index = 4, .length = 3},
  [4] = {.index = 7, .length = 3},
  [5] = {.index = 10, .length = 3},
  [6] = {.index = 13, .length = 3},
  [7] = {.index = 16, .length = 1},
  [8] = {.index = 17, .length = 4},
  [9] = {.index = 21, .length = 2},
  [10] = {.index = 23, .length = 4},
  [11] = {.index = 27, .length = 4},
  [12] = {.index = 31, .length = 2},
  [13] = {.index = 33, .length = 1},
  [14] = {.index = 34, .length = 2},
  [15] = {.index = 36, .length = 2},
  [16] = {.index = 38, .length = 1},
  [17] = {.index = 39, .length = 1},
  [18] = {.index = 40, .length = 3},
  [19] = {.index = 43, .length = 2},
  [20] = {.index = 45, .length = 1},
  [21] = {.index = 46, .length = 4},
};

static const TSFieldMapEntry ts_field_map_entries[] = {
  [0] =
    {field_name, 1},
    {field_type, 0},
  [2] =
    {field_name, 2},
    {field_type, 1},
  [4] =
    {field_name, 2},
    {field_parameters, 1},
    {field_result, 0},
  [7] =
    {field_name, 1},
    {field_type, 0},
    {field_value, 3},
  [10] =
    {field_name, 1},
    {field_name, 3},
    {field_type, 0},
  [13] =
    {field_name, 2},
    {field_name, 4},
    {field_type, 1},
  [16] =
    {field_name, 1},
  [17] =
    {field_name, 1},
    {field_name, 3},
    {field_name, 4, .inherited = true},
    {field_type, 0},
  [21] =
    {field_name, 0, .inherited = true},
    {field_name, 1, .inherited = true},
  [23] =
    {field_body, 4},
    {field_name, 2},
    {field_parameters, 1},
    {field_result, 0},
  [27] =
    {field_name, 2},
    {field_name, 4},
    {field_name, 5, .inherited = true},
    {field_type, 1},
  [31] =
    {field_target, 0},
    {field_value, 2},
  [33] =
    {field_name, 0},
  [34] =
    {field_argument, 0},
    {field_field, 2},
  [36] =
    {field_arg, 2},
    {field_name, 0},
  [38] =
    {field_condition, 2},
  [39] =
    {field_arg, 1},
  [40] =
    {field_arg, 2},
    {field_arg, 3, .inherited = true},
    {field_name, 0},
  [43] =
    {field_arg, 0, .inherited = true},
    {field_arg, 1, .inherited = true},
  [45] =
    {field_condition, 4},
  [46] =
    {field_body, 9},
    {field_name, 2},
    {field_parameters, 1},
    {field_result, 0},
};

static const TSSymbol ts_alias_sequences[PRODUCTION_ID_COUNT][MAX_ALIAS_SEQUENCE_LENGTH] = {
  [0] = {0},
};

static const uint16_t ts_non_terminal_alias_map[] = {
  0,
};

static const TSStateId ts_primary_state_ids[STATE_COUNT] = {
  [0] = 0,
  [1] = 1,
  [2] = 2,
  [3] = 3,
  [4] = 4,
  [5] = 5,
  [6] = 6,
  [7] = 7,
  [8] = 8,
  [9] = 9,
  [10] = 10,
  [11] = 11,
  [12] = 12,
  [13] = 13,
  [14] = 14,
  [15] = 15,
  [16] = 16,
  [17] = 17,
  [18] = 18,
  [19] = 19,
  [20] = 20,
  [21] = 21,
  [22] = 22,
  [23] = 23,
  [24] = 24,
  [25] = 25,
  [26] = 26,
  [27] = 27,
  [28] = 28,
  [29] = 29,
  [30] = 30,
  [31] = 31,
  [32] = 32,
  [33] = 33,
  [34] = 34,
  [35] = 35,
  [36] = 36,
  [37] = 37,
  [38] = 38,
  [39] = 39,
  [40] = 40,
  [41] = 41,
  [42] = 42,
  [43] = 43,
  [44] = 44,
  [45] = 45,
  [46] = 46,
  [47] = 47,
  [48] = 48,
  [49] = 49,
  [50] = 50,
  [51] = 51,
  [52] = 52,
  [53] = 53,
  [54] = 54,
  [55] = 55,
  [56] = 56,
  [57] = 57,
  [58] = 58,
  [59] = 59,
  [60] = 60,
  [61] = 61,
  [62] = 62,
  [63] = 63,
  [64] = 64,
  [65] = 65,
  [66] = 66,
  [67] = 67,
  [68] = 68,
  [69] = 69,
  [70] = 70,
  [71] = 71,
  [72] = 72,
  [73] = 73,
  [74] = 74,
  [75] = 75,
  [76] = 76,
  [77] = 77,
  [78] = 78,
  [79] = 79,
  [80] = 80,
  [81] = 81,
  [82] = 82,
  [83] = 83,
  [84] = 84,
  [85] = 85,
  [86] = 86,
  [87] = 87,
  [88] = 20,
  [89] = 89,
  [90] = 90,
  [91] = 91,
  [92] = 92,
  [93] = 93,
  [94] = 94,
  [95] = 95,
  [96] = 96,
  [97] = 97,
  [98] = 98,
  [99] = 99,
  [100] = 100,
  [101] = 101,
  [102] = 102,
  [103] = 103,
  [104] = 104,
  [105] = 105,
  [106] = 106,
  [107] = 107,
  [108] = 108,
  [109] = 109,
  [110] = 110,
  [111] = 111,
  [112] = 112,
  [113] = 113,
  [114] = 114,
  [115] = 115,
  [116] = 116,
  [117] = 117,
  [118] = 118,
  [119] = 119,
  [120] = 120,
  [121] = 121,
  [122] = 122,
  [123] = 123,
  [124] = 124,
  [125] = 125,
  [126] = 126,
  [127] = 127,
  [128] = 128,
  [129] = 129,
  [130] = 130,
  [131] = 131,
  [132] = 132,
  [133] = 133,
  [134] = 134,
  [135] = 135,
  [136] = 136,
  [137] = 137,
  [138] = 138,
  [139] = 139,
  [140] = 140,
  [141] = 141,
  [142] = 142,
  [143] = 143,
  [144] = 144,
  [145] = 145,
  [146] = 146,
  [147] = 147,
  [148] = 148,
  [149] = 149,
  [150] = 150,
  [151] = 151,
  [152] = 152,
  [153] = 153,
  [154] = 154,
  [155] = 155,
  [156] = 156,
  [157] = 157,
  [158] = 158,
  [159] = 159,
  [160] = 160,
  [161] = 161,
  [162] = 162,
  [163] = 163,
  [164] = 164,
  [165] = 165,
  [166] = 166,
  [167] = 167,
  [168] = 168,
  [169] = 169,
  [170] = 170,
  [171] = 171,
  [172] = 172,
  [173] = 173,
  [174] = 174,
  [175] = 175,
  [176] = 176,
  [177] = 177,
  [178] = 178,
  [179] = 179,
  [180] = 180,
  [181] = 181,
  [182] = 182,
  [183] = 183,
  [184] = 184,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(94);
      if (lookahead == '!') ADVANCE(139);
      if (lookahead == '"') ADVANCE(202);
      if (lookahead == '#') ADVANCE(87);
      if (lookahead == '$') ADVANCE(105);
      if (lookahead == '&') ADVANCE(141);
      if (lookahead == '(') ADVANCE(102);
      if (lookahead == ')') ADVANCE(104);
      if (lookahead == '*') ADVANCE(135);
      if (lookahead == '+') ADVANCE(134);
      if (lookahead == ',') ADVANCE(98);
      if (lookahead == '-') ADVANCE(130);
      if (lookahead == '.') ADVANCE(101);
      if (lookahead == '/') ADVANCE(136);
      if (lookahead == ';') ADVANCE(95);
      if (lookahead == '<') ADVANCE(147);
      if (lookahead == '=') ADVANCE(96);
      if (lookahead == '>') ADVANCE(144);
      if (lookahead == '[') ADVANCE(97);
      if (lookahead == '\\') ADVANCE(2);
      if (lookahead == ']') ADVANCE(99);
      if (lookahead == '`') ADVANCE(201);
      if (lookahead == 'b') ADVANCE(24);
      if (lookahead == 'c') ADVANCE(33);
      if (lookahead == 'd') ADVANCE(66);
      if (lookahead == 'e') ADVANCE(59);
      if (lookahead == 'f') ADVANCE(53);
      if (lookahead == 'i') ADVANCE(42);
      if (lookahead == 'l') ADVANCE(67);
      if (lookahead == 'm') ADVANCE(68);
      if (lookahead == 'o') ADVANCE(71);
      if (lookahead == 'r') ADVANCE(40);
      if (lookahead == 's') ADVANCE(30);
      if (lookahead == 'v') ADVANCE(39);
      if (lookahead == 'w') ADVANCE(46);
      if (lookahead == '{') ADVANCE(113);
      if (lookahead == '|') ADVANCE(140);
      if (lookahead == '}') ADVANCE(114);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(92)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(199);
      END_STATE();
    case 1:
      if (lookahead == '\n') SKIP(12)
      END_STATE();
    case 2:
      if (lookahead == '\n') SKIP(12)
      if (lookahead == '\r') SKIP(1)
      if (lookahead == 'n' ||
          lookahead == 'r') ADVANCE(208);
      END_STATE();
    case 3:
      if (lookahead == '\n') SKIP(13)
      END_STATE();
    case 4:
      if (lookahead == '\n') SKIP(13)
      if (lookahead == '\r') SKIP(3)
      END_STATE();
    case 5:
      if (lookahead == '\n') SKIP(14)
      END_STATE();
    case 6:
      if (lookahead == '\n') SKIP(14)
      if (lookahead == '\r') SKIP(5)
      END_STATE();
    case 7:
      if (lookahead == '\n') SKIP(18)
      END_STATE();
    case 8:
      if (lookahead == '\n') SKIP(18)
      if (lookahead == '\r') SKIP(7)
      END_STATE();
    case 9:
      if (lookahead == '\n') SKIP(9)
      if (lookahead == '/') ADVANCE(110);
      if (lookahead == '\\') ADVANCE(109);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(111);
      if (lookahead != 0) ADVANCE(112);
      END_STATE();
    case 10:
      if (lookahead == '\n') SKIP(22)
      END_STATE();
    case 11:
      if (lookahead == '\n') SKIP(22)
      if (lookahead == '\r') SKIP(10)
      END_STATE();
    case 12:
      if (lookahead == '!') ADVANCE(139);
      if (lookahead == '"') ADVANCE(202);
      if (lookahead == '#') ADVANCE(87);
      if (lookahead == '$') ADVANCE(105);
      if (lookahead == '&') ADVANCE(141);
      if (lookahead == '(') ADVANCE(102);
      if (lookahead == ')') ADVANCE(104);
      if (lookahead == '*') ADVANCE(135);
      if (lookahead == '+') ADVANCE(134);
      if (lookahead == ',') ADVANCE(98);
      if (lookahead == '-') ADVANCE(130);
      if (lookahead == '.') ADVANCE(101);
      if (lookahead == '/') ADVANCE(136);
      if (lookahead == ';') ADVANCE(95);
      if (lookahead == '<') ADVANCE(147);
      if (lookahead == '=') ADVANCE(96);
      if (lookahead == '>') ADVANCE(144);
      if (lookahead == '[') ADVANCE(97);
      if (lookahead == '\\') ADVANCE(2);
      if (lookahead == ']') ADVANCE(99);
      if (lookahead == '`') ADVANCE(201);
      if (lookahead == 'd') ADVANCE(66);
      if (lookahead == 'e') ADVANCE(59);
      if (lookahead == 'f') ADVANCE(57);
      if (lookahead == 'i') ADVANCE(42);
      if (lookahead == 'l') ADVANCE(67);
      if (lookahead == 'r') ADVANCE(40);
      if (lookahead == 's') ADVANCE(84);
      if (lookahead == 'v') ADVANCE(39);
      if (lookahead == 'w') ADVANCE(46);
      if (lookahead == '{') ADVANCE(113);
      if (lookahead == '|') ADVANCE(140);
      if (lookahead == '}') ADVANCE(114);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(12)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(199);
      END_STATE();
    case 13:
      if (lookahead == '"') ADVANCE(202);
      if (lookahead == '#') ADVANCE(87);
      if (lookahead == '(') ADVANCE(102);
      if (lookahead == '+') ADVANCE(133);
      if (lookahead == '-') ADVANCE(131);
      if (lookahead == '.') ADVANCE(19);
      if (lookahead == '/') ADVANCE(15);
      if (lookahead == '[') ADVANCE(97);
      if (lookahead == '\\') SKIP(4)
      if (lookahead == '`') ADVANCE(201);
      if (lookahead == 'd') ADVANCE(181);
      if (lookahead == 'e') ADVANCE(180);
      if (lookahead == 'f') ADVANCE(177);
      if (lookahead == 'i') ADVANCE(168);
      if (lookahead == 'l') ADVANCE(182);
      if (lookahead == 'r') ADVANCE(167);
      if (lookahead == 's') ADVANCE(188);
      if (lookahead == 'v') ADVANCE(166);
      if (lookahead == 'w') ADVANCE(170);
      if (lookahead == '{') ADVANCE(113);
      if (lookahead == '}') ADVANCE(114);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(13)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(199);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(197);
      END_STATE();
    case 14:
      if (lookahead == '"') ADVANCE(202);
      if (lookahead == '(') ADVANCE(102);
      if (lookahead == ')') ADVANCE(104);
      if (lookahead == '+') ADVANCE(133);
      if (lookahead == '-') ADVANCE(131);
      if (lookahead == '.') ADVANCE(88);
      if (lookahead == '/') ADVANCE(15);
      if (lookahead == '\\') SKIP(6)
      if (lookahead == '`') ADVANCE(201);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(14)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(199);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(197);
      END_STATE();
    case 15:
      if (lookahead == '*') ADVANCE(17);
      if (lookahead == '/') ADVANCE(221);
      END_STATE();
    case 16:
      if (lookahead == '*') ADVANCE(16);
      if (lookahead == '/') ADVANCE(220);
      if (lookahead != 0) ADVANCE(17);
      END_STATE();
    case 17:
      if (lookahead == '*') ADVANCE(16);
      if (lookahead != 0) ADVANCE(17);
      END_STATE();
    case 18:
      if (lookahead == ',') ADVANCE(98);
      if (lookahead == '-') ADVANCE(21);
      if (lookahead == '.') ADVANCE(19);
      if (lookahead == '/') ADVANCE(15);
      if (lookahead == ';') ADVANCE(95);
      if (lookahead == '\\') SKIP(8)
      if (lookahead == '`') ADVANCE(201);
      if (lookahead == 'e') ADVANCE(59);
      if (lookahead == 'f') ADVANCE(57);
      if (lookahead == 'i') ADVANCE(64);
      if (lookahead == 's') ADVANCE(84);
      if (lookahead == 'v') ADVANCE(39);
      if (lookahead == 'w') ADVANCE(46);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(18)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(199);
      END_STATE();
    case 19:
      if (lookahead == '.') ADVANCE(20);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(200);
      END_STATE();
    case 20:
      if (lookahead == '.') ADVANCE(103);
      END_STATE();
    case 21:
      if (lookahead == '.') ADVANCE(88);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(199);
      END_STATE();
    case 22:
      if (lookahead == '/') ADVANCE(15);
      if (lookahead == '\\') SKIP(11)
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(22)
      END_STATE();
    case 23:
      if (lookahead == '/') ADVANCE(15);
      if (lookahead == '\\') SKIP(11)
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(22)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(198);
      END_STATE();
    case 24:
      if (lookahead == 'a') ADVANCE(76);
      END_STATE();
    case 25:
      if (lookahead == 'a') ADVANCE(44);
      if (lookahead == 'o') ADVANCE(29);
      END_STATE();
    case 26:
      if (lookahead == 'a') ADVANCE(60);
      END_STATE();
    case 27:
      if (lookahead == 'a') ADVANCE(55);
      END_STATE();
    case 28:
      if (lookahead == 'a') ADVANCE(54);
      END_STATE();
    case 29:
      if (lookahead == 'a') ADVANCE(81);
      END_STATE();
    case 30:
      if (lookahead == 'c') ADVANCE(27);
      if (lookahead == 'k') ADVANCE(47);
      if (lookahead == 't') ADVANCE(74);
      END_STATE();
    case 31:
      if (lookahead == 'c') ADVANCE(28);
      END_STATE();
    case 32:
      if (lookahead == 'c') ADVANCE(82);
      END_STATE();
    case 33:
      if (lookahead == 'd') ADVANCE(106);
      END_STATE();
    case 34:
      if (lookahead == 'd') ADVANCE(148);
      END_STATE();
    case 35:
      if (lookahead == 'd') ADVANCE(41);
      END_STATE();
    case 36:
      if (lookahead == 'e') ADVANCE(106);
      END_STATE();
    case 37:
      if (lookahead == 'e') ADVANCE(121);
      END_STATE();
    case 38:
      if (lookahead == 'e') ADVANCE(122);
      END_STATE();
    case 39:
      if (lookahead == 'e') ADVANCE(32);
      if (lookahead == 'o') ADVANCE(50);
      END_STATE();
    case 40:
      if (lookahead == 'e') ADVANCE(79);
      END_STATE();
    case 41:
      if (lookahead == 'e') ADVANCE(56);
      END_STATE();
    case 42:
      if (lookahead == 'f') ADVANCE(119);
      if (lookahead == 'n') ADVANCE(78);
      END_STATE();
    case 43:
      if (lookahead == 'g') ADVANCE(156);
      END_STATE();
    case 44:
      if (lookahead == 'g') ADVANCE(75);
      END_STATE();
    case 45:
      if (lookahead == 'g') ADVANCE(47);
      END_STATE();
    case 46:
      if (lookahead == 'h') ADVANCE(51);
      END_STATE();
    case 47:
      if (lookahead == 'i') ADVANCE(61);
      END_STATE();
    case 48:
      if (lookahead == 'i') ADVANCE(45);
      END_STATE();
    case 49:
      if (lookahead == 'i') ADVANCE(65);
      END_STATE();
    case 50:
      if (lookahead == 'i') ADVANCE(34);
      END_STATE();
    case 51:
      if (lookahead == 'i') ADVANCE(58);
      END_STATE();
    case 52:
      if (lookahead == 'i') ADVANCE(80);
      END_STATE();
    case 53:
      if (lookahead == 'l') ADVANCE(25);
      if (lookahead == 'r') ADVANCE(26);
      END_STATE();
    case 54:
      if (lookahead == 'l') ADVANCE(128);
      END_STATE();
    case 55:
      if (lookahead == 'l') ADVANCE(36);
      END_STATE();
    case 56:
      if (lookahead == 'l') ADVANCE(63);
      END_STATE();
    case 57:
      if (lookahead == 'l') ADVANCE(70);
      END_STATE();
    case 58:
      if (lookahead == 'l') ADVANCE(38);
      END_STATE();
    case 59:
      if (lookahead == 'l') ADVANCE(77);
      if (lookahead == 'n') ADVANCE(83);
      END_STATE();
    case 60:
      if (lookahead == 'm') ADVANCE(36);
      END_STATE();
    case 61:
      if (lookahead == 'n') ADVANCE(106);
      END_STATE();
    case 62:
      if (lookahead == 'n') ADVANCE(126);
      END_STATE();
    case 63:
      if (lookahead == 'n') ADVANCE(26);
      END_STATE();
    case 64:
      if (lookahead == 'n') ADVANCE(78);
      END_STATE();
    case 65:
      if (lookahead == 'n') ADVANCE(43);
      END_STATE();
    case 66:
      if (lookahead == 'o') ADVANCE(124);
      END_STATE();
    case 67:
      if (lookahead == 'o') ADVANCE(31);
      END_STATE();
    case 68:
      if (lookahead == 'o') ADVANCE(35);
      END_STATE();
    case 69:
      if (lookahead == 'o') ADVANCE(72);
      END_STATE();
    case 70:
      if (lookahead == 'o') ADVANCE(29);
      END_STATE();
    case 71:
      if (lookahead == 'r') ADVANCE(48);
      END_STATE();
    case 72:
      if (lookahead == 'r') ADVANCE(154);
      END_STATE();
    case 73:
      if (lookahead == 'r') ADVANCE(62);
      END_STATE();
    case 74:
      if (lookahead == 'r') ADVANCE(49);
      END_STATE();
    case 75:
      if (lookahead == 's') ADVANCE(106);
      END_STATE();
    case 76:
      if (lookahead == 's') ADVANCE(36);
      END_STATE();
    case 77:
      if (lookahead == 's') ADVANCE(37);
      END_STATE();
    case 78:
      if (lookahead == 't') ADVANCE(158);
      END_STATE();
    case 79:
      if (lookahead == 't') ADVANCE(85);
      END_STATE();
    case 80:
      if (lookahead == 't') ADVANCE(86);
      END_STATE();
    case 81:
      if (lookahead == 't') ADVANCE(152);
      END_STATE();
    case 82:
      if (lookahead == 't') ADVANCE(69);
      END_STATE();
    case 83:
      if (lookahead == 't') ADVANCE(52);
      END_STATE();
    case 84:
      if (lookahead == 't') ADVANCE(74);
      END_STATE();
    case 85:
      if (lookahead == 'u') ADVANCE(73);
      END_STATE();
    case 86:
      if (lookahead == 'y') ADVANCE(150);
      END_STATE();
    case 87:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(218);
      END_STATE();
    case 88:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(200);
      END_STATE();
    case 89:
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(219);
      END_STATE();
    case 90:
      if (eof) ADVANCE(94);
      if (lookahead == '\n') SKIP(93)
      END_STATE();
    case 91:
      if (eof) ADVANCE(94);
      if (lookahead == '\n') SKIP(93)
      if (lookahead == '\r') SKIP(90)
      END_STATE();
    case 92:
      if (eof) ADVANCE(94);
      if (lookahead == '!') ADVANCE(139);
      if (lookahead == '"') ADVANCE(202);
      if (lookahead == '#') ADVANCE(87);
      if (lookahead == '$') ADVANCE(105);
      if (lookahead == '&') ADVANCE(141);
      if (lookahead == '(') ADVANCE(102);
      if (lookahead == ')') ADVANCE(104);
      if (lookahead == '*') ADVANCE(135);
      if (lookahead == '+') ADVANCE(134);
      if (lookahead == ',') ADVANCE(98);
      if (lookahead == '-') ADVANCE(130);
      if (lookahead == '.') ADVANCE(101);
      if (lookahead == '/') ADVANCE(136);
      if (lookahead == ';') ADVANCE(95);
      if (lookahead == '<') ADVANCE(147);
      if (lookahead == '=') ADVANCE(96);
      if (lookahead == '>') ADVANCE(144);
      if (lookahead == '[') ADVANCE(97);
      if (lookahead == '\\') ADVANCE(2);
      if (lookahead == ']') ADVANCE(99);
      if (lookahead == '`') ADVANCE(201);
      if (lookahead == 'd') ADVANCE(66);
      if (lookahead == 'e') ADVANCE(59);
      if (lookahead == 'f') ADVANCE(57);
      if (lookahead == 'i') ADVANCE(42);
      if (lookahead == 'l') ADVANCE(67);
      if (lookahead == 'r') ADVANCE(40);
      if (lookahead == 's') ADVANCE(84);
      if (lookahead == 'v') ADVANCE(39);
      if (lookahead == 'w') ADVANCE(46);
      if (lookahead == '{') ADVANCE(113);
      if (lookahead == '|') ADVANCE(140);
      if (lookahead == '}') ADVANCE(114);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(92)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(199);
      END_STATE();
    case 93:
      if (eof) ADVANCE(94);
      if (lookahead == '!') ADVANCE(139);
      if (lookahead == '$') ADVANCE(105);
      if (lookahead == '&') ADVANCE(141);
      if (lookahead == '(') ADVANCE(102);
      if (lookahead == ')') ADVANCE(104);
      if (lookahead == '*') ADVANCE(135);
      if (lookahead == '+') ADVANCE(134);
      if (lookahead == ',') ADVANCE(98);
      if (lookahead == '-') ADVANCE(132);
      if (lookahead == '.') ADVANCE(100);
      if (lookahead == '/') ADVANCE(136);
      if (lookahead == ';') ADVANCE(95);
      if (lookahead == '<') ADVANCE(147);
      if (lookahead == '=') ADVANCE(96);
      if (lookahead == '>') ADVANCE(144);
      if (lookahead == '\\') SKIP(91)
      if (lookahead == 'e') ADVANCE(59);
      if (lookahead == 'f') ADVANCE(57);
      if (lookahead == 'i') ADVANCE(64);
      if (lookahead == 's') ADVANCE(84);
      if (lookahead == 'v') ADVANCE(39);
      if (lookahead == 'w') ADVANCE(46);
      if (lookahead == '|') ADVANCE(140);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(93)
      END_STATE();
    case 94:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 95:
      ACCEPT_TOKEN(anon_sym_SEMI);
      END_STATE();
    case 96:
      ACCEPT_TOKEN(anon_sym_EQ);
      if (lookahead == '=') ADVANCE(142);
      END_STATE();
    case 97:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 98:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 99:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 100:
      ACCEPT_TOKEN(anon_sym_DOT);
      END_STATE();
    case 101:
      ACCEPT_TOKEN(anon_sym_DOT);
      if (lookahead == '.') ADVANCE(20);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(200);
      END_STATE();
    case 102:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 103:
      ACCEPT_TOKEN(anon_sym_DOT_DOT_DOT);
      END_STATE();
    case 104:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 105:
      ACCEPT_TOKEN(anon_sym_DOLLAR);
      END_STATE();
    case 106:
      ACCEPT_TOKEN(aux_sym_modelgen_pragma_token1);
      END_STATE();
    case 107:
      ACCEPT_TOKEN(aux_sym_modelgen_pragma_token2);
      if (lookahead == '\n') ADVANCE(17);
      if (lookahead == '*') ADVANCE(107);
      if (lookahead == '/') ADVANCE(112);
      if (lookahead != 0) ADVANCE(108);
      END_STATE();
    case 108:
      ACCEPT_TOKEN(aux_sym_modelgen_pragma_token2);
      if (lookahead == '\n') ADVANCE(17);
      if (lookahead == '*') ADVANCE(107);
      if (lookahead != 0) ADVANCE(108);
      END_STATE();
    case 109:
      ACCEPT_TOKEN(aux_sym_modelgen_pragma_token2);
      if (lookahead == '\r') ADVANCE(112);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(112);
      END_STATE();
    case 110:
      ACCEPT_TOKEN(aux_sym_modelgen_pragma_token2);
      if (lookahead == '*') ADVANCE(108);
      if (lookahead == '/') ADVANCE(112);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(112);
      END_STATE();
    case 111:
      ACCEPT_TOKEN(aux_sym_modelgen_pragma_token2);
      if (lookahead == '/') ADVANCE(110);
      if (lookahead == '\\') ADVANCE(109);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(111);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(112);
      END_STATE();
    case 112:
      ACCEPT_TOKEN(aux_sym_modelgen_pragma_token2);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(112);
      END_STATE();
    case 113:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 114:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 115:
      ACCEPT_TOKEN(anon_sym_PLUS_EQ);
      END_STATE();
    case 116:
      ACCEPT_TOKEN(anon_sym_DASH_EQ);
      END_STATE();
    case 117:
      ACCEPT_TOKEN(anon_sym_STAR_EQ);
      END_STATE();
    case 118:
      ACCEPT_TOKEN(anon_sym_SLASH_EQ);
      END_STATE();
    case 119:
      ACCEPT_TOKEN(anon_sym_if);
      END_STATE();
    case 120:
      ACCEPT_TOKEN(anon_sym_if);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(197);
      END_STATE();
    case 121:
      ACCEPT_TOKEN(anon_sym_else);
      END_STATE();
    case 122:
      ACCEPT_TOKEN(anon_sym_while);
      END_STATE();
    case 123:
      ACCEPT_TOKEN(anon_sym_while);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(197);
      END_STATE();
    case 124:
      ACCEPT_TOKEN(anon_sym_do);
      END_STATE();
    case 125:
      ACCEPT_TOKEN(anon_sym_do);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(197);
      END_STATE();
    case 126:
      ACCEPT_TOKEN(anon_sym_return);
      END_STATE();
    case 127:
      ACCEPT_TOKEN(anon_sym_return);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(197);
      END_STATE();
    case 128:
      ACCEPT_TOKEN(anon_sym_local);
      END_STATE();
    case 129:
      ACCEPT_TOKEN(anon_sym_local);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(197);
      END_STATE();
    case 130:
      ACCEPT_TOKEN(anon_sym_DASH);
      if (lookahead == '.') ADVANCE(88);
      if (lookahead == '=') ADVANCE(116);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(199);
      END_STATE();
    case 131:
      ACCEPT_TOKEN(anon_sym_DASH);
      if (lookahead == '.') ADVANCE(88);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(199);
      END_STATE();
    case 132:
      ACCEPT_TOKEN(anon_sym_DASH);
      if (lookahead == '=') ADVANCE(116);
      END_STATE();
    case 133:
      ACCEPT_TOKEN(anon_sym_PLUS);
      END_STATE();
    case 134:
      ACCEPT_TOKEN(anon_sym_PLUS);
      if (lookahead == '=') ADVANCE(115);
      END_STATE();
    case 135:
      ACCEPT_TOKEN(anon_sym_STAR);
      if (lookahead == '=') ADVANCE(117);
      END_STATE();
    case 136:
      ACCEPT_TOKEN(anon_sym_SLASH);
      if (lookahead == '*') ADVANCE(17);
      if (lookahead == '/') ADVANCE(221);
      if (lookahead == '=') ADVANCE(118);
      END_STATE();
    case 137:
      ACCEPT_TOKEN(anon_sym_PIPE_PIPE);
      END_STATE();
    case 138:
      ACCEPT_TOKEN(anon_sym_AMP_AMP);
      END_STATE();
    case 139:
      ACCEPT_TOKEN(anon_sym_BANG);
      if (lookahead == '=') ADVANCE(143);
      END_STATE();
    case 140:
      ACCEPT_TOKEN(anon_sym_PIPE);
      if (lookahead == '|') ADVANCE(137);
      END_STATE();
    case 141:
      ACCEPT_TOKEN(anon_sym_AMP);
      if (lookahead == '&') ADVANCE(138);
      END_STATE();
    case 142:
      ACCEPT_TOKEN(anon_sym_EQ_EQ);
      END_STATE();
    case 143:
      ACCEPT_TOKEN(anon_sym_BANG_EQ);
      END_STATE();
    case 144:
      ACCEPT_TOKEN(anon_sym_GT);
      if (lookahead == '=') ADVANCE(145);
      END_STATE();
    case 145:
      ACCEPT_TOKEN(anon_sym_GT_EQ);
      END_STATE();
    case 146:
      ACCEPT_TOKEN(anon_sym_LT_EQ);
      END_STATE();
    case 147:
      ACCEPT_TOKEN(anon_sym_LT);
      if (lookahead == '=') ADVANCE(146);
      END_STATE();
    case 148:
      ACCEPT_TOKEN(anon_sym_void);
      END_STATE();
    case 149:
      ACCEPT_TOKEN(anon_sym_void);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(197);
      END_STATE();
    case 150:
      ACCEPT_TOKEN(anon_sym_entity);
      END_STATE();
    case 151:
      ACCEPT_TOKEN(anon_sym_entity);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(197);
      END_STATE();
    case 152:
      ACCEPT_TOKEN(anon_sym_float);
      END_STATE();
    case 153:
      ACCEPT_TOKEN(anon_sym_float);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(197);
      END_STATE();
    case 154:
      ACCEPT_TOKEN(anon_sym_vector);
      END_STATE();
    case 155:
      ACCEPT_TOKEN(anon_sym_vector);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(197);
      END_STATE();
    case 156:
      ACCEPT_TOKEN(anon_sym_string);
      END_STATE();
    case 157:
      ACCEPT_TOKEN(anon_sym_string);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(197);
      END_STATE();
    case 158:
      ACCEPT_TOKEN(anon_sym_int);
      END_STATE();
    case 159:
      ACCEPT_TOKEN(anon_sym_int);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(197);
      END_STATE();
    case 160:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(175);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(197);
      END_STATE();
    case 161:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(192);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(197);
      END_STATE();
    case 162:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'c') ADVANCE(160);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(197);
      END_STATE();
    case 163:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'c') ADVANCE(194);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(197);
      END_STATE();
    case 164:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'd') ADVANCE(149);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(197);
      END_STATE();
    case 165:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(123);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(197);
      END_STATE();
    case 166:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(163);
      if (lookahead == 'o') ADVANCE(171);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(197);
      END_STATE();
    case 167:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(190);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(197);
      END_STATE();
    case 168:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'f') ADVANCE(120);
      if (lookahead == 'n') ADVANCE(189);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(197);
      END_STATE();
    case 169:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'g') ADVANCE(157);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(197);
      END_STATE();
    case 170:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'h') ADVANCE(173);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(197);
      END_STATE();
    case 171:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(164);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(197);
      END_STATE();
    case 172:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(178);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(197);
      END_STATE();
    case 173:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(176);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(197);
      END_STATE();
    case 174:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(191);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(197);
      END_STATE();
    case 175:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(129);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(197);
      END_STATE();
    case 176:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(165);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(197);
      END_STATE();
    case 177:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(183);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(197);
      END_STATE();
    case 178:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(169);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(197);
      END_STATE();
    case 179:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(127);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(197);
      END_STATE();
    case 180:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(193);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(197);
      END_STATE();
    case 181:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(125);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(197);
      END_STATE();
    case 182:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(162);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(197);
      END_STATE();
    case 183:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(161);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(197);
      END_STATE();
    case 184:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(185);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(197);
      END_STATE();
    case 185:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(155);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(197);
      END_STATE();
    case 186:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(179);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(197);
      END_STATE();
    case 187:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(172);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(197);
      END_STATE();
    case 188:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(187);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(197);
      END_STATE();
    case 189:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(159);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(197);
      END_STATE();
    case 190:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(195);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(197);
      END_STATE();
    case 191:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(196);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(197);
      END_STATE();
    case 192:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(153);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(197);
      END_STATE();
    case 193:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(174);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(197);
      END_STATE();
    case 194:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(184);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(197);
      END_STATE();
    case 195:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'u') ADVANCE(186);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(197);
      END_STATE();
    case 196:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'y') ADVANCE(151);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(197);
      END_STATE();
    case 197:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(197);
      END_STATE();
    case 198:
      ACCEPT_TOKEN(aux_sym_frame_identifier_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(198);
      END_STATE();
    case 199:
      ACCEPT_TOKEN(sym__integer_literal);
      if (lookahead == '.') ADVANCE(88);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(199);
      END_STATE();
    case 200:
      ACCEPT_TOKEN(sym__float_literal);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(200);
      END_STATE();
    case 201:
      ACCEPT_TOKEN(anon_sym_BQUOTE);
      END_STATE();
    case 202:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 203:
      ACCEPT_TOKEN(aux_sym_string_literal_token1);
      if (lookahead == '*') ADVANCE(205);
      if (lookahead == '/') ADVANCE(207);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(207);
      END_STATE();
    case 204:
      ACCEPT_TOKEN(aux_sym_string_literal_token1);
      if (lookahead == '*') ADVANCE(204);
      if (lookahead == '/') ADVANCE(207);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(205);
      END_STATE();
    case 205:
      ACCEPT_TOKEN(aux_sym_string_literal_token1);
      if (lookahead == '*') ADVANCE(204);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(205);
      END_STATE();
    case 206:
      ACCEPT_TOKEN(aux_sym_string_literal_token1);
      if (lookahead == '/') ADVANCE(203);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(206);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(207);
      END_STATE();
    case 207:
      ACCEPT_TOKEN(aux_sym_string_literal_token1);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(207);
      END_STATE();
    case 208:
      ACCEPT_TOKEN(aux_sym_string_literal_token2);
      END_STATE();
    case 209:
      ACCEPT_TOKEN(aux_sym_string_literal_token3);
      if (lookahead == '\n') ADVANCE(216);
      if (lookahead == '\r') ADVANCE(211);
      if (lookahead == 'n' ||
          lookahead == 'r') ADVANCE(208);
      if (lookahead != 0 &&
          lookahead != '"') ADVANCE(217);
      END_STATE();
    case 210:
      ACCEPT_TOKEN(aux_sym_string_literal_token3);
      if (lookahead == '\n') ADVANCE(216);
      if (lookahead == '/') ADVANCE(203);
      if (lookahead == '\\') ADVANCE(209);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(206);
      if (lookahead != 0 &&
          lookahead != '"') ADVANCE(207);
      END_STATE();
    case 211:
      ACCEPT_TOKEN(aux_sym_string_literal_token3);
      if (lookahead == '\n') ADVANCE(216);
      if (lookahead != 0 &&
          lookahead != '"') ADVANCE(217);
      END_STATE();
    case 212:
      ACCEPT_TOKEN(aux_sym_string_literal_token3);
      if (lookahead == '\n') ADVANCE(217);
      if (lookahead == '"') ADVANCE(221);
      if (lookahead != 0) ADVANCE(212);
      END_STATE();
    case 213:
      ACCEPT_TOKEN(aux_sym_string_literal_token3);
      if (lookahead == '"') ADVANCE(17);
      if (lookahead == '*') ADVANCE(213);
      if (lookahead == '/') ADVANCE(217);
      if (lookahead != 0) ADVANCE(214);
      END_STATE();
    case 214:
      ACCEPT_TOKEN(aux_sym_string_literal_token3);
      if (lookahead == '"') ADVANCE(17);
      if (lookahead == '*') ADVANCE(213);
      if (lookahead != 0) ADVANCE(214);
      END_STATE();
    case 215:
      ACCEPT_TOKEN(aux_sym_string_literal_token3);
      if (lookahead == '*') ADVANCE(214);
      if (lookahead == '/') ADVANCE(212);
      if (lookahead != 0 &&
          lookahead != '"') ADVANCE(217);
      END_STATE();
    case 216:
      ACCEPT_TOKEN(aux_sym_string_literal_token3);
      if (lookahead == '/') ADVANCE(215);
      if (lookahead == '\\') ADVANCE(209);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(216);
      if (lookahead != 0 &&
          lookahead != '"') ADVANCE(217);
      END_STATE();
    case 217:
      ACCEPT_TOKEN(aux_sym_string_literal_token3);
      if (lookahead != 0 &&
          lookahead != '"') ADVANCE(217);
      END_STATE();
    case 218:
      ACCEPT_TOKEN(sym_builtin_literal);
      if (lookahead == ':') ADVANCE(89);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(218);
      END_STATE();
    case 219:
      ACCEPT_TOKEN(sym_builtin_literal);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(219);
      END_STATE();
    case 220:
      ACCEPT_TOKEN(sym_comment);
      END_STATE();
    case 221:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(221);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 93},
  [2] = {.lex_state = 13},
  [3] = {.lex_state = 13},
  [4] = {.lex_state = 13},
  [5] = {.lex_state = 13},
  [6] = {.lex_state = 13},
  [7] = {.lex_state = 13},
  [8] = {.lex_state = 13},
  [9] = {.lex_state = 13},
  [10] = {.lex_state = 13},
  [11] = {.lex_state = 93},
  [12] = {.lex_state = 93},
  [13] = {.lex_state = 93},
  [14] = {.lex_state = 93},
  [15] = {.lex_state = 93},
  [16] = {.lex_state = 93},
  [17] = {.lex_state = 93},
  [18] = {.lex_state = 93},
  [19] = {.lex_state = 93},
  [20] = {.lex_state = 93},
  [21] = {.lex_state = 93},
  [22] = {.lex_state = 93},
  [23] = {.lex_state = 93},
  [24] = {.lex_state = 93},
  [25] = {.lex_state = 93},
  [26] = {.lex_state = 93},
  [27] = {.lex_state = 93},
  [28] = {.lex_state = 93},
  [29] = {.lex_state = 93},
  [30] = {.lex_state = 93},
  [31] = {.lex_state = 93},
  [32] = {.lex_state = 13},
  [33] = {.lex_state = 14},
  [34] = {.lex_state = 93},
  [35] = {.lex_state = 93},
  [36] = {.lex_state = 93},
  [37] = {.lex_state = 93},
  [38] = {.lex_state = 14},
  [39] = {.lex_state = 14},
  [40] = {.lex_state = 14},
  [41] = {.lex_state = 14},
  [42] = {.lex_state = 93},
  [43] = {.lex_state = 93},
  [44] = {.lex_state = 14},
  [45] = {.lex_state = 14},
  [46] = {.lex_state = 14},
  [47] = {.lex_state = 14},
  [48] = {.lex_state = 14},
  [49] = {.lex_state = 14},
  [50] = {.lex_state = 14},
  [51] = {.lex_state = 14},
  [52] = {.lex_state = 14},
  [53] = {.lex_state = 93},
  [54] = {.lex_state = 14},
  [55] = {.lex_state = 14},
  [56] = {.lex_state = 14},
  [57] = {.lex_state = 93},
  [58] = {.lex_state = 93},
  [59] = {.lex_state = 93},
  [60] = {.lex_state = 93},
  [61] = {.lex_state = 0},
  [62] = {.lex_state = 93},
  [63] = {.lex_state = 93},
  [64] = {.lex_state = 93},
  [65] = {.lex_state = 93},
  [66] = {.lex_state = 93},
  [67] = {.lex_state = 93},
  [68] = {.lex_state = 93},
  [69] = {.lex_state = 93},
  [70] = {.lex_state = 93},
  [71] = {.lex_state = 93},
  [72] = {.lex_state = 18},
  [73] = {.lex_state = 93},
  [74] = {.lex_state = 93},
  [75] = {.lex_state = 18},
  [76] = {.lex_state = 93},
  [77] = {.lex_state = 13},
  [78] = {.lex_state = 13},
  [79] = {.lex_state = 13},
  [80] = {.lex_state = 0},
  [81] = {.lex_state = 13},
  [82] = {.lex_state = 13},
  [83] = {.lex_state = 13},
  [84] = {.lex_state = 13},
  [85] = {.lex_state = 13},
  [86] = {.lex_state = 0},
  [87] = {.lex_state = 0},
  [88] = {.lex_state = 18},
  [89] = {.lex_state = 0},
  [90] = {.lex_state = 0},
  [91] = {.lex_state = 0},
  [92] = {.lex_state = 0},
  [93] = {.lex_state = 0},
  [94] = {.lex_state = 0},
  [95] = {.lex_state = 0},
  [96] = {.lex_state = 0},
  [97] = {.lex_state = 0},
  [98] = {.lex_state = 0},
  [99] = {.lex_state = 0},
  [100] = {.lex_state = 0},
  [101] = {.lex_state = 0},
  [102] = {.lex_state = 0},
  [103] = {.lex_state = 0},
  [104] = {.lex_state = 0},
  [105] = {.lex_state = 0},
  [106] = {.lex_state = 0},
  [107] = {.lex_state = 210},
  [108] = {.lex_state = 210},
  [109] = {.lex_state = 0},
  [110] = {.lex_state = 0},
  [111] = {.lex_state = 210},
  [112] = {.lex_state = 0},
  [113] = {.lex_state = 0},
  [114] = {.lex_state = 0},
  [115] = {.lex_state = 0},
  [116] = {.lex_state = 0},
  [117] = {.lex_state = 0},
  [118] = {.lex_state = 0},
  [119] = {.lex_state = 0},
  [120] = {.lex_state = 0},
  [121] = {.lex_state = 0},
  [122] = {.lex_state = 0},
  [123] = {.lex_state = 0},
  [124] = {.lex_state = 13},
  [125] = {.lex_state = 0},
  [126] = {.lex_state = 13},
  [127] = {.lex_state = 0},
  [128] = {.lex_state = 14},
  [129] = {.lex_state = 0},
  [130] = {.lex_state = 0},
  [131] = {.lex_state = 0},
  [132] = {.lex_state = 0},
  [133] = {.lex_state = 13},
  [134] = {.lex_state = 0},
  [135] = {.lex_state = 0},
  [136] = {.lex_state = 0},
  [137] = {.lex_state = 0},
  [138] = {.lex_state = 14},
  [139] = {.lex_state = 0},
  [140] = {.lex_state = 0},
  [141] = {.lex_state = 14},
  [142] = {.lex_state = 14},
  [143] = {.lex_state = 13},
  [144] = {.lex_state = 14},
  [145] = {.lex_state = 14},
  [146] = {.lex_state = 0},
  [147] = {.lex_state = 14},
  [148] = {.lex_state = 14},
  [149] = {.lex_state = 0},
  [150] = {.lex_state = 14},
  [151] = {.lex_state = 9},
  [152] = {.lex_state = 14},
  [153] = {.lex_state = 14},
  [154] = {.lex_state = 14},
  [155] = {.lex_state = 14},
  [156] = {.lex_state = 14},
  [157] = {.lex_state = 0},
  [158] = {.lex_state = 0},
  [159] = {.lex_state = 0},
  [160] = {.lex_state = 14},
  [161] = {.lex_state = 0},
  [162] = {.lex_state = 14},
  [163] = {.lex_state = 0},
  [164] = {.lex_state = 0},
  [165] = {.lex_state = 0},
  [166] = {.lex_state = 14},
  [167] = {.lex_state = 14},
  [168] = {.lex_state = 14},
  [169] = {.lex_state = 0},
  [170] = {.lex_state = 14},
  [171] = {.lex_state = 0},
  [172] = {.lex_state = 0},
  [173] = {.lex_state = 0},
  [174] = {.lex_state = 0},
  [175] = {.lex_state = 0},
  [176] = {.lex_state = 23},
  [177] = {.lex_state = 14},
  [178] = {.lex_state = 0},
  [179] = {.lex_state = 14},
  [180] = {.lex_state = 0},
  [181] = {.lex_state = 0},
  [182] = {.lex_state = 0},
  [183] = {.lex_state = 0},
  [184] = {.lex_state = 0},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [anon_sym_SEMI] = ACTIONS(1),
    [anon_sym_EQ] = ACTIONS(1),
    [anon_sym_LBRACK] = ACTIONS(1),
    [anon_sym_COMMA] = ACTIONS(1),
    [anon_sym_RBRACK] = ACTIONS(1),
    [anon_sym_DOT] = ACTIONS(1),
    [anon_sym_LPAREN] = ACTIONS(1),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(1),
    [anon_sym_RPAREN] = ACTIONS(1),
    [anon_sym_DOLLAR] = ACTIONS(1),
    [aux_sym_modelgen_pragma_token1] = ACTIONS(1),
    [anon_sym_LBRACE] = ACTIONS(1),
    [anon_sym_RBRACE] = ACTIONS(1),
    [anon_sym_PLUS_EQ] = ACTIONS(1),
    [anon_sym_DASH_EQ] = ACTIONS(1),
    [anon_sym_STAR_EQ] = ACTIONS(1),
    [anon_sym_SLASH_EQ] = ACTIONS(1),
    [anon_sym_if] = ACTIONS(1),
    [anon_sym_else] = ACTIONS(1),
    [anon_sym_while] = ACTIONS(1),
    [anon_sym_do] = ACTIONS(1),
    [anon_sym_return] = ACTIONS(1),
    [anon_sym_local] = ACTIONS(1),
    [anon_sym_DASH] = ACTIONS(1),
    [anon_sym_PLUS] = ACTIONS(1),
    [anon_sym_STAR] = ACTIONS(1),
    [anon_sym_SLASH] = ACTIONS(1),
    [anon_sym_PIPE_PIPE] = ACTIONS(1),
    [anon_sym_AMP_AMP] = ACTIONS(1),
    [anon_sym_BANG] = ACTIONS(1),
    [anon_sym_PIPE] = ACTIONS(1),
    [anon_sym_AMP] = ACTIONS(1),
    [anon_sym_EQ_EQ] = ACTIONS(1),
    [anon_sym_BANG_EQ] = ACTIONS(1),
    [anon_sym_GT] = ACTIONS(1),
    [anon_sym_GT_EQ] = ACTIONS(1),
    [anon_sym_LT_EQ] = ACTIONS(1),
    [anon_sym_LT] = ACTIONS(1),
    [anon_sym_void] = ACTIONS(1),
    [anon_sym_entity] = ACTIONS(1),
    [anon_sym_float] = ACTIONS(1),
    [anon_sym_vector] = ACTIONS(1),
    [anon_sym_string] = ACTIONS(1),
    [anon_sym_int] = ACTIONS(1),
    [sym__integer_literal] = ACTIONS(1),
    [sym__float_literal] = ACTIONS(1),
    [anon_sym_BQUOTE] = ACTIONS(1),
    [anon_sym_DQUOTE] = ACTIONS(1),
    [aux_sym_string_literal_token2] = ACTIONS(1),
    [sym_builtin_literal] = ACTIONS(1),
    [sym_comment] = ACTIONS(3),
  },
  [1] = {
    [sym_source_file] = STATE(169),
    [sym__definition] = STATE(42),
    [sym_function_declaration] = STATE(42),
    [sym_function_definition] = STATE(42),
    [sym_constant_definition] = STATE(42),
    [sym_variable_definition] = STATE(42),
    [sym_field_definition] = STATE(42),
    [sym_modelgen_pragma] = STATE(42),
    [sym_simple_type] = STATE(128),
    [aux_sym_source_file_repeat1] = STATE(42),
    [ts_builtin_sym_end] = ACTIONS(5),
    [anon_sym_DOT] = ACTIONS(7),
    [anon_sym_DOLLAR] = ACTIONS(9),
    [anon_sym_void] = ACTIONS(11),
    [anon_sym_entity] = ACTIONS(11),
    [anon_sym_float] = ACTIONS(11),
    [anon_sym_vector] = ACTIONS(11),
    [anon_sym_string] = ACTIONS(11),
    [anon_sym_int] = ACTIONS(11),
    [sym_comment] = ACTIONS(3),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 22,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(13), 1,
      anon_sym_LBRACK,
    ACTIONS(15), 1,
      anon_sym_LPAREN,
    ACTIONS(17), 1,
      anon_sym_LBRACE,
    ACTIONS(19), 1,
      anon_sym_if,
    ACTIONS(21), 1,
      anon_sym_while,
    ACTIONS(23), 1,
      anon_sym_do,
    ACTIONS(25), 1,
      anon_sym_return,
    ACTIONS(27), 1,
      anon_sym_local,
    ACTIONS(29), 1,
      anon_sym_DASH,
    ACTIONS(31), 1,
      anon_sym_PLUS,
    ACTIONS(35), 1,
      sym_identifier,
    ACTIONS(37), 1,
      sym__integer_literal,
    ACTIONS(39), 1,
      sym__float_literal,
    ACTIONS(41), 1,
      anon_sym_BQUOTE,
    ACTIONS(43), 1,
      anon_sym_DQUOTE,
    ACTIONS(45), 1,
      sym_builtin_literal,
    STATE(13), 1,
      sym_field_expression,
    STATE(167), 1,
      sym_simple_type,
    ACTIONS(33), 6,
      anon_sym_void,
      anon_sym_entity,
      anon_sym_float,
      anon_sym_vector,
      anon_sym_string,
      anon_sym_int,
    STATE(35), 9,
      sym__expression,
      sym_unary_expression,
      sym_binary_expression,
      sym_funcall_expression,
      sym_parenthesized_expression,
      sym__literal,
      sym_numeric_literal,
      sym_vector_literal,
      sym_string_literal,
    STATE(165), 10,
      sym__statement,
      sym_compound_statement,
      sym__simple_statement,
      sym_assignment_statement,
      sym_if_statement,
      sym_while_statement,
      sym_do_while_statement,
      sym_return_statement,
      sym_variable_definition_statement,
      sym__expression_statement,
  [89] = 21,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(15), 1,
      anon_sym_LPAREN,
    ACTIONS(17), 1,
      anon_sym_LBRACE,
    ACTIONS(19), 1,
      anon_sym_if,
    ACTIONS(21), 1,
      anon_sym_while,
    ACTIONS(23), 1,
      anon_sym_do,
    ACTIONS(25), 1,
      anon_sym_return,
    ACTIONS(27), 1,
      anon_sym_local,
    ACTIONS(29), 1,
      anon_sym_DASH,
    ACTIONS(31), 1,
      anon_sym_PLUS,
    ACTIONS(35), 1,
      sym_identifier,
    ACTIONS(37), 1,
      sym__integer_literal,
    ACTIONS(39), 1,
      sym__float_literal,
    ACTIONS(41), 1,
      anon_sym_BQUOTE,
    ACTIONS(43), 1,
      anon_sym_DQUOTE,
    ACTIONS(47), 1,
      sym_builtin_literal,
    STATE(13), 1,
      sym_field_expression,
    STATE(167), 1,
      sym_simple_type,
    ACTIONS(33), 6,
      anon_sym_void,
      anon_sym_entity,
      anon_sym_float,
      anon_sym_vector,
      anon_sym_string,
      anon_sym_int,
    STATE(35), 9,
      sym__expression,
      sym_unary_expression,
      sym_binary_expression,
      sym_funcall_expression,
      sym_parenthesized_expression,
      sym__literal,
      sym_numeric_literal,
      sym_vector_literal,
      sym_string_literal,
    STATE(159), 10,
      sym__statement,
      sym_compound_statement,
      sym__simple_statement,
      sym_assignment_statement,
      sym_if_statement,
      sym_while_statement,
      sym_do_while_statement,
      sym_return_statement,
      sym_variable_definition_statement,
      sym__expression_statement,
  [175] = 20,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(15), 1,
      anon_sym_LPAREN,
    ACTIONS(17), 1,
      anon_sym_LBRACE,
    ACTIONS(19), 1,
      anon_sym_if,
    ACTIONS(21), 1,
      anon_sym_while,
    ACTIONS(23), 1,
      anon_sym_do,
    ACTIONS(25), 1,
      anon_sym_return,
    ACTIONS(27), 1,
      anon_sym_local,
    ACTIONS(29), 1,
      anon_sym_DASH,
    ACTIONS(31), 1,
      anon_sym_PLUS,
    ACTIONS(35), 1,
      sym_identifier,
    ACTIONS(37), 1,
      sym__integer_literal,
    ACTIONS(39), 1,
      sym__float_literal,
    ACTIONS(41), 1,
      anon_sym_BQUOTE,
    ACTIONS(43), 1,
      anon_sym_DQUOTE,
    STATE(13), 1,
      sym_field_expression,
    STATE(167), 1,
      sym_simple_type,
    ACTIONS(33), 6,
      anon_sym_void,
      anon_sym_entity,
      anon_sym_float,
      anon_sym_vector,
      anon_sym_string,
      anon_sym_int,
    STATE(35), 9,
      sym__expression,
      sym_unary_expression,
      sym_binary_expression,
      sym_funcall_expression,
      sym_parenthesized_expression,
      sym__literal,
      sym_numeric_literal,
      sym_vector_literal,
      sym_string_literal,
    STATE(123), 10,
      sym__statement,
      sym_compound_statement,
      sym__simple_statement,
      sym_assignment_statement,
      sym_if_statement,
      sym_while_statement,
      sym_do_while_statement,
      sym_return_statement,
      sym_variable_definition_statement,
      sym__expression_statement,
  [258] = 20,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(15), 1,
      anon_sym_LPAREN,
    ACTIONS(17), 1,
      anon_sym_LBRACE,
    ACTIONS(19), 1,
      anon_sym_if,
    ACTIONS(21), 1,
      anon_sym_while,
    ACTIONS(23), 1,
      anon_sym_do,
    ACTIONS(25), 1,
      anon_sym_return,
    ACTIONS(27), 1,
      anon_sym_local,
    ACTIONS(29), 1,
      anon_sym_DASH,
    ACTIONS(31), 1,
      anon_sym_PLUS,
    ACTIONS(35), 1,
      sym_identifier,
    ACTIONS(37), 1,
      sym__integer_literal,
    ACTIONS(39), 1,
      sym__float_literal,
    ACTIONS(41), 1,
      anon_sym_BQUOTE,
    ACTIONS(43), 1,
      anon_sym_DQUOTE,
    STATE(13), 1,
      sym_field_expression,
    STATE(167), 1,
      sym_simple_type,
    ACTIONS(33), 6,
      anon_sym_void,
      anon_sym_entity,
      anon_sym_float,
      anon_sym_vector,
      anon_sym_string,
      anon_sym_int,
    STATE(35), 9,
      sym__expression,
      sym_unary_expression,
      sym_binary_expression,
      sym_funcall_expression,
      sym_parenthesized_expression,
      sym__literal,
      sym_numeric_literal,
      sym_vector_literal,
      sym_string_literal,
    STATE(120), 10,
      sym__statement,
      sym_compound_statement,
      sym__simple_statement,
      sym_assignment_statement,
      sym_if_statement,
      sym_while_statement,
      sym_do_while_statement,
      sym_return_statement,
      sym_variable_definition_statement,
      sym__expression_statement,
  [341] = 20,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(15), 1,
      anon_sym_LPAREN,
    ACTIONS(17), 1,
      anon_sym_LBRACE,
    ACTIONS(19), 1,
      anon_sym_if,
    ACTIONS(21), 1,
      anon_sym_while,
    ACTIONS(23), 1,
      anon_sym_do,
    ACTIONS(25), 1,
      anon_sym_return,
    ACTIONS(27), 1,
      anon_sym_local,
    ACTIONS(29), 1,
      anon_sym_DASH,
    ACTIONS(31), 1,
      anon_sym_PLUS,
    ACTIONS(35), 1,
      sym_identifier,
    ACTIONS(37), 1,
      sym__integer_literal,
    ACTIONS(39), 1,
      sym__float_literal,
    ACTIONS(41), 1,
      anon_sym_BQUOTE,
    ACTIONS(43), 1,
      anon_sym_DQUOTE,
    STATE(13), 1,
      sym_field_expression,
    STATE(167), 1,
      sym_simple_type,
    ACTIONS(33), 6,
      anon_sym_void,
      anon_sym_entity,
      anon_sym_float,
      anon_sym_vector,
      anon_sym_string,
      anon_sym_int,
    STATE(35), 9,
      sym__expression,
      sym_unary_expression,
      sym_binary_expression,
      sym_funcall_expression,
      sym_parenthesized_expression,
      sym__literal,
      sym_numeric_literal,
      sym_vector_literal,
      sym_string_literal,
    STATE(172), 10,
      sym__statement,
      sym_compound_statement,
      sym__simple_statement,
      sym_assignment_statement,
      sym_if_statement,
      sym_while_statement,
      sym_do_while_statement,
      sym_return_statement,
      sym_variable_definition_statement,
      sym__expression_statement,
  [424] = 20,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(15), 1,
      anon_sym_LPAREN,
    ACTIONS(17), 1,
      anon_sym_LBRACE,
    ACTIONS(19), 1,
      anon_sym_if,
    ACTIONS(21), 1,
      anon_sym_while,
    ACTIONS(23), 1,
      anon_sym_do,
    ACTIONS(25), 1,
      anon_sym_return,
    ACTIONS(27), 1,
      anon_sym_local,
    ACTIONS(29), 1,
      anon_sym_DASH,
    ACTIONS(31), 1,
      anon_sym_PLUS,
    ACTIONS(35), 1,
      sym_identifier,
    ACTIONS(37), 1,
      sym__integer_literal,
    ACTIONS(39), 1,
      sym__float_literal,
    ACTIONS(41), 1,
      anon_sym_BQUOTE,
    ACTIONS(43), 1,
      anon_sym_DQUOTE,
    STATE(13), 1,
      sym_field_expression,
    STATE(167), 1,
      sym_simple_type,
    ACTIONS(33), 6,
      anon_sym_void,
      anon_sym_entity,
      anon_sym_float,
      anon_sym_vector,
      anon_sym_string,
      anon_sym_int,
    STATE(35), 9,
      sym__expression,
      sym_unary_expression,
      sym_binary_expression,
      sym_funcall_expression,
      sym_parenthesized_expression,
      sym__literal,
      sym_numeric_literal,
      sym_vector_literal,
      sym_string_literal,
    STATE(129), 10,
      sym__statement,
      sym_compound_statement,
      sym__simple_statement,
      sym_assignment_statement,
      sym_if_statement,
      sym_while_statement,
      sym_do_while_statement,
      sym_return_statement,
      sym_variable_definition_statement,
      sym__expression_statement,
  [507] = 21,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(15), 1,
      anon_sym_LPAREN,
    ACTIONS(19), 1,
      anon_sym_if,
    ACTIONS(21), 1,
      anon_sym_while,
    ACTIONS(23), 1,
      anon_sym_do,
    ACTIONS(25), 1,
      anon_sym_return,
    ACTIONS(27), 1,
      anon_sym_local,
    ACTIONS(29), 1,
      anon_sym_DASH,
    ACTIONS(31), 1,
      anon_sym_PLUS,
    ACTIONS(35), 1,
      sym_identifier,
    ACTIONS(37), 1,
      sym__integer_literal,
    ACTIONS(39), 1,
      sym__float_literal,
    ACTIONS(41), 1,
      anon_sym_BQUOTE,
    ACTIONS(43), 1,
      anon_sym_DQUOTE,
    ACTIONS(49), 1,
      anon_sym_RBRACE,
    STATE(10), 1,
      aux_sym_compound_statement_repeat1,
    STATE(13), 1,
      sym_field_expression,
    STATE(167), 1,
      sym_simple_type,
    ACTIONS(33), 6,
      anon_sym_void,
      anon_sym_entity,
      anon_sym_float,
      anon_sym_vector,
      anon_sym_string,
      anon_sym_int,
    STATE(173), 8,
      sym__simple_statement,
      sym_assignment_statement,
      sym_if_statement,
      sym_while_statement,
      sym_do_while_statement,
      sym_return_statement,
      sym_variable_definition_statement,
      sym__expression_statement,
    STATE(35), 9,
      sym__expression,
      sym_unary_expression,
      sym_binary_expression,
      sym_funcall_expression,
      sym_parenthesized_expression,
      sym__literal,
      sym_numeric_literal,
      sym_vector_literal,
      sym_string_literal,
  [591] = 21,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(15), 1,
      anon_sym_LPAREN,
    ACTIONS(19), 1,
      anon_sym_if,
    ACTIONS(21), 1,
      anon_sym_while,
    ACTIONS(23), 1,
      anon_sym_do,
    ACTIONS(25), 1,
      anon_sym_return,
    ACTIONS(27), 1,
      anon_sym_local,
    ACTIONS(29), 1,
      anon_sym_DASH,
    ACTIONS(31), 1,
      anon_sym_PLUS,
    ACTIONS(35), 1,
      sym_identifier,
    ACTIONS(37), 1,
      sym__integer_literal,
    ACTIONS(39), 1,
      sym__float_literal,
    ACTIONS(41), 1,
      anon_sym_BQUOTE,
    ACTIONS(43), 1,
      anon_sym_DQUOTE,
    ACTIONS(51), 1,
      anon_sym_RBRACE,
    STATE(8), 1,
      aux_sym_compound_statement_repeat1,
    STATE(13), 1,
      sym_field_expression,
    STATE(167), 1,
      sym_simple_type,
    ACTIONS(33), 6,
      anon_sym_void,
      anon_sym_entity,
      anon_sym_float,
      anon_sym_vector,
      anon_sym_string,
      anon_sym_int,
    STATE(173), 8,
      sym__simple_statement,
      sym_assignment_statement,
      sym_if_statement,
      sym_while_statement,
      sym_do_while_statement,
      sym_return_statement,
      sym_variable_definition_statement,
      sym__expression_statement,
    STATE(35), 9,
      sym__expression,
      sym_unary_expression,
      sym_binary_expression,
      sym_funcall_expression,
      sym_parenthesized_expression,
      sym__literal,
      sym_numeric_literal,
      sym_vector_literal,
      sym_string_literal,
  [675] = 21,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(53), 1,
      anon_sym_LPAREN,
    ACTIONS(56), 1,
      anon_sym_RBRACE,
    ACTIONS(58), 1,
      anon_sym_if,
    ACTIONS(61), 1,
      anon_sym_while,
    ACTIONS(64), 1,
      anon_sym_do,
    ACTIONS(67), 1,
      anon_sym_return,
    ACTIONS(70), 1,
      anon_sym_local,
    ACTIONS(73), 1,
      anon_sym_DASH,
    ACTIONS(76), 1,
      anon_sym_PLUS,
    ACTIONS(82), 1,
      sym_identifier,
    ACTIONS(85), 1,
      sym__integer_literal,
    ACTIONS(88), 1,
      sym__float_literal,
    ACTIONS(91), 1,
      anon_sym_BQUOTE,
    ACTIONS(94), 1,
      anon_sym_DQUOTE,
    STATE(10), 1,
      aux_sym_compound_statement_repeat1,
    STATE(13), 1,
      sym_field_expression,
    STATE(167), 1,
      sym_simple_type,
    ACTIONS(79), 6,
      anon_sym_void,
      anon_sym_entity,
      anon_sym_float,
      anon_sym_vector,
      anon_sym_string,
      anon_sym_int,
    STATE(173), 8,
      sym__simple_statement,
      sym_assignment_statement,
      sym_if_statement,
      sym_while_statement,
      sym_do_while_statement,
      sym_return_statement,
      sym_variable_definition_statement,
      sym__expression_statement,
    STATE(35), 9,
      sym__expression,
      sym_unary_expression,
      sym_binary_expression,
      sym_funcall_expression,
      sym_parenthesized_expression,
      sym__literal,
      sym_numeric_literal,
      sym_vector_literal,
      sym_string_literal,
  [759] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(99), 10,
      anon_sym_EQ,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_BANG,
      anon_sym_PIPE,
      anon_sym_AMP,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(97), 16,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_DOT,
      anon_sym_RPAREN,
      anon_sym_PLUS_EQ,
      anon_sym_DASH_EQ,
      anon_sym_STAR_EQ,
      anon_sym_SLASH_EQ,
      anon_sym_else,
      anon_sym_while,
      anon_sym_PIPE_PIPE,
      anon_sym_AMP_AMP,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
  [793] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(103), 1,
      anon_sym_EQ,
    ACTIONS(105), 1,
      anon_sym_LPAREN,
    ACTIONS(107), 4,
      anon_sym_PLUS_EQ,
      anon_sym_DASH_EQ,
      anon_sym_STAR_EQ,
      anon_sym_SLASH_EQ,
    ACTIONS(109), 9,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_BANG,
      anon_sym_PIPE,
      anon_sym_AMP,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(101), 10,
      anon_sym_SEMI,
      anon_sym_DOT,
      anon_sym_else,
      anon_sym_while,
      anon_sym_PIPE_PIPE,
      anon_sym_AMP_AMP,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
  [832] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(103), 1,
      anon_sym_EQ,
    ACTIONS(107), 4,
      anon_sym_PLUS_EQ,
      anon_sym_DASH_EQ,
      anon_sym_STAR_EQ,
      anon_sym_SLASH_EQ,
    ACTIONS(109), 9,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_BANG,
      anon_sym_PIPE,
      anon_sym_AMP,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(101), 10,
      anon_sym_SEMI,
      anon_sym_DOT,
      anon_sym_else,
      anon_sym_while,
      anon_sym_PIPE_PIPE,
      anon_sym_AMP_AMP,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
  [868] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(105), 1,
      anon_sym_LPAREN,
    ACTIONS(109), 6,
      anon_sym_SLASH,
      anon_sym_BANG,
      anon_sym_PIPE,
      anon_sym_AMP,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(101), 15,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_DOT,
      anon_sym_RPAREN,
      anon_sym_else,
      anon_sym_while,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_STAR,
      anon_sym_PIPE_PIPE,
      anon_sym_AMP_AMP,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
  [900] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(113), 1,
      anon_sym_DOT,
    ACTIONS(115), 1,
      anon_sym_STAR,
    ACTIONS(117), 1,
      anon_sym_SLASH,
    ACTIONS(121), 1,
      anon_sym_AMP,
    ACTIONS(119), 4,
      anon_sym_BANG,
      anon_sym_PIPE,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(111), 13,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_else,
      anon_sym_while,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_PIPE_PIPE,
      anon_sym_AMP_AMP,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
  [937] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(113), 1,
      anon_sym_DOT,
    ACTIONS(115), 1,
      anon_sym_STAR,
    ACTIONS(117), 1,
      anon_sym_SLASH,
    ACTIONS(119), 5,
      anon_sym_BANG,
      anon_sym_PIPE,
      anon_sym_AMP,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(111), 13,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_else,
      anon_sym_while,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_PIPE_PIPE,
      anon_sym_AMP_AMP,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
  [972] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(113), 1,
      anon_sym_DOT,
    ACTIONS(125), 6,
      anon_sym_SLASH,
      anon_sym_BANG,
      anon_sym_PIPE,
      anon_sym_AMP,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(123), 14,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_else,
      anon_sym_while,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_STAR,
      anon_sym_PIPE_PIPE,
      anon_sym_AMP_AMP,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
  [1003] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(129), 6,
      anon_sym_SLASH,
      anon_sym_BANG,
      anon_sym_PIPE,
      anon_sym_AMP,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(127), 15,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_DOT,
      anon_sym_RPAREN,
      anon_sym_else,
      anon_sym_while,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_STAR,
      anon_sym_PIPE_PIPE,
      anon_sym_AMP_AMP,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
  [1032] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(133), 6,
      anon_sym_SLASH,
      anon_sym_BANG,
      anon_sym_PIPE,
      anon_sym_AMP,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(131), 15,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_DOT,
      anon_sym_RPAREN,
      anon_sym_else,
      anon_sym_while,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_STAR,
      anon_sym_PIPE_PIPE,
      anon_sym_AMP_AMP,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
  [1061] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(137), 6,
      anon_sym_SLASH,
      anon_sym_BANG,
      anon_sym_PIPE,
      anon_sym_AMP,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(135), 15,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_DOT,
      anon_sym_RPAREN,
      anon_sym_else,
      anon_sym_while,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_STAR,
      anon_sym_PIPE_PIPE,
      anon_sym_AMP_AMP,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
  [1090] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(141), 6,
      anon_sym_SLASH,
      anon_sym_BANG,
      anon_sym_PIPE,
      anon_sym_AMP,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(139), 15,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_DOT,
      anon_sym_RPAREN,
      anon_sym_else,
      anon_sym_while,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_STAR,
      anon_sym_PIPE_PIPE,
      anon_sym_AMP_AMP,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
  [1119] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(145), 6,
      anon_sym_SLASH,
      anon_sym_BANG,
      anon_sym_PIPE,
      anon_sym_AMP,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(143), 15,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_DOT,
      anon_sym_RPAREN,
      anon_sym_else,
      anon_sym_while,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_STAR,
      anon_sym_PIPE_PIPE,
      anon_sym_AMP_AMP,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
  [1148] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(113), 1,
      anon_sym_DOT,
    ACTIONS(115), 1,
      anon_sym_STAR,
    ACTIONS(117), 1,
      anon_sym_SLASH,
    ACTIONS(119), 1,
      anon_sym_BANG,
    ACTIONS(121), 1,
      anon_sym_AMP,
    ACTIONS(149), 1,
      anon_sym_PIPE,
    ACTIONS(147), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(153), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(151), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
    ACTIONS(111), 7,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_else,
      anon_sym_while,
      anon_sym_PIPE_PIPE,
      anon_sym_AMP_AMP,
  [1193] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(157), 6,
      anon_sym_SLASH,
      anon_sym_BANG,
      anon_sym_PIPE,
      anon_sym_AMP,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(155), 15,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_DOT,
      anon_sym_RPAREN,
      anon_sym_else,
      anon_sym_while,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_STAR,
      anon_sym_PIPE_PIPE,
      anon_sym_AMP_AMP,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
  [1222] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(161), 6,
      anon_sym_SLASH,
      anon_sym_BANG,
      anon_sym_PIPE,
      anon_sym_AMP,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(159), 15,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_DOT,
      anon_sym_RPAREN,
      anon_sym_else,
      anon_sym_while,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_STAR,
      anon_sym_PIPE_PIPE,
      anon_sym_AMP_AMP,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
  [1251] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(165), 6,
      anon_sym_SLASH,
      anon_sym_BANG,
      anon_sym_PIPE,
      anon_sym_AMP,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(163), 15,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_DOT,
      anon_sym_RPAREN,
      anon_sym_else,
      anon_sym_while,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_STAR,
      anon_sym_PIPE_PIPE,
      anon_sym_AMP_AMP,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
  [1280] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(113), 1,
      anon_sym_DOT,
    ACTIONS(115), 1,
      anon_sym_STAR,
    ACTIONS(117), 1,
      anon_sym_SLASH,
    ACTIONS(121), 1,
      anon_sym_AMP,
    ACTIONS(149), 1,
      anon_sym_PIPE,
    ACTIONS(147), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(119), 3,
      anon_sym_BANG,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(111), 11,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_else,
      anon_sym_while,
      anon_sym_PIPE_PIPE,
      anon_sym_AMP_AMP,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
  [1321] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(113), 1,
      anon_sym_DOT,
    ACTIONS(115), 1,
      anon_sym_STAR,
    ACTIONS(117), 1,
      anon_sym_SLASH,
    ACTIONS(121), 1,
      anon_sym_AMP,
    ACTIONS(149), 1,
      anon_sym_PIPE,
    ACTIONS(167), 1,
      anon_sym_BANG,
    ACTIONS(147), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(153), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(151), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
    ACTIONS(111), 7,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_else,
      anon_sym_while,
      anon_sym_PIPE_PIPE,
      anon_sym_AMP_AMP,
  [1366] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(113), 1,
      anon_sym_DOT,
    ACTIONS(115), 1,
      anon_sym_STAR,
    ACTIONS(117), 1,
      anon_sym_SLASH,
    ACTIONS(121), 1,
      anon_sym_AMP,
    ACTIONS(149), 1,
      anon_sym_PIPE,
    ACTIONS(167), 1,
      anon_sym_BANG,
    ACTIONS(169), 1,
      anon_sym_AMP_AMP,
    ACTIONS(147), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(153), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(151), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
    ACTIONS(111), 6,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_else,
      anon_sym_while,
      anon_sym_PIPE_PIPE,
  [1413] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(113), 1,
      anon_sym_DOT,
    ACTIONS(119), 6,
      anon_sym_SLASH,
      anon_sym_BANG,
      anon_sym_PIPE,
      anon_sym_AMP,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(111), 14,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_else,
      anon_sym_while,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_STAR,
      anon_sym_PIPE_PIPE,
      anon_sym_AMP_AMP,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
  [1444] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(113), 1,
      anon_sym_DOT,
    ACTIONS(115), 1,
      anon_sym_STAR,
    ACTIONS(117), 1,
      anon_sym_SLASH,
    ACTIONS(121), 1,
      anon_sym_AMP,
    ACTIONS(149), 1,
      anon_sym_PIPE,
    ACTIONS(119), 3,
      anon_sym_BANG,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(111), 13,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_else,
      anon_sym_while,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_PIPE_PIPE,
      anon_sym_AMP_AMP,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
  [1483] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(56), 6,
      anon_sym_LPAREN,
      anon_sym_RBRACE,
      anon_sym_PLUS,
      sym__float_literal,
      anon_sym_BQUOTE,
      anon_sym_DQUOTE,
    ACTIONS(171), 14,
      anon_sym_if,
      anon_sym_while,
      anon_sym_do,
      anon_sym_return,
      anon_sym_local,
      anon_sym_DASH,
      anon_sym_void,
      anon_sym_entity,
      anon_sym_float,
      anon_sym_vector,
      anon_sym_string,
      anon_sym_int,
      sym_identifier,
      sym__integer_literal,
  [1511] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(15), 1,
      anon_sym_LPAREN,
    ACTIONS(29), 1,
      anon_sym_DASH,
    ACTIONS(31), 1,
      anon_sym_PLUS,
    ACTIONS(37), 1,
      sym__integer_literal,
    ACTIONS(39), 1,
      sym__float_literal,
    ACTIONS(41), 1,
      anon_sym_BQUOTE,
    ACTIONS(43), 1,
      anon_sym_DQUOTE,
    ACTIONS(173), 1,
      anon_sym_RPAREN,
    ACTIONS(175), 1,
      sym_identifier,
    STATE(34), 10,
      sym__expression,
      sym_unary_expression,
      sym_binary_expression,
      sym_field_expression,
      sym_funcall_expression,
      sym_parenthesized_expression,
      sym__literal,
      sym_numeric_literal,
      sym_vector_literal,
      sym_string_literal,
  [1554] = 15,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(113), 1,
      anon_sym_DOT,
    ACTIONS(115), 1,
      anon_sym_STAR,
    ACTIONS(117), 1,
      anon_sym_SLASH,
    ACTIONS(121), 1,
      anon_sym_AMP,
    ACTIONS(149), 1,
      anon_sym_PIPE,
    ACTIONS(167), 1,
      anon_sym_BANG,
    ACTIONS(169), 1,
      anon_sym_AMP_AMP,
    ACTIONS(177), 1,
      anon_sym_COMMA,
    ACTIONS(179), 1,
      anon_sym_RPAREN,
    ACTIONS(181), 1,
      anon_sym_PIPE_PIPE,
    STATE(117), 1,
      aux_sym_funcall_expression_repeat1,
    ACTIONS(147), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(153), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(151), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
  [1605] = 13,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(113), 1,
      anon_sym_DOT,
    ACTIONS(115), 1,
      anon_sym_STAR,
    ACTIONS(117), 1,
      anon_sym_SLASH,
    ACTIONS(121), 1,
      anon_sym_AMP,
    ACTIONS(149), 1,
      anon_sym_PIPE,
    ACTIONS(167), 1,
      anon_sym_BANG,
    ACTIONS(169), 1,
      anon_sym_AMP_AMP,
    ACTIONS(181), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(147), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(153), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(183), 3,
      anon_sym_SEMI,
      anon_sym_else,
      anon_sym_while,
    ACTIONS(151), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
  [1652] = 13,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(113), 1,
      anon_sym_DOT,
    ACTIONS(115), 1,
      anon_sym_STAR,
    ACTIONS(117), 1,
      anon_sym_SLASH,
    ACTIONS(121), 1,
      anon_sym_AMP,
    ACTIONS(149), 1,
      anon_sym_PIPE,
    ACTIONS(167), 1,
      anon_sym_BANG,
    ACTIONS(169), 1,
      anon_sym_AMP_AMP,
    ACTIONS(181), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(147), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(153), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(185), 3,
      anon_sym_SEMI,
      anon_sym_else,
      anon_sym_while,
    ACTIONS(151), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
  [1699] = 13,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(113), 1,
      anon_sym_DOT,
    ACTIONS(115), 1,
      anon_sym_STAR,
    ACTIONS(117), 1,
      anon_sym_SLASH,
    ACTIONS(121), 1,
      anon_sym_AMP,
    ACTIONS(149), 1,
      anon_sym_PIPE,
    ACTIONS(167), 1,
      anon_sym_BANG,
    ACTIONS(169), 1,
      anon_sym_AMP_AMP,
    ACTIONS(181), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(147), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(153), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(187), 3,
      anon_sym_SEMI,
      anon_sym_else,
      anon_sym_while,
    ACTIONS(151), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
  [1746] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(15), 1,
      anon_sym_LPAREN,
    ACTIONS(29), 1,
      anon_sym_DASH,
    ACTIONS(31), 1,
      anon_sym_PLUS,
    ACTIONS(37), 1,
      sym__integer_literal,
    ACTIONS(39), 1,
      sym__float_literal,
    ACTIONS(41), 1,
      anon_sym_BQUOTE,
    ACTIONS(43), 1,
      anon_sym_DQUOTE,
    ACTIONS(175), 1,
      sym_identifier,
    STATE(37), 10,
      sym__expression,
      sym_unary_expression,
      sym_binary_expression,
      sym_field_expression,
      sym_funcall_expression,
      sym_parenthesized_expression,
      sym__literal,
      sym_numeric_literal,
      sym_vector_literal,
      sym_string_literal,
  [1786] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(15), 1,
      anon_sym_LPAREN,
    ACTIONS(29), 1,
      anon_sym_DASH,
    ACTIONS(31), 1,
      anon_sym_PLUS,
    ACTIONS(37), 1,
      sym__integer_literal,
    ACTIONS(39), 1,
      sym__float_literal,
    ACTIONS(41), 1,
      anon_sym_BQUOTE,
    ACTIONS(43), 1,
      anon_sym_DQUOTE,
    ACTIONS(175), 1,
      sym_identifier,
    STATE(28), 10,
      sym__expression,
      sym_unary_expression,
      sym_binary_expression,
      sym_field_expression,
      sym_funcall_expression,
      sym_parenthesized_expression,
      sym__literal,
      sym_numeric_literal,
      sym_vector_literal,
      sym_string_literal,
  [1826] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(15), 1,
      anon_sym_LPAREN,
    ACTIONS(29), 1,
      anon_sym_DASH,
    ACTIONS(31), 1,
      anon_sym_PLUS,
    ACTIONS(37), 1,
      sym__integer_literal,
    ACTIONS(39), 1,
      sym__float_literal,
    ACTIONS(41), 1,
      anon_sym_BQUOTE,
    ACTIONS(43), 1,
      anon_sym_DQUOTE,
    ACTIONS(175), 1,
      sym_identifier,
    STATE(57), 10,
      sym__expression,
      sym_unary_expression,
      sym_binary_expression,
      sym_field_expression,
      sym_funcall_expression,
      sym_parenthesized_expression,
      sym__literal,
      sym_numeric_literal,
      sym_vector_literal,
      sym_string_literal,
  [1866] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(15), 1,
      anon_sym_LPAREN,
    ACTIONS(29), 1,
      anon_sym_DASH,
    ACTIONS(31), 1,
      anon_sym_PLUS,
    ACTIONS(37), 1,
      sym__integer_literal,
    ACTIONS(39), 1,
      sym__float_literal,
    ACTIONS(41), 1,
      anon_sym_BQUOTE,
    ACTIONS(43), 1,
      anon_sym_DQUOTE,
    ACTIONS(175), 1,
      sym_identifier,
    STATE(31), 10,
      sym__expression,
      sym_unary_expression,
      sym_binary_expression,
      sym_field_expression,
      sym_funcall_expression,
      sym_parenthesized_expression,
      sym__literal,
      sym_numeric_literal,
      sym_vector_literal,
      sym_string_literal,
  [1906] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(7), 1,
      anon_sym_DOT,
    ACTIONS(9), 1,
      anon_sym_DOLLAR,
    ACTIONS(189), 1,
      ts_builtin_sym_end,
    STATE(128), 1,
      sym_simple_type,
    ACTIONS(11), 6,
      anon_sym_void,
      anon_sym_entity,
      anon_sym_float,
      anon_sym_vector,
      anon_sym_string,
      anon_sym_int,
    STATE(53), 8,
      sym__definition,
      sym_function_declaration,
      sym_function_definition,
      sym_constant_definition,
      sym_variable_definition,
      sym_field_definition,
      sym_modelgen_pragma,
      aux_sym_source_file_repeat1,
  [1940] = 13,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(113), 1,
      anon_sym_DOT,
    ACTIONS(115), 1,
      anon_sym_STAR,
    ACTIONS(117), 1,
      anon_sym_SLASH,
    ACTIONS(121), 1,
      anon_sym_AMP,
    ACTIONS(149), 1,
      anon_sym_PIPE,
    ACTIONS(167), 1,
      anon_sym_BANG,
    ACTIONS(169), 1,
      anon_sym_AMP_AMP,
    ACTIONS(181), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(147), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(153), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(191), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
    ACTIONS(151), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
  [1986] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(15), 1,
      anon_sym_LPAREN,
    ACTIONS(29), 1,
      anon_sym_DASH,
    ACTIONS(31), 1,
      anon_sym_PLUS,
    ACTIONS(37), 1,
      sym__integer_literal,
    ACTIONS(39), 1,
      sym__float_literal,
    ACTIONS(41), 1,
      anon_sym_BQUOTE,
    ACTIONS(43), 1,
      anon_sym_DQUOTE,
    ACTIONS(175), 1,
      sym_identifier,
    STATE(59), 10,
      sym__expression,
      sym_unary_expression,
      sym_binary_expression,
      sym_field_expression,
      sym_funcall_expression,
      sym_parenthesized_expression,
      sym__literal,
      sym_numeric_literal,
      sym_vector_literal,
      sym_string_literal,
  [2026] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(15), 1,
      anon_sym_LPAREN,
    ACTIONS(29), 1,
      anon_sym_DASH,
    ACTIONS(31), 1,
      anon_sym_PLUS,
    ACTIONS(37), 1,
      sym__integer_literal,
    ACTIONS(39), 1,
      sym__float_literal,
    ACTIONS(41), 1,
      anon_sym_BQUOTE,
    ACTIONS(43), 1,
      anon_sym_DQUOTE,
    ACTIONS(175), 1,
      sym_identifier,
    STATE(17), 10,
      sym__expression,
      sym_unary_expression,
      sym_binary_expression,
      sym_field_expression,
      sym_funcall_expression,
      sym_parenthesized_expression,
      sym__literal,
      sym_numeric_literal,
      sym_vector_literal,
      sym_string_literal,
  [2066] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(15), 1,
      anon_sym_LPAREN,
    ACTIONS(29), 1,
      anon_sym_DASH,
    ACTIONS(31), 1,
      anon_sym_PLUS,
    ACTIONS(37), 1,
      sym__integer_literal,
    ACTIONS(39), 1,
      sym__float_literal,
    ACTIONS(41), 1,
      anon_sym_BQUOTE,
    ACTIONS(43), 1,
      anon_sym_DQUOTE,
    ACTIONS(175), 1,
      sym_identifier,
    STATE(27), 10,
      sym__expression,
      sym_unary_expression,
      sym_binary_expression,
      sym_field_expression,
      sym_funcall_expression,
      sym_parenthesized_expression,
      sym__literal,
      sym_numeric_literal,
      sym_vector_literal,
      sym_string_literal,
  [2106] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(15), 1,
      anon_sym_LPAREN,
    ACTIONS(29), 1,
      anon_sym_DASH,
    ACTIONS(31), 1,
      anon_sym_PLUS,
    ACTIONS(37), 1,
      sym__integer_literal,
    ACTIONS(39), 1,
      sym__float_literal,
    ACTIONS(41), 1,
      anon_sym_BQUOTE,
    ACTIONS(43), 1,
      anon_sym_DQUOTE,
    ACTIONS(175), 1,
      sym_identifier,
    STATE(30), 10,
      sym__expression,
      sym_unary_expression,
      sym_binary_expression,
      sym_field_expression,
      sym_funcall_expression,
      sym_parenthesized_expression,
      sym__literal,
      sym_numeric_literal,
      sym_vector_literal,
      sym_string_literal,
  [2146] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(15), 1,
      anon_sym_LPAREN,
    ACTIONS(29), 1,
      anon_sym_DASH,
    ACTIONS(31), 1,
      anon_sym_PLUS,
    ACTIONS(37), 1,
      sym__integer_literal,
    ACTIONS(39), 1,
      sym__float_literal,
    ACTIONS(41), 1,
      anon_sym_BQUOTE,
    ACTIONS(43), 1,
      anon_sym_DQUOTE,
    ACTIONS(175), 1,
      sym_identifier,
    STATE(60), 10,
      sym__expression,
      sym_unary_expression,
      sym_binary_expression,
      sym_field_expression,
      sym_funcall_expression,
      sym_parenthesized_expression,
      sym__literal,
      sym_numeric_literal,
      sym_vector_literal,
      sym_string_literal,
  [2186] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(15), 1,
      anon_sym_LPAREN,
    ACTIONS(29), 1,
      anon_sym_DASH,
    ACTIONS(31), 1,
      anon_sym_PLUS,
    ACTIONS(37), 1,
      sym__integer_literal,
    ACTIONS(39), 1,
      sym__float_literal,
    ACTIONS(41), 1,
      anon_sym_BQUOTE,
    ACTIONS(43), 1,
      anon_sym_DQUOTE,
    ACTIONS(175), 1,
      sym_identifier,
    STATE(16), 10,
      sym__expression,
      sym_unary_expression,
      sym_binary_expression,
      sym_field_expression,
      sym_funcall_expression,
      sym_parenthesized_expression,
      sym__literal,
      sym_numeric_literal,
      sym_vector_literal,
      sym_string_literal,
  [2226] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(15), 1,
      anon_sym_LPAREN,
    ACTIONS(29), 1,
      anon_sym_DASH,
    ACTIONS(31), 1,
      anon_sym_PLUS,
    ACTIONS(37), 1,
      sym__integer_literal,
    ACTIONS(39), 1,
      sym__float_literal,
    ACTIONS(41), 1,
      anon_sym_BQUOTE,
    ACTIONS(43), 1,
      anon_sym_DQUOTE,
    ACTIONS(175), 1,
      sym_identifier,
    STATE(15), 10,
      sym__expression,
      sym_unary_expression,
      sym_binary_expression,
      sym_field_expression,
      sym_funcall_expression,
      sym_parenthesized_expression,
      sym__literal,
      sym_numeric_literal,
      sym_vector_literal,
      sym_string_literal,
  [2266] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(15), 1,
      anon_sym_LPAREN,
    ACTIONS(29), 1,
      anon_sym_DASH,
    ACTIONS(31), 1,
      anon_sym_PLUS,
    ACTIONS(37), 1,
      sym__integer_literal,
    ACTIONS(39), 1,
      sym__float_literal,
    ACTIONS(41), 1,
      anon_sym_BQUOTE,
    ACTIONS(43), 1,
      anon_sym_DQUOTE,
    ACTIONS(175), 1,
      sym_identifier,
    STATE(23), 10,
      sym__expression,
      sym_unary_expression,
      sym_binary_expression,
      sym_field_expression,
      sym_funcall_expression,
      sym_parenthesized_expression,
      sym__literal,
      sym_numeric_literal,
      sym_vector_literal,
      sym_string_literal,
  [2306] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(15), 1,
      anon_sym_LPAREN,
    ACTIONS(29), 1,
      anon_sym_DASH,
    ACTIONS(31), 1,
      anon_sym_PLUS,
    ACTIONS(37), 1,
      sym__integer_literal,
    ACTIONS(39), 1,
      sym__float_literal,
    ACTIONS(41), 1,
      anon_sym_BQUOTE,
    ACTIONS(43), 1,
      anon_sym_DQUOTE,
    ACTIONS(175), 1,
      sym_identifier,
    STATE(58), 10,
      sym__expression,
      sym_unary_expression,
      sym_binary_expression,
      sym_field_expression,
      sym_funcall_expression,
      sym_parenthesized_expression,
      sym__literal,
      sym_numeric_literal,
      sym_vector_literal,
      sym_string_literal,
  [2346] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(193), 1,
      ts_builtin_sym_end,
    ACTIONS(195), 1,
      anon_sym_DOT,
    ACTIONS(198), 1,
      anon_sym_DOLLAR,
    STATE(128), 1,
      sym_simple_type,
    ACTIONS(201), 6,
      anon_sym_void,
      anon_sym_entity,
      anon_sym_float,
      anon_sym_vector,
      anon_sym_string,
      anon_sym_int,
    STATE(53), 8,
      sym__definition,
      sym_function_declaration,
      sym_function_definition,
      sym_constant_definition,
      sym_variable_definition,
      sym_field_definition,
      sym_modelgen_pragma,
      aux_sym_source_file_repeat1,
  [2380] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(15), 1,
      anon_sym_LPAREN,
    ACTIONS(29), 1,
      anon_sym_DASH,
    ACTIONS(31), 1,
      anon_sym_PLUS,
    ACTIONS(37), 1,
      sym__integer_literal,
    ACTIONS(39), 1,
      sym__float_literal,
    ACTIONS(41), 1,
      anon_sym_BQUOTE,
    ACTIONS(43), 1,
      anon_sym_DQUOTE,
    ACTIONS(175), 1,
      sym_identifier,
    STATE(43), 10,
      sym__expression,
      sym_unary_expression,
      sym_binary_expression,
      sym_field_expression,
      sym_funcall_expression,
      sym_parenthesized_expression,
      sym__literal,
      sym_numeric_literal,
      sym_vector_literal,
      sym_string_literal,
  [2420] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(15), 1,
      anon_sym_LPAREN,
    ACTIONS(29), 1,
      anon_sym_DASH,
    ACTIONS(31), 1,
      anon_sym_PLUS,
    ACTIONS(37), 1,
      sym__integer_literal,
    ACTIONS(39), 1,
      sym__float_literal,
    ACTIONS(41), 1,
      anon_sym_BQUOTE,
    ACTIONS(43), 1,
      anon_sym_DQUOTE,
    ACTIONS(175), 1,
      sym_identifier,
    STATE(29), 10,
      sym__expression,
      sym_unary_expression,
      sym_binary_expression,
      sym_field_expression,
      sym_funcall_expression,
      sym_parenthesized_expression,
      sym__literal,
      sym_numeric_literal,
      sym_vector_literal,
      sym_string_literal,
  [2460] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(15), 1,
      anon_sym_LPAREN,
    ACTIONS(29), 1,
      anon_sym_DASH,
    ACTIONS(31), 1,
      anon_sym_PLUS,
    ACTIONS(37), 1,
      sym__integer_literal,
    ACTIONS(39), 1,
      sym__float_literal,
    ACTIONS(41), 1,
      anon_sym_BQUOTE,
    ACTIONS(43), 1,
      anon_sym_DQUOTE,
    ACTIONS(175), 1,
      sym_identifier,
    STATE(36), 10,
      sym__expression,
      sym_unary_expression,
      sym_binary_expression,
      sym_field_expression,
      sym_funcall_expression,
      sym_parenthesized_expression,
      sym__literal,
      sym_numeric_literal,
      sym_vector_literal,
      sym_string_literal,
  [2500] = 13,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(113), 1,
      anon_sym_DOT,
    ACTIONS(115), 1,
      anon_sym_STAR,
    ACTIONS(117), 1,
      anon_sym_SLASH,
    ACTIONS(121), 1,
      anon_sym_AMP,
    ACTIONS(149), 1,
      anon_sym_PIPE,
    ACTIONS(167), 1,
      anon_sym_BANG,
    ACTIONS(169), 1,
      anon_sym_AMP_AMP,
    ACTIONS(181), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(204), 1,
      anon_sym_RPAREN,
    ACTIONS(147), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(153), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(151), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
  [2545] = 13,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(113), 1,
      anon_sym_DOT,
    ACTIONS(115), 1,
      anon_sym_STAR,
    ACTIONS(117), 1,
      anon_sym_SLASH,
    ACTIONS(121), 1,
      anon_sym_AMP,
    ACTIONS(149), 1,
      anon_sym_PIPE,
    ACTIONS(167), 1,
      anon_sym_BANG,
    ACTIONS(169), 1,
      anon_sym_AMP_AMP,
    ACTIONS(181), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(206), 1,
      anon_sym_RPAREN,
    ACTIONS(147), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(153), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(151), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
  [2590] = 13,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(113), 1,
      anon_sym_DOT,
    ACTIONS(115), 1,
      anon_sym_STAR,
    ACTIONS(117), 1,
      anon_sym_SLASH,
    ACTIONS(121), 1,
      anon_sym_AMP,
    ACTIONS(149), 1,
      anon_sym_PIPE,
    ACTIONS(167), 1,
      anon_sym_BANG,
    ACTIONS(169), 1,
      anon_sym_AMP_AMP,
    ACTIONS(181), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(208), 1,
      anon_sym_RPAREN,
    ACTIONS(147), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(153), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(151), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
  [2635] = 13,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(113), 1,
      anon_sym_DOT,
    ACTIONS(115), 1,
      anon_sym_STAR,
    ACTIONS(117), 1,
      anon_sym_SLASH,
    ACTIONS(121), 1,
      anon_sym_AMP,
    ACTIONS(149), 1,
      anon_sym_PIPE,
    ACTIONS(167), 1,
      anon_sym_BANG,
    ACTIONS(169), 1,
      anon_sym_AMP_AMP,
    ACTIONS(181), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(210), 1,
      anon_sym_RPAREN,
    ACTIONS(147), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(153), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(151), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
  [2680] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(212), 1,
      anon_sym_COMMA,
    ACTIONS(214), 1,
      anon_sym_RPAREN,
    STATE(125), 1,
      sym_parameter,
    STATE(148), 1,
      sym_simple_type,
    ACTIONS(11), 6,
      anon_sym_void,
      anon_sym_entity,
      anon_sym_float,
      anon_sym_vector,
      anon_sym_string,
      anon_sym_int,
  [2704] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(216), 9,
      ts_builtin_sym_end,
      anon_sym_DOT,
      anon_sym_DOLLAR,
      anon_sym_void,
      anon_sym_entity,
      anon_sym_float,
      anon_sym_vector,
      anon_sym_string,
      anon_sym_int,
  [2719] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(218), 9,
      ts_builtin_sym_end,
      anon_sym_DOT,
      anon_sym_DOLLAR,
      anon_sym_void,
      anon_sym_entity,
      anon_sym_float,
      anon_sym_vector,
      anon_sym_string,
      anon_sym_int,
  [2734] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(220), 9,
      ts_builtin_sym_end,
      anon_sym_DOT,
      anon_sym_DOLLAR,
      anon_sym_void,
      anon_sym_entity,
      anon_sym_float,
      anon_sym_vector,
      anon_sym_string,
      anon_sym_int,
  [2749] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(222), 9,
      ts_builtin_sym_end,
      anon_sym_DOT,
      anon_sym_DOLLAR,
      anon_sym_void,
      anon_sym_entity,
      anon_sym_float,
      anon_sym_vector,
      anon_sym_string,
      anon_sym_int,
  [2764] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(224), 9,
      ts_builtin_sym_end,
      anon_sym_DOT,
      anon_sym_DOLLAR,
      anon_sym_void,
      anon_sym_entity,
      anon_sym_float,
      anon_sym_vector,
      anon_sym_string,
      anon_sym_int,
  [2779] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(226), 9,
      ts_builtin_sym_end,
      anon_sym_DOT,
      anon_sym_DOLLAR,
      anon_sym_void,
      anon_sym_entity,
      anon_sym_float,
      anon_sym_vector,
      anon_sym_string,
      anon_sym_int,
  [2794] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(228), 9,
      ts_builtin_sym_end,
      anon_sym_DOT,
      anon_sym_DOLLAR,
      anon_sym_void,
      anon_sym_entity,
      anon_sym_float,
      anon_sym_vector,
      anon_sym_string,
      anon_sym_int,
  [2809] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(230), 9,
      ts_builtin_sym_end,
      anon_sym_DOT,
      anon_sym_DOLLAR,
      anon_sym_void,
      anon_sym_entity,
      anon_sym_float,
      anon_sym_vector,
      anon_sym_string,
      anon_sym_int,
  [2824] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(232), 9,
      ts_builtin_sym_end,
      anon_sym_DOT,
      anon_sym_DOLLAR,
      anon_sym_void,
      anon_sym_entity,
      anon_sym_float,
      anon_sym_vector,
      anon_sym_string,
      anon_sym_int,
  [2839] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(234), 9,
      ts_builtin_sym_end,
      anon_sym_DOT,
      anon_sym_DOLLAR,
      anon_sym_void,
      anon_sym_entity,
      anon_sym_float,
      anon_sym_vector,
      anon_sym_string,
      anon_sym_int,
  [2854] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(236), 1,
      anon_sym_DOT_DOT_DOT,
    STATE(139), 1,
      sym_parameter,
    STATE(148), 1,
      sym_simple_type,
    ACTIONS(11), 6,
      anon_sym_void,
      anon_sym_entity,
      anon_sym_float,
      anon_sym_vector,
      anon_sym_string,
      anon_sym_int,
  [2875] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(238), 9,
      ts_builtin_sym_end,
      anon_sym_DOT,
      anon_sym_DOLLAR,
      anon_sym_void,
      anon_sym_entity,
      anon_sym_float,
      anon_sym_vector,
      anon_sym_string,
      anon_sym_int,
  [2890] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(240), 9,
      ts_builtin_sym_end,
      anon_sym_DOT,
      anon_sym_DOLLAR,
      anon_sym_void,
      anon_sym_entity,
      anon_sym_float,
      anon_sym_vector,
      anon_sym_string,
      anon_sym_int,
  [2905] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(242), 1,
      anon_sym_DOT_DOT_DOT,
    STATE(139), 1,
      sym_parameter,
    STATE(148), 1,
      sym_simple_type,
    ACTIONS(11), 6,
      anon_sym_void,
      anon_sym_entity,
      anon_sym_float,
      anon_sym_vector,
      anon_sym_string,
      anon_sym_int,
  [2926] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(244), 9,
      ts_builtin_sym_end,
      anon_sym_DOT,
      anon_sym_DOLLAR,
      anon_sym_void,
      anon_sym_entity,
      anon_sym_float,
      anon_sym_vector,
      anon_sym_string,
      anon_sym_int,
  [2941] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(41), 1,
      anon_sym_BQUOTE,
    ACTIONS(43), 1,
      anon_sym_DQUOTE,
    ACTIONS(246), 1,
      sym__integer_literal,
    ACTIONS(248), 1,
      sym__float_literal,
    STATE(112), 4,
      sym__literal,
      sym_numeric_literal,
      sym_vector_literal,
      sym_string_literal,
  [2963] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(41), 1,
      anon_sym_BQUOTE,
    ACTIONS(43), 1,
      anon_sym_DQUOTE,
    ACTIONS(246), 1,
      sym__integer_literal,
    ACTIONS(248), 1,
      sym__float_literal,
    STATE(109), 4,
      sym__literal,
      sym_numeric_literal,
      sym_vector_literal,
      sym_string_literal,
  [2985] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(41), 1,
      anon_sym_BQUOTE,
    ACTIONS(43), 1,
      anon_sym_DQUOTE,
    ACTIONS(246), 1,
      sym__integer_literal,
    ACTIONS(248), 1,
      sym__float_literal,
    STATE(171), 4,
      sym__literal,
      sym_numeric_literal,
      sym_vector_literal,
      sym_string_literal,
  [3007] = 4,
    ACTIONS(3), 1,
      sym_comment,
    STATE(139), 1,
      sym_parameter,
    STATE(148), 1,
      sym_simple_type,
    ACTIONS(11), 6,
      anon_sym_void,
      anon_sym_entity,
      anon_sym_float,
      anon_sym_vector,
      anon_sym_string,
      anon_sym_int,
  [3025] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(41), 1,
      anon_sym_BQUOTE,
    ACTIONS(43), 1,
      anon_sym_DQUOTE,
    ACTIONS(246), 1,
      sym__integer_literal,
    ACTIONS(248), 1,
      sym__float_literal,
    STATE(94), 4,
      sym__literal,
      sym_numeric_literal,
      sym_vector_literal,
      sym_string_literal,
  [3047] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(41), 1,
      anon_sym_BQUOTE,
    ACTIONS(43), 1,
      anon_sym_DQUOTE,
    ACTIONS(246), 1,
      sym__integer_literal,
    ACTIONS(248), 1,
      sym__float_literal,
    STATE(103), 4,
      sym__literal,
      sym_numeric_literal,
      sym_vector_literal,
      sym_string_literal,
  [3069] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(41), 1,
      anon_sym_BQUOTE,
    ACTIONS(43), 1,
      anon_sym_DQUOTE,
    ACTIONS(246), 1,
      sym__integer_literal,
    ACTIONS(248), 1,
      sym__float_literal,
    STATE(110), 4,
      sym__literal,
      sym_numeric_literal,
      sym_vector_literal,
      sym_string_literal,
  [3091] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(41), 1,
      anon_sym_BQUOTE,
    ACTIONS(43), 1,
      anon_sym_DQUOTE,
    ACTIONS(246), 1,
      sym__integer_literal,
    ACTIONS(248), 1,
      sym__float_literal,
    STATE(102), 4,
      sym__literal,
      sym_numeric_literal,
      sym_vector_literal,
      sym_string_literal,
  [3113] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(41), 1,
      anon_sym_BQUOTE,
    ACTIONS(43), 1,
      anon_sym_DQUOTE,
    ACTIONS(246), 1,
      sym__integer_literal,
    ACTIONS(248), 1,
      sym__float_literal,
    STATE(98), 4,
      sym__literal,
      sym_numeric_literal,
      sym_vector_literal,
      sym_string_literal,
  [3135] = 3,
    ACTIONS(3), 1,
      sym_comment,
    STATE(152), 1,
      sym_simple_type,
    ACTIONS(11), 6,
      anon_sym_void,
      anon_sym_entity,
      anon_sym_float,
      anon_sym_vector,
      anon_sym_string,
      anon_sym_int,
  [3150] = 3,
    ACTIONS(3), 1,
      sym_comment,
    STATE(168), 1,
      sym_simple_type,
    ACTIONS(11), 6,
      anon_sym_void,
      anon_sym_entity,
      anon_sym_float,
      anon_sym_vector,
      anon_sym_string,
      anon_sym_int,
  [3165] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(137), 1,
      sym__integer_literal,
    ACTIONS(135), 6,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_else,
      anon_sym_while,
      sym__float_literal,
      anon_sym_BQUOTE,
  [3180] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(252), 1,
      anon_sym_EQ,
    ACTIONS(254), 1,
      anon_sym_COMMA,
    STATE(99), 1,
      aux_sym_variable_definition_statement_repeat1,
    ACTIONS(250), 3,
      anon_sym_SEMI,
      anon_sym_else,
      anon_sym_while,
  [3198] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(254), 1,
      anon_sym_COMMA,
    ACTIONS(258), 1,
      anon_sym_EQ,
    STATE(96), 1,
      aux_sym_variable_definition_statement_repeat1,
    ACTIONS(256), 3,
      anon_sym_SEMI,
      anon_sym_else,
      anon_sym_while,
  [3216] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(254), 1,
      anon_sym_COMMA,
    ACTIONS(262), 1,
      anon_sym_EQ,
    STATE(101), 1,
      aux_sym_variable_definition_statement_repeat1,
    ACTIONS(260), 3,
      anon_sym_SEMI,
      anon_sym_else,
      anon_sym_while,
  [3234] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(254), 1,
      anon_sym_COMMA,
    ACTIONS(266), 1,
      anon_sym_EQ,
    STATE(100), 1,
      aux_sym_variable_definition_statement_repeat1,
    ACTIONS(264), 3,
      anon_sym_SEMI,
      anon_sym_else,
      anon_sym_while,
  [3252] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(270), 1,
      anon_sym_EQ,
    ACTIONS(268), 4,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_else,
      anon_sym_while,
  [3265] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(254), 1,
      anon_sym_COMMA,
    STATE(100), 1,
      aux_sym_variable_definition_statement_repeat1,
    ACTIONS(264), 3,
      anon_sym_SEMI,
      anon_sym_else,
      anon_sym_while,
  [3280] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(254), 1,
      anon_sym_COMMA,
    STATE(97), 1,
      aux_sym_variable_definition_statement_repeat1,
    ACTIONS(272), 3,
      anon_sym_SEMI,
      anon_sym_else,
      anon_sym_while,
  [3295] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(254), 1,
      anon_sym_COMMA,
    STATE(97), 1,
      aux_sym_variable_definition_statement_repeat1,
    ACTIONS(274), 3,
      anon_sym_SEMI,
      anon_sym_else,
      anon_sym_while,
  [3310] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(276), 1,
      anon_sym_COMMA,
    STATE(97), 1,
      aux_sym_variable_definition_statement_repeat1,
    ACTIONS(268), 3,
      anon_sym_SEMI,
      anon_sym_else,
      anon_sym_while,
  [3325] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(254), 1,
      anon_sym_COMMA,
    STATE(101), 1,
      aux_sym_variable_definition_statement_repeat1,
    ACTIONS(260), 3,
      anon_sym_SEMI,
      anon_sym_else,
      anon_sym_while,
  [3340] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(254), 1,
      anon_sym_COMMA,
    STATE(97), 1,
      aux_sym_variable_definition_statement_repeat1,
    ACTIONS(279), 3,
      anon_sym_SEMI,
      anon_sym_else,
      anon_sym_while,
  [3355] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(254), 1,
      anon_sym_COMMA,
    STATE(97), 1,
      aux_sym_variable_definition_statement_repeat1,
    ACTIONS(281), 3,
      anon_sym_SEMI,
      anon_sym_else,
      anon_sym_while,
  [3370] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(254), 1,
      anon_sym_COMMA,
    STATE(97), 1,
      aux_sym_variable_definition_statement_repeat1,
    ACTIONS(283), 3,
      anon_sym_SEMI,
      anon_sym_else,
      anon_sym_while,
  [3385] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(254), 1,
      anon_sym_COMMA,
    STATE(105), 1,
      aux_sym_variable_definition_statement_repeat1,
    ACTIONS(285), 3,
      anon_sym_SEMI,
      anon_sym_else,
      anon_sym_while,
  [3400] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(254), 1,
      anon_sym_COMMA,
    STATE(95), 1,
      aux_sym_variable_definition_statement_repeat1,
    ACTIONS(287), 3,
      anon_sym_SEMI,
      anon_sym_else,
      anon_sym_while,
  [3415] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(291), 1,
      anon_sym_EQ,
    ACTIONS(293), 1,
      anon_sym_COMMA,
    ACTIONS(289), 3,
      anon_sym_SEMI,
      anon_sym_else,
      anon_sym_while,
  [3430] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(254), 1,
      anon_sym_COMMA,
    STATE(97), 1,
      aux_sym_variable_definition_statement_repeat1,
    ACTIONS(295), 3,
      anon_sym_SEMI,
      anon_sym_else,
      anon_sym_while,
  [3445] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(299), 1,
      anon_sym_EQ,
    ACTIONS(301), 1,
      anon_sym_COMMA,
    ACTIONS(297), 3,
      anon_sym_SEMI,
      anon_sym_else,
      anon_sym_while,
  [3460] = 4,
    ACTIONS(305), 1,
      aux_sym_string_literal_token3,
    ACTIONS(307), 1,
      sym_comment,
    STATE(111), 1,
      aux_sym_string_literal_repeat1,
    ACTIONS(303), 2,
      aux_sym_string_literal_token1,
      aux_sym_string_literal_token2,
  [3474] = 4,
    ACTIONS(307), 1,
      sym_comment,
    ACTIONS(311), 1,
      aux_sym_string_literal_token3,
    STATE(107), 1,
      aux_sym_string_literal_repeat1,
    ACTIONS(309), 2,
      aux_sym_string_literal_token1,
      aux_sym_string_literal_token2,
  [3488] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(313), 1,
      anon_sym_COMMA,
    ACTIONS(250), 3,
      anon_sym_SEMI,
      anon_sym_else,
      anon_sym_while,
  [3500] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(315), 4,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_else,
      anon_sym_while,
  [3510] = 4,
    ACTIONS(307), 1,
      sym_comment,
    ACTIONS(320), 1,
      aux_sym_string_literal_token3,
    STATE(111), 1,
      aux_sym_string_literal_repeat1,
    ACTIONS(317), 2,
      aux_sym_string_literal_token1,
      aux_sym_string_literal_token2,
  [3524] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(322), 1,
      anon_sym_COMMA,
    ACTIONS(256), 3,
      anon_sym_SEMI,
      anon_sym_else,
      anon_sym_while,
  [3536] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(324), 1,
      anon_sym_SEMI,
    ACTIONS(326), 1,
      anon_sym_COMMA,
    STATE(118), 1,
      aux_sym_variable_definition_repeat1,
  [3549] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(328), 1,
      anon_sym_COMMA,
    ACTIONS(330), 1,
      anon_sym_RPAREN,
    STATE(115), 1,
      aux_sym_parameter_list_repeat1,
  [3562] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(332), 1,
      anon_sym_COMMA,
    ACTIONS(335), 1,
      anon_sym_RPAREN,
    STATE(115), 1,
      aux_sym_parameter_list_repeat1,
  [3575] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(337), 3,
      anon_sym_SEMI,
      anon_sym_else,
      anon_sym_while,
  [3584] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(177), 1,
      anon_sym_COMMA,
    ACTIONS(339), 1,
      anon_sym_RPAREN,
    STATE(131), 1,
      aux_sym_funcall_expression_repeat1,
  [3597] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(341), 1,
      anon_sym_SEMI,
    ACTIONS(343), 1,
      anon_sym_COMMA,
    STATE(118), 1,
      aux_sym_variable_definition_repeat1,
  [3610] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(346), 3,
      anon_sym_SEMI,
      anon_sym_else,
      anon_sym_while,
  [3619] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(348), 3,
      anon_sym_SEMI,
      anon_sym_else,
      anon_sym_while,
  [3628] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(326), 1,
      anon_sym_COMMA,
    ACTIONS(350), 1,
      anon_sym_SEMI,
    STATE(130), 1,
      aux_sym_variable_definition_repeat1,
  [3641] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(326), 1,
      anon_sym_COMMA,
    ACTIONS(352), 1,
      anon_sym_SEMI,
    STATE(113), 1,
      aux_sym_variable_definition_repeat1,
  [3654] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(356), 1,
      anon_sym_else,
    ACTIONS(354), 2,
      anon_sym_SEMI,
      anon_sym_while,
  [3665] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(246), 1,
      sym__integer_literal,
    ACTIONS(248), 1,
      sym__float_literal,
    STATE(126), 1,
      sym_numeric_literal,
  [3678] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(358), 1,
      anon_sym_COMMA,
    ACTIONS(360), 1,
      anon_sym_RPAREN,
    STATE(114), 1,
      aux_sym_parameter_list_repeat1,
  [3691] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(246), 1,
      sym__integer_literal,
    ACTIONS(248), 1,
      sym__float_literal,
    STATE(133), 1,
      sym_numeric_literal,
  [3704] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(362), 3,
      anon_sym_SEMI,
      anon_sym_else,
      anon_sym_while,
  [3713] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(364), 1,
      anon_sym_LPAREN,
    ACTIONS(366), 1,
      sym_identifier,
    STATE(145), 1,
      sym_parameter_list,
  [3726] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(368), 3,
      anon_sym_SEMI,
      anon_sym_else,
      anon_sym_while,
  [3735] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(326), 1,
      anon_sym_COMMA,
    ACTIONS(370), 1,
      anon_sym_SEMI,
    STATE(118), 1,
      aux_sym_variable_definition_repeat1,
  [3748] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(372), 1,
      anon_sym_COMMA,
    ACTIONS(375), 1,
      anon_sym_RPAREN,
    STATE(131), 1,
      aux_sym_funcall_expression_repeat1,
  [3761] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(377), 1,
      anon_sym_SEMI,
    ACTIONS(379), 1,
      anon_sym_EQ,
    ACTIONS(381), 1,
      anon_sym_COMMA,
  [3774] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(246), 1,
      sym__integer_literal,
    ACTIONS(248), 1,
      sym__float_literal,
    STATE(146), 1,
      sym_numeric_literal,
  [3787] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(383), 1,
      anon_sym_SEMI,
    ACTIONS(385), 1,
      anon_sym_COMMA,
  [3797] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(387), 1,
      anon_sym_SEMI,
    ACTIONS(389), 1,
      anon_sym_EQ,
  [3807] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(391), 1,
      anon_sym_DOLLAR,
    STATE(175), 1,
      sym_frame_identifier,
  [3817] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(393), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [3825] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(395), 2,
      anon_sym_LPAREN,
      sym_identifier,
  [3833] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(335), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [3841] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(397), 2,
      anon_sym_SEMI,
      anon_sym_COMMA,
  [3849] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(399), 1,
      sym_identifier,
  [3856] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(401), 1,
      sym_identifier,
  [3863] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(403), 1,
      anon_sym_DOT_DOT_DOT,
  [3870] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(405), 1,
      sym_identifier,
  [3877] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(407), 1,
      sym_identifier,
  [3884] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(409), 1,
      anon_sym_BQUOTE,
  [3891] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(411), 1,
      sym_identifier,
  [3898] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(413), 1,
      sym_identifier,
  [3905] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(415), 1,
      anon_sym_RBRACK,
  [3912] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(417), 1,
      sym_identifier,
  [3919] = 2,
    ACTIONS(307), 1,
      sym_comment,
    ACTIONS(419), 1,
      aux_sym_modelgen_pragma_token2,
  [3926] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(421), 1,
      sym_identifier,
  [3933] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(423), 1,
      sym_identifier,
  [3940] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(425), 1,
      sym_identifier,
  [3947] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(427), 1,
      sym_identifier,
  [3954] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(429), 1,
      sym_identifier,
  [3961] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(431), 1,
      anon_sym_LPAREN,
  [3968] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(433), 1,
      anon_sym_SEMI,
  [3975] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(435), 1,
      anon_sym_SEMI,
  [3982] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(437), 1,
      sym_identifier,
  [3989] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(330), 1,
      anon_sym_RPAREN,
  [3996] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(439), 1,
      sym_identifier,
  [4003] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(441), 1,
      anon_sym_LPAREN,
  [4010] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(443), 1,
      anon_sym_SEMI,
  [4017] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(445), 1,
      anon_sym_SEMI,
  [4024] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(447), 1,
      sym_identifier,
  [4031] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(449), 1,
      sym_identifier,
  [4038] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(451), 1,
      sym_identifier,
  [4045] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(453), 1,
      ts_builtin_sym_end,
  [4052] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(455), 1,
      sym_identifier,
  [4059] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(457), 1,
      anon_sym_SEMI,
  [4066] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(459), 1,
      anon_sym_while,
  [4073] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(461), 1,
      anon_sym_SEMI,
  [4080] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(463), 1,
      anon_sym_LPAREN,
  [4087] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(465), 1,
      anon_sym_COMMA,
  [4094] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(467), 1,
      aux_sym_frame_identifier_token1,
  [4101] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(469), 1,
      sym_identifier,
  [4108] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(471), 1,
      anon_sym_RPAREN,
  [4115] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(473), 1,
      sym_identifier,
  [4122] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(475), 1,
      anon_sym_COMMA,
  [4129] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(477), 1,
      anon_sym_DQUOTE,
  [4136] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(479), 1,
      anon_sym_DQUOTE,
  [4143] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(481), 1,
      anon_sym_RPAREN,
  [4150] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(483), 1,
      aux_sym_modelgen_pragma_token1,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 89,
  [SMALL_STATE(4)] = 175,
  [SMALL_STATE(5)] = 258,
  [SMALL_STATE(6)] = 341,
  [SMALL_STATE(7)] = 424,
  [SMALL_STATE(8)] = 507,
  [SMALL_STATE(9)] = 591,
  [SMALL_STATE(10)] = 675,
  [SMALL_STATE(11)] = 759,
  [SMALL_STATE(12)] = 793,
  [SMALL_STATE(13)] = 832,
  [SMALL_STATE(14)] = 868,
  [SMALL_STATE(15)] = 900,
  [SMALL_STATE(16)] = 937,
  [SMALL_STATE(17)] = 972,
  [SMALL_STATE(18)] = 1003,
  [SMALL_STATE(19)] = 1032,
  [SMALL_STATE(20)] = 1061,
  [SMALL_STATE(21)] = 1090,
  [SMALL_STATE(22)] = 1119,
  [SMALL_STATE(23)] = 1148,
  [SMALL_STATE(24)] = 1193,
  [SMALL_STATE(25)] = 1222,
  [SMALL_STATE(26)] = 1251,
  [SMALL_STATE(27)] = 1280,
  [SMALL_STATE(28)] = 1321,
  [SMALL_STATE(29)] = 1366,
  [SMALL_STATE(30)] = 1413,
  [SMALL_STATE(31)] = 1444,
  [SMALL_STATE(32)] = 1483,
  [SMALL_STATE(33)] = 1511,
  [SMALL_STATE(34)] = 1554,
  [SMALL_STATE(35)] = 1605,
  [SMALL_STATE(36)] = 1652,
  [SMALL_STATE(37)] = 1699,
  [SMALL_STATE(38)] = 1746,
  [SMALL_STATE(39)] = 1786,
  [SMALL_STATE(40)] = 1826,
  [SMALL_STATE(41)] = 1866,
  [SMALL_STATE(42)] = 1906,
  [SMALL_STATE(43)] = 1940,
  [SMALL_STATE(44)] = 1986,
  [SMALL_STATE(45)] = 2026,
  [SMALL_STATE(46)] = 2066,
  [SMALL_STATE(47)] = 2106,
  [SMALL_STATE(48)] = 2146,
  [SMALL_STATE(49)] = 2186,
  [SMALL_STATE(50)] = 2226,
  [SMALL_STATE(51)] = 2266,
  [SMALL_STATE(52)] = 2306,
  [SMALL_STATE(53)] = 2346,
  [SMALL_STATE(54)] = 2380,
  [SMALL_STATE(55)] = 2420,
  [SMALL_STATE(56)] = 2460,
  [SMALL_STATE(57)] = 2500,
  [SMALL_STATE(58)] = 2545,
  [SMALL_STATE(59)] = 2590,
  [SMALL_STATE(60)] = 2635,
  [SMALL_STATE(61)] = 2680,
  [SMALL_STATE(62)] = 2704,
  [SMALL_STATE(63)] = 2719,
  [SMALL_STATE(64)] = 2734,
  [SMALL_STATE(65)] = 2749,
  [SMALL_STATE(66)] = 2764,
  [SMALL_STATE(67)] = 2779,
  [SMALL_STATE(68)] = 2794,
  [SMALL_STATE(69)] = 2809,
  [SMALL_STATE(70)] = 2824,
  [SMALL_STATE(71)] = 2839,
  [SMALL_STATE(72)] = 2854,
  [SMALL_STATE(73)] = 2875,
  [SMALL_STATE(74)] = 2890,
  [SMALL_STATE(75)] = 2905,
  [SMALL_STATE(76)] = 2926,
  [SMALL_STATE(77)] = 2941,
  [SMALL_STATE(78)] = 2963,
  [SMALL_STATE(79)] = 2985,
  [SMALL_STATE(80)] = 3007,
  [SMALL_STATE(81)] = 3025,
  [SMALL_STATE(82)] = 3047,
  [SMALL_STATE(83)] = 3069,
  [SMALL_STATE(84)] = 3091,
  [SMALL_STATE(85)] = 3113,
  [SMALL_STATE(86)] = 3135,
  [SMALL_STATE(87)] = 3150,
  [SMALL_STATE(88)] = 3165,
  [SMALL_STATE(89)] = 3180,
  [SMALL_STATE(90)] = 3198,
  [SMALL_STATE(91)] = 3216,
  [SMALL_STATE(92)] = 3234,
  [SMALL_STATE(93)] = 3252,
  [SMALL_STATE(94)] = 3265,
  [SMALL_STATE(95)] = 3280,
  [SMALL_STATE(96)] = 3295,
  [SMALL_STATE(97)] = 3310,
  [SMALL_STATE(98)] = 3325,
  [SMALL_STATE(99)] = 3340,
  [SMALL_STATE(100)] = 3355,
  [SMALL_STATE(101)] = 3370,
  [SMALL_STATE(102)] = 3385,
  [SMALL_STATE(103)] = 3400,
  [SMALL_STATE(104)] = 3415,
  [SMALL_STATE(105)] = 3430,
  [SMALL_STATE(106)] = 3445,
  [SMALL_STATE(107)] = 3460,
  [SMALL_STATE(108)] = 3474,
  [SMALL_STATE(109)] = 3488,
  [SMALL_STATE(110)] = 3500,
  [SMALL_STATE(111)] = 3510,
  [SMALL_STATE(112)] = 3524,
  [SMALL_STATE(113)] = 3536,
  [SMALL_STATE(114)] = 3549,
  [SMALL_STATE(115)] = 3562,
  [SMALL_STATE(116)] = 3575,
  [SMALL_STATE(117)] = 3584,
  [SMALL_STATE(118)] = 3597,
  [SMALL_STATE(119)] = 3610,
  [SMALL_STATE(120)] = 3619,
  [SMALL_STATE(121)] = 3628,
  [SMALL_STATE(122)] = 3641,
  [SMALL_STATE(123)] = 3654,
  [SMALL_STATE(124)] = 3665,
  [SMALL_STATE(125)] = 3678,
  [SMALL_STATE(126)] = 3691,
  [SMALL_STATE(127)] = 3704,
  [SMALL_STATE(128)] = 3713,
  [SMALL_STATE(129)] = 3726,
  [SMALL_STATE(130)] = 3735,
  [SMALL_STATE(131)] = 3748,
  [SMALL_STATE(132)] = 3761,
  [SMALL_STATE(133)] = 3774,
  [SMALL_STATE(134)] = 3787,
  [SMALL_STATE(135)] = 3797,
  [SMALL_STATE(136)] = 3807,
  [SMALL_STATE(137)] = 3817,
  [SMALL_STATE(138)] = 3825,
  [SMALL_STATE(139)] = 3833,
  [SMALL_STATE(140)] = 3841,
  [SMALL_STATE(141)] = 3849,
  [SMALL_STATE(142)] = 3856,
  [SMALL_STATE(143)] = 3863,
  [SMALL_STATE(144)] = 3870,
  [SMALL_STATE(145)] = 3877,
  [SMALL_STATE(146)] = 3884,
  [SMALL_STATE(147)] = 3891,
  [SMALL_STATE(148)] = 3898,
  [SMALL_STATE(149)] = 3905,
  [SMALL_STATE(150)] = 3912,
  [SMALL_STATE(151)] = 3919,
  [SMALL_STATE(152)] = 3926,
  [SMALL_STATE(153)] = 3933,
  [SMALL_STATE(154)] = 3940,
  [SMALL_STATE(155)] = 3947,
  [SMALL_STATE(156)] = 3954,
  [SMALL_STATE(157)] = 3961,
  [SMALL_STATE(158)] = 3968,
  [SMALL_STATE(159)] = 3975,
  [SMALL_STATE(160)] = 3982,
  [SMALL_STATE(161)] = 3989,
  [SMALL_STATE(162)] = 3996,
  [SMALL_STATE(163)] = 4003,
  [SMALL_STATE(164)] = 4010,
  [SMALL_STATE(165)] = 4017,
  [SMALL_STATE(166)] = 4024,
  [SMALL_STATE(167)] = 4031,
  [SMALL_STATE(168)] = 4038,
  [SMALL_STATE(169)] = 4045,
  [SMALL_STATE(170)] = 4052,
  [SMALL_STATE(171)] = 4059,
  [SMALL_STATE(172)] = 4066,
  [SMALL_STATE(173)] = 4073,
  [SMALL_STATE(174)] = 4080,
  [SMALL_STATE(175)] = 4087,
  [SMALL_STATE(176)] = 4094,
  [SMALL_STATE(177)] = 4101,
  [SMALL_STATE(178)] = 4108,
  [SMALL_STATE(179)] = 4115,
  [SMALL_STATE(180)] = 4122,
  [SMALL_STATE(181)] = 4129,
  [SMALL_STATE(182)] = 4136,
  [SMALL_STATE(183)] = 4143,
  [SMALL_STATE(184)] = 4150,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT_EXTRA(),
  [5] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(86),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(184),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(138),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(136),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [19] = {.entry = {.count = 1, .reusable = false}}, SHIFT(157),
  [21] = {.entry = {.count = 1, .reusable = false}}, SHIFT(163),
  [23] = {.entry = {.count = 1, .reusable = false}}, SHIFT(6),
  [25] = {.entry = {.count = 1, .reusable = false}}, SHIFT(38),
  [27] = {.entry = {.count = 1, .reusable = false}}, SHIFT(87),
  [29] = {.entry = {.count = 1, .reusable = false}}, SHIFT(45),
  [31] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [33] = {.entry = {.count = 1, .reusable = false}}, SHIFT(138),
  [35] = {.entry = {.count = 1, .reusable = false}}, SHIFT(12),
  [37] = {.entry = {.count = 1, .reusable = false}}, SHIFT(20),
  [39] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [41] = {.entry = {.count = 1, .reusable = true}}, SHIFT(124),
  [43] = {.entry = {.count = 1, .reusable = true}}, SHIFT(108),
  [45] = {.entry = {.count = 1, .reusable = true}}, SHIFT(164),
  [47] = {.entry = {.count = 1, .reusable = true}}, SHIFT(158),
  [49] = {.entry = {.count = 1, .reusable = true}}, SHIFT(116),
  [51] = {.entry = {.count = 1, .reusable = true}}, SHIFT(119),
  [53] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_compound_statement_repeat1, 2), SHIFT_REPEAT(52),
  [56] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_compound_statement_repeat1, 2),
  [58] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_compound_statement_repeat1, 2), SHIFT_REPEAT(157),
  [61] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_compound_statement_repeat1, 2), SHIFT_REPEAT(163),
  [64] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_compound_statement_repeat1, 2), SHIFT_REPEAT(6),
  [67] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_compound_statement_repeat1, 2), SHIFT_REPEAT(38),
  [70] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_compound_statement_repeat1, 2), SHIFT_REPEAT(87),
  [73] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_compound_statement_repeat1, 2), SHIFT_REPEAT(45),
  [76] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_compound_statement_repeat1, 2), SHIFT_REPEAT(45),
  [79] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_compound_statement_repeat1, 2), SHIFT_REPEAT(138),
  [82] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_compound_statement_repeat1, 2), SHIFT_REPEAT(12),
  [85] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_compound_statement_repeat1, 2), SHIFT_REPEAT(20),
  [88] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_compound_statement_repeat1, 2), SHIFT_REPEAT(20),
  [91] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_compound_statement_repeat1, 2), SHIFT_REPEAT(124),
  [94] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_compound_statement_repeat1, 2), SHIFT_REPEAT(108),
  [97] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_field_expression, 3, .production_id = 14),
  [99] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_field_expression, 3, .production_id = 14),
  [101] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__expression, 1),
  [103] = {.entry = {.count = 1, .reusable = false}}, SHIFT(56),
  [105] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [107] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
  [109] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__expression, 1),
  [111] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_binary_expression, 3),
  [113] = {.entry = {.count = 1, .reusable = true}}, SHIFT(166),
  [115] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [117] = {.entry = {.count = 1, .reusable = false}}, SHIFT(47),
  [119] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_binary_expression, 3),
  [121] = {.entry = {.count = 1, .reusable = false}}, SHIFT(49),
  [123] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_unary_expression, 2),
  [125] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_unary_expression, 2),
  [127] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_funcall_expression, 4, .production_id = 15),
  [129] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_funcall_expression, 4, .production_id = 15),
  [131] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_funcall_expression, 3, .production_id = 13),
  [133] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_funcall_expression, 3, .production_id = 13),
  [135] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_numeric_literal, 1),
  [137] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_numeric_literal, 1),
  [139] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_vector_literal, 5),
  [141] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_vector_literal, 5),
  [143] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parenthesized_expression, 3),
  [145] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_parenthesized_expression, 3),
  [147] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [149] = {.entry = {.count = 1, .reusable = false}}, SHIFT(50),
  [151] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [153] = {.entry = {.count = 1, .reusable = false}}, SHIFT(46),
  [155] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string_literal, 4),
  [157] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string_literal, 4),
  [159] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_funcall_expression, 5, .production_id = 18),
  [161] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_funcall_expression, 5, .production_id = 18),
  [163] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string_literal, 3),
  [165] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string_literal, 3),
  [167] = {.entry = {.count = 1, .reusable = false}}, SHIFT(51),
  [169] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [171] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_compound_statement_repeat1, 2),
  [173] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [175] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [177] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
  [179] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [181] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [183] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__expression_statement, 1),
  [185] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_assignment_statement, 3, .production_id = 12),
  [187] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_return_statement, 2),
  [189] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1),
  [191] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_funcall_expression_repeat1, 2, .production_id = 17),
  [193] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2),
  [195] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(86),
  [198] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(184),
  [201] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(138),
  [204] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [206] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [208] = {.entry = {.count = 1, .reusable = true}}, SHIFT(127),
  [210] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [212] = {.entry = {.count = 1, .reusable = true}}, SHIFT(143),
  [214] = {.entry = {.count = 1, .reusable = true}}, SHIFT(147),
  [216] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable_definition, 5, .production_id = 5),
  [218] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_modelgen_pragma, 3),
  [220] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_definition, 6, .production_id = 10),
  [222] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_definition, 6, .production_id = 3),
  [224] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_field_definition, 6, .production_id = 6),
  [226] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_definition, 11, .production_id = 21),
  [228] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable_definition, 3, .production_id = 1),
  [230] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_field_definition, 4, .production_id = 2),
  [232] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_constant_definition, 5, .production_id = 4),
  [234] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_field_definition, 7, .production_id = 11),
  [236] = {.entry = {.count = 1, .reusable = true}}, SHIFT(178),
  [238] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_declaration, 4, .production_id = 3),
  [240] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_definition, 11, .production_id = 3),
  [242] = {.entry = {.count = 1, .reusable = true}}, SHIFT(183),
  [244] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable_definition, 6, .production_id = 8),
  [246] = {.entry = {.count = 1, .reusable = false}}, SHIFT(88),
  [248] = {.entry = {.count = 1, .reusable = true}}, SHIFT(88),
  [250] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable_definition_statement, 4, .production_id = 1),
  [252] = {.entry = {.count = 1, .reusable = true}}, SHIFT(81),
  [254] = {.entry = {.count = 1, .reusable = true}}, SHIFT(156),
  [256] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable_definition_statement, 5, .production_id = 2),
  [258] = {.entry = {.count = 1, .reusable = true}}, SHIFT(85),
  [260] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable_definition_statement, 7, .production_id = 2),
  [262] = {.entry = {.count = 1, .reusable = true}}, SHIFT(82),
  [264] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable_definition_statement, 6, .production_id = 1),
  [266] = {.entry = {.count = 1, .reusable = true}}, SHIFT(84),
  [268] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_variable_definition_statement_repeat1, 2),
  [270] = {.entry = {.count = 1, .reusable = true}}, SHIFT(83),
  [272] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable_definition_statement, 10, .production_id = 2),
  [274] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable_definition_statement, 6, .production_id = 2),
  [276] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_variable_definition_statement_repeat1, 2), SHIFT_REPEAT(156),
  [279] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable_definition_statement, 5, .production_id = 1),
  [281] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable_definition_statement, 7, .production_id = 1),
  [283] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable_definition_statement, 8, .production_id = 2),
  [285] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable_definition_statement, 8, .production_id = 1),
  [287] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable_definition_statement, 9, .production_id = 2),
  [289] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable_definition_statement, 2, .production_id = 1),
  [291] = {.entry = {.count = 1, .reusable = true}}, SHIFT(78),
  [293] = {.entry = {.count = 1, .reusable = true}}, SHIFT(153),
  [295] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable_definition_statement, 9, .production_id = 1),
  [297] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable_definition_statement, 3, .production_id = 2),
  [299] = {.entry = {.count = 1, .reusable = true}}, SHIFT(77),
  [301] = {.entry = {.count = 1, .reusable = true}}, SHIFT(162),
  [303] = {.entry = {.count = 1, .reusable = false}}, SHIFT(111),
  [305] = {.entry = {.count = 1, .reusable = false}}, SHIFT(181),
  [307] = {.entry = {.count = 1, .reusable = false}}, SHIFT_EXTRA(),
  [309] = {.entry = {.count = 1, .reusable = false}}, SHIFT(107),
  [311] = {.entry = {.count = 1, .reusable = false}}, SHIFT(182),
  [313] = {.entry = {.count = 1, .reusable = true}}, SHIFT(154),
  [315] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_variable_definition_statement_repeat1, 4),
  [317] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_string_literal_repeat1, 2), SHIFT_REPEAT(111),
  [320] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_string_literal_repeat1, 2),
  [322] = {.entry = {.count = 1, .reusable = true}}, SHIFT(142),
  [324] = {.entry = {.count = 1, .reusable = true}}, SHIFT(76),
  [326] = {.entry = {.count = 1, .reusable = true}}, SHIFT(144),
  [328] = {.entry = {.count = 1, .reusable = true}}, SHIFT(75),
  [330] = {.entry = {.count = 1, .reusable = true}}, SHIFT(177),
  [332] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_parameter_list_repeat1, 2), SHIFT_REPEAT(80),
  [335] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_parameter_list_repeat1, 2),
  [337] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_compound_statement, 3),
  [339] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [341] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_variable_definition_repeat1, 2, .production_id = 9),
  [343] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_variable_definition_repeat1, 2, .production_id = 9), SHIFT_REPEAT(144),
  [346] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_compound_statement, 2),
  [348] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_if_statement, 7, .production_id = 16),
  [350] = {.entry = {.count = 1, .reusable = true}}, SHIFT(66),
  [352] = {.entry = {.count = 1, .reusable = true}}, SHIFT(62),
  [354] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_if_statement, 5, .production_id = 16),
  [356] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [358] = {.entry = {.count = 1, .reusable = true}}, SHIFT(72),
  [360] = {.entry = {.count = 1, .reusable = true}}, SHIFT(141),
  [362] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_do_while_statement, 6, .production_id = 20),
  [364] = {.entry = {.count = 1, .reusable = true}}, SHIFT(61),
  [366] = {.entry = {.count = 1, .reusable = true}}, SHIFT(132),
  [368] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_while_statement, 5, .production_id = 16),
  [370] = {.entry = {.count = 1, .reusable = true}}, SHIFT(71),
  [372] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_funcall_expression_repeat1, 2, .production_id = 19), SHIFT_REPEAT(54),
  [375] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_funcall_expression_repeat1, 2, .production_id = 19),
  [377] = {.entry = {.count = 1, .reusable = true}}, SHIFT(68),
  [379] = {.entry = {.count = 1, .reusable = true}}, SHIFT(79),
  [381] = {.entry = {.count = 1, .reusable = true}}, SHIFT(150),
  [383] = {.entry = {.count = 1, .reusable = true}}, SHIFT(69),
  [385] = {.entry = {.count = 1, .reusable = true}}, SHIFT(160),
  [387] = {.entry = {.count = 1, .reusable = true}}, SHIFT(73),
  [389] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [391] = {.entry = {.count = 1, .reusable = true}}, SHIFT(176),
  [393] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter, 2, .production_id = 1),
  [395] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_simple_type, 1),
  [397] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_variable_definition_repeat1, 2, .production_id = 7),
  [399] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter_list, 3),
  [401] = {.entry = {.count = 1, .reusable = true}}, SHIFT(91),
  [403] = {.entry = {.count = 1, .reusable = true}}, SHIFT(161),
  [405] = {.entry = {.count = 1, .reusable = true}}, SHIFT(140),
  [407] = {.entry = {.count = 1, .reusable = true}}, SHIFT(135),
  [409] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [411] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter_list, 2),
  [413] = {.entry = {.count = 1, .reusable = true}}, SHIFT(137),
  [415] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [417] = {.entry = {.count = 1, .reusable = true}}, SHIFT(122),
  [419] = {.entry = {.count = 1, .reusable = false}}, SHIFT(63),
  [421] = {.entry = {.count = 1, .reusable = true}}, SHIFT(134),
  [423] = {.entry = {.count = 1, .reusable = true}}, SHIFT(89),
  [425] = {.entry = {.count = 1, .reusable = true}}, SHIFT(92),
  [427] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter_list, 5),
  [429] = {.entry = {.count = 1, .reusable = true}}, SHIFT(93),
  [431] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [433] = {.entry = {.count = 1, .reusable = true}}, SHIFT(74),
  [435] = {.entry = {.count = 1, .reusable = true}}, SHIFT(67),
  [437] = {.entry = {.count = 1, .reusable = true}}, SHIFT(121),
  [439] = {.entry = {.count = 1, .reusable = true}}, SHIFT(90),
  [441] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [443] = {.entry = {.count = 1, .reusable = true}}, SHIFT(65),
  [445] = {.entry = {.count = 1, .reusable = true}}, SHIFT(64),
  [447] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [449] = {.entry = {.count = 1, .reusable = true}}, SHIFT(104),
  [451] = {.entry = {.count = 1, .reusable = true}}, SHIFT(106),
  [453] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [455] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter_list, 6),
  [457] = {.entry = {.count = 1, .reusable = true}}, SHIFT(70),
  [459] = {.entry = {.count = 1, .reusable = true}}, SHIFT(174),
  [461] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [463] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [465] = {.entry = {.count = 1, .reusable = true}}, SHIFT(179),
  [467] = {.entry = {.count = 1, .reusable = true}}, SHIFT(180),
  [469] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter_list, 4),
  [471] = {.entry = {.count = 1, .reusable = true}}, SHIFT(155),
  [473] = {.entry = {.count = 1, .reusable = true}}, SHIFT(149),
  [475] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_frame_identifier, 2),
  [477] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [479] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [481] = {.entry = {.count = 1, .reusable = true}}, SHIFT(170),
  [483] = {.entry = {.count = 1, .reusable = true}}, SHIFT(151),
};

#ifdef __cplusplus
extern "C" {
#endif
#ifdef _WIN32
#define extern __declspec(dllexport)
#endif

extern const TSLanguage *tree_sitter_quakec(void) {
  static const TSLanguage language = {
    .version = LANGUAGE_VERSION,
    .symbol_count = SYMBOL_COUNT,
    .alias_count = ALIAS_COUNT,
    .token_count = TOKEN_COUNT,
    .external_token_count = EXTERNAL_TOKEN_COUNT,
    .state_count = STATE_COUNT,
    .large_state_count = LARGE_STATE_COUNT,
    .production_id_count = PRODUCTION_ID_COUNT,
    .field_count = FIELD_COUNT,
    .max_alias_sequence_length = MAX_ALIAS_SEQUENCE_LENGTH,
    .parse_table = &ts_parse_table[0][0],
    .small_parse_table = ts_small_parse_table,
    .small_parse_table_map = ts_small_parse_table_map,
    .parse_actions = ts_parse_actions,
    .symbol_names = ts_symbol_names,
    .field_names = ts_field_names,
    .field_map_slices = ts_field_map_slices,
    .field_map_entries = ts_field_map_entries,
    .symbol_metadata = ts_symbol_metadata,
    .public_symbol_map = ts_symbol_map,
    .alias_map = ts_non_terminal_alias_map,
    .alias_sequences = &ts_alias_sequences[0][0],
    .lex_modes = ts_lex_modes,
    .lex_fn = ts_lex,
    .primary_state_ids = ts_primary_state_ids,
  };
  return &language;
}
#ifdef __cplusplus
}
#endif
