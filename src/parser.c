#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 182
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 91
#define ALIAS_COUNT 0
#define TOKEN_COUNT 53
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 8
#define MAX_ALIAS_SEQUENCE_LENGTH 11
#define PRODUCTION_ID_COUNT 20

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
  anon_sym_if = 15,
  anon_sym_else = 16,
  anon_sym_while = 17,
  anon_sym_do = 18,
  anon_sym_return = 19,
  anon_sym_local = 20,
  anon_sym_DASH = 21,
  anon_sym_PLUS = 22,
  anon_sym_STAR = 23,
  anon_sym_SLASH = 24,
  anon_sym_PIPE_PIPE = 25,
  anon_sym_AMP_AMP = 26,
  anon_sym_BANG = 27,
  anon_sym_PIPE = 28,
  anon_sym_AMP = 29,
  anon_sym_EQ_EQ = 30,
  anon_sym_BANG_EQ = 31,
  anon_sym_GT = 32,
  anon_sym_GT_EQ = 33,
  anon_sym_LT_EQ = 34,
  anon_sym_LT = 35,
  anon_sym_void = 36,
  anon_sym_entity = 37,
  anon_sym_float = 38,
  anon_sym_vector = 39,
  anon_sym_string = 40,
  anon_sym_int = 41,
  sym_identifier = 42,
  aux_sym_frame_identifier_token1 = 43,
  sym__integer_literal = 44,
  sym__float_literal = 45,
  anon_sym_BQUOTE = 46,
  anon_sym_DQUOTE = 47,
  aux_sym_string_literal_token1 = 48,
  aux_sym_string_literal_token2 = 49,
  aux_sym_string_literal_token3 = 50,
  sym_builtin_literal = 51,
  sym_comment = 52,
  sym_source_file = 53,
  sym__definition = 54,
  sym_function_declaration = 55,
  sym_function_definition = 56,
  sym_constant_definition = 57,
  sym_variable_definition = 58,
  sym_field_definition = 59,
  sym_parameter_list = 60,
  sym_parameter = 61,
  sym_modelgen_pragma = 62,
  sym__statement = 63,
  sym_compound_statement = 64,
  sym__simple_statement = 65,
  sym_assignment_statement = 66,
  sym_if_statement = 67,
  sym_while_statement = 68,
  sym_do_while_statement = 69,
  sym_return_statement = 70,
  sym_variable_definition_statement = 71,
  sym__expression_statement = 72,
  sym__expression = 73,
  sym_unary_expression = 74,
  sym_binary_expression = 75,
  sym_funcall_expression = 76,
  sym_parenthesized_expression = 77,
  sym_simple_type = 78,
  sym_frame_identifier = 79,
  sym__literal = 80,
  sym_numeric_literal = 81,
  sym_vector_literal = 82,
  sym_string_literal = 83,
  aux_sym_source_file_repeat1 = 84,
  aux_sym_variable_definition_repeat1 = 85,
  aux_sym_parameter_list_repeat1 = 86,
  aux_sym_compound_statement_repeat1 = 87,
  aux_sym_variable_definition_statement_repeat1 = 88,
  aux_sym_funcall_expression_repeat1 = 89,
  aux_sym_string_literal_repeat1 = 90,
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
  field_body = 2,
  field_condition = 3,
  field_name = 4,
  field_parameters = 5,
  field_result = 6,
  field_type = 7,
  field_value = 8,
};

