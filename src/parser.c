#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 181
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 92
#define ALIAS_COUNT 0
#define TOKEN_COUNT 53
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 6
#define MAX_ALIAS_SEQUENCE_LENGTH 11
#define PRODUCTION_ID_COUNT 13

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
  aux_sym__string_literal_token1 = 48,
  aux_sym__string_literal_token2 = 49,
  aux_sym__string_literal_token3 = 50,
  aux_sym__builtin_literal_token1 = 51,
  sym_comment = 52,
  sym_source_file = 53,
  sym__definition = 54,
  sym_function_declaration = 55,
  sym_function_definition = 56,
  sym_constant_definition = 57,
  sym_variable_definition = 58,
  sym_field_definition = 59,
  sym_parameter_list = 60,
  sym__parameter = 61,
  sym_modelgen_pragma = 62,
  sym__statement = 63,
  sym__compound_statement = 64,
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
  sym_literal = 80,
  sym__numeric_literal = 81,
  sym__vector_literal = 82,
  sym__string_literal = 83,
  sym__builtin_literal = 84,
  aux_sym_source_file_repeat1 = 85,
  aux_sym_variable_definition_repeat1 = 86,
  aux_sym_parameter_list_repeat1 = 87,
  aux_sym__compound_statement_repeat1 = 88,
  aux_sym_variable_definition_statement_repeat1 = 89,
  aux_sym_funcall_expression_repeat1 = 90,
  aux_sym__string_literal_repeat1 = 91,
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
  [aux_sym__string_literal_token1] = "_string_literal_token1",
  [aux_sym__string_literal_token2] = "_string_literal_token2",
  [aux_sym__string_literal_token3] = "_string_literal_token3",
  [aux_sym__builtin_literal_token1] = "literal",
  [sym_comment] = "comment",
  [sym_source_file] = "source_file",
  [sym__definition] = "_definition",
  [sym_function_declaration] = "function_declaration",
  [sym_function_definition] = "function_definition",
  [sym_constant_definition] = "constant_definition",
  [sym_variable_definition] = "variable_definition",
  [sym_field_definition] = "field_definition",
  [sym_parameter_list] = "parameter_list",
  [sym__parameter] = "_parameter",
  [sym_modelgen_pragma] = "modelgen_pragma",
  [sym__statement] = "_statement",
  [sym__compound_statement] = "_compound_statement",
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
  [sym_literal] = "literal",
  [sym__numeric_literal] = "_numeric_literal",
  [sym__vector_literal] = "_vector_literal",
  [sym__string_literal] = "_string_literal",
  [sym__builtin_literal] = "_builtin_literal",
  [aux_sym_source_file_repeat1] = "source_file_repeat1",
  [aux_sym_variable_definition_repeat1] = "variable_definition_repeat1",
  [aux_sym_parameter_list_repeat1] = "parameter_list_repeat1",
  [aux_sym__compound_statement_repeat1] = "_compound_statement_repeat1",
  [aux_sym_variable_definition_statement_repeat1] = "variable_definition_statement_repeat1",
  [aux_sym_funcall_expression_repeat1] = "funcall_expression_repeat1",
  [aux_sym__string_literal_repeat1] = "_string_literal_repeat1",
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
  [aux_sym__string_literal_token1] = aux_sym__string_literal_token1,
  [aux_sym__string_literal_token2] = aux_sym__string_literal_token2,
  [aux_sym__string_literal_token3] = aux_sym__string_literal_token3,
  [aux_sym__builtin_literal_token1] = sym_literal,
  [sym_comment] = sym_comment,
  [sym_source_file] = sym_source_file,
  [sym__definition] = sym__definition,
  [sym_function_declaration] = sym_function_declaration,
  [sym_function_definition] = sym_function_definition,
  [sym_constant_definition] = sym_constant_definition,
  [sym_variable_definition] = sym_variable_definition,
  [sym_field_definition] = sym_field_definition,
  [sym_parameter_list] = sym_parameter_list,
  [sym__parameter] = sym__parameter,
  [sym_modelgen_pragma] = sym_modelgen_pragma,
  [sym__statement] = sym__statement,
  [sym__compound_statement] = sym__compound_statement,
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
  [sym_literal] = sym_literal,
  [sym__numeric_literal] = sym__numeric_literal,
  [sym__vector_literal] = sym__vector_literal,
  [sym__string_literal] = sym__string_literal,
  [sym__builtin_literal] = sym__builtin_literal,
  [aux_sym_source_file_repeat1] = aux_sym_source_file_repeat1,
  [aux_sym_variable_definition_repeat1] = aux_sym_variable_definition_repeat1,
  [aux_sym_parameter_list_repeat1] = aux_sym_parameter_list_repeat1,
  [aux_sym__compound_statement_repeat1] = aux_sym__compound_statement_repeat1,
  [aux_sym_variable_definition_statement_repeat1] = aux_sym_variable_definition_statement_repeat1,
  [aux_sym_funcall_expression_repeat1] = aux_sym_funcall_expression_repeat1,
  [aux_sym__string_literal_repeat1] = aux_sym__string_literal_repeat1,
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
  [aux_sym__string_literal_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__string_literal_token2] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__string_literal_token3] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__builtin_literal_token1] = {
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
  [sym__parameter] = {
    .visible = false,
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
  [sym__compound_statement] = {
    .visible = false,
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
  [sym_literal] = {
    .visible = true,
    .named = true,
  },
  [sym__numeric_literal] = {
    .visible = false,
    .named = true,
  },
  [sym__vector_literal] = {
    .visible = false,
    .named = true,
  },
  [sym__string_literal] = {
    .visible = false,
    .named = true,
  },
  [sym__builtin_literal] = {
    .visible = false,
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
  [aux_sym__compound_statement_repeat1] = {
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
  [aux_sym__string_literal_repeat1] = {
    .visible = false,
    .named = false,
  },
};

enum {
  field_body = 1,
  field_name = 2,
  field_parameters = 3,
  field_result = 4,
  field_type = 5,
  field_value = 6,
};

static const char * const ts_field_names[] = {
  [0] = NULL,
  [field_body] = "body",
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
  [12] = {.index = 31, .length = 4},
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
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(95);
      if (lookahead == '!') ADVANCE(134);
      if (lookahead == '"') ADVANCE(197);
      if (lookahead == '#') ADVANCE(88);
      if (lookahead == '$') ADVANCE(106);
      if (lookahead == '&') ADVANCE(136);
      if (lookahead == '(') ADVANCE(103);
      if (lookahead == ')') ADVANCE(105);
      if (lookahead == '*') ADVANCE(130);
      if (lookahead == '+') ADVANCE(129);
      if (lookahead == ',') ADVANCE(99);
      if (lookahead == '-') ADVANCE(128);
      if (lookahead == '.') ADVANCE(102);
      if (lookahead == '/') ADVANCE(131);
      if (lookahead == ';') ADVANCE(96);
      if (lookahead == '<') ADVANCE(142);
      if (lookahead == '=') ADVANCE(97);
      if (lookahead == '>') ADVANCE(139);
      if (lookahead == '[') ADVANCE(98);
      if (lookahead == '\\') ADVANCE(2);
      if (lookahead == ']') ADVANCE(100);
      if (lookahead == '`') ADVANCE(196);
      if (lookahead == 'b') ADVANCE(24);
      if (lookahead == 'c') ADVANCE(33);
      if (lookahead == 'd') ADVANCE(67);
      if (lookahead == 'e') ADVANCE(59);
      if (lookahead == 'f') ADVANCE(53);
      if (lookahead == 'i') ADVANCE(42);
      if (lookahead == 'l') ADVANCE(68);
      if (lookahead == 'm') ADVANCE(69);
      if (lookahead == 'o') ADVANCE(72);
      if (lookahead == 'r') ADVANCE(40);
      if (lookahead == 's') ADVANCE(30);
      if (lookahead == 'v') ADVANCE(39);
      if (lookahead == 'w') ADVANCE(46);
      if (lookahead == '{') ADVANCE(114);
      if (lookahead == '|') ADVANCE(135);
      if (lookahead == '}') ADVANCE(115);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(93)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(194);
      END_STATE();
    case 1:
      if (lookahead == '\n') SKIP(12)
      END_STATE();
    case 2:
      if (lookahead == '\n') SKIP(12)
      if (lookahead == '\r') SKIP(1)
      if (lookahead == 'n' ||
          lookahead == 'r') ADVANCE(203);
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
      if (lookahead == '\n') SKIP(21)
      END_STATE();
    case 8:
      if (lookahead == '\n') SKIP(21)
      if (lookahead == '\r') SKIP(7)
      END_STATE();
    case 9:
      if (lookahead == '\n') SKIP(9)
      if (lookahead == '/') ADVANCE(111);
      if (lookahead == '\\') ADVANCE(110);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(112);
      if (lookahead != 0) ADVANCE(113);
      END_STATE();
    case 10:
      if (lookahead == '\n') SKIP(22)
      END_STATE();
    case 11:
      if (lookahead == '\n') SKIP(22)
      if (lookahead == '\r') SKIP(10)
      END_STATE();
    case 12:
      if (lookahead == '!') ADVANCE(134);
      if (lookahead == '"') ADVANCE(197);
      if (lookahead == '#') ADVANCE(88);
      if (lookahead == '$') ADVANCE(106);
      if (lookahead == '&') ADVANCE(136);
      if (lookahead == '(') ADVANCE(103);
      if (lookahead == ')') ADVANCE(105);
      if (lookahead == '*') ADVANCE(130);
      if (lookahead == '+') ADVANCE(129);
      if (lookahead == ',') ADVANCE(99);
      if (lookahead == '-') ADVANCE(128);
      if (lookahead == '.') ADVANCE(102);
      if (lookahead == '/') ADVANCE(131);
      if (lookahead == ';') ADVANCE(96);
      if (lookahead == '<') ADVANCE(142);
      if (lookahead == '=') ADVANCE(97);
      if (lookahead == '>') ADVANCE(139);
      if (lookahead == '[') ADVANCE(98);
      if (lookahead == '\\') ADVANCE(2);
      if (lookahead == ']') ADVANCE(100);
      if (lookahead == '`') ADVANCE(196);
      if (lookahead == 'd') ADVANCE(67);
      if (lookahead == 'e') ADVANCE(59);
      if (lookahead == 'f') ADVANCE(57);
      if (lookahead == 'i') ADVANCE(42);
      if (lookahead == 'l') ADVANCE(68);
      if (lookahead == 'r') ADVANCE(40);
      if (lookahead == 's') ADVANCE(85);
      if (lookahead == 'v') ADVANCE(39);
      if (lookahead == 'w') ADVANCE(46);
      if (lookahead == '{') ADVANCE(114);
      if (lookahead == '|') ADVANCE(135);
      if (lookahead == '}') ADVANCE(115);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(12)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(194);
      END_STATE();
    case 13:
      if (lookahead == '"') ADVANCE(197);
      if (lookahead == '#') ADVANCE(88);
      if (lookahead == '(') ADVANCE(103);
      if (lookahead == '+') ADVANCE(129);
      if (lookahead == '-') ADVANCE(128);
      if (lookahead == '.') ADVANCE(19);
      if (lookahead == '/') ADVANCE(15);
      if (lookahead == '[') ADVANCE(98);
      if (lookahead == '\\') SKIP(4)
      if (lookahead == '`') ADVANCE(196);
      if (lookahead == 'd') ADVANCE(176);
      if (lookahead == 'e') ADVANCE(175);
      if (lookahead == 'f') ADVANCE(172);
      if (lookahead == 'i') ADVANCE(163);
      if (lookahead == 'l') ADVANCE(177);
      if (lookahead == 'r') ADVANCE(162);
      if (lookahead == 's') ADVANCE(183);
      if (lookahead == 'v') ADVANCE(161);
      if (lookahead == 'w') ADVANCE(165);
      if (lookahead == '{') ADVANCE(114);
      if (lookahead == '}') ADVANCE(115);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(13)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(194);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(192);
      END_STATE();
    case 14:
      if (lookahead == '"') ADVANCE(197);
      if (lookahead == '(') ADVANCE(103);
      if (lookahead == ')') ADVANCE(105);
      if (lookahead == '+') ADVANCE(129);
      if (lookahead == '-') ADVANCE(128);
      if (lookahead == '.') ADVANCE(89);
      if (lookahead == '/') ADVANCE(15);
      if (lookahead == '\\') SKIP(6)
      if (lookahead == '`') ADVANCE(196);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(14)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(194);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(192);
      END_STATE();
    case 15:
      if (lookahead == '*') ADVANCE(17);
      if (lookahead == '/') ADVANCE(216);
      END_STATE();
    case 16:
      if (lookahead == '*') ADVANCE(16);
      if (lookahead == '/') ADVANCE(215);
      if (lookahead != 0) ADVANCE(17);
      END_STATE();
    case 17:
      if (lookahead == '*') ADVANCE(16);
      if (lookahead != 0) ADVANCE(17);
      END_STATE();
    case 18:
      if (lookahead == '.') ADVANCE(20);
      END_STATE();
    case 19:
      if (lookahead == '.') ADVANCE(20);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(195);
      END_STATE();
    case 20:
      if (lookahead == '.') ADVANCE(104);
      END_STATE();
    case 21:
      if (lookahead == '.') ADVANCE(18);
      if (lookahead == '/') ADVANCE(15);
      if (lookahead == '\\') SKIP(8)
      if (lookahead == 'e') ADVANCE(62);
      if (lookahead == 'f') ADVANCE(57);
      if (lookahead == 'i') ADVANCE(65);
      if (lookahead == 's') ADVANCE(85);
      if (lookahead == 'v') ADVANCE(39);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(21)
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
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(193);
      END_STATE();
    case 24:
      if (lookahead == 'a') ADVANCE(77);
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
      if (lookahead == 'a') ADVANCE(82);
      END_STATE();
    case 30:
      if (lookahead == 'c') ADVANCE(27);
      if (lookahead == 'k') ADVANCE(47);
      if (lookahead == 't') ADVANCE(75);
      END_STATE();
    case 31:
      if (lookahead == 'c') ADVANCE(28);
      END_STATE();
    case 32:
      if (lookahead == 'c') ADVANCE(83);
      END_STATE();
    case 33:
      if (lookahead == 'd') ADVANCE(107);
      END_STATE();
    case 34:
      if (lookahead == 'd') ADVANCE(143);
      END_STATE();
    case 35:
      if (lookahead == 'd') ADVANCE(41);
      END_STATE();
    case 36:
      if (lookahead == 'e') ADVANCE(107);
      END_STATE();
    case 37:
      if (lookahead == 'e') ADVANCE(118);
      END_STATE();
    case 38:
      if (lookahead == 'e') ADVANCE(119);
      END_STATE();
    case 39:
      if (lookahead == 'e') ADVANCE(32);
      if (lookahead == 'o') ADVANCE(50);
      END_STATE();
    case 40:
      if (lookahead == 'e') ADVANCE(80);
      END_STATE();
    case 41:
      if (lookahead == 'e') ADVANCE(56);
      END_STATE();
    case 42:
      if (lookahead == 'f') ADVANCE(116);
      if (lookahead == 'n') ADVANCE(79);
      END_STATE();
    case 43:
      if (lookahead == 'g') ADVANCE(151);
      END_STATE();
    case 44:
      if (lookahead == 'g') ADVANCE(76);
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
      if (lookahead == 'i') ADVANCE(66);
      END_STATE();
    case 50:
      if (lookahead == 'i') ADVANCE(34);
      END_STATE();
    case 51:
      if (lookahead == 'i') ADVANCE(58);
      END_STATE();
    case 52:
      if (lookahead == 'i') ADVANCE(81);
      END_STATE();
    case 53:
      if (lookahead == 'l') ADVANCE(25);
      if (lookahead == 'r') ADVANCE(26);
      END_STATE();
    case 54:
      if (lookahead == 'l') ADVANCE(125);
      END_STATE();
    case 55:
      if (lookahead == 'l') ADVANCE(36);
      END_STATE();
    case 56:
      if (lookahead == 'l') ADVANCE(64);
      END_STATE();
    case 57:
      if (lookahead == 'l') ADVANCE(71);
      END_STATE();
    case 58:
      if (lookahead == 'l') ADVANCE(38);
      END_STATE();
    case 59:
      if (lookahead == 'l') ADVANCE(78);
      if (lookahead == 'n') ADVANCE(84);
      END_STATE();
    case 60:
      if (lookahead == 'm') ADVANCE(36);
      END_STATE();
    case 61:
      if (lookahead == 'n') ADVANCE(107);
      END_STATE();
    case 62:
      if (lookahead == 'n') ADVANCE(84);
      END_STATE();
    case 63:
      if (lookahead == 'n') ADVANCE(123);
      END_STATE();
    case 64:
      if (lookahead == 'n') ADVANCE(26);
      END_STATE();
    case 65:
      if (lookahead == 'n') ADVANCE(79);
      END_STATE();
    case 66:
      if (lookahead == 'n') ADVANCE(43);
      END_STATE();
    case 67:
      if (lookahead == 'o') ADVANCE(121);
      END_STATE();
    case 68:
      if (lookahead == 'o') ADVANCE(31);
      END_STATE();
    case 69:
      if (lookahead == 'o') ADVANCE(35);
      END_STATE();
    case 70:
      if (lookahead == 'o') ADVANCE(73);
      END_STATE();
    case 71:
      if (lookahead == 'o') ADVANCE(29);
      END_STATE();
    case 72:
      if (lookahead == 'r') ADVANCE(48);
      END_STATE();
    case 73:
      if (lookahead == 'r') ADVANCE(149);
      END_STATE();
    case 74:
      if (lookahead == 'r') ADVANCE(63);
      END_STATE();
    case 75:
      if (lookahead == 'r') ADVANCE(49);
      END_STATE();
    case 76:
      if (lookahead == 's') ADVANCE(107);
      END_STATE();
    case 77:
      if (lookahead == 's') ADVANCE(36);
      END_STATE();
    case 78:
      if (lookahead == 's') ADVANCE(37);
      END_STATE();
    case 79:
      if (lookahead == 't') ADVANCE(153);
      END_STATE();
    case 80:
      if (lookahead == 't') ADVANCE(86);
      END_STATE();
    case 81:
      if (lookahead == 't') ADVANCE(87);
      END_STATE();
    case 82:
      if (lookahead == 't') ADVANCE(147);
      END_STATE();
    case 83:
      if (lookahead == 't') ADVANCE(70);
      END_STATE();
    case 84:
      if (lookahead == 't') ADVANCE(52);
      END_STATE();
    case 85:
      if (lookahead == 't') ADVANCE(75);
      END_STATE();
    case 86:
      if (lookahead == 'u') ADVANCE(74);
      END_STATE();
    case 87:
      if (lookahead == 'y') ADVANCE(145);
      END_STATE();
    case 88:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(213);
      END_STATE();
    case 89:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(195);
      END_STATE();
    case 90:
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(214);
      END_STATE();
    case 91:
      if (eof) ADVANCE(95);
      if (lookahead == '\n') SKIP(94)
      END_STATE();
    case 92:
      if (eof) ADVANCE(95);
      if (lookahead == '\n') SKIP(94)
      if (lookahead == '\r') SKIP(91)
      END_STATE();
    case 93:
      if (eof) ADVANCE(95);
      if (lookahead == '!') ADVANCE(134);
      if (lookahead == '"') ADVANCE(197);
      if (lookahead == '#') ADVANCE(88);
      if (lookahead == '$') ADVANCE(106);
      if (lookahead == '&') ADVANCE(136);
      if (lookahead == '(') ADVANCE(103);
      if (lookahead == ')') ADVANCE(105);
      if (lookahead == '*') ADVANCE(130);
      if (lookahead == '+') ADVANCE(129);
      if (lookahead == ',') ADVANCE(99);
      if (lookahead == '-') ADVANCE(128);
      if (lookahead == '.') ADVANCE(102);
      if (lookahead == '/') ADVANCE(131);
      if (lookahead == ';') ADVANCE(96);
      if (lookahead == '<') ADVANCE(142);
      if (lookahead == '=') ADVANCE(97);
      if (lookahead == '>') ADVANCE(139);
      if (lookahead == '[') ADVANCE(98);
      if (lookahead == '\\') ADVANCE(2);
      if (lookahead == ']') ADVANCE(100);
      if (lookahead == '`') ADVANCE(196);
      if (lookahead == 'd') ADVANCE(67);
      if (lookahead == 'e') ADVANCE(59);
      if (lookahead == 'f') ADVANCE(57);
      if (lookahead == 'i') ADVANCE(42);
      if (lookahead == 'l') ADVANCE(68);
      if (lookahead == 'r') ADVANCE(40);
      if (lookahead == 's') ADVANCE(85);
      if (lookahead == 'v') ADVANCE(39);
      if (lookahead == 'w') ADVANCE(46);
      if (lookahead == '{') ADVANCE(114);
      if (lookahead == '|') ADVANCE(135);
      if (lookahead == '}') ADVANCE(115);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(93)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(194);
      END_STATE();
    case 94:
      if (eof) ADVANCE(95);
      if (lookahead == '!') ADVANCE(134);
      if (lookahead == '$') ADVANCE(106);
      if (lookahead == '&') ADVANCE(136);
      if (lookahead == '(') ADVANCE(103);
      if (lookahead == ')') ADVANCE(105);
      if (lookahead == '*') ADVANCE(130);
      if (lookahead == '+') ADVANCE(129);
      if (lookahead == ',') ADVANCE(99);
      if (lookahead == '-') ADVANCE(127);
      if (lookahead == '.') ADVANCE(101);
      if (lookahead == '/') ADVANCE(131);
      if (lookahead == ';') ADVANCE(96);
      if (lookahead == '<') ADVANCE(142);
      if (lookahead == '=') ADVANCE(97);
      if (lookahead == '>') ADVANCE(139);
      if (lookahead == '\\') SKIP(92)
      if (lookahead == 'e') ADVANCE(59);
      if (lookahead == 'f') ADVANCE(57);
      if (lookahead == 'i') ADVANCE(65);
      if (lookahead == 's') ADVANCE(85);
      if (lookahead == 'v') ADVANCE(39);
      if (lookahead == 'w') ADVANCE(46);
      if (lookahead == '|') ADVANCE(135);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(94)
      END_STATE();
    case 95:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 96:
      ACCEPT_TOKEN(anon_sym_SEMI);
      END_STATE();
    case 97:
      ACCEPT_TOKEN(anon_sym_EQ);
      if (lookahead == '=') ADVANCE(137);
      END_STATE();
    case 98:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 99:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 100:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 101:
      ACCEPT_TOKEN(anon_sym_DOT);
      END_STATE();
    case 102:
      ACCEPT_TOKEN(anon_sym_DOT);
      if (lookahead == '.') ADVANCE(20);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(195);
      END_STATE();
    case 103:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 104:
      ACCEPT_TOKEN(anon_sym_DOT_DOT_DOT);
      END_STATE();
    case 105:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 106:
      ACCEPT_TOKEN(anon_sym_DOLLAR);
      END_STATE();
    case 107:
      ACCEPT_TOKEN(aux_sym_modelgen_pragma_token1);
      END_STATE();
    case 108:
      ACCEPT_TOKEN(aux_sym_modelgen_pragma_token2);
      if (lookahead == '\n') ADVANCE(17);
      if (lookahead == '*') ADVANCE(108);
      if (lookahead == '/') ADVANCE(113);
      if (lookahead != 0) ADVANCE(109);
      END_STATE();
    case 109:
      ACCEPT_TOKEN(aux_sym_modelgen_pragma_token2);
      if (lookahead == '\n') ADVANCE(17);
      if (lookahead == '*') ADVANCE(108);
      if (lookahead != 0) ADVANCE(109);
      END_STATE();
    case 110:
      ACCEPT_TOKEN(aux_sym_modelgen_pragma_token2);
      if (lookahead == '\r') ADVANCE(113);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(113);
      END_STATE();
    case 111:
      ACCEPT_TOKEN(aux_sym_modelgen_pragma_token2);
      if (lookahead == '*') ADVANCE(109);
      if (lookahead == '/') ADVANCE(113);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(113);
      END_STATE();
    case 112:
      ACCEPT_TOKEN(aux_sym_modelgen_pragma_token2);
      if (lookahead == '/') ADVANCE(111);
      if (lookahead == '\\') ADVANCE(110);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(112);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(113);
      END_STATE();
    case 113:
      ACCEPT_TOKEN(aux_sym_modelgen_pragma_token2);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(113);
      END_STATE();
    case 114:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 115:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 116:
      ACCEPT_TOKEN(anon_sym_if);
      END_STATE();
    case 117:
      ACCEPT_TOKEN(anon_sym_if);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(192);
      END_STATE();
    case 118:
      ACCEPT_TOKEN(anon_sym_else);
      END_STATE();
    case 119:
      ACCEPT_TOKEN(anon_sym_while);
      END_STATE();
    case 120:
      ACCEPT_TOKEN(anon_sym_while);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(192);
      END_STATE();
    case 121:
      ACCEPT_TOKEN(anon_sym_do);
      END_STATE();
    case 122:
      ACCEPT_TOKEN(anon_sym_do);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(192);
      END_STATE();
    case 123:
      ACCEPT_TOKEN(anon_sym_return);
      END_STATE();
    case 124:
      ACCEPT_TOKEN(anon_sym_return);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(192);
      END_STATE();
    case 125:
      ACCEPT_TOKEN(anon_sym_local);
      END_STATE();
    case 126:
      ACCEPT_TOKEN(anon_sym_local);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(192);
      END_STATE();
    case 127:
      ACCEPT_TOKEN(anon_sym_DASH);
      END_STATE();
    case 128:
      ACCEPT_TOKEN(anon_sym_DASH);
      if (lookahead == '.') ADVANCE(89);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(194);
      END_STATE();
    case 129:
      ACCEPT_TOKEN(anon_sym_PLUS);
      END_STATE();
    case 130:
      ACCEPT_TOKEN(anon_sym_STAR);
      END_STATE();
    case 131:
      ACCEPT_TOKEN(anon_sym_SLASH);
      if (lookahead == '*') ADVANCE(17);
      if (lookahead == '/') ADVANCE(216);
      END_STATE();
    case 132:
      ACCEPT_TOKEN(anon_sym_PIPE_PIPE);
      END_STATE();
    case 133:
      ACCEPT_TOKEN(anon_sym_AMP_AMP);
      END_STATE();
    case 134:
      ACCEPT_TOKEN(anon_sym_BANG);
      if (lookahead == '=') ADVANCE(138);
      END_STATE();
    case 135:
      ACCEPT_TOKEN(anon_sym_PIPE);
      if (lookahead == '|') ADVANCE(132);
      END_STATE();
    case 136:
      ACCEPT_TOKEN(anon_sym_AMP);
      if (lookahead == '&') ADVANCE(133);
      END_STATE();
    case 137:
      ACCEPT_TOKEN(anon_sym_EQ_EQ);
      END_STATE();
    case 138:
      ACCEPT_TOKEN(anon_sym_BANG_EQ);
      END_STATE();
    case 139:
      ACCEPT_TOKEN(anon_sym_GT);
      if (lookahead == '=') ADVANCE(140);
      END_STATE();
    case 140:
      ACCEPT_TOKEN(anon_sym_GT_EQ);
      END_STATE();
    case 141:
      ACCEPT_TOKEN(anon_sym_LT_EQ);
      END_STATE();
    case 142:
      ACCEPT_TOKEN(anon_sym_LT);
      if (lookahead == '=') ADVANCE(141);
      END_STATE();
    case 143:
      ACCEPT_TOKEN(anon_sym_void);
      END_STATE();
    case 144:
      ACCEPT_TOKEN(anon_sym_void);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(192);
      END_STATE();
    case 145:
      ACCEPT_TOKEN(anon_sym_entity);
      END_STATE();
    case 146:
      ACCEPT_TOKEN(anon_sym_entity);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(192);
      END_STATE();
    case 147:
      ACCEPT_TOKEN(anon_sym_float);
      END_STATE();
    case 148:
      ACCEPT_TOKEN(anon_sym_float);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(192);
      END_STATE();
    case 149:
      ACCEPT_TOKEN(anon_sym_vector);
      END_STATE();
    case 150:
      ACCEPT_TOKEN(anon_sym_vector);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(192);
      END_STATE();
    case 151:
      ACCEPT_TOKEN(anon_sym_string);
      END_STATE();
    case 152:
      ACCEPT_TOKEN(anon_sym_string);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(192);
      END_STATE();
    case 153:
      ACCEPT_TOKEN(anon_sym_int);
      END_STATE();
    case 154:
      ACCEPT_TOKEN(anon_sym_int);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(192);
      END_STATE();
    case 155:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(170);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(192);
      END_STATE();
    case 156:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(187);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(192);
      END_STATE();
    case 157:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'c') ADVANCE(155);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(192);
      END_STATE();
    case 158:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'c') ADVANCE(189);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(192);
      END_STATE();
    case 159:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'd') ADVANCE(144);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(192);
      END_STATE();
    case 160:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(120);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(192);
      END_STATE();
    case 161:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(158);
      if (lookahead == 'o') ADVANCE(166);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(192);
      END_STATE();
    case 162:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(185);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(192);
      END_STATE();
    case 163:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'f') ADVANCE(117);
      if (lookahead == 'n') ADVANCE(184);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(192);
      END_STATE();
    case 164:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'g') ADVANCE(152);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(192);
      END_STATE();
    case 165:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'h') ADVANCE(168);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(192);
      END_STATE();
    case 166:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(159);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(192);
      END_STATE();
    case 167:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(173);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(192);
      END_STATE();
    case 168:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(171);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(192);
      END_STATE();
    case 169:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(186);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(192);
      END_STATE();
    case 170:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(126);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(192);
      END_STATE();
    case 171:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(160);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(192);
      END_STATE();
    case 172:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(178);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(192);
      END_STATE();
    case 173:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(164);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(192);
      END_STATE();
    case 174:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(124);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(192);
      END_STATE();
    case 175:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(188);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(192);
      END_STATE();
    case 176:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(122);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(192);
      END_STATE();
    case 177:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(157);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(192);
      END_STATE();
    case 178:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(156);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(192);
      END_STATE();
    case 179:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(180);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(192);
      END_STATE();
    case 180:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(150);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(192);
      END_STATE();
    case 181:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(174);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(192);
      END_STATE();
    case 182:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(167);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(192);
      END_STATE();
    case 183:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(182);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(192);
      END_STATE();
    case 184:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(154);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(192);
      END_STATE();
    case 185:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(190);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(192);
      END_STATE();
    case 186:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(191);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(192);
      END_STATE();
    case 187:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(148);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(192);
      END_STATE();
    case 188:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(169);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(192);
      END_STATE();
    case 189:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(179);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(192);
      END_STATE();
    case 190:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'u') ADVANCE(181);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(192);
      END_STATE();
    case 191:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'y') ADVANCE(146);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(192);
      END_STATE();
    case 192:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(192);
      END_STATE();
    case 193:
      ACCEPT_TOKEN(aux_sym_frame_identifier_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(193);
      END_STATE();
    case 194:
      ACCEPT_TOKEN(sym__integer_literal);
      if (lookahead == '.') ADVANCE(89);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(194);
      END_STATE();
    case 195:
      ACCEPT_TOKEN(sym__float_literal);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(195);
      END_STATE();
    case 196:
      ACCEPT_TOKEN(anon_sym_BQUOTE);
      END_STATE();
    case 197:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 198:
      ACCEPT_TOKEN(aux_sym__string_literal_token1);
      if (lookahead == '*') ADVANCE(200);
      if (lookahead == '/') ADVANCE(202);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(202);
      END_STATE();
    case 199:
      ACCEPT_TOKEN(aux_sym__string_literal_token1);
      if (lookahead == '*') ADVANCE(199);
      if (lookahead == '/') ADVANCE(202);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(200);
      END_STATE();
    case 200:
      ACCEPT_TOKEN(aux_sym__string_literal_token1);
      if (lookahead == '*') ADVANCE(199);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(200);
      END_STATE();
    case 201:
      ACCEPT_TOKEN(aux_sym__string_literal_token1);
      if (lookahead == '/') ADVANCE(198);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(201);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(202);
      END_STATE();
    case 202:
      ACCEPT_TOKEN(aux_sym__string_literal_token1);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(202);
      END_STATE();
    case 203:
      ACCEPT_TOKEN(aux_sym__string_literal_token2);
      END_STATE();
    case 204:
      ACCEPT_TOKEN(aux_sym__string_literal_token3);
      if (lookahead == '\n') ADVANCE(211);
      if (lookahead == '\r') ADVANCE(206);
      if (lookahead == 'n' ||
          lookahead == 'r') ADVANCE(203);
      if (lookahead != 0 &&
          lookahead != '"') ADVANCE(212);
      END_STATE();
    case 205:
      ACCEPT_TOKEN(aux_sym__string_literal_token3);
      if (lookahead == '\n') ADVANCE(211);
      if (lookahead == '/') ADVANCE(198);
      if (lookahead == '\\') ADVANCE(204);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(201);
      if (lookahead != 0 &&
          lookahead != '"') ADVANCE(202);
      END_STATE();
    case 206:
      ACCEPT_TOKEN(aux_sym__string_literal_token3);
      if (lookahead == '\n') ADVANCE(211);
      if (lookahead != 0 &&
          lookahead != '"') ADVANCE(212);
      END_STATE();
    case 207:
      ACCEPT_TOKEN(aux_sym__string_literal_token3);
      if (lookahead == '\n') ADVANCE(212);
      if (lookahead == '"') ADVANCE(216);
      if (lookahead != 0) ADVANCE(207);
      END_STATE();
    case 208:
      ACCEPT_TOKEN(aux_sym__string_literal_token3);
      if (lookahead == '"') ADVANCE(17);
      if (lookahead == '*') ADVANCE(208);
      if (lookahead == '/') ADVANCE(212);
      if (lookahead != 0) ADVANCE(209);
      END_STATE();
    case 209:
      ACCEPT_TOKEN(aux_sym__string_literal_token3);
      if (lookahead == '"') ADVANCE(17);
      if (lookahead == '*') ADVANCE(208);
      if (lookahead != 0) ADVANCE(209);
      END_STATE();
    case 210:
      ACCEPT_TOKEN(aux_sym__string_literal_token3);
      if (lookahead == '*') ADVANCE(209);
      if (lookahead == '/') ADVANCE(207);
      if (lookahead != 0 &&
          lookahead != '"') ADVANCE(212);
      END_STATE();
    case 211:
      ACCEPT_TOKEN(aux_sym__string_literal_token3);
      if (lookahead == '/') ADVANCE(210);
      if (lookahead == '\\') ADVANCE(204);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(211);
      if (lookahead != 0 &&
          lookahead != '"') ADVANCE(212);
      END_STATE();
    case 212:
      ACCEPT_TOKEN(aux_sym__string_literal_token3);
      if (lookahead != 0 &&
          lookahead != '"') ADVANCE(212);
      END_STATE();
    case 213:
      ACCEPT_TOKEN(aux_sym__builtin_literal_token1);
      if (lookahead == ':') ADVANCE(90);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(213);
      END_STATE();
    case 214:
      ACCEPT_TOKEN(aux_sym__builtin_literal_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(214);
      END_STATE();
    case 215:
      ACCEPT_TOKEN(sym_comment);
      END_STATE();
    case 216:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(216);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 94},
  [2] = {.lex_state = 13},
  [3] = {.lex_state = 13},
  [4] = {.lex_state = 13},
  [5] = {.lex_state = 13},
  [6] = {.lex_state = 13},
  [7] = {.lex_state = 13},
  [8] = {.lex_state = 13},
  [9] = {.lex_state = 13},
  [10] = {.lex_state = 13},
  [11] = {.lex_state = 94},
  [12] = {.lex_state = 94},
  [13] = {.lex_state = 94},
  [14] = {.lex_state = 94},
  [15] = {.lex_state = 94},
  [16] = {.lex_state = 94},
  [17] = {.lex_state = 13},
  [18] = {.lex_state = 94},
  [19] = {.lex_state = 94},
  [20] = {.lex_state = 94},
  [21] = {.lex_state = 94},
  [22] = {.lex_state = 94},
  [23] = {.lex_state = 94},
  [24] = {.lex_state = 94},
  [25] = {.lex_state = 94},
  [26] = {.lex_state = 94},
  [27] = {.lex_state = 94},
  [28] = {.lex_state = 94},
  [29] = {.lex_state = 94},
  [30] = {.lex_state = 94},
  [31] = {.lex_state = 94},
  [32] = {.lex_state = 94},
  [33] = {.lex_state = 94},
  [34] = {.lex_state = 94},
  [35] = {.lex_state = 94},
  [36] = {.lex_state = 94},
  [37] = {.lex_state = 14},
  [38] = {.lex_state = 14},
  [39] = {.lex_state = 14},
  [40] = {.lex_state = 14},
  [41] = {.lex_state = 94},
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
  [55] = {.lex_state = 94},
  [56] = {.lex_state = 94},
  [57] = {.lex_state = 94},
  [58] = {.lex_state = 94},
  [59] = {.lex_state = 0},
  [60] = {.lex_state = 94},
  [61] = {.lex_state = 94},
  [62] = {.lex_state = 21},
  [63] = {.lex_state = 94},
  [64] = {.lex_state = 94},
  [65] = {.lex_state = 94},
  [66] = {.lex_state = 94},
  [67] = {.lex_state = 94},
  [68] = {.lex_state = 94},
  [69] = {.lex_state = 94},
  [70] = {.lex_state = 94},
  [71] = {.lex_state = 21},
  [72] = {.lex_state = 94},
  [73] = {.lex_state = 94},
  [74] = {.lex_state = 94},
  [75] = {.lex_state = 13},
  [76] = {.lex_state = 13},
  [77] = {.lex_state = 13},
  [78] = {.lex_state = 13},
  [79] = {.lex_state = 13},
  [80] = {.lex_state = 13},
  [81] = {.lex_state = 0},
  [82] = {.lex_state = 13},
  [83] = {.lex_state = 13},
  [84] = {.lex_state = 0},
  [85] = {.lex_state = 0},
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
  [105] = {.lex_state = 205},
  [106] = {.lex_state = 0},
  [107] = {.lex_state = 205},
  [108] = {.lex_state = 205},
  [109] = {.lex_state = 0},
  [110] = {.lex_state = 0},
  [111] = {.lex_state = 0},
  [112] = {.lex_state = 0},
  [113] = {.lex_state = 0},
  [114] = {.lex_state = 0},
  [115] = {.lex_state = 0},
  [116] = {.lex_state = 0},
  [117] = {.lex_state = 0},
  [118] = {.lex_state = 13},
  [119] = {.lex_state = 0},
  [120] = {.lex_state = 13},
  [121] = {.lex_state = 0},
  [122] = {.lex_state = 0},
  [123] = {.lex_state = 0},
  [124] = {.lex_state = 14},
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
  [136] = {.lex_state = 0},
  [137] = {.lex_state = 14},
  [138] = {.lex_state = 14},
  [139] = {.lex_state = 14},
  [140] = {.lex_state = 14},
  [141] = {.lex_state = 14},
  [142] = {.lex_state = 13},
  [143] = {.lex_state = 14},
  [144] = {.lex_state = 0},
  [145] = {.lex_state = 9},
  [146] = {.lex_state = 14},
  [147] = {.lex_state = 0},
  [148] = {.lex_state = 14},
  [149] = {.lex_state = 14},
  [150] = {.lex_state = 0},
  [151] = {.lex_state = 14},
  [152] = {.lex_state = 14},
  [153] = {.lex_state = 14},
  [154] = {.lex_state = 0},
  [155] = {.lex_state = 0},
  [156] = {.lex_state = 0},
  [157] = {.lex_state = 0},
  [158] = {.lex_state = 0},
  [159] = {.lex_state = 14},
  [160] = {.lex_state = 14},
  [161] = {.lex_state = 0},
  [162] = {.lex_state = 14},
  [163] = {.lex_state = 0},
  [164] = {.lex_state = 0},
  [165] = {.lex_state = 14},
  [166] = {.lex_state = 0},
  [167] = {.lex_state = 0},
  [168] = {.lex_state = 14},
  [169] = {.lex_state = 0},
  [170] = {.lex_state = 0},
  [171] = {.lex_state = 0},
  [172] = {.lex_state = 14},
  [173] = {.lex_state = 0},
  [174] = {.lex_state = 14},
  [175] = {.lex_state = 0},
  [176] = {.lex_state = 14},
  [177] = {.lex_state = 0},
  [178] = {.lex_state = 0},
  [179] = {.lex_state = 0},
  [180] = {.lex_state = 23},
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
    [aux_sym__string_literal_token2] = ACTIONS(1),
    [aux_sym__builtin_literal_token1] = ACTIONS(1),
    [sym_comment] = ACTIONS(3),
  },
  [1] = {
    [sym_source_file] = STATE(157),
    [sym__definition] = STATE(32),
    [sym_function_declaration] = STATE(32),
    [sym_function_definition] = STATE(32),
    [sym_constant_definition] = STATE(32),
    [sym_variable_definition] = STATE(32),
    [sym_field_definition] = STATE(32),
    [sym_modelgen_pragma] = STATE(32),
    [sym_simple_type] = STATE(124),
    [aux_sym_source_file_repeat1] = STATE(32),
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
  [0] = 23,
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
      aux_sym__builtin_literal_token1,
    STATE(172), 1,
      sym_simple_type,
    STATE(173), 1,
      sym__builtin_literal,
    STATE(25), 3,
      sym__numeric_literal,
      sym__vector_literal,
      sym__string_literal,
    ACTIONS(33), 6,
      anon_sym_void,
      anon_sym_entity,
      anon_sym_float,
      anon_sym_vector,
      anon_sym_string,
      anon_sym_int,
    STATE(35), 6,
      sym__expression,
      sym_unary_expression,
      sym_binary_expression,
      sym_funcall_expression,
      sym_parenthesized_expression,
      sym_literal,
    STATE(171), 10,
      sym__statement,
      sym__compound_statement,
      sym__simple_statement,
      sym_assignment_statement,
      sym_if_statement,
      sym_while_statement,
      sym_do_while_statement,
      sym_return_statement,
      sym_variable_definition_statement,
      sym__expression_statement,
  [91] = 22,
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
      aux_sym__builtin_literal_token1,
    STATE(156), 1,
      sym__builtin_literal,
    STATE(172), 1,
      sym_simple_type,
    STATE(25), 3,
      sym__numeric_literal,
      sym__vector_literal,
      sym__string_literal,
    ACTIONS(33), 6,
      anon_sym_void,
      anon_sym_entity,
      anon_sym_float,
      anon_sym_vector,
      anon_sym_string,
      anon_sym_int,
    STATE(35), 6,
      sym__expression,
      sym_unary_expression,
      sym_binary_expression,
      sym_funcall_expression,
      sym_parenthesized_expression,
      sym_literal,
    STATE(155), 10,
      sym__statement,
      sym__compound_statement,
      sym__simple_statement,
      sym_assignment_statement,
      sym_if_statement,
      sym_while_statement,
      sym_do_while_statement,
      sym_return_statement,
      sym_variable_definition_statement,
      sym__expression_statement,
  [179] = 20,
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
    STATE(172), 1,
      sym_simple_type,
    STATE(25), 3,
      sym__numeric_literal,
      sym__vector_literal,
      sym__string_literal,
    ACTIONS(33), 6,
      anon_sym_void,
      anon_sym_entity,
      anon_sym_float,
      anon_sym_vector,
      anon_sym_string,
      anon_sym_int,
    STATE(35), 6,
      sym__expression,
      sym_unary_expression,
      sym_binary_expression,
      sym_funcall_expression,
      sym_parenthesized_expression,
      sym_literal,
    STATE(121), 10,
      sym__statement,
      sym__compound_statement,
      sym__simple_statement,
      sym_assignment_statement,
      sym_if_statement,
      sym_while_statement,
      sym_do_while_statement,
      sym_return_statement,
      sym_variable_definition_statement,
      sym__expression_statement,
  [261] = 20,
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
    STATE(172), 1,
      sym_simple_type,
    STATE(25), 3,
      sym__numeric_literal,
      sym__vector_literal,
      sym__string_literal,
    ACTIONS(33), 6,
      anon_sym_void,
      anon_sym_entity,
      anon_sym_float,
      anon_sym_vector,
      anon_sym_string,
      anon_sym_int,
    STATE(35), 6,
      sym__expression,
      sym_unary_expression,
      sym_binary_expression,
      sym_funcall_expression,
      sym_parenthesized_expression,
      sym_literal,
    STATE(126), 10,
      sym__statement,
      sym__compound_statement,
      sym__simple_statement,
      sym_assignment_statement,
      sym_if_statement,
      sym_while_statement,
      sym_do_while_statement,
      sym_return_statement,
      sym_variable_definition_statement,
      sym__expression_statement,
  [343] = 20,
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
    STATE(172), 1,
      sym_simple_type,
    STATE(25), 3,
      sym__numeric_literal,
      sym__vector_literal,
      sym__string_literal,
    ACTIONS(33), 6,
      anon_sym_void,
      anon_sym_entity,
      anon_sym_float,
      anon_sym_vector,
      anon_sym_string,
      anon_sym_int,
    STATE(35), 6,
      sym__expression,
      sym_unary_expression,
      sym_binary_expression,
      sym_funcall_expression,
      sym_parenthesized_expression,
      sym_literal,
    STATE(177), 10,
      sym__statement,
      sym__compound_statement,
      sym__simple_statement,
      sym_assignment_statement,
      sym_if_statement,
      sym_while_statement,
      sym_do_while_statement,
      sym_return_statement,
      sym_variable_definition_statement,
      sym__expression_statement,
  [425] = 20,
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
    STATE(172), 1,
      sym_simple_type,
    STATE(25), 3,
      sym__numeric_literal,
      sym__vector_literal,
      sym__string_literal,
    ACTIONS(33), 6,
      anon_sym_void,
      anon_sym_entity,
      anon_sym_float,
      anon_sym_vector,
      anon_sym_string,
      anon_sym_int,
    STATE(35), 6,
      sym__expression,
      sym_unary_expression,
      sym_binary_expression,
      sym_funcall_expression,
      sym_parenthesized_expression,
      sym_literal,
    STATE(119), 10,
      sym__statement,
      sym__compound_statement,
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
    ACTIONS(49), 1,
      anon_sym_LPAREN,
    ACTIONS(52), 1,
      anon_sym_RBRACE,
    ACTIONS(54), 1,
      anon_sym_if,
    ACTIONS(57), 1,
      anon_sym_while,
    ACTIONS(60), 1,
      anon_sym_do,
    ACTIONS(63), 1,
      anon_sym_return,
    ACTIONS(66), 1,
      anon_sym_local,
    ACTIONS(69), 1,
      anon_sym_DASH,
    ACTIONS(72), 1,
      anon_sym_PLUS,
    ACTIONS(78), 1,
      sym_identifier,
    ACTIONS(81), 1,
      sym__integer_literal,
    ACTIONS(84), 1,
      sym__float_literal,
    ACTIONS(87), 1,
      anon_sym_BQUOTE,
    ACTIONS(90), 1,
      anon_sym_DQUOTE,
    STATE(8), 1,
      aux_sym__compound_statement_repeat1,
    STATE(172), 1,
      sym_simple_type,
    STATE(25), 3,
      sym__numeric_literal,
      sym__vector_literal,
      sym__string_literal,
    ACTIONS(75), 6,
      anon_sym_void,
      anon_sym_entity,
      anon_sym_float,
      anon_sym_vector,
      anon_sym_string,
      anon_sym_int,
    STATE(35), 6,
      sym__expression,
      sym_unary_expression,
      sym_binary_expression,
      sym_funcall_expression,
      sym_parenthesized_expression,
      sym_literal,
    STATE(178), 8,
      sym__simple_statement,
      sym_assignment_statement,
      sym_if_statement,
      sym_while_statement,
      sym_do_while_statement,
      sym_return_statement,
      sym_variable_definition_statement,
      sym__expression_statement,
  [590] = 21,
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
    ACTIONS(93), 1,
      anon_sym_RBRACE,
    STATE(8), 1,
      aux_sym__compound_statement_repeat1,
    STATE(172), 1,
      sym_simple_type,
    STATE(25), 3,
      sym__numeric_literal,
      sym__vector_literal,
      sym__string_literal,
    ACTIONS(33), 6,
      anon_sym_void,
      anon_sym_entity,
      anon_sym_float,
      anon_sym_vector,
      anon_sym_string,
      anon_sym_int,
    STATE(35), 6,
      sym__expression,
      sym_unary_expression,
      sym_binary_expression,
      sym_funcall_expression,
      sym_parenthesized_expression,
      sym_literal,
    STATE(178), 8,
      sym__simple_statement,
      sym_assignment_statement,
      sym_if_statement,
      sym_while_statement,
      sym_do_while_statement,
      sym_return_statement,
      sym_variable_definition_statement,
      sym__expression_statement,
  [673] = 21,
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
    STATE(9), 1,
      aux_sym__compound_statement_repeat1,
    STATE(172), 1,
      sym_simple_type,
    STATE(25), 3,
      sym__numeric_literal,
      sym__vector_literal,
      sym__string_literal,
    ACTIONS(33), 6,
      anon_sym_void,
      anon_sym_entity,
      anon_sym_float,
      anon_sym_vector,
      anon_sym_string,
      anon_sym_int,
    STATE(35), 6,
      sym__expression,
      sym_unary_expression,
      sym_binary_expression,
      sym_funcall_expression,
      sym_parenthesized_expression,
      sym_literal,
    STATE(178), 8,
      sym__simple_statement,
      sym_assignment_statement,
      sym_if_statement,
      sym_while_statement,
      sym_do_while_statement,
      sym_return_statement,
      sym_variable_definition_statement,
      sym__expression_statement,
  [756] = 4,
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
  [787] = 3,
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
  [815] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(105), 1,
      anon_sym_BANG,
    ACTIONS(109), 1,
      anon_sym_STAR,
    ACTIONS(111), 1,
      anon_sym_SLASH,
    ACTIONS(113), 1,
      anon_sym_PIPE,
    ACTIONS(115), 1,
      anon_sym_AMP,
    ACTIONS(107), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(119), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(117), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
    ACTIONS(103), 7,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_else,
      anon_sym_while,
      anon_sym_PIPE_PIPE,
      anon_sym_AMP_AMP,
  [857] = 3,
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
  [885] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(127), 6,
      anon_sym_SLASH,
      anon_sym_BANG,
      anon_sym_PIPE,
      anon_sym_AMP,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(125), 14,
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
  [913] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(131), 6,
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
  [941] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(52), 6,
      anon_sym_LPAREN,
      anon_sym_RBRACE,
      anon_sym_PLUS,
      sym__float_literal,
      anon_sym_BQUOTE,
      anon_sym_DQUOTE,
    ACTIONS(133), 14,
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
  [969] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(137), 6,
      anon_sym_SLASH,
      anon_sym_BANG,
      anon_sym_PIPE,
      anon_sym_AMP,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(135), 14,
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
  [997] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(99), 1,
      anon_sym_LPAREN,
    ACTIONS(139), 1,
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
  [1029] = 3,
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
  [1057] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(109), 1,
      anon_sym_STAR,
    ACTIONS(111), 1,
      anon_sym_SLASH,
    ACTIONS(113), 1,
      anon_sym_PIPE,
    ACTIONS(115), 1,
      anon_sym_AMP,
    ACTIONS(107), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(105), 3,
      anon_sym_BANG,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(103), 11,
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
  [1095] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(109), 1,
      anon_sym_STAR,
    ACTIONS(111), 1,
      anon_sym_SLASH,
    ACTIONS(105), 5,
      anon_sym_BANG,
      anon_sym_PIPE,
      anon_sym_AMP,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(103), 13,
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
  [1127] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(109), 1,
      anon_sym_STAR,
    ACTIONS(111), 1,
      anon_sym_SLASH,
    ACTIONS(115), 1,
      anon_sym_AMP,
    ACTIONS(105), 4,
      anon_sym_BANG,
      anon_sym_PIPE,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(103), 13,
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
  [1161] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(147), 6,
      anon_sym_SLASH,
      anon_sym_BANG,
      anon_sym_PIPE,
      anon_sym_AMP,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(145), 14,
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
  [1189] = 3,
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
  [1217] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(109), 1,
      anon_sym_STAR,
    ACTIONS(111), 1,
      anon_sym_SLASH,
    ACTIONS(113), 1,
      anon_sym_PIPE,
    ACTIONS(115), 1,
      anon_sym_AMP,
    ACTIONS(153), 1,
      anon_sym_BANG,
    ACTIONS(107), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(119), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(117), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
    ACTIONS(103), 7,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_else,
      anon_sym_while,
      anon_sym_PIPE_PIPE,
      anon_sym_AMP_AMP,
  [1259] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(157), 6,
      anon_sym_SLASH,
      anon_sym_BANG,
      anon_sym_PIPE,
      anon_sym_AMP,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(155), 14,
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
  [1287] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(109), 1,
      anon_sym_STAR,
    ACTIONS(111), 1,
      anon_sym_SLASH,
    ACTIONS(113), 1,
      anon_sym_PIPE,
    ACTIONS(115), 1,
      anon_sym_AMP,
    ACTIONS(153), 1,
      anon_sym_BANG,
    ACTIONS(159), 1,
      anon_sym_AMP_AMP,
    ACTIONS(107), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(119), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(117), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
    ACTIONS(103), 6,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_else,
      anon_sym_while,
      anon_sym_PIPE_PIPE,
  [1331] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(163), 6,
      anon_sym_SLASH,
      anon_sym_BANG,
      anon_sym_PIPE,
      anon_sym_AMP,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(161), 14,
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
  [1359] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(109), 1,
      anon_sym_STAR,
    ACTIONS(111), 1,
      anon_sym_SLASH,
    ACTIONS(113), 1,
      anon_sym_PIPE,
    ACTIONS(115), 1,
      anon_sym_AMP,
    ACTIONS(105), 3,
      anon_sym_BANG,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(103), 13,
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
  [1395] = 14,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(109), 1,
      anon_sym_STAR,
    ACTIONS(111), 1,
      anon_sym_SLASH,
    ACTIONS(113), 1,
      anon_sym_PIPE,
    ACTIONS(115), 1,
      anon_sym_AMP,
    ACTIONS(153), 1,
      anon_sym_BANG,
    ACTIONS(159), 1,
      anon_sym_AMP_AMP,
    ACTIONS(165), 1,
      anon_sym_COMMA,
    ACTIONS(167), 1,
      anon_sym_RPAREN,
    ACTIONS(169), 1,
      anon_sym_PIPE_PIPE,
    STATE(129), 1,
      aux_sym_funcall_expression_repeat1,
    ACTIONS(107), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(119), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(117), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
  [1443] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(7), 1,
      anon_sym_DOT,
    ACTIONS(9), 1,
      anon_sym_DOLLAR,
    ACTIONS(171), 1,
      ts_builtin_sym_end,
    STATE(124), 1,
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
  [1477] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(109), 1,
      anon_sym_STAR,
    ACTIONS(111), 1,
      anon_sym_SLASH,
    ACTIONS(113), 1,
      anon_sym_PIPE,
    ACTIONS(115), 1,
      anon_sym_AMP,
    ACTIONS(153), 1,
      anon_sym_BANG,
    ACTIONS(159), 1,
      anon_sym_AMP_AMP,
    ACTIONS(169), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(107), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(119), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(173), 3,
      anon_sym_SEMI,
      anon_sym_else,
      anon_sym_while,
    ACTIONS(117), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
  [1521] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(109), 1,
      anon_sym_STAR,
    ACTIONS(111), 1,
      anon_sym_SLASH,
    ACTIONS(113), 1,
      anon_sym_PIPE,
    ACTIONS(115), 1,
      anon_sym_AMP,
    ACTIONS(153), 1,
      anon_sym_BANG,
    ACTIONS(159), 1,
      anon_sym_AMP_AMP,
    ACTIONS(169), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(107), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(119), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(175), 3,
      anon_sym_SEMI,
      anon_sym_else,
      anon_sym_while,
    ACTIONS(117), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
  [1565] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(109), 1,
      anon_sym_STAR,
    ACTIONS(111), 1,
      anon_sym_SLASH,
    ACTIONS(113), 1,
      anon_sym_PIPE,
    ACTIONS(115), 1,
      anon_sym_AMP,
    ACTIONS(153), 1,
      anon_sym_BANG,
    ACTIONS(159), 1,
      anon_sym_AMP_AMP,
    ACTIONS(169), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(107), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(119), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(177), 3,
      anon_sym_SEMI,
      anon_sym_else,
      anon_sym_while,
    ACTIONS(117), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
  [1609] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(179), 1,
      ts_builtin_sym_end,
    ACTIONS(181), 1,
      anon_sym_DOT,
    ACTIONS(184), 1,
      anon_sym_DOLLAR,
    STATE(124), 1,
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
  [1643] = 12,
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
    STATE(25), 3,
      sym__numeric_literal,
      sym__vector_literal,
      sym__string_literal,
    STATE(31), 6,
      sym__expression,
      sym_unary_expression,
      sym_binary_expression,
      sym_funcall_expression,
      sym_parenthesized_expression,
      sym_literal,
  [1687] = 11,
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
    STATE(25), 3,
      sym__numeric_literal,
      sym__vector_literal,
      sym__string_literal,
    STATE(26), 6,
      sym__expression,
      sym_unary_expression,
      sym_binary_expression,
      sym_funcall_expression,
      sym_parenthesized_expression,
      sym_literal,
  [1728] = 11,
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
    STATE(25), 3,
      sym__numeric_literal,
      sym__vector_literal,
      sym__string_literal,
    STATE(33), 6,
      sym__expression,
      sym_unary_expression,
      sym_binary_expression,
      sym_funcall_expression,
      sym_parenthesized_expression,
      sym_literal,
  [1769] = 11,
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
    STATE(25), 3,
      sym__numeric_literal,
      sym__vector_literal,
      sym__string_literal,
    STATE(55), 6,
      sym__expression,
      sym_unary_expression,
      sym_binary_expression,
      sym_funcall_expression,
      sym_parenthesized_expression,
      sym_literal,
  [1810] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(109), 1,
      anon_sym_STAR,
    ACTIONS(111), 1,
      anon_sym_SLASH,
    ACTIONS(113), 1,
      anon_sym_PIPE,
    ACTIONS(115), 1,
      anon_sym_AMP,
    ACTIONS(153), 1,
      anon_sym_BANG,
    ACTIONS(159), 1,
      anon_sym_AMP_AMP,
    ACTIONS(169), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(107), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(119), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(194), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
    ACTIONS(117), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
  [1853] = 11,
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
    STATE(25), 3,
      sym__numeric_literal,
      sym__vector_literal,
      sym__string_literal,
    STATE(56), 6,
      sym__expression,
      sym_unary_expression,
      sym_binary_expression,
      sym_funcall_expression,
      sym_parenthesized_expression,
      sym_literal,
  [1894] = 11,
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
    STATE(25), 3,
      sym__numeric_literal,
      sym__vector_literal,
      sym__string_literal,
    STATE(41), 6,
      sym__expression,
      sym_unary_expression,
      sym_binary_expression,
      sym_funcall_expression,
      sym_parenthesized_expression,
      sym_literal,
  [1935] = 11,
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
    STATE(25), 3,
      sym__numeric_literal,
      sym__vector_literal,
      sym__string_literal,
    STATE(58), 6,
      sym__expression,
      sym_unary_expression,
      sym_binary_expression,
      sym_funcall_expression,
      sym_parenthesized_expression,
      sym_literal,
  [1976] = 11,
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
    STATE(25), 3,
      sym__numeric_literal,
      sym__vector_literal,
      sym__string_literal,
    STATE(30), 6,
      sym__expression,
      sym_unary_expression,
      sym_binary_expression,
      sym_funcall_expression,
      sym_parenthesized_expression,
      sym_literal,
  [2017] = 11,
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
    STATE(25), 3,
      sym__numeric_literal,
      sym__vector_literal,
      sym__string_literal,
    STATE(21), 6,
      sym__expression,
      sym_unary_expression,
      sym_binary_expression,
      sym_funcall_expression,
      sym_parenthesized_expression,
      sym_literal,
  [2058] = 11,
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
    STATE(25), 3,
      sym__numeric_literal,
      sym__vector_literal,
      sym__string_literal,
    STATE(14), 6,
      sym__expression,
      sym_unary_expression,
      sym_binary_expression,
      sym_funcall_expression,
      sym_parenthesized_expression,
      sym_literal,
  [2099] = 11,
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
    STATE(25), 3,
      sym__numeric_literal,
      sym__vector_literal,
      sym__string_literal,
    STATE(12), 6,
      sym__expression,
      sym_unary_expression,
      sym_binary_expression,
      sym_funcall_expression,
      sym_parenthesized_expression,
      sym_literal,
  [2140] = 11,
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
    STATE(25), 3,
      sym__numeric_literal,
      sym__vector_literal,
      sym__string_literal,
    STATE(22), 6,
      sym__expression,
      sym_unary_expression,
      sym_binary_expression,
      sym_funcall_expression,
      sym_parenthesized_expression,
      sym_literal,
  [2181] = 11,
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
    STATE(25), 3,
      sym__numeric_literal,
      sym__vector_literal,
      sym__string_literal,
    STATE(23), 6,
      sym__expression,
      sym_unary_expression,
      sym_binary_expression,
      sym_funcall_expression,
      sym_parenthesized_expression,
      sym_literal,
  [2222] = 11,
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
    STATE(25), 3,
      sym__numeric_literal,
      sym__vector_literal,
      sym__string_literal,
    STATE(13), 6,
      sym__expression,
      sym_unary_expression,
      sym_binary_expression,
      sym_funcall_expression,
      sym_parenthesized_expression,
      sym_literal,
  [2263] = 11,
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
    STATE(25), 3,
      sym__numeric_literal,
      sym__vector_literal,
      sym__string_literal,
    STATE(57), 6,
      sym__expression,
      sym_unary_expression,
      sym_binary_expression,
      sym_funcall_expression,
      sym_parenthesized_expression,
      sym_literal,
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
    ACTIONS(192), 1,
      sym_identifier,
    STATE(25), 3,
      sym__numeric_literal,
      sym__vector_literal,
      sym__string_literal,
    STATE(34), 6,
      sym__expression,
      sym_unary_expression,
      sym_binary_expression,
      sym_funcall_expression,
      sym_parenthesized_expression,
      sym_literal,
  [2345] = 11,
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
    STATE(25), 3,
      sym__numeric_literal,
      sym__vector_literal,
      sym__string_literal,
    STATE(28), 6,
      sym__expression,
      sym_unary_expression,
      sym_binary_expression,
      sym_funcall_expression,
      sym_parenthesized_expression,
      sym_literal,
  [2386] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(109), 1,
      anon_sym_STAR,
    ACTIONS(111), 1,
      anon_sym_SLASH,
    ACTIONS(113), 1,
      anon_sym_PIPE,
    ACTIONS(115), 1,
      anon_sym_AMP,
    ACTIONS(153), 1,
      anon_sym_BANG,
    ACTIONS(159), 1,
      anon_sym_AMP_AMP,
    ACTIONS(169), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(196), 1,
      anon_sym_RPAREN,
    ACTIONS(107), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(119), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(117), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
  [2428] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(109), 1,
      anon_sym_STAR,
    ACTIONS(111), 1,
      anon_sym_SLASH,
    ACTIONS(113), 1,
      anon_sym_PIPE,
    ACTIONS(115), 1,
      anon_sym_AMP,
    ACTIONS(153), 1,
      anon_sym_BANG,
    ACTIONS(159), 1,
      anon_sym_AMP_AMP,
    ACTIONS(169), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(198), 1,
      anon_sym_RPAREN,
    ACTIONS(107), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(119), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(117), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
  [2470] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(109), 1,
      anon_sym_STAR,
    ACTIONS(111), 1,
      anon_sym_SLASH,
    ACTIONS(113), 1,
      anon_sym_PIPE,
    ACTIONS(115), 1,
      anon_sym_AMP,
    ACTIONS(153), 1,
      anon_sym_BANG,
    ACTIONS(159), 1,
      anon_sym_AMP_AMP,
    ACTIONS(169), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(200), 1,
      anon_sym_RPAREN,
    ACTIONS(107), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(119), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(117), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
  [2512] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(109), 1,
      anon_sym_STAR,
    ACTIONS(111), 1,
      anon_sym_SLASH,
    ACTIONS(113), 1,
      anon_sym_PIPE,
    ACTIONS(115), 1,
      anon_sym_AMP,
    ACTIONS(153), 1,
      anon_sym_BANG,
    ACTIONS(159), 1,
      anon_sym_AMP_AMP,
    ACTIONS(169), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(202), 1,
      anon_sym_RPAREN,
    ACTIONS(107), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(119), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(117), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
  [2554] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(204), 1,
      anon_sym_COMMA,
    ACTIONS(206), 1,
      anon_sym_RPAREN,
    STATE(130), 1,
      sym__parameter,
    STATE(139), 1,
      sym_simple_type,
    ACTIONS(11), 6,
      anon_sym_void,
      anon_sym_entity,
      anon_sym_float,
      anon_sym_vector,
      anon_sym_string,
      anon_sym_int,
  [2578] = 2,
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
  [2593] = 2,
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
  [2608] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(212), 1,
      anon_sym_DOT_DOT_DOT,
    STATE(135), 1,
      sym__parameter,
    STATE(139), 1,
      sym_simple_type,
    ACTIONS(11), 6,
      anon_sym_void,
      anon_sym_entity,
      anon_sym_float,
      anon_sym_vector,
      anon_sym_string,
      anon_sym_int,
  [2629] = 2,
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
  [2644] = 2,
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
  [2659] = 2,
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
  [2674] = 2,
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
  [2689] = 2,
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
  [2704] = 2,
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
  [2719] = 2,
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
  [2734] = 2,
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
  [2749] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(230), 1,
      anon_sym_DOT_DOT_DOT,
    STATE(135), 1,
      sym__parameter,
    STATE(139), 1,
      sym_simple_type,
    ACTIONS(11), 6,
      anon_sym_void,
      anon_sym_entity,
      anon_sym_float,
      anon_sym_vector,
      anon_sym_string,
      anon_sym_int,
  [2770] = 2,
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
  [2785] = 2,
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
  [2800] = 2,
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
  [2815] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(37), 1,
      sym__integer_literal,
    ACTIONS(39), 1,
      sym__float_literal,
    ACTIONS(41), 1,
      anon_sym_BQUOTE,
    ACTIONS(43), 1,
      anon_sym_DQUOTE,
    STATE(109), 1,
      sym_literal,
    STATE(25), 3,
      sym__numeric_literal,
      sym__vector_literal,
      sym__string_literal,
  [2839] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(37), 1,
      sym__integer_literal,
    ACTIONS(39), 1,
      sym__float_literal,
    ACTIONS(41), 1,
      anon_sym_BQUOTE,
    ACTIONS(43), 1,
      anon_sym_DQUOTE,
    STATE(104), 1,
      sym_literal,
    STATE(25), 3,
      sym__numeric_literal,
      sym__vector_literal,
      sym__string_literal,
  [2863] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(37), 1,
      sym__integer_literal,
    ACTIONS(39), 1,
      sym__float_literal,
    ACTIONS(41), 1,
      anon_sym_BQUOTE,
    ACTIONS(43), 1,
      anon_sym_DQUOTE,
    STATE(154), 1,
      sym_literal,
    STATE(25), 3,
      sym__numeric_literal,
      sym__vector_literal,
      sym__string_literal,
  [2887] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(37), 1,
      sym__integer_literal,
    ACTIONS(39), 1,
      sym__float_literal,
    ACTIONS(41), 1,
      anon_sym_BQUOTE,
    ACTIONS(43), 1,
      anon_sym_DQUOTE,
    STATE(106), 1,
      sym_literal,
    STATE(25), 3,
      sym__numeric_literal,
      sym__vector_literal,
      sym__string_literal,
  [2911] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(37), 1,
      sym__integer_literal,
    ACTIONS(39), 1,
      sym__float_literal,
    ACTIONS(41), 1,
      anon_sym_BQUOTE,
    ACTIONS(43), 1,
      anon_sym_DQUOTE,
    STATE(90), 1,
      sym_literal,
    STATE(25), 3,
      sym__numeric_literal,
      sym__vector_literal,
      sym__string_literal,
  [2935] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(37), 1,
      sym__integer_literal,
    ACTIONS(39), 1,
      sym__float_literal,
    ACTIONS(41), 1,
      anon_sym_BQUOTE,
    ACTIONS(43), 1,
      anon_sym_DQUOTE,
    STATE(94), 1,
      sym_literal,
    STATE(25), 3,
      sym__numeric_literal,
      sym__vector_literal,
      sym__string_literal,
  [2959] = 4,
    ACTIONS(3), 1,
      sym_comment,
    STATE(135), 1,
      sym__parameter,
    STATE(139), 1,
      sym_simple_type,
    ACTIONS(11), 6,
      anon_sym_void,
      anon_sym_entity,
      anon_sym_float,
      anon_sym_vector,
      anon_sym_string,
      anon_sym_int,
  [2977] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(37), 1,
      sym__integer_literal,
    ACTIONS(39), 1,
      sym__float_literal,
    ACTIONS(41), 1,
      anon_sym_BQUOTE,
    ACTIONS(43), 1,
      anon_sym_DQUOTE,
    STATE(91), 1,
      sym_literal,
    STATE(25), 3,
      sym__numeric_literal,
      sym__vector_literal,
      sym__string_literal,
  [3001] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(37), 1,
      sym__integer_literal,
    ACTIONS(39), 1,
      sym__float_literal,
    ACTIONS(41), 1,
      anon_sym_BQUOTE,
    ACTIONS(43), 1,
      anon_sym_DQUOTE,
    STATE(96), 1,
      sym_literal,
    STATE(25), 3,
      sym__numeric_literal,
      sym__vector_literal,
      sym__string_literal,
  [3025] = 3,
    ACTIONS(3), 1,
      sym_comment,
    STATE(148), 1,
      sym_simple_type,
    ACTIONS(11), 6,
      anon_sym_void,
      anon_sym_entity,
      anon_sym_float,
      anon_sym_vector,
      anon_sym_string,
      anon_sym_int,
  [3040] = 3,
    ACTIONS(3), 1,
      sym_comment,
    STATE(176), 1,
      sym_simple_type,
    ACTIONS(11), 6,
      anon_sym_void,
      anon_sym_entity,
      anon_sym_float,
      anon_sym_vector,
      anon_sym_string,
      anon_sym_int,
  [3055] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(240), 1,
      anon_sym_EQ,
    ACTIONS(242), 1,
      anon_sym_COMMA,
    STATE(103), 1,
      aux_sym_variable_definition_statement_repeat1,
    ACTIONS(238), 3,
      anon_sym_SEMI,
      anon_sym_else,
      anon_sym_while,
  [3073] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(242), 1,
      anon_sym_COMMA,
    ACTIONS(246), 1,
      anon_sym_EQ,
    STATE(102), 1,
      aux_sym_variable_definition_statement_repeat1,
    ACTIONS(244), 3,
      anon_sym_SEMI,
      anon_sym_else,
      anon_sym_while,
  [3091] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(242), 1,
      anon_sym_COMMA,
    ACTIONS(250), 1,
      anon_sym_EQ,
    STATE(93), 1,
      aux_sym_variable_definition_statement_repeat1,
    ACTIONS(248), 3,
      anon_sym_SEMI,
      anon_sym_else,
      anon_sym_while,
  [3109] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(242), 1,
      anon_sym_COMMA,
    ACTIONS(254), 1,
      anon_sym_EQ,
    STATE(92), 1,
      aux_sym_variable_definition_statement_repeat1,
    ACTIONS(252), 3,
      anon_sym_SEMI,
      anon_sym_else,
      anon_sym_while,
  [3127] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(242), 1,
      anon_sym_COMMA,
    STATE(93), 1,
      aux_sym_variable_definition_statement_repeat1,
    ACTIONS(248), 3,
      anon_sym_SEMI,
      anon_sym_else,
      anon_sym_while,
  [3142] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(242), 1,
      anon_sym_COMMA,
    STATE(95), 1,
      aux_sym_variable_definition_statement_repeat1,
    ACTIONS(256), 3,
      anon_sym_SEMI,
      anon_sym_else,
      anon_sym_while,
  [3157] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(242), 1,
      anon_sym_COMMA,
    STATE(98), 1,
      aux_sym_variable_definition_statement_repeat1,
    ACTIONS(256), 3,
      anon_sym_SEMI,
      anon_sym_else,
      anon_sym_while,
  [3172] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(242), 1,
      anon_sym_COMMA,
    STATE(98), 1,
      aux_sym_variable_definition_statement_repeat1,
    ACTIONS(252), 3,
      anon_sym_SEMI,
      anon_sym_else,
      anon_sym_while,
  [3187] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(242), 1,
      anon_sym_COMMA,
    STATE(92), 1,
      aux_sym_variable_definition_statement_repeat1,
    ACTIONS(252), 3,
      anon_sym_SEMI,
      anon_sym_else,
      anon_sym_while,
  [3202] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(242), 1,
      anon_sym_COMMA,
    STATE(98), 1,
      aux_sym_variable_definition_statement_repeat1,
    ACTIONS(258), 3,
      anon_sym_SEMI,
      anon_sym_else,
      anon_sym_while,
  [3217] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(242), 1,
      anon_sym_COMMA,
    STATE(101), 1,
      aux_sym_variable_definition_statement_repeat1,
    ACTIONS(258), 3,
      anon_sym_SEMI,
      anon_sym_else,
      anon_sym_while,
  [3232] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(262), 1,
      anon_sym_EQ,
    ACTIONS(264), 1,
      anon_sym_COMMA,
    ACTIONS(260), 3,
      anon_sym_SEMI,
      anon_sym_else,
      anon_sym_while,
  [3247] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(268), 1,
      anon_sym_COMMA,
    STATE(98), 1,
      aux_sym_variable_definition_statement_repeat1,
    ACTIONS(266), 3,
      anon_sym_SEMI,
      anon_sym_else,
      anon_sym_while,
  [3262] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(271), 1,
      anon_sym_EQ,
    ACTIONS(266), 4,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_else,
      anon_sym_while,
  [3275] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(275), 1,
      anon_sym_EQ,
    ACTIONS(277), 1,
      anon_sym_COMMA,
    ACTIONS(273), 3,
      anon_sym_SEMI,
      anon_sym_else,
      anon_sym_while,
  [3290] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(242), 1,
      anon_sym_COMMA,
    STATE(98), 1,
      aux_sym_variable_definition_statement_repeat1,
    ACTIONS(279), 3,
      anon_sym_SEMI,
      anon_sym_else,
      anon_sym_while,
  [3305] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(242), 1,
      anon_sym_COMMA,
    STATE(98), 1,
      aux_sym_variable_definition_statement_repeat1,
    ACTIONS(248), 3,
      anon_sym_SEMI,
      anon_sym_else,
      anon_sym_while,
  [3320] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(242), 1,
      anon_sym_COMMA,
    STATE(98), 1,
      aux_sym_variable_definition_statement_repeat1,
    ACTIONS(244), 3,
      anon_sym_SEMI,
      anon_sym_else,
      anon_sym_while,
  [3335] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(281), 4,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_else,
      anon_sym_while,
  [3345] = 4,
    ACTIONS(286), 1,
      aux_sym__string_literal_token3,
    ACTIONS(288), 1,
      sym_comment,
    STATE(105), 1,
      aux_sym__string_literal_repeat1,
    ACTIONS(283), 2,
      aux_sym__string_literal_token1,
      aux_sym__string_literal_token2,
  [3359] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(290), 1,
      anon_sym_COMMA,
    ACTIONS(238), 3,
      anon_sym_SEMI,
      anon_sym_else,
      anon_sym_while,
  [3371] = 4,
    ACTIONS(288), 1,
      sym_comment,
    ACTIONS(294), 1,
      aux_sym__string_literal_token3,
    STATE(108), 1,
      aux_sym__string_literal_repeat1,
    ACTIONS(292), 2,
      aux_sym__string_literal_token1,
      aux_sym__string_literal_token2,
  [3385] = 4,
    ACTIONS(288), 1,
      sym_comment,
    ACTIONS(298), 1,
      aux_sym__string_literal_token3,
    STATE(105), 1,
      aux_sym__string_literal_repeat1,
    ACTIONS(296), 2,
      aux_sym__string_literal_token1,
      aux_sym__string_literal_token2,
  [3399] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(300), 1,
      anon_sym_COMMA,
    ACTIONS(244), 3,
      anon_sym_SEMI,
      anon_sym_else,
      anon_sym_while,
  [3411] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(302), 3,
      anon_sym_SEMI,
      anon_sym_else,
      anon_sym_while,
  [3420] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(194), 1,
      anon_sym_RPAREN,
    ACTIONS(304), 1,
      anon_sym_COMMA,
    STATE(111), 1,
      aux_sym_funcall_expression_repeat1,
  [3433] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(307), 3,
      anon_sym_SEMI,
      anon_sym_else,
      anon_sym_while,
  [3442] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(309), 3,
      anon_sym_SEMI,
      anon_sym_else,
      anon_sym_while,
  [3451] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(311), 1,
      anon_sym_SEMI,
    ACTIONS(313), 1,
      anon_sym_COMMA,
    STATE(115), 1,
      aux_sym_variable_definition_repeat1,
  [3464] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(313), 1,
      anon_sym_COMMA,
    ACTIONS(315), 1,
      anon_sym_SEMI,
    STATE(128), 1,
      aux_sym_variable_definition_repeat1,
  [3477] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(317), 1,
      anon_sym_COMMA,
    ACTIONS(320), 1,
      anon_sym_RPAREN,
    STATE(116), 1,
      aux_sym_parameter_list_repeat1,
  [3490] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(313), 1,
      anon_sym_COMMA,
    ACTIONS(322), 1,
      anon_sym_SEMI,
    STATE(125), 1,
      aux_sym_variable_definition_repeat1,
  [3503] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(324), 1,
      sym__integer_literal,
    ACTIONS(326), 1,
      sym__float_literal,
    STATE(127), 1,
      sym__numeric_literal,
  [3516] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(328), 3,
      anon_sym_SEMI,
      anon_sym_else,
      anon_sym_while,
  [3525] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(330), 1,
      sym__integer_literal,
    ACTIONS(332), 1,
      sym__float_literal,
    STATE(118), 1,
      sym__numeric_literal,
  [3538] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(336), 1,
      anon_sym_else,
    ACTIONS(334), 2,
      anon_sym_SEMI,
      anon_sym_while,
  [3549] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(338), 1,
      anon_sym_COMMA,
    ACTIONS(340), 1,
      anon_sym_RPAREN,
    STATE(116), 1,
      aux_sym_parameter_list_repeat1,
  [3562] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(342), 1,
      anon_sym_SEMI,
    ACTIONS(344), 1,
      anon_sym_EQ,
    ACTIONS(346), 1,
      anon_sym_COMMA,
  [3575] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(348), 1,
      anon_sym_LPAREN,
    ACTIONS(350), 1,
      sym_identifier,
    STATE(146), 1,
      sym_parameter_list,
  [3588] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(313), 1,
      anon_sym_COMMA,
    ACTIONS(352), 1,
      anon_sym_SEMI,
    STATE(128), 1,
      aux_sym_variable_definition_repeat1,
  [3601] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(354), 3,
      anon_sym_SEMI,
      anon_sym_else,
      anon_sym_while,
  [3610] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(356), 1,
      sym__integer_literal,
    ACTIONS(358), 1,
      sym__float_literal,
    STATE(164), 1,
      sym__numeric_literal,
  [3623] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(360), 1,
      anon_sym_SEMI,
    ACTIONS(362), 1,
      anon_sym_COMMA,
    STATE(128), 1,
      aux_sym_variable_definition_repeat1,
  [3636] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(165), 1,
      anon_sym_COMMA,
    ACTIONS(365), 1,
      anon_sym_RPAREN,
    STATE(111), 1,
      aux_sym_funcall_expression_repeat1,
  [3649] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(367), 1,
      anon_sym_COMMA,
    ACTIONS(369), 1,
      anon_sym_RPAREN,
    STATE(122), 1,
      aux_sym_parameter_list_repeat1,
  [3662] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(371), 1,
      anon_sym_SEMI,
    ACTIONS(373), 1,
      anon_sym_COMMA,
  [3672] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(375), 2,
      anon_sym_SEMI,
      anon_sym_COMMA,
  [3680] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(377), 1,
      anon_sym_DOLLAR,
    STATE(179), 1,
      sym_frame_identifier,
  [3690] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(379), 1,
      anon_sym_SEMI,
    ACTIONS(381), 1,
      anon_sym_EQ,
  [3700] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(320), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [3708] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(383), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [3716] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(385), 2,
      anon_sym_LPAREN,
      sym_identifier,
  [3724] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(387), 1,
      sym_identifier,
  [3731] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(389), 1,
      sym_identifier,
  [3738] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(391), 1,
      sym_identifier,
  [3745] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(393), 1,
      sym_identifier,
  [3752] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(395), 1,
      anon_sym_DOT_DOT_DOT,
  [3759] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(397), 1,
      sym_identifier,
  [3766] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(399), 1,
      anon_sym_RBRACK,
  [3773] = 2,
    ACTIONS(288), 1,
      sym_comment,
    ACTIONS(401), 1,
      aux_sym_modelgen_pragma_token2,
  [3780] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(403), 1,
      sym_identifier,
  [3787] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(405), 1,
      anon_sym_DQUOTE,
  [3794] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(407), 1,
      sym_identifier,
  [3801] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(409), 1,
      sym_identifier,
  [3808] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(340), 1,
      anon_sym_RPAREN,
  [3815] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(411), 1,
      sym_identifier,
  [3822] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(413), 1,
      sym_identifier,
  [3829] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(415), 1,
      sym_identifier,
  [3836] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(417), 1,
      anon_sym_SEMI,
  [3843] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(419), 1,
      anon_sym_SEMI,
  [3850] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(421), 1,
      anon_sym_SEMI,
  [3857] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(423), 1,
      ts_builtin_sym_end,
  [3864] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(425), 1,
      anon_sym_LPAREN,
  [3871] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(427), 1,
      sym_identifier,
  [3878] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(429), 1,
      sym_identifier,
  [3885] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(431), 1,
      anon_sym_RPAREN,
  [3892] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(433), 1,
      sym_identifier,
  [3899] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(435), 1,
      anon_sym_COMMA,
  [3906] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(437), 1,
      anon_sym_BQUOTE,
  [3913] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(439), 1,
      sym_identifier,
  [3920] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(441), 1,
      anon_sym_DQUOTE,
  [3927] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(443), 1,
      aux_sym_modelgen_pragma_token1,
  [3934] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(445), 1,
      sym_identifier,
  [3941] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(447), 1,
      anon_sym_LPAREN,
  [3948] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(449), 1,
      anon_sym_LPAREN,
  [3955] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(451), 1,
      anon_sym_SEMI,
  [3962] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(453), 1,
      sym_identifier,
  [3969] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(455), 1,
      anon_sym_SEMI,
  [3976] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(457), 1,
      sym_identifier,
  [3983] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(459), 1,
      anon_sym_RPAREN,
  [3990] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(461), 1,
      sym_identifier,
  [3997] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(463), 1,
      anon_sym_while,
  [4004] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(465), 1,
      anon_sym_SEMI,
  [4011] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(467), 1,
      anon_sym_COMMA,
  [4018] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(469), 1,
      aux_sym_frame_identifier_token1,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 91,
  [SMALL_STATE(4)] = 179,
  [SMALL_STATE(5)] = 261,
  [SMALL_STATE(6)] = 343,
  [SMALL_STATE(7)] = 425,
  [SMALL_STATE(8)] = 507,
  [SMALL_STATE(9)] = 590,
  [SMALL_STATE(10)] = 673,
  [SMALL_STATE(11)] = 756,
  [SMALL_STATE(12)] = 787,
  [SMALL_STATE(13)] = 815,
  [SMALL_STATE(14)] = 857,
  [SMALL_STATE(15)] = 885,
  [SMALL_STATE(16)] = 913,
  [SMALL_STATE(17)] = 941,
  [SMALL_STATE(18)] = 969,
  [SMALL_STATE(19)] = 997,
  [SMALL_STATE(20)] = 1029,
  [SMALL_STATE(21)] = 1057,
  [SMALL_STATE(22)] = 1095,
  [SMALL_STATE(23)] = 1127,
  [SMALL_STATE(24)] = 1161,
  [SMALL_STATE(25)] = 1189,
  [SMALL_STATE(26)] = 1217,
  [SMALL_STATE(27)] = 1259,
  [SMALL_STATE(28)] = 1287,
  [SMALL_STATE(29)] = 1331,
  [SMALL_STATE(30)] = 1359,
  [SMALL_STATE(31)] = 1395,
  [SMALL_STATE(32)] = 1443,
  [SMALL_STATE(33)] = 1477,
  [SMALL_STATE(34)] = 1521,
  [SMALL_STATE(35)] = 1565,
  [SMALL_STATE(36)] = 1609,
  [SMALL_STATE(37)] = 1643,
  [SMALL_STATE(38)] = 1687,
  [SMALL_STATE(39)] = 1728,
  [SMALL_STATE(40)] = 1769,
  [SMALL_STATE(41)] = 1810,
  [SMALL_STATE(42)] = 1853,
  [SMALL_STATE(43)] = 1894,
  [SMALL_STATE(44)] = 1935,
  [SMALL_STATE(45)] = 1976,
  [SMALL_STATE(46)] = 2017,
  [SMALL_STATE(47)] = 2058,
  [SMALL_STATE(48)] = 2099,
  [SMALL_STATE(49)] = 2140,
  [SMALL_STATE(50)] = 2181,
  [SMALL_STATE(51)] = 2222,
  [SMALL_STATE(52)] = 2263,
  [SMALL_STATE(53)] = 2304,
  [SMALL_STATE(54)] = 2345,
  [SMALL_STATE(55)] = 2386,
  [SMALL_STATE(56)] = 2428,
  [SMALL_STATE(57)] = 2470,
  [SMALL_STATE(58)] = 2512,
  [SMALL_STATE(59)] = 2554,
  [SMALL_STATE(60)] = 2578,
  [SMALL_STATE(61)] = 2593,
  [SMALL_STATE(62)] = 2608,
  [SMALL_STATE(63)] = 2629,
  [SMALL_STATE(64)] = 2644,
  [SMALL_STATE(65)] = 2659,
  [SMALL_STATE(66)] = 2674,
  [SMALL_STATE(67)] = 2689,
  [SMALL_STATE(68)] = 2704,
  [SMALL_STATE(69)] = 2719,
  [SMALL_STATE(70)] = 2734,
  [SMALL_STATE(71)] = 2749,
  [SMALL_STATE(72)] = 2770,
  [SMALL_STATE(73)] = 2785,
  [SMALL_STATE(74)] = 2800,
  [SMALL_STATE(75)] = 2815,
  [SMALL_STATE(76)] = 2839,
  [SMALL_STATE(77)] = 2863,
  [SMALL_STATE(78)] = 2887,
  [SMALL_STATE(79)] = 2911,
  [SMALL_STATE(80)] = 2935,
  [SMALL_STATE(81)] = 2959,
  [SMALL_STATE(82)] = 2977,
  [SMALL_STATE(83)] = 3001,
  [SMALL_STATE(84)] = 3025,
  [SMALL_STATE(85)] = 3040,
  [SMALL_STATE(86)] = 3055,
  [SMALL_STATE(87)] = 3073,
  [SMALL_STATE(88)] = 3091,
  [SMALL_STATE(89)] = 3109,
  [SMALL_STATE(90)] = 3127,
  [SMALL_STATE(91)] = 3142,
  [SMALL_STATE(92)] = 3157,
  [SMALL_STATE(93)] = 3172,
  [SMALL_STATE(94)] = 3187,
  [SMALL_STATE(95)] = 3202,
  [SMALL_STATE(96)] = 3217,
  [SMALL_STATE(97)] = 3232,
  [SMALL_STATE(98)] = 3247,
  [SMALL_STATE(99)] = 3262,
  [SMALL_STATE(100)] = 3275,
  [SMALL_STATE(101)] = 3290,
  [SMALL_STATE(102)] = 3305,
  [SMALL_STATE(103)] = 3320,
  [SMALL_STATE(104)] = 3335,
  [SMALL_STATE(105)] = 3345,
  [SMALL_STATE(106)] = 3359,
  [SMALL_STATE(107)] = 3371,
  [SMALL_STATE(108)] = 3385,
  [SMALL_STATE(109)] = 3399,
  [SMALL_STATE(110)] = 3411,
  [SMALL_STATE(111)] = 3420,
  [SMALL_STATE(112)] = 3433,
  [SMALL_STATE(113)] = 3442,
  [SMALL_STATE(114)] = 3451,
  [SMALL_STATE(115)] = 3464,
  [SMALL_STATE(116)] = 3477,
  [SMALL_STATE(117)] = 3490,
  [SMALL_STATE(118)] = 3503,
  [SMALL_STATE(119)] = 3516,
  [SMALL_STATE(120)] = 3525,
  [SMALL_STATE(121)] = 3538,
  [SMALL_STATE(122)] = 3549,
  [SMALL_STATE(123)] = 3562,
  [SMALL_STATE(124)] = 3575,
  [SMALL_STATE(125)] = 3588,
  [SMALL_STATE(126)] = 3601,
  [SMALL_STATE(127)] = 3610,
  [SMALL_STATE(128)] = 3623,
  [SMALL_STATE(129)] = 3636,
  [SMALL_STATE(130)] = 3649,
  [SMALL_STATE(131)] = 3662,
  [SMALL_STATE(132)] = 3672,
  [SMALL_STATE(133)] = 3680,
  [SMALL_STATE(134)] = 3690,
  [SMALL_STATE(135)] = 3700,
  [SMALL_STATE(136)] = 3708,
  [SMALL_STATE(137)] = 3716,
  [SMALL_STATE(138)] = 3724,
  [SMALL_STATE(139)] = 3731,
  [SMALL_STATE(140)] = 3738,
  [SMALL_STATE(141)] = 3745,
  [SMALL_STATE(142)] = 3752,
  [SMALL_STATE(143)] = 3759,
  [SMALL_STATE(144)] = 3766,
  [SMALL_STATE(145)] = 3773,
  [SMALL_STATE(146)] = 3780,
  [SMALL_STATE(147)] = 3787,
  [SMALL_STATE(148)] = 3794,
  [SMALL_STATE(149)] = 3801,
  [SMALL_STATE(150)] = 3808,
  [SMALL_STATE(151)] = 3815,
  [SMALL_STATE(152)] = 3822,
  [SMALL_STATE(153)] = 3829,
  [SMALL_STATE(154)] = 3836,
  [SMALL_STATE(155)] = 3843,
  [SMALL_STATE(156)] = 3850,
  [SMALL_STATE(157)] = 3857,
  [SMALL_STATE(158)] = 3864,
  [SMALL_STATE(159)] = 3871,
  [SMALL_STATE(160)] = 3878,
  [SMALL_STATE(161)] = 3885,
  [SMALL_STATE(162)] = 3892,
  [SMALL_STATE(163)] = 3899,
  [SMALL_STATE(164)] = 3906,
  [SMALL_STATE(165)] = 3913,
  [SMALL_STATE(166)] = 3920,
  [SMALL_STATE(167)] = 3927,
  [SMALL_STATE(168)] = 3934,
  [SMALL_STATE(169)] = 3941,
  [SMALL_STATE(170)] = 3948,
  [SMALL_STATE(171)] = 3955,
  [SMALL_STATE(172)] = 3962,
  [SMALL_STATE(173)] = 3969,
  [SMALL_STATE(174)] = 3976,
  [SMALL_STATE(175)] = 3983,
  [SMALL_STATE(176)] = 3990,
  [SMALL_STATE(177)] = 3997,
  [SMALL_STATE(178)] = 4004,
  [SMALL_STATE(179)] = 4011,
  [SMALL_STATE(180)] = 4018,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT_EXTRA(),
  [5] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(84),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(167),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(137),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(133),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [19] = {.entry = {.count = 1, .reusable = false}}, SHIFT(169),
  [21] = {.entry = {.count = 1, .reusable = false}}, SHIFT(170),
  [23] = {.entry = {.count = 1, .reusable = false}}, SHIFT(6),
  [25] = {.entry = {.count = 1, .reusable = false}}, SHIFT(53),
  [27] = {.entry = {.count = 1, .reusable = false}}, SHIFT(85),
  [29] = {.entry = {.count = 1, .reusable = false}}, SHIFT(47),
  [31] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [33] = {.entry = {.count = 1, .reusable = false}}, SHIFT(137),
  [35] = {.entry = {.count = 1, .reusable = false}}, SHIFT(19),
  [37] = {.entry = {.count = 1, .reusable = false}}, SHIFT(25),
  [39] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [41] = {.entry = {.count = 1, .reusable = true}}, SHIFT(120),
  [43] = {.entry = {.count = 1, .reusable = true}}, SHIFT(107),
  [45] = {.entry = {.count = 1, .reusable = true}}, SHIFT(173),
  [47] = {.entry = {.count = 1, .reusable = true}}, SHIFT(156),
  [49] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__compound_statement_repeat1, 2), SHIFT_REPEAT(52),
  [52] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__compound_statement_repeat1, 2),
  [54] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__compound_statement_repeat1, 2), SHIFT_REPEAT(169),
  [57] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__compound_statement_repeat1, 2), SHIFT_REPEAT(170),
  [60] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__compound_statement_repeat1, 2), SHIFT_REPEAT(6),
  [63] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__compound_statement_repeat1, 2), SHIFT_REPEAT(53),
  [66] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__compound_statement_repeat1, 2), SHIFT_REPEAT(85),
  [69] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__compound_statement_repeat1, 2), SHIFT_REPEAT(47),
  [72] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__compound_statement_repeat1, 2), SHIFT_REPEAT(47),
  [75] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__compound_statement_repeat1, 2), SHIFT_REPEAT(137),
  [78] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__compound_statement_repeat1, 2), SHIFT_REPEAT(19),
  [81] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__compound_statement_repeat1, 2), SHIFT_REPEAT(25),
  [84] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__compound_statement_repeat1, 2), SHIFT_REPEAT(25),
  [87] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__compound_statement_repeat1, 2), SHIFT_REPEAT(120),
  [90] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__compound_statement_repeat1, 2), SHIFT_REPEAT(107),
  [93] = {.entry = {.count = 1, .reusable = true}}, SHIFT(112),
  [95] = {.entry = {.count = 1, .reusable = true}}, SHIFT(113),
  [97] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__expression, 1),
  [99] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [101] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__expression, 1),
  [103] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_binary_expression, 3),
  [105] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_binary_expression, 3),
  [107] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [109] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [111] = {.entry = {.count = 1, .reusable = false}}, SHIFT(48),
  [113] = {.entry = {.count = 1, .reusable = false}}, SHIFT(50),
  [115] = {.entry = {.count = 1, .reusable = false}}, SHIFT(49),
  [117] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [119] = {.entry = {.count = 1, .reusable = false}}, SHIFT(46),
  [121] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_unary_expression, 2),
  [123] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_unary_expression, 2),
  [125] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_funcall_expression, 4),
  [127] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_funcall_expression, 4),
  [129] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__string_literal, 3),
  [131] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__string_literal, 3),
  [133] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__compound_statement_repeat1, 2),
  [135] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parenthesized_expression, 3),
  [137] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_parenthesized_expression, 3),
  [139] = {.entry = {.count = 1, .reusable = false}}, SHIFT(39),
  [141] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__vector_literal, 5),
  [143] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__vector_literal, 5),
  [145] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_funcall_expression, 5),
  [147] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_funcall_expression, 5),
  [149] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_literal, 1),
  [151] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_literal, 1),
  [153] = {.entry = {.count = 1, .reusable = false}}, SHIFT(51),
  [155] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__string_literal, 4),
  [157] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__string_literal, 4),
  [159] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [161] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_funcall_expression, 3),
  [163] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_funcall_expression, 3),
  [165] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [167] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [169] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
  [171] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1),
  [173] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_assignment_statement, 3),
  [175] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_return_statement, 2),
  [177] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__expression_statement, 1),
  [179] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2),
  [181] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(84),
  [184] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(167),
  [187] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(137),
  [190] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [192] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [194] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_funcall_expression_repeat1, 2),
  [196] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [198] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [200] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [202] = {.entry = {.count = 1, .reusable = true}}, SHIFT(110),
  [204] = {.entry = {.count = 1, .reusable = true}}, SHIFT(142),
  [206] = {.entry = {.count = 1, .reusable = true}}, SHIFT(141),
  [208] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable_definition, 6, .production_id = 8),
  [210] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_field_definition, 4, .production_id = 2),
  [212] = {.entry = {.count = 1, .reusable = true}}, SHIFT(161),
  [214] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable_definition, 5, .production_id = 5),
  [216] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_constant_definition, 5, .production_id = 4),
  [218] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable_definition, 3, .production_id = 1),
  [220] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_definition, 6, .production_id = 3),
  [222] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_field_definition, 7, .production_id = 11),
  [224] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_definition, 6, .production_id = 10),
  [226] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_modelgen_pragma, 3),
  [228] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_field_definition, 6, .production_id = 6),
  [230] = {.entry = {.count = 1, .reusable = true}}, SHIFT(175),
  [232] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_declaration, 4, .production_id = 3),
  [234] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_definition, 11, .production_id = 3),
  [236] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_definition, 11, .production_id = 12),
  [238] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable_definition_statement, 4),
  [240] = {.entry = {.count = 1, .reusable = true}}, SHIFT(79),
  [242] = {.entry = {.count = 1, .reusable = true}}, SHIFT(153),
  [244] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable_definition_statement, 5),
  [246] = {.entry = {.count = 1, .reusable = true}}, SHIFT(80),
  [248] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable_definition_statement, 6),
  [250] = {.entry = {.count = 1, .reusable = true}}, SHIFT(82),
  [252] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable_definition_statement, 7),
  [254] = {.entry = {.count = 1, .reusable = true}}, SHIFT(83),
  [256] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable_definition_statement, 8),
  [258] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable_definition_statement, 9),
  [260] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable_definition_statement, 2),
  [262] = {.entry = {.count = 1, .reusable = true}}, SHIFT(78),
  [264] = {.entry = {.count = 1, .reusable = true}}, SHIFT(140),
  [266] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_variable_definition_statement_repeat1, 2),
  [268] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_variable_definition_statement_repeat1, 2), SHIFT_REPEAT(153),
  [271] = {.entry = {.count = 1, .reusable = true}}, SHIFT(76),
  [273] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable_definition_statement, 3),
  [275] = {.entry = {.count = 1, .reusable = true}}, SHIFT(75),
  [277] = {.entry = {.count = 1, .reusable = true}}, SHIFT(143),
  [279] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable_definition_statement, 10),
  [281] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_variable_definition_statement_repeat1, 4),
  [283] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__string_literal_repeat1, 2), SHIFT_REPEAT(105),
  [286] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__string_literal_repeat1, 2),
  [288] = {.entry = {.count = 1, .reusable = false}}, SHIFT_EXTRA(),
  [290] = {.entry = {.count = 1, .reusable = true}}, SHIFT(151),
  [292] = {.entry = {.count = 1, .reusable = false}}, SHIFT(108),
  [294] = {.entry = {.count = 1, .reusable = false}}, SHIFT(166),
  [296] = {.entry = {.count = 1, .reusable = false}}, SHIFT(105),
  [298] = {.entry = {.count = 1, .reusable = false}}, SHIFT(147),
  [300] = {.entry = {.count = 1, .reusable = true}}, SHIFT(159),
  [302] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_do_while_statement, 6),
  [304] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_funcall_expression_repeat1, 2), SHIFT_REPEAT(43),
  [307] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__compound_statement, 3),
  [309] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__compound_statement, 2),
  [311] = {.entry = {.count = 1, .reusable = true}}, SHIFT(70),
  [313] = {.entry = {.count = 1, .reusable = true}}, SHIFT(168),
  [315] = {.entry = {.count = 1, .reusable = true}}, SHIFT(67),
  [317] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_parameter_list_repeat1, 2), SHIFT_REPEAT(81),
  [320] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_parameter_list_repeat1, 2),
  [322] = {.entry = {.count = 1, .reusable = true}}, SHIFT(63),
  [324] = {.entry = {.count = 1, .reusable = false}}, SHIFT(127),
  [326] = {.entry = {.count = 1, .reusable = true}}, SHIFT(127),
  [328] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_while_statement, 5),
  [330] = {.entry = {.count = 1, .reusable = false}}, SHIFT(118),
  [332] = {.entry = {.count = 1, .reusable = true}}, SHIFT(118),
  [334] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_if_statement, 5),
  [336] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [338] = {.entry = {.count = 1, .reusable = true}}, SHIFT(71),
  [340] = {.entry = {.count = 1, .reusable = true}}, SHIFT(160),
  [342] = {.entry = {.count = 1, .reusable = true}}, SHIFT(65),
  [344] = {.entry = {.count = 1, .reusable = true}}, SHIFT(77),
  [346] = {.entry = {.count = 1, .reusable = true}}, SHIFT(138),
  [348] = {.entry = {.count = 1, .reusable = true}}, SHIFT(59),
  [350] = {.entry = {.count = 1, .reusable = true}}, SHIFT(123),
  [352] = {.entry = {.count = 1, .reusable = true}}, SHIFT(60),
  [354] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_if_statement, 7),
  [356] = {.entry = {.count = 1, .reusable = false}}, SHIFT(164),
  [358] = {.entry = {.count = 1, .reusable = true}}, SHIFT(164),
  [360] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_variable_definition_repeat1, 2, .production_id = 9),
  [362] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_variable_definition_repeat1, 2, .production_id = 9), SHIFT_REPEAT(168),
  [365] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [367] = {.entry = {.count = 1, .reusable = true}}, SHIFT(62),
  [369] = {.entry = {.count = 1, .reusable = true}}, SHIFT(152),
  [371] = {.entry = {.count = 1, .reusable = true}}, SHIFT(61),
  [373] = {.entry = {.count = 1, .reusable = true}}, SHIFT(149),
  [375] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_variable_definition_repeat1, 2, .production_id = 7),
  [377] = {.entry = {.count = 1, .reusable = true}}, SHIFT(180),
  [379] = {.entry = {.count = 1, .reusable = true}}, SHIFT(72),
  [381] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [383] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__parameter, 2),
  [385] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_simple_type, 1),
  [387] = {.entry = {.count = 1, .reusable = true}}, SHIFT(117),
  [389] = {.entry = {.count = 1, .reusable = true}}, SHIFT(136),
  [391] = {.entry = {.count = 1, .reusable = true}}, SHIFT(86),
  [393] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter_list, 2),
  [395] = {.entry = {.count = 1, .reusable = true}}, SHIFT(150),
  [397] = {.entry = {.count = 1, .reusable = true}}, SHIFT(87),
  [399] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [401] = {.entry = {.count = 1, .reusable = false}}, SHIFT(69),
  [403] = {.entry = {.count = 1, .reusable = true}}, SHIFT(134),
  [405] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [407] = {.entry = {.count = 1, .reusable = true}}, SHIFT(131),
  [409] = {.entry = {.count = 1, .reusable = true}}, SHIFT(114),
  [411] = {.entry = {.count = 1, .reusable = true}}, SHIFT(88),
  [413] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter_list, 3),
  [415] = {.entry = {.count = 1, .reusable = true}}, SHIFT(99),
  [417] = {.entry = {.count = 1, .reusable = true}}, SHIFT(64),
  [419] = {.entry = {.count = 1, .reusable = true}}, SHIFT(74),
  [421] = {.entry = {.count = 1, .reusable = true}}, SHIFT(73),
  [423] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [425] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [427] = {.entry = {.count = 1, .reusable = true}}, SHIFT(89),
  [429] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter_list, 4),
  [431] = {.entry = {.count = 1, .reusable = true}}, SHIFT(174),
  [433] = {.entry = {.count = 1, .reusable = true}}, SHIFT(144),
  [435] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_frame_identifier, 2),
  [437] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [439] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter_list, 6),
  [441] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [443] = {.entry = {.count = 1, .reusable = true}}, SHIFT(145),
  [445] = {.entry = {.count = 1, .reusable = true}}, SHIFT(132),
  [447] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [449] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [451] = {.entry = {.count = 1, .reusable = true}}, SHIFT(68),
  [453] = {.entry = {.count = 1, .reusable = true}}, SHIFT(97),
  [455] = {.entry = {.count = 1, .reusable = true}}, SHIFT(66),
  [457] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter_list, 5),
  [459] = {.entry = {.count = 1, .reusable = true}}, SHIFT(165),
  [461] = {.entry = {.count = 1, .reusable = true}}, SHIFT(100),
  [463] = {.entry = {.count = 1, .reusable = true}}, SHIFT(158),
  [465] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [467] = {.entry = {.count = 1, .reusable = true}}, SHIFT(162),
  [469] = {.entry = {.count = 1, .reusable = true}}, SHIFT(163),
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
