#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 161
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 88
#define ALIAS_COUNT 0
#define TOKEN_COUNT 51
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 11
#define PRODUCTION_ID_COUNT 1

enum {
  anon_sym_SEMI = 1,
  anon_sym_EQ = 2,
  anon_sym_LBRACK = 3,
  anon_sym_COMMA = 4,
  anon_sym_RBRACK = 5,
  anon_sym_DOT = 6,
  anon_sym_void = 7,
  anon_sym_entity = 8,
  anon_sym_float = 9,
  anon_sym_vector = 10,
  anon_sym_string = 11,
  anon_sym_int = 12,
  anon_sym_LPAREN = 13,
  anon_sym_RPAREN = 14,
  anon_sym_LBRACE = 15,
  anon_sym_RBRACE = 16,
  anon_sym_if = 17,
  anon_sym_else = 18,
  anon_sym_while = 19,
  anon_sym_do = 20,
  anon_sym_return = 21,
  anon_sym_local = 22,
  anon_sym_DASH = 23,
  anon_sym_PLUS = 24,
  anon_sym_STAR = 25,
  anon_sym_SLASH = 26,
  anon_sym_PIPE_PIPE = 27,
  anon_sym_AMP_AMP = 28,
  anon_sym_BANG = 29,
  anon_sym_PIPE = 30,
  anon_sym_AMP = 31,
  anon_sym_EQ_EQ = 32,
  anon_sym_BANG_EQ = 33,
  anon_sym_GT = 34,
  anon_sym_GT_EQ = 35,
  anon_sym_LT_EQ = 36,
  anon_sym_LT = 37,
  anon_sym_DOLLAR = 38,
  aux_sym_frame_identifier_token1 = 39,
  sym_identifier = 40,
  aux_sym__numeric_literal_token1 = 41,
  aux_sym__numeric_literal_token2 = 42,
  aux_sym__vector_literal_token1 = 43,
  aux_sym__vector_literal_token2 = 44,
  anon_sym_DQUOTE = 45,
  aux_sym__string_literal_token1 = 46,
  aux_sym__string_literal_token2 = 47,
  aux_sym__string_literal_token3 = 48,
  sym__builtin_literal = 49,
  sym_comment = 50,
  sym_source_file = 51,
  sym__definition = 52,
  sym_function_declaration = 53,
  sym_function_definition = 54,
  sym_constant_definition = 55,
  sym_variable_definition = 56,
  sym_field_definition = 57,
  sym_simple_type = 58,
  sym_parameter_list = 59,
  sym__parameter = 60,
  sym__statement = 61,
  sym__compound_statement = 62,
  sym__simple_statement = 63,
  sym_assignment_statement = 64,
  sym_if_statement = 65,
  sym_while_statement = 66,
  sym_do_while_statement = 67,
  sym_return_statement = 68,
  sym_variable_definition_statement = 69,
  sym__expression_statement = 70,
  sym__expression = 71,
  sym_unary_expression = 72,
  sym_binary_expression = 73,
  sym_funcall_expression = 74,
  sym_parenthesized_expression = 75,
  sym_frame_identifier = 76,
  sym_literal = 77,
  sym__numeric_literal = 78,
  sym__vector_literal = 79,
  sym__string_literal = 80,
  aux_sym_source_file_repeat1 = 81,
  aux_sym_variable_definition_repeat1 = 82,
  aux_sym_parameter_list_repeat1 = 83,
  aux_sym__compound_statement_repeat1 = 84,
  aux_sym_variable_definition_statement_repeat1 = 85,
  aux_sym_funcall_expression_repeat1 = 86,
  aux_sym__string_literal_repeat1 = 87,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [anon_sym_SEMI] = ";",
  [anon_sym_EQ] = "=",
  [anon_sym_LBRACK] = "[",
  [anon_sym_COMMA] = ",",
  [anon_sym_RBRACK] = "]",
  [anon_sym_DOT] = ".",
  [anon_sym_void] = "void",
  [anon_sym_entity] = "entity",
  [anon_sym_float] = "float",
  [anon_sym_vector] = "vector",
  [anon_sym_string] = "string",
  [anon_sym_int] = "int",
  [anon_sym_LPAREN] = "(",
  [anon_sym_RPAREN] = ")",
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
  [anon_sym_DOLLAR] = "$",
  [aux_sym_frame_identifier_token1] = "frame_identifier_token1",
  [sym_identifier] = "identifier",
  [aux_sym__numeric_literal_token1] = "_numeric_literal_token1",
  [aux_sym__numeric_literal_token2] = "_numeric_literal_token2",
  [aux_sym__vector_literal_token1] = "_vector_literal_token1",
  [aux_sym__vector_literal_token2] = "_vector_literal_token2",
  [anon_sym_DQUOTE] = "\"",
  [aux_sym__string_literal_token1] = "_string_literal_token1",
  [aux_sym__string_literal_token2] = "_string_literal_token2",
  [aux_sym__string_literal_token3] = "_string_literal_token3",
  [sym__builtin_literal] = "_builtin_literal",
  [sym_comment] = "comment",
  [sym_source_file] = "source_file",
  [sym__definition] = "_definition",
  [sym_function_declaration] = "function_declaration",
  [sym_function_definition] = "function_definition",
  [sym_constant_definition] = "constant_definition",
  [sym_variable_definition] = "variable_definition",
  [sym_field_definition] = "field_definition",
  [sym_simple_type] = "simple_type",
  [sym_parameter_list] = "parameter_list",
  [sym__parameter] = "_parameter",
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
  [sym_frame_identifier] = "frame_identifier",
  [sym_literal] = "literal",
  [sym__numeric_literal] = "_numeric_literal",
  [sym__vector_literal] = "_vector_literal",
  [sym__string_literal] = "_string_literal",
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
  [anon_sym_void] = anon_sym_void,
  [anon_sym_entity] = anon_sym_entity,
  [anon_sym_float] = anon_sym_float,
  [anon_sym_vector] = anon_sym_vector,
  [anon_sym_string] = anon_sym_string,
  [anon_sym_int] = anon_sym_int,
  [anon_sym_LPAREN] = anon_sym_LPAREN,
  [anon_sym_RPAREN] = anon_sym_RPAREN,
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
  [anon_sym_DOLLAR] = anon_sym_DOLLAR,
  [aux_sym_frame_identifier_token1] = aux_sym_frame_identifier_token1,
  [sym_identifier] = sym_identifier,
  [aux_sym__numeric_literal_token1] = aux_sym__numeric_literal_token1,
  [aux_sym__numeric_literal_token2] = aux_sym__numeric_literal_token2,
  [aux_sym__vector_literal_token1] = aux_sym__vector_literal_token1,
  [aux_sym__vector_literal_token2] = aux_sym__vector_literal_token2,
  [anon_sym_DQUOTE] = anon_sym_DQUOTE,
  [aux_sym__string_literal_token1] = aux_sym__string_literal_token1,
  [aux_sym__string_literal_token2] = aux_sym__string_literal_token2,
  [aux_sym__string_literal_token3] = aux_sym__string_literal_token3,
  [sym__builtin_literal] = sym__builtin_literal,
  [sym_comment] = sym_comment,
  [sym_source_file] = sym_source_file,
  [sym__definition] = sym__definition,
  [sym_function_declaration] = sym_function_declaration,
  [sym_function_definition] = sym_function_definition,
  [sym_constant_definition] = sym_constant_definition,
  [sym_variable_definition] = sym_variable_definition,
  [sym_field_definition] = sym_field_definition,
  [sym_simple_type] = sym_simple_type,
  [sym_parameter_list] = sym_parameter_list,
  [sym__parameter] = sym__parameter,
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
  [sym_frame_identifier] = sym_frame_identifier,
  [sym_literal] = sym_literal,
  [sym__numeric_literal] = sym__numeric_literal,
  [sym__vector_literal] = sym__vector_literal,
  [sym__string_literal] = sym__string_literal,
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
  [anon_sym_LPAREN] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RPAREN] = {
    .visible = true,
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
  [anon_sym_DOLLAR] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_frame_identifier_token1] = {
    .visible = false,
    .named = false,
  },
  [sym_identifier] = {
    .visible = true,
    .named = true,
  },
  [aux_sym__numeric_literal_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__numeric_literal_token2] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__vector_literal_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__vector_literal_token2] = {
    .visible = false,
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
  [sym__builtin_literal] = {
    .visible = false,
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
  [sym_simple_type] = {
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
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(83);
      if (lookahead == '!') ADVANCE(124);
      if (lookahead == '"') ADVANCE(177);
      if (lookahead == '#') ADVANCE(73);
      if (lookahead == '$') ADVANCE(133);
      if (lookahead == '&') ADVANCE(126);
      if (lookahead == '(') ADVANCE(102);
      if (lookahead == ')') ADVANCE(103);
      if (lookahead == '*') ADVANCE(120);
      if (lookahead == '+') ADVANCE(119);
      if (lookahead == ',') ADVANCE(87);
      if (lookahead == '-') ADVANCE(118);
      if (lookahead == '.') ADVANCE(89);
      if (lookahead == '/') ADVANCE(121);
      if (lookahead == ';') ADVANCE(84);
      if (lookahead == '<') ADVANCE(132);
      if (lookahead == '=') ADVANCE(85);
      if (lookahead == '>') ADVANCE(129);
      if (lookahead == '[') ADVANCE(86);
      if (lookahead == '\\') ADVANCE(2);
      if (lookahead == ']') ADVANCE(88);
      if (lookahead == '`') ADVANCE(22);
      if (lookahead == 'd') ADVANCE(56);
      if (lookahead == 'e') ADVANCE(50);
      if (lookahead == 'f') ADVANCE(52);
      if (lookahead == 'i') ADVANCE(42);
      if (lookahead == 'l') ADVANCE(57);
      if (lookahead == 'r') ADVANCE(41);
      if (lookahead == 's') ADVANCE(64);
      if (lookahead == 'v') ADVANCE(40);
      if (lookahead == 'w') ADVANCE(44);
      if (lookahead == '{') ADVANCE(104);
      if (lookahead == '|') ADVANCE(125);
      if (lookahead == '}') ADVANCE(105);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(173);
      END_STATE();
    case 1:
      if (lookahead == '\n') SKIP(15)
      END_STATE();
    case 2:
      if (lookahead == '\n') SKIP(15)
      if (lookahead == '\r') SKIP(1)
      if (lookahead == 'n' ||
          lookahead == 'r') ADVANCE(183);
      END_STATE();
    case 3:
      if (lookahead == '\n') SKIP(17)
      END_STATE();
    case 4:
      if (lookahead == '\n') SKIP(17)
      if (lookahead == '\r') SKIP(3)
      END_STATE();
    case 5:
      if (lookahead == '\n') SKIP(16)
      END_STATE();
    case 6:
      if (lookahead == '\n') SKIP(16)
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
      if (lookahead == '\n') SKIP(29)
      END_STATE();
    case 10:
      if (lookahead == '\n') SKIP(29)
      if (lookahead == '\r') SKIP(9)
      END_STATE();
    case 11:
      if (lookahead == ' ') ADVANCE(25);
      if (lookahead == '.') ADVANCE(80);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(11);
      END_STATE();
    case 12:
      if (lookahead == ' ') ADVANCE(23);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(12);
      END_STATE();
    case 13:
      if (lookahead == ' ') ADVANCE(24);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(13);
      END_STATE();
    case 14:
      if (lookahead == ' ') ADVANCE(26);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(14);
      END_STATE();
    case 15:
      if (lookahead == '!') ADVANCE(124);
      if (lookahead == '"') ADVANCE(177);
      if (lookahead == '#') ADVANCE(73);
      if (lookahead == '$') ADVANCE(133);
      if (lookahead == '&') ADVANCE(126);
      if (lookahead == '(') ADVANCE(102);
      if (lookahead == ')') ADVANCE(103);
      if (lookahead == '*') ADVANCE(120);
      if (lookahead == '+') ADVANCE(119);
      if (lookahead == ',') ADVANCE(87);
      if (lookahead == '-') ADVANCE(118);
      if (lookahead == '.') ADVANCE(89);
      if (lookahead == '/') ADVANCE(121);
      if (lookahead == ';') ADVANCE(84);
      if (lookahead == '<') ADVANCE(132);
      if (lookahead == '=') ADVANCE(85);
      if (lookahead == '>') ADVANCE(129);
      if (lookahead == '[') ADVANCE(86);
      if (lookahead == '\\') ADVANCE(2);
      if (lookahead == ']') ADVANCE(88);
      if (lookahead == '`') ADVANCE(22);
      if (lookahead == 'd') ADVANCE(56);
      if (lookahead == 'e') ADVANCE(50);
      if (lookahead == 'f') ADVANCE(52);
      if (lookahead == 'i') ADVANCE(42);
      if (lookahead == 'l') ADVANCE(57);
      if (lookahead == 'r') ADVANCE(41);
      if (lookahead == 's') ADVANCE(64);
      if (lookahead == 'v') ADVANCE(40);
      if (lookahead == 'w') ADVANCE(44);
      if (lookahead == '{') ADVANCE(104);
      if (lookahead == '|') ADVANCE(125);
      if (lookahead == '}') ADVANCE(105);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(15)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(173);
      END_STATE();
    case 16:
      if (lookahead == '!') ADVANCE(124);
      if (lookahead == '&') ADVANCE(126);
      if (lookahead == '(') ADVANCE(102);
      if (lookahead == ')') ADVANCE(103);
      if (lookahead == '*') ADVANCE(120);
      if (lookahead == '+') ADVANCE(119);
      if (lookahead == ',') ADVANCE(87);
      if (lookahead == '-') ADVANCE(117);
      if (lookahead == '/') ADVANCE(121);
      if (lookahead == ';') ADVANCE(84);
      if (lookahead == '<') ADVANCE(132);
      if (lookahead == '=') ADVANCE(85);
      if (lookahead == '>') ADVANCE(129);
      if (lookahead == '\\') SKIP(6)
      if (lookahead == 'e') ADVANCE(49);
      if (lookahead == 'w') ADVANCE(44);
      if (lookahead == '|') ADVANCE(125);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(16)
      END_STATE();
    case 17:
      if (lookahead == '"') ADVANCE(177);
      if (lookahead == '#') ADVANCE(73);
      if (lookahead == '(') ADVANCE(102);
      if (lookahead == '+') ADVANCE(119);
      if (lookahead == '-') ADVANCE(118);
      if (lookahead == '/') ADVANCE(19);
      if (lookahead == '[') ADVANCE(86);
      if (lookahead == '\\') SKIP(4)
      if (lookahead == '`') ADVANCE(22);
      if (lookahead == 'd') ADVANCE(156);
      if (lookahead == 'e') ADVANCE(155);
      if (lookahead == 'f') ADVANCE(152);
      if (lookahead == 'i') ADVANCE(143);
      if (lookahead == 'l') ADVANCE(157);
      if (lookahead == 'r') ADVANCE(142);
      if (lookahead == 's') ADVANCE(163);
      if (lookahead == 'v') ADVANCE(141);
      if (lookahead == 'w') ADVANCE(145);
      if (lookahead == '{') ADVANCE(104);
      if (lookahead == '}') ADVANCE(105);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(17)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(173);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(172);
      END_STATE();
    case 18:
      if (lookahead == '"') ADVANCE(177);
      if (lookahead == '(') ADVANCE(102);
      if (lookahead == ')') ADVANCE(103);
      if (lookahead == '+') ADVANCE(119);
      if (lookahead == '-') ADVANCE(118);
      if (lookahead == '/') ADVANCE(19);
      if (lookahead == '\\') SKIP(8)
      if (lookahead == '`') ADVANCE(22);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(18)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(173);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(172);
      END_STATE();
    case 19:
      if (lookahead == '*') ADVANCE(21);
      if (lookahead == '/') ADVANCE(195);
      END_STATE();
    case 20:
      if (lookahead == '*') ADVANCE(20);
      if (lookahead == '/') ADVANCE(194);
      if (lookahead != 0) ADVANCE(21);
      END_STATE();
    case 21:
      if (lookahead == '*') ADVANCE(20);
      if (lookahead != 0) ADVANCE(21);
      END_STATE();
    case 22:
      if (lookahead == '-') ADVANCE(74);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(11);
      END_STATE();
    case 23:
      if (lookahead == '-') ADVANCE(77);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(31);
      END_STATE();
    case 24:
      if (lookahead == '-') ADVANCE(78);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(28);
      END_STATE();
    case 25:
      if (lookahead == '-') ADVANCE(76);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(12);
      END_STATE();
    case 26:
      if (lookahead == '-') ADVANCE(81);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(27);
      END_STATE();
    case 27:
      if (lookahead == '.') ADVANCE(79);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(27);
      END_STATE();
    case 28:
      if (lookahead == '.') ADVANCE(82);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(28);
      END_STATE();
    case 29:
      if (lookahead == '/') ADVANCE(19);
      if (lookahead == '\\') SKIP(10)
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(29)
      END_STATE();
    case 30:
      if (lookahead == '/') ADVANCE(19);
      if (lookahead == '\\') SKIP(10)
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(29)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(134);
      END_STATE();
    case 31:
      if (lookahead == '`') ADVANCE(175);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(31);
      END_STATE();
    case 32:
      if (lookahead == '`') ADVANCE(176);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(32);
      END_STATE();
    case 33:
      if (lookahead == 'a') ADVANCE(51);
      END_STATE();
    case 34:
      if (lookahead == 'a') ADVANCE(68);
      END_STATE();
    case 35:
      if (lookahead == 'c') ADVANCE(33);
      END_STATE();
    case 36:
      if (lookahead == 'c') ADVANCE(70);
      END_STATE();
    case 37:
      if (lookahead == 'd') ADVANCE(90);
      END_STATE();
    case 38:
      if (lookahead == 'e') ADVANCE(108);
      END_STATE();
    case 39:
      if (lookahead == 'e') ADVANCE(109);
      END_STATE();
    case 40:
      if (lookahead == 'e') ADVANCE(36);
      if (lookahead == 'o') ADVANCE(45);
      END_STATE();
    case 41:
      if (lookahead == 'e') ADVANCE(66);
      END_STATE();
    case 42:
      if (lookahead == 'f') ADVANCE(106);
      if (lookahead == 'n') ADVANCE(65);
      END_STATE();
    case 43:
      if (lookahead == 'g') ADVANCE(98);
      END_STATE();
    case 44:
      if (lookahead == 'h') ADVANCE(47);
      END_STATE();
    case 45:
      if (lookahead == 'i') ADVANCE(37);
      END_STATE();
    case 46:
      if (lookahead == 'i') ADVANCE(54);
      END_STATE();
    case 47:
      if (lookahead == 'i') ADVANCE(53);
      END_STATE();
    case 48:
      if (lookahead == 'i') ADVANCE(67);
      END_STATE();
    case 49:
      if (lookahead == 'l') ADVANCE(63);
      END_STATE();
    case 50:
      if (lookahead == 'l') ADVANCE(63);
      if (lookahead == 'n') ADVANCE(69);
      END_STATE();
    case 51:
      if (lookahead == 'l') ADVANCE(115);
      END_STATE();
    case 52:
      if (lookahead == 'l') ADVANCE(58);
      END_STATE();
    case 53:
      if (lookahead == 'l') ADVANCE(39);
      END_STATE();
    case 54:
      if (lookahead == 'n') ADVANCE(43);
      END_STATE();
    case 55:
      if (lookahead == 'n') ADVANCE(113);
      END_STATE();
    case 56:
      if (lookahead == 'o') ADVANCE(111);
      END_STATE();
    case 57:
      if (lookahead == 'o') ADVANCE(35);
      END_STATE();
    case 58:
      if (lookahead == 'o') ADVANCE(34);
      END_STATE();
    case 59:
      if (lookahead == 'o') ADVANCE(60);
      END_STATE();
    case 60:
      if (lookahead == 'r') ADVANCE(96);
      END_STATE();
    case 61:
      if (lookahead == 'r') ADVANCE(55);
      END_STATE();
    case 62:
      if (lookahead == 'r') ADVANCE(46);
      END_STATE();
    case 63:
      if (lookahead == 's') ADVANCE(38);
      END_STATE();
    case 64:
      if (lookahead == 't') ADVANCE(62);
      END_STATE();
    case 65:
      if (lookahead == 't') ADVANCE(100);
      END_STATE();
    case 66:
      if (lookahead == 't') ADVANCE(71);
      END_STATE();
    case 67:
      if (lookahead == 't') ADVANCE(72);
      END_STATE();
    case 68:
      if (lookahead == 't') ADVANCE(94);
      END_STATE();
    case 69:
      if (lookahead == 't') ADVANCE(48);
      END_STATE();
    case 70:
      if (lookahead == 't') ADVANCE(59);
      END_STATE();
    case 71:
      if (lookahead == 'u') ADVANCE(61);
      END_STATE();
    case 72:
      if (lookahead == 'y') ADVANCE(92);
      END_STATE();
    case 73:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(193);
      END_STATE();
    case 74:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(11);
      END_STATE();
    case 75:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(174);
      END_STATE();
    case 76:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(12);
      END_STATE();
    case 77:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(31);
      END_STATE();
    case 78:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(28);
      END_STATE();
    case 79:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(32);
      END_STATE();
    case 80:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(13);
      END_STATE();
    case 81:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(27);
      END_STATE();
    case 82:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(14);
      END_STATE();
    case 83:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 84:
      ACCEPT_TOKEN(anon_sym_SEMI);
      END_STATE();
    case 85:
      ACCEPT_TOKEN(anon_sym_EQ);
      if (lookahead == '=') ADVANCE(127);
      END_STATE();
    case 86:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 87:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 88:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 89:
      ACCEPT_TOKEN(anon_sym_DOT);
      END_STATE();
    case 90:
      ACCEPT_TOKEN(anon_sym_void);
      END_STATE();
    case 91:
      ACCEPT_TOKEN(anon_sym_void);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(172);
      END_STATE();
    case 92:
      ACCEPT_TOKEN(anon_sym_entity);
      END_STATE();
    case 93:
      ACCEPT_TOKEN(anon_sym_entity);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(172);
      END_STATE();
    case 94:
      ACCEPT_TOKEN(anon_sym_float);
      END_STATE();
    case 95:
      ACCEPT_TOKEN(anon_sym_float);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(172);
      END_STATE();
    case 96:
      ACCEPT_TOKEN(anon_sym_vector);
      END_STATE();
    case 97:
      ACCEPT_TOKEN(anon_sym_vector);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(172);
      END_STATE();
    case 98:
      ACCEPT_TOKEN(anon_sym_string);
      END_STATE();
    case 99:
      ACCEPT_TOKEN(anon_sym_string);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(172);
      END_STATE();
    case 100:
      ACCEPT_TOKEN(anon_sym_int);
      END_STATE();
    case 101:
      ACCEPT_TOKEN(anon_sym_int);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(172);
      END_STATE();
    case 102:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 103:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 104:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 105:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 106:
      ACCEPT_TOKEN(anon_sym_if);
      END_STATE();
    case 107:
      ACCEPT_TOKEN(anon_sym_if);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(172);
      END_STATE();
    case 108:
      ACCEPT_TOKEN(anon_sym_else);
      END_STATE();
    case 109:
      ACCEPT_TOKEN(anon_sym_while);
      END_STATE();
    case 110:
      ACCEPT_TOKEN(anon_sym_while);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(172);
      END_STATE();
    case 111:
      ACCEPT_TOKEN(anon_sym_do);
      END_STATE();
    case 112:
      ACCEPT_TOKEN(anon_sym_do);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(172);
      END_STATE();
    case 113:
      ACCEPT_TOKEN(anon_sym_return);
      END_STATE();
    case 114:
      ACCEPT_TOKEN(anon_sym_return);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(172);
      END_STATE();
    case 115:
      ACCEPT_TOKEN(anon_sym_local);
      END_STATE();
    case 116:
      ACCEPT_TOKEN(anon_sym_local);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(172);
      END_STATE();
    case 117:
      ACCEPT_TOKEN(anon_sym_DASH);
      END_STATE();
    case 118:
      ACCEPT_TOKEN(anon_sym_DASH);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(173);
      END_STATE();
    case 119:
      ACCEPT_TOKEN(anon_sym_PLUS);
      END_STATE();
    case 120:
      ACCEPT_TOKEN(anon_sym_STAR);
      END_STATE();
    case 121:
      ACCEPT_TOKEN(anon_sym_SLASH);
      if (lookahead == '*') ADVANCE(21);
      if (lookahead == '/') ADVANCE(195);
      END_STATE();
    case 122:
      ACCEPT_TOKEN(anon_sym_PIPE_PIPE);
      END_STATE();
    case 123:
      ACCEPT_TOKEN(anon_sym_AMP_AMP);
      END_STATE();
    case 124:
      ACCEPT_TOKEN(anon_sym_BANG);
      if (lookahead == '=') ADVANCE(128);
      END_STATE();
    case 125:
      ACCEPT_TOKEN(anon_sym_PIPE);
      if (lookahead == '|') ADVANCE(122);
      END_STATE();
    case 126:
      ACCEPT_TOKEN(anon_sym_AMP);
      if (lookahead == '&') ADVANCE(123);
      END_STATE();
    case 127:
      ACCEPT_TOKEN(anon_sym_EQ_EQ);
      END_STATE();
    case 128:
      ACCEPT_TOKEN(anon_sym_BANG_EQ);
      END_STATE();
    case 129:
      ACCEPT_TOKEN(anon_sym_GT);
      if (lookahead == '=') ADVANCE(130);
      END_STATE();
    case 130:
      ACCEPT_TOKEN(anon_sym_GT_EQ);
      END_STATE();
    case 131:
      ACCEPT_TOKEN(anon_sym_LT_EQ);
      END_STATE();
    case 132:
      ACCEPT_TOKEN(anon_sym_LT);
      if (lookahead == '=') ADVANCE(131);
      END_STATE();
    case 133:
      ACCEPT_TOKEN(anon_sym_DOLLAR);
      END_STATE();
    case 134:
      ACCEPT_TOKEN(aux_sym_frame_identifier_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(134);
      END_STATE();
    case 135:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(150);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(172);
      END_STATE();
    case 136:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(167);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(172);
      END_STATE();
    case 137:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'c') ADVANCE(135);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(172);
      END_STATE();
    case 138:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'c') ADVANCE(169);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(172);
      END_STATE();
    case 139:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'd') ADVANCE(91);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(172);
      END_STATE();
    case 140:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(110);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(172);
      END_STATE();
    case 141:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(138);
      if (lookahead == 'o') ADVANCE(146);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(172);
      END_STATE();
    case 142:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(165);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(172);
      END_STATE();
    case 143:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'f') ADVANCE(107);
      if (lookahead == 'n') ADVANCE(164);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(172);
      END_STATE();
    case 144:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'g') ADVANCE(99);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(172);
      END_STATE();
    case 145:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'h') ADVANCE(148);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(172);
      END_STATE();
    case 146:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(139);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(172);
      END_STATE();
    case 147:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(153);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(172);
      END_STATE();
    case 148:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(151);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(172);
      END_STATE();
    case 149:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(166);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(172);
      END_STATE();
    case 150:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(116);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(172);
      END_STATE();
    case 151:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(140);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(172);
      END_STATE();
    case 152:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(158);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(172);
      END_STATE();
    case 153:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(144);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(172);
      END_STATE();
    case 154:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(114);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(172);
      END_STATE();
    case 155:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(168);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(172);
      END_STATE();
    case 156:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(112);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(172);
      END_STATE();
    case 157:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(137);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(172);
      END_STATE();
    case 158:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(136);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(172);
      END_STATE();
    case 159:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(160);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(172);
      END_STATE();
    case 160:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(97);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(172);
      END_STATE();
    case 161:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(154);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(172);
      END_STATE();
    case 162:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(147);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(172);
      END_STATE();
    case 163:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(162);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(172);
      END_STATE();
    case 164:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(101);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(172);
      END_STATE();
    case 165:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(170);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(172);
      END_STATE();
    case 166:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(171);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(172);
      END_STATE();
    case 167:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(95);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(172);
      END_STATE();
    case 168:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(149);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(172);
      END_STATE();
    case 169:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(159);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(172);
      END_STATE();
    case 170:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'u') ADVANCE(161);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(172);
      END_STATE();
    case 171:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'y') ADVANCE(93);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(172);
      END_STATE();
    case 172:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(172);
      END_STATE();
    case 173:
      ACCEPT_TOKEN(aux_sym__numeric_literal_token1);
      if (lookahead == '.') ADVANCE(75);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(173);
      END_STATE();
    case 174:
      ACCEPT_TOKEN(aux_sym__numeric_literal_token2);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(174);
      END_STATE();
    case 175:
      ACCEPT_TOKEN(aux_sym__vector_literal_token1);
      END_STATE();
    case 176:
      ACCEPT_TOKEN(aux_sym__vector_literal_token2);
      END_STATE();
    case 177:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 178:
      ACCEPT_TOKEN(aux_sym__string_literal_token1);
      if (lookahead == '*') ADVANCE(180);
      if (lookahead == '/') ADVANCE(182);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(182);
      END_STATE();
    case 179:
      ACCEPT_TOKEN(aux_sym__string_literal_token1);
      if (lookahead == '*') ADVANCE(179);
      if (lookahead == '/') ADVANCE(182);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(180);
      END_STATE();
    case 180:
      ACCEPT_TOKEN(aux_sym__string_literal_token1);
      if (lookahead == '*') ADVANCE(179);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(180);
      END_STATE();
    case 181:
      ACCEPT_TOKEN(aux_sym__string_literal_token1);
      if (lookahead == '/') ADVANCE(178);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(181);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(182);
      END_STATE();
    case 182:
      ACCEPT_TOKEN(aux_sym__string_literal_token1);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(182);
      END_STATE();
    case 183:
      ACCEPT_TOKEN(aux_sym__string_literal_token2);
      END_STATE();
    case 184:
      ACCEPT_TOKEN(aux_sym__string_literal_token3);
      if (lookahead == '\n') ADVANCE(191);
      if (lookahead == '\r') ADVANCE(186);
      if (lookahead == 'n' ||
          lookahead == 'r') ADVANCE(183);
      if (lookahead != 0 &&
          lookahead != '"') ADVANCE(192);
      END_STATE();
    case 185:
      ACCEPT_TOKEN(aux_sym__string_literal_token3);
      if (lookahead == '\n') ADVANCE(191);
      if (lookahead == '/') ADVANCE(178);
      if (lookahead == '\\') ADVANCE(184);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(181);
      if (lookahead != 0 &&
          lookahead != '"') ADVANCE(182);
      END_STATE();
    case 186:
      ACCEPT_TOKEN(aux_sym__string_literal_token3);
      if (lookahead == '\n') ADVANCE(191);
      if (lookahead != 0 &&
          lookahead != '"') ADVANCE(192);
      END_STATE();
    case 187:
      ACCEPT_TOKEN(aux_sym__string_literal_token3);
      if (lookahead == '\n') ADVANCE(192);
      if (lookahead == '"') ADVANCE(195);
      if (lookahead != 0) ADVANCE(187);
      END_STATE();
    case 188:
      ACCEPT_TOKEN(aux_sym__string_literal_token3);
      if (lookahead == '"') ADVANCE(21);
      if (lookahead == '*') ADVANCE(188);
      if (lookahead == '/') ADVANCE(192);
      if (lookahead != 0) ADVANCE(189);
      END_STATE();
    case 189:
      ACCEPT_TOKEN(aux_sym__string_literal_token3);
      if (lookahead == '"') ADVANCE(21);
      if (lookahead == '*') ADVANCE(188);
      if (lookahead != 0) ADVANCE(189);
      END_STATE();
    case 190:
      ACCEPT_TOKEN(aux_sym__string_literal_token3);
      if (lookahead == '*') ADVANCE(189);
      if (lookahead == '/') ADVANCE(187);
      if (lookahead != 0 &&
          lookahead != '"') ADVANCE(192);
      END_STATE();
    case 191:
      ACCEPT_TOKEN(aux_sym__string_literal_token3);
      if (lookahead == '/') ADVANCE(190);
      if (lookahead == '\\') ADVANCE(184);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(191);
      if (lookahead != 0 &&
          lookahead != '"') ADVANCE(192);
      END_STATE();
    case 192:
      ACCEPT_TOKEN(aux_sym__string_literal_token3);
      if (lookahead != 0 &&
          lookahead != '"') ADVANCE(192);
      END_STATE();
    case 193:
      ACCEPT_TOKEN(sym__builtin_literal);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(193);
      END_STATE();
    case 194:
      ACCEPT_TOKEN(sym_comment);
      END_STATE();
    case 195:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(195);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 0},
  [2] = {.lex_state = 17},
  [3] = {.lex_state = 17},
  [4] = {.lex_state = 17},
  [5] = {.lex_state = 17},
  [6] = {.lex_state = 17},
  [7] = {.lex_state = 17},
  [8] = {.lex_state = 17},
  [9] = {.lex_state = 17},
  [10] = {.lex_state = 17},
  [11] = {.lex_state = 16},
  [12] = {.lex_state = 17},
  [13] = {.lex_state = 16},
  [14] = {.lex_state = 16},
  [15] = {.lex_state = 16},
  [16] = {.lex_state = 16},
  [17] = {.lex_state = 16},
  [18] = {.lex_state = 16},
  [19] = {.lex_state = 16},
  [20] = {.lex_state = 16},
  [21] = {.lex_state = 16},
  [22] = {.lex_state = 16},
  [23] = {.lex_state = 16},
  [24] = {.lex_state = 16},
  [25] = {.lex_state = 16},
  [26] = {.lex_state = 16},
  [27] = {.lex_state = 16},
  [28] = {.lex_state = 16},
  [29] = {.lex_state = 16},
  [30] = {.lex_state = 18},
  [31] = {.lex_state = 18},
  [32] = {.lex_state = 18},
  [33] = {.lex_state = 18},
  [34] = {.lex_state = 16},
  [35] = {.lex_state = 18},
  [36] = {.lex_state = 18},
  [37] = {.lex_state = 18},
  [38] = {.lex_state = 18},
  [39] = {.lex_state = 18},
  [40] = {.lex_state = 18},
  [41] = {.lex_state = 18},
  [42] = {.lex_state = 18},
  [43] = {.lex_state = 18},
  [44] = {.lex_state = 16},
  [45] = {.lex_state = 16},
  [46] = {.lex_state = 18},
  [47] = {.lex_state = 16},
  [48] = {.lex_state = 18},
  [49] = {.lex_state = 18},
  [50] = {.lex_state = 18},
  [51] = {.lex_state = 16},
  [52] = {.lex_state = 16},
  [53] = {.lex_state = 16},
  [54] = {.lex_state = 0},
  [55] = {.lex_state = 16},
  [56] = {.lex_state = 0},
  [57] = {.lex_state = 16},
  [58] = {.lex_state = 0},
  [59] = {.lex_state = 0},
  [60] = {.lex_state = 0},
  [61] = {.lex_state = 0},
  [62] = {.lex_state = 0},
  [63] = {.lex_state = 0},
  [64] = {.lex_state = 0},
  [65] = {.lex_state = 0},
  [66] = {.lex_state = 0},
  [67] = {.lex_state = 0},
  [68] = {.lex_state = 0},
  [69] = {.lex_state = 0},
  [70] = {.lex_state = 0},
  [71] = {.lex_state = 0},
  [72] = {.lex_state = 0},
  [73] = {.lex_state = 0},
  [74] = {.lex_state = 0},
  [75] = {.lex_state = 0},
  [76] = {.lex_state = 0},
  [77] = {.lex_state = 0},
  [78] = {.lex_state = 0},
  [79] = {.lex_state = 0},
  [80] = {.lex_state = 0},
  [81] = {.lex_state = 0},
  [82] = {.lex_state = 0},
  [83] = {.lex_state = 0},
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
  [99] = {.lex_state = 185},
  [100] = {.lex_state = 0},
  [101] = {.lex_state = 185},
  [102] = {.lex_state = 185},
  [103] = {.lex_state = 0},
  [104] = {.lex_state = 0},
  [105] = {.lex_state = 0},
  [106] = {.lex_state = 0},
  [107] = {.lex_state = 0},
  [108] = {.lex_state = 0},
  [109] = {.lex_state = 0},
  [110] = {.lex_state = 0},
  [111] = {.lex_state = 0},
  [112] = {.lex_state = 0},
  [113] = {.lex_state = 0},
  [114] = {.lex_state = 0},
  [115] = {.lex_state = 0},
  [116] = {.lex_state = 0},
  [117] = {.lex_state = 0},
  [118] = {.lex_state = 18},
  [119] = {.lex_state = 0},
  [120] = {.lex_state = 0},
  [121] = {.lex_state = 0},
  [122] = {.lex_state = 0},
  [123] = {.lex_state = 0},
  [124] = {.lex_state = 0},
  [125] = {.lex_state = 0},
  [126] = {.lex_state = 0},
  [127] = {.lex_state = 18},
  [128] = {.lex_state = 0},
  [129] = {.lex_state = 18},
  [130] = {.lex_state = 0},
  [131] = {.lex_state = 18},
  [132] = {.lex_state = 0},
  [133] = {.lex_state = 0},
  [134] = {.lex_state = 30},
  [135] = {.lex_state = 18},
  [136] = {.lex_state = 18},
  [137] = {.lex_state = 18},
  [138] = {.lex_state = 0},
  [139] = {.lex_state = 0},
  [140] = {.lex_state = 18},
  [141] = {.lex_state = 18},
  [142] = {.lex_state = 18},
  [143] = {.lex_state = 18},
  [144] = {.lex_state = 0},
  [145] = {.lex_state = 0},
  [146] = {.lex_state = 18},
  [147] = {.lex_state = 18},
  [148] = {.lex_state = 18},
  [149] = {.lex_state = 0},
  [150] = {.lex_state = 0},
  [151] = {.lex_state = 18},
  [152] = {.lex_state = 18},
  [153] = {.lex_state = 0},
  [154] = {.lex_state = 18},
  [155] = {.lex_state = 0},
  [156] = {.lex_state = 18},
  [157] = {.lex_state = 18},
  [158] = {.lex_state = 0},
  [159] = {.lex_state = 0},
  [160] = {.lex_state = 0},
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
    [anon_sym_void] = ACTIONS(1),
    [anon_sym_entity] = ACTIONS(1),
    [anon_sym_float] = ACTIONS(1),
    [anon_sym_vector] = ACTIONS(1),
    [anon_sym_string] = ACTIONS(1),
    [anon_sym_int] = ACTIONS(1),
    [anon_sym_LPAREN] = ACTIONS(1),
    [anon_sym_RPAREN] = ACTIONS(1),
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
    [anon_sym_DOLLAR] = ACTIONS(1),
    [aux_sym__numeric_literal_token1] = ACTIONS(1),
    [aux_sym__numeric_literal_token2] = ACTIONS(1),
    [aux_sym__vector_literal_token1] = ACTIONS(1),
    [aux_sym__vector_literal_token2] = ACTIONS(1),
    [anon_sym_DQUOTE] = ACTIONS(1),
    [aux_sym__string_literal_token2] = ACTIONS(1),
    [sym__builtin_literal] = ACTIONS(1),
    [sym_comment] = ACTIONS(3),
  },
  [1] = {
    [sym_source_file] = STATE(133),
    [sym__definition] = STATE(56),
    [sym_function_declaration] = STATE(56),
    [sym_function_definition] = STATE(56),
    [sym_constant_definition] = STATE(56),
    [sym_variable_definition] = STATE(56),
    [sym_field_definition] = STATE(56),
    [sym_simple_type] = STATE(118),
    [aux_sym_source_file_repeat1] = STATE(56),
    [ts_builtin_sym_end] = ACTIONS(5),
    [anon_sym_DOT] = ACTIONS(7),
    [anon_sym_void] = ACTIONS(9),
    [anon_sym_entity] = ACTIONS(9),
    [anon_sym_float] = ACTIONS(9),
    [anon_sym_vector] = ACTIONS(9),
    [anon_sym_string] = ACTIONS(9),
    [anon_sym_int] = ACTIONS(9),
    [sym_comment] = ACTIONS(3),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 21,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(11), 1,
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
    ACTIONS(33), 1,
      sym_identifier,
    ACTIONS(35), 1,
      aux_sym__numeric_literal_token1,
    ACTIONS(39), 1,
      anon_sym_DQUOTE,
    ACTIONS(41), 1,
      sym__builtin_literal,
    STATE(147), 1,
      sym_simple_type,
    ACTIONS(37), 3,
      aux_sym__numeric_literal_token2,
      aux_sym__vector_literal_token1,
      aux_sym__vector_literal_token2,
    STATE(27), 3,
      sym__numeric_literal,
      sym__vector_literal,
      sym__string_literal,
    ACTIONS(13), 6,
      anon_sym_void,
      anon_sym_entity,
      anon_sym_float,
      anon_sym_vector,
      anon_sym_string,
      anon_sym_int,
    STATE(45), 6,
      sym__expression,
      sym_unary_expression,
      sym_binary_expression,
      sym_funcall_expression,
      sym_parenthesized_expression,
      sym_literal,
    STATE(145), 10,
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
  [87] = 20,
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
    ACTIONS(33), 1,
      sym_identifier,
    ACTIONS(35), 1,
      aux_sym__numeric_literal_token1,
    ACTIONS(39), 1,
      anon_sym_DQUOTE,
    ACTIONS(43), 1,
      sym__builtin_literal,
    STATE(147), 1,
      sym_simple_type,
    ACTIONS(37), 3,
      aux_sym__numeric_literal_token2,
      aux_sym__vector_literal_token1,
      aux_sym__vector_literal_token2,
    STATE(27), 3,
      sym__numeric_literal,
      sym__vector_literal,
      sym__string_literal,
    ACTIONS(13), 6,
      anon_sym_void,
      anon_sym_entity,
      anon_sym_float,
      anon_sym_vector,
      anon_sym_string,
      anon_sym_int,
    STATE(45), 6,
      sym__expression,
      sym_unary_expression,
      sym_binary_expression,
      sym_funcall_expression,
      sym_parenthesized_expression,
      sym_literal,
    STATE(139), 10,
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
  [171] = 19,
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
    ACTIONS(33), 1,
      sym_identifier,
    ACTIONS(35), 1,
      aux_sym__numeric_literal_token1,
    ACTIONS(39), 1,
      anon_sym_DQUOTE,
    STATE(147), 1,
      sym_simple_type,
    ACTIONS(37), 3,
      aux_sym__numeric_literal_token2,
      aux_sym__vector_literal_token1,
      aux_sym__vector_literal_token2,
    STATE(27), 3,
      sym__numeric_literal,
      sym__vector_literal,
      sym__string_literal,
    ACTIONS(13), 6,
      anon_sym_void,
      anon_sym_entity,
      anon_sym_float,
      anon_sym_vector,
      anon_sym_string,
      anon_sym_int,
    STATE(45), 6,
      sym__expression,
      sym_unary_expression,
      sym_binary_expression,
      sym_funcall_expression,
      sym_parenthesized_expression,
      sym_literal,
    STATE(108), 10,
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
  [252] = 19,
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
    ACTIONS(33), 1,
      sym_identifier,
    ACTIONS(35), 1,
      aux_sym__numeric_literal_token1,
    ACTIONS(39), 1,
      anon_sym_DQUOTE,
    STATE(147), 1,
      sym_simple_type,
    ACTIONS(37), 3,
      aux_sym__numeric_literal_token2,
      aux_sym__vector_literal_token1,
      aux_sym__vector_literal_token2,
    STATE(27), 3,
      sym__numeric_literal,
      sym__vector_literal,
      sym__string_literal,
    ACTIONS(13), 6,
      anon_sym_void,
      anon_sym_entity,
      anon_sym_float,
      anon_sym_vector,
      anon_sym_string,
      anon_sym_int,
    STATE(45), 6,
      sym__expression,
      sym_unary_expression,
      sym_binary_expression,
      sym_funcall_expression,
      sym_parenthesized_expression,
      sym_literal,
    STATE(115), 10,
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
  [333] = 19,
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
    ACTIONS(33), 1,
      sym_identifier,
    ACTIONS(35), 1,
      aux_sym__numeric_literal_token1,
    ACTIONS(39), 1,
      anon_sym_DQUOTE,
    STATE(147), 1,
      sym_simple_type,
    ACTIONS(37), 3,
      aux_sym__numeric_literal_token2,
      aux_sym__vector_literal_token1,
      aux_sym__vector_literal_token2,
    STATE(27), 3,
      sym__numeric_literal,
      sym__vector_literal,
      sym__string_literal,
    ACTIONS(13), 6,
      anon_sym_void,
      anon_sym_entity,
      anon_sym_float,
      anon_sym_vector,
      anon_sym_string,
      anon_sym_int,
    STATE(45), 6,
      sym__expression,
      sym_unary_expression,
      sym_binary_expression,
      sym_funcall_expression,
      sym_parenthesized_expression,
      sym_literal,
    STATE(117), 10,
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
  [414] = 19,
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
    ACTIONS(33), 1,
      sym_identifier,
    ACTIONS(35), 1,
      aux_sym__numeric_literal_token1,
    ACTIONS(39), 1,
      anon_sym_DQUOTE,
    STATE(147), 1,
      sym_simple_type,
    ACTIONS(37), 3,
      aux_sym__numeric_literal_token2,
      aux_sym__vector_literal_token1,
      aux_sym__vector_literal_token2,
    STATE(27), 3,
      sym__numeric_literal,
      sym__vector_literal,
      sym__string_literal,
    ACTIONS(13), 6,
      anon_sym_void,
      anon_sym_entity,
      anon_sym_float,
      anon_sym_vector,
      anon_sym_string,
      anon_sym_int,
    STATE(45), 6,
      sym__expression,
      sym_unary_expression,
      sym_binary_expression,
      sym_funcall_expression,
      sym_parenthesized_expression,
      sym_literal,
    STATE(158), 10,
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
  [495] = 20,
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
    ACTIONS(33), 1,
      sym_identifier,
    ACTIONS(35), 1,
      aux_sym__numeric_literal_token1,
    ACTIONS(39), 1,
      anon_sym_DQUOTE,
    ACTIONS(45), 1,
      anon_sym_RBRACE,
    STATE(10), 1,
      aux_sym__compound_statement_repeat1,
    STATE(147), 1,
      sym_simple_type,
    ACTIONS(37), 3,
      aux_sym__numeric_literal_token2,
      aux_sym__vector_literal_token1,
      aux_sym__vector_literal_token2,
    STATE(27), 3,
      sym__numeric_literal,
      sym__vector_literal,
      sym__string_literal,
    ACTIONS(13), 6,
      anon_sym_void,
      anon_sym_entity,
      anon_sym_float,
      anon_sym_vector,
      anon_sym_string,
      anon_sym_int,
    STATE(45), 6,
      sym__expression,
      sym_unary_expression,
      sym_binary_expression,
      sym_funcall_expression,
      sym_parenthesized_expression,
      sym_literal,
    STATE(159), 8,
      sym__simple_statement,
      sym_assignment_statement,
      sym_if_statement,
      sym_while_statement,
      sym_do_while_statement,
      sym_return_statement,
      sym_variable_definition_statement,
      sym__expression_statement,
  [577] = 20,
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
    ACTIONS(33), 1,
      sym_identifier,
    ACTIONS(35), 1,
      aux_sym__numeric_literal_token1,
    ACTIONS(39), 1,
      anon_sym_DQUOTE,
    ACTIONS(47), 1,
      anon_sym_RBRACE,
    STATE(8), 1,
      aux_sym__compound_statement_repeat1,
    STATE(147), 1,
      sym_simple_type,
    ACTIONS(37), 3,
      aux_sym__numeric_literal_token2,
      aux_sym__vector_literal_token1,
      aux_sym__vector_literal_token2,
    STATE(27), 3,
      sym__numeric_literal,
      sym__vector_literal,
      sym__string_literal,
    ACTIONS(13), 6,
      anon_sym_void,
      anon_sym_entity,
      anon_sym_float,
      anon_sym_vector,
      anon_sym_string,
      anon_sym_int,
    STATE(45), 6,
      sym__expression,
      sym_unary_expression,
      sym_binary_expression,
      sym_funcall_expression,
      sym_parenthesized_expression,
      sym_literal,
    STATE(159), 8,
      sym__simple_statement,
      sym_assignment_statement,
      sym_if_statement,
      sym_while_statement,
      sym_do_while_statement,
      sym_return_statement,
      sym_variable_definition_statement,
      sym__expression_statement,
  [659] = 20,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(52), 1,
      anon_sym_LPAREN,
    ACTIONS(55), 1,
      anon_sym_RBRACE,
    ACTIONS(57), 1,
      anon_sym_if,
    ACTIONS(60), 1,
      anon_sym_while,
    ACTIONS(63), 1,
      anon_sym_do,
    ACTIONS(66), 1,
      anon_sym_return,
    ACTIONS(69), 1,
      anon_sym_local,
    ACTIONS(72), 1,
      anon_sym_DASH,
    ACTIONS(75), 1,
      anon_sym_PLUS,
    ACTIONS(78), 1,
      sym_identifier,
    ACTIONS(81), 1,
      aux_sym__numeric_literal_token1,
    ACTIONS(87), 1,
      anon_sym_DQUOTE,
    STATE(10), 1,
      aux_sym__compound_statement_repeat1,
    STATE(147), 1,
      sym_simple_type,
    ACTIONS(84), 3,
      aux_sym__numeric_literal_token2,
      aux_sym__vector_literal_token1,
      aux_sym__vector_literal_token2,
    STATE(27), 3,
      sym__numeric_literal,
      sym__vector_literal,
      sym__string_literal,
    ACTIONS(49), 6,
      anon_sym_void,
      anon_sym_entity,
      anon_sym_float,
      anon_sym_vector,
      anon_sym_string,
      anon_sym_int,
    STATE(45), 6,
      sym__expression,
      sym_unary_expression,
      sym_binary_expression,
      sym_funcall_expression,
      sym_parenthesized_expression,
      sym_literal,
    STATE(159), 8,
      sym__simple_statement,
      sym_assignment_statement,
      sym_if_statement,
      sym_while_statement,
      sym_do_while_statement,
      sym_return_statement,
      sym_variable_definition_statement,
      sym__expression_statement,
  [741] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(92), 1,
      anon_sym_LPAREN,
    ACTIONS(94), 6,
      anon_sym_SLASH,
      anon_sym_BANG,
      anon_sym_PIPE,
      anon_sym_AMP,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(90), 14,
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
  [772] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(55), 7,
      anon_sym_LPAREN,
      anon_sym_RBRACE,
      anon_sym_PLUS,
      aux_sym__numeric_literal_token2,
      aux_sym__vector_literal_token1,
      aux_sym__vector_literal_token2,
      anon_sym_DQUOTE,
    ACTIONS(96), 14,
      anon_sym_void,
      anon_sym_entity,
      anon_sym_float,
      anon_sym_vector,
      anon_sym_string,
      anon_sym_int,
      anon_sym_if,
      anon_sym_while,
      anon_sym_do,
      anon_sym_return,
      anon_sym_local,
      anon_sym_DASH,
      sym_identifier,
      aux_sym__numeric_literal_token1,
  [801] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(102), 1,
      anon_sym_STAR,
    ACTIONS(104), 1,
      anon_sym_SLASH,
    ACTIONS(106), 1,
      anon_sym_AMP_AMP,
    ACTIONS(108), 1,
      anon_sym_BANG,
    ACTIONS(110), 1,
      anon_sym_PIPE,
    ACTIONS(112), 1,
      anon_sym_AMP,
    ACTIONS(100), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(116), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(114), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
    ACTIONS(98), 6,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_else,
      anon_sym_while,
      anon_sym_PIPE_PIPE,
  [845] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(102), 1,
      anon_sym_STAR,
    ACTIONS(104), 1,
      anon_sym_SLASH,
    ACTIONS(108), 1,
      anon_sym_BANG,
    ACTIONS(110), 1,
      anon_sym_PIPE,
    ACTIONS(112), 1,
      anon_sym_AMP,
    ACTIONS(100), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(116), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(114), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
    ACTIONS(98), 7,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_else,
      anon_sym_while,
      anon_sym_PIPE_PIPE,
      anon_sym_AMP_AMP,
  [887] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(118), 6,
      anon_sym_SLASH,
      anon_sym_BANG,
      anon_sym_PIPE,
      anon_sym_AMP,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(98), 14,
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
  [915] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(102), 1,
      anon_sym_STAR,
    ACTIONS(104), 1,
      anon_sym_SLASH,
    ACTIONS(110), 1,
      anon_sym_PIPE,
    ACTIONS(112), 1,
      anon_sym_AMP,
    ACTIONS(118), 3,
      anon_sym_BANG,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(98), 13,
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
  [951] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(122), 6,
      anon_sym_SLASH,
      anon_sym_BANG,
      anon_sym_PIPE,
      anon_sym_AMP,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(120), 14,
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
  [979] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(126), 6,
      anon_sym_SLASH,
      anon_sym_BANG,
      anon_sym_PIPE,
      anon_sym_AMP,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(124), 14,
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
  [1007] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(102), 1,
      anon_sym_STAR,
    ACTIONS(104), 1,
      anon_sym_SLASH,
    ACTIONS(110), 1,
      anon_sym_PIPE,
    ACTIONS(112), 1,
      anon_sym_AMP,
    ACTIONS(118), 1,
      anon_sym_BANG,
    ACTIONS(100), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(116), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(114), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
    ACTIONS(98), 7,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_else,
      anon_sym_while,
      anon_sym_PIPE_PIPE,
      anon_sym_AMP_AMP,
  [1049] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(130), 6,
      anon_sym_SLASH,
      anon_sym_BANG,
      anon_sym_PIPE,
      anon_sym_AMP,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(128), 14,
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
  [1077] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(134), 6,
      anon_sym_SLASH,
      anon_sym_BANG,
      anon_sym_PIPE,
      anon_sym_AMP,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(132), 14,
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
  [1105] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(138), 6,
      anon_sym_SLASH,
      anon_sym_BANG,
      anon_sym_PIPE,
      anon_sym_AMP,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(136), 14,
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
  [1133] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(102), 1,
      anon_sym_STAR,
    ACTIONS(104), 1,
      anon_sym_SLASH,
    ACTIONS(112), 1,
      anon_sym_AMP,
    ACTIONS(118), 4,
      anon_sym_BANG,
      anon_sym_PIPE,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(98), 13,
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
  [1167] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(142), 6,
      anon_sym_SLASH,
      anon_sym_BANG,
      anon_sym_PIPE,
      anon_sym_AMP,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(140), 14,
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
  [1195] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(92), 1,
      anon_sym_LPAREN,
    ACTIONS(144), 1,
      anon_sym_EQ,
    ACTIONS(94), 6,
      anon_sym_SLASH,
      anon_sym_BANG,
      anon_sym_PIPE,
      anon_sym_AMP,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(90), 12,
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
  [1227] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(102), 1,
      anon_sym_STAR,
    ACTIONS(104), 1,
      anon_sym_SLASH,
    ACTIONS(118), 5,
      anon_sym_BANG,
      anon_sym_PIPE,
      anon_sym_AMP,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(98), 13,
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
  [1259] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(148), 6,
      anon_sym_SLASH,
      anon_sym_BANG,
      anon_sym_PIPE,
      anon_sym_AMP,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(146), 14,
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
  [1287] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(102), 1,
      anon_sym_STAR,
    ACTIONS(104), 1,
      anon_sym_SLASH,
    ACTIONS(110), 1,
      anon_sym_PIPE,
    ACTIONS(112), 1,
      anon_sym_AMP,
    ACTIONS(100), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(118), 3,
      anon_sym_BANG,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(98), 11,
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
  [1325] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(152), 6,
      anon_sym_SLASH,
      anon_sym_BANG,
      anon_sym_PIPE,
      anon_sym_AMP,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(150), 14,
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
  [1353] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(15), 1,
      anon_sym_LPAREN,
    ACTIONS(29), 1,
      anon_sym_DASH,
    ACTIONS(31), 1,
      anon_sym_PLUS,
    ACTIONS(35), 1,
      aux_sym__numeric_literal_token1,
    ACTIONS(39), 1,
      anon_sym_DQUOTE,
    ACTIONS(154), 1,
      anon_sym_RPAREN,
    ACTIONS(156), 1,
      sym_identifier,
    ACTIONS(37), 3,
      aux_sym__numeric_literal_token2,
      aux_sym__vector_literal_token1,
      aux_sym__vector_literal_token2,
    STATE(27), 3,
      sym__numeric_literal,
      sym__vector_literal,
      sym__string_literal,
    STATE(47), 6,
      sym__expression,
      sym_unary_expression,
      sym_binary_expression,
      sym_funcall_expression,
      sym_parenthesized_expression,
      sym_literal,
  [1396] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(15), 1,
      anon_sym_LPAREN,
    ACTIONS(29), 1,
      anon_sym_DASH,
    ACTIONS(31), 1,
      anon_sym_PLUS,
    ACTIONS(35), 1,
      aux_sym__numeric_literal_token1,
    ACTIONS(39), 1,
      anon_sym_DQUOTE,
    ACTIONS(156), 1,
      sym_identifier,
    ACTIONS(37), 3,
      aux_sym__numeric_literal_token2,
      aux_sym__vector_literal_token1,
      aux_sym__vector_literal_token2,
    STATE(27), 3,
      sym__numeric_literal,
      sym__vector_literal,
      sym__string_literal,
    STATE(51), 6,
      sym__expression,
      sym_unary_expression,
      sym_binary_expression,
      sym_funcall_expression,
      sym_parenthesized_expression,
      sym_literal,
  [1436] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(15), 1,
      anon_sym_LPAREN,
    ACTIONS(29), 1,
      anon_sym_DASH,
    ACTIONS(31), 1,
      anon_sym_PLUS,
    ACTIONS(35), 1,
      aux_sym__numeric_literal_token1,
    ACTIONS(39), 1,
      anon_sym_DQUOTE,
    ACTIONS(156), 1,
      sym_identifier,
    ACTIONS(37), 3,
      aux_sym__numeric_literal_token2,
      aux_sym__vector_literal_token1,
      aux_sym__vector_literal_token2,
    STATE(27), 3,
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
  [1476] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(15), 1,
      anon_sym_LPAREN,
    ACTIONS(29), 1,
      anon_sym_DASH,
    ACTIONS(31), 1,
      anon_sym_PLUS,
    ACTIONS(35), 1,
      aux_sym__numeric_literal_token1,
    ACTIONS(39), 1,
      anon_sym_DQUOTE,
    ACTIONS(156), 1,
      sym_identifier,
    ACTIONS(37), 3,
      aux_sym__numeric_literal_token2,
      aux_sym__vector_literal_token1,
      aux_sym__vector_literal_token2,
    STATE(27), 3,
      sym__numeric_literal,
      sym__vector_literal,
      sym__string_literal,
    STATE(44), 6,
      sym__expression,
      sym_unary_expression,
      sym_binary_expression,
      sym_funcall_expression,
      sym_parenthesized_expression,
      sym_literal,
  [1516] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(102), 1,
      anon_sym_STAR,
    ACTIONS(104), 1,
      anon_sym_SLASH,
    ACTIONS(106), 1,
      anon_sym_AMP_AMP,
    ACTIONS(108), 1,
      anon_sym_BANG,
    ACTIONS(110), 1,
      anon_sym_PIPE,
    ACTIONS(112), 1,
      anon_sym_AMP,
    ACTIONS(160), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(100), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(116), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(158), 3,
      anon_sym_SEMI,
      anon_sym_else,
      anon_sym_while,
    ACTIONS(114), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
  [1560] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(15), 1,
      anon_sym_LPAREN,
    ACTIONS(29), 1,
      anon_sym_DASH,
    ACTIONS(31), 1,
      anon_sym_PLUS,
    ACTIONS(35), 1,
      aux_sym__numeric_literal_token1,
    ACTIONS(39), 1,
      anon_sym_DQUOTE,
    ACTIONS(156), 1,
      sym_identifier,
    ACTIONS(37), 3,
      aux_sym__numeric_literal_token2,
      aux_sym__vector_literal_token1,
      aux_sym__vector_literal_token2,
    STATE(27), 3,
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
  [1600] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(15), 1,
      anon_sym_LPAREN,
    ACTIONS(29), 1,
      anon_sym_DASH,
    ACTIONS(31), 1,
      anon_sym_PLUS,
    ACTIONS(35), 1,
      aux_sym__numeric_literal_token1,
    ACTIONS(39), 1,
      anon_sym_DQUOTE,
    ACTIONS(156), 1,
      sym_identifier,
    ACTIONS(37), 3,
      aux_sym__numeric_literal_token2,
      aux_sym__vector_literal_token1,
      aux_sym__vector_literal_token2,
    STATE(27), 3,
      sym__numeric_literal,
      sym__vector_literal,
      sym__string_literal,
    STATE(52), 6,
      sym__expression,
      sym_unary_expression,
      sym_binary_expression,
      sym_funcall_expression,
      sym_parenthesized_expression,
      sym_literal,
  [1640] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(15), 1,
      anon_sym_LPAREN,
    ACTIONS(29), 1,
      anon_sym_DASH,
    ACTIONS(31), 1,
      anon_sym_PLUS,
    ACTIONS(35), 1,
      aux_sym__numeric_literal_token1,
    ACTIONS(39), 1,
      anon_sym_DQUOTE,
    ACTIONS(156), 1,
      sym_identifier,
    ACTIONS(37), 3,
      aux_sym__numeric_literal_token2,
      aux_sym__vector_literal_token1,
      aux_sym__vector_literal_token2,
    STATE(27), 3,
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
  [1680] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(15), 1,
      anon_sym_LPAREN,
    ACTIONS(29), 1,
      anon_sym_DASH,
    ACTIONS(31), 1,
      anon_sym_PLUS,
    ACTIONS(35), 1,
      aux_sym__numeric_literal_token1,
    ACTIONS(39), 1,
      anon_sym_DQUOTE,
    ACTIONS(156), 1,
      sym_identifier,
    ACTIONS(37), 3,
      aux_sym__numeric_literal_token2,
      aux_sym__vector_literal_token1,
      aux_sym__vector_literal_token2,
    STATE(27), 3,
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
  [1720] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(15), 1,
      anon_sym_LPAREN,
    ACTIONS(29), 1,
      anon_sym_DASH,
    ACTIONS(31), 1,
      anon_sym_PLUS,
    ACTIONS(35), 1,
      aux_sym__numeric_literal_token1,
    ACTIONS(39), 1,
      anon_sym_DQUOTE,
    ACTIONS(156), 1,
      sym_identifier,
    ACTIONS(37), 3,
      aux_sym__numeric_literal_token2,
      aux_sym__vector_literal_token1,
      aux_sym__vector_literal_token2,
    STATE(27), 3,
      sym__numeric_literal,
      sym__vector_literal,
      sym__string_literal,
    STATE(16), 6,
      sym__expression,
      sym_unary_expression,
      sym_binary_expression,
      sym_funcall_expression,
      sym_parenthesized_expression,
      sym_literal,
  [1760] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(15), 1,
      anon_sym_LPAREN,
    ACTIONS(29), 1,
      anon_sym_DASH,
    ACTIONS(31), 1,
      anon_sym_PLUS,
    ACTIONS(35), 1,
      aux_sym__numeric_literal_token1,
    ACTIONS(39), 1,
      anon_sym_DQUOTE,
    ACTIONS(156), 1,
      sym_identifier,
    ACTIONS(37), 3,
      aux_sym__numeric_literal_token2,
      aux_sym__vector_literal_token1,
      aux_sym__vector_literal_token2,
    STATE(27), 3,
      sym__numeric_literal,
      sym__vector_literal,
      sym__string_literal,
    STATE(19), 6,
      sym__expression,
      sym_unary_expression,
      sym_binary_expression,
      sym_funcall_expression,
      sym_parenthesized_expression,
      sym_literal,
  [1800] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(15), 1,
      anon_sym_LPAREN,
    ACTIONS(29), 1,
      anon_sym_DASH,
    ACTIONS(31), 1,
      anon_sym_PLUS,
    ACTIONS(35), 1,
      aux_sym__numeric_literal_token1,
    ACTIONS(39), 1,
      anon_sym_DQUOTE,
    ACTIONS(156), 1,
      sym_identifier,
    ACTIONS(37), 3,
      aux_sym__numeric_literal_token2,
      aux_sym__vector_literal_token1,
      aux_sym__vector_literal_token2,
    STATE(27), 3,
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
  [1840] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(15), 1,
      anon_sym_LPAREN,
    ACTIONS(29), 1,
      anon_sym_DASH,
    ACTIONS(31), 1,
      anon_sym_PLUS,
    ACTIONS(35), 1,
      aux_sym__numeric_literal_token1,
    ACTIONS(39), 1,
      anon_sym_DQUOTE,
    ACTIONS(156), 1,
      sym_identifier,
    ACTIONS(37), 3,
      aux_sym__numeric_literal_token2,
      aux_sym__vector_literal_token1,
      aux_sym__vector_literal_token2,
    STATE(27), 3,
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
  [1880] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(15), 1,
      anon_sym_LPAREN,
    ACTIONS(29), 1,
      anon_sym_DASH,
    ACTIONS(31), 1,
      anon_sym_PLUS,
    ACTIONS(35), 1,
      aux_sym__numeric_literal_token1,
    ACTIONS(39), 1,
      anon_sym_DQUOTE,
    ACTIONS(156), 1,
      sym_identifier,
    ACTIONS(37), 3,
      aux_sym__numeric_literal_token2,
      aux_sym__vector_literal_token1,
      aux_sym__vector_literal_token2,
    STATE(27), 3,
      sym__numeric_literal,
      sym__vector_literal,
      sym__string_literal,
    STATE(15), 6,
      sym__expression,
      sym_unary_expression,
      sym_binary_expression,
      sym_funcall_expression,
      sym_parenthesized_expression,
      sym_literal,
  [1920] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(102), 1,
      anon_sym_STAR,
    ACTIONS(104), 1,
      anon_sym_SLASH,
    ACTIONS(106), 1,
      anon_sym_AMP_AMP,
    ACTIONS(108), 1,
      anon_sym_BANG,
    ACTIONS(110), 1,
      anon_sym_PIPE,
    ACTIONS(112), 1,
      anon_sym_AMP,
    ACTIONS(160), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(100), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(116), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(162), 3,
      anon_sym_SEMI,
      anon_sym_else,
      anon_sym_while,
    ACTIONS(114), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
  [1964] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(102), 1,
      anon_sym_STAR,
    ACTIONS(104), 1,
      anon_sym_SLASH,
    ACTIONS(106), 1,
      anon_sym_AMP_AMP,
    ACTIONS(108), 1,
      anon_sym_BANG,
    ACTIONS(110), 1,
      anon_sym_PIPE,
    ACTIONS(112), 1,
      anon_sym_AMP,
    ACTIONS(160), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(100), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(116), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(164), 3,
      anon_sym_SEMI,
      anon_sym_else,
      anon_sym_while,
    ACTIONS(114), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
  [2008] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(15), 1,
      anon_sym_LPAREN,
    ACTIONS(29), 1,
      anon_sym_DASH,
    ACTIONS(31), 1,
      anon_sym_PLUS,
    ACTIONS(35), 1,
      aux_sym__numeric_literal_token1,
    ACTIONS(39), 1,
      anon_sym_DQUOTE,
    ACTIONS(156), 1,
      sym_identifier,
    ACTIONS(37), 3,
      aux_sym__numeric_literal_token2,
      aux_sym__vector_literal_token1,
      aux_sym__vector_literal_token2,
    STATE(27), 3,
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
  [2048] = 14,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(102), 1,
      anon_sym_STAR,
    ACTIONS(104), 1,
      anon_sym_SLASH,
    ACTIONS(106), 1,
      anon_sym_AMP_AMP,
    ACTIONS(108), 1,
      anon_sym_BANG,
    ACTIONS(110), 1,
      anon_sym_PIPE,
    ACTIONS(112), 1,
      anon_sym_AMP,
    ACTIONS(160), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(166), 1,
      anon_sym_COMMA,
    ACTIONS(168), 1,
      anon_sym_RPAREN,
    STATE(121), 1,
      aux_sym_funcall_expression_repeat1,
    ACTIONS(100), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(116), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(114), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
  [2096] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(15), 1,
      anon_sym_LPAREN,
    ACTIONS(29), 1,
      anon_sym_DASH,
    ACTIONS(31), 1,
      anon_sym_PLUS,
    ACTIONS(35), 1,
      aux_sym__numeric_literal_token1,
    ACTIONS(39), 1,
      anon_sym_DQUOTE,
    ACTIONS(156), 1,
      sym_identifier,
    ACTIONS(37), 3,
      aux_sym__numeric_literal_token2,
      aux_sym__vector_literal_token1,
      aux_sym__vector_literal_token2,
    STATE(27), 3,
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
  [2136] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(15), 1,
      anon_sym_LPAREN,
    ACTIONS(29), 1,
      anon_sym_DASH,
    ACTIONS(31), 1,
      anon_sym_PLUS,
    ACTIONS(35), 1,
      aux_sym__numeric_literal_token1,
    ACTIONS(39), 1,
      anon_sym_DQUOTE,
    ACTIONS(156), 1,
      sym_identifier,
    ACTIONS(37), 3,
      aux_sym__numeric_literal_token2,
      aux_sym__vector_literal_token1,
      aux_sym__vector_literal_token2,
    STATE(27), 3,
      sym__numeric_literal,
      sym__vector_literal,
      sym__string_literal,
    STATE(53), 6,
      sym__expression,
      sym_unary_expression,
      sym_binary_expression,
      sym_funcall_expression,
      sym_parenthesized_expression,
      sym_literal,
  [2176] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(15), 1,
      anon_sym_LPAREN,
    ACTIONS(29), 1,
      anon_sym_DASH,
    ACTIONS(31), 1,
      anon_sym_PLUS,
    ACTIONS(35), 1,
      aux_sym__numeric_literal_token1,
    ACTIONS(39), 1,
      anon_sym_DQUOTE,
    ACTIONS(156), 1,
      sym_identifier,
    ACTIONS(37), 3,
      aux_sym__numeric_literal_token2,
      aux_sym__vector_literal_token1,
      aux_sym__vector_literal_token2,
    STATE(27), 3,
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
  [2216] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(102), 1,
      anon_sym_STAR,
    ACTIONS(104), 1,
      anon_sym_SLASH,
    ACTIONS(106), 1,
      anon_sym_AMP_AMP,
    ACTIONS(108), 1,
      anon_sym_BANG,
    ACTIONS(110), 1,
      anon_sym_PIPE,
    ACTIONS(112), 1,
      anon_sym_AMP,
    ACTIONS(160), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(100), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(116), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(170), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
    ACTIONS(114), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
  [2259] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(102), 1,
      anon_sym_STAR,
    ACTIONS(104), 1,
      anon_sym_SLASH,
    ACTIONS(106), 1,
      anon_sym_AMP_AMP,
    ACTIONS(108), 1,
      anon_sym_BANG,
    ACTIONS(110), 1,
      anon_sym_PIPE,
    ACTIONS(112), 1,
      anon_sym_AMP,
    ACTIONS(160), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(172), 1,
      anon_sym_RPAREN,
    ACTIONS(100), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(116), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(114), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
  [2301] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(102), 1,
      anon_sym_STAR,
    ACTIONS(104), 1,
      anon_sym_SLASH,
    ACTIONS(106), 1,
      anon_sym_AMP_AMP,
    ACTIONS(108), 1,
      anon_sym_BANG,
    ACTIONS(110), 1,
      anon_sym_PIPE,
    ACTIONS(112), 1,
      anon_sym_AMP,
    ACTIONS(160), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(174), 1,
      anon_sym_RPAREN,
    ACTIONS(100), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(116), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(114), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
  [2343] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(176), 1,
      ts_builtin_sym_end,
    ACTIONS(178), 1,
      anon_sym_DOT,
    STATE(118), 1,
      sym_simple_type,
    ACTIONS(181), 6,
      anon_sym_void,
      anon_sym_entity,
      anon_sym_float,
      anon_sym_vector,
      anon_sym_string,
      anon_sym_int,
    STATE(54), 7,
      sym__definition,
      sym_function_declaration,
      sym_function_definition,
      sym_constant_definition,
      sym_variable_definition,
      sym_field_definition,
      aux_sym_source_file_repeat1,
  [2373] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(102), 1,
      anon_sym_STAR,
    ACTIONS(104), 1,
      anon_sym_SLASH,
    ACTIONS(106), 1,
      anon_sym_AMP_AMP,
    ACTIONS(108), 1,
      anon_sym_BANG,
    ACTIONS(110), 1,
      anon_sym_PIPE,
    ACTIONS(112), 1,
      anon_sym_AMP,
    ACTIONS(160), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(184), 1,
      anon_sym_RPAREN,
    ACTIONS(100), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(116), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(114), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
  [2415] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(7), 1,
      anon_sym_DOT,
    ACTIONS(186), 1,
      ts_builtin_sym_end,
    STATE(118), 1,
      sym_simple_type,
    ACTIONS(9), 6,
      anon_sym_void,
      anon_sym_entity,
      anon_sym_float,
      anon_sym_vector,
      anon_sym_string,
      anon_sym_int,
    STATE(54), 7,
      sym__definition,
      sym_function_declaration,
      sym_function_definition,
      sym_constant_definition,
      sym_variable_definition,
      sym_field_definition,
      aux_sym_source_file_repeat1,
  [2445] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(102), 1,
      anon_sym_STAR,
    ACTIONS(104), 1,
      anon_sym_SLASH,
    ACTIONS(106), 1,
      anon_sym_AMP_AMP,
    ACTIONS(108), 1,
      anon_sym_BANG,
    ACTIONS(110), 1,
      anon_sym_PIPE,
    ACTIONS(112), 1,
      anon_sym_AMP,
    ACTIONS(160), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(188), 1,
      anon_sym_RPAREN,
    ACTIONS(100), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(116), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(114), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
  [2487] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(35), 1,
      aux_sym__numeric_literal_token1,
    ACTIONS(39), 1,
      anon_sym_DQUOTE,
    STATE(87), 1,
      sym_literal,
    ACTIONS(37), 3,
      aux_sym__numeric_literal_token2,
      aux_sym__vector_literal_token1,
      aux_sym__vector_literal_token2,
    STATE(27), 3,
      sym__numeric_literal,
      sym__vector_literal,
      sym__string_literal,
  [2510] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(35), 1,
      aux_sym__numeric_literal_token1,
    ACTIONS(39), 1,
      anon_sym_DQUOTE,
    STATE(93), 1,
      sym_literal,
    ACTIONS(37), 3,
      aux_sym__numeric_literal_token2,
      aux_sym__vector_literal_token1,
      aux_sym__vector_literal_token2,
    STATE(27), 3,
      sym__numeric_literal,
      sym__vector_literal,
      sym__string_literal,
  [2533] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(35), 1,
      aux_sym__numeric_literal_token1,
    ACTIONS(39), 1,
      anon_sym_DQUOTE,
    STATE(86), 1,
      sym_literal,
    ACTIONS(37), 3,
      aux_sym__numeric_literal_token2,
      aux_sym__vector_literal_token1,
      aux_sym__vector_literal_token2,
    STATE(27), 3,
      sym__numeric_literal,
      sym__vector_literal,
      sym__string_literal,
  [2556] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(35), 1,
      aux_sym__numeric_literal_token1,
    ACTIONS(39), 1,
      anon_sym_DQUOTE,
    STATE(98), 1,
      sym_literal,
    ACTIONS(37), 3,
      aux_sym__numeric_literal_token2,
      aux_sym__vector_literal_token1,
      aux_sym__vector_literal_token2,
    STATE(27), 3,
      sym__numeric_literal,
      sym__vector_literal,
      sym__string_literal,
  [2579] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(35), 1,
      aux_sym__numeric_literal_token1,
    ACTIONS(39), 1,
      anon_sym_DQUOTE,
    STATE(100), 1,
      sym_literal,
    ACTIONS(37), 3,
      aux_sym__numeric_literal_token2,
      aux_sym__vector_literal_token1,
      aux_sym__vector_literal_token2,
    STATE(27), 3,
      sym__numeric_literal,
      sym__vector_literal,
      sym__string_literal,
  [2602] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(35), 1,
      aux_sym__numeric_literal_token1,
    ACTIONS(39), 1,
      anon_sym_DQUOTE,
    STATE(153), 1,
      sym_literal,
    ACTIONS(37), 3,
      aux_sym__numeric_literal_token2,
      aux_sym__vector_literal_token1,
      aux_sym__vector_literal_token2,
    STATE(27), 3,
      sym__numeric_literal,
      sym__vector_literal,
      sym__string_literal,
  [2625] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(35), 1,
      aux_sym__numeric_literal_token1,
    ACTIONS(39), 1,
      anon_sym_DQUOTE,
    STATE(92), 1,
      sym_literal,
    ACTIONS(37), 3,
      aux_sym__numeric_literal_token2,
      aux_sym__vector_literal_token1,
      aux_sym__vector_literal_token2,
    STATE(27), 3,
      sym__numeric_literal,
      sym__vector_literal,
      sym__string_literal,
  [2648] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(190), 1,
      anon_sym_RPAREN,
    STATE(107), 1,
      sym__parameter,
    STATE(143), 1,
      sym_simple_type,
    ACTIONS(9), 6,
      anon_sym_void,
      anon_sym_entity,
      anon_sym_float,
      anon_sym_vector,
      anon_sym_string,
      anon_sym_int,
  [2669] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(35), 1,
      aux_sym__numeric_literal_token1,
    ACTIONS(39), 1,
      anon_sym_DQUOTE,
    STATE(103), 1,
      sym_literal,
    ACTIONS(37), 3,
      aux_sym__numeric_literal_token2,
      aux_sym__vector_literal_token1,
      aux_sym__vector_literal_token2,
    STATE(27), 3,
      sym__numeric_literal,
      sym__vector_literal,
      sym__string_literal,
  [2692] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(192), 8,
      ts_builtin_sym_end,
      anon_sym_DOT,
      anon_sym_void,
      anon_sym_entity,
      anon_sym_float,
      anon_sym_vector,
      anon_sym_string,
      anon_sym_int,
  [2706] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(194), 8,
      ts_builtin_sym_end,
      anon_sym_DOT,
      anon_sym_void,
      anon_sym_entity,
      anon_sym_float,
      anon_sym_vector,
      anon_sym_string,
      anon_sym_int,
  [2720] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(196), 8,
      ts_builtin_sym_end,
      anon_sym_DOT,
      anon_sym_void,
      anon_sym_entity,
      anon_sym_float,
      anon_sym_vector,
      anon_sym_string,
      anon_sym_int,
  [2734] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(198), 8,
      ts_builtin_sym_end,
      anon_sym_DOT,
      anon_sym_void,
      anon_sym_entity,
      anon_sym_float,
      anon_sym_vector,
      anon_sym_string,
      anon_sym_int,
  [2748] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(200), 8,
      ts_builtin_sym_end,
      anon_sym_DOT,
      anon_sym_void,
      anon_sym_entity,
      anon_sym_float,
      anon_sym_vector,
      anon_sym_string,
      anon_sym_int,
  [2762] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(202), 8,
      ts_builtin_sym_end,
      anon_sym_DOT,
      anon_sym_void,
      anon_sym_entity,
      anon_sym_float,
      anon_sym_vector,
      anon_sym_string,
      anon_sym_int,
  [2776] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(204), 8,
      ts_builtin_sym_end,
      anon_sym_DOT,
      anon_sym_void,
      anon_sym_entity,
      anon_sym_float,
      anon_sym_vector,
      anon_sym_string,
      anon_sym_int,
  [2790] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(206), 8,
      ts_builtin_sym_end,
      anon_sym_DOT,
      anon_sym_void,
      anon_sym_entity,
      anon_sym_float,
      anon_sym_vector,
      anon_sym_string,
      anon_sym_int,
  [2804] = 4,
    ACTIONS(3), 1,
      sym_comment,
    STATE(122), 1,
      sym__parameter,
    STATE(143), 1,
      sym_simple_type,
    ACTIONS(9), 6,
      anon_sym_void,
      anon_sym_entity,
      anon_sym_float,
      anon_sym_vector,
      anon_sym_string,
      anon_sym_int,
  [2822] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(208), 8,
      ts_builtin_sym_end,
      anon_sym_DOT,
      anon_sym_void,
      anon_sym_entity,
      anon_sym_float,
      anon_sym_vector,
      anon_sym_string,
      anon_sym_int,
  [2836] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(210), 8,
      ts_builtin_sym_end,
      anon_sym_DOT,
      anon_sym_void,
      anon_sym_entity,
      anon_sym_float,
      anon_sym_vector,
      anon_sym_string,
      anon_sym_int,
  [2850] = 3,
    ACTIONS(3), 1,
      sym_comment,
    STATE(157), 1,
      sym_simple_type,
    ACTIONS(9), 6,
      anon_sym_void,
      anon_sym_entity,
      anon_sym_float,
      anon_sym_vector,
      anon_sym_string,
      anon_sym_int,
  [2865] = 3,
    ACTIONS(3), 1,
      sym_comment,
    STATE(141), 1,
      sym_simple_type,
    ACTIONS(9), 6,
      anon_sym_void,
      anon_sym_entity,
      anon_sym_float,
      anon_sym_vector,
      anon_sym_string,
      anon_sym_int,
  [2880] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(214), 1,
      anon_sym_EQ,
    ACTIONS(216), 1,
      anon_sym_COMMA,
    STATE(84), 1,
      aux_sym_variable_definition_statement_repeat1,
    ACTIONS(212), 3,
      anon_sym_SEMI,
      anon_sym_else,
      anon_sym_while,
  [2898] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(216), 1,
      anon_sym_COMMA,
    ACTIONS(220), 1,
      anon_sym_EQ,
    STATE(91), 1,
      aux_sym_variable_definition_statement_repeat1,
    ACTIONS(218), 3,
      anon_sym_SEMI,
      anon_sym_else,
      anon_sym_while,
  [2916] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(216), 1,
      anon_sym_COMMA,
    ACTIONS(224), 1,
      anon_sym_EQ,
    STATE(90), 1,
      aux_sym_variable_definition_statement_repeat1,
    ACTIONS(222), 3,
      anon_sym_SEMI,
      anon_sym_else,
      anon_sym_while,
  [2934] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(216), 1,
      anon_sym_COMMA,
    ACTIONS(228), 1,
      anon_sym_EQ,
    STATE(89), 1,
      aux_sym_variable_definition_statement_repeat1,
    ACTIONS(226), 3,
      anon_sym_SEMI,
      anon_sym_else,
      anon_sym_while,
  [2952] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(216), 1,
      anon_sym_COMMA,
    STATE(96), 1,
      aux_sym_variable_definition_statement_repeat1,
    ACTIONS(222), 3,
      anon_sym_SEMI,
      anon_sym_else,
      anon_sym_while,
  [2967] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(216), 1,
      anon_sym_COMMA,
    STATE(96), 1,
      aux_sym_variable_definition_statement_repeat1,
    ACTIONS(230), 3,
      anon_sym_SEMI,
      anon_sym_else,
      anon_sym_while,
  [2982] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(216), 1,
      anon_sym_COMMA,
    STATE(95), 1,
      aux_sym_variable_definition_statement_repeat1,
    ACTIONS(230), 3,
      anon_sym_SEMI,
      anon_sym_else,
      anon_sym_while,
  [2997] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(216), 1,
      anon_sym_COMMA,
    STATE(85), 1,
      aux_sym_variable_definition_statement_repeat1,
    ACTIONS(232), 3,
      anon_sym_SEMI,
      anon_sym_else,
      anon_sym_while,
  [3012] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(236), 1,
      anon_sym_EQ,
    ACTIONS(238), 1,
      anon_sym_COMMA,
    ACTIONS(234), 3,
      anon_sym_SEMI,
      anon_sym_else,
      anon_sym_while,
  [3027] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(216), 1,
      anon_sym_COMMA,
    STATE(96), 1,
      aux_sym_variable_definition_statement_repeat1,
    ACTIONS(232), 3,
      anon_sym_SEMI,
      anon_sym_else,
      anon_sym_while,
  [3042] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(216), 1,
      anon_sym_COMMA,
    STATE(96), 1,
      aux_sym_variable_definition_statement_repeat1,
    ACTIONS(226), 3,
      anon_sym_SEMI,
      anon_sym_else,
      anon_sym_while,
  [3057] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(216), 1,
      anon_sym_COMMA,
    STATE(96), 1,
      aux_sym_variable_definition_statement_repeat1,
    ACTIONS(212), 3,
      anon_sym_SEMI,
      anon_sym_else,
      anon_sym_while,
  [3072] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(216), 1,
      anon_sym_COMMA,
    STATE(89), 1,
      aux_sym_variable_definition_statement_repeat1,
    ACTIONS(226), 3,
      anon_sym_SEMI,
      anon_sym_else,
      anon_sym_while,
  [3087] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(216), 1,
      anon_sym_COMMA,
    STATE(90), 1,
      aux_sym_variable_definition_statement_repeat1,
    ACTIONS(222), 3,
      anon_sym_SEMI,
      anon_sym_else,
      anon_sym_while,
  [3102] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(242), 1,
      anon_sym_EQ,
    ACTIONS(244), 1,
      anon_sym_COMMA,
    ACTIONS(240), 3,
      anon_sym_SEMI,
      anon_sym_else,
      anon_sym_while,
  [3117] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(216), 1,
      anon_sym_COMMA,
    STATE(96), 1,
      aux_sym_variable_definition_statement_repeat1,
    ACTIONS(246), 3,
      anon_sym_SEMI,
      anon_sym_else,
      anon_sym_while,
  [3132] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(250), 1,
      anon_sym_COMMA,
    STATE(96), 1,
      aux_sym_variable_definition_statement_repeat1,
    ACTIONS(248), 3,
      anon_sym_SEMI,
      anon_sym_else,
      anon_sym_while,
  [3147] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(253), 1,
      anon_sym_EQ,
    ACTIONS(248), 4,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_else,
      anon_sym_while,
  [3160] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(255), 4,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_else,
      anon_sym_while,
  [3170] = 4,
    ACTIONS(259), 1,
      aux_sym__string_literal_token3,
    ACTIONS(261), 1,
      sym_comment,
    STATE(102), 1,
      aux_sym__string_literal_repeat1,
    ACTIONS(257), 2,
      aux_sym__string_literal_token1,
      aux_sym__string_literal_token2,
  [3184] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(263), 1,
      anon_sym_COMMA,
    ACTIONS(212), 3,
      anon_sym_SEMI,
      anon_sym_else,
      anon_sym_while,
  [3196] = 4,
    ACTIONS(261), 1,
      sym_comment,
    ACTIONS(268), 1,
      aux_sym__string_literal_token3,
    STATE(101), 1,
      aux_sym__string_literal_repeat1,
    ACTIONS(265), 2,
      aux_sym__string_literal_token1,
      aux_sym__string_literal_token2,
  [3210] = 4,
    ACTIONS(261), 1,
      sym_comment,
    ACTIONS(272), 1,
      aux_sym__string_literal_token3,
    STATE(101), 1,
      aux_sym__string_literal_repeat1,
    ACTIONS(270), 2,
      aux_sym__string_literal_token1,
      aux_sym__string_literal_token2,
  [3224] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(274), 1,
      anon_sym_COMMA,
    ACTIONS(218), 3,
      anon_sym_SEMI,
      anon_sym_else,
      anon_sym_while,
  [3236] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(276), 1,
      anon_sym_SEMI,
    ACTIONS(278), 1,
      anon_sym_COMMA,
    STATE(105), 1,
      aux_sym_variable_definition_repeat1,
  [3249] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(278), 1,
      anon_sym_COMMA,
    ACTIONS(280), 1,
      anon_sym_SEMI,
    STATE(106), 1,
      aux_sym_variable_definition_repeat1,
  [3262] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(282), 1,
      anon_sym_SEMI,
    ACTIONS(284), 1,
      anon_sym_COMMA,
    STATE(106), 1,
      aux_sym_variable_definition_repeat1,
  [3275] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(287), 1,
      anon_sym_COMMA,
    ACTIONS(289), 1,
      anon_sym_RPAREN,
    STATE(110), 1,
      aux_sym_parameter_list_repeat1,
  [3288] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(291), 3,
      anon_sym_SEMI,
      anon_sym_else,
      anon_sym_while,
  [3297] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(293), 3,
      anon_sym_SEMI,
      anon_sym_else,
      anon_sym_while,
  [3306] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(287), 1,
      anon_sym_COMMA,
    ACTIONS(295), 1,
      anon_sym_RPAREN,
    STATE(112), 1,
      aux_sym_parameter_list_repeat1,
  [3319] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(170), 1,
      anon_sym_RPAREN,
    ACTIONS(297), 1,
      anon_sym_COMMA,
    STATE(111), 1,
      aux_sym_funcall_expression_repeat1,
  [3332] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(300), 1,
      anon_sym_COMMA,
    ACTIONS(303), 1,
      anon_sym_RPAREN,
    STATE(112), 1,
      aux_sym_parameter_list_repeat1,
  [3345] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(305), 3,
      anon_sym_SEMI,
      anon_sym_else,
      anon_sym_while,
  [3354] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(307), 1,
      anon_sym_SEMI,
    ACTIONS(309), 1,
      anon_sym_EQ,
    ACTIONS(311), 1,
      anon_sym_COMMA,
  [3367] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(313), 3,
      anon_sym_SEMI,
      anon_sym_else,
      anon_sym_while,
  [3376] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(278), 1,
      anon_sym_COMMA,
    ACTIONS(315), 1,
      anon_sym_SEMI,
    STATE(106), 1,
      aux_sym_variable_definition_repeat1,
  [3389] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(319), 1,
      anon_sym_else,
    ACTIONS(317), 2,
      anon_sym_SEMI,
      anon_sym_while,
  [3400] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(321), 1,
      anon_sym_LPAREN,
    ACTIONS(323), 1,
      sym_identifier,
    STATE(129), 1,
      sym_parameter_list,
  [3413] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(278), 1,
      anon_sym_COMMA,
    ACTIONS(325), 1,
      anon_sym_SEMI,
    STATE(116), 1,
      aux_sym_variable_definition_repeat1,
  [3426] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(327), 3,
      anon_sym_SEMI,
      anon_sym_else,
      anon_sym_while,
  [3435] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(166), 1,
      anon_sym_COMMA,
    ACTIONS(329), 1,
      anon_sym_RPAREN,
    STATE(111), 1,
      aux_sym_funcall_expression_repeat1,
  [3448] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(303), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [3456] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(331), 1,
      anon_sym_SEMI,
    ACTIONS(333), 1,
      anon_sym_COMMA,
  [3466] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(335), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [3474] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(337), 1,
      anon_sym_SEMI,
    ACTIONS(339), 1,
      anon_sym_EQ,
  [3484] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(282), 2,
      anon_sym_SEMI,
      anon_sym_COMMA,
  [3492] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(341), 2,
      anon_sym_LPAREN,
      sym_identifier,
  [3500] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(343), 1,
      anon_sym_DOLLAR,
    STATE(160), 1,
      sym_frame_identifier,
  [3510] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(345), 1,
      sym_identifier,
  [3517] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(347), 1,
      anon_sym_LPAREN,
  [3524] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(349), 1,
      sym_identifier,
  [3531] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(351), 1,
      anon_sym_RBRACK,
  [3538] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(353), 1,
      ts_builtin_sym_end,
  [3545] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(355), 1,
      aux_sym_frame_identifier_token1,
  [3552] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(357), 1,
      sym_identifier,
  [3559] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(359), 1,
      sym_identifier,
  [3566] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(361), 1,
      sym_identifier,
  [3573] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(363), 1,
      anon_sym_LPAREN,
  [3580] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(365), 1,
      anon_sym_SEMI,
  [3587] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(367), 1,
      sym_identifier,
  [3594] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(369), 1,
      sym_identifier,
  [3601] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(371), 1,
      sym_identifier,
  [3608] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(373), 1,
      sym_identifier,
  [3615] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(375), 1,
      anon_sym_DQUOTE,
  [3622] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(377), 1,
      anon_sym_SEMI,
  [3629] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(379), 1,
      sym_identifier,
  [3636] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(381), 1,
      sym_identifier,
  [3643] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(383), 1,
      sym_identifier,
  [3650] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(385), 1,
      anon_sym_DQUOTE,
  [3657] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(387), 1,
      anon_sym_LPAREN,
  [3664] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(389), 1,
      sym_identifier,
  [3671] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(391), 1,
      sym_identifier,
  [3678] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(393), 1,
      anon_sym_SEMI,
  [3685] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(395), 1,
      sym_identifier,
  [3692] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(397), 1,
      anon_sym_COMMA,
  [3699] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(399), 1,
      sym_identifier,
  [3706] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(401), 1,
      sym_identifier,
  [3713] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(403), 1,
      anon_sym_while,
  [3720] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(405), 1,
      anon_sym_SEMI,
  [3727] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(407), 1,
      anon_sym_COMMA,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 87,
  [SMALL_STATE(4)] = 171,
  [SMALL_STATE(5)] = 252,
  [SMALL_STATE(6)] = 333,
  [SMALL_STATE(7)] = 414,
  [SMALL_STATE(8)] = 495,
  [SMALL_STATE(9)] = 577,
  [SMALL_STATE(10)] = 659,
  [SMALL_STATE(11)] = 741,
  [SMALL_STATE(12)] = 772,
  [SMALL_STATE(13)] = 801,
  [SMALL_STATE(14)] = 845,
  [SMALL_STATE(15)] = 887,
  [SMALL_STATE(16)] = 915,
  [SMALL_STATE(17)] = 951,
  [SMALL_STATE(18)] = 979,
  [SMALL_STATE(19)] = 1007,
  [SMALL_STATE(20)] = 1049,
  [SMALL_STATE(21)] = 1077,
  [SMALL_STATE(22)] = 1105,
  [SMALL_STATE(23)] = 1133,
  [SMALL_STATE(24)] = 1167,
  [SMALL_STATE(25)] = 1195,
  [SMALL_STATE(26)] = 1227,
  [SMALL_STATE(27)] = 1259,
  [SMALL_STATE(28)] = 1287,
  [SMALL_STATE(29)] = 1325,
  [SMALL_STATE(30)] = 1353,
  [SMALL_STATE(31)] = 1396,
  [SMALL_STATE(32)] = 1436,
  [SMALL_STATE(33)] = 1476,
  [SMALL_STATE(34)] = 1516,
  [SMALL_STATE(35)] = 1560,
  [SMALL_STATE(36)] = 1600,
  [SMALL_STATE(37)] = 1640,
  [SMALL_STATE(38)] = 1680,
  [SMALL_STATE(39)] = 1720,
  [SMALL_STATE(40)] = 1760,
  [SMALL_STATE(41)] = 1800,
  [SMALL_STATE(42)] = 1840,
  [SMALL_STATE(43)] = 1880,
  [SMALL_STATE(44)] = 1920,
  [SMALL_STATE(45)] = 1964,
  [SMALL_STATE(46)] = 2008,
  [SMALL_STATE(47)] = 2048,
  [SMALL_STATE(48)] = 2096,
  [SMALL_STATE(49)] = 2136,
  [SMALL_STATE(50)] = 2176,
  [SMALL_STATE(51)] = 2216,
  [SMALL_STATE(52)] = 2259,
  [SMALL_STATE(53)] = 2301,
  [SMALL_STATE(54)] = 2343,
  [SMALL_STATE(55)] = 2373,
  [SMALL_STATE(56)] = 2415,
  [SMALL_STATE(57)] = 2445,
  [SMALL_STATE(58)] = 2487,
  [SMALL_STATE(59)] = 2510,
  [SMALL_STATE(60)] = 2533,
  [SMALL_STATE(61)] = 2556,
  [SMALL_STATE(62)] = 2579,
  [SMALL_STATE(63)] = 2602,
  [SMALL_STATE(64)] = 2625,
  [SMALL_STATE(65)] = 2648,
  [SMALL_STATE(66)] = 2669,
  [SMALL_STATE(67)] = 2692,
  [SMALL_STATE(68)] = 2706,
  [SMALL_STATE(69)] = 2720,
  [SMALL_STATE(70)] = 2734,
  [SMALL_STATE(71)] = 2748,
  [SMALL_STATE(72)] = 2762,
  [SMALL_STATE(73)] = 2776,
  [SMALL_STATE(74)] = 2790,
  [SMALL_STATE(75)] = 2804,
  [SMALL_STATE(76)] = 2822,
  [SMALL_STATE(77)] = 2836,
  [SMALL_STATE(78)] = 2850,
  [SMALL_STATE(79)] = 2865,
  [SMALL_STATE(80)] = 2880,
  [SMALL_STATE(81)] = 2898,
  [SMALL_STATE(82)] = 2916,
  [SMALL_STATE(83)] = 2934,
  [SMALL_STATE(84)] = 2952,
  [SMALL_STATE(85)] = 2967,
  [SMALL_STATE(86)] = 2982,
  [SMALL_STATE(87)] = 2997,
  [SMALL_STATE(88)] = 3012,
  [SMALL_STATE(89)] = 3027,
  [SMALL_STATE(90)] = 3042,
  [SMALL_STATE(91)] = 3057,
  [SMALL_STATE(92)] = 3072,
  [SMALL_STATE(93)] = 3087,
  [SMALL_STATE(94)] = 3102,
  [SMALL_STATE(95)] = 3117,
  [SMALL_STATE(96)] = 3132,
  [SMALL_STATE(97)] = 3147,
  [SMALL_STATE(98)] = 3160,
  [SMALL_STATE(99)] = 3170,
  [SMALL_STATE(100)] = 3184,
  [SMALL_STATE(101)] = 3196,
  [SMALL_STATE(102)] = 3210,
  [SMALL_STATE(103)] = 3224,
  [SMALL_STATE(104)] = 3236,
  [SMALL_STATE(105)] = 3249,
  [SMALL_STATE(106)] = 3262,
  [SMALL_STATE(107)] = 3275,
  [SMALL_STATE(108)] = 3288,
  [SMALL_STATE(109)] = 3297,
  [SMALL_STATE(110)] = 3306,
  [SMALL_STATE(111)] = 3319,
  [SMALL_STATE(112)] = 3332,
  [SMALL_STATE(113)] = 3345,
  [SMALL_STATE(114)] = 3354,
  [SMALL_STATE(115)] = 3367,
  [SMALL_STATE(116)] = 3376,
  [SMALL_STATE(117)] = 3389,
  [SMALL_STATE(118)] = 3400,
  [SMALL_STATE(119)] = 3413,
  [SMALL_STATE(120)] = 3426,
  [SMALL_STATE(121)] = 3435,
  [SMALL_STATE(122)] = 3448,
  [SMALL_STATE(123)] = 3456,
  [SMALL_STATE(124)] = 3466,
  [SMALL_STATE(125)] = 3474,
  [SMALL_STATE(126)] = 3484,
  [SMALL_STATE(127)] = 3492,
  [SMALL_STATE(128)] = 3500,
  [SMALL_STATE(129)] = 3510,
  [SMALL_STATE(130)] = 3517,
  [SMALL_STATE(131)] = 3524,
  [SMALL_STATE(132)] = 3531,
  [SMALL_STATE(133)] = 3538,
  [SMALL_STATE(134)] = 3545,
  [SMALL_STATE(135)] = 3552,
  [SMALL_STATE(136)] = 3559,
  [SMALL_STATE(137)] = 3566,
  [SMALL_STATE(138)] = 3573,
  [SMALL_STATE(139)] = 3580,
  [SMALL_STATE(140)] = 3587,
  [SMALL_STATE(141)] = 3594,
  [SMALL_STATE(142)] = 3601,
  [SMALL_STATE(143)] = 3608,
  [SMALL_STATE(144)] = 3615,
  [SMALL_STATE(145)] = 3622,
  [SMALL_STATE(146)] = 3629,
  [SMALL_STATE(147)] = 3636,
  [SMALL_STATE(148)] = 3643,
  [SMALL_STATE(149)] = 3650,
  [SMALL_STATE(150)] = 3657,
  [SMALL_STATE(151)] = 3664,
  [SMALL_STATE(152)] = 3671,
  [SMALL_STATE(153)] = 3678,
  [SMALL_STATE(154)] = 3685,
  [SMALL_STATE(155)] = 3692,
  [SMALL_STATE(156)] = 3699,
  [SMALL_STATE(157)] = 3706,
  [SMALL_STATE(158)] = 3713,
  [SMALL_STATE(159)] = 3720,
  [SMALL_STATE(160)] = 3727,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT_EXTRA(),
  [5] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(79),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(127),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(128),
  [13] = {.entry = {.count = 1, .reusable = false}}, SHIFT(127),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [19] = {.entry = {.count = 1, .reusable = false}}, SHIFT(138),
  [21] = {.entry = {.count = 1, .reusable = false}}, SHIFT(130),
  [23] = {.entry = {.count = 1, .reusable = false}}, SHIFT(7),
  [25] = {.entry = {.count = 1, .reusable = false}}, SHIFT(50),
  [27] = {.entry = {.count = 1, .reusable = false}}, SHIFT(78),
  [29] = {.entry = {.count = 1, .reusable = false}}, SHIFT(48),
  [31] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [33] = {.entry = {.count = 1, .reusable = false}}, SHIFT(25),
  [35] = {.entry = {.count = 1, .reusable = false}}, SHIFT(27),
  [37] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [39] = {.entry = {.count = 1, .reusable = true}}, SHIFT(99),
  [41] = {.entry = {.count = 1, .reusable = true}}, SHIFT(145),
  [43] = {.entry = {.count = 1, .reusable = true}}, SHIFT(139),
  [45] = {.entry = {.count = 1, .reusable = true}}, SHIFT(113),
  [47] = {.entry = {.count = 1, .reusable = true}}, SHIFT(120),
  [49] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__compound_statement_repeat1, 2), SHIFT_REPEAT(127),
  [52] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__compound_statement_repeat1, 2), SHIFT_REPEAT(49),
  [55] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__compound_statement_repeat1, 2),
  [57] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__compound_statement_repeat1, 2), SHIFT_REPEAT(138),
  [60] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__compound_statement_repeat1, 2), SHIFT_REPEAT(130),
  [63] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__compound_statement_repeat1, 2), SHIFT_REPEAT(7),
  [66] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__compound_statement_repeat1, 2), SHIFT_REPEAT(50),
  [69] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__compound_statement_repeat1, 2), SHIFT_REPEAT(78),
  [72] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__compound_statement_repeat1, 2), SHIFT_REPEAT(48),
  [75] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__compound_statement_repeat1, 2), SHIFT_REPEAT(48),
  [78] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__compound_statement_repeat1, 2), SHIFT_REPEAT(25),
  [81] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__compound_statement_repeat1, 2), SHIFT_REPEAT(27),
  [84] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__compound_statement_repeat1, 2), SHIFT_REPEAT(27),
  [87] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__compound_statement_repeat1, 2), SHIFT_REPEAT(99),
  [90] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__expression, 1),
  [92] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [94] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__expression, 1),
  [96] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__compound_statement_repeat1, 2),
  [98] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_binary_expression, 3),
  [100] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [102] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [104] = {.entry = {.count = 1, .reusable = false}}, SHIFT(43),
  [106] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [108] = {.entry = {.count = 1, .reusable = false}}, SHIFT(40),
  [110] = {.entry = {.count = 1, .reusable = false}}, SHIFT(32),
  [112] = {.entry = {.count = 1, .reusable = false}}, SHIFT(38),
  [114] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [116] = {.entry = {.count = 1, .reusable = false}}, SHIFT(35),
  [118] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_binary_expression, 3),
  [120] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_funcall_expression, 3),
  [122] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_funcall_expression, 3),
  [124] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_funcall_expression, 5),
  [126] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_funcall_expression, 5),
  [128] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parenthesized_expression, 3),
  [130] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_parenthesized_expression, 3),
  [132] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__string_literal, 4),
  [134] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__string_literal, 4),
  [136] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_unary_expression, 2),
  [138] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_unary_expression, 2),
  [140] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__string_literal, 3),
  [142] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__string_literal, 3),
  [144] = {.entry = {.count = 1, .reusable = false}}, SHIFT(33),
  [146] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_literal, 1),
  [148] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_literal, 1),
  [150] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_funcall_expression, 4),
  [152] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_funcall_expression, 4),
  [154] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [156] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [158] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_return_statement, 2),
  [160] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [162] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_assignment_statement, 3),
  [164] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__expression_statement, 1),
  [166] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [168] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [170] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_funcall_expression_repeat1, 2),
  [172] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [174] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [176] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2),
  [178] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(79),
  [181] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(127),
  [184] = {.entry = {.count = 1, .reusable = true}}, SHIFT(109),
  [186] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1),
  [188] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [190] = {.entry = {.count = 1, .reusable = true}}, SHIFT(142),
  [192] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable_definition, 5),
  [194] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable_definition, 3),
  [196] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_declaration, 4),
  [198] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_definition, 11),
  [200] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_constant_definition, 5),
  [202] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable_definition, 6),
  [204] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_field_definition, 7),
  [206] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_field_definition, 6),
  [208] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_definition, 6),
  [210] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_field_definition, 4),
  [212] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable_definition_statement, 5),
  [214] = {.entry = {.count = 1, .reusable = true}}, SHIFT(64),
  [216] = {.entry = {.count = 1, .reusable = true}}, SHIFT(137),
  [218] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable_definition_statement, 4),
  [220] = {.entry = {.count = 1, .reusable = true}}, SHIFT(59),
  [222] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable_definition_statement, 6),
  [224] = {.entry = {.count = 1, .reusable = true}}, SHIFT(58),
  [226] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable_definition_statement, 7),
  [228] = {.entry = {.count = 1, .reusable = true}}, SHIFT(60),
  [230] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable_definition_statement, 9),
  [232] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable_definition_statement, 8),
  [234] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable_definition_statement, 2),
  [236] = {.entry = {.count = 1, .reusable = true}}, SHIFT(66),
  [238] = {.entry = {.count = 1, .reusable = true}}, SHIFT(146),
  [240] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable_definition_statement, 3),
  [242] = {.entry = {.count = 1, .reusable = true}}, SHIFT(62),
  [244] = {.entry = {.count = 1, .reusable = true}}, SHIFT(156),
  [246] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable_definition_statement, 10),
  [248] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_variable_definition_statement_repeat1, 2),
  [250] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_variable_definition_statement_repeat1, 2), SHIFT_REPEAT(137),
  [253] = {.entry = {.count = 1, .reusable = true}}, SHIFT(61),
  [255] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_variable_definition_statement_repeat1, 4),
  [257] = {.entry = {.count = 1, .reusable = false}}, SHIFT(102),
  [259] = {.entry = {.count = 1, .reusable = false}}, SHIFT(144),
  [261] = {.entry = {.count = 1, .reusable = false}}, SHIFT_EXTRA(),
  [263] = {.entry = {.count = 1, .reusable = true}}, SHIFT(140),
  [265] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__string_literal_repeat1, 2), SHIFT_REPEAT(101),
  [268] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__string_literal_repeat1, 2),
  [270] = {.entry = {.count = 1, .reusable = false}}, SHIFT(101),
  [272] = {.entry = {.count = 1, .reusable = false}}, SHIFT(149),
  [274] = {.entry = {.count = 1, .reusable = true}}, SHIFT(135),
  [276] = {.entry = {.count = 1, .reusable = true}}, SHIFT(74),
  [278] = {.entry = {.count = 1, .reusable = true}}, SHIFT(151),
  [280] = {.entry = {.count = 1, .reusable = true}}, SHIFT(73),
  [282] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_variable_definition_repeat1, 2),
  [284] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_variable_definition_repeat1, 2), SHIFT_REPEAT(151),
  [287] = {.entry = {.count = 1, .reusable = true}}, SHIFT(75),
  [289] = {.entry = {.count = 1, .reusable = true}}, SHIFT(131),
  [291] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_if_statement, 7),
  [293] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_do_while_statement, 6),
  [295] = {.entry = {.count = 1, .reusable = true}}, SHIFT(136),
  [297] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_funcall_expression_repeat1, 2), SHIFT_REPEAT(31),
  [300] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_parameter_list_repeat1, 2), SHIFT_REPEAT(75),
  [303] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_parameter_list_repeat1, 2),
  [305] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__compound_statement, 3),
  [307] = {.entry = {.count = 1, .reusable = true}}, SHIFT(68),
  [309] = {.entry = {.count = 1, .reusable = true}}, SHIFT(63),
  [311] = {.entry = {.count = 1, .reusable = true}}, SHIFT(148),
  [313] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_while_statement, 5),
  [315] = {.entry = {.count = 1, .reusable = true}}, SHIFT(72),
  [317] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_if_statement, 5),
  [319] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [321] = {.entry = {.count = 1, .reusable = true}}, SHIFT(65),
  [323] = {.entry = {.count = 1, .reusable = true}}, SHIFT(114),
  [325] = {.entry = {.count = 1, .reusable = true}}, SHIFT(67),
  [327] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__compound_statement, 2),
  [329] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [331] = {.entry = {.count = 1, .reusable = true}}, SHIFT(77),
  [333] = {.entry = {.count = 1, .reusable = true}}, SHIFT(152),
  [335] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__parameter, 2),
  [337] = {.entry = {.count = 1, .reusable = true}}, SHIFT(69),
  [339] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [341] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_simple_type, 1),
  [343] = {.entry = {.count = 1, .reusable = true}}, SHIFT(134),
  [345] = {.entry = {.count = 1, .reusable = true}}, SHIFT(125),
  [347] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [349] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter_list, 3),
  [351] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [353] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [355] = {.entry = {.count = 1, .reusable = true}}, SHIFT(155),
  [357] = {.entry = {.count = 1, .reusable = true}}, SHIFT(82),
  [359] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter_list, 4),
  [361] = {.entry = {.count = 1, .reusable = true}}, SHIFT(97),
  [363] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [365] = {.entry = {.count = 1, .reusable = true}}, SHIFT(70),
  [367] = {.entry = {.count = 1, .reusable = true}}, SHIFT(83),
  [369] = {.entry = {.count = 1, .reusable = true}}, SHIFT(123),
  [371] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter_list, 2),
  [373] = {.entry = {.count = 1, .reusable = true}}, SHIFT(124),
  [375] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [377] = {.entry = {.count = 1, .reusable = true}}, SHIFT(76),
  [379] = {.entry = {.count = 1, .reusable = true}}, SHIFT(81),
  [381] = {.entry = {.count = 1, .reusable = true}}, SHIFT(88),
  [383] = {.entry = {.count = 1, .reusable = true}}, SHIFT(119),
  [385] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [387] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [389] = {.entry = {.count = 1, .reusable = true}}, SHIFT(126),
  [391] = {.entry = {.count = 1, .reusable = true}}, SHIFT(104),
  [393] = {.entry = {.count = 1, .reusable = true}}, SHIFT(71),
  [395] = {.entry = {.count = 1, .reusable = true}}, SHIFT(132),
  [397] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_frame_identifier, 2),
  [399] = {.entry = {.count = 1, .reusable = true}}, SHIFT(80),
  [401] = {.entry = {.count = 1, .reusable = true}}, SHIFT(94),
  [403] = {.entry = {.count = 1, .reusable = true}}, SHIFT(150),
  [405] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [407] = {.entry = {.count = 1, .reusable = true}}, SHIFT(154),
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