static const char * const ts_field_names[] = {
  [0] = NULL,
  [field_arg] = "arg",
  [field_body] = "body",
  [field_condition] = "condition",
  [field_name] = "name",
  [field_parameters] = "parameters",
  [field_result] = "result",
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
  [12] = {.index = 31, .length = 1},
  [13] = {.index = 32, .length = 2},
  [14] = {.index = 34, .length = 1},
  [15] = {.index = 35, .length = 1},
  [16] = {.index = 36, .length = 3},
  [17] = {.index = 39, .length = 2},
  [18] = {.index = 41, .length = 1},
  [19] = {.index = 42, .length = 4},
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
    {field_name, 0},
  [32] =
    {field_arg, 2},
    {field_name, 0},
  [34] =
    {field_condition, 2},
  [35] =
    {field_arg, 1},
  [36] =
    {field_arg, 2},
    {field_arg, 3, .inherited = true},
    {field_name, 0},
  [39] =
    {field_arg, 0, .inherited = true},
    {field_arg, 1, .inherited = true},
  [41] =
    {field_condition, 4},
  [42] =
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
  [85] = 20,
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
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(94);
      if (lookahead == '!') ADVANCE(133);
      if (lookahead == '"') ADVANCE(196);
      if (lookahead == '#') ADVANCE(87);
      if (lookahead == '$') ADVANCE(105);
      if (lookahead == '&') ADVANCE(135);
      if (lookahead == '(') ADVANCE(102);
      if (lookahead == ')') ADVANCE(104);
      if (lookahead == '*') ADVANCE(129);
      if (lookahead == '+') ADVANCE(128);
      if (lookahead == ',') ADVANCE(98);
      if (lookahead == '-') ADVANCE(127);
      if (lookahead == '.') ADVANCE(101);
      if (lookahead == '/') ADVANCE(130);
      if (lookahead == ';') ADVANCE(95);
      if (lookahead == '<') ADVANCE(141);
      if (lookahead == '=') ADVANCE(96);
      if (lookahead == '>') ADVANCE(138);
      if (lookahead == '[') ADVANCE(97);
      if (lookahead == '\\') ADVANCE(2);
      if (lookahead == ']') ADVANCE(99);
      if (lookahead == '`') ADVANCE(195);
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
      if (lookahead == '|') ADVANCE(134);
      if (lookahead == '}') ADVANCE(114);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(92)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(193);
      END_STATE();
    case 1:
      if (lookahead == '\n') SKIP(12)
      END_STATE();
    case 2:
      if (lookahead == '\n') SKIP(12)
      if (lookahead == '\r') SKIP(1)
      if (lookahead == 'n' ||
          lookahead == 'r') ADVANCE(202);
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
      if (lookahead == '!') ADVANCE(133);
      if (lookahead == '"') ADVANCE(196);
      if (lookahead == '#') ADVANCE(87);
      if (lookahead == '$') ADVANCE(105);
      if (lookahead == '&') ADVANCE(135);
      if (lookahead == '(') ADVANCE(102);
      if (lookahead == ')') ADVANCE(104);
      if (lookahead == '*') ADVANCE(129);
      if (lookahead == '+') ADVANCE(128);
      if (lookahead == ',') ADVANCE(98);
      if (lookahead == '-') ADVANCE(127);
      if (lookahead == '.') ADVANCE(101);
      if (lookahead == '/') ADVANCE(130);
      if (lookahead == ';') ADVANCE(95);
      if (lookahead == '<') ADVANCE(141);
      if (lookahead == '=') ADVANCE(96);
      if (lookahead == '>') ADVANCE(138);
      if (lookahead == '[') ADVANCE(97);
      if (lookahead == '\\') ADVANCE(2);
      if (lookahead == ']') ADVANCE(99);
      if (lookahead == '`') ADVANCE(195);
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
      if (lookahead == '|') ADVANCE(134);
      if (lookahead == '}') ADVANCE(114);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(12)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(193);
      END_STATE();
    case 13:
      if (lookahead == '"') ADVANCE(196);
      if (lookahead == '#') ADVANCE(87);
      if (lookahead == '(') ADVANCE(102);
      if (lookahead == '+') ADVANCE(128);
      if (lookahead == '-') ADVANCE(127);
      if (lookahead == '.') ADVANCE(19);
      if (lookahead == '/') ADVANCE(15);
      if (lookahead == '[') ADVANCE(97);
      if (lookahead == '\\') SKIP(4)
      if (lookahead == '`') ADVANCE(195);
      if (lookahead == 'd') ADVANCE(175);
      if (lookahead == 'e') ADVANCE(174);
      if (lookahead == 'f') ADVANCE(171);
      if (lookahead == 'i') ADVANCE(162);
      if (lookahead == 'l') ADVANCE(176);
      if (lookahead == 'r') ADVANCE(161);
      if (lookahead == 's') ADVANCE(182);
      if (lookahead == 'v') ADVANCE(160);
      if (lookahead == 'w') ADVANCE(164);
      if (lookahead == '{') ADVANCE(113);
      if (lookahead == '}') ADVANCE(114);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(13)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(193);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(191);
      END_STATE();
    case 14:
      if (lookahead == '"') ADVANCE(196);
      if (lookahead == '(') ADVANCE(102);
      if (lookahead == ')') ADVANCE(104);
      if (lookahead == '+') ADVANCE(128);
      if (lookahead == '-') ADVANCE(127);
      if (lookahead == '.') ADVANCE(88);
      if (lookahead == '/') ADVANCE(15);
      if (lookahead == '\\') SKIP(6)
      if (lookahead == '`') ADVANCE(195);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(14)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(193);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(191);
      END_STATE();
    case 15:
      if (lookahead == '*') ADVANCE(17);
      if (lookahead == '/') ADVANCE(215);
      END_STATE();
    case 16:
      if (lookahead == '*') ADVANCE(16);
      if (lookahead == '/') ADVANCE(214);
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
      if (lookahead == '`') ADVANCE(195);
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
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(193);
      END_STATE();
    case 19:
      if (lookahead == '.') ADVANCE(20);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(194);
      END_STATE();
    case 20:
      if (lookahead == '.') ADVANCE(103);
      END_STATE();
    case 21:
      if (lookahead == '.') ADVANCE(88);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(193);
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
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(192);
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
      if (lookahead == 'd') ADVANCE(142);
      END_STATE();
    case 35:
      if (lookahead == 'd') ADVANCE(41);
      END_STATE();
    case 36:
      if (lookahead == 'e') ADVANCE(106);
      END_STATE();
    case 37:
      if (lookahead == 'e') ADVANCE(117);
      END_STATE();
    case 38:
      if (lookahead == 'e') ADVANCE(118);
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
      if (lookahead == 'f') ADVANCE(115);
      if (lookahead == 'n') ADVANCE(78);
      END_STATE();
    case 43:
      if (lookahead == 'g') ADVANCE(150);
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
      if (lookahead == 'l') ADVANCE(124);
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
      if (lookahead == 'n') ADVANCE(122);
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
      if (lookahead == 'o') ADVANCE(120);
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
      if (lookahead == 'r') ADVANCE(148);
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
      if (lookahead == 't') ADVANCE(152);
      END_STATE();
    case 79:
      if (lookahead == 't') ADVANCE(85);
      END_STATE();
    case 80:
      if (lookahead == 't') ADVANCE(86);
      END_STATE();
    case 81:
      if (lookahead == 't') ADVANCE(146);
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
      if (lookahead == 'y') ADVANCE(144);
      END_STATE();
    case 87:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(212);
      END_STATE();
    case 88:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(194);
      END_STATE();
    case 89:
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(213);
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
      if (lookahead == '!') ADVANCE(133);
      if (lookahead == '"') ADVANCE(196);
      if (lookahead == '#') ADVANCE(87);
      if (lookahead == '$') ADVANCE(105);
      if (lookahead == '&') ADVANCE(135);
      if (lookahead == '(') ADVANCE(102);
      if (lookahead == ')') ADVANCE(104);
      if (lookahead == '*') ADVANCE(129);
      if (lookahead == '+') ADVANCE(128);
      if (lookahead == ',') ADVANCE(98);
      if (lookahead == '-') ADVANCE(127);
      if (lookahead == '.') ADVANCE(101);
      if (lookahead == '/') ADVANCE(130);
      if (lookahead == ';') ADVANCE(95);
      if (lookahead == '<') ADVANCE(141);
      if (lookahead == '=') ADVANCE(96);
      if (lookahead == '>') ADVANCE(138);
      if (lookahead == '[') ADVANCE(97);
      if (lookahead == '\\') ADVANCE(2);
      if (lookahead == ']') ADVANCE(99);
      if (lookahead == '`') ADVANCE(195);
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
      if (lookahead == '|') ADVANCE(134);
      if (lookahead == '}') ADVANCE(114);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(92)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(193);
      END_STATE();
    case 93:
      if (eof) ADVANCE(94);
      if (lookahead == '!') ADVANCE(133);
      if (lookahead == '$') ADVANCE(105);
      if (lookahead == '&') ADVANCE(135);
      if (lookahead == '(') ADVANCE(102);
      if (lookahead == ')') ADVANCE(104);
      if (lookahead == '*') ADVANCE(129);
      if (lookahead == '+') ADVANCE(128);
      if (lookahead == ',') ADVANCE(98);
      if (lookahead == '-') ADVANCE(126);
      if (lookahead == '.') ADVANCE(100);
      if (lookahead == '/') ADVANCE(130);
      if (lookahead == ';') ADVANCE(95);
      if (lookahead == '<') ADVANCE(141);
      if (lookahead == '=') ADVANCE(96);
      if (lookahead == '>') ADVANCE(138);
      if (lookahead == '\\') SKIP(91)
      if (lookahead == 'e') ADVANCE(59);
      if (lookahead == 'f') ADVANCE(57);
      if (lookahead == 'i') ADVANCE(64);
      if (lookahead == 's') ADVANCE(84);
      if (lookahead == 'v') ADVANCE(39);
      if (lookahead == 'w') ADVANCE(46);
      if (lookahead == '|') ADVANCE(134);
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
      if (lookahead == '=') ADVANCE(136);
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
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(194);
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
      ACCEPT_TOKEN(anon_sym_if);
      END_STATE();
    case 116:
      ACCEPT_TOKEN(anon_sym_if);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(191);
      END_STATE();
    case 117:
      ACCEPT_TOKEN(anon_sym_else);
      END_STATE();
    case 118:
      ACCEPT_TOKEN(anon_sym_while);
      END_STATE();
    case 119:
      ACCEPT_TOKEN(anon_sym_while);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(191);
      END_STATE();
    case 120:
      ACCEPT_TOKEN(anon_sym_do);
      END_STATE();
    case 121:
      ACCEPT_TOKEN(anon_sym_do);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(191);
      END_STATE();
    case 122:
      ACCEPT_TOKEN(anon_sym_return);
      END_STATE();
    case 123:
      ACCEPT_TOKEN(anon_sym_return);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(191);
      END_STATE();
    case 124:
      ACCEPT_TOKEN(anon_sym_local);
      END_STATE();
    case 125:
      ACCEPT_TOKEN(anon_sym_local);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(191);
      END_STATE();
    case 126:
      ACCEPT_TOKEN(anon_sym_DASH);
      END_STATE();
    case 127:
      ACCEPT_TOKEN(anon_sym_DASH);
      if (lookahead == '.') ADVANCE(88);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(193);
      END_STATE();
    case 128:
      ACCEPT_TOKEN(anon_sym_PLUS);
      END_STATE();
    case 129:
      ACCEPT_TOKEN(anon_sym_STAR);
      END_STATE();
    case 130:
      ACCEPT_TOKEN(anon_sym_SLASH);
      if (lookahead == '*') ADVANCE(17);
      if (lookahead == '/') ADVANCE(215);
      END_STATE();
    case 131:
      ACCEPT_TOKEN(anon_sym_PIPE_PIPE);
      END_STATE();
    case 132:
      ACCEPT_TOKEN(anon_sym_AMP_AMP);
      END_STATE();
    case 133:
      ACCEPT_TOKEN(anon_sym_BANG);
      if (lookahead == '=') ADVANCE(137);
      END_STATE();
    case 134:
      ACCEPT_TOKEN(anon_sym_PIPE);
      if (lookahead == '|') ADVANCE(131);
      END_STATE();
    case 135:
      ACCEPT_TOKEN(anon_sym_AMP);
      if (lookahead == '&') ADVANCE(132);
      END_STATE();
    case 136:
      ACCEPT_TOKEN(anon_sym_EQ_EQ);
      END_STATE();
    case 137:
      ACCEPT_TOKEN(anon_sym_BANG_EQ);
      END_STATE();
    case 138:
      ACCEPT_TOKEN(anon_sym_GT);
      if (lookahead == '=') ADVANCE(139);
      END_STATE();
    case 139:
      ACCEPT_TOKEN(anon_sym_GT_EQ);
      END_STATE();
    case 140:
      ACCEPT_TOKEN(anon_sym_LT_EQ);
      END_STATE();
    case 141:
      ACCEPT_TOKEN(anon_sym_LT);
      if (lookahead == '=') ADVANCE(140);
      END_STATE();
    case 142:
      ACCEPT_TOKEN(anon_sym_void);
      END_STATE();
    case 143:
      ACCEPT_TOKEN(anon_sym_void);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(191);
      END_STATE();
    case 144:
      ACCEPT_TOKEN(anon_sym_entity);
      END_STATE();
    case 145:
      ACCEPT_TOKEN(anon_sym_entity);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(191);
      END_STATE();
    case 146:
      ACCEPT_TOKEN(anon_sym_float);
      END_STATE();
    case 147:
      ACCEPT_TOKEN(anon_sym_float);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(191);
      END_STATE();
    case 148:
      ACCEPT_TOKEN(anon_sym_vector);
      END_STATE();
    case 149:
      ACCEPT_TOKEN(anon_sym_vector);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(191);
      END_STATE();
    case 150:
      ACCEPT_TOKEN(anon_sym_string);
      END_STATE();
    case 151:
      ACCEPT_TOKEN(anon_sym_string);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(191);
      END_STATE();
    case 152:
      ACCEPT_TOKEN(anon_sym_int);
      END_STATE();
    case 153:
      ACCEPT_TOKEN(anon_sym_int);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(191);
      END_STATE();
    case 154:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(169);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(191);
      END_STATE();
    case 155:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(186);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(191);
      END_STATE();
    case 156:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'c') ADVANCE(154);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(191);
      END_STATE();
    case 157:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'c') ADVANCE(188);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(191);
      END_STATE();
    case 158:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'd') ADVANCE(143);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(191);
      END_STATE();
    case 159:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(119);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(191);
      END_STATE();
    case 160:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(157);
      if (lookahead == 'o') ADVANCE(165);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(191);
      END_STATE();
    case 161:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(184);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(191);
      END_STATE();
    case 162:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'f') ADVANCE(116);
      if (lookahead == 'n') ADVANCE(183);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(191);
      END_STATE();
    case 163:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'g') ADVANCE(151);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(191);
      END_STATE();
    case 164:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'h') ADVANCE(167);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(191);
      END_STATE();
    case 165:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(158);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(191);
      END_STATE();
    case 166:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(172);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(191);
      END_STATE();
    case 167:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(170);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(191);
      END_STATE();
    case 168:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(185);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(191);
      END_STATE();
    case 169:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(125);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(191);
      END_STATE();
    case 170:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(159);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(191);
      END_STATE();
    case 171:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(177);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(191);
      END_STATE();
    case 172:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(163);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(191);
      END_STATE();
    case 173:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(123);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(191);
      END_STATE();
    case 174:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(187);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(191);
      END_STATE();
    case 175:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(121);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(191);
      END_STATE();
    case 176:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(156);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(191);
      END_STATE();
    case 177:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(155);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(191);
      END_STATE();
    case 178:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(179);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(191);
      END_STATE();
    case 179:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(149);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(191);
      END_STATE();
    case 180:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(173);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(191);
      END_STATE();
    case 181:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(166);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(191);
      END_STATE();
    case 182:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(181);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(191);
      END_STATE();
    case 183:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(153);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(191);
      END_STATE();
    case 184:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(189);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(191);
      END_STATE();
    case 185:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(190);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(191);
      END_STATE();
    case 186:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(147);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(191);
      END_STATE();
    case 187:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(168);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(191);
      END_STATE();
    case 188:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(178);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(191);
      END_STATE();
    case 189:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'u') ADVANCE(180);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(191);
      END_STATE();
    case 190:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'y') ADVANCE(145);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(191);
      END_STATE();
    case 191:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(191);
      END_STATE();
    case 192:
      ACCEPT_TOKEN(aux_sym_frame_identifier_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(192);
      END_STATE();
    case 193:
      ACCEPT_TOKEN(sym__integer_literal);
      if (lookahead == '.') ADVANCE(88);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(193);
      END_STATE();
    case 194:
      ACCEPT_TOKEN(sym__float_literal);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(194);
      END_STATE();
    case 195:
      ACCEPT_TOKEN(anon_sym_BQUOTE);
      END_STATE();
    case 196:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 197:
      ACCEPT_TOKEN(aux_sym_string_literal_token1);
      if (lookahead == '*') ADVANCE(199);
      if (lookahead == '/') ADVANCE(201);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(201);
      END_STATE();
    case 198:
      ACCEPT_TOKEN(aux_sym_string_literal_token1);
      if (lookahead == '*') ADVANCE(198);
      if (lookahead == '/') ADVANCE(201);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(199);
      END_STATE();
    case 199:
      ACCEPT_TOKEN(aux_sym_string_literal_token1);
      if (lookahead == '*') ADVANCE(198);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(199);
      END_STATE();
    case 200:
      ACCEPT_TOKEN(aux_sym_string_literal_token1);
      if (lookahead == '/') ADVANCE(197);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(200);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(201);
      END_STATE();
    case 201:
      ACCEPT_TOKEN(aux_sym_string_literal_token1);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(201);
      END_STATE();
    case 202:
      ACCEPT_TOKEN(aux_sym_string_literal_token2);
      END_STATE();
    case 203:
      ACCEPT_TOKEN(aux_sym_string_literal_token3);
      if (lookahead == '\n') ADVANCE(210);
      if (lookahead == '\r') ADVANCE(205);
      if (lookahead == 'n' ||
          lookahead == 'r') ADVANCE(202);
      if (lookahead != 0 &&
          lookahead != '"') ADVANCE(211);
      END_STATE();
    case 204:
      ACCEPT_TOKEN(aux_sym_string_literal_token3);
      if (lookahead == '\n') ADVANCE(210);
      if (lookahead == '/') ADVANCE(197);
      if (lookahead == '\\') ADVANCE(203);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(200);
      if (lookahead != 0 &&
          lookahead != '"') ADVANCE(201);
      END_STATE();
    case 205:
      ACCEPT_TOKEN(aux_sym_string_literal_token3);
      if (lookahead == '\n') ADVANCE(210);
      if (lookahead != 0 &&
          lookahead != '"') ADVANCE(211);
      END_STATE();
    case 206:
      ACCEPT_TOKEN(aux_sym_string_literal_token3);
      if (lookahead == '\n') ADVANCE(211);
      if (lookahead == '"') ADVANCE(215);
      if (lookahead != 0) ADVANCE(206);
      END_STATE();
    case 207:
      ACCEPT_TOKEN(aux_sym_string_literal_token3);
      if (lookahead == '"') ADVANCE(17);
      if (lookahead == '*') ADVANCE(207);
      if (lookahead == '/') ADVANCE(211);
      if (lookahead != 0) ADVANCE(208);
      END_STATE();
    case 208:
      ACCEPT_TOKEN(aux_sym_string_literal_token3);
      if (lookahead == '"') ADVANCE(17);
      if (lookahead == '*') ADVANCE(207);
      if (lookahead != 0) ADVANCE(208);
      END_STATE();
    case 209:
      ACCEPT_TOKEN(aux_sym_string_literal_token3);
      if (lookahead == '*') ADVANCE(208);
      if (lookahead == '/') ADVANCE(206);
      if (lookahead != 0 &&
          lookahead != '"') ADVANCE(211);
      END_STATE();
    case 210:
      ACCEPT_TOKEN(aux_sym_string_literal_token3);
      if (lookahead == '/') ADVANCE(209);
      if (lookahead == '\\') ADVANCE(203);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(210);
      if (lookahead != 0 &&
          lookahead != '"') ADVANCE(211);
      END_STATE();
    case 211:
      ACCEPT_TOKEN(aux_sym_string_literal_token3);
      if (lookahead != 0 &&
          lookahead != '"') ADVANCE(211);
      END_STATE();
    case 212:
      ACCEPT_TOKEN(sym_builtin_literal);
      if (lookahead == ':') ADVANCE(89);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(212);
      END_STATE();
    case 213:
      ACCEPT_TOKEN(sym_builtin_literal);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(213);
      END_STATE();
    case 214:
      ACCEPT_TOKEN(sym_comment);
      END_STATE();
    case 215:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(215);
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
  [16] = {.lex_state = 13},
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
  [32] = {.lex_state = 93},
  [33] = {.lex_state = 93},
  [34] = {.lex_state = 93},
  [35] = {.lex_state = 93},
  [36] = {.lex_state = 93},
  [37] = {.lex_state = 14},
  [38] = {.lex_state = 14},
  [39] = {.lex_state = 14},
  [40] = {.lex_state = 14},
  [41] = {.lex_state = 93},
  [42] = {.lex_state = 14},
  [43] = {.lex_state = 14},
  [44] = {.lex_state = 14},
  [45] = {.lex_state = 14},
  [46] = {.lex_state = 14},
  [47] = {.lex_state = 14},
  [48] = {.lex_state = 14},
  [49] = {.lex_state = 14},
  [50] = {.lex_state = 14},
  [51] = {.lex_state = 14},
  [52] = {.lex_state = 14},
  [53] = {.lex_state = 14},
  [54] = {.lex_state = 14},
  [55] = {.lex_state = 93},
  [56] = {.lex_state = 93},
  [57] = {.lex_state = 93},
  [58] = {.lex_state = 93},
  [59] = {.lex_state = 0},
  [60] = {.lex_state = 93},
  [61] = {.lex_state = 93},
  [62] = {.lex_state = 18},
  [63] = {.lex_state = 93},
  [64] = {.lex_state = 93},
  [65] = {.lex_state = 93},
  [66] = {.lex_state = 93},
  [67] = {.lex_state = 93},
  [68] = {.lex_state = 93},
  [69] = {.lex_state = 93},
  [70] = {.lex_state = 93},
  [71] = {.lex_state = 18},
  [72] = {.lex_state = 93},
  [73] = {.lex_state = 93},
  [74] = {.lex_state = 93},
  [75] = {.lex_state = 13},
  [76] = {.lex_state = 13},
  [77] = {.lex_state = 13},
  [78] = {.lex_state = 0},
  [79] = {.lex_state = 13},
  [80] = {.lex_state = 13},
  [81] = {.lex_state = 13},
  [82] = {.lex_state = 13},
  [83] = {.lex_state = 13},
  [84] = {.lex_state = 0},
  [85] = {.lex_state = 18},
  [86] = {.lex_state = 0},
  [87] = {.lex_state = 0},
  [88] = {.lex_state = 0},
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
  [107] = {.lex_state = 204},
  [108] = {.lex_state = 204},
  [109] = {.lex_state = 204},
  [110] = {.lex_state = 0},
  [111] = {.lex_state = 0},
  [112] = {.lex_state = 14},
  [113] = {.lex_state = 0},
  [114] = {.lex_state = 0},
  [115] = {.lex_state = 0},
  [116] = {.lex_state = 13},
  [117] = {.lex_state = 0},
  [118] = {.lex_state = 0},
  [119] = {.lex_state = 0},
  [120] = {.lex_state = 13},
  [121] = {.lex_state = 0},
  [122] = {.lex_state = 0},
  [123] = {.lex_state = 0},
  [124] = {.lex_state = 0},
  [125] = {.lex_state = 0},
  [126] = {.lex_state = 0},
  [127] = {.lex_state = 13},
  [128] = {.lex_state = 0},
  [129] = {.lex_state = 0},
  [130] = {.lex_state = 0},
  [131] = {.lex_state = 0},
  [132] = {.lex_state = 0},
  [133] = {.lex_state = 0},
  [134] = {.lex_state = 0},
  [135] = {.lex_state = 0},
  [136] = {.lex_state = 14},
  [137] = {.lex_state = 0},
  [138] = {.lex_state = 0},
  [139] = {.lex_state = 0},
  [140] = {.lex_state = 14},
  [141] = {.lex_state = 14},
  [142] = {.lex_state = 14},
  [143] = {.lex_state = 14},
  [144] = {.lex_state = 14},
  [145] = {.lex_state = 14},
  [146] = {.lex_state = 0},
  [147] = {.lex_state = 14},
  [148] = {.lex_state = 9},
  [149] = {.lex_state = 14},
  [150] = {.lex_state = 0},
  [151] = {.lex_state = 14},
  [152] = {.lex_state = 0},
  [153] = {.lex_state = 14},
  [154] = {.lex_state = 14},
  [155] = {.lex_state = 0},
  [156] = {.lex_state = 0},
  [157] = {.lex_state = 14},
  [158] = {.lex_state = 14},
  [159] = {.lex_state = 14},
  [160] = {.lex_state = 0},
  [161] = {.lex_state = 0},
  [162] = {.lex_state = 0},
  [163] = {.lex_state = 14},
  [164] = {.lex_state = 0},
  [165] = {.lex_state = 14},
  [166] = {.lex_state = 0},
  [167] = {.lex_state = 13},
  [168] = {.lex_state = 14},
  [169] = {.lex_state = 0},
  [170] = {.lex_state = 0},
  [171] = {.lex_state = 0},
  [172] = {.lex_state = 0},
  [173] = {.lex_state = 14},
  [174] = {.lex_state = 0},
  [175] = {.lex_state = 0},
  [176] = {.lex_state = 0},
  [177] = {.lex_state = 23},
  [178] = {.lex_state = 14},
  [179] = {.lex_state = 0},
  [180] = {.lex_state = 0},
  [181] = {.lex_state = 0},
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
    [sym_source_file] = STATE(166),
    [sym__definition] = STATE(31),
    [sym_function_declaration] = STATE(31),
    [sym_function_definition] = STATE(31),
    [sym_constant_definition] = STATE(31),
    [sym_variable_definition] = STATE(31),
    [sym_field_definition] = STATE(31),
    [sym_modelgen_pragma] = STATE(31),
    [sym_simple_type] = STATE(112),
    [aux_sym_source_file_repeat1] = STATE(31),
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
  [0] = 21,
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
    STATE(144), 1,
      sym_simple_type,
    ACTIONS(33), 6,
      anon_sym_void,
      anon_sym_entity,
      anon_sym_float,
      anon_sym_vector,
      anon_sym_string,
      anon_sym_int,
    STATE(33), 9,
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
  [86] = 20,
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
    STATE(144), 1,
      sym_simple_type,
    ACTIONS(33), 6,
      anon_sym_void,
      anon_sym_entity,
      anon_sym_float,
      anon_sym_vector,
      anon_sym_string,
      anon_sym_int,
    STATE(33), 9,
      sym__expression,
      sym_unary_expression,
      sym_binary_expression,
      sym_funcall_expression,
      sym_parenthesized_expression,
      sym__literal,
      sym_numeric_literal,
      sym_vector_literal,
      sym_string_literal,
    STATE(156), 10,
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
  [169] = 19,
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
    STATE(144), 1,
      sym_simple_type,
    ACTIONS(33), 6,
      anon_sym_void,
      anon_sym_entity,
      anon_sym_float,
      anon_sym_vector,
      anon_sym_string,
      anon_sym_int,
    STATE(33), 9,
      sym__expression,
      sym_unary_expression,
      sym_binary_expression,
      sym_funcall_expression,
      sym_parenthesized_expression,
      sym__literal,
      sym_numeric_literal,
      sym_vector_literal,
      sym_string_literal,
    STATE(125), 10,
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
  [249] = 19,
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
    STATE(144), 1,
      sym_simple_type,
    ACTIONS(33), 6,
      anon_sym_void,
      anon_sym_entity,
      anon_sym_float,
      anon_sym_vector,
      anon_sym_string,
      anon_sym_int,
    STATE(33), 9,
      sym__expression,
      sym_unary_expression,
      sym_binary_expression,
      sym_funcall_expression,
      sym_parenthesized_expression,
      sym__literal,
      sym_numeric_literal,
      sym_vector_literal,
      sym_string_literal,
    STATE(128), 10,
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
  [329] = 19,
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
    STATE(144), 1,
      sym_simple_type,
    ACTIONS(33), 6,
      anon_sym_void,
      anon_sym_entity,
      anon_sym_float,
      anon_sym_vector,
      anon_sym_string,
      anon_sym_int,
    STATE(33), 9,
      sym__expression,
      sym_unary_expression,
      sym_binary_expression,
      sym_funcall_expression,
      sym_parenthesized_expression,
      sym__literal,
      sym_numeric_literal,
      sym_vector_literal,
      sym_string_literal,
    STATE(174), 10,
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
  [409] = 19,
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
    STATE(144), 1,
      sym_simple_type,
    ACTIONS(33), 6,
      anon_sym_void,
      anon_sym_entity,
      anon_sym_float,
      anon_sym_vector,
      anon_sym_string,
      anon_sym_int,
    STATE(33), 9,
      sym__expression,
      sym_unary_expression,
      sym_binary_expression,
      sym_funcall_expression,
      sym_parenthesized_expression,
      sym__literal,
      sym_numeric_literal,
      sym_vector_literal,
      sym_string_literal,
    STATE(126), 10,
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
  [489] = 20,
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
    STATE(9), 1,
      aux_sym_compound_statement_repeat1,
    STATE(144), 1,
      sym_simple_type,
    ACTIONS(33), 6,
      anon_sym_void,
      anon_sym_entity,
      anon_sym_float,
      anon_sym_vector,
      anon_sym_string,
      anon_sym_int,
    STATE(175), 8,
      sym__simple_statement,
      sym_assignment_statement,
      sym_if_statement,
      sym_while_statement,
      sym_do_while_statement,
      sym_return_statement,
      sym_variable_definition_statement,
      sym__expression_statement,
    STATE(33), 9,
      sym__expression,
      sym_unary_expression,
      sym_binary_expression,
      sym_funcall_expression,
      sym_parenthesized_expression,
      sym__literal,
      sym_numeric_literal,
      sym_vector_literal,
      sym_string_literal,
  [570] = 20,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(51), 1,
      anon_sym_LPAREN,
    ACTIONS(54), 1,
      anon_sym_RBRACE,
    ACTIONS(56), 1,
      anon_sym_if,
    ACTIONS(59), 1,
      anon_sym_while,
    ACTIONS(62), 1,
      anon_sym_do,
    ACTIONS(65), 1,
      anon_sym_return,
    ACTIONS(68), 1,
      anon_sym_local,
    ACTIONS(71), 1,
      anon_sym_DASH,
    ACTIONS(74), 1,
      anon_sym_PLUS,
    ACTIONS(80), 1,
      sym_identifier,
    ACTIONS(83), 1,
      sym__integer_literal,
    ACTIONS(86), 1,
      sym__float_literal,
    ACTIONS(89), 1,
      anon_sym_BQUOTE,
    ACTIONS(92), 1,
      anon_sym_DQUOTE,
    STATE(9), 1,
      aux_sym_compound_statement_repeat1,
    STATE(144), 1,
      sym_simple_type,
    ACTIONS(77), 6,
      anon_sym_void,
      anon_sym_entity,
      anon_sym_float,
      anon_sym_vector,
      anon_sym_string,
      anon_sym_int,
    STATE(175), 8,
      sym__simple_statement,
      sym_assignment_statement,
      sym_if_statement,
      sym_while_statement,
      sym_do_while_statement,
      sym_return_statement,
      sym_variable_definition_statement,
      sym__expression_statement,
    STATE(33), 9,
      sym__expression,
      sym_unary_expression,
      sym_binary_expression,
      sym_funcall_expression,
      sym_parenthesized_expression,
      sym__literal,
      sym_numeric_literal,
      sym_vector_literal,
      sym_string_literal,
  [651] = 20,
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
    ACTIONS(95), 1,
      anon_sym_RBRACE,
    STATE(8), 1,
      aux_sym_compound_statement_repeat1,
    STATE(144), 1,
      sym_simple_type,
    ACTIONS(33), 6,
      anon_sym_void,
      anon_sym_entity,
      anon_sym_float,
      anon_sym_vector,
      anon_sym_string,
      anon_sym_int,
    STATE(175), 8,
      sym__simple_statement,
      sym_assignment_statement,
      sym_if_statement,
      sym_while_statement,
      sym_do_while_statement,
      sym_return_statement,
      sym_variable_definition_statement,
      sym__expression_statement,
    STATE(33), 9,
      sym__expression,
      sym_unary_expression,
      sym_binary_expression,
      sym_funcall_expression,
      sym_parenthesized_expression,
      sym__literal,
      sym_numeric_literal,
      sym_vector_literal,
      sym_string_literal,
  [732] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(99), 1,
      anon_sym_LPAREN,
    ACTIONS(101), 6,
      anon_sym_SLASH,
      anon_sym_BANG,
      anon_sym_PIPE,
      anon_sym_AMP,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(97), 14,
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
  [763] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(105), 6,
      anon_sym_SLASH,
      anon_sym_BANG,
      anon_sym_PIPE,
      anon_sym_AMP,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(103), 14,
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
  [791] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(109), 1,
      anon_sym_STAR,
    ACTIONS(111), 1,
      anon_sym_SLASH,
    ACTIONS(115), 1,
      anon_sym_AMP,
    ACTIONS(113), 4,
      anon_sym_BANG,
      anon_sym_PIPE,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(107), 13,
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
  [825] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(119), 6,
      anon_sym_SLASH,
      anon_sym_BANG,
      anon_sym_PIPE,
      anon_sym_AMP,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(117), 14,
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
  [853] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(123), 6,
      anon_sym_SLASH,
      anon_sym_BANG,
      anon_sym_PIPE,
      anon_sym_AMP,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(121), 14,
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
  [881] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(54), 6,
      anon_sym_LPAREN,
      anon_sym_RBRACE,
      anon_sym_PLUS,
      sym__float_literal,
      anon_sym_BQUOTE,
      anon_sym_DQUOTE,
    ACTIONS(125), 14,
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
  [909] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(129), 6,
      anon_sym_SLASH,
      anon_sym_BANG,
      anon_sym_PIPE,
      anon_sym_AMP,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(127), 14,
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
  [937] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(133), 6,
      anon_sym_SLASH,
      anon_sym_BANG,
      anon_sym_PIPE,
      anon_sym_AMP,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(131), 14,
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
  [965] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(99), 1,
      anon_sym_LPAREN,
    ACTIONS(135), 1,
      anon_sym_EQ,
    ACTIONS(101), 6,
      anon_sym_SLASH,
      anon_sym_BANG,
      anon_sym_PIPE,
      anon_sym_AMP,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(97), 12,
      anon_sym_SEMI,
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
  [997] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(139), 6,
      anon_sym_SLASH,
      anon_sym_BANG,
      anon_sym_PIPE,
      anon_sym_AMP,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(137), 14,
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
  [1025] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(143), 6,
      anon_sym_SLASH,
      anon_sym_BANG,
      anon_sym_PIPE,
      anon_sym_AMP,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(141), 14,
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
  [1053] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(109), 1,
      anon_sym_STAR,
    ACTIONS(111), 1,
      anon_sym_SLASH,
    ACTIONS(115), 1,
      anon_sym_AMP,
    ACTIONS(147), 1,
      anon_sym_PIPE,
    ACTIONS(145), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(113), 3,
      anon_sym_BANG,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(107), 11,
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
  [1091] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(109), 1,
      anon_sym_STAR,
    ACTIONS(111), 1,
      anon_sym_SLASH,
    ACTIONS(113), 5,
      anon_sym_BANG,
      anon_sym_PIPE,
      anon_sym_AMP,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(107), 13,
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
  [1123] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(109), 1,
      anon_sym_STAR,
    ACTIONS(111), 1,
      anon_sym_SLASH,
    ACTIONS(115), 1,
      anon_sym_AMP,
    ACTIONS(147), 1,
      anon_sym_PIPE,
    ACTIONS(113), 3,
      anon_sym_BANG,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(107), 13,
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
  [1159] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(151), 6,
      anon_sym_SLASH,
      anon_sym_BANG,
      anon_sym_PIPE,
      anon_sym_AMP,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(149), 14,
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
  [1187] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(109), 1,
      anon_sym_STAR,
    ACTIONS(111), 1,
      anon_sym_SLASH,
    ACTIONS(113), 1,
      anon_sym_BANG,
    ACTIONS(115), 1,
      anon_sym_AMP,
    ACTIONS(147), 1,
      anon_sym_PIPE,
    ACTIONS(145), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(155), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(153), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
    ACTIONS(107), 7,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_else,
      anon_sym_while,
      anon_sym_PIPE_PIPE,
      anon_sym_AMP_AMP,
  [1229] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(159), 6,
      anon_sym_SLASH,
      anon_sym_BANG,
      anon_sym_PIPE,
      anon_sym_AMP,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(157), 14,
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
  [1257] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(109), 1,
      anon_sym_STAR,
    ACTIONS(111), 1,
      anon_sym_SLASH,
    ACTIONS(115), 1,
      anon_sym_AMP,
    ACTIONS(147), 1,
      anon_sym_PIPE,
    ACTIONS(161), 1,
      anon_sym_BANG,
    ACTIONS(145), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(155), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(153), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
    ACTIONS(107), 7,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_else,
      anon_sym_while,
      anon_sym_PIPE_PIPE,
      anon_sym_AMP_AMP,
  [1299] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(109), 1,
      anon_sym_STAR,
    ACTIONS(111), 1,
      anon_sym_SLASH,
    ACTIONS(115), 1,
      anon_sym_AMP,
    ACTIONS(147), 1,
      anon_sym_PIPE,
    ACTIONS(161), 1,
      anon_sym_BANG,
    ACTIONS(163), 1,
      anon_sym_AMP_AMP,
    ACTIONS(145), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(155), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(153), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
    ACTIONS(107), 6,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_else,
      anon_sym_while,
      anon_sym_PIPE_PIPE,
  [1343] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(113), 6,
      anon_sym_SLASH,
      anon_sym_BANG,
      anon_sym_PIPE,
      anon_sym_AMP,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(107), 14,
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
  [1371] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(7), 1,
      anon_sym_DOT,
    ACTIONS(9), 1,
      anon_sym_DOLLAR,
    ACTIONS(165), 1,
      ts_builtin_sym_end,
    STATE(112), 1,
      sym_simple_type,
    ACTIONS(11), 6,
      anon_sym_void,
      anon_sym_entity,
      anon_sym_float,
      anon_sym_vector,
      anon_sym_string,
      anon_sym_int,
    STATE(36), 8,
      sym__definition,
      sym_function_declaration,
      sym_function_definition,
      sym_constant_definition,
      sym_variable_definition,
      sym_field_definition,
      sym_modelgen_pragma,
      aux_sym_source_file_repeat1,
  [1405] = 14,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(109), 1,
      anon_sym_STAR,
    ACTIONS(111), 1,
      anon_sym_SLASH,
    ACTIONS(115), 1,
      anon_sym_AMP,
    ACTIONS(147), 1,
      anon_sym_PIPE,
    ACTIONS(161), 1,
      anon_sym_BANG,
    ACTIONS(163), 1,
      anon_sym_AMP_AMP,
    ACTIONS(167), 1,
      anon_sym_COMMA,
    ACTIONS(169), 1,
      anon_sym_RPAREN,
    ACTIONS(171), 1,
      anon_sym_PIPE_PIPE,
    STATE(131), 1,
      aux_sym_funcall_expression_repeat1,
    ACTIONS(145), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(155), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(153), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
  [1453] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(109), 1,
      anon_sym_STAR,
    ACTIONS(111), 1,
      anon_sym_SLASH,
    ACTIONS(115), 1,
      anon_sym_AMP,
    ACTIONS(147), 1,
      anon_sym_PIPE,
    ACTIONS(161), 1,
      anon_sym_BANG,
    ACTIONS(163), 1,
      anon_sym_AMP_AMP,
    ACTIONS(171), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(145), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(155), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(173), 3,
      anon_sym_SEMI,
      anon_sym_else,
      anon_sym_while,
    ACTIONS(153), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
  [1497] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(109), 1,
      anon_sym_STAR,
    ACTIONS(111), 1,
      anon_sym_SLASH,
    ACTIONS(115), 1,
      anon_sym_AMP,
    ACTIONS(147), 1,
      anon_sym_PIPE,
    ACTIONS(161), 1,
      anon_sym_BANG,
    ACTIONS(163), 1,
      anon_sym_AMP_AMP,
    ACTIONS(171), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(145), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(155), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(175), 3,
      anon_sym_SEMI,
      anon_sym_else,
      anon_sym_while,
    ACTIONS(153), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
  [1541] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(109), 1,
      anon_sym_STAR,
    ACTIONS(111), 1,
      anon_sym_SLASH,
    ACTIONS(115), 1,
      anon_sym_AMP,
    ACTIONS(147), 1,
      anon_sym_PIPE,
    ACTIONS(161), 1,
      anon_sym_BANG,
    ACTIONS(163), 1,
      anon_sym_AMP_AMP,
    ACTIONS(171), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(145), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(155), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(177), 3,
      anon_sym_SEMI,
      anon_sym_else,
      anon_sym_while,
    ACTIONS(153), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
  [1585] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(179), 1,
      ts_builtin_sym_end,
    ACTIONS(181), 1,
      anon_sym_DOT,
    ACTIONS(184), 1,
      anon_sym_DOLLAR,
    STATE(112), 1,
      sym_simple_type,
    ACTIONS(187), 6,
      anon_sym_void,
      anon_sym_entity,
      anon_sym_float,
      anon_sym_vector,
      anon_sym_string,
      anon_sym_int,
    STATE(36), 8,
      sym__definition,
      sym_function_declaration,
      sym_function_definition,
      sym_constant_definition,
      sym_variable_definition,
      sym_field_definition,
      sym_modelgen_pragma,
      aux_sym_source_file_repeat1,
  [1619] = 11,
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
    ACTIONS(190), 1,
      anon_sym_RPAREN,
    ACTIONS(192), 1,
      sym_identifier,
    STATE(32), 9,
      sym__expression,
      sym_unary_expression,
      sym_binary_expression,
      sym_funcall_expression,
      sym_parenthesized_expression,
      sym__literal,
      sym_numeric_literal,
      sym_vector_literal,
      sym_string_literal,
  [1661] = 10,
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
    ACTIONS(192), 1,
      sym_identifier,
    STATE(29), 9,
      sym__expression,
      sym_unary_expression,
      sym_binary_expression,
      sym_funcall_expression,
      sym_parenthesized_expression,
      sym__literal,
      sym_numeric_literal,
      sym_vector_literal,
      sym_string_literal,
  [1700] = 10,
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
    ACTIONS(192), 1,
      sym_identifier,
    STATE(34), 9,
      sym__expression,
      sym_unary_expression,
      sym_binary_expression,
      sym_funcall_expression,
      sym_parenthesized_expression,
      sym__literal,
      sym_numeric_literal,
      sym_vector_literal,
      sym_string_literal,
  [1739] = 10,
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
    ACTIONS(192), 1,
      sym_identifier,
    STATE(56), 9,
      sym__expression,
      sym_unary_expression,
      sym_binary_expression,
      sym_funcall_expression,
      sym_parenthesized_expression,
      sym__literal,
      sym_numeric_literal,
      sym_vector_literal,
      sym_string_literal,
  [1778] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(109), 1,
      anon_sym_STAR,
    ACTIONS(111), 1,
      anon_sym_SLASH,
    ACTIONS(115), 1,
      anon_sym_AMP,
    ACTIONS(147), 1,
      anon_sym_PIPE,
    ACTIONS(161), 1,
      anon_sym_BANG,
    ACTIONS(163), 1,
      anon_sym_AMP_AMP,
    ACTIONS(171), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(145), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(155), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(194), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
    ACTIONS(153), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
  [1821] = 10,
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
    ACTIONS(192), 1,
      sym_identifier,
    STATE(41), 9,
      sym__expression,
      sym_unary_expression,
      sym_binary_expression,
      sym_funcall_expression,
      sym_parenthesized_expression,
      sym__literal,
      sym_numeric_literal,
      sym_vector_literal,
      sym_string_literal,
  [1860] = 10,
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
    ACTIONS(192), 1,
      sym_identifier,
    STATE(55), 9,
      sym__expression,
      sym_unary_expression,
      sym_binary_expression,
      sym_funcall_expression,
      sym_parenthesized_expression,
      sym__literal,
      sym_numeric_literal,
      sym_vector_literal,
      sym_string_literal,
  [1899] = 10,
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
    ACTIONS(192), 1,
      sym_identifier,
    STATE(58), 9,
      sym__expression,
      sym_unary_expression,
      sym_binary_expression,
      sym_funcall_expression,
      sym_parenthesized_expression,
      sym__literal,
      sym_numeric_literal,
      sym_vector_literal,
      sym_string_literal,
  [1938] = 10,
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
    ACTIONS(192), 1,
      sym_identifier,
    STATE(22), 9,
      sym__expression,
      sym_unary_expression,
      sym_binary_expression,
      sym_funcall_expression,
      sym_parenthesized_expression,
      sym__literal,
      sym_numeric_literal,
      sym_vector_literal,
      sym_string_literal,
  [1977] = 10,
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
    ACTIONS(192), 1,
      sym_identifier,
    STATE(23), 9,
      sym__expression,
      sym_unary_expression,
      sym_binary_expression,
      sym_funcall_expression,
      sym_parenthesized_expression,
      sym__literal,
      sym_numeric_literal,
      sym_vector_literal,
      sym_string_literal,
  [2016] = 10,
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
    ACTIONS(192), 1,
      sym_identifier,
    STATE(14), 9,
      sym__expression,
      sym_unary_expression,
      sym_binary_expression,
      sym_funcall_expression,
      sym_parenthesized_expression,
      sym__literal,
      sym_numeric_literal,
      sym_vector_literal,
      sym_string_literal,
  [2055] = 10,
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
    ACTIONS(192), 1,
      sym_identifier,
    STATE(24), 9,
      sym__expression,
      sym_unary_expression,
      sym_binary_expression,
      sym_funcall_expression,
      sym_parenthesized_expression,
      sym__literal,
      sym_numeric_literal,
      sym_vector_literal,
      sym_string_literal,
  [2094] = 10,
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
    ACTIONS(192), 1,
      sym_identifier,
    STATE(13), 9,
      sym__expression,
      sym_unary_expression,
      sym_binary_expression,
      sym_funcall_expression,
      sym_parenthesized_expression,
      sym__literal,
      sym_numeric_literal,
      sym_vector_literal,
      sym_string_literal,
  [2133] = 10,
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
    ACTIONS(192), 1,
      sym_identifier,
    STATE(26), 9,
      sym__expression,
      sym_unary_expression,
      sym_binary_expression,
      sym_funcall_expression,
      sym_parenthesized_expression,
      sym__literal,
      sym_numeric_literal,
      sym_vector_literal,
      sym_string_literal,
  [2172] = 10,
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
    ACTIONS(192), 1,
      sym_identifier,
    STATE(28), 9,
      sym__expression,
      sym_unary_expression,
      sym_binary_expression,
      sym_funcall_expression,
      sym_parenthesized_expression,
      sym__literal,
      sym_numeric_literal,
      sym_vector_literal,
      sym_string_literal,
  [2211] = 10,
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
    ACTIONS(192), 1,
      sym_identifier,
    STATE(57), 9,
      sym__expression,
      sym_unary_expression,
      sym_binary_expression,
      sym_funcall_expression,
      sym_parenthesized_expression,
      sym__literal,
      sym_numeric_literal,
      sym_vector_literal,
      sym_string_literal,
  [2250] = 10,
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
    ACTIONS(192), 1,
      sym_identifier,
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
  [2289] = 10,
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
    ACTIONS(192), 1,
      sym_identifier,
    STATE(30), 9,
      sym__expression,
      sym_unary_expression,
      sym_binary_expression,
      sym_funcall_expression,
      sym_parenthesized_expression,
      sym__literal,
      sym_numeric_literal,
      sym_vector_literal,
      sym_string_literal,
  [2328] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(109), 1,
      anon_sym_STAR,
    ACTIONS(111), 1,
      anon_sym_SLASH,
    ACTIONS(115), 1,
      anon_sym_AMP,
    ACTIONS(147), 1,
      anon_sym_PIPE,
    ACTIONS(161), 1,
      anon_sym_BANG,
    ACTIONS(163), 1,
      anon_sym_AMP_AMP,
    ACTIONS(171), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(196), 1,
      anon_sym_RPAREN,
    ACTIONS(145), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(155), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(153), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
  [2370] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(109), 1,
      anon_sym_STAR,
    ACTIONS(111), 1,
      anon_sym_SLASH,
    ACTIONS(115), 1,
      anon_sym_AMP,
    ACTIONS(147), 1,
      anon_sym_PIPE,
    ACTIONS(161), 1,
      anon_sym_BANG,
    ACTIONS(163), 1,
      anon_sym_AMP_AMP,
    ACTIONS(171), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(198), 1,
      anon_sym_RPAREN,
    ACTIONS(145), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(155), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(153), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
  [2412] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(109), 1,
      anon_sym_STAR,
    ACTIONS(111), 1,
      anon_sym_SLASH,
    ACTIONS(115), 1,
      anon_sym_AMP,
    ACTIONS(147), 1,
      anon_sym_PIPE,
    ACTIONS(161), 1,
      anon_sym_BANG,
    ACTIONS(163), 1,
      anon_sym_AMP_AMP,
    ACTIONS(171), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(200), 1,
      anon_sym_RPAREN,
    ACTIONS(145), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(155), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(153), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
  [2454] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(109), 1,
      anon_sym_STAR,
    ACTIONS(111), 1,
      anon_sym_SLASH,
    ACTIONS(115), 1,
      anon_sym_AMP,
    ACTIONS(147), 1,
      anon_sym_PIPE,
    ACTIONS(161), 1,
      anon_sym_BANG,
    ACTIONS(163), 1,
      anon_sym_AMP_AMP,
    ACTIONS(171), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(202), 1,
      anon_sym_RPAREN,
    ACTIONS(145), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(155), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(153), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
  [2496] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(204), 1,
      anon_sym_COMMA,
    ACTIONS(206), 1,
      anon_sym_RPAREN,
    STATE(130), 1,
      sym_parameter,
    STATE(157), 1,
      sym_simple_type,
    ACTIONS(11), 6,
      anon_sym_void,
      anon_sym_entity,
      anon_sym_float,
      anon_sym_vector,
      anon_sym_string,
      anon_sym_int,
  [2520] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(208), 9,
      ts_builtin_sym_end,
      anon_sym_DOT,
      anon_sym_DOLLAR,
      anon_sym_void,
      anon_sym_entity,
      anon_sym_float,
      anon_sym_vector,
      anon_sym_string,
      anon_sym_int,
  [2535] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(210), 9,
      ts_builtin_sym_end,
      anon_sym_DOT,
      anon_sym_DOLLAR,
      anon_sym_void,
      anon_sym_entity,
      anon_sym_float,
      anon_sym_vector,
      anon_sym_string,
      anon_sym_int,
  [2550] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(212), 1,
      anon_sym_DOT_DOT_DOT,
    STATE(137), 1,
      sym_parameter,
    STATE(157), 1,
      sym_simple_type,
    ACTIONS(11), 6,
      anon_sym_void,
      anon_sym_entity,
      anon_sym_float,
      anon_sym_vector,
      anon_sym_string,
      anon_sym_int,
  [2571] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(214), 9,
      ts_builtin_sym_end,
      anon_sym_DOT,
      anon_sym_DOLLAR,
      anon_sym_void,
      anon_sym_entity,
      anon_sym_float,
      anon_sym_vector,
      anon_sym_string,
      anon_sym_int,
  [2586] = 2,
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
  [2601] = 2,
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
  [2616] = 2,
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
  [2631] = 2,
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
  [2646] = 2,
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
  [2661] = 2,
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
  [2676] = 2,
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
  [2691] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(230), 1,
      anon_sym_DOT_DOT_DOT,
    STATE(137), 1,
      sym_parameter,
    STATE(157), 1,
      sym_simple_type,
    ACTIONS(11), 6,
      anon_sym_void,
      anon_sym_entity,
      anon_sym_float,
      anon_sym_vector,
      anon_sym_string,
      anon_sym_int,
  [2712] = 2,
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
  [2727] = 2,
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
  [2742] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(236), 9,
      ts_builtin_sym_end,
      anon_sym_DOT,
      anon_sym_DOLLAR,
      anon_sym_void,
      anon_sym_entity,
      anon_sym_float,
      anon_sym_vector,
      anon_sym_string,
      anon_sym_int,
  [2757] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(41), 1,
      anon_sym_BQUOTE,
    ACTIONS(43), 1,
      anon_sym_DQUOTE,
    ACTIONS(238), 1,
      sym__integer_literal,
    ACTIONS(240), 1,
      sym__float_literal,
    STATE(106), 4,
      sym__literal,
      sym_numeric_literal,
      sym_vector_literal,
      sym_string_literal,
  [2779] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(41), 1,
      anon_sym_BQUOTE,
    ACTIONS(43), 1,
      anon_sym_DQUOTE,
    ACTIONS(238), 1,
      sym__integer_literal,
    ACTIONS(240), 1,
      sym__float_literal,
    STATE(150), 4,
      sym__literal,
      sym_numeric_literal,
      sym_vector_literal,
      sym_string_literal,
  [2801] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(41), 1,
      anon_sym_BQUOTE,
    ACTIONS(43), 1,
      anon_sym_DQUOTE,
    ACTIONS(238), 1,
      sym__integer_literal,
    ACTIONS(240), 1,
      sym__float_literal,
    STATE(110), 4,
      sym__literal,
      sym_numeric_literal,
      sym_vector_literal,
      sym_string_literal,
  [2823] = 4,
    ACTIONS(3), 1,
      sym_comment,
    STATE(137), 1,
      sym_parameter,
    STATE(157), 1,
      sym_simple_type,
    ACTIONS(11), 6,
      anon_sym_void,
      anon_sym_entity,
      anon_sym_float,
      anon_sym_vector,
      anon_sym_string,
      anon_sym_int,
  [2841] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(41), 1,
      anon_sym_BQUOTE,
    ACTIONS(43), 1,
      anon_sym_DQUOTE,
    ACTIONS(238), 1,
      sym__integer_literal,
    ACTIONS(240), 1,
      sym__float_literal,
    STATE(91), 4,
      sym__literal,
      sym_numeric_literal,
      sym_vector_literal,
      sym_string_literal,
  [2863] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(41), 1,
      anon_sym_BQUOTE,
    ACTIONS(43), 1,
      anon_sym_DQUOTE,
    ACTIONS(238), 1,
      sym__integer_literal,
    ACTIONS(240), 1,
      sym__float_literal,
    STATE(96), 4,
      sym__literal,
      sym_numeric_literal,
      sym_vector_literal,
      sym_string_literal,
  [2885] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(41), 1,
      anon_sym_BQUOTE,
    ACTIONS(43), 1,
      anon_sym_DQUOTE,
    ACTIONS(238), 1,
      sym__integer_literal,
    ACTIONS(240), 1,
      sym__float_literal,
    STATE(103), 4,
      sym__literal,
      sym_numeric_literal,
      sym_vector_literal,
      sym_string_literal,
  [2907] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(41), 1,
      anon_sym_BQUOTE,
    ACTIONS(43), 1,
      anon_sym_DQUOTE,
    ACTIONS(238), 1,
      sym__integer_literal,
    ACTIONS(240), 1,
      sym__float_literal,
    STATE(99), 4,
      sym__literal,
      sym_numeric_literal,
      sym_vector_literal,
      sym_string_literal,
  [2929] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(41), 1,
      anon_sym_BQUOTE,
    ACTIONS(43), 1,
      anon_sym_DQUOTE,
    ACTIONS(238), 1,
      sym__integer_literal,
    ACTIONS(240), 1,
      sym__float_literal,
    STATE(105), 4,
      sym__literal,
      sym_numeric_literal,
      sym_vector_literal,
      sym_string_literal,
  [2951] = 3,
    ACTIONS(3), 1,
      sym_comment,
    STATE(173), 1,
      sym_simple_type,
    ACTIONS(11), 6,
      anon_sym_void,
      anon_sym_entity,
      anon_sym_float,
      anon_sym_vector,
      anon_sym_string,
      anon_sym_int,
  [2966] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(139), 1,
      sym__integer_literal,
    ACTIONS(137), 6,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_else,
      anon_sym_while,
      sym__float_literal,
      anon_sym_BQUOTE,
  [2981] = 3,
    ACTIONS(3), 1,
      sym_comment,
    STATE(149), 1,
      sym_simple_type,
    ACTIONS(11), 6,
      anon_sym_void,
      anon_sym_entity,
      anon_sym_float,
      anon_sym_vector,
      anon_sym_string,
      anon_sym_int,
  [2996] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(244), 1,
      anon_sym_EQ,
    ACTIONS(246), 1,
      anon_sym_COMMA,
    STATE(92), 1,
      aux_sym_variable_definition_statement_repeat1,
    ACTIONS(242), 3,
      anon_sym_SEMI,
      anon_sym_else,
      anon_sym_while,
  [3014] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(246), 1,
      anon_sym_COMMA,
    ACTIONS(250), 1,
      anon_sym_EQ,
    STATE(104), 1,
      aux_sym_variable_definition_statement_repeat1,
    ACTIONS(248), 3,
      anon_sym_SEMI,
      anon_sym_else,
      anon_sym_while,
  [3032] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(246), 1,
      anon_sym_COMMA,
    ACTIONS(254), 1,
      anon_sym_EQ,
    STATE(95), 1,
      aux_sym_variable_definition_statement_repeat1,
    ACTIONS(252), 3,
      anon_sym_SEMI,
      anon_sym_else,
      anon_sym_while,
  [3050] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(246), 1,
      anon_sym_COMMA,
    ACTIONS(258), 1,
      anon_sym_EQ,
    STATE(93), 1,
      aux_sym_variable_definition_statement_repeat1,
    ACTIONS(256), 3,
      anon_sym_SEMI,
      anon_sym_else,
      anon_sym_while,
  [3068] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(246), 1,
      anon_sym_COMMA,
    STATE(95), 1,
      aux_sym_variable_definition_statement_repeat1,
    ACTIONS(252), 3,
      anon_sym_SEMI,
      anon_sym_else,
      anon_sym_while,
  [3083] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(246), 1,
      anon_sym_COMMA,
    STATE(98), 1,
      aux_sym_variable_definition_statement_repeat1,
    ACTIONS(260), 3,
      anon_sym_SEMI,
      anon_sym_else,
      anon_sym_while,
  [3098] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(246), 1,
      anon_sym_COMMA,
    STATE(98), 1,
      aux_sym_variable_definition_statement_repeat1,
    ACTIONS(262), 3,
      anon_sym_SEMI,
      anon_sym_else,
      anon_sym_while,
  [3113] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(246), 1,
      anon_sym_COMMA,
    STATE(98), 1,
      aux_sym_variable_definition_statement_repeat1,
    ACTIONS(264), 3,
      anon_sym_SEMI,
      anon_sym_else,
      anon_sym_while,
  [3128] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(246), 1,
      anon_sym_COMMA,
    STATE(98), 1,
      aux_sym_variable_definition_statement_repeat1,
    ACTIONS(266), 3,
      anon_sym_SEMI,
      anon_sym_else,
      anon_sym_while,
  [3143] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(246), 1,
      anon_sym_COMMA,
    STATE(93), 1,
      aux_sym_variable_definition_statement_repeat1,
    ACTIONS(256), 3,
      anon_sym_SEMI,
      anon_sym_else,
      anon_sym_while,
  [3158] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(246), 1,
      anon_sym_COMMA,
    STATE(98), 1,
      aux_sym_variable_definition_statement_repeat1,
    ACTIONS(268), 3,
      anon_sym_SEMI,
      anon_sym_else,
      anon_sym_while,
  [3173] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(272), 1,
      anon_sym_COMMA,
    STATE(98), 1,
      aux_sym_variable_definition_statement_repeat1,
    ACTIONS(270), 3,
      anon_sym_SEMI,
      anon_sym_else,
      anon_sym_while,
  [3188] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(246), 1,
      anon_sym_COMMA,
    STATE(94), 1,
      aux_sym_variable_definition_statement_repeat1,
    ACTIONS(275), 3,
      anon_sym_SEMI,
      anon_sym_else,
      anon_sym_while,
  [3203] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(277), 1,
      anon_sym_EQ,
    ACTIONS(270), 4,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_else,
      anon_sym_while,
  [3216] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(281), 1,
      anon_sym_EQ,
    ACTIONS(283), 1,
      anon_sym_COMMA,
    ACTIONS(279), 3,
      anon_sym_SEMI,
      anon_sym_else,
      anon_sym_while,
  [3231] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(287), 1,
      anon_sym_EQ,
    ACTIONS(289), 1,
      anon_sym_COMMA,
    ACTIONS(285), 3,
      anon_sym_SEMI,
      anon_sym_else,
      anon_sym_while,
  [3246] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(246), 1,
      anon_sym_COMMA,
    STATE(97), 1,
      aux_sym_variable_definition_statement_repeat1,
    ACTIONS(291), 3,
      anon_sym_SEMI,
      anon_sym_else,
      anon_sym_while,
  [3261] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(246), 1,
      anon_sym_COMMA,
    STATE(98), 1,
      aux_sym_variable_definition_statement_repeat1,
    ACTIONS(293), 3,
      anon_sym_SEMI,
      anon_sym_else,
      anon_sym_while,
  [3276] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(295), 4,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_else,
      anon_sym_while,
  [3286] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(297), 1,
      anon_sym_COMMA,
    ACTIONS(248), 3,
      anon_sym_SEMI,
      anon_sym_else,
      anon_sym_while,
  [3298] = 4,
    ACTIONS(301), 1,
      aux_sym_string_literal_token3,
    ACTIONS(303), 1,
      sym_comment,
    STATE(109), 1,
      aux_sym_string_literal_repeat1,
    ACTIONS(299), 2,
      aux_sym_string_literal_token1,
      aux_sym_string_literal_token2,
  [3312] = 4,
    ACTIONS(303), 1,
      sym_comment,
    ACTIONS(308), 1,
      aux_sym_string_literal_token3,
    STATE(108), 1,
      aux_sym_string_literal_repeat1,
    ACTIONS(305), 2,
      aux_sym_string_literal_token1,
      aux_sym_string_literal_token2,
  [3326] = 4,
    ACTIONS(303), 1,
      sym_comment,
    ACTIONS(312), 1,
      aux_sym_string_literal_token3,
    STATE(108), 1,
      aux_sym_string_literal_repeat1,
    ACTIONS(310), 2,
      aux_sym_string_literal_token1,
      aux_sym_string_literal_token2,
  [3340] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(314), 1,
      anon_sym_COMMA,
    ACTIONS(242), 3,
      anon_sym_SEMI,
      anon_sym_else,
      anon_sym_while,
  [3352] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(316), 1,
      anon_sym_SEMI,
    ACTIONS(318), 1,
      anon_sym_COMMA,
    STATE(121), 1,
      aux_sym_variable_definition_repeat1,
  [3365] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(320), 1,
      anon_sym_LPAREN,
    ACTIONS(322), 1,
      sym_identifier,
    STATE(143), 1,
      sym_parameter_list,
  [3378] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(324), 3,
      anon_sym_SEMI,
      anon_sym_else,
      anon_sym_while,
  [3387] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(318), 1,
      anon_sym_COMMA,
    ACTIONS(326), 1,
      anon_sym_SEMI,
    STATE(117), 1,
      aux_sym_variable_definition_repeat1,
  [3400] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(328), 1,
      anon_sym_COMMA,
    ACTIONS(331), 1,
      anon_sym_RPAREN,
    STATE(115), 1,
      aux_sym_funcall_expression_repeat1,
  [3413] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(238), 1,
      sym__integer_literal,
    ACTIONS(240), 1,
      sym__float_literal,
    STATE(127), 1,
      sym_numeric_literal,
  [3426] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(318), 1,
      anon_sym_COMMA,
    ACTIONS(333), 1,
      anon_sym_SEMI,
    STATE(122), 1,
      aux_sym_variable_definition_repeat1,
  [3439] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(335), 1,
      anon_sym_COMMA,
    ACTIONS(338), 1,
      anon_sym_RPAREN,
    STATE(118), 1,
      aux_sym_parameter_list_repeat1,
  [3452] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(340), 3,
      anon_sym_SEMI,
      anon_sym_else,
      anon_sym_while,
  [3461] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(238), 1,
      sym__integer_literal,
    ACTIONS(240), 1,
      sym__float_literal,
    STATE(116), 1,
      sym_numeric_literal,
  [3474] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(318), 1,
      anon_sym_COMMA,
    ACTIONS(342), 1,
      anon_sym_SEMI,
    STATE(122), 1,
      aux_sym_variable_definition_repeat1,
  [3487] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(344), 1,
      anon_sym_SEMI,
    ACTIONS(346), 1,
      anon_sym_COMMA,
    STATE(122), 1,
      aux_sym_variable_definition_repeat1,
  [3500] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(349), 1,
      anon_sym_COMMA,
    ACTIONS(351), 1,
      anon_sym_RPAREN,
    STATE(118), 1,
      aux_sym_parameter_list_repeat1,
  [3513] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(353), 1,
      anon_sym_SEMI,
    ACTIONS(355), 1,
      anon_sym_EQ,
    ACTIONS(357), 1,
      anon_sym_COMMA,
  [3526] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(359), 3,
      anon_sym_SEMI,
      anon_sym_else,
      anon_sym_while,
  [3535] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(363), 1,
      anon_sym_else,
    ACTIONS(361), 2,
      anon_sym_SEMI,
      anon_sym_while,
  [3546] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(238), 1,
      sym__integer_literal,
    ACTIONS(240), 1,
      sym__float_literal,
    STATE(162), 1,
      sym_numeric_literal,
  [3559] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(365), 3,
      anon_sym_SEMI,
      anon_sym_else,
      anon_sym_while,
  [3568] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(367), 3,
      anon_sym_SEMI,
      anon_sym_else,
      anon_sym_while,
  [3577] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(369), 1,
      anon_sym_COMMA,
    ACTIONS(371), 1,
      anon_sym_RPAREN,
    STATE(123), 1,
      aux_sym_parameter_list_repeat1,
  [3590] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(167), 1,
      anon_sym_COMMA,
    ACTIONS(373), 1,
      anon_sym_RPAREN,
    STATE(115), 1,
      aux_sym_funcall_expression_repeat1,
  [3603] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(375), 1,
      anon_sym_SEMI,
    ACTIONS(377), 1,
      anon_sym_EQ,
  [3613] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(379), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [3621] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(381), 2,
      anon_sym_SEMI,
      anon_sym_COMMA,
  [3629] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(383), 1,
      anon_sym_DOLLAR,
    STATE(176), 1,
      sym_frame_identifier,
  [3639] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(385), 2,
      anon_sym_LPAREN,
      sym_identifier,
  [3647] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(338), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [3655] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(387), 1,
      anon_sym_SEMI,
    ACTIONS(389), 1,
      anon_sym_COMMA,
  [3665] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(391), 1,
      anon_sym_RPAREN,
  [3672] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(393), 1,
      sym_identifier,
  [3679] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(395), 1,
      sym_identifier,
  [3686] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(397), 1,
      sym_identifier,
  [3693] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(399), 1,
      sym_identifier,
  [3700] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(401), 1,
      sym_identifier,
  [3707] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(403), 1,
      sym_identifier,
  [3714] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(351), 1,
      anon_sym_RPAREN,
  [3721] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(405), 1,
      sym_identifier,
  [3728] = 2,
    ACTIONS(303), 1,
      sym_comment,
    ACTIONS(407), 1,
      aux_sym_modelgen_pragma_token2,
  [3735] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(409), 1,
      sym_identifier,
  [3742] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(411), 1,
      anon_sym_SEMI,
  [3749] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(413), 1,
      sym_identifier,
  [3756] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(415), 1,
      anon_sym_LPAREN,
  [3763] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(417), 1,
      sym_identifier,
  [3770] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(419), 1,
      sym_identifier,
  [3777] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(421), 1,
      anon_sym_SEMI,
  [3784] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(423), 1,
      anon_sym_SEMI,
  [3791] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(425), 1,
      sym_identifier,
  [3798] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(427), 1,
      sym_identifier,
  [3805] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(429), 1,
      sym_identifier,
  [3812] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(431), 1,
      anon_sym_RBRACK,
  [3819] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(433), 1,
      anon_sym_COMMA,
  [3826] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(435), 1,
      anon_sym_BQUOTE,
  [3833] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(437), 1,
      sym_identifier,
  [3840] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(439), 1,
      anon_sym_DQUOTE,
  [3847] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(441), 1,
      sym_identifier,
  [3854] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(443), 1,
      ts_builtin_sym_end,
  [3861] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(445), 1,
      anon_sym_DOT_DOT_DOT,
  [3868] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(447), 1,
      sym_identifier,
  [3875] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(449), 1,
      anon_sym_LPAREN,
  [3882] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(451), 1,
      anon_sym_LPAREN,
  [3889] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(453), 1,
      anon_sym_SEMI,
  [3896] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(455), 1,
      anon_sym_SEMI,
  [3903] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(457), 1,
      sym_identifier,
  [3910] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(459), 1,
      anon_sym_while,
  [3917] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(461), 1,
      anon_sym_SEMI,
  [3924] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(463), 1,
      anon_sym_COMMA,
  [3931] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(465), 1,
      aux_sym_frame_identifier_token1,
  [3938] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(467), 1,
      sym_identifier,
  [3945] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(469), 1,
      anon_sym_DQUOTE,
  [3952] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(471), 1,
      anon_sym_RPAREN,
  [3959] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(473), 1,
      aux_sym_modelgen_pragma_token1,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 86,
  [SMALL_STATE(4)] = 169,
  [SMALL_STATE(5)] = 249,
  [SMALL_STATE(6)] = 329,
  [SMALL_STATE(7)] = 409,
  [SMALL_STATE(8)] = 489,
  [SMALL_STATE(9)] = 570,
  [SMALL_STATE(10)] = 651,
  [SMALL_STATE(11)] = 732,
  [SMALL_STATE(12)] = 763,
  [SMALL_STATE(13)] = 791,
  [SMALL_STATE(14)] = 825,
  [SMALL_STATE(15)] = 853,
  [SMALL_STATE(16)] = 881,
  [SMALL_STATE(17)] = 909,
  [SMALL_STATE(18)] = 937,
  [SMALL_STATE(19)] = 965,
  [SMALL_STATE(20)] = 997,
  [SMALL_STATE(21)] = 1025,
  [SMALL_STATE(22)] = 1053,
  [SMALL_STATE(23)] = 1091,
  [SMALL_STATE(24)] = 1123,
  [SMALL_STATE(25)] = 1159,
  [SMALL_STATE(26)] = 1187,
  [SMALL_STATE(27)] = 1229,
  [SMALL_STATE(28)] = 1257,
  [SMALL_STATE(29)] = 1299,
  [SMALL_STATE(30)] = 1343,
  [SMALL_STATE(31)] = 1371,
  [SMALL_STATE(32)] = 1405,
  [SMALL_STATE(33)] = 1453,
  [SMALL_STATE(34)] = 1497,
  [SMALL_STATE(35)] = 1541,
  [SMALL_STATE(36)] = 1585,
  [SMALL_STATE(37)] = 1619,
  [SMALL_STATE(38)] = 1661,
  [SMALL_STATE(39)] = 1700,
  [SMALL_STATE(40)] = 1739,
  [SMALL_STATE(41)] = 1778,
  [SMALL_STATE(42)] = 1821,
  [SMALL_STATE(43)] = 1860,
  [SMALL_STATE(44)] = 1899,
  [SMALL_STATE(45)] = 1938,
  [SMALL_STATE(46)] = 1977,
  [SMALL_STATE(47)] = 2016,
  [SMALL_STATE(48)] = 2055,
  [SMALL_STATE(49)] = 2094,
  [SMALL_STATE(50)] = 2133,
  [SMALL_STATE(51)] = 2172,
  [SMALL_STATE(52)] = 2211,
  [SMALL_STATE(53)] = 2250,
  [SMALL_STATE(54)] = 2289,
  [SMALL_STATE(55)] = 2328,
  [SMALL_STATE(56)] = 2370,
  [SMALL_STATE(57)] = 2412,
  [SMALL_STATE(58)] = 2454,
  [SMALL_STATE(59)] = 2496,
  [SMALL_STATE(60)] = 2520,
  [SMALL_STATE(61)] = 2535,
  [SMALL_STATE(62)] = 2550,
  [SMALL_STATE(63)] = 2571,
  [SMALL_STATE(64)] = 2586,
  [SMALL_STATE(65)] = 2601,
  [SMALL_STATE(66)] = 2616,
  [SMALL_STATE(67)] = 2631,
  [SMALL_STATE(68)] = 2646,
  [SMALL_STATE(69)] = 2661,
  [SMALL_STATE(70)] = 2676,
  [SMALL_STATE(71)] = 2691,
  [SMALL_STATE(72)] = 2712,
  [SMALL_STATE(73)] = 2727,
  [SMALL_STATE(74)] = 2742,
  [SMALL_STATE(75)] = 2757,
  [SMALL_STATE(76)] = 2779,
  [SMALL_STATE(77)] = 2801,
  [SMALL_STATE(78)] = 2823,
  [SMALL_STATE(79)] = 2841,
  [SMALL_STATE(80)] = 2863,
  [SMALL_STATE(81)] = 2885,
  [SMALL_STATE(82)] = 2907,
  [SMALL_STATE(83)] = 2929,
  [SMALL_STATE(84)] = 2951,
  [SMALL_STATE(85)] = 2966,
  [SMALL_STATE(86)] = 2981,
  [SMALL_STATE(87)] = 2996,
  [SMALL_STATE(88)] = 3014,
  [SMALL_STATE(89)] = 3032,
  [SMALL_STATE(90)] = 3050,
  [SMALL_STATE(91)] = 3068,
  [SMALL_STATE(92)] = 3083,
  [SMALL_STATE(93)] = 3098,
  [SMALL_STATE(94)] = 3113,
  [SMALL_STATE(95)] = 3128,
  [SMALL_STATE(96)] = 3143,
  [SMALL_STATE(97)] = 3158,
  [SMALL_STATE(98)] = 3173,
  [SMALL_STATE(99)] = 3188,
  [SMALL_STATE(100)] = 3203,
  [SMALL_STATE(101)] = 3216,
  [SMALL_STATE(102)] = 3231,
  [SMALL_STATE(103)] = 3246,
  [SMALL_STATE(104)] = 3261,
  [SMALL_STATE(105)] = 3276,
  [SMALL_STATE(106)] = 3286,
  [SMALL_STATE(107)] = 3298,
  [SMALL_STATE(108)] = 3312,
  [SMALL_STATE(109)] = 3326,
  [SMALL_STATE(110)] = 3340,
  [SMALL_STATE(111)] = 3352,
  [SMALL_STATE(112)] = 3365,
  [SMALL_STATE(113)] = 3378,
  [SMALL_STATE(114)] = 3387,
  [SMALL_STATE(115)] = 3400,
  [SMALL_STATE(116)] = 3413,
  [SMALL_STATE(117)] = 3426,
  [SMALL_STATE(118)] = 3439,
  [SMALL_STATE(119)] = 3452,
  [SMALL_STATE(120)] = 3461,
  [SMALL_STATE(121)] = 3474,
  [SMALL_STATE(122)] = 3487,
  [SMALL_STATE(123)] = 3500,
  [SMALL_STATE(124)] = 3513,
  [SMALL_STATE(125)] = 3526,
  [SMALL_STATE(126)] = 3535,
  [SMALL_STATE(127)] = 3546,
  [SMALL_STATE(128)] = 3559,
  [SMALL_STATE(129)] = 3568,
  [SMALL_STATE(130)] = 3577,
  [SMALL_STATE(131)] = 3590,
  [SMALL_STATE(132)] = 3603,
  [SMALL_STATE(133)] = 3613,
  [SMALL_STATE(134)] = 3621,
  [SMALL_STATE(135)] = 3629,
  [SMALL_STATE(136)] = 3639,
  [SMALL_STATE(137)] = 3647,
  [SMALL_STATE(138)] = 3655,
  [SMALL_STATE(139)] = 3665,
  [SMALL_STATE(140)] = 3672,
  [SMALL_STATE(141)] = 3679,
  [SMALL_STATE(142)] = 3686,
  [SMALL_STATE(143)] = 3693,
  [SMALL_STATE(144)] = 3700,
  [SMALL_STATE(145)] = 3707,
  [SMALL_STATE(146)] = 3714,
  [SMALL_STATE(147)] = 3721,
  [SMALL_STATE(148)] = 3728,
  [SMALL_STATE(149)] = 3735,
  [SMALL_STATE(150)] = 3742,
  [SMALL_STATE(151)] = 3749,
  [SMALL_STATE(152)] = 3756,
  [SMALL_STATE(153)] = 3763,
  [SMALL_STATE(154)] = 3770,
  [SMALL_STATE(155)] = 3777,
  [SMALL_STATE(156)] = 3784,
  [SMALL_STATE(157)] = 3791,
  [SMALL_STATE(158)] = 3798,
  [SMALL_STATE(159)] = 3805,
  [SMALL_STATE(160)] = 3812,
  [SMALL_STATE(161)] = 3819,
  [SMALL_STATE(162)] = 3826,
  [SMALL_STATE(163)] = 3833,
  [SMALL_STATE(164)] = 3840,
  [SMALL_STATE(165)] = 3847,
  [SMALL_STATE(166)] = 3854,
  [SMALL_STATE(167)] = 3861,
  [SMALL_STATE(168)] = 3868,
  [SMALL_STATE(169)] = 3875,
  [SMALL_STATE(170)] = 3882,
  [SMALL_STATE(171)] = 3889,
  [SMALL_STATE(172)] = 3896,
  [SMALL_STATE(173)] = 3903,
  [SMALL_STATE(174)] = 3910,
  [SMALL_STATE(175)] = 3917,
  [SMALL_STATE(176)] = 3924,
  [SMALL_STATE(177)] = 3931,
  [SMALL_STATE(178)] = 3938,
  [SMALL_STATE(179)] = 3945,
  [SMALL_STATE(180)] = 3952,
  [SMALL_STATE(181)] = 3959,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT_EXTRA(),
  [5] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(86),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(181),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(136),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(135),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [19] = {.entry = {.count = 1, .reusable = false}}, SHIFT(169),
  [21] = {.entry = {.count = 1, .reusable = false}}, SHIFT(170),
  [23] = {.entry = {.count = 1, .reusable = false}}, SHIFT(6),
  [25] = {.entry = {.count = 1, .reusable = false}}, SHIFT(53),
  [27] = {.entry = {.count = 1, .reusable = false}}, SHIFT(84),
  [29] = {.entry = {.count = 1, .reusable = false}}, SHIFT(47),
  [31] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [33] = {.entry = {.count = 1, .reusable = false}}, SHIFT(136),
  [35] = {.entry = {.count = 1, .reusable = false}}, SHIFT(19),
  [37] = {.entry = {.count = 1, .reusable = false}}, SHIFT(20),
  [39] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [41] = {.entry = {.count = 1, .reusable = true}}, SHIFT(120),
  [43] = {.entry = {.count = 1, .reusable = true}}, SHIFT(107),
  [45] = {.entry = {.count = 1, .reusable = true}}, SHIFT(171),
  [47] = {.entry = {.count = 1, .reusable = true}}, SHIFT(155),
  [49] = {.entry = {.count = 1, .reusable = true}}, SHIFT(113),
  [51] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_compound_statement_repeat1, 2), SHIFT_REPEAT(52),
  [54] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_compound_statement_repeat1, 2),
  [56] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_compound_statement_repeat1, 2), SHIFT_REPEAT(169),
  [59] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_compound_statement_repeat1, 2), SHIFT_REPEAT(170),
  [62] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_compound_statement_repeat1, 2), SHIFT_REPEAT(6),
  [65] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_compound_statement_repeat1, 2), SHIFT_REPEAT(53),
  [68] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_compound_statement_repeat1, 2), SHIFT_REPEAT(84),
  [71] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_compound_statement_repeat1, 2), SHIFT_REPEAT(47),
  [74] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_compound_statement_repeat1, 2), SHIFT_REPEAT(47),
  [77] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_compound_statement_repeat1, 2), SHIFT_REPEAT(136),
  [80] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_compound_statement_repeat1, 2), SHIFT_REPEAT(19),
  [83] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_compound_statement_repeat1, 2), SHIFT_REPEAT(20),
  [86] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_compound_statement_repeat1, 2), SHIFT_REPEAT(20),
  [89] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_compound_statement_repeat1, 2), SHIFT_REPEAT(120),
  [92] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_compound_statement_repeat1, 2), SHIFT_REPEAT(107),
  [95] = {.entry = {.count = 1, .reusable = true}}, SHIFT(129),
  [97] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__expression, 1),
  [99] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [101] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__expression, 1),
  [103] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string_literal, 4),
  [105] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string_literal, 4),
  [107] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_binary_expression, 3),
  [109] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
  [111] = {.entry = {.count = 1, .reusable = false}}, SHIFT(54),
  [113] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_binary_expression, 3),
  [115] = {.entry = {.count = 1, .reusable = false}}, SHIFT(46),
  [117] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_unary_expression, 2),
  [119] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_unary_expression, 2),
  [121] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_funcall_expression, 4, .production_id = 13),
  [123] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_funcall_expression, 4, .production_id = 13),
  [125] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_compound_statement_repeat1, 2),
  [127] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parenthesized_expression, 3),
  [129] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_parenthesized_expression, 3),
  [131] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_funcall_expression, 3, .production_id = 12),
  [133] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_funcall_expression, 3, .production_id = 12),
  [135] = {.entry = {.count = 1, .reusable = false}}, SHIFT(39),
  [137] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_numeric_literal, 1),
  [139] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_numeric_literal, 1),
  [141] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_vector_literal, 5),
  [143] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_vector_literal, 5),
  [145] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [147] = {.entry = {.count = 1, .reusable = false}}, SHIFT(49),
  [149] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string_literal, 3),
  [151] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string_literal, 3),
  [153] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [155] = {.entry = {.count = 1, .reusable = false}}, SHIFT(45),
  [157] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_funcall_expression, 5, .production_id = 16),
  [159] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_funcall_expression, 5, .production_id = 16),
  [161] = {.entry = {.count = 1, .reusable = false}}, SHIFT(50),
  [163] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [165] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1),
  [167] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [169] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [171] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [173] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__expression_statement, 1),
  [175] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_assignment_statement, 3),
  [177] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_return_statement, 2),
  [179] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2),
  [181] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(86),
  [184] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(181),
  [187] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(136),
  [190] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [192] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [194] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_funcall_expression_repeat1, 2, .production_id = 15),
  [196] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [198] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [200] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [202] = {.entry = {.count = 1, .reusable = true}}, SHIFT(119),
  [204] = {.entry = {.count = 1, .reusable = true}}, SHIFT(167),
  [206] = {.entry = {.count = 1, .reusable = true}}, SHIFT(178),
  [208] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable_definition, 6, .production_id = 8),
  [210] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_field_definition, 4, .production_id = 2),
  [212] = {.entry = {.count = 1, .reusable = true}}, SHIFT(139),
  [214] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable_definition, 5, .production_id = 5),
  [216] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_constant_definition, 5, .production_id = 4),
  [218] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable_definition, 3, .production_id = 1),
  [220] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_definition, 6, .production_id = 10),
  [222] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_definition, 6, .production_id = 3),
  [224] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_field_definition, 7, .production_id = 11),
  [226] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_field_definition, 6, .production_id = 6),
  [228] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_modelgen_pragma, 3),
  [230] = {.entry = {.count = 1, .reusable = true}}, SHIFT(180),
  [232] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_declaration, 4, .production_id = 3),
  [234] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_definition, 11, .production_id = 3),
  [236] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_definition, 11, .production_id = 19),
  [238] = {.entry = {.count = 1, .reusable = false}}, SHIFT(85),
  [240] = {.entry = {.count = 1, .reusable = true}}, SHIFT(85),
  [242] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable_definition_statement, 4, .production_id = 1),
  [244] = {.entry = {.count = 1, .reusable = true}}, SHIFT(79),
  [246] = {.entry = {.count = 1, .reusable = true}}, SHIFT(153),
  [248] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable_definition_statement, 5, .production_id = 2),
  [250] = {.entry = {.count = 1, .reusable = true}}, SHIFT(80),
  [252] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable_definition_statement, 6, .production_id = 1),
  [254] = {.entry = {.count = 1, .reusable = true}}, SHIFT(81),
  [256] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable_definition_statement, 7, .production_id = 2),
  [258] = {.entry = {.count = 1, .reusable = true}}, SHIFT(82),
  [260] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable_definition_statement, 5, .production_id = 1),
  [262] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable_definition_statement, 8, .production_id = 2),
  [264] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable_definition_statement, 10, .production_id = 2),
  [266] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable_definition_statement, 7, .production_id = 1),
  [268] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable_definition_statement, 9, .production_id = 1),
  [270] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_variable_definition_statement_repeat1, 2),
  [272] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_variable_definition_statement_repeat1, 2), SHIFT_REPEAT(153),
  [275] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable_definition_statement, 9, .production_id = 2),
  [277] = {.entry = {.count = 1, .reusable = true}}, SHIFT(83),
  [279] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable_definition_statement, 3, .production_id = 2),
  [281] = {.entry = {.count = 1, .reusable = true}}, SHIFT(75),
  [283] = {.entry = {.count = 1, .reusable = true}}, SHIFT(168),
  [285] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable_definition_statement, 2, .production_id = 1),
  [287] = {.entry = {.count = 1, .reusable = true}}, SHIFT(77),
  [289] = {.entry = {.count = 1, .reusable = true}}, SHIFT(141),
  [291] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable_definition_statement, 8, .production_id = 1),
  [293] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable_definition_statement, 6, .production_id = 2),
  [295] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_variable_definition_statement_repeat1, 4),
  [297] = {.entry = {.count = 1, .reusable = true}}, SHIFT(159),
  [299] = {.entry = {.count = 1, .reusable = false}}, SHIFT(109),
  [301] = {.entry = {.count = 1, .reusable = false}}, SHIFT(164),
  [303] = {.entry = {.count = 1, .reusable = false}}, SHIFT_EXTRA(),
  [305] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_string_literal_repeat1, 2), SHIFT_REPEAT(108),
  [308] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_string_literal_repeat1, 2),
  [310] = {.entry = {.count = 1, .reusable = false}}, SHIFT(108),
  [312] = {.entry = {.count = 1, .reusable = false}}, SHIFT(179),
  [314] = {.entry = {.count = 1, .reusable = true}}, SHIFT(151),
  [316] = {.entry = {.count = 1, .reusable = true}}, SHIFT(63),
  [318] = {.entry = {.count = 1, .reusable = true}}, SHIFT(165),
  [320] = {.entry = {.count = 1, .reusable = true}}, SHIFT(59),
  [322] = {.entry = {.count = 1, .reusable = true}}, SHIFT(124),
  [324] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_compound_statement, 3),
  [326] = {.entry = {.count = 1, .reusable = true}}, SHIFT(69),
  [328] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_funcall_expression_repeat1, 2, .production_id = 17), SHIFT_REPEAT(42),
  [331] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_funcall_expression_repeat1, 2, .production_id = 17),
  [333] = {.entry = {.count = 1, .reusable = true}}, SHIFT(68),
  [335] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_parameter_list_repeat1, 2), SHIFT_REPEAT(78),
  [338] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_parameter_list_repeat1, 2),
  [340] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_do_while_statement, 6, .production_id = 18),
  [342] = {.entry = {.count = 1, .reusable = true}}, SHIFT(60),
  [344] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_variable_definition_repeat1, 2, .production_id = 9),
  [346] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_variable_definition_repeat1, 2, .production_id = 9), SHIFT_REPEAT(165),
  [349] = {.entry = {.count = 1, .reusable = true}}, SHIFT(71),
  [351] = {.entry = {.count = 1, .reusable = true}}, SHIFT(154),
  [353] = {.entry = {.count = 1, .reusable = true}}, SHIFT(65),
  [355] = {.entry = {.count = 1, .reusable = true}}, SHIFT(76),
  [357] = {.entry = {.count = 1, .reusable = true}}, SHIFT(158),
  [359] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_while_statement, 5, .production_id = 14),
  [361] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_if_statement, 5, .production_id = 14),
  [363] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [365] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_if_statement, 7, .production_id = 14),
  [367] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_compound_statement, 2),
  [369] = {.entry = {.count = 1, .reusable = true}}, SHIFT(62),
  [371] = {.entry = {.count = 1, .reusable = true}}, SHIFT(147),
  [373] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [375] = {.entry = {.count = 1, .reusable = true}}, SHIFT(72),
  [377] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [379] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter, 2, .production_id = 1),
  [381] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_variable_definition_repeat1, 2, .production_id = 7),
  [383] = {.entry = {.count = 1, .reusable = true}}, SHIFT(177),
  [385] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_simple_type, 1),
  [387] = {.entry = {.count = 1, .reusable = true}}, SHIFT(61),
  [389] = {.entry = {.count = 1, .reusable = true}}, SHIFT(145),
  [391] = {.entry = {.count = 1, .reusable = true}}, SHIFT(142),
  [393] = {.entry = {.count = 1, .reusable = true}}, SHIFT(160),
  [395] = {.entry = {.count = 1, .reusable = true}}, SHIFT(87),
  [397] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter_list, 5),
  [399] = {.entry = {.count = 1, .reusable = true}}, SHIFT(132),
  [401] = {.entry = {.count = 1, .reusable = true}}, SHIFT(102),
  [403] = {.entry = {.count = 1, .reusable = true}}, SHIFT(114),
  [405] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter_list, 3),
  [407] = {.entry = {.count = 1, .reusable = false}}, SHIFT(70),
  [409] = {.entry = {.count = 1, .reusable = true}}, SHIFT(138),
  [411] = {.entry = {.count = 1, .reusable = true}}, SHIFT(64),
  [413] = {.entry = {.count = 1, .reusable = true}}, SHIFT(89),
  [415] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [417] = {.entry = {.count = 1, .reusable = true}}, SHIFT(100),
  [419] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter_list, 4),
  [421] = {.entry = {.count = 1, .reusable = true}}, SHIFT(73),
  [423] = {.entry = {.count = 1, .reusable = true}}, SHIFT(74),
  [425] = {.entry = {.count = 1, .reusable = true}}, SHIFT(133),
  [427] = {.entry = {.count = 1, .reusable = true}}, SHIFT(111),
  [429] = {.entry = {.count = 1, .reusable = true}}, SHIFT(90),
  [431] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [433] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_frame_identifier, 2),
  [435] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [437] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter_list, 6),
  [439] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [441] = {.entry = {.count = 1, .reusable = true}}, SHIFT(134),
  [443] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [445] = {.entry = {.count = 1, .reusable = true}}, SHIFT(146),
  [447] = {.entry = {.count = 1, .reusable = true}}, SHIFT(88),
  [449] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [451] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [453] = {.entry = {.count = 1, .reusable = true}}, SHIFT(67),
  [455] = {.entry = {.count = 1, .reusable = true}}, SHIFT(66),
  [457] = {.entry = {.count = 1, .reusable = true}}, SHIFT(101),
  [459] = {.entry = {.count = 1, .reusable = true}}, SHIFT(152),
  [461] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [463] = {.entry = {.count = 1, .reusable = true}}, SHIFT(140),
  [465] = {.entry = {.count = 1, .reusable = true}}, SHIFT(161),
  [467] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter_list, 2),
  [469] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [471] = {.entry = {.count = 1, .reusable = true}}, SHIFT(163),
  [473] = {.entry = {.count = 1, .reusable = true}}, SHIFT(148),
};

#ifdef __cplusplus
extern "C" {
#endif
#ifdef _WIN32
#define extern __declspec(dllexport)
#endif

extern const TSLanguage *tree_sitter_QuakeC(void) {
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
