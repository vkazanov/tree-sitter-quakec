#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 218
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 96
#define ALIAS_COUNT 0
#define TOKEN_COUNT 57
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 11
#define MAX_ALIAS_SEQUENCE_LENGTH 11
#define PRODUCTION_ID_COUNT 23

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
  [10] = {.index = 23, .length = 1},
  [11] = {.index = 24, .length = 4},
  [12] = {.index = 28, .length = 4},
  [13] = {.index = 32, .length = 2},
  [14] = {.index = 34, .length = 1},
  [15] = {.index = 35, .length = 2},
  [16] = {.index = 37, .length = 2},
  [17] = {.index = 39, .length = 1},
  [18] = {.index = 40, .length = 1},
  [19] = {.index = 41, .length = 3},
  [20] = {.index = 44, .length = 2},
  [21] = {.index = 46, .length = 1},
  [22] = {.index = 47, .length = 4},
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
    {field_value, 1},
  [24] =
    {field_body, 4},
    {field_name, 2},
    {field_parameters, 1},
    {field_result, 0},
  [28] =
    {field_name, 2},
    {field_name, 4},
    {field_name, 5, .inherited = true},
    {field_type, 1},
  [32] =
    {field_target, 0},
    {field_value, 2},
  [34] =
    {field_name, 0},
  [35] =
    {field_argument, 0},
    {field_field, 2},
  [37] =
    {field_arg, 2},
    {field_name, 0},
  [39] =
    {field_condition, 2},
  [40] =
    {field_arg, 1},
  [41] =
    {field_arg, 2},
    {field_arg, 3, .inherited = true},
    {field_name, 0},
  [44] =
    {field_arg, 0, .inherited = true},
    {field_arg, 1, .inherited = true},
  [46] =
    {field_condition, 4},
  [47] =
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
  [8] = 6,
  [9] = 7,
  [10] = 6,
  [11] = 7,
  [12] = 5,
  [13] = 5,
  [14] = 5,
  [15] = 6,
  [16] = 7,
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
  [43] = 41,
  [44] = 41,
  [45] = 45,
  [46] = 46,
  [47] = 47,
  [48] = 41,
  [49] = 49,
  [50] = 50,
  [51] = 51,
  [52] = 52,
  [53] = 53,
  [54] = 54,
  [55] = 53,
  [56] = 56,
  [57] = 57,
  [58] = 58,
  [59] = 59,
  [60] = 60,
  [61] = 61,
  [62] = 62,
  [63] = 63,
  [64] = 64,
  [65] = 62,
  [66] = 66,
  [67] = 67,
  [68] = 68,
  [69] = 69,
  [70] = 53,
  [71] = 71,
  [72] = 62,
  [73] = 62,
  [74] = 53,
  [75] = 75,
  [76] = 76,
  [77] = 75,
  [78] = 78,
  [79] = 75,
  [80] = 78,
  [81] = 75,
  [82] = 78,
  [83] = 83,
  [84] = 78,
  [85] = 85,
  [86] = 86,
  [87] = 87,
  [88] = 88,
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
  [111] = 27,
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
  [164] = 159,
  [165] = 159,
  [166] = 166,
  [167] = 159,
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
  [185] = 185,
  [186] = 186,
  [187] = 187,
  [188] = 188,
  [189] = 189,
  [190] = 190,
  [191] = 191,
  [192] = 192,
  [193] = 193,
  [194] = 194,
  [195] = 195,
  [196] = 196,
  [197] = 197,
  [198] = 198,
  [199] = 199,
  [200] = 200,
  [201] = 201,
  [202] = 202,
  [203] = 203,
  [204] = 204,
  [205] = 205,
  [206] = 206,
  [207] = 207,
  [208] = 195,
  [209] = 209,
  [210] = 210,
  [211] = 195,
  [212] = 212,
  [213] = 195,
  [214] = 168,
  [215] = 215,
  [216] = 168,
  [217] = 168,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(103);
      if (lookahead == '!') ADVANCE(149);
      if (lookahead == '"') ADVANCE(215);
      if (lookahead == '#') ADVANCE(96);
      if (lookahead == '$') ADVANCE(114);
      if (lookahead == '&') ADVANCE(151);
      if (lookahead == '(') ADVANCE(111);
      if (lookahead == ')') ADVANCE(113);
      if (lookahead == '*') ADVANCE(145);
      if (lookahead == '+') ADVANCE(144);
      if (lookahead == ',') ADVANCE(107);
      if (lookahead == '-') ADVANCE(140);
      if (lookahead == '.') ADVANCE(110);
      if (lookahead == '/') ADVANCE(146);
      if (lookahead == ';') ADVANCE(104);
      if (lookahead == '<') ADVANCE(157);
      if (lookahead == '=') ADVANCE(105);
      if (lookahead == '>') ADVANCE(154);
      if (lookahead == '[') ADVANCE(106);
      if (lookahead == '\\') ADVANCE(2);
      if (lookahead == ']') ADVANCE(108);
      if (lookahead == '`') ADVANCE(214);
      if (lookahead == 'b') ADVANCE(33);
      if (lookahead == 'c') ADVANCE(42);
      if (lookahead == 'd') ADVANCE(75);
      if (lookahead == 'e') ADVANCE(68);
      if (lookahead == 'f') ADVANCE(62);
      if (lookahead == 'i') ADVANCE(51);
      if (lookahead == 'l') ADVANCE(76);
      if (lookahead == 'm') ADVANCE(77);
      if (lookahead == 'o') ADVANCE(80);
      if (lookahead == 'r') ADVANCE(49);
      if (lookahead == 's') ADVANCE(39);
      if (lookahead == 'v') ADVANCE(48);
      if (lookahead == 'w') ADVANCE(55);
      if (lookahead == '{') ADVANCE(122);
      if (lookahead == '|') ADVANCE(150);
      if (lookahead == '}') ADVANCE(123);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(101)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(212);
      END_STATE();
    case 1:
      if (lookahead == '\n') SKIP(18)
      END_STATE();
    case 2:
      if (lookahead == '\n') SKIP(18)
      if (lookahead == '\r') SKIP(1)
      if (lookahead == 'n' ||
          lookahead == 'r') ADVANCE(221);
      END_STATE();
    case 3:
      if (lookahead == '\n') SKIP(19)
      END_STATE();
    case 4:
      if (lookahead == '\n') SKIP(19)
      if (lookahead == '\r') SKIP(3)
      END_STATE();
    case 5:
      if (lookahead == '\n') SKIP(21)
      END_STATE();
    case 6:
      if (lookahead == '\n') SKIP(21)
      if (lookahead == '\r') SKIP(5)
      END_STATE();
    case 7:
      if (lookahead == '\n') SKIP(22)
      END_STATE();
    case 8:
      if (lookahead == '\n') SKIP(22)
      if (lookahead == '\r') SKIP(7)
      END_STATE();
    case 9:
      if (lookahead == '\n') SKIP(23)
      END_STATE();
    case 10:
      if (lookahead == '\n') SKIP(23)
      if (lookahead == '\r') SKIP(9)
      END_STATE();
    case 11:
      if (lookahead == '\n') SKIP(20)
      END_STATE();
    case 12:
      if (lookahead == '\n') SKIP(20)
      if (lookahead == '\r') SKIP(11)
      END_STATE();
    case 13:
      if (lookahead == '\n') SKIP(27)
      END_STATE();
    case 14:
      if (lookahead == '\n') SKIP(27)
      if (lookahead == '\r') SKIP(13)
      END_STATE();
    case 15:
      if (lookahead == '\n') SKIP(31)
      END_STATE();
    case 16:
      if (lookahead == '\n') SKIP(31)
      if (lookahead == '\r') SKIP(15)
      END_STATE();
    case 17:
      if (lookahead == '\n') SKIP(17)
      if (lookahead == '/') ADVANCE(119);
      if (lookahead == '\\') ADVANCE(118);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(120);
      if (lookahead != 0) ADVANCE(121);
      END_STATE();
    case 18:
      if (lookahead == '!') ADVANCE(149);
      if (lookahead == '"') ADVANCE(215);
      if (lookahead == '#') ADVANCE(96);
      if (lookahead == '$') ADVANCE(114);
      if (lookahead == '&') ADVANCE(151);
      if (lookahead == '(') ADVANCE(111);
      if (lookahead == ')') ADVANCE(113);
      if (lookahead == '*') ADVANCE(145);
      if (lookahead == '+') ADVANCE(144);
      if (lookahead == ',') ADVANCE(107);
      if (lookahead == '-') ADVANCE(140);
      if (lookahead == '.') ADVANCE(110);
      if (lookahead == '/') ADVANCE(146);
      if (lookahead == ';') ADVANCE(104);
      if (lookahead == '<') ADVANCE(157);
      if (lookahead == '=') ADVANCE(105);
      if (lookahead == '>') ADVANCE(154);
      if (lookahead == '[') ADVANCE(106);
      if (lookahead == '\\') ADVANCE(2);
      if (lookahead == ']') ADVANCE(108);
      if (lookahead == '`') ADVANCE(214);
      if (lookahead == 'd') ADVANCE(75);
      if (lookahead == 'e') ADVANCE(68);
      if (lookahead == 'f') ADVANCE(66);
      if (lookahead == 'i') ADVANCE(51);
      if (lookahead == 'l') ADVANCE(76);
      if (lookahead == 'r') ADVANCE(49);
      if (lookahead == 's') ADVANCE(93);
      if (lookahead == 'v') ADVANCE(48);
      if (lookahead == 'w') ADVANCE(55);
      if (lookahead == '{') ADVANCE(122);
      if (lookahead == '|') ADVANCE(150);
      if (lookahead == '}') ADVANCE(123);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(18)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(212);
      END_STATE();
    case 19:
      if (lookahead == '"') ADVANCE(215);
      if (lookahead == '#') ADVANCE(96);
      if (lookahead == '(') ADVANCE(111);
      if (lookahead == '+') ADVANCE(143);
      if (lookahead == '-') ADVANCE(141);
      if (lookahead == '.') ADVANCE(28);
      if (lookahead == '/') ADVANCE(24);
      if (lookahead == '[') ADVANCE(106);
      if (lookahead == '\\') SKIP(4)
      if (lookahead == '`') ADVANCE(214);
      if (lookahead == 'd') ADVANCE(193);
      if (lookahead == 'e') ADVANCE(192);
      if (lookahead == 'f') ADVANCE(189);
      if (lookahead == 'i') ADVANCE(179);
      if (lookahead == 'l') ADVANCE(194);
      if (lookahead == 'r') ADVANCE(178);
      if (lookahead == 's') ADVANCE(201);
      if (lookahead == 'v') ADVANCE(177);
      if (lookahead == 'w') ADVANCE(181);
      if (lookahead == '{') ADVANCE(122);
      if (lookahead == '}') ADVANCE(123);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(19)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(212);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(210);
      END_STATE();
    case 20:
      if (lookahead == '"') ADVANCE(215);
      if (lookahead == '(') ADVANCE(111);
      if (lookahead == ')') ADVANCE(113);
      if (lookahead == '+') ADVANCE(143);
      if (lookahead == '-') ADVANCE(141);
      if (lookahead == '.') ADVANCE(97);
      if (lookahead == '/') ADVANCE(24);
      if (lookahead == ';') ADVANCE(104);
      if (lookahead == '\\') SKIP(12)
      if (lookahead == '`') ADVANCE(214);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(20)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(212);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(210);
      END_STATE();
    case 21:
      if (lookahead == '"') ADVANCE(215);
      if (lookahead == '(') ADVANCE(111);
      if (lookahead == '+') ADVANCE(143);
      if (lookahead == '-') ADVANCE(141);
      if (lookahead == '.') ADVANCE(97);
      if (lookahead == '/') ADVANCE(24);
      if (lookahead == ';') ADVANCE(104);
      if (lookahead == '\\') SKIP(6)
      if (lookahead == '`') ADVANCE(214);
      if (lookahead == 'e') ADVANCE(187);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(21)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(212);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(210);
      END_STATE();
    case 22:
      if (lookahead == '"') ADVANCE(215);
      if (lookahead == '(') ADVANCE(111);
      if (lookahead == '+') ADVANCE(143);
      if (lookahead == '-') ADVANCE(141);
      if (lookahead == '.') ADVANCE(97);
      if (lookahead == '/') ADVANCE(24);
      if (lookahead == '\\') SKIP(8)
      if (lookahead == '`') ADVANCE(214);
      if (lookahead == 'e') ADVANCE(187);
      if (lookahead == 'w') ADVANCE(181);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(22)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(212);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(210);
      END_STATE();
    case 23:
      if (lookahead == '"') ADVANCE(215);
      if (lookahead == '(') ADVANCE(111);
      if (lookahead == '+') ADVANCE(143);
      if (lookahead == '-') ADVANCE(141);
      if (lookahead == '.') ADVANCE(97);
      if (lookahead == '/') ADVANCE(24);
      if (lookahead == '\\') SKIP(10)
      if (lookahead == '`') ADVANCE(214);
      if (lookahead == 'w') ADVANCE(181);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(23)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(212);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(210);
      END_STATE();
    case 24:
      if (lookahead == '*') ADVANCE(26);
      if (lookahead == '/') ADVANCE(234);
      END_STATE();
    case 25:
      if (lookahead == '*') ADVANCE(25);
      if (lookahead == '/') ADVANCE(233);
      if (lookahead != 0) ADVANCE(26);
      END_STATE();
    case 26:
      if (lookahead == '*') ADVANCE(25);
      if (lookahead != 0) ADVANCE(26);
      END_STATE();
    case 27:
      if (lookahead == ',') ADVANCE(107);
      if (lookahead == '-') ADVANCE(30);
      if (lookahead == '.') ADVANCE(28);
      if (lookahead == '/') ADVANCE(24);
      if (lookahead == ';') ADVANCE(104);
      if (lookahead == '\\') SKIP(14)
      if (lookahead == '`') ADVANCE(214);
      if (lookahead == 'e') ADVANCE(68);
      if (lookahead == 'f') ADVANCE(66);
      if (lookahead == 'i') ADVANCE(73);
      if (lookahead == 's') ADVANCE(93);
      if (lookahead == 'v') ADVANCE(48);
      if (lookahead == 'w') ADVANCE(55);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(27)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(212);
      END_STATE();
    case 28:
      if (lookahead == '.') ADVANCE(29);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(213);
      END_STATE();
    case 29:
      if (lookahead == '.') ADVANCE(112);
      END_STATE();
    case 30:
      if (lookahead == '.') ADVANCE(97);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(212);
      END_STATE();
    case 31:
      if (lookahead == '/') ADVANCE(24);
      if (lookahead == '\\') SKIP(16)
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(31)
      END_STATE();
    case 32:
      if (lookahead == '/') ADVANCE(24);
      if (lookahead == '\\') SKIP(16)
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(31)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(211);
      END_STATE();
    case 33:
      if (lookahead == 'a') ADVANCE(85);
      END_STATE();
    case 34:
      if (lookahead == 'a') ADVANCE(53);
      if (lookahead == 'o') ADVANCE(38);
      END_STATE();
    case 35:
      if (lookahead == 'a') ADVANCE(69);
      END_STATE();
    case 36:
      if (lookahead == 'a') ADVANCE(64);
      END_STATE();
    case 37:
      if (lookahead == 'a') ADVANCE(63);
      END_STATE();
    case 38:
      if (lookahead == 'a') ADVANCE(90);
      END_STATE();
    case 39:
      if (lookahead == 'c') ADVANCE(36);
      if (lookahead == 'k') ADVANCE(56);
      if (lookahead == 't') ADVANCE(83);
      END_STATE();
    case 40:
      if (lookahead == 'c') ADVANCE(37);
      END_STATE();
    case 41:
      if (lookahead == 'c') ADVANCE(91);
      END_STATE();
    case 42:
      if (lookahead == 'd') ADVANCE(115);
      END_STATE();
    case 43:
      if (lookahead == 'd') ADVANCE(158);
      END_STATE();
    case 44:
      if (lookahead == 'd') ADVANCE(50);
      END_STATE();
    case 45:
      if (lookahead == 'e') ADVANCE(115);
      END_STATE();
    case 46:
      if (lookahead == 'e') ADVANCE(130);
      END_STATE();
    case 47:
      if (lookahead == 'e') ADVANCE(132);
      END_STATE();
    case 48:
      if (lookahead == 'e') ADVANCE(41);
      if (lookahead == 'o') ADVANCE(59);
      END_STATE();
    case 49:
      if (lookahead == 'e') ADVANCE(88);
      END_STATE();
    case 50:
      if (lookahead == 'e') ADVANCE(65);
      END_STATE();
    case 51:
      if (lookahead == 'f') ADVANCE(128);
      if (lookahead == 'n') ADVANCE(87);
      END_STATE();
    case 52:
      if (lookahead == 'g') ADVANCE(166);
      END_STATE();
    case 53:
      if (lookahead == 'g') ADVANCE(84);
      END_STATE();
    case 54:
      if (lookahead == 'g') ADVANCE(56);
      END_STATE();
    case 55:
      if (lookahead == 'h') ADVANCE(60);
      END_STATE();
    case 56:
      if (lookahead == 'i') ADVANCE(70);
      END_STATE();
    case 57:
      if (lookahead == 'i') ADVANCE(54);
      END_STATE();
    case 58:
      if (lookahead == 'i') ADVANCE(74);
      END_STATE();
    case 59:
      if (lookahead == 'i') ADVANCE(43);
      END_STATE();
    case 60:
      if (lookahead == 'i') ADVANCE(67);
      END_STATE();
    case 61:
      if (lookahead == 'i') ADVANCE(89);
      END_STATE();
    case 62:
      if (lookahead == 'l') ADVANCE(34);
      if (lookahead == 'r') ADVANCE(35);
      END_STATE();
    case 63:
      if (lookahead == 'l') ADVANCE(138);
      END_STATE();
    case 64:
      if (lookahead == 'l') ADVANCE(45);
      END_STATE();
    case 65:
      if (lookahead == 'l') ADVANCE(72);
      END_STATE();
    case 66:
      if (lookahead == 'l') ADVANCE(79);
      END_STATE();
    case 67:
      if (lookahead == 'l') ADVANCE(47);
      END_STATE();
    case 68:
      if (lookahead == 'l') ADVANCE(86);
      if (lookahead == 'n') ADVANCE(92);
      END_STATE();
    case 69:
      if (lookahead == 'm') ADVANCE(45);
      END_STATE();
    case 70:
      if (lookahead == 'n') ADVANCE(115);
      END_STATE();
    case 71:
      if (lookahead == 'n') ADVANCE(136);
      END_STATE();
    case 72:
      if (lookahead == 'n') ADVANCE(35);
      END_STATE();
    case 73:
      if (lookahead == 'n') ADVANCE(87);
      END_STATE();
    case 74:
      if (lookahead == 'n') ADVANCE(52);
      END_STATE();
    case 75:
      if (lookahead == 'o') ADVANCE(134);
      END_STATE();
    case 76:
      if (lookahead == 'o') ADVANCE(40);
      END_STATE();
    case 77:
      if (lookahead == 'o') ADVANCE(44);
      END_STATE();
    case 78:
      if (lookahead == 'o') ADVANCE(81);
      END_STATE();
    case 79:
      if (lookahead == 'o') ADVANCE(38);
      END_STATE();
    case 80:
      if (lookahead == 'r') ADVANCE(57);
      END_STATE();
    case 81:
      if (lookahead == 'r') ADVANCE(164);
      END_STATE();
    case 82:
      if (lookahead == 'r') ADVANCE(71);
      END_STATE();
    case 83:
      if (lookahead == 'r') ADVANCE(58);
      END_STATE();
    case 84:
      if (lookahead == 's') ADVANCE(115);
      END_STATE();
    case 85:
      if (lookahead == 's') ADVANCE(45);
      END_STATE();
    case 86:
      if (lookahead == 's') ADVANCE(46);
      END_STATE();
    case 87:
      if (lookahead == 't') ADVANCE(168);
      END_STATE();
    case 88:
      if (lookahead == 't') ADVANCE(94);
      END_STATE();
    case 89:
      if (lookahead == 't') ADVANCE(95);
      END_STATE();
    case 90:
      if (lookahead == 't') ADVANCE(162);
      END_STATE();
    case 91:
      if (lookahead == 't') ADVANCE(78);
      END_STATE();
    case 92:
      if (lookahead == 't') ADVANCE(61);
      END_STATE();
    case 93:
      if (lookahead == 't') ADVANCE(83);
      END_STATE();
    case 94:
      if (lookahead == 'u') ADVANCE(82);
      END_STATE();
    case 95:
      if (lookahead == 'y') ADVANCE(160);
      END_STATE();
    case 96:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(231);
      END_STATE();
    case 97:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(213);
      END_STATE();
    case 98:
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(232);
      END_STATE();
    case 99:
      if (eof) ADVANCE(103);
      if (lookahead == '\n') SKIP(102)
      END_STATE();
    case 100:
      if (eof) ADVANCE(103);
      if (lookahead == '\n') SKIP(102)
      if (lookahead == '\r') SKIP(99)
      END_STATE();
    case 101:
      if (eof) ADVANCE(103);
      if (lookahead == '!') ADVANCE(149);
      if (lookahead == '"') ADVANCE(215);
      if (lookahead == '#') ADVANCE(96);
      if (lookahead == '$') ADVANCE(114);
      if (lookahead == '&') ADVANCE(151);
      if (lookahead == '(') ADVANCE(111);
      if (lookahead == ')') ADVANCE(113);
      if (lookahead == '*') ADVANCE(145);
      if (lookahead == '+') ADVANCE(144);
      if (lookahead == ',') ADVANCE(107);
      if (lookahead == '-') ADVANCE(140);
      if (lookahead == '.') ADVANCE(110);
      if (lookahead == '/') ADVANCE(146);
      if (lookahead == ';') ADVANCE(104);
      if (lookahead == '<') ADVANCE(157);
      if (lookahead == '=') ADVANCE(105);
      if (lookahead == '>') ADVANCE(154);
      if (lookahead == '[') ADVANCE(106);
      if (lookahead == '\\') ADVANCE(2);
      if (lookahead == ']') ADVANCE(108);
      if (lookahead == '`') ADVANCE(214);
      if (lookahead == 'd') ADVANCE(75);
      if (lookahead == 'e') ADVANCE(68);
      if (lookahead == 'f') ADVANCE(66);
      if (lookahead == 'i') ADVANCE(51);
      if (lookahead == 'l') ADVANCE(76);
      if (lookahead == 'r') ADVANCE(49);
      if (lookahead == 's') ADVANCE(93);
      if (lookahead == 'v') ADVANCE(48);
      if (lookahead == 'w') ADVANCE(55);
      if (lookahead == '{') ADVANCE(122);
      if (lookahead == '|') ADVANCE(150);
      if (lookahead == '}') ADVANCE(123);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(101)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(212);
      END_STATE();
    case 102:
      if (eof) ADVANCE(103);
      if (lookahead == '!') ADVANCE(149);
      if (lookahead == '$') ADVANCE(114);
      if (lookahead == '&') ADVANCE(151);
      if (lookahead == '(') ADVANCE(111);
      if (lookahead == ')') ADVANCE(113);
      if (lookahead == '*') ADVANCE(145);
      if (lookahead == '+') ADVANCE(144);
      if (lookahead == ',') ADVANCE(107);
      if (lookahead == '-') ADVANCE(142);
      if (lookahead == '.') ADVANCE(109);
      if (lookahead == '/') ADVANCE(146);
      if (lookahead == ';') ADVANCE(104);
      if (lookahead == '<') ADVANCE(157);
      if (lookahead == '=') ADVANCE(105);
      if (lookahead == '>') ADVANCE(154);
      if (lookahead == '\\') SKIP(100)
      if (lookahead == 'e') ADVANCE(68);
      if (lookahead == 'f') ADVANCE(66);
      if (lookahead == 'i') ADVANCE(73);
      if (lookahead == 's') ADVANCE(93);
      if (lookahead == 'v') ADVANCE(48);
      if (lookahead == 'w') ADVANCE(55);
      if (lookahead == '|') ADVANCE(150);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(102)
      END_STATE();
    case 103:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 104:
      ACCEPT_TOKEN(anon_sym_SEMI);
      END_STATE();
    case 105:
      ACCEPT_TOKEN(anon_sym_EQ);
      if (lookahead == '=') ADVANCE(152);
      END_STATE();
    case 106:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 107:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 108:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 109:
      ACCEPT_TOKEN(anon_sym_DOT);
      END_STATE();
    case 110:
      ACCEPT_TOKEN(anon_sym_DOT);
      if (lookahead == '.') ADVANCE(29);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(213);
      END_STATE();
    case 111:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 112:
      ACCEPT_TOKEN(anon_sym_DOT_DOT_DOT);
      END_STATE();
    case 113:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 114:
      ACCEPT_TOKEN(anon_sym_DOLLAR);
      END_STATE();
    case 115:
      ACCEPT_TOKEN(aux_sym_modelgen_pragma_token1);
      END_STATE();
    case 116:
      ACCEPT_TOKEN(aux_sym_modelgen_pragma_token2);
      if (lookahead == '\n') ADVANCE(26);
      if (lookahead == '*') ADVANCE(116);
      if (lookahead == '/') ADVANCE(121);
      if (lookahead != 0) ADVANCE(117);
      END_STATE();
    case 117:
      ACCEPT_TOKEN(aux_sym_modelgen_pragma_token2);
      if (lookahead == '\n') ADVANCE(26);
      if (lookahead == '*') ADVANCE(116);
      if (lookahead != 0) ADVANCE(117);
      END_STATE();
    case 118:
      ACCEPT_TOKEN(aux_sym_modelgen_pragma_token2);
      if (lookahead == '\r') ADVANCE(121);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(121);
      END_STATE();
    case 119:
      ACCEPT_TOKEN(aux_sym_modelgen_pragma_token2);
      if (lookahead == '*') ADVANCE(117);
      if (lookahead == '/') ADVANCE(121);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(121);
      END_STATE();
    case 120:
      ACCEPT_TOKEN(aux_sym_modelgen_pragma_token2);
      if (lookahead == '/') ADVANCE(119);
      if (lookahead == '\\') ADVANCE(118);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(120);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(121);
      END_STATE();
    case 121:
      ACCEPT_TOKEN(aux_sym_modelgen_pragma_token2);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(121);
      END_STATE();
    case 122:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 123:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 124:
      ACCEPT_TOKEN(anon_sym_PLUS_EQ);
      END_STATE();
    case 125:
      ACCEPT_TOKEN(anon_sym_DASH_EQ);
      END_STATE();
    case 126:
      ACCEPT_TOKEN(anon_sym_STAR_EQ);
      END_STATE();
    case 127:
      ACCEPT_TOKEN(anon_sym_SLASH_EQ);
      END_STATE();
    case 128:
      ACCEPT_TOKEN(anon_sym_if);
      END_STATE();
    case 129:
      ACCEPT_TOKEN(anon_sym_if);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(210);
      END_STATE();
    case 130:
      ACCEPT_TOKEN(anon_sym_else);
      END_STATE();
    case 131:
      ACCEPT_TOKEN(anon_sym_else);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(210);
      END_STATE();
    case 132:
      ACCEPT_TOKEN(anon_sym_while);
      END_STATE();
    case 133:
      ACCEPT_TOKEN(anon_sym_while);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(210);
      END_STATE();
    case 134:
      ACCEPT_TOKEN(anon_sym_do);
      END_STATE();
    case 135:
      ACCEPT_TOKEN(anon_sym_do);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(210);
      END_STATE();
    case 136:
      ACCEPT_TOKEN(anon_sym_return);
      END_STATE();
    case 137:
      ACCEPT_TOKEN(anon_sym_return);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(210);
      END_STATE();
    case 138:
      ACCEPT_TOKEN(anon_sym_local);
      END_STATE();
    case 139:
      ACCEPT_TOKEN(anon_sym_local);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(210);
      END_STATE();
    case 140:
      ACCEPT_TOKEN(anon_sym_DASH);
      if (lookahead == '.') ADVANCE(97);
      if (lookahead == '=') ADVANCE(125);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(212);
      END_STATE();
    case 141:
      ACCEPT_TOKEN(anon_sym_DASH);
      if (lookahead == '.') ADVANCE(97);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(212);
      END_STATE();
    case 142:
      ACCEPT_TOKEN(anon_sym_DASH);
      if (lookahead == '=') ADVANCE(125);
      END_STATE();
    case 143:
      ACCEPT_TOKEN(anon_sym_PLUS);
      END_STATE();
    case 144:
      ACCEPT_TOKEN(anon_sym_PLUS);
      if (lookahead == '=') ADVANCE(124);
      END_STATE();
    case 145:
      ACCEPT_TOKEN(anon_sym_STAR);
      if (lookahead == '=') ADVANCE(126);
      END_STATE();
    case 146:
      ACCEPT_TOKEN(anon_sym_SLASH);
      if (lookahead == '*') ADVANCE(26);
      if (lookahead == '/') ADVANCE(234);
      if (lookahead == '=') ADVANCE(127);
      END_STATE();
    case 147:
      ACCEPT_TOKEN(anon_sym_PIPE_PIPE);
      END_STATE();
    case 148:
      ACCEPT_TOKEN(anon_sym_AMP_AMP);
      END_STATE();
    case 149:
      ACCEPT_TOKEN(anon_sym_BANG);
      if (lookahead == '=') ADVANCE(153);
      END_STATE();
    case 150:
      ACCEPT_TOKEN(anon_sym_PIPE);
      if (lookahead == '|') ADVANCE(147);
      END_STATE();
    case 151:
      ACCEPT_TOKEN(anon_sym_AMP);
      if (lookahead == '&') ADVANCE(148);
      END_STATE();
    case 152:
      ACCEPT_TOKEN(anon_sym_EQ_EQ);
      END_STATE();
    case 153:
      ACCEPT_TOKEN(anon_sym_BANG_EQ);
      END_STATE();
    case 154:
      ACCEPT_TOKEN(anon_sym_GT);
      if (lookahead == '=') ADVANCE(155);
      END_STATE();
    case 155:
      ACCEPT_TOKEN(anon_sym_GT_EQ);
      END_STATE();
    case 156:
      ACCEPT_TOKEN(anon_sym_LT_EQ);
      END_STATE();
    case 157:
      ACCEPT_TOKEN(anon_sym_LT);
      if (lookahead == '=') ADVANCE(156);
      END_STATE();
    case 158:
      ACCEPT_TOKEN(anon_sym_void);
      END_STATE();
    case 159:
      ACCEPT_TOKEN(anon_sym_void);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(210);
      END_STATE();
    case 160:
      ACCEPT_TOKEN(anon_sym_entity);
      END_STATE();
    case 161:
      ACCEPT_TOKEN(anon_sym_entity);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(210);
      END_STATE();
    case 162:
      ACCEPT_TOKEN(anon_sym_float);
      END_STATE();
    case 163:
      ACCEPT_TOKEN(anon_sym_float);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(210);
      END_STATE();
    case 164:
      ACCEPT_TOKEN(anon_sym_vector);
      END_STATE();
    case 165:
      ACCEPT_TOKEN(anon_sym_vector);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(210);
      END_STATE();
    case 166:
      ACCEPT_TOKEN(anon_sym_string);
      END_STATE();
    case 167:
      ACCEPT_TOKEN(anon_sym_string);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(210);
      END_STATE();
    case 168:
      ACCEPT_TOKEN(anon_sym_int);
      END_STATE();
    case 169:
      ACCEPT_TOKEN(anon_sym_int);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(210);
      END_STATE();
    case 170:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(186);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(210);
      END_STATE();
    case 171:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(205);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(210);
      END_STATE();
    case 172:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'c') ADVANCE(170);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(210);
      END_STATE();
    case 173:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'c') ADVANCE(207);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(210);
      END_STATE();
    case 174:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'd') ADVANCE(159);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(210);
      END_STATE();
    case 175:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(133);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(210);
      END_STATE();
    case 176:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(131);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(210);
      END_STATE();
    case 177:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(173);
      if (lookahead == 'o') ADVANCE(182);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(210);
      END_STATE();
    case 178:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(203);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(210);
      END_STATE();
    case 179:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'f') ADVANCE(129);
      if (lookahead == 'n') ADVANCE(202);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(210);
      END_STATE();
    case 180:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'g') ADVANCE(167);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(210);
      END_STATE();
    case 181:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'h') ADVANCE(184);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(210);
      END_STATE();
    case 182:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(174);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(210);
      END_STATE();
    case 183:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(190);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(210);
      END_STATE();
    case 184:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(188);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(210);
      END_STATE();
    case 185:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(204);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(210);
      END_STATE();
    case 186:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(139);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(210);
      END_STATE();
    case 187:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(200);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(210);
      END_STATE();
    case 188:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(175);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(210);
      END_STATE();
    case 189:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(195);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(210);
      END_STATE();
    case 190:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(180);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(210);
      END_STATE();
    case 191:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(137);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(210);
      END_STATE();
    case 192:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(206);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(210);
      END_STATE();
    case 193:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(135);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(210);
      END_STATE();
    case 194:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(172);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(210);
      END_STATE();
    case 195:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(171);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(210);
      END_STATE();
    case 196:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(197);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(210);
      END_STATE();
    case 197:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(165);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(210);
      END_STATE();
    case 198:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(191);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(210);
      END_STATE();
    case 199:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(183);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(210);
      END_STATE();
    case 200:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 's') ADVANCE(176);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(210);
      END_STATE();
    case 201:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(199);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(210);
      END_STATE();
    case 202:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(169);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(210);
      END_STATE();
    case 203:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(208);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(210);
      END_STATE();
    case 204:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(209);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(210);
      END_STATE();
    case 205:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(163);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(210);
      END_STATE();
    case 206:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(185);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(210);
      END_STATE();
    case 207:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(196);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(210);
      END_STATE();
    case 208:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'u') ADVANCE(198);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(210);
      END_STATE();
    case 209:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'y') ADVANCE(161);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(210);
      END_STATE();
    case 210:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(210);
      END_STATE();
    case 211:
      ACCEPT_TOKEN(aux_sym_frame_identifier_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(211);
      END_STATE();
    case 212:
      ACCEPT_TOKEN(sym__integer_literal);
      if (lookahead == '.') ADVANCE(97);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(212);
      END_STATE();
    case 213:
      ACCEPT_TOKEN(sym__float_literal);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(213);
      END_STATE();
    case 214:
      ACCEPT_TOKEN(anon_sym_BQUOTE);
      END_STATE();
    case 215:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 216:
      ACCEPT_TOKEN(aux_sym_string_literal_token1);
      if (lookahead == '*') ADVANCE(218);
      if (lookahead == '/') ADVANCE(220);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(220);
      END_STATE();
    case 217:
      ACCEPT_TOKEN(aux_sym_string_literal_token1);
      if (lookahead == '*') ADVANCE(217);
      if (lookahead == '/') ADVANCE(220);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(218);
      END_STATE();
    case 218:
      ACCEPT_TOKEN(aux_sym_string_literal_token1);
      if (lookahead == '*') ADVANCE(217);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(218);
      END_STATE();
    case 219:
      ACCEPT_TOKEN(aux_sym_string_literal_token1);
      if (lookahead == '/') ADVANCE(216);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(219);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(220);
      END_STATE();
    case 220:
      ACCEPT_TOKEN(aux_sym_string_literal_token1);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(220);
      END_STATE();
    case 221:
      ACCEPT_TOKEN(aux_sym_string_literal_token2);
      END_STATE();
    case 222:
      ACCEPT_TOKEN(aux_sym_string_literal_token3);
      if (lookahead == '\n') ADVANCE(229);
      if (lookahead == '\r') ADVANCE(224);
      if (lookahead == 'n' ||
          lookahead == 'r') ADVANCE(221);
      if (lookahead != 0 &&
          lookahead != '"') ADVANCE(230);
      END_STATE();
    case 223:
      ACCEPT_TOKEN(aux_sym_string_literal_token3);
      if (lookahead == '\n') ADVANCE(229);
      if (lookahead == '/') ADVANCE(216);
      if (lookahead == '\\') ADVANCE(222);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(219);
      if (lookahead != 0 &&
          lookahead != '"') ADVANCE(220);
      END_STATE();
    case 224:
      ACCEPT_TOKEN(aux_sym_string_literal_token3);
      if (lookahead == '\n') ADVANCE(229);
      if (lookahead != 0 &&
          lookahead != '"') ADVANCE(230);
      END_STATE();
    case 225:
      ACCEPT_TOKEN(aux_sym_string_literal_token3);
      if (lookahead == '\n') ADVANCE(230);
      if (lookahead == '"') ADVANCE(234);
      if (lookahead != 0) ADVANCE(225);
      END_STATE();
    case 226:
      ACCEPT_TOKEN(aux_sym_string_literal_token3);
      if (lookahead == '"') ADVANCE(26);
      if (lookahead == '*') ADVANCE(226);
      if (lookahead == '/') ADVANCE(230);
      if (lookahead != 0) ADVANCE(227);
      END_STATE();
    case 227:
      ACCEPT_TOKEN(aux_sym_string_literal_token3);
      if (lookahead == '"') ADVANCE(26);
      if (lookahead == '*') ADVANCE(226);
      if (lookahead != 0) ADVANCE(227);
      END_STATE();
    case 228:
      ACCEPT_TOKEN(aux_sym_string_literal_token3);
      if (lookahead == '*') ADVANCE(227);
      if (lookahead == '/') ADVANCE(225);
      if (lookahead != 0 &&
          lookahead != '"') ADVANCE(230);
      END_STATE();
    case 229:
      ACCEPT_TOKEN(aux_sym_string_literal_token3);
      if (lookahead == '/') ADVANCE(228);
      if (lookahead == '\\') ADVANCE(222);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(229);
      if (lookahead != 0 &&
          lookahead != '"') ADVANCE(230);
      END_STATE();
    case 230:
      ACCEPT_TOKEN(aux_sym_string_literal_token3);
      if (lookahead != 0 &&
          lookahead != '"') ADVANCE(230);
      END_STATE();
    case 231:
      ACCEPT_TOKEN(sym_builtin_literal);
      if (lookahead == ':') ADVANCE(98);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(231);
      END_STATE();
    case 232:
      ACCEPT_TOKEN(sym_builtin_literal);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(232);
      END_STATE();
    case 233:
      ACCEPT_TOKEN(sym_comment);
      END_STATE();
    case 234:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(234);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 102},
  [2] = {.lex_state = 19},
  [3] = {.lex_state = 19},
  [4] = {.lex_state = 19},
  [5] = {.lex_state = 19},
  [6] = {.lex_state = 19},
  [7] = {.lex_state = 19},
  [8] = {.lex_state = 19},
  [9] = {.lex_state = 19},
  [10] = {.lex_state = 19},
  [11] = {.lex_state = 19},
  [12] = {.lex_state = 19},
  [13] = {.lex_state = 19},
  [14] = {.lex_state = 19},
  [15] = {.lex_state = 19},
  [16] = {.lex_state = 19},
  [17] = {.lex_state = 19},
  [18] = {.lex_state = 19},
  [19] = {.lex_state = 19},
  [20] = {.lex_state = 102},
  [21] = {.lex_state = 102},
  [22] = {.lex_state = 102},
  [23] = {.lex_state = 102},
  [24] = {.lex_state = 102},
  [25] = {.lex_state = 102},
  [26] = {.lex_state = 102},
  [27] = {.lex_state = 102},
  [28] = {.lex_state = 102},
  [29] = {.lex_state = 102},
  [30] = {.lex_state = 102},
  [31] = {.lex_state = 102},
  [32] = {.lex_state = 102},
  [33] = {.lex_state = 102},
  [34] = {.lex_state = 102},
  [35] = {.lex_state = 102},
  [36] = {.lex_state = 102},
  [37] = {.lex_state = 102},
  [38] = {.lex_state = 102},
  [39] = {.lex_state = 102},
  [40] = {.lex_state = 102},
  [41] = {.lex_state = 21},
  [42] = {.lex_state = 19},
  [43] = {.lex_state = 22},
  [44] = {.lex_state = 23},
  [45] = {.lex_state = 102},
  [46] = {.lex_state = 102},
  [47] = {.lex_state = 102},
  [48] = {.lex_state = 20},
  [49] = {.lex_state = 20},
  [50] = {.lex_state = 102},
  [51] = {.lex_state = 102},
  [52] = {.lex_state = 20},
  [53] = {.lex_state = 20},
  [54] = {.lex_state = 102},
  [55] = {.lex_state = 20},
  [56] = {.lex_state = 20},
  [57] = {.lex_state = 20},
  [58] = {.lex_state = 20},
  [59] = {.lex_state = 20},
  [60] = {.lex_state = 20},
  [61] = {.lex_state = 20},
  [62] = {.lex_state = 20},
  [63] = {.lex_state = 20},
  [64] = {.lex_state = 20},
  [65] = {.lex_state = 20},
  [66] = {.lex_state = 102},
  [67] = {.lex_state = 20},
  [68] = {.lex_state = 20},
  [69] = {.lex_state = 20},
  [70] = {.lex_state = 20},
  [71] = {.lex_state = 20},
  [72] = {.lex_state = 20},
  [73] = {.lex_state = 20},
  [74] = {.lex_state = 20},
  [75] = {.lex_state = 102},
  [76] = {.lex_state = 102},
  [77] = {.lex_state = 102},
  [78] = {.lex_state = 102},
  [79] = {.lex_state = 102},
  [80] = {.lex_state = 102},
  [81] = {.lex_state = 102},
  [82] = {.lex_state = 102},
  [83] = {.lex_state = 102},
  [84] = {.lex_state = 102},
  [85] = {.lex_state = 0},
  [86] = {.lex_state = 27},
  [87] = {.lex_state = 102},
  [88] = {.lex_state = 27},
  [89] = {.lex_state = 102},
  [90] = {.lex_state = 102},
  [91] = {.lex_state = 102},
  [92] = {.lex_state = 102},
  [93] = {.lex_state = 102},
  [94] = {.lex_state = 102},
  [95] = {.lex_state = 102},
  [96] = {.lex_state = 102},
  [97] = {.lex_state = 102},
  [98] = {.lex_state = 102},
  [99] = {.lex_state = 102},
  [100] = {.lex_state = 102},
  [101] = {.lex_state = 19},
  [102] = {.lex_state = 19},
  [103] = {.lex_state = 19},
  [104] = {.lex_state = 19},
  [105] = {.lex_state = 19},
  [106] = {.lex_state = 19},
  [107] = {.lex_state = 19},
  [108] = {.lex_state = 19},
  [109] = {.lex_state = 0},
  [110] = {.lex_state = 0},
  [111] = {.lex_state = 27},
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
  [124] = {.lex_state = 0},
  [125] = {.lex_state = 0},
  [126] = {.lex_state = 0},
  [127] = {.lex_state = 0},
  [128] = {.lex_state = 0},
  [129] = {.lex_state = 0},
  [130] = {.lex_state = 0},
  [131] = {.lex_state = 223},
  [132] = {.lex_state = 0},
  [133] = {.lex_state = 223},
  [134] = {.lex_state = 0},
  [135] = {.lex_state = 223},
  [136] = {.lex_state = 0},
  [137] = {.lex_state = 19},
  [138] = {.lex_state = 20},
  [139] = {.lex_state = 0},
  [140] = {.lex_state = 0},
  [141] = {.lex_state = 0},
  [142] = {.lex_state = 0},
  [143] = {.lex_state = 0},
  [144] = {.lex_state = 0},
  [145] = {.lex_state = 0},
  [146] = {.lex_state = 19},
  [147] = {.lex_state = 0},
  [148] = {.lex_state = 0},
  [149] = {.lex_state = 0},
  [150] = {.lex_state = 0},
  [151] = {.lex_state = 0},
  [152] = {.lex_state = 0},
  [153] = {.lex_state = 19},
  [154] = {.lex_state = 0},
  [155] = {.lex_state = 0},
  [156] = {.lex_state = 0},
  [157] = {.lex_state = 0},
  [158] = {.lex_state = 0},
  [159] = {.lex_state = 0},
  [160] = {.lex_state = 0},
  [161] = {.lex_state = 0},
  [162] = {.lex_state = 20},
  [163] = {.lex_state = 0},
  [164] = {.lex_state = 0},
  [165] = {.lex_state = 0},
  [166] = {.lex_state = 0},
  [167] = {.lex_state = 0},
  [168] = {.lex_state = 0},
  [169] = {.lex_state = 0},
  [170] = {.lex_state = 0},
  [171] = {.lex_state = 0},
  [172] = {.lex_state = 20},
  [173] = {.lex_state = 20},
  [174] = {.lex_state = 0},
  [175] = {.lex_state = 0},
  [176] = {.lex_state = 20},
  [177] = {.lex_state = 20},
  [178] = {.lex_state = 20},
  [179] = {.lex_state = 20},
  [180] = {.lex_state = 0},
  [181] = {.lex_state = 0},
  [182] = {.lex_state = 20},
  [183] = {.lex_state = 20},
  [184] = {.lex_state = 20},
  [185] = {.lex_state = 0},
  [186] = {.lex_state = 0},
  [187] = {.lex_state = 0},
  [188] = {.lex_state = 32},
  [189] = {.lex_state = 0},
  [190] = {.lex_state = 0},
  [191] = {.lex_state = 20},
  [192] = {.lex_state = 20},
  [193] = {.lex_state = 0},
  [194] = {.lex_state = 0},
  [195] = {.lex_state = 0},
  [196] = {.lex_state = 20},
  [197] = {.lex_state = 0},
  [198] = {.lex_state = 0},
  [199] = {.lex_state = 20},
  [200] = {.lex_state = 0},
  [201] = {.lex_state = 20},
  [202] = {.lex_state = 0},
  [203] = {.lex_state = 20},
  [204] = {.lex_state = 20},
  [205] = {.lex_state = 20},
  [206] = {.lex_state = 20},
  [207] = {.lex_state = 19},
  [208] = {.lex_state = 0},
  [209] = {.lex_state = 20},
  [210] = {.lex_state = 17},
  [211] = {.lex_state = 0},
  [212] = {.lex_state = 20},
  [213] = {.lex_state = 0},
  [214] = {.lex_state = 0},
  [215] = {.lex_state = 0},
  [216] = {.lex_state = 0},
  [217] = {.lex_state = 0},
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
    [sym_source_file] = STATE(215),
    [sym__definition] = STATE(66),
    [sym_function_declaration] = STATE(66),
    [sym_function_definition] = STATE(66),
    [sym_constant_definition] = STATE(66),
    [sym_variable_definition] = STATE(66),
    [sym_field_definition] = STATE(66),
    [sym_modelgen_pragma] = STATE(66),
    [sym_simple_type] = STATE(138),
    [aux_sym_source_file_repeat1] = STATE(66),
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
    STATE(22), 1,
      sym_field_expression,
    STATE(192), 1,
      sym_simple_type,
    ACTIONS(33), 6,
      anon_sym_void,
      anon_sym_entity,
      anon_sym_float,
      anon_sym_vector,
      anon_sym_string,
      anon_sym_int,
    STATE(47), 9,
      sym__expression,
      sym_unary_expression,
      sym_binary_expression,
      sym_funcall_expression,
      sym_parenthesized_expression,
      sym__literal,
      sym_numeric_literal,
      sym_vector_literal,
      sym_string_literal,
    STATE(193), 10,
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
    STATE(22), 1,
      sym_field_expression,
    STATE(192), 1,
      sym_simple_type,
    ACTIONS(33), 6,
      anon_sym_void,
      anon_sym_entity,
      anon_sym_float,
      anon_sym_vector,
      anon_sym_string,
      anon_sym_int,
    STATE(47), 9,
      sym__expression,
      sym_unary_expression,
      sym_binary_expression,
      sym_funcall_expression,
      sym_parenthesized_expression,
      sym__literal,
      sym_numeric_literal,
      sym_vector_literal,
      sym_string_literal,
    STATE(170), 10,
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
    ACTIONS(23), 1,
      anon_sym_do,
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
      anon_sym_if,
    ACTIONS(51), 1,
      anon_sym_while,
    ACTIONS(53), 1,
      anon_sym_return,
    STATE(22), 1,
      sym_field_expression,
    STATE(192), 1,
      sym_simple_type,
    ACTIONS(33), 6,
      anon_sym_void,
      anon_sym_entity,
      anon_sym_float,
      anon_sym_vector,
      anon_sym_string,
      anon_sym_int,
    STATE(47), 9,
      sym__expression,
      sym_unary_expression,
      sym_binary_expression,
      sym_funcall_expression,
      sym_parenthesized_expression,
      sym__literal,
      sym_numeric_literal,
      sym_vector_literal,
      sym_string_literal,
    STATE(185), 10,
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
    STATE(22), 1,
      sym_field_expression,
    STATE(192), 1,
      sym_simple_type,
    ACTIONS(33), 6,
      anon_sym_void,
      anon_sym_entity,
      anon_sym_float,
      anon_sym_vector,
      anon_sym_string,
      anon_sym_int,
    STATE(47), 9,
      sym__expression,
      sym_unary_expression,
      sym_binary_expression,
      sym_funcall_expression,
      sym_parenthesized_expression,
      sym__literal,
      sym_numeric_literal,
      sym_vector_literal,
      sym_string_literal,
    STATE(144), 10,
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
    STATE(22), 1,
      sym_field_expression,
    STATE(192), 1,
      sym_simple_type,
    ACTIONS(33), 6,
      anon_sym_void,
      anon_sym_entity,
      anon_sym_float,
      anon_sym_vector,
      anon_sym_string,
      anon_sym_int,
    STATE(47), 9,
      sym__expression,
      sym_unary_expression,
      sym_binary_expression,
      sym_funcall_expression,
      sym_parenthesized_expression,
      sym__literal,
      sym_numeric_literal,
      sym_vector_literal,
      sym_string_literal,
    STATE(142), 10,
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
    ACTIONS(23), 1,
      anon_sym_do,
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
    ACTIONS(55), 1,
      anon_sym_if,
    ACTIONS(57), 1,
      anon_sym_while,
    ACTIONS(59), 1,
      anon_sym_return,
    STATE(22), 1,
      sym_field_expression,
    STATE(192), 1,
      sym_simple_type,
    ACTIONS(33), 6,
      anon_sym_void,
      anon_sym_entity,
      anon_sym_float,
      anon_sym_vector,
      anon_sym_string,
      anon_sym_int,
    STATE(47), 9,
      sym__expression,
      sym_unary_expression,
      sym_binary_expression,
      sym_funcall_expression,
      sym_parenthesized_expression,
      sym__literal,
      sym_numeric_literal,
      sym_vector_literal,
      sym_string_literal,
    STATE(167), 10,
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
  [507] = 20,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(15), 1,
      anon_sym_LPAREN,
    ACTIONS(17), 1,
      anon_sym_LBRACE,
    ACTIONS(23), 1,
      anon_sym_do,
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
    ACTIONS(55), 1,
      anon_sym_if,
    ACTIONS(57), 1,
      anon_sym_while,
    ACTIONS(59), 1,
      anon_sym_return,
    STATE(22), 1,
      sym_field_expression,
    STATE(192), 1,
      sym_simple_type,
    ACTIONS(33), 6,
      anon_sym_void,
      anon_sym_entity,
      anon_sym_float,
      anon_sym_vector,
      anon_sym_string,
      anon_sym_int,
    STATE(47), 9,
      sym__expression,
      sym_unary_expression,
      sym_binary_expression,
      sym_funcall_expression,
      sym_parenthesized_expression,
      sym__literal,
      sym_numeric_literal,
      sym_vector_literal,
      sym_string_literal,
    STATE(142), 10,
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
  [590] = 20,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(15), 1,
      anon_sym_LPAREN,
    ACTIONS(17), 1,
      anon_sym_LBRACE,
    ACTIONS(23), 1,
      anon_sym_do,
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
    ACTIONS(55), 1,
      anon_sym_if,
    ACTIONS(57), 1,
      anon_sym_while,
    ACTIONS(59), 1,
      anon_sym_return,
    STATE(22), 1,
      sym_field_expression,
    STATE(192), 1,
      sym_simple_type,
    ACTIONS(33), 6,
      anon_sym_void,
      anon_sym_entity,
      anon_sym_float,
      anon_sym_vector,
      anon_sym_string,
      anon_sym_int,
    STATE(47), 9,
      sym__expression,
      sym_unary_expression,
      sym_binary_expression,
      sym_funcall_expression,
      sym_parenthesized_expression,
      sym__literal,
      sym_numeric_literal,
      sym_vector_literal,
      sym_string_literal,
    STATE(164), 10,
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
  [673] = 20,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(15), 1,
      anon_sym_LPAREN,
    ACTIONS(17), 1,
      anon_sym_LBRACE,
    ACTIONS(23), 1,
      anon_sym_do,
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
    ACTIONS(61), 1,
      anon_sym_if,
    ACTIONS(63), 1,
      anon_sym_while,
    ACTIONS(65), 1,
      anon_sym_return,
    STATE(22), 1,
      sym_field_expression,
    STATE(192), 1,
      sym_simple_type,
    ACTIONS(33), 6,
      anon_sym_void,
      anon_sym_entity,
      anon_sym_float,
      anon_sym_vector,
      anon_sym_string,
      anon_sym_int,
    STATE(47), 9,
      sym__expression,
      sym_unary_expression,
      sym_binary_expression,
      sym_funcall_expression,
      sym_parenthesized_expression,
      sym__literal,
      sym_numeric_literal,
      sym_vector_literal,
      sym_string_literal,
    STATE(142), 10,
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
  [756] = 20,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(15), 1,
      anon_sym_LPAREN,
    ACTIONS(17), 1,
      anon_sym_LBRACE,
    ACTIONS(23), 1,
      anon_sym_do,
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
    ACTIONS(61), 1,
      anon_sym_if,
    ACTIONS(63), 1,
      anon_sym_while,
    ACTIONS(65), 1,
      anon_sym_return,
    STATE(22), 1,
      sym_field_expression,
    STATE(192), 1,
      sym_simple_type,
    ACTIONS(33), 6,
      anon_sym_void,
      anon_sym_entity,
      anon_sym_float,
      anon_sym_vector,
      anon_sym_string,
      anon_sym_int,
    STATE(47), 9,
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
  [839] = 20,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(15), 1,
      anon_sym_LPAREN,
    ACTIONS(17), 1,
      anon_sym_LBRACE,
    ACTIONS(23), 1,
      anon_sym_do,
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
    ACTIONS(61), 1,
      anon_sym_if,
    ACTIONS(63), 1,
      anon_sym_while,
    ACTIONS(65), 1,
      anon_sym_return,
    STATE(22), 1,
      sym_field_expression,
    STATE(192), 1,
      sym_simple_type,
    ACTIONS(33), 6,
      anon_sym_void,
      anon_sym_entity,
      anon_sym_float,
      anon_sym_vector,
      anon_sym_string,
      anon_sym_int,
    STATE(47), 9,
      sym__expression,
      sym_unary_expression,
      sym_binary_expression,
      sym_funcall_expression,
      sym_parenthesized_expression,
      sym__literal,
      sym_numeric_literal,
      sym_vector_literal,
      sym_string_literal,
    STATE(144), 10,
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
  [922] = 20,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(15), 1,
      anon_sym_LPAREN,
    ACTIONS(17), 1,
      anon_sym_LBRACE,
    ACTIONS(23), 1,
      anon_sym_do,
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
    ACTIONS(55), 1,
      anon_sym_if,
    ACTIONS(57), 1,
      anon_sym_while,
    ACTIONS(59), 1,
      anon_sym_return,
    STATE(22), 1,
      sym_field_expression,
    STATE(192), 1,
      sym_simple_type,
    ACTIONS(33), 6,
      anon_sym_void,
      anon_sym_entity,
      anon_sym_float,
      anon_sym_vector,
      anon_sym_string,
      anon_sym_int,
    STATE(47), 9,
      sym__expression,
      sym_unary_expression,
      sym_binary_expression,
      sym_funcall_expression,
      sym_parenthesized_expression,
      sym__literal,
      sym_numeric_literal,
      sym_vector_literal,
      sym_string_literal,
    STATE(144), 10,
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
  [1005] = 20,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(15), 1,
      anon_sym_LPAREN,
    ACTIONS(17), 1,
      anon_sym_LBRACE,
    ACTIONS(23), 1,
      anon_sym_do,
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
      anon_sym_if,
    ACTIONS(51), 1,
      anon_sym_while,
    ACTIONS(53), 1,
      anon_sym_return,
    STATE(22), 1,
      sym_field_expression,
    STATE(192), 1,
      sym_simple_type,
    ACTIONS(33), 6,
      anon_sym_void,
      anon_sym_entity,
      anon_sym_float,
      anon_sym_vector,
      anon_sym_string,
      anon_sym_int,
    STATE(47), 9,
      sym__expression,
      sym_unary_expression,
      sym_binary_expression,
      sym_funcall_expression,
      sym_parenthesized_expression,
      sym__literal,
      sym_numeric_literal,
      sym_vector_literal,
      sym_string_literal,
    STATE(144), 10,
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
  [1088] = 20,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(15), 1,
      anon_sym_LPAREN,
    ACTIONS(17), 1,
      anon_sym_LBRACE,
    ACTIONS(23), 1,
      anon_sym_do,
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
      anon_sym_if,
    ACTIONS(51), 1,
      anon_sym_while,
    ACTIONS(53), 1,
      anon_sym_return,
    STATE(22), 1,
      sym_field_expression,
    STATE(192), 1,
      sym_simple_type,
    ACTIONS(33), 6,
      anon_sym_void,
      anon_sym_entity,
      anon_sym_float,
      anon_sym_vector,
      anon_sym_string,
      anon_sym_int,
    STATE(47), 9,
      sym__expression,
      sym_unary_expression,
      sym_binary_expression,
      sym_funcall_expression,
      sym_parenthesized_expression,
      sym__literal,
      sym_numeric_literal,
      sym_vector_literal,
      sym_string_literal,
    STATE(142), 10,
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
  [1171] = 20,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(15), 1,
      anon_sym_LPAREN,
    ACTIONS(17), 1,
      anon_sym_LBRACE,
    ACTIONS(23), 1,
      anon_sym_do,
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
    ACTIONS(61), 1,
      anon_sym_if,
    ACTIONS(63), 1,
      anon_sym_while,
    ACTIONS(65), 1,
      anon_sym_return,
    STATE(22), 1,
      sym_field_expression,
    STATE(192), 1,
      sym_simple_type,
    ACTIONS(33), 6,
      anon_sym_void,
      anon_sym_entity,
      anon_sym_float,
      anon_sym_vector,
      anon_sym_string,
      anon_sym_int,
    STATE(47), 9,
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
  [1254] = 21,
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
    ACTIONS(67), 1,
      anon_sym_RBRACE,
    STATE(18), 1,
      aux_sym_compound_statement_repeat1,
    STATE(22), 1,
      sym_field_expression,
    STATE(192), 1,
      sym_simple_type,
    ACTIONS(33), 6,
      anon_sym_void,
      anon_sym_entity,
      anon_sym_float,
      anon_sym_vector,
      anon_sym_string,
      anon_sym_int,
    STATE(186), 8,
      sym__simple_statement,
      sym_assignment_statement,
      sym_if_statement,
      sym_while_statement,
      sym_do_while_statement,
      sym_return_statement,
      sym_variable_definition_statement,
      sym__expression_statement,
    STATE(47), 9,
      sym__expression,
      sym_unary_expression,
      sym_binary_expression,
      sym_funcall_expression,
      sym_parenthesized_expression,
      sym__literal,
      sym_numeric_literal,
      sym_vector_literal,
      sym_string_literal,
  [1338] = 21,
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
    ACTIONS(69), 1,
      anon_sym_RBRACE,
    STATE(19), 1,
      aux_sym_compound_statement_repeat1,
    STATE(22), 1,
      sym_field_expression,
    STATE(192), 1,
      sym_simple_type,
    ACTIONS(33), 6,
      anon_sym_void,
      anon_sym_entity,
      anon_sym_float,
      anon_sym_vector,
      anon_sym_string,
      anon_sym_int,
    STATE(186), 8,
      sym__simple_statement,
      sym_assignment_statement,
      sym_if_statement,
      sym_while_statement,
      sym_do_while_statement,
      sym_return_statement,
      sym_variable_definition_statement,
      sym__expression_statement,
    STATE(47), 9,
      sym__expression,
      sym_unary_expression,
      sym_binary_expression,
      sym_funcall_expression,
      sym_parenthesized_expression,
      sym__literal,
      sym_numeric_literal,
      sym_vector_literal,
      sym_string_literal,
  [1422] = 21,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(71), 1,
      anon_sym_LPAREN,
    ACTIONS(74), 1,
      anon_sym_RBRACE,
    ACTIONS(76), 1,
      anon_sym_if,
    ACTIONS(79), 1,
      anon_sym_while,
    ACTIONS(82), 1,
      anon_sym_do,
    ACTIONS(85), 1,
      anon_sym_return,
    ACTIONS(88), 1,
      anon_sym_local,
    ACTIONS(91), 1,
      anon_sym_DASH,
    ACTIONS(94), 1,
      anon_sym_PLUS,
    ACTIONS(100), 1,
      sym_identifier,
    ACTIONS(103), 1,
      sym__integer_literal,
    ACTIONS(106), 1,
      sym__float_literal,
    ACTIONS(109), 1,
      anon_sym_BQUOTE,
    ACTIONS(112), 1,
      anon_sym_DQUOTE,
    STATE(19), 1,
      aux_sym_compound_statement_repeat1,
    STATE(22), 1,
      sym_field_expression,
    STATE(192), 1,
      sym_simple_type,
    ACTIONS(97), 6,
      anon_sym_void,
      anon_sym_entity,
      anon_sym_float,
      anon_sym_vector,
      anon_sym_string,
      anon_sym_int,
    STATE(186), 8,
      sym__simple_statement,
      sym_assignment_statement,
      sym_if_statement,
      sym_while_statement,
      sym_do_while_statement,
      sym_return_statement,
      sym_variable_definition_statement,
      sym__expression_statement,
    STATE(47), 9,
      sym__expression,
      sym_unary_expression,
      sym_binary_expression,
      sym_funcall_expression,
      sym_parenthesized_expression,
      sym__literal,
      sym_numeric_literal,
      sym_vector_literal,
      sym_string_literal,
  [1506] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(117), 10,
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
    ACTIONS(115), 16,
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
  [1540] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(121), 1,
      anon_sym_EQ,
    ACTIONS(123), 1,
      anon_sym_LPAREN,
    ACTIONS(125), 4,
      anon_sym_PLUS_EQ,
      anon_sym_DASH_EQ,
      anon_sym_STAR_EQ,
      anon_sym_SLASH_EQ,
    ACTIONS(127), 9,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_BANG,
      anon_sym_PIPE,
      anon_sym_AMP,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(119), 10,
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
  [1579] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(121), 1,
      anon_sym_EQ,
    ACTIONS(125), 4,
      anon_sym_PLUS_EQ,
      anon_sym_DASH_EQ,
      anon_sym_STAR_EQ,
      anon_sym_SLASH_EQ,
    ACTIONS(127), 9,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_BANG,
      anon_sym_PIPE,
      anon_sym_AMP,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(119), 10,
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
  [1615] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(123), 1,
      anon_sym_LPAREN,
    ACTIONS(127), 6,
      anon_sym_SLASH,
      anon_sym_BANG,
      anon_sym_PIPE,
      anon_sym_AMP,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(119), 15,
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
  [1647] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(131), 1,
      anon_sym_DOT,
    ACTIONS(133), 6,
      anon_sym_SLASH,
      anon_sym_BANG,
      anon_sym_PIPE,
      anon_sym_AMP,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(129), 14,
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
  [1678] = 3,
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
  [1707] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(131), 1,
      anon_sym_DOT,
    ACTIONS(141), 6,
      anon_sym_SLASH,
      anon_sym_BANG,
      anon_sym_PIPE,
      anon_sym_AMP,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(139), 14,
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
  [1738] = 3,
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
  [1767] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(149), 6,
      anon_sym_SLASH,
      anon_sym_BANG,
      anon_sym_PIPE,
      anon_sym_AMP,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(147), 15,
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
  [1796] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(153), 6,
      anon_sym_SLASH,
      anon_sym_BANG,
      anon_sym_PIPE,
      anon_sym_AMP,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(151), 15,
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
  [1825] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(131), 1,
      anon_sym_DOT,
    ACTIONS(155), 1,
      anon_sym_STAR,
    ACTIONS(157), 1,
      anon_sym_SLASH,
    ACTIONS(159), 1,
      anon_sym_PIPE,
    ACTIONS(161), 1,
      anon_sym_AMP,
    ACTIONS(133), 3,
      anon_sym_BANG,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(129), 13,
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
  [1864] = 3,
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
  [1893] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(131), 1,
      anon_sym_DOT,
    ACTIONS(155), 1,
      anon_sym_STAR,
    ACTIONS(157), 1,
      anon_sym_SLASH,
    ACTIONS(159), 1,
      anon_sym_PIPE,
    ACTIONS(161), 1,
      anon_sym_AMP,
    ACTIONS(169), 1,
      anon_sym_AMP_AMP,
    ACTIONS(171), 1,
      anon_sym_BANG,
    ACTIONS(167), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(175), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(173), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
    ACTIONS(129), 6,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_else,
      anon_sym_while,
      anon_sym_PIPE_PIPE,
  [1940] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(131), 1,
      anon_sym_DOT,
    ACTIONS(155), 1,
      anon_sym_STAR,
    ACTIONS(157), 1,
      anon_sym_SLASH,
    ACTIONS(159), 1,
      anon_sym_PIPE,
    ACTIONS(161), 1,
      anon_sym_AMP,
    ACTIONS(171), 1,
      anon_sym_BANG,
    ACTIONS(167), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(175), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(173), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
    ACTIONS(129), 7,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_else,
      anon_sym_while,
      anon_sym_PIPE_PIPE,
      anon_sym_AMP_AMP,
  [1985] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(131), 1,
      anon_sym_DOT,
    ACTIONS(133), 1,
      anon_sym_BANG,
    ACTIONS(155), 1,
      anon_sym_STAR,
    ACTIONS(157), 1,
      anon_sym_SLASH,
    ACTIONS(159), 1,
      anon_sym_PIPE,
    ACTIONS(161), 1,
      anon_sym_AMP,
    ACTIONS(167), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(175), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(173), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
    ACTIONS(129), 7,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_else,
      anon_sym_while,
      anon_sym_PIPE_PIPE,
      anon_sym_AMP_AMP,
  [2030] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(131), 1,
      anon_sym_DOT,
    ACTIONS(155), 1,
      anon_sym_STAR,
    ACTIONS(157), 1,
      anon_sym_SLASH,
    ACTIONS(161), 1,
      anon_sym_AMP,
    ACTIONS(133), 4,
      anon_sym_BANG,
      anon_sym_PIPE,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(129), 13,
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
  [2067] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(131), 1,
      anon_sym_DOT,
    ACTIONS(155), 1,
      anon_sym_STAR,
    ACTIONS(157), 1,
      anon_sym_SLASH,
    ACTIONS(133), 5,
      anon_sym_BANG,
      anon_sym_PIPE,
      anon_sym_AMP,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(129), 13,
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
  [2102] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(179), 6,
      anon_sym_SLASH,
      anon_sym_BANG,
      anon_sym_PIPE,
      anon_sym_AMP,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(177), 15,
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
  [2131] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(131), 1,
      anon_sym_DOT,
    ACTIONS(155), 1,
      anon_sym_STAR,
    ACTIONS(157), 1,
      anon_sym_SLASH,
    ACTIONS(159), 1,
      anon_sym_PIPE,
    ACTIONS(161), 1,
      anon_sym_AMP,
    ACTIONS(167), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(133), 3,
      anon_sym_BANG,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(129), 11,
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
  [2172] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(183), 6,
      anon_sym_SLASH,
      anon_sym_BANG,
      anon_sym_PIPE,
      anon_sym_AMP,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(181), 15,
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
  [2201] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(187), 6,
      anon_sym_SLASH,
      anon_sym_BANG,
      anon_sym_PIPE,
      anon_sym_AMP,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(185), 15,
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
  [2230] = 12,
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
    ACTIONS(189), 1,
      anon_sym_SEMI,
    ACTIONS(191), 1,
      anon_sym_else,
    ACTIONS(193), 1,
      sym_identifier,
    STATE(46), 10,
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
  [2276] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(74), 6,
      anon_sym_LPAREN,
      anon_sym_RBRACE,
      anon_sym_PLUS,
      sym__float_literal,
      anon_sym_BQUOTE,
      anon_sym_DQUOTE,
    ACTIONS(195), 14,
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
  [2304] = 11,
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
    ACTIONS(193), 1,
      sym_identifier,
    ACTIONS(191), 2,
      anon_sym_else,
      anon_sym_while,
    STATE(46), 10,
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
  [2348] = 11,
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
    ACTIONS(191), 1,
      anon_sym_while,
    ACTIONS(193), 1,
      sym_identifier,
    STATE(46), 10,
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
  [2391] = 13,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(131), 1,
      anon_sym_DOT,
    ACTIONS(155), 1,
      anon_sym_STAR,
    ACTIONS(157), 1,
      anon_sym_SLASH,
    ACTIONS(159), 1,
      anon_sym_PIPE,
    ACTIONS(161), 1,
      anon_sym_AMP,
    ACTIONS(169), 1,
      anon_sym_AMP_AMP,
    ACTIONS(171), 1,
      anon_sym_BANG,
    ACTIONS(199), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(167), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(175), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(197), 3,
      anon_sym_SEMI,
      anon_sym_else,
      anon_sym_while,
    ACTIONS(173), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
  [2438] = 13,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(131), 1,
      anon_sym_DOT,
    ACTIONS(155), 1,
      anon_sym_STAR,
    ACTIONS(157), 1,
      anon_sym_SLASH,
    ACTIONS(159), 1,
      anon_sym_PIPE,
    ACTIONS(161), 1,
      anon_sym_AMP,
    ACTIONS(169), 1,
      anon_sym_AMP_AMP,
    ACTIONS(171), 1,
      anon_sym_BANG,
    ACTIONS(199), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(167), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(175), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(201), 3,
      anon_sym_SEMI,
      anon_sym_else,
      anon_sym_while,
    ACTIONS(173), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
  [2485] = 13,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(131), 1,
      anon_sym_DOT,
    ACTIONS(155), 1,
      anon_sym_STAR,
    ACTIONS(157), 1,
      anon_sym_SLASH,
    ACTIONS(159), 1,
      anon_sym_PIPE,
    ACTIONS(161), 1,
      anon_sym_AMP,
    ACTIONS(169), 1,
      anon_sym_AMP_AMP,
    ACTIONS(171), 1,
      anon_sym_BANG,
    ACTIONS(199), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(167), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(175), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(203), 3,
      anon_sym_SEMI,
      anon_sym_else,
      anon_sym_while,
    ACTIONS(173), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
  [2532] = 11,
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
    ACTIONS(189), 1,
      anon_sym_SEMI,
    ACTIONS(205), 1,
      sym_identifier,
    STATE(46), 10,
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
  [2575] = 11,
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
    ACTIONS(205), 1,
      sym_identifier,
    ACTIONS(207), 1,
      anon_sym_RPAREN,
    STATE(50), 10,
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
  [2618] = 15,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(131), 1,
      anon_sym_DOT,
    ACTIONS(155), 1,
      anon_sym_STAR,
    ACTIONS(157), 1,
      anon_sym_SLASH,
    ACTIONS(159), 1,
      anon_sym_PIPE,
    ACTIONS(161), 1,
      anon_sym_AMP,
    ACTIONS(169), 1,
      anon_sym_AMP_AMP,
    ACTIONS(171), 1,
      anon_sym_BANG,
    ACTIONS(199), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(209), 1,
      anon_sym_COMMA,
    ACTIONS(211), 1,
      anon_sym_RPAREN,
    STATE(139), 1,
      aux_sym_funcall_expression_repeat1,
    ACTIONS(167), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(175), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(173), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
  [2669] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(213), 1,
      ts_builtin_sym_end,
    ACTIONS(215), 1,
      anon_sym_DOT,
    ACTIONS(218), 1,
      anon_sym_DOLLAR,
    STATE(138), 1,
      sym_simple_type,
    ACTIONS(221), 6,
      anon_sym_void,
      anon_sym_entity,
      anon_sym_float,
      anon_sym_vector,
      anon_sym_string,
      anon_sym_int,
    STATE(51), 8,
      sym__definition,
      sym_function_declaration,
      sym_function_definition,
      sym_constant_definition,
      sym_variable_definition,
      sym_field_definition,
      sym_modelgen_pragma,
      aux_sym_source_file_repeat1,
  [2703] = 10,
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
    ACTIONS(205), 1,
      sym_identifier,
    STATE(24), 10,
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
  [2743] = 10,
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
    ACTIONS(205), 1,
      sym_identifier,
    STATE(77), 10,
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
  [2783] = 13,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(131), 1,
      anon_sym_DOT,
    ACTIONS(155), 1,
      anon_sym_STAR,
    ACTIONS(157), 1,
      anon_sym_SLASH,
    ACTIONS(159), 1,
      anon_sym_PIPE,
    ACTIONS(161), 1,
      anon_sym_AMP,
    ACTIONS(169), 1,
      anon_sym_AMP_AMP,
    ACTIONS(171), 1,
      anon_sym_BANG,
    ACTIONS(199), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(167), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(175), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(224), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
    ACTIONS(173), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
  [2829] = 10,
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
    ACTIONS(205), 1,
      sym_identifier,
    STATE(79), 10,
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
  [2869] = 10,
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
    ACTIONS(205), 1,
      sym_identifier,
    STATE(38), 10,
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
  [2909] = 10,
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
    ACTIONS(205), 1,
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
  [2949] = 10,
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
    ACTIONS(205), 1,
      sym_identifier,
    STATE(35), 10,
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
  [2989] = 10,
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
    ACTIONS(205), 1,
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
  [3029] = 10,
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
    ACTIONS(205), 1,
      sym_identifier,
    STATE(33), 10,
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
  [3069] = 10,
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
    ACTIONS(205), 1,
      sym_identifier,
    STATE(32), 10,
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
  [3109] = 10,
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
    ACTIONS(205), 1,
      sym_identifier,
    STATE(84), 10,
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
  [3149] = 10,
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
    ACTIONS(205), 1,
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
  [3189] = 10,
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
    ACTIONS(205), 1,
      sym_identifier,
    STATE(83), 10,
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
  [3229] = 10,
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
    ACTIONS(205), 1,
      sym_identifier,
    STATE(80), 10,
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
  [3269] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(7), 1,
      anon_sym_DOT,
    ACTIONS(9), 1,
      anon_sym_DOLLAR,
    ACTIONS(226), 1,
      ts_builtin_sym_end,
    STATE(138), 1,
      sym_simple_type,
    ACTIONS(11), 6,
      anon_sym_void,
      anon_sym_entity,
      anon_sym_float,
      anon_sym_vector,
      anon_sym_string,
      anon_sym_int,
    STATE(51), 8,
      sym__definition,
      sym_function_declaration,
      sym_function_definition,
      sym_constant_definition,
      sym_variable_definition,
      sym_field_definition,
      sym_modelgen_pragma,
      aux_sym_source_file_repeat1,
  [3303] = 10,
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
    ACTIONS(205), 1,
      sym_identifier,
    STATE(45), 10,
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
  [3343] = 10,
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
    ACTIONS(205), 1,
      sym_identifier,
    STATE(26), 10,
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
  [3383] = 10,
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
    ACTIONS(205), 1,
      sym_identifier,
    STATE(76), 10,
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
  [3423] = 10,
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
    ACTIONS(205), 1,
      sym_identifier,
    STATE(75), 10,
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
  [3463] = 10,
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
    ACTIONS(205), 1,
      sym_identifier,
    STATE(54), 10,
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
  [3503] = 10,
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
    ACTIONS(205), 1,
      sym_identifier,
    STATE(82), 10,
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
  [3543] = 10,
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
    ACTIONS(205), 1,
      sym_identifier,
    STATE(78), 10,
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
  [3583] = 10,
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
    ACTIONS(205), 1,
      sym_identifier,
    STATE(81), 10,
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
  [3623] = 13,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(131), 1,
      anon_sym_DOT,
    ACTIONS(155), 1,
      anon_sym_STAR,
    ACTIONS(157), 1,
      anon_sym_SLASH,
    ACTIONS(159), 1,
      anon_sym_PIPE,
    ACTIONS(161), 1,
      anon_sym_AMP,
    ACTIONS(169), 1,
      anon_sym_AMP_AMP,
    ACTIONS(171), 1,
      anon_sym_BANG,
    ACTIONS(199), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(228), 1,
      anon_sym_RPAREN,
    ACTIONS(167), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(175), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(173), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
  [3668] = 13,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(131), 1,
      anon_sym_DOT,
    ACTIONS(155), 1,
      anon_sym_STAR,
    ACTIONS(157), 1,
      anon_sym_SLASH,
    ACTIONS(159), 1,
      anon_sym_PIPE,
    ACTIONS(161), 1,
      anon_sym_AMP,
    ACTIONS(169), 1,
      anon_sym_AMP_AMP,
    ACTIONS(171), 1,
      anon_sym_BANG,
    ACTIONS(199), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(230), 1,
      anon_sym_RPAREN,
    ACTIONS(167), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(175), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(173), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
  [3713] = 13,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(131), 1,
      anon_sym_DOT,
    ACTIONS(155), 1,
      anon_sym_STAR,
    ACTIONS(157), 1,
      anon_sym_SLASH,
    ACTIONS(159), 1,
      anon_sym_PIPE,
    ACTIONS(161), 1,
      anon_sym_AMP,
    ACTIONS(169), 1,
      anon_sym_AMP_AMP,
    ACTIONS(171), 1,
      anon_sym_BANG,
    ACTIONS(199), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(232), 1,
      anon_sym_RPAREN,
    ACTIONS(167), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(175), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(173), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
  [3758] = 13,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(131), 1,
      anon_sym_DOT,
    ACTIONS(155), 1,
      anon_sym_STAR,
    ACTIONS(157), 1,
      anon_sym_SLASH,
    ACTIONS(159), 1,
      anon_sym_PIPE,
    ACTIONS(161), 1,
      anon_sym_AMP,
    ACTIONS(169), 1,
      anon_sym_AMP_AMP,
    ACTIONS(171), 1,
      anon_sym_BANG,
    ACTIONS(199), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(234), 1,
      anon_sym_RPAREN,
    ACTIONS(167), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(175), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(173), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
  [3803] = 13,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(131), 1,
      anon_sym_DOT,
    ACTIONS(155), 1,
      anon_sym_STAR,
    ACTIONS(157), 1,
      anon_sym_SLASH,
    ACTIONS(159), 1,
      anon_sym_PIPE,
    ACTIONS(161), 1,
      anon_sym_AMP,
    ACTIONS(169), 1,
      anon_sym_AMP_AMP,
    ACTIONS(171), 1,
      anon_sym_BANG,
    ACTIONS(199), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(236), 1,
      anon_sym_RPAREN,
    ACTIONS(167), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(175), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(173), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
  [3848] = 13,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(131), 1,
      anon_sym_DOT,
    ACTIONS(155), 1,
      anon_sym_STAR,
    ACTIONS(157), 1,
      anon_sym_SLASH,
    ACTIONS(159), 1,
      anon_sym_PIPE,
    ACTIONS(161), 1,
      anon_sym_AMP,
    ACTIONS(169), 1,
      anon_sym_AMP_AMP,
    ACTIONS(171), 1,
      anon_sym_BANG,
    ACTIONS(199), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(238), 1,
      anon_sym_RPAREN,
    ACTIONS(167), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(175), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(173), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
  [3893] = 13,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(131), 1,
      anon_sym_DOT,
    ACTIONS(155), 1,
      anon_sym_STAR,
    ACTIONS(157), 1,
      anon_sym_SLASH,
    ACTIONS(159), 1,
      anon_sym_PIPE,
    ACTIONS(161), 1,
      anon_sym_AMP,
    ACTIONS(169), 1,
      anon_sym_AMP_AMP,
    ACTIONS(171), 1,
      anon_sym_BANG,
    ACTIONS(199), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(240), 1,
      anon_sym_RPAREN,
    ACTIONS(167), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(175), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(173), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
  [3938] = 13,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(131), 1,
      anon_sym_DOT,
    ACTIONS(155), 1,
      anon_sym_STAR,
    ACTIONS(157), 1,
      anon_sym_SLASH,
    ACTIONS(159), 1,
      anon_sym_PIPE,
    ACTIONS(161), 1,
      anon_sym_AMP,
    ACTIONS(169), 1,
      anon_sym_AMP_AMP,
    ACTIONS(171), 1,
      anon_sym_BANG,
    ACTIONS(199), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(242), 1,
      anon_sym_RPAREN,
    ACTIONS(167), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(175), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(173), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
  [3983] = 13,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(131), 1,
      anon_sym_DOT,
    ACTIONS(155), 1,
      anon_sym_STAR,
    ACTIONS(157), 1,
      anon_sym_SLASH,
    ACTIONS(159), 1,
      anon_sym_PIPE,
    ACTIONS(161), 1,
      anon_sym_AMP,
    ACTIONS(169), 1,
      anon_sym_AMP_AMP,
    ACTIONS(171), 1,
      anon_sym_BANG,
    ACTIONS(199), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(244), 1,
      anon_sym_RPAREN,
    ACTIONS(167), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(175), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(173), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
  [4028] = 13,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(131), 1,
      anon_sym_DOT,
    ACTIONS(155), 1,
      anon_sym_STAR,
    ACTIONS(157), 1,
      anon_sym_SLASH,
    ACTIONS(159), 1,
      anon_sym_PIPE,
    ACTIONS(161), 1,
      anon_sym_AMP,
    ACTIONS(169), 1,
      anon_sym_AMP_AMP,
    ACTIONS(171), 1,
      anon_sym_BANG,
    ACTIONS(199), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(246), 1,
      anon_sym_RPAREN,
    ACTIONS(167), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(175), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(173), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
  [4073] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(248), 1,
      anon_sym_COMMA,
    ACTIONS(250), 1,
      anon_sym_RPAREN,
    STATE(140), 1,
      sym_parameter,
    STATE(205), 1,
      sym_simple_type,
    ACTIONS(11), 6,
      anon_sym_void,
      anon_sym_entity,
      anon_sym_float,
      anon_sym_vector,
      anon_sym_string,
      anon_sym_int,
  [4097] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(252), 1,
      anon_sym_DOT_DOT_DOT,
    STATE(163), 1,
      sym_parameter,
    STATE(205), 1,
      sym_simple_type,
    ACTIONS(11), 6,
      anon_sym_void,
      anon_sym_entity,
      anon_sym_float,
      anon_sym_vector,
      anon_sym_string,
      anon_sym_int,
  [4118] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(254), 9,
      ts_builtin_sym_end,
      anon_sym_DOT,
      anon_sym_DOLLAR,
      anon_sym_void,
      anon_sym_entity,
      anon_sym_float,
      anon_sym_vector,
      anon_sym_string,
      anon_sym_int,
  [4133] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(256), 1,
      anon_sym_DOT_DOT_DOT,
    STATE(163), 1,
      sym_parameter,
    STATE(205), 1,
      sym_simple_type,
    ACTIONS(11), 6,
      anon_sym_void,
      anon_sym_entity,
      anon_sym_float,
      anon_sym_vector,
      anon_sym_string,
      anon_sym_int,
  [4154] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(258), 9,
      ts_builtin_sym_end,
      anon_sym_DOT,
      anon_sym_DOLLAR,
      anon_sym_void,
      anon_sym_entity,
      anon_sym_float,
      anon_sym_vector,
      anon_sym_string,
      anon_sym_int,
  [4169] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(260), 9,
      ts_builtin_sym_end,
      anon_sym_DOT,
      anon_sym_DOLLAR,
      anon_sym_void,
      anon_sym_entity,
      anon_sym_float,
      anon_sym_vector,
      anon_sym_string,
      anon_sym_int,
  [4184] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(262), 9,
      ts_builtin_sym_end,
      anon_sym_DOT,
      anon_sym_DOLLAR,
      anon_sym_void,
      anon_sym_entity,
      anon_sym_float,
      anon_sym_vector,
      anon_sym_string,
      anon_sym_int,
  [4199] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(264), 9,
      ts_builtin_sym_end,
      anon_sym_DOT,
      anon_sym_DOLLAR,
      anon_sym_void,
      anon_sym_entity,
      anon_sym_float,
      anon_sym_vector,
      anon_sym_string,
      anon_sym_int,
  [4214] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(266), 9,
      ts_builtin_sym_end,
      anon_sym_DOT,
      anon_sym_DOLLAR,
      anon_sym_void,
      anon_sym_entity,
      anon_sym_float,
      anon_sym_vector,
      anon_sym_string,
      anon_sym_int,
  [4229] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(268), 9,
      ts_builtin_sym_end,
      anon_sym_DOT,
      anon_sym_DOLLAR,
      anon_sym_void,
      anon_sym_entity,
      anon_sym_float,
      anon_sym_vector,
      anon_sym_string,
      anon_sym_int,
  [4244] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(270), 9,
      ts_builtin_sym_end,
      anon_sym_DOT,
      anon_sym_DOLLAR,
      anon_sym_void,
      anon_sym_entity,
      anon_sym_float,
      anon_sym_vector,
      anon_sym_string,
      anon_sym_int,
  [4259] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(272), 9,
      ts_builtin_sym_end,
      anon_sym_DOT,
      anon_sym_DOLLAR,
      anon_sym_void,
      anon_sym_entity,
      anon_sym_float,
      anon_sym_vector,
      anon_sym_string,
      anon_sym_int,
  [4274] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(274), 9,
      ts_builtin_sym_end,
      anon_sym_DOT,
      anon_sym_DOLLAR,
      anon_sym_void,
      anon_sym_entity,
      anon_sym_float,
      anon_sym_vector,
      anon_sym_string,
      anon_sym_int,
  [4289] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(276), 9,
      ts_builtin_sym_end,
      anon_sym_DOT,
      anon_sym_DOLLAR,
      anon_sym_void,
      anon_sym_entity,
      anon_sym_float,
      anon_sym_vector,
      anon_sym_string,
      anon_sym_int,
  [4304] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(278), 9,
      ts_builtin_sym_end,
      anon_sym_DOT,
      anon_sym_DOLLAR,
      anon_sym_void,
      anon_sym_entity,
      anon_sym_float,
      anon_sym_vector,
      anon_sym_string,
      anon_sym_int,
  [4319] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(280), 9,
      ts_builtin_sym_end,
      anon_sym_DOT,
      anon_sym_DOLLAR,
      anon_sym_void,
      anon_sym_entity,
      anon_sym_float,
      anon_sym_vector,
      anon_sym_string,
      anon_sym_int,
  [4334] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(41), 1,
      anon_sym_BQUOTE,
    ACTIONS(43), 1,
      anon_sym_DQUOTE,
    ACTIONS(282), 1,
      sym__integer_literal,
    ACTIONS(284), 1,
      sym__float_literal,
    STATE(124), 4,
      sym__literal,
      sym_numeric_literal,
      sym_vector_literal,
      sym_string_literal,
  [4356] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(41), 1,
      anon_sym_BQUOTE,
    ACTIONS(43), 1,
      anon_sym_DQUOTE,
    ACTIONS(282), 1,
      sym__integer_literal,
    ACTIONS(284), 1,
      sym__float_literal,
    STATE(128), 4,
      sym__literal,
      sym_numeric_literal,
      sym_vector_literal,
      sym_string_literal,
  [4378] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(41), 1,
      anon_sym_BQUOTE,
    ACTIONS(43), 1,
      anon_sym_DQUOTE,
    ACTIONS(282), 1,
      sym__integer_literal,
    ACTIONS(284), 1,
      sym__float_literal,
    STATE(136), 4,
      sym__literal,
      sym_numeric_literal,
      sym_vector_literal,
      sym_string_literal,
  [4400] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(41), 1,
      anon_sym_BQUOTE,
    ACTIONS(43), 1,
      anon_sym_DQUOTE,
    ACTIONS(282), 1,
      sym__integer_literal,
    ACTIONS(284), 1,
      sym__float_literal,
    STATE(134), 4,
      sym__literal,
      sym_numeric_literal,
      sym_vector_literal,
      sym_string_literal,
  [4422] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(41), 1,
      anon_sym_BQUOTE,
    ACTIONS(43), 1,
      anon_sym_DQUOTE,
    ACTIONS(282), 1,
      sym__integer_literal,
    ACTIONS(284), 1,
      sym__float_literal,
    STATE(117), 4,
      sym__literal,
      sym_numeric_literal,
      sym_vector_literal,
      sym_string_literal,
  [4444] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(41), 1,
      anon_sym_BQUOTE,
    ACTIONS(43), 1,
      anon_sym_DQUOTE,
    ACTIONS(282), 1,
      sym__integer_literal,
    ACTIONS(284), 1,
      sym__float_literal,
    STATE(200), 4,
      sym__literal,
      sym_numeric_literal,
      sym_vector_literal,
      sym_string_literal,
  [4466] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(41), 1,
      anon_sym_BQUOTE,
    ACTIONS(43), 1,
      anon_sym_DQUOTE,
    ACTIONS(282), 1,
      sym__integer_literal,
    ACTIONS(284), 1,
      sym__float_literal,
    STATE(132), 4,
      sym__literal,
      sym_numeric_literal,
      sym_vector_literal,
      sym_string_literal,
  [4488] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(41), 1,
      anon_sym_BQUOTE,
    ACTIONS(43), 1,
      anon_sym_DQUOTE,
    ACTIONS(282), 1,
      sym__integer_literal,
    ACTIONS(284), 1,
      sym__float_literal,
    STATE(120), 4,
      sym__literal,
      sym_numeric_literal,
      sym_vector_literal,
      sym_string_literal,
  [4510] = 4,
    ACTIONS(3), 1,
      sym_comment,
    STATE(163), 1,
      sym_parameter,
    STATE(205), 1,
      sym_simple_type,
    ACTIONS(11), 6,
      anon_sym_void,
      anon_sym_entity,
      anon_sym_float,
      anon_sym_vector,
      anon_sym_string,
      anon_sym_int,
  [4528] = 3,
    ACTIONS(3), 1,
      sym_comment,
    STATE(184), 1,
      sym_simple_type,
    ACTIONS(11), 6,
      anon_sym_void,
      anon_sym_entity,
      anon_sym_float,
      anon_sym_vector,
      anon_sym_string,
      anon_sym_int,
  [4543] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(145), 1,
      sym__integer_literal,
    ACTIONS(143), 6,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_else,
      anon_sym_while,
      sym__float_literal,
      anon_sym_BQUOTE,
  [4558] = 3,
    ACTIONS(3), 1,
      sym_comment,
    STATE(212), 1,
      sym_simple_type,
    ACTIONS(11), 6,
      anon_sym_void,
      anon_sym_entity,
      anon_sym_float,
      anon_sym_vector,
      anon_sym_string,
      anon_sym_int,
  [4573] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(288), 1,
      anon_sym_EQ,
    ACTIONS(290), 1,
      anon_sym_COMMA,
    STATE(118), 1,
      aux_sym_variable_definition_statement_repeat1,
    ACTIONS(286), 3,
      anon_sym_SEMI,
      anon_sym_else,
      anon_sym_while,
  [4591] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(290), 1,
      anon_sym_COMMA,
    ACTIONS(294), 1,
      anon_sym_EQ,
    STATE(123), 1,
      aux_sym_variable_definition_statement_repeat1,
    ACTIONS(292), 3,
      anon_sym_SEMI,
      anon_sym_else,
      anon_sym_while,
  [4609] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(290), 1,
      anon_sym_COMMA,
    ACTIONS(298), 1,
      anon_sym_EQ,
    STATE(126), 1,
      aux_sym_variable_definition_statement_repeat1,
    ACTIONS(296), 3,
      anon_sym_SEMI,
      anon_sym_else,
      anon_sym_while,
  [4627] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(290), 1,
      anon_sym_COMMA,
    ACTIONS(302), 1,
      anon_sym_EQ,
    STATE(127), 1,
      aux_sym_variable_definition_statement_repeat1,
    ACTIONS(300), 3,
      anon_sym_SEMI,
      anon_sym_else,
      anon_sym_while,
  [4645] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(290), 1,
      anon_sym_COMMA,
    STATE(126), 1,
      aux_sym_variable_definition_statement_repeat1,
    ACTIONS(296), 3,
      anon_sym_SEMI,
      anon_sym_else,
      anon_sym_while,
  [4660] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(290), 1,
      anon_sym_COMMA,
    STATE(130), 1,
      aux_sym_variable_definition_statement_repeat1,
    ACTIONS(304), 3,
      anon_sym_SEMI,
      anon_sym_else,
      anon_sym_while,
  [4675] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(308), 1,
      anon_sym_EQ,
    ACTIONS(306), 4,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_else,
      anon_sym_while,
  [4688] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(290), 1,
      anon_sym_COMMA,
    STATE(123), 1,
      aux_sym_variable_definition_statement_repeat1,
    ACTIONS(292), 3,
      anon_sym_SEMI,
      anon_sym_else,
      anon_sym_while,
  [4703] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(290), 1,
      anon_sym_COMMA,
    STATE(130), 1,
      aux_sym_variable_definition_statement_repeat1,
    ACTIONS(310), 3,
      anon_sym_SEMI,
      anon_sym_else,
      anon_sym_while,
  [4718] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(314), 1,
      anon_sym_EQ,
    ACTIONS(316), 1,
      anon_sym_COMMA,
    ACTIONS(312), 3,
      anon_sym_SEMI,
      anon_sym_else,
      anon_sym_while,
  [4733] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(290), 1,
      anon_sym_COMMA,
    STATE(130), 1,
      aux_sym_variable_definition_statement_repeat1,
    ACTIONS(318), 3,
      anon_sym_SEMI,
      anon_sym_else,
      anon_sym_while,
  [4748] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(290), 1,
      anon_sym_COMMA,
    STATE(121), 1,
      aux_sym_variable_definition_statement_repeat1,
    ACTIONS(320), 3,
      anon_sym_SEMI,
      anon_sym_else,
      anon_sym_while,
  [4763] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(290), 1,
      anon_sym_COMMA,
    STATE(130), 1,
      aux_sym_variable_definition_statement_repeat1,
    ACTIONS(322), 3,
      anon_sym_SEMI,
      anon_sym_else,
      anon_sym_while,
  [4778] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(290), 1,
      anon_sym_COMMA,
    STATE(130), 1,
      aux_sym_variable_definition_statement_repeat1,
    ACTIONS(324), 3,
      anon_sym_SEMI,
      anon_sym_else,
      anon_sym_while,
  [4793] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(290), 1,
      anon_sym_COMMA,
    STATE(130), 1,
      aux_sym_variable_definition_statement_repeat1,
    ACTIONS(326), 3,
      anon_sym_SEMI,
      anon_sym_else,
      anon_sym_while,
  [4808] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(290), 1,
      anon_sym_COMMA,
    STATE(125), 1,
      aux_sym_variable_definition_statement_repeat1,
    ACTIONS(328), 3,
      anon_sym_SEMI,
      anon_sym_else,
      anon_sym_while,
  [4823] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(332), 1,
      anon_sym_EQ,
    ACTIONS(334), 1,
      anon_sym_COMMA,
    ACTIONS(330), 3,
      anon_sym_SEMI,
      anon_sym_else,
      anon_sym_while,
  [4838] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(336), 1,
      anon_sym_COMMA,
    STATE(130), 1,
      aux_sym_variable_definition_statement_repeat1,
    ACTIONS(306), 3,
      anon_sym_SEMI,
      anon_sym_else,
      anon_sym_while,
  [4853] = 4,
    ACTIONS(342), 1,
      aux_sym_string_literal_token3,
    ACTIONS(344), 1,
      sym_comment,
    STATE(131), 1,
      aux_sym_string_literal_repeat1,
    ACTIONS(339), 2,
      aux_sym_string_literal_token1,
      aux_sym_string_literal_token2,
  [4867] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(346), 1,
      anon_sym_COMMA,
    ACTIONS(286), 3,
      anon_sym_SEMI,
      anon_sym_else,
      anon_sym_while,
  [4879] = 4,
    ACTIONS(344), 1,
      sym_comment,
    ACTIONS(350), 1,
      aux_sym_string_literal_token3,
    STATE(131), 1,
      aux_sym_string_literal_repeat1,
    ACTIONS(348), 2,
      aux_sym_string_literal_token1,
      aux_sym_string_literal_token2,
  [4893] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(352), 4,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_else,
      anon_sym_while,
  [4903] = 4,
    ACTIONS(344), 1,
      sym_comment,
    ACTIONS(356), 1,
      aux_sym_string_literal_token3,
    STATE(133), 1,
      aux_sym_string_literal_repeat1,
    ACTIONS(354), 2,
      aux_sym_string_literal_token1,
      aux_sym_string_literal_token2,
  [4917] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(358), 1,
      anon_sym_COMMA,
    ACTIONS(300), 3,
      anon_sym_SEMI,
      anon_sym_else,
      anon_sym_while,
  [4929] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(282), 1,
      sym__integer_literal,
    ACTIONS(284), 1,
      sym__float_literal,
    STATE(146), 1,
      sym_numeric_literal,
  [4942] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(360), 1,
      anon_sym_LPAREN,
    ACTIONS(362), 1,
      sym_identifier,
    STATE(209), 1,
      sym_parameter_list,
  [4955] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(209), 1,
      anon_sym_COMMA,
    ACTIONS(364), 1,
      anon_sym_RPAREN,
    STATE(147), 1,
      aux_sym_funcall_expression_repeat1,
  [4968] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(366), 1,
      anon_sym_COMMA,
    ACTIONS(368), 1,
      anon_sym_RPAREN,
    STATE(149), 1,
      aux_sym_parameter_list_repeat1,
  [4981] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(370), 1,
      anon_sym_SEMI,
    ACTIONS(372), 1,
      anon_sym_COMMA,
    STATE(155), 1,
      aux_sym_variable_definition_repeat1,
  [4994] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(374), 3,
      anon_sym_SEMI,
      anon_sym_else,
      anon_sym_while,
  [5003] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(372), 1,
      anon_sym_COMMA,
    ACTIONS(376), 1,
      anon_sym_SEMI,
    STATE(154), 1,
      aux_sym_variable_definition_repeat1,
  [5016] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(378), 3,
      anon_sym_SEMI,
      anon_sym_else,
      anon_sym_while,
  [5025] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(380), 1,
      anon_sym_COMMA,
    ACTIONS(383), 1,
      anon_sym_RPAREN,
    STATE(145), 1,
      aux_sym_parameter_list_repeat1,
  [5038] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(282), 1,
      sym__integer_literal,
    ACTIONS(284), 1,
      sym__float_literal,
    STATE(153), 1,
      sym_numeric_literal,
  [5051] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(385), 1,
      anon_sym_COMMA,
    ACTIONS(388), 1,
      anon_sym_RPAREN,
    STATE(147), 1,
      aux_sym_funcall_expression_repeat1,
  [5064] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(390), 3,
      anon_sym_SEMI,
      anon_sym_else,
      anon_sym_while,
  [5073] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(392), 1,
      anon_sym_COMMA,
    ACTIONS(394), 1,
      anon_sym_RPAREN,
    STATE(145), 1,
      aux_sym_parameter_list_repeat1,
  [5086] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(396), 1,
      anon_sym_SEMI,
    ACTIONS(398), 1,
      anon_sym_EQ,
    ACTIONS(400), 1,
      anon_sym_COMMA,
  [5099] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(402), 3,
      anon_sym_SEMI,
      anon_sym_else,
      anon_sym_while,
  [5108] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(404), 1,
      anon_sym_SEMI,
    ACTIONS(406), 1,
      anon_sym_COMMA,
    STATE(152), 1,
      aux_sym_variable_definition_repeat1,
  [5121] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(282), 1,
      sym__integer_literal,
    ACTIONS(284), 1,
      sym__float_literal,
    STATE(181), 1,
      sym_numeric_literal,
  [5134] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(372), 1,
      anon_sym_COMMA,
    ACTIONS(409), 1,
      anon_sym_SEMI,
    STATE(152), 1,
      aux_sym_variable_definition_repeat1,
  [5147] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(372), 1,
      anon_sym_COMMA,
    ACTIONS(411), 1,
      anon_sym_SEMI,
    STATE(152), 1,
      aux_sym_variable_definition_repeat1,
  [5160] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(413), 3,
      anon_sym_SEMI,
      anon_sym_else,
      anon_sym_while,
  [5169] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(415), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [5177] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(417), 1,
      anon_sym_DOLLAR,
    STATE(187), 1,
      sym_frame_identifier,
  [5187] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(419), 1,
      anon_sym_else,
    ACTIONS(421), 1,
      anon_sym_while,
  [5197] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(423), 2,
      anon_sym_SEMI,
      anon_sym_COMMA,
  [5205] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(425), 1,
      anon_sym_SEMI,
    ACTIONS(427), 1,
      anon_sym_COMMA,
  [5215] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(429), 2,
      anon_sym_LPAREN,
      sym_identifier,
  [5223] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(383), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [5231] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(421), 1,
      anon_sym_SEMI,
    ACTIONS(431), 1,
      anon_sym_else,
  [5241] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(421), 1,
      anon_sym_while,
    ACTIONS(433), 1,
      anon_sym_else,
  [5251] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(435), 1,
      anon_sym_SEMI,
    ACTIONS(437), 1,
      anon_sym_EQ,
  [5261] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(421), 1,
      anon_sym_SEMI,
    ACTIONS(439), 1,
      anon_sym_else,
  [5271] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(441), 1,
      anon_sym_LPAREN,
  [5278] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(443), 1,
      anon_sym_SEMI,
  [5285] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(445), 1,
      anon_sym_SEMI,
  [5292] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(447), 1,
      anon_sym_LPAREN,
  [5299] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(449), 1,
      sym_identifier,
  [5306] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(451), 1,
      sym_identifier,
  [5313] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(453), 1,
      anon_sym_RBRACK,
  [5320] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(455), 1,
      anon_sym_COMMA,
  [5327] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(457), 1,
      sym_identifier,
  [5334] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(459), 1,
      sym_identifier,
  [5341] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(461), 1,
      sym_identifier,
  [5348] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(463), 1,
      sym_identifier,
  [5355] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(465), 1,
      aux_sym_modelgen_pragma_token1,
  [5362] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(467), 1,
      anon_sym_BQUOTE,
  [5369] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(469), 1,
      sym_identifier,
  [5376] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(471), 1,
      sym_identifier,
  [5383] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(473), 1,
      sym_identifier,
  [5390] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(475), 1,
      anon_sym_while,
  [5397] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(477), 1,
      anon_sym_SEMI,
  [5404] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(479), 1,
      anon_sym_COMMA,
  [5411] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(481), 1,
      aux_sym_frame_identifier_token1,
  [5418] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(483), 1,
      anon_sym_DQUOTE,
  [5425] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(485), 1,
      anon_sym_RPAREN,
  [5432] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(487), 1,
      sym_identifier,
  [5439] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(489), 1,
      sym_identifier,
  [5446] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(491), 1,
      anon_sym_SEMI,
  [5453] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(493), 1,
      anon_sym_SEMI,
  [5460] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(495), 1,
      anon_sym_LPAREN,
  [5467] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(497), 1,
      sym_identifier,
  [5474] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(499), 1,
      anon_sym_DQUOTE,
  [5481] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(501), 1,
      anon_sym_RPAREN,
  [5488] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(503), 1,
      sym_identifier,
  [5495] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(505), 1,
      anon_sym_SEMI,
  [5502] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(507), 1,
      sym_identifier,
  [5509] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(394), 1,
      anon_sym_RPAREN,
  [5516] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(509), 1,
      sym_identifier,
  [5523] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(511), 1,
      sym_identifier,
  [5530] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(513), 1,
      sym_identifier,
  [5537] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(515), 1,
      sym_identifier,
  [5544] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(517), 1,
      anon_sym_DOT_DOT_DOT,
  [5551] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(519), 1,
      anon_sym_LPAREN,
  [5558] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(521), 1,
      sym_identifier,
  [5565] = 2,
    ACTIONS(344), 1,
      sym_comment,
    ACTIONS(523), 1,
      aux_sym_modelgen_pragma_token2,
  [5572] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(525), 1,
      anon_sym_LPAREN,
  [5579] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(527), 1,
      sym_identifier,
  [5586] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(529), 1,
      anon_sym_LPAREN,
  [5593] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(531), 1,
      anon_sym_LPAREN,
  [5600] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(533), 1,
      ts_builtin_sym_end,
  [5607] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(535), 1,
      anon_sym_LPAREN,
  [5614] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(537), 1,
      anon_sym_LPAREN,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 89,
  [SMALL_STATE(4)] = 175,
  [SMALL_STATE(5)] = 258,
  [SMALL_STATE(6)] = 341,
  [SMALL_STATE(7)] = 424,
  [SMALL_STATE(8)] = 507,
  [SMALL_STATE(9)] = 590,
  [SMALL_STATE(10)] = 673,
  [SMALL_STATE(11)] = 756,
  [SMALL_STATE(12)] = 839,
  [SMALL_STATE(13)] = 922,
  [SMALL_STATE(14)] = 1005,
  [SMALL_STATE(15)] = 1088,
  [SMALL_STATE(16)] = 1171,
  [SMALL_STATE(17)] = 1254,
  [SMALL_STATE(18)] = 1338,
  [SMALL_STATE(19)] = 1422,
  [SMALL_STATE(20)] = 1506,
  [SMALL_STATE(21)] = 1540,
  [SMALL_STATE(22)] = 1579,
  [SMALL_STATE(23)] = 1615,
  [SMALL_STATE(24)] = 1647,
  [SMALL_STATE(25)] = 1678,
  [SMALL_STATE(26)] = 1707,
  [SMALL_STATE(27)] = 1738,
  [SMALL_STATE(28)] = 1767,
  [SMALL_STATE(29)] = 1796,
  [SMALL_STATE(30)] = 1825,
  [SMALL_STATE(31)] = 1864,
  [SMALL_STATE(32)] = 1893,
  [SMALL_STATE(33)] = 1940,
  [SMALL_STATE(34)] = 1985,
  [SMALL_STATE(35)] = 2030,
  [SMALL_STATE(36)] = 2067,
  [SMALL_STATE(37)] = 2102,
  [SMALL_STATE(38)] = 2131,
  [SMALL_STATE(39)] = 2172,
  [SMALL_STATE(40)] = 2201,
  [SMALL_STATE(41)] = 2230,
  [SMALL_STATE(42)] = 2276,
  [SMALL_STATE(43)] = 2304,
  [SMALL_STATE(44)] = 2348,
  [SMALL_STATE(45)] = 2391,
  [SMALL_STATE(46)] = 2438,
  [SMALL_STATE(47)] = 2485,
  [SMALL_STATE(48)] = 2532,
  [SMALL_STATE(49)] = 2575,
  [SMALL_STATE(50)] = 2618,
  [SMALL_STATE(51)] = 2669,
  [SMALL_STATE(52)] = 2703,
  [SMALL_STATE(53)] = 2743,
  [SMALL_STATE(54)] = 2783,
  [SMALL_STATE(55)] = 2829,
  [SMALL_STATE(56)] = 2869,
  [SMALL_STATE(57)] = 2909,
  [SMALL_STATE(58)] = 2949,
  [SMALL_STATE(59)] = 2989,
  [SMALL_STATE(60)] = 3029,
  [SMALL_STATE(61)] = 3069,
  [SMALL_STATE(62)] = 3109,
  [SMALL_STATE(63)] = 3149,
  [SMALL_STATE(64)] = 3189,
  [SMALL_STATE(65)] = 3229,
  [SMALL_STATE(66)] = 3269,
  [SMALL_STATE(67)] = 3303,
  [SMALL_STATE(68)] = 3343,
  [SMALL_STATE(69)] = 3383,
  [SMALL_STATE(70)] = 3423,
  [SMALL_STATE(71)] = 3463,
  [SMALL_STATE(72)] = 3503,
  [SMALL_STATE(73)] = 3543,
  [SMALL_STATE(74)] = 3583,
  [SMALL_STATE(75)] = 3623,
  [SMALL_STATE(76)] = 3668,
  [SMALL_STATE(77)] = 3713,
  [SMALL_STATE(78)] = 3758,
  [SMALL_STATE(79)] = 3803,
  [SMALL_STATE(80)] = 3848,
  [SMALL_STATE(81)] = 3893,
  [SMALL_STATE(82)] = 3938,
  [SMALL_STATE(83)] = 3983,
  [SMALL_STATE(84)] = 4028,
  [SMALL_STATE(85)] = 4073,
  [SMALL_STATE(86)] = 4097,
  [SMALL_STATE(87)] = 4118,
  [SMALL_STATE(88)] = 4133,
  [SMALL_STATE(89)] = 4154,
  [SMALL_STATE(90)] = 4169,
  [SMALL_STATE(91)] = 4184,
  [SMALL_STATE(92)] = 4199,
  [SMALL_STATE(93)] = 4214,
  [SMALL_STATE(94)] = 4229,
  [SMALL_STATE(95)] = 4244,
  [SMALL_STATE(96)] = 4259,
  [SMALL_STATE(97)] = 4274,
  [SMALL_STATE(98)] = 4289,
  [SMALL_STATE(99)] = 4304,
  [SMALL_STATE(100)] = 4319,
  [SMALL_STATE(101)] = 4334,
  [SMALL_STATE(102)] = 4356,
  [SMALL_STATE(103)] = 4378,
  [SMALL_STATE(104)] = 4400,
  [SMALL_STATE(105)] = 4422,
  [SMALL_STATE(106)] = 4444,
  [SMALL_STATE(107)] = 4466,
  [SMALL_STATE(108)] = 4488,
  [SMALL_STATE(109)] = 4510,
  [SMALL_STATE(110)] = 4528,
  [SMALL_STATE(111)] = 4543,
  [SMALL_STATE(112)] = 4558,
  [SMALL_STATE(113)] = 4573,
  [SMALL_STATE(114)] = 4591,
  [SMALL_STATE(115)] = 4609,
  [SMALL_STATE(116)] = 4627,
  [SMALL_STATE(117)] = 4645,
  [SMALL_STATE(118)] = 4660,
  [SMALL_STATE(119)] = 4675,
  [SMALL_STATE(120)] = 4688,
  [SMALL_STATE(121)] = 4703,
  [SMALL_STATE(122)] = 4718,
  [SMALL_STATE(123)] = 4733,
  [SMALL_STATE(124)] = 4748,
  [SMALL_STATE(125)] = 4763,
  [SMALL_STATE(126)] = 4778,
  [SMALL_STATE(127)] = 4793,
  [SMALL_STATE(128)] = 4808,
  [SMALL_STATE(129)] = 4823,
  [SMALL_STATE(130)] = 4838,
  [SMALL_STATE(131)] = 4853,
  [SMALL_STATE(132)] = 4867,
  [SMALL_STATE(133)] = 4879,
  [SMALL_STATE(134)] = 4893,
  [SMALL_STATE(135)] = 4903,
  [SMALL_STATE(136)] = 4917,
  [SMALL_STATE(137)] = 4929,
  [SMALL_STATE(138)] = 4942,
  [SMALL_STATE(139)] = 4955,
  [SMALL_STATE(140)] = 4968,
  [SMALL_STATE(141)] = 4981,
  [SMALL_STATE(142)] = 4994,
  [SMALL_STATE(143)] = 5003,
  [SMALL_STATE(144)] = 5016,
  [SMALL_STATE(145)] = 5025,
  [SMALL_STATE(146)] = 5038,
  [SMALL_STATE(147)] = 5051,
  [SMALL_STATE(148)] = 5064,
  [SMALL_STATE(149)] = 5073,
  [SMALL_STATE(150)] = 5086,
  [SMALL_STATE(151)] = 5099,
  [SMALL_STATE(152)] = 5108,
  [SMALL_STATE(153)] = 5121,
  [SMALL_STATE(154)] = 5134,
  [SMALL_STATE(155)] = 5147,
  [SMALL_STATE(156)] = 5160,
  [SMALL_STATE(157)] = 5169,
  [SMALL_STATE(158)] = 5177,
  [SMALL_STATE(159)] = 5187,
  [SMALL_STATE(160)] = 5197,
  [SMALL_STATE(161)] = 5205,
  [SMALL_STATE(162)] = 5215,
  [SMALL_STATE(163)] = 5223,
  [SMALL_STATE(164)] = 5231,
  [SMALL_STATE(165)] = 5241,
  [SMALL_STATE(166)] = 5251,
  [SMALL_STATE(167)] = 5261,
  [SMALL_STATE(168)] = 5271,
  [SMALL_STATE(169)] = 5278,
  [SMALL_STATE(170)] = 5285,
  [SMALL_STATE(171)] = 5292,
  [SMALL_STATE(172)] = 5299,
  [SMALL_STATE(173)] = 5306,
  [SMALL_STATE(174)] = 5313,
  [SMALL_STATE(175)] = 5320,
  [SMALL_STATE(176)] = 5327,
  [SMALL_STATE(177)] = 5334,
  [SMALL_STATE(178)] = 5341,
  [SMALL_STATE(179)] = 5348,
  [SMALL_STATE(180)] = 5355,
  [SMALL_STATE(181)] = 5362,
  [SMALL_STATE(182)] = 5369,
  [SMALL_STATE(183)] = 5376,
  [SMALL_STATE(184)] = 5383,
  [SMALL_STATE(185)] = 5390,
  [SMALL_STATE(186)] = 5397,
  [SMALL_STATE(187)] = 5404,
  [SMALL_STATE(188)] = 5411,
  [SMALL_STATE(189)] = 5418,
  [SMALL_STATE(190)] = 5425,
  [SMALL_STATE(191)] = 5432,
  [SMALL_STATE(192)] = 5439,
  [SMALL_STATE(193)] = 5446,
  [SMALL_STATE(194)] = 5453,
  [SMALL_STATE(195)] = 5460,
  [SMALL_STATE(196)] = 5467,
  [SMALL_STATE(197)] = 5474,
  [SMALL_STATE(198)] = 5481,
  [SMALL_STATE(199)] = 5488,
  [SMALL_STATE(200)] = 5495,
  [SMALL_STATE(201)] = 5502,
  [SMALL_STATE(202)] = 5509,
  [SMALL_STATE(203)] = 5516,
  [SMALL_STATE(204)] = 5523,
  [SMALL_STATE(205)] = 5530,
  [SMALL_STATE(206)] = 5537,
  [SMALL_STATE(207)] = 5544,
  [SMALL_STATE(208)] = 5551,
  [SMALL_STATE(209)] = 5558,
  [SMALL_STATE(210)] = 5565,
  [SMALL_STATE(211)] = 5572,
  [SMALL_STATE(212)] = 5579,
  [SMALL_STATE(213)] = 5586,
  [SMALL_STATE(214)] = 5593,
  [SMALL_STATE(215)] = 5600,
  [SMALL_STATE(216)] = 5607,
  [SMALL_STATE(217)] = 5614,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT_EXTRA(),
  [5] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(112),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(180),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(162),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(158),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(64),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [19] = {.entry = {.count = 1, .reusable = false}}, SHIFT(168),
  [21] = {.entry = {.count = 1, .reusable = false}}, SHIFT(195),
  [23] = {.entry = {.count = 1, .reusable = false}}, SHIFT(4),
  [25] = {.entry = {.count = 1, .reusable = false}}, SHIFT(48),
  [27] = {.entry = {.count = 1, .reusable = false}}, SHIFT(110),
  [29] = {.entry = {.count = 1, .reusable = false}}, SHIFT(68),
  [31] = {.entry = {.count = 1, .reusable = true}}, SHIFT(68),
  [33] = {.entry = {.count = 1, .reusable = false}}, SHIFT(162),
  [35] = {.entry = {.count = 1, .reusable = false}}, SHIFT(21),
  [37] = {.entry = {.count = 1, .reusable = false}}, SHIFT(27),
  [39] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [41] = {.entry = {.count = 1, .reusable = true}}, SHIFT(137),
  [43] = {.entry = {.count = 1, .reusable = true}}, SHIFT(135),
  [45] = {.entry = {.count = 1, .reusable = true}}, SHIFT(194),
  [47] = {.entry = {.count = 1, .reusable = true}}, SHIFT(169),
  [49] = {.entry = {.count = 1, .reusable = false}}, SHIFT(214),
  [51] = {.entry = {.count = 1, .reusable = false}}, SHIFT(208),
  [53] = {.entry = {.count = 1, .reusable = false}}, SHIFT(44),
  [55] = {.entry = {.count = 1, .reusable = false}}, SHIFT(217),
  [57] = {.entry = {.count = 1, .reusable = false}}, SHIFT(211),
  [59] = {.entry = {.count = 1, .reusable = false}}, SHIFT(41),
  [61] = {.entry = {.count = 1, .reusable = false}}, SHIFT(216),
  [63] = {.entry = {.count = 1, .reusable = false}}, SHIFT(213),
  [65] = {.entry = {.count = 1, .reusable = false}}, SHIFT(43),
  [67] = {.entry = {.count = 1, .reusable = true}}, SHIFT(148),
  [69] = {.entry = {.count = 1, .reusable = true}}, SHIFT(156),
  [71] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_compound_statement_repeat1, 2), SHIFT_REPEAT(64),
  [74] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_compound_statement_repeat1, 2),
  [76] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_compound_statement_repeat1, 2), SHIFT_REPEAT(168),
  [79] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_compound_statement_repeat1, 2), SHIFT_REPEAT(195),
  [82] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_compound_statement_repeat1, 2), SHIFT_REPEAT(4),
  [85] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_compound_statement_repeat1, 2), SHIFT_REPEAT(48),
  [88] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_compound_statement_repeat1, 2), SHIFT_REPEAT(110),
  [91] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_compound_statement_repeat1, 2), SHIFT_REPEAT(68),
  [94] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_compound_statement_repeat1, 2), SHIFT_REPEAT(68),
  [97] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_compound_statement_repeat1, 2), SHIFT_REPEAT(162),
  [100] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_compound_statement_repeat1, 2), SHIFT_REPEAT(21),
  [103] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_compound_statement_repeat1, 2), SHIFT_REPEAT(27),
  [106] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_compound_statement_repeat1, 2), SHIFT_REPEAT(27),
  [109] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_compound_statement_repeat1, 2), SHIFT_REPEAT(137),
  [112] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_compound_statement_repeat1, 2), SHIFT_REPEAT(135),
  [115] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_field_expression, 3, .production_id = 15),
  [117] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_field_expression, 3, .production_id = 15),
  [119] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__expression, 1),
  [121] = {.entry = {.count = 1, .reusable = false}}, SHIFT(67),
  [123] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [125] = {.entry = {.count = 1, .reusable = true}}, SHIFT(67),
  [127] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__expression, 1),
  [129] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_binary_expression, 3),
  [131] = {.entry = {.count = 1, .reusable = true}}, SHIFT(183),
  [133] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_binary_expression, 3),
  [135] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string_literal, 4),
  [137] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string_literal, 4),
  [139] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_unary_expression, 2),
  [141] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_unary_expression, 2),
  [143] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_numeric_literal, 1),
  [145] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_numeric_literal, 1),
  [147] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_funcall_expression, 5, .production_id = 19),
  [149] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_funcall_expression, 5, .production_id = 19),
  [151] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_funcall_expression, 3, .production_id = 14),
  [153] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_funcall_expression, 3, .production_id = 14),
  [155] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [157] = {.entry = {.count = 1, .reusable = false}}, SHIFT(52),
  [159] = {.entry = {.count = 1, .reusable = false}}, SHIFT(58),
  [161] = {.entry = {.count = 1, .reusable = false}}, SHIFT(57),
  [163] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string_literal, 3),
  [165] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string_literal, 3),
  [167] = {.entry = {.count = 1, .reusable = true}}, SHIFT(63),
  [169] = {.entry = {.count = 1, .reusable = true}}, SHIFT(60),
  [171] = {.entry = {.count = 1, .reusable = false}}, SHIFT(59),
  [173] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
  [175] = {.entry = {.count = 1, .reusable = false}}, SHIFT(56),
  [177] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parenthesized_expression, 3),
  [179] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_parenthesized_expression, 3),
  [181] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_vector_literal, 5),
  [183] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_vector_literal, 5),
  [185] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_funcall_expression, 4, .production_id = 16),
  [187] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_funcall_expression, 4, .production_id = 16),
  [189] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_return_statement, 1),
  [191] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_return_statement, 1),
  [193] = {.entry = {.count = 1, .reusable = false}}, SHIFT(23),
  [195] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_compound_statement_repeat1, 2),
  [197] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_assignment_statement, 3, .production_id = 13),
  [199] = {.entry = {.count = 1, .reusable = true}}, SHIFT(61),
  [201] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_return_statement, 2, .production_id = 10),
  [203] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__expression_statement, 1),
  [205] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [207] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [209] = {.entry = {.count = 1, .reusable = true}}, SHIFT(71),
  [211] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [213] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2),
  [215] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(112),
  [218] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(180),
  [221] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(162),
  [224] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_funcall_expression_repeat1, 2, .production_id = 18),
  [226] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1),
  [228] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [230] = {.entry = {.count = 1, .reusable = true}}, SHIFT(151),
  [232] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [234] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [236] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [238] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [240] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [242] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [244] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [246] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [248] = {.entry = {.count = 1, .reusable = true}}, SHIFT(207),
  [250] = {.entry = {.count = 1, .reusable = true}}, SHIFT(206),
  [252] = {.entry = {.count = 1, .reusable = true}}, SHIFT(190),
  [254] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_field_definition, 7, .production_id = 12),
  [256] = {.entry = {.count = 1, .reusable = true}}, SHIFT(198),
  [258] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_declaration, 4, .production_id = 3),
  [260] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable_definition, 6, .production_id = 8),
  [262] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_modelgen_pragma, 3),
  [264] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_field_definition, 6, .production_id = 6),
  [266] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable_definition, 3, .production_id = 1),
  [268] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_definition, 6, .production_id = 3),
  [270] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_definition, 6, .production_id = 11),
  [272] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_field_definition, 4, .production_id = 2),
  [274] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_definition, 11, .production_id = 3),
  [276] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_definition, 11, .production_id = 22),
  [278] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable_definition, 5, .production_id = 5),
  [280] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_constant_definition, 5, .production_id = 4),
  [282] = {.entry = {.count = 1, .reusable = false}}, SHIFT(111),
  [284] = {.entry = {.count = 1, .reusable = true}}, SHIFT(111),
  [286] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable_definition_statement, 4, .production_id = 1),
  [288] = {.entry = {.count = 1, .reusable = true}}, SHIFT(108),
  [290] = {.entry = {.count = 1, .reusable = true}}, SHIFT(178),
  [292] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable_definition_statement, 6, .production_id = 1),
  [294] = {.entry = {.count = 1, .reusable = true}}, SHIFT(101),
  [296] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable_definition_statement, 7, .production_id = 2),
  [298] = {.entry = {.count = 1, .reusable = true}}, SHIFT(102),
  [300] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable_definition_statement, 5, .production_id = 2),
  [302] = {.entry = {.count = 1, .reusable = true}}, SHIFT(105),
  [304] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable_definition_statement, 5, .production_id = 1),
  [306] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_variable_definition_statement_repeat1, 2),
  [308] = {.entry = {.count = 1, .reusable = true}}, SHIFT(104),
  [310] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable_definition_statement, 9, .production_id = 1),
  [312] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable_definition_statement, 3, .production_id = 2),
  [314] = {.entry = {.count = 1, .reusable = true}}, SHIFT(103),
  [316] = {.entry = {.count = 1, .reusable = true}}, SHIFT(172),
  [318] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable_definition_statement, 7, .production_id = 1),
  [320] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable_definition_statement, 8, .production_id = 1),
  [322] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable_definition_statement, 10, .production_id = 2),
  [324] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable_definition_statement, 8, .production_id = 2),
  [326] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable_definition_statement, 6, .production_id = 2),
  [328] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable_definition_statement, 9, .production_id = 2),
  [330] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable_definition_statement, 2, .production_id = 1),
  [332] = {.entry = {.count = 1, .reusable = true}}, SHIFT(107),
  [334] = {.entry = {.count = 1, .reusable = true}}, SHIFT(179),
  [336] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_variable_definition_statement_repeat1, 2), SHIFT_REPEAT(178),
  [339] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_string_literal_repeat1, 2), SHIFT_REPEAT(131),
  [342] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_string_literal_repeat1, 2),
  [344] = {.entry = {.count = 1, .reusable = false}}, SHIFT_EXTRA(),
  [346] = {.entry = {.count = 1, .reusable = true}}, SHIFT(176),
  [348] = {.entry = {.count = 1, .reusable = false}}, SHIFT(131),
  [350] = {.entry = {.count = 1, .reusable = false}}, SHIFT(189),
  [352] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_variable_definition_statement_repeat1, 4),
  [354] = {.entry = {.count = 1, .reusable = false}}, SHIFT(133),
  [356] = {.entry = {.count = 1, .reusable = false}}, SHIFT(197),
  [358] = {.entry = {.count = 1, .reusable = true}}, SHIFT(173),
  [360] = {.entry = {.count = 1, .reusable = true}}, SHIFT(85),
  [362] = {.entry = {.count = 1, .reusable = true}}, SHIFT(150),
  [364] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [366] = {.entry = {.count = 1, .reusable = true}}, SHIFT(88),
  [368] = {.entry = {.count = 1, .reusable = true}}, SHIFT(201),
  [370] = {.entry = {.count = 1, .reusable = true}}, SHIFT(99),
  [372] = {.entry = {.count = 1, .reusable = true}}, SHIFT(196),
  [374] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_while_statement, 5, .production_id = 17),
  [376] = {.entry = {.count = 1, .reusable = true}}, SHIFT(92),
  [378] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_if_statement, 7, .production_id = 17),
  [380] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_parameter_list_repeat1, 2), SHIFT_REPEAT(109),
  [383] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_parameter_list_repeat1, 2),
  [385] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_funcall_expression_repeat1, 2, .production_id = 20), SHIFT_REPEAT(71),
  [388] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_funcall_expression_repeat1, 2, .production_id = 20),
  [390] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_compound_statement, 2),
  [392] = {.entry = {.count = 1, .reusable = true}}, SHIFT(86),
  [394] = {.entry = {.count = 1, .reusable = true}}, SHIFT(199),
  [396] = {.entry = {.count = 1, .reusable = true}}, SHIFT(93),
  [398] = {.entry = {.count = 1, .reusable = true}}, SHIFT(106),
  [400] = {.entry = {.count = 1, .reusable = true}}, SHIFT(204),
  [402] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_do_while_statement, 6, .production_id = 21),
  [404] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_variable_definition_repeat1, 2, .production_id = 9),
  [406] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_variable_definition_repeat1, 2, .production_id = 9), SHIFT_REPEAT(196),
  [409] = {.entry = {.count = 1, .reusable = true}}, SHIFT(87),
  [411] = {.entry = {.count = 1, .reusable = true}}, SHIFT(90),
  [413] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_compound_statement, 3),
  [415] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter, 2, .production_id = 1),
  [417] = {.entry = {.count = 1, .reusable = true}}, SHIFT(188),
  [419] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [421] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_if_statement, 5, .production_id = 17),
  [423] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_variable_definition_repeat1, 2, .production_id = 7),
  [425] = {.entry = {.count = 1, .reusable = true}}, SHIFT(96),
  [427] = {.entry = {.count = 1, .reusable = true}}, SHIFT(203),
  [429] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_simple_type, 1),
  [431] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [433] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [435] = {.entry = {.count = 1, .reusable = true}}, SHIFT(89),
  [437] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [439] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [441] = {.entry = {.count = 1, .reusable = true}}, SHIFT(72),
  [443] = {.entry = {.count = 1, .reusable = true}}, SHIFT(97),
  [445] = {.entry = {.count = 1, .reusable = true}}, SHIFT(98),
  [447] = {.entry = {.count = 1, .reusable = true}}, SHIFT(69),
  [449] = {.entry = {.count = 1, .reusable = true}}, SHIFT(116),
  [451] = {.entry = {.count = 1, .reusable = true}}, SHIFT(115),
  [453] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [455] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_frame_identifier, 2),
  [457] = {.entry = {.count = 1, .reusable = true}}, SHIFT(114),
  [459] = {.entry = {.count = 1, .reusable = true}}, SHIFT(174),
  [461] = {.entry = {.count = 1, .reusable = true}}, SHIFT(119),
  [463] = {.entry = {.count = 1, .reusable = true}}, SHIFT(113),
  [465] = {.entry = {.count = 1, .reusable = true}}, SHIFT(210),
  [467] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [469] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter_list, 6),
  [471] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [473] = {.entry = {.count = 1, .reusable = true}}, SHIFT(122),
  [475] = {.entry = {.count = 1, .reusable = true}}, SHIFT(171),
  [477] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [479] = {.entry = {.count = 1, .reusable = true}}, SHIFT(177),
  [481] = {.entry = {.count = 1, .reusable = true}}, SHIFT(175),
  [483] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [485] = {.entry = {.count = 1, .reusable = true}}, SHIFT(182),
  [487] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter_list, 5),
  [489] = {.entry = {.count = 1, .reusable = true}}, SHIFT(129),
  [491] = {.entry = {.count = 1, .reusable = true}}, SHIFT(95),
  [493] = {.entry = {.count = 1, .reusable = true}}, SHIFT(94),
  [495] = {.entry = {.count = 1, .reusable = true}}, SHIFT(74),
  [497] = {.entry = {.count = 1, .reusable = true}}, SHIFT(160),
  [499] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [501] = {.entry = {.count = 1, .reusable = true}}, SHIFT(191),
  [503] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter_list, 4),
  [505] = {.entry = {.count = 1, .reusable = true}}, SHIFT(100),
  [507] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter_list, 3),
  [509] = {.entry = {.count = 1, .reusable = true}}, SHIFT(143),
  [511] = {.entry = {.count = 1, .reusable = true}}, SHIFT(141),
  [513] = {.entry = {.count = 1, .reusable = true}}, SHIFT(157),
  [515] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter_list, 2),
  [517] = {.entry = {.count = 1, .reusable = true}}, SHIFT(202),
  [519] = {.entry = {.count = 1, .reusable = true}}, SHIFT(70),
  [521] = {.entry = {.count = 1, .reusable = true}}, SHIFT(166),
  [523] = {.entry = {.count = 1, .reusable = false}}, SHIFT(91),
  [525] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [527] = {.entry = {.count = 1, .reusable = true}}, SHIFT(161),
  [529] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [531] = {.entry = {.count = 1, .reusable = true}}, SHIFT(62),
  [533] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [535] = {.entry = {.count = 1, .reusable = true}}, SHIFT(65),
  [537] = {.entry = {.count = 1, .reusable = true}}, SHIFT(73),
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
