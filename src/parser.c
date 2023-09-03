#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 152
#define LARGE_STATE_COUNT 7
#define SYMBOL_COUNT 83
#define ALIAS_COUNT 0
#define TOKEN_COUNT 47
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 10
#define PRODUCTION_ID_COUNT 1

enum {
  anon_sym_SEMI = 1,
  anon_sym_EQ = 2,
  anon_sym_COMMA = 3,
  anon_sym_DOT = 4,
  anon_sym_void = 5,
  anon_sym_entity = 6,
  anon_sym_float = 7,
  anon_sym_vector = 8,
  anon_sym_string = 9,
  anon_sym_int = 10,
  anon_sym_LPAREN = 11,
  anon_sym_RPAREN = 12,
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
  sym_identifier = 36,
  aux_sym__numeric_literal_token1 = 37,
  aux_sym__numeric_literal_token2 = 38,
  aux_sym__vector_literal_token1 = 39,
  aux_sym__vector_literal_token2 = 40,
  anon_sym_DQUOTE = 41,
  aux_sym__string_literal_token1 = 42,
  aux_sym__string_literal_token2 = 43,
  aux_sym__string_literal_token3 = 44,
  sym__builtin_literal = 45,
  sym_comment = 46,
  sym_source_file = 47,
  sym__definition = 48,
  sym_function_declaration = 49,
  sym_function_definition = 50,
  sym_constant_definition = 51,
  sym_variable_definition = 52,
  sym_field_definition = 53,
  sym_simple_type = 54,
  sym_parameter_list = 55,
  sym__parameter = 56,
  sym__statement = 57,
  sym__compound_statement = 58,
  sym__simple_statement = 59,
  sym_assignment_statement = 60,
  sym_if_statement = 61,
  sym_while_statement = 62,
  sym_do_while_statement = 63,
  sym_return_statement = 64,
  sym_variable_definition_statement = 65,
  sym__expression_statement = 66,
  sym__expression = 67,
  sym_unary_expression = 68,
  sym_binary_expression = 69,
  sym_funcall_expression = 70,
  sym_parenthesized_expression = 71,
  sym_literal = 72,
  sym__numeric_literal = 73,
  sym__vector_literal = 74,
  sym__string_literal = 75,
  aux_sym_source_file_repeat1 = 76,
  aux_sym_variable_definition_repeat1 = 77,
  aux_sym_parameter_list_repeat1 = 78,
  aux_sym__compound_statement_repeat1 = 79,
  aux_sym_variable_definition_statement_repeat1 = 80,
  aux_sym_funcall_expression_repeat1 = 81,
  aux_sym__string_literal_repeat1 = 82,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [anon_sym_SEMI] = ";",
  [anon_sym_EQ] = "=",
  [anon_sym_COMMA] = ",",
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
  [anon_sym_COMMA] = anon_sym_COMMA,
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
  [anon_sym_COMMA] = {
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
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(79);
      if (lookahead == '!') ADVANCE(118);
      if (lookahead == '"') ADVANCE(169);
      if (lookahead == '#') ADVANCE(69);
      if (lookahead == '&') ADVANCE(120);
      if (lookahead == '(') ADVANCE(96);
      if (lookahead == ')') ADVANCE(97);
      if (lookahead == '*') ADVANCE(114);
      if (lookahead == '+') ADVANCE(113);
      if (lookahead == ',') ADVANCE(82);
      if (lookahead == '-') ADVANCE(112);
      if (lookahead == '.') ADVANCE(83);
      if (lookahead == '/') ADVANCE(115);
      if (lookahead == ';') ADVANCE(80);
      if (lookahead == '<') ADVANCE(126);
      if (lookahead == '=') ADVANCE(81);
      if (lookahead == '>') ADVANCE(123);
      if (lookahead == '\\') ADVANCE(2);
      if (lookahead == '`') ADVANCE(20);
      if (lookahead == 'd') ADVANCE(52);
      if (lookahead == 'e') ADVANCE(46);
      if (lookahead == 'f') ADVANCE(48);
      if (lookahead == 'i') ADVANCE(38);
      if (lookahead == 'l') ADVANCE(53);
      if (lookahead == 'r') ADVANCE(37);
      if (lookahead == 's') ADVANCE(60);
      if (lookahead == 'v') ADVANCE(36);
      if (lookahead == 'w') ADVANCE(40);
      if (lookahead == '{') ADVANCE(98);
      if (lookahead == '|') ADVANCE(119);
      if (lookahead == '}') ADVANCE(99);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(165);
      END_STATE();
    case 1:
      if (lookahead == '\n') SKIP(13)
      END_STATE();
    case 2:
      if (lookahead == '\n') SKIP(13)
      if (lookahead == '\r') SKIP(1)
      if (lookahead == 'n' ||
          lookahead == 'r') ADVANCE(175);
      END_STATE();
    case 3:
      if (lookahead == '\n') SKIP(15)
      END_STATE();
    case 4:
      if (lookahead == '\n') SKIP(15)
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
      if (lookahead == '\n') SKIP(16)
      END_STATE();
    case 8:
      if (lookahead == '\n') SKIP(16)
      if (lookahead == '\r') SKIP(7)
      END_STATE();
    case 9:
      if (lookahead == ' ') ADVANCE(23);
      if (lookahead == '.') ADVANCE(76);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(9);
      END_STATE();
    case 10:
      if (lookahead == ' ') ADVANCE(21);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(10);
      END_STATE();
    case 11:
      if (lookahead == ' ') ADVANCE(22);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(11);
      END_STATE();
    case 12:
      if (lookahead == ' ') ADVANCE(24);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(12);
      END_STATE();
    case 13:
      if (lookahead == '!') ADVANCE(118);
      if (lookahead == '"') ADVANCE(169);
      if (lookahead == '#') ADVANCE(69);
      if (lookahead == '&') ADVANCE(120);
      if (lookahead == '(') ADVANCE(96);
      if (lookahead == ')') ADVANCE(97);
      if (lookahead == '*') ADVANCE(114);
      if (lookahead == '+') ADVANCE(113);
      if (lookahead == ',') ADVANCE(82);
      if (lookahead == '-') ADVANCE(112);
      if (lookahead == '.') ADVANCE(83);
      if (lookahead == '/') ADVANCE(115);
      if (lookahead == ';') ADVANCE(80);
      if (lookahead == '<') ADVANCE(126);
      if (lookahead == '=') ADVANCE(81);
      if (lookahead == '>') ADVANCE(123);
      if (lookahead == '\\') ADVANCE(2);
      if (lookahead == '`') ADVANCE(20);
      if (lookahead == 'd') ADVANCE(52);
      if (lookahead == 'e') ADVANCE(46);
      if (lookahead == 'f') ADVANCE(48);
      if (lookahead == 'i') ADVANCE(38);
      if (lookahead == 'l') ADVANCE(53);
      if (lookahead == 'r') ADVANCE(37);
      if (lookahead == 's') ADVANCE(60);
      if (lookahead == 'v') ADVANCE(36);
      if (lookahead == 'w') ADVANCE(40);
      if (lookahead == '{') ADVANCE(98);
      if (lookahead == '|') ADVANCE(119);
      if (lookahead == '}') ADVANCE(99);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(13)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(165);
      END_STATE();
    case 14:
      if (lookahead == '!') ADVANCE(118);
      if (lookahead == '&') ADVANCE(120);
      if (lookahead == '(') ADVANCE(96);
      if (lookahead == ')') ADVANCE(97);
      if (lookahead == '*') ADVANCE(114);
      if (lookahead == '+') ADVANCE(113);
      if (lookahead == ',') ADVANCE(82);
      if (lookahead == '-') ADVANCE(111);
      if (lookahead == '/') ADVANCE(115);
      if (lookahead == ';') ADVANCE(80);
      if (lookahead == '<') ADVANCE(126);
      if (lookahead == '=') ADVANCE(81);
      if (lookahead == '>') ADVANCE(123);
      if (lookahead == '\\') SKIP(6)
      if (lookahead == 'e') ADVANCE(45);
      if (lookahead == 'w') ADVANCE(40);
      if (lookahead == '|') ADVANCE(119);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(14)
      END_STATE();
    case 15:
      if (lookahead == '"') ADVANCE(169);
      if (lookahead == '#') ADVANCE(69);
      if (lookahead == '(') ADVANCE(96);
      if (lookahead == '+') ADVANCE(113);
      if (lookahead == '-') ADVANCE(112);
      if (lookahead == '/') ADVANCE(17);
      if (lookahead == '\\') SKIP(4)
      if (lookahead == '`') ADVANCE(20);
      if (lookahead == 'd') ADVANCE(148);
      if (lookahead == 'e') ADVANCE(147);
      if (lookahead == 'f') ADVANCE(144);
      if (lookahead == 'i') ADVANCE(135);
      if (lookahead == 'l') ADVANCE(149);
      if (lookahead == 'r') ADVANCE(134);
      if (lookahead == 's') ADVANCE(155);
      if (lookahead == 'v') ADVANCE(133);
      if (lookahead == 'w') ADVANCE(137);
      if (lookahead == '{') ADVANCE(98);
      if (lookahead == '}') ADVANCE(99);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(15)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(165);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(164);
      END_STATE();
    case 16:
      if (lookahead == '"') ADVANCE(169);
      if (lookahead == '(') ADVANCE(96);
      if (lookahead == ')') ADVANCE(97);
      if (lookahead == '+') ADVANCE(113);
      if (lookahead == '-') ADVANCE(112);
      if (lookahead == '/') ADVANCE(17);
      if (lookahead == '\\') SKIP(8)
      if (lookahead == '`') ADVANCE(20);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(16)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(165);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(164);
      END_STATE();
    case 17:
      if (lookahead == '*') ADVANCE(19);
      if (lookahead == '/') ADVANCE(187);
      END_STATE();
    case 18:
      if (lookahead == '*') ADVANCE(18);
      if (lookahead == '/') ADVANCE(186);
      if (lookahead != 0) ADVANCE(19);
      END_STATE();
    case 19:
      if (lookahead == '*') ADVANCE(18);
      if (lookahead != 0) ADVANCE(19);
      END_STATE();
    case 20:
      if (lookahead == '-') ADVANCE(70);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(9);
      END_STATE();
    case 21:
      if (lookahead == '-') ADVANCE(73);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(27);
      END_STATE();
    case 22:
      if (lookahead == '-') ADVANCE(74);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(26);
      END_STATE();
    case 23:
      if (lookahead == '-') ADVANCE(72);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(10);
      END_STATE();
    case 24:
      if (lookahead == '-') ADVANCE(77);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(25);
      END_STATE();
    case 25:
      if (lookahead == '.') ADVANCE(75);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(25);
      END_STATE();
    case 26:
      if (lookahead == '.') ADVANCE(78);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(26);
      END_STATE();
    case 27:
      if (lookahead == '`') ADVANCE(167);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(27);
      END_STATE();
    case 28:
      if (lookahead == '`') ADVANCE(168);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(28);
      END_STATE();
    case 29:
      if (lookahead == 'a') ADVANCE(47);
      END_STATE();
    case 30:
      if (lookahead == 'a') ADVANCE(64);
      END_STATE();
    case 31:
      if (lookahead == 'c') ADVANCE(29);
      END_STATE();
    case 32:
      if (lookahead == 'c') ADVANCE(66);
      END_STATE();
    case 33:
      if (lookahead == 'd') ADVANCE(84);
      END_STATE();
    case 34:
      if (lookahead == 'e') ADVANCE(102);
      END_STATE();
    case 35:
      if (lookahead == 'e') ADVANCE(103);
      END_STATE();
    case 36:
      if (lookahead == 'e') ADVANCE(32);
      if (lookahead == 'o') ADVANCE(41);
      END_STATE();
    case 37:
      if (lookahead == 'e') ADVANCE(62);
      END_STATE();
    case 38:
      if (lookahead == 'f') ADVANCE(100);
      if (lookahead == 'n') ADVANCE(61);
      END_STATE();
    case 39:
      if (lookahead == 'g') ADVANCE(92);
      END_STATE();
    case 40:
      if (lookahead == 'h') ADVANCE(43);
      END_STATE();
    case 41:
      if (lookahead == 'i') ADVANCE(33);
      END_STATE();
    case 42:
      if (lookahead == 'i') ADVANCE(50);
      END_STATE();
    case 43:
      if (lookahead == 'i') ADVANCE(49);
      END_STATE();
    case 44:
      if (lookahead == 'i') ADVANCE(63);
      END_STATE();
    case 45:
      if (lookahead == 'l') ADVANCE(59);
      END_STATE();
    case 46:
      if (lookahead == 'l') ADVANCE(59);
      if (lookahead == 'n') ADVANCE(65);
      END_STATE();
    case 47:
      if (lookahead == 'l') ADVANCE(109);
      END_STATE();
    case 48:
      if (lookahead == 'l') ADVANCE(54);
      END_STATE();
    case 49:
      if (lookahead == 'l') ADVANCE(35);
      END_STATE();
    case 50:
      if (lookahead == 'n') ADVANCE(39);
      END_STATE();
    case 51:
      if (lookahead == 'n') ADVANCE(107);
      END_STATE();
    case 52:
      if (lookahead == 'o') ADVANCE(105);
      END_STATE();
    case 53:
      if (lookahead == 'o') ADVANCE(31);
      END_STATE();
    case 54:
      if (lookahead == 'o') ADVANCE(30);
      END_STATE();
    case 55:
      if (lookahead == 'o') ADVANCE(56);
      END_STATE();
    case 56:
      if (lookahead == 'r') ADVANCE(90);
      END_STATE();
    case 57:
      if (lookahead == 'r') ADVANCE(51);
      END_STATE();
    case 58:
      if (lookahead == 'r') ADVANCE(42);
      END_STATE();
    case 59:
      if (lookahead == 's') ADVANCE(34);
      END_STATE();
    case 60:
      if (lookahead == 't') ADVANCE(58);
      END_STATE();
    case 61:
      if (lookahead == 't') ADVANCE(94);
      END_STATE();
    case 62:
      if (lookahead == 't') ADVANCE(67);
      END_STATE();
    case 63:
      if (lookahead == 't') ADVANCE(68);
      END_STATE();
    case 64:
      if (lookahead == 't') ADVANCE(88);
      END_STATE();
    case 65:
      if (lookahead == 't') ADVANCE(44);
      END_STATE();
    case 66:
      if (lookahead == 't') ADVANCE(55);
      END_STATE();
    case 67:
      if (lookahead == 'u') ADVANCE(57);
      END_STATE();
    case 68:
      if (lookahead == 'y') ADVANCE(86);
      END_STATE();
    case 69:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(185);
      END_STATE();
    case 70:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(9);
      END_STATE();
    case 71:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(166);
      END_STATE();
    case 72:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(10);
      END_STATE();
    case 73:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(27);
      END_STATE();
    case 74:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(26);
      END_STATE();
    case 75:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(28);
      END_STATE();
    case 76:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(11);
      END_STATE();
    case 77:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(25);
      END_STATE();
    case 78:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(12);
      END_STATE();
    case 79:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 80:
      ACCEPT_TOKEN(anon_sym_SEMI);
      END_STATE();
    case 81:
      ACCEPT_TOKEN(anon_sym_EQ);
      if (lookahead == '=') ADVANCE(121);
      END_STATE();
    case 82:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 83:
      ACCEPT_TOKEN(anon_sym_DOT);
      END_STATE();
    case 84:
      ACCEPT_TOKEN(anon_sym_void);
      END_STATE();
    case 85:
      ACCEPT_TOKEN(anon_sym_void);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(164);
      END_STATE();
    case 86:
      ACCEPT_TOKEN(anon_sym_entity);
      END_STATE();
    case 87:
      ACCEPT_TOKEN(anon_sym_entity);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(164);
      END_STATE();
    case 88:
      ACCEPT_TOKEN(anon_sym_float);
      END_STATE();
    case 89:
      ACCEPT_TOKEN(anon_sym_float);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(164);
      END_STATE();
    case 90:
      ACCEPT_TOKEN(anon_sym_vector);
      END_STATE();
    case 91:
      ACCEPT_TOKEN(anon_sym_vector);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(164);
      END_STATE();
    case 92:
      ACCEPT_TOKEN(anon_sym_string);
      END_STATE();
    case 93:
      ACCEPT_TOKEN(anon_sym_string);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(164);
      END_STATE();
    case 94:
      ACCEPT_TOKEN(anon_sym_int);
      END_STATE();
    case 95:
      ACCEPT_TOKEN(anon_sym_int);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(164);
      END_STATE();
    case 96:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 97:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 98:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 99:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 100:
      ACCEPT_TOKEN(anon_sym_if);
      END_STATE();
    case 101:
      ACCEPT_TOKEN(anon_sym_if);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(164);
      END_STATE();
    case 102:
      ACCEPT_TOKEN(anon_sym_else);
      END_STATE();
    case 103:
      ACCEPT_TOKEN(anon_sym_while);
      END_STATE();
    case 104:
      ACCEPT_TOKEN(anon_sym_while);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(164);
      END_STATE();
    case 105:
      ACCEPT_TOKEN(anon_sym_do);
      END_STATE();
    case 106:
      ACCEPT_TOKEN(anon_sym_do);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(164);
      END_STATE();
    case 107:
      ACCEPT_TOKEN(anon_sym_return);
      END_STATE();
    case 108:
      ACCEPT_TOKEN(anon_sym_return);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(164);
      END_STATE();
    case 109:
      ACCEPT_TOKEN(anon_sym_local);
      END_STATE();
    case 110:
      ACCEPT_TOKEN(anon_sym_local);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(164);
      END_STATE();
    case 111:
      ACCEPT_TOKEN(anon_sym_DASH);
      END_STATE();
    case 112:
      ACCEPT_TOKEN(anon_sym_DASH);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(165);
      END_STATE();
    case 113:
      ACCEPT_TOKEN(anon_sym_PLUS);
      END_STATE();
    case 114:
      ACCEPT_TOKEN(anon_sym_STAR);
      END_STATE();
    case 115:
      ACCEPT_TOKEN(anon_sym_SLASH);
      if (lookahead == '*') ADVANCE(19);
      if (lookahead == '/') ADVANCE(187);
      END_STATE();
    case 116:
      ACCEPT_TOKEN(anon_sym_PIPE_PIPE);
      END_STATE();
    case 117:
      ACCEPT_TOKEN(anon_sym_AMP_AMP);
      END_STATE();
    case 118:
      ACCEPT_TOKEN(anon_sym_BANG);
      if (lookahead == '=') ADVANCE(122);
      END_STATE();
    case 119:
      ACCEPT_TOKEN(anon_sym_PIPE);
      if (lookahead == '|') ADVANCE(116);
      END_STATE();
    case 120:
      ACCEPT_TOKEN(anon_sym_AMP);
      if (lookahead == '&') ADVANCE(117);
      END_STATE();
    case 121:
      ACCEPT_TOKEN(anon_sym_EQ_EQ);
      END_STATE();
    case 122:
      ACCEPT_TOKEN(anon_sym_BANG_EQ);
      END_STATE();
    case 123:
      ACCEPT_TOKEN(anon_sym_GT);
      if (lookahead == '=') ADVANCE(124);
      END_STATE();
    case 124:
      ACCEPT_TOKEN(anon_sym_GT_EQ);
      END_STATE();
    case 125:
      ACCEPT_TOKEN(anon_sym_LT_EQ);
      END_STATE();
    case 126:
      ACCEPT_TOKEN(anon_sym_LT);
      if (lookahead == '=') ADVANCE(125);
      END_STATE();
    case 127:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(142);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(164);
      END_STATE();
    case 128:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(159);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(164);
      END_STATE();
    case 129:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'c') ADVANCE(127);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(164);
      END_STATE();
    case 130:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'c') ADVANCE(161);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(164);
      END_STATE();
    case 131:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'd') ADVANCE(85);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(164);
      END_STATE();
    case 132:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(104);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(164);
      END_STATE();
    case 133:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(130);
      if (lookahead == 'o') ADVANCE(138);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(164);
      END_STATE();
    case 134:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(157);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(164);
      END_STATE();
    case 135:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'f') ADVANCE(101);
      if (lookahead == 'n') ADVANCE(156);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(164);
      END_STATE();
    case 136:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'g') ADVANCE(93);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(164);
      END_STATE();
    case 137:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'h') ADVANCE(140);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(164);
      END_STATE();
    case 138:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(131);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(164);
      END_STATE();
    case 139:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(145);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(164);
      END_STATE();
    case 140:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(143);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(164);
      END_STATE();
    case 141:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(158);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(164);
      END_STATE();
    case 142:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(110);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(164);
      END_STATE();
    case 143:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(132);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(164);
      END_STATE();
    case 144:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(150);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(164);
      END_STATE();
    case 145:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(136);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(164);
      END_STATE();
    case 146:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(108);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(164);
      END_STATE();
    case 147:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(160);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(164);
      END_STATE();
    case 148:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(106);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(164);
      END_STATE();
    case 149:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(129);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(164);
      END_STATE();
    case 150:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(128);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(164);
      END_STATE();
    case 151:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(152);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(164);
      END_STATE();
    case 152:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(91);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(164);
      END_STATE();
    case 153:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(146);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(164);
      END_STATE();
    case 154:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(139);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(164);
      END_STATE();
    case 155:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(154);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(164);
      END_STATE();
    case 156:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(95);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(164);
      END_STATE();
    case 157:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(162);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(164);
      END_STATE();
    case 158:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(163);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(164);
      END_STATE();
    case 159:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(89);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(164);
      END_STATE();
    case 160:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(141);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(164);
      END_STATE();
    case 161:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(151);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(164);
      END_STATE();
    case 162:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'u') ADVANCE(153);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(164);
      END_STATE();
    case 163:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'y') ADVANCE(87);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(164);
      END_STATE();
    case 164:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(164);
      END_STATE();
    case 165:
      ACCEPT_TOKEN(aux_sym__numeric_literal_token1);
      if (lookahead == '.') ADVANCE(71);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(165);
      END_STATE();
    case 166:
      ACCEPT_TOKEN(aux_sym__numeric_literal_token2);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(166);
      END_STATE();
    case 167:
      ACCEPT_TOKEN(aux_sym__vector_literal_token1);
      END_STATE();
    case 168:
      ACCEPT_TOKEN(aux_sym__vector_literal_token2);
      END_STATE();
    case 169:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 170:
      ACCEPT_TOKEN(aux_sym__string_literal_token1);
      if (lookahead == '*') ADVANCE(172);
      if (lookahead == '/') ADVANCE(174);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(174);
      END_STATE();
    case 171:
      ACCEPT_TOKEN(aux_sym__string_literal_token1);
      if (lookahead == '*') ADVANCE(171);
      if (lookahead == '/') ADVANCE(174);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(172);
      END_STATE();
    case 172:
      ACCEPT_TOKEN(aux_sym__string_literal_token1);
      if (lookahead == '*') ADVANCE(171);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(172);
      END_STATE();
    case 173:
      ACCEPT_TOKEN(aux_sym__string_literal_token1);
      if (lookahead == '/') ADVANCE(170);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(173);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(174);
      END_STATE();
    case 174:
      ACCEPT_TOKEN(aux_sym__string_literal_token1);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(174);
      END_STATE();
    case 175:
      ACCEPT_TOKEN(aux_sym__string_literal_token2);
      END_STATE();
    case 176:
      ACCEPT_TOKEN(aux_sym__string_literal_token3);
      if (lookahead == '\n') ADVANCE(183);
      if (lookahead == '\r') ADVANCE(178);
      if (lookahead == 'n' ||
          lookahead == 'r') ADVANCE(175);
      if (lookahead != 0 &&
          lookahead != '"') ADVANCE(184);
      END_STATE();
    case 177:
      ACCEPT_TOKEN(aux_sym__string_literal_token3);
      if (lookahead == '\n') ADVANCE(183);
      if (lookahead == '/') ADVANCE(170);
      if (lookahead == '\\') ADVANCE(176);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(173);
      if (lookahead != 0 &&
          lookahead != '"') ADVANCE(174);
      END_STATE();
    case 178:
      ACCEPT_TOKEN(aux_sym__string_literal_token3);
      if (lookahead == '\n') ADVANCE(183);
      if (lookahead != 0 &&
          lookahead != '"') ADVANCE(184);
      END_STATE();
    case 179:
      ACCEPT_TOKEN(aux_sym__string_literal_token3);
      if (lookahead == '\n') ADVANCE(184);
      if (lookahead == '"') ADVANCE(187);
      if (lookahead != 0) ADVANCE(179);
      END_STATE();
    case 180:
      ACCEPT_TOKEN(aux_sym__string_literal_token3);
      if (lookahead == '"') ADVANCE(19);
      if (lookahead == '*') ADVANCE(180);
      if (lookahead == '/') ADVANCE(184);
      if (lookahead != 0) ADVANCE(181);
      END_STATE();
    case 181:
      ACCEPT_TOKEN(aux_sym__string_literal_token3);
      if (lookahead == '"') ADVANCE(19);
      if (lookahead == '*') ADVANCE(180);
      if (lookahead != 0) ADVANCE(181);
      END_STATE();
    case 182:
      ACCEPT_TOKEN(aux_sym__string_literal_token3);
      if (lookahead == '*') ADVANCE(181);
      if (lookahead == '/') ADVANCE(179);
      if (lookahead != 0 &&
          lookahead != '"') ADVANCE(184);
      END_STATE();
    case 183:
      ACCEPT_TOKEN(aux_sym__string_literal_token3);
      if (lookahead == '/') ADVANCE(182);
      if (lookahead == '\\') ADVANCE(176);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(183);
      if (lookahead != 0 &&
          lookahead != '"') ADVANCE(184);
      END_STATE();
    case 184:
      ACCEPT_TOKEN(aux_sym__string_literal_token3);
      if (lookahead != 0 &&
          lookahead != '"') ADVANCE(184);
      END_STATE();
    case 185:
      ACCEPT_TOKEN(sym__builtin_literal);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(185);
      END_STATE();
    case 186:
      ACCEPT_TOKEN(sym_comment);
      END_STATE();
    case 187:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(187);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 0},
  [2] = {.lex_state = 15},
  [3] = {.lex_state = 15},
  [4] = {.lex_state = 15},
  [5] = {.lex_state = 15},
  [6] = {.lex_state = 15},
  [7] = {.lex_state = 15},
  [8] = {.lex_state = 15},
  [9] = {.lex_state = 15},
  [10] = {.lex_state = 14},
  [11] = {.lex_state = 15},
  [12] = {.lex_state = 14},
  [13] = {.lex_state = 14},
  [14] = {.lex_state = 14},
  [15] = {.lex_state = 14},
  [16] = {.lex_state = 14},
  [17] = {.lex_state = 14},
  [18] = {.lex_state = 14},
  [19] = {.lex_state = 14},
  [20] = {.lex_state = 14},
  [21] = {.lex_state = 14},
  [22] = {.lex_state = 14},
  [23] = {.lex_state = 14},
  [24] = {.lex_state = 14},
  [25] = {.lex_state = 14},
  [26] = {.lex_state = 14},
  [27] = {.lex_state = 14},
  [28] = {.lex_state = 14},
  [29] = {.lex_state = 16},
  [30] = {.lex_state = 16},
  [31] = {.lex_state = 16},
  [32] = {.lex_state = 14},
  [33] = {.lex_state = 16},
  [34] = {.lex_state = 14},
  [35] = {.lex_state = 14},
  [36] = {.lex_state = 16},
  [37] = {.lex_state = 16},
  [38] = {.lex_state = 16},
  [39] = {.lex_state = 16},
  [40] = {.lex_state = 16},
  [41] = {.lex_state = 16},
  [42] = {.lex_state = 16},
  [43] = {.lex_state = 14},
  [44] = {.lex_state = 16},
  [45] = {.lex_state = 16},
  [46] = {.lex_state = 16},
  [47] = {.lex_state = 16},
  [48] = {.lex_state = 16},
  [49] = {.lex_state = 16},
  [50] = {.lex_state = 14},
  [51] = {.lex_state = 0},
  [52] = {.lex_state = 14},
  [53] = {.lex_state = 0},
  [54] = {.lex_state = 14},
  [55] = {.lex_state = 14},
  [56] = {.lex_state = 14},
  [57] = {.lex_state = 0},
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
  [96] = {.lex_state = 177},
  [97] = {.lex_state = 0},
  [98] = {.lex_state = 177},
  [99] = {.lex_state = 0},
  [100] = {.lex_state = 0},
  [101] = {.lex_state = 177},
  [102] = {.lex_state = 0},
  [103] = {.lex_state = 0},
  [104] = {.lex_state = 0},
  [105] = {.lex_state = 0},
  [106] = {.lex_state = 0},
  [107] = {.lex_state = 0},
  [108] = {.lex_state = 16},
  [109] = {.lex_state = 0},
  [110] = {.lex_state = 0},
  [111] = {.lex_state = 0},
  [112] = {.lex_state = 0},
  [113] = {.lex_state = 0},
  [114] = {.lex_state = 0},
  [115] = {.lex_state = 0},
  [116] = {.lex_state = 0},
  [117] = {.lex_state = 0},
  [118] = {.lex_state = 0},
  [119] = {.lex_state = 0},
  [120] = {.lex_state = 0},
  [121] = {.lex_state = 16},
  [122] = {.lex_state = 0},
  [123] = {.lex_state = 0},
  [124] = {.lex_state = 0},
  [125] = {.lex_state = 0},
  [126] = {.lex_state = 16},
  [127] = {.lex_state = 16},
  [128] = {.lex_state = 16},
  [129] = {.lex_state = 16},
  [130] = {.lex_state = 0},
  [131] = {.lex_state = 16},
  [132] = {.lex_state = 16},
  [133] = {.lex_state = 16},
  [134] = {.lex_state = 0},
  [135] = {.lex_state = 16},
  [136] = {.lex_state = 16},
  [137] = {.lex_state = 16},
  [138] = {.lex_state = 0},
  [139] = {.lex_state = 16},
  [140] = {.lex_state = 0},
  [141] = {.lex_state = 0},
  [142] = {.lex_state = 16},
  [143] = {.lex_state = 16},
  [144] = {.lex_state = 0},
  [145] = {.lex_state = 16},
  [146] = {.lex_state = 16},
  [147] = {.lex_state = 0},
  [148] = {.lex_state = 16},
  [149] = {.lex_state = 0},
  [150] = {.lex_state = 0},
  [151] = {.lex_state = 0},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [anon_sym_SEMI] = ACTIONS(1),
    [anon_sym_EQ] = ACTIONS(1),
    [anon_sym_COMMA] = ACTIONS(1),
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
    [sym_source_file] = STATE(144),
    [sym__definition] = STATE(53),
    [sym_function_declaration] = STATE(53),
    [sym_function_definition] = STATE(53),
    [sym_constant_definition] = STATE(53),
    [sym_variable_definition] = STATE(53),
    [sym_field_definition] = STATE(53),
    [sym_simple_type] = STATE(108),
    [aux_sym_source_file_repeat1] = STATE(53),
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
  [2] = {
    [sym_simple_type] = STATE(143),
    [sym__statement] = STATE(141),
    [sym__compound_statement] = STATE(141),
    [sym__simple_statement] = STATE(141),
    [sym_assignment_statement] = STATE(141),
    [sym_if_statement] = STATE(141),
    [sym_while_statement] = STATE(141),
    [sym_do_while_statement] = STATE(141),
    [sym_return_statement] = STATE(141),
    [sym_variable_definition_statement] = STATE(141),
    [sym__expression_statement] = STATE(141),
    [sym__expression] = STATE(43),
    [sym_unary_expression] = STATE(43),
    [sym_binary_expression] = STATE(43),
    [sym_funcall_expression] = STATE(43),
    [sym_parenthesized_expression] = STATE(43),
    [sym_literal] = STATE(43),
    [sym__numeric_literal] = STATE(27),
    [sym__vector_literal] = STATE(27),
    [sym__string_literal] = STATE(27),
    [anon_sym_void] = ACTIONS(11),
    [anon_sym_entity] = ACTIONS(11),
    [anon_sym_float] = ACTIONS(11),
    [anon_sym_vector] = ACTIONS(11),
    [anon_sym_string] = ACTIONS(11),
    [anon_sym_int] = ACTIONS(11),
    [anon_sym_LPAREN] = ACTIONS(13),
    [anon_sym_LBRACE] = ACTIONS(15),
    [anon_sym_if] = ACTIONS(17),
    [anon_sym_while] = ACTIONS(19),
    [anon_sym_do] = ACTIONS(21),
    [anon_sym_return] = ACTIONS(23),
    [anon_sym_local] = ACTIONS(25),
    [anon_sym_DASH] = ACTIONS(27),
    [anon_sym_PLUS] = ACTIONS(29),
    [sym_identifier] = ACTIONS(31),
    [aux_sym__numeric_literal_token1] = ACTIONS(33),
    [aux_sym__numeric_literal_token2] = ACTIONS(35),
    [aux_sym__vector_literal_token1] = ACTIONS(35),
    [aux_sym__vector_literal_token2] = ACTIONS(35),
    [anon_sym_DQUOTE] = ACTIONS(37),
    [sym__builtin_literal] = ACTIONS(39),
    [sym_comment] = ACTIONS(3),
  },
  [3] = {
    [sym_simple_type] = STATE(143),
    [sym__statement] = STATE(118),
    [sym__compound_statement] = STATE(118),
    [sym__simple_statement] = STATE(118),
    [sym_assignment_statement] = STATE(118),
    [sym_if_statement] = STATE(118),
    [sym_while_statement] = STATE(118),
    [sym_do_while_statement] = STATE(118),
    [sym_return_statement] = STATE(118),
    [sym_variable_definition_statement] = STATE(118),
    [sym__expression_statement] = STATE(118),
    [sym__expression] = STATE(43),
    [sym_unary_expression] = STATE(43),
    [sym_binary_expression] = STATE(43),
    [sym_funcall_expression] = STATE(43),
    [sym_parenthesized_expression] = STATE(43),
    [sym_literal] = STATE(43),
    [sym__numeric_literal] = STATE(27),
    [sym__vector_literal] = STATE(27),
    [sym__string_literal] = STATE(27),
    [anon_sym_void] = ACTIONS(11),
    [anon_sym_entity] = ACTIONS(11),
    [anon_sym_float] = ACTIONS(11),
    [anon_sym_vector] = ACTIONS(11),
    [anon_sym_string] = ACTIONS(11),
    [anon_sym_int] = ACTIONS(11),
    [anon_sym_LPAREN] = ACTIONS(13),
    [anon_sym_LBRACE] = ACTIONS(15),
    [anon_sym_if] = ACTIONS(17),
    [anon_sym_while] = ACTIONS(19),
    [anon_sym_do] = ACTIONS(21),
    [anon_sym_return] = ACTIONS(23),
    [anon_sym_local] = ACTIONS(25),
    [anon_sym_DASH] = ACTIONS(27),
    [anon_sym_PLUS] = ACTIONS(29),
    [sym_identifier] = ACTIONS(31),
    [aux_sym__numeric_literal_token1] = ACTIONS(33),
    [aux_sym__numeric_literal_token2] = ACTIONS(35),
    [aux_sym__vector_literal_token1] = ACTIONS(35),
    [aux_sym__vector_literal_token2] = ACTIONS(35),
    [anon_sym_DQUOTE] = ACTIONS(37),
    [sym_comment] = ACTIONS(3),
  },
  [4] = {
    [sym_simple_type] = STATE(143),
    [sym__statement] = STATE(119),
    [sym__compound_statement] = STATE(119),
    [sym__simple_statement] = STATE(119),
    [sym_assignment_statement] = STATE(119),
    [sym_if_statement] = STATE(119),
    [sym_while_statement] = STATE(119),
    [sym_do_while_statement] = STATE(119),
    [sym_return_statement] = STATE(119),
    [sym_variable_definition_statement] = STATE(119),
    [sym__expression_statement] = STATE(119),
    [sym__expression] = STATE(43),
    [sym_unary_expression] = STATE(43),
    [sym_binary_expression] = STATE(43),
    [sym_funcall_expression] = STATE(43),
    [sym_parenthesized_expression] = STATE(43),
    [sym_literal] = STATE(43),
    [sym__numeric_literal] = STATE(27),
    [sym__vector_literal] = STATE(27),
    [sym__string_literal] = STATE(27),
    [anon_sym_void] = ACTIONS(11),
    [anon_sym_entity] = ACTIONS(11),
    [anon_sym_float] = ACTIONS(11),
    [anon_sym_vector] = ACTIONS(11),
    [anon_sym_string] = ACTIONS(11),
    [anon_sym_int] = ACTIONS(11),
    [anon_sym_LPAREN] = ACTIONS(13),
    [anon_sym_LBRACE] = ACTIONS(15),
    [anon_sym_if] = ACTIONS(17),
    [anon_sym_while] = ACTIONS(19),
    [anon_sym_do] = ACTIONS(21),
    [anon_sym_return] = ACTIONS(23),
    [anon_sym_local] = ACTIONS(25),
    [anon_sym_DASH] = ACTIONS(27),
    [anon_sym_PLUS] = ACTIONS(29),
    [sym_identifier] = ACTIONS(31),
    [aux_sym__numeric_literal_token1] = ACTIONS(33),
    [aux_sym__numeric_literal_token2] = ACTIONS(35),
    [aux_sym__vector_literal_token1] = ACTIONS(35),
    [aux_sym__vector_literal_token2] = ACTIONS(35),
    [anon_sym_DQUOTE] = ACTIONS(37),
    [sym_comment] = ACTIONS(3),
  },
  [5] = {
    [sym_simple_type] = STATE(143),
    [sym__statement] = STATE(103),
    [sym__compound_statement] = STATE(103),
    [sym__simple_statement] = STATE(103),
    [sym_assignment_statement] = STATE(103),
    [sym_if_statement] = STATE(103),
    [sym_while_statement] = STATE(103),
    [sym_do_while_statement] = STATE(103),
    [sym_return_statement] = STATE(103),
    [sym_variable_definition_statement] = STATE(103),
    [sym__expression_statement] = STATE(103),
    [sym__expression] = STATE(43),
    [sym_unary_expression] = STATE(43),
    [sym_binary_expression] = STATE(43),
    [sym_funcall_expression] = STATE(43),
    [sym_parenthesized_expression] = STATE(43),
    [sym_literal] = STATE(43),
    [sym__numeric_literal] = STATE(27),
    [sym__vector_literal] = STATE(27),
    [sym__string_literal] = STATE(27),
    [anon_sym_void] = ACTIONS(11),
    [anon_sym_entity] = ACTIONS(11),
    [anon_sym_float] = ACTIONS(11),
    [anon_sym_vector] = ACTIONS(11),
    [anon_sym_string] = ACTIONS(11),
    [anon_sym_int] = ACTIONS(11),
    [anon_sym_LPAREN] = ACTIONS(13),
    [anon_sym_LBRACE] = ACTIONS(15),
    [anon_sym_if] = ACTIONS(17),
    [anon_sym_while] = ACTIONS(19),
    [anon_sym_do] = ACTIONS(21),
    [anon_sym_return] = ACTIONS(23),
    [anon_sym_local] = ACTIONS(25),
    [anon_sym_DASH] = ACTIONS(27),
    [anon_sym_PLUS] = ACTIONS(29),
    [sym_identifier] = ACTIONS(31),
    [aux_sym__numeric_literal_token1] = ACTIONS(33),
    [aux_sym__numeric_literal_token2] = ACTIONS(35),
    [aux_sym__vector_literal_token1] = ACTIONS(35),
    [aux_sym__vector_literal_token2] = ACTIONS(35),
    [anon_sym_DQUOTE] = ACTIONS(37),
    [sym_comment] = ACTIONS(3),
  },
  [6] = {
    [sym_simple_type] = STATE(143),
    [sym__statement] = STATE(149),
    [sym__compound_statement] = STATE(149),
    [sym__simple_statement] = STATE(149),
    [sym_assignment_statement] = STATE(149),
    [sym_if_statement] = STATE(149),
    [sym_while_statement] = STATE(149),
    [sym_do_while_statement] = STATE(149),
    [sym_return_statement] = STATE(149),
    [sym_variable_definition_statement] = STATE(149),
    [sym__expression_statement] = STATE(149),
    [sym__expression] = STATE(43),
    [sym_unary_expression] = STATE(43),
    [sym_binary_expression] = STATE(43),
    [sym_funcall_expression] = STATE(43),
    [sym_parenthesized_expression] = STATE(43),
    [sym_literal] = STATE(43),
    [sym__numeric_literal] = STATE(27),
    [sym__vector_literal] = STATE(27),
    [sym__string_literal] = STATE(27),
    [anon_sym_void] = ACTIONS(11),
    [anon_sym_entity] = ACTIONS(11),
    [anon_sym_float] = ACTIONS(11),
    [anon_sym_vector] = ACTIONS(11),
    [anon_sym_string] = ACTIONS(11),
    [anon_sym_int] = ACTIONS(11),
    [anon_sym_LPAREN] = ACTIONS(13),
    [anon_sym_LBRACE] = ACTIONS(15),
    [anon_sym_if] = ACTIONS(17),
    [anon_sym_while] = ACTIONS(19),
    [anon_sym_do] = ACTIONS(21),
    [anon_sym_return] = ACTIONS(23),
    [anon_sym_local] = ACTIONS(25),
    [anon_sym_DASH] = ACTIONS(27),
    [anon_sym_PLUS] = ACTIONS(29),
    [sym_identifier] = ACTIONS(31),
    [aux_sym__numeric_literal_token1] = ACTIONS(33),
    [aux_sym__numeric_literal_token2] = ACTIONS(35),
    [aux_sym__vector_literal_token1] = ACTIONS(35),
    [aux_sym__vector_literal_token2] = ACTIONS(35),
    [anon_sym_DQUOTE] = ACTIONS(37),
    [sym_comment] = ACTIONS(3),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 20,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(44), 1,
      anon_sym_LPAREN,
    ACTIONS(47), 1,
      anon_sym_RBRACE,
    ACTIONS(49), 1,
      anon_sym_if,
    ACTIONS(52), 1,
      anon_sym_while,
    ACTIONS(55), 1,
      anon_sym_do,
    ACTIONS(58), 1,
      anon_sym_return,
    ACTIONS(61), 1,
      anon_sym_local,
    ACTIONS(64), 1,
      anon_sym_DASH,
    ACTIONS(67), 1,
      anon_sym_PLUS,
    ACTIONS(70), 1,
      sym_identifier,
    ACTIONS(73), 1,
      aux_sym__numeric_literal_token1,
    ACTIONS(79), 1,
      anon_sym_DQUOTE,
    STATE(7), 1,
      aux_sym__compound_statement_repeat1,
    STATE(143), 1,
      sym_simple_type,
    ACTIONS(76), 3,
      aux_sym__numeric_literal_token2,
      aux_sym__vector_literal_token1,
      aux_sym__vector_literal_token2,
    STATE(27), 3,
      sym__numeric_literal,
      sym__vector_literal,
      sym__string_literal,
    ACTIONS(41), 6,
      anon_sym_void,
      anon_sym_entity,
      anon_sym_float,
      anon_sym_vector,
      anon_sym_string,
      anon_sym_int,
    STATE(43), 6,
      sym__expression,
      sym_unary_expression,
      sym_binary_expression,
      sym_funcall_expression,
      sym_parenthesized_expression,
      sym_literal,
    STATE(150), 8,
      sym__simple_statement,
      sym_assignment_statement,
      sym_if_statement,
      sym_while_statement,
      sym_do_while_statement,
      sym_return_statement,
      sym_variable_definition_statement,
      sym__expression_statement,
  [82] = 20,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(13), 1,
      anon_sym_LPAREN,
    ACTIONS(17), 1,
      anon_sym_if,
    ACTIONS(19), 1,
      anon_sym_while,
    ACTIONS(21), 1,
      anon_sym_do,
    ACTIONS(23), 1,
      anon_sym_return,
    ACTIONS(25), 1,
      anon_sym_local,
    ACTIONS(27), 1,
      anon_sym_DASH,
    ACTIONS(29), 1,
      anon_sym_PLUS,
    ACTIONS(31), 1,
      sym_identifier,
    ACTIONS(33), 1,
      aux_sym__numeric_literal_token1,
    ACTIONS(37), 1,
      anon_sym_DQUOTE,
    ACTIONS(82), 1,
      anon_sym_RBRACE,
    STATE(7), 1,
      aux_sym__compound_statement_repeat1,
    STATE(143), 1,
      sym_simple_type,
    ACTIONS(35), 3,
      aux_sym__numeric_literal_token2,
      aux_sym__vector_literal_token1,
      aux_sym__vector_literal_token2,
    STATE(27), 3,
      sym__numeric_literal,
      sym__vector_literal,
      sym__string_literal,
    ACTIONS(11), 6,
      anon_sym_void,
      anon_sym_entity,
      anon_sym_float,
      anon_sym_vector,
      anon_sym_string,
      anon_sym_int,
    STATE(43), 6,
      sym__expression,
      sym_unary_expression,
      sym_binary_expression,
      sym_funcall_expression,
      sym_parenthesized_expression,
      sym_literal,
    STATE(150), 8,
      sym__simple_statement,
      sym_assignment_statement,
      sym_if_statement,
      sym_while_statement,
      sym_do_while_statement,
      sym_return_statement,
      sym_variable_definition_statement,
      sym__expression_statement,
  [164] = 20,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(13), 1,
      anon_sym_LPAREN,
    ACTIONS(17), 1,
      anon_sym_if,
    ACTIONS(19), 1,
      anon_sym_while,
    ACTIONS(21), 1,
      anon_sym_do,
    ACTIONS(23), 1,
      anon_sym_return,
    ACTIONS(25), 1,
      anon_sym_local,
    ACTIONS(27), 1,
      anon_sym_DASH,
    ACTIONS(29), 1,
      anon_sym_PLUS,
    ACTIONS(31), 1,
      sym_identifier,
    ACTIONS(33), 1,
      aux_sym__numeric_literal_token1,
    ACTIONS(37), 1,
      anon_sym_DQUOTE,
    ACTIONS(84), 1,
      anon_sym_RBRACE,
    STATE(8), 1,
      aux_sym__compound_statement_repeat1,
    STATE(143), 1,
      sym_simple_type,
    ACTIONS(35), 3,
      aux_sym__numeric_literal_token2,
      aux_sym__vector_literal_token1,
      aux_sym__vector_literal_token2,
    STATE(27), 3,
      sym__numeric_literal,
      sym__vector_literal,
      sym__string_literal,
    ACTIONS(11), 6,
      anon_sym_void,
      anon_sym_entity,
      anon_sym_float,
      anon_sym_vector,
      anon_sym_string,
      anon_sym_int,
    STATE(43), 6,
      sym__expression,
      sym_unary_expression,
      sym_binary_expression,
      sym_funcall_expression,
      sym_parenthesized_expression,
      sym_literal,
    STATE(150), 8,
      sym__simple_statement,
      sym_assignment_statement,
      sym_if_statement,
      sym_while_statement,
      sym_do_while_statement,
      sym_return_statement,
      sym_variable_definition_statement,
      sym__expression_statement,
  [246] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(88), 1,
      anon_sym_LPAREN,
    ACTIONS(90), 6,
      anon_sym_SLASH,
      anon_sym_BANG,
      anon_sym_PIPE,
      anon_sym_AMP,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(86), 14,
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
  [277] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(47), 7,
      anon_sym_LPAREN,
      anon_sym_RBRACE,
      anon_sym_PLUS,
      aux_sym__numeric_literal_token2,
      aux_sym__vector_literal_token1,
      aux_sym__vector_literal_token2,
      anon_sym_DQUOTE,
    ACTIONS(92), 14,
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
  [306] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(96), 6,
      anon_sym_SLASH,
      anon_sym_BANG,
      anon_sym_PIPE,
      anon_sym_AMP,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(94), 14,
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
  [334] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(100), 6,
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
  [362] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(104), 6,
      anon_sym_SLASH,
      anon_sym_BANG,
      anon_sym_PIPE,
      anon_sym_AMP,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(102), 14,
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
  [390] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(108), 6,
      anon_sym_SLASH,
      anon_sym_BANG,
      anon_sym_PIPE,
      anon_sym_AMP,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(106), 14,
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
  [418] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(112), 6,
      anon_sym_SLASH,
      anon_sym_BANG,
      anon_sym_PIPE,
      anon_sym_AMP,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(110), 14,
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
  [446] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(88), 1,
      anon_sym_LPAREN,
    ACTIONS(114), 1,
      anon_sym_EQ,
    ACTIONS(90), 6,
      anon_sym_SLASH,
      anon_sym_BANG,
      anon_sym_PIPE,
      anon_sym_AMP,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(86), 12,
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
  [478] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(118), 6,
      anon_sym_SLASH,
      anon_sym_BANG,
      anon_sym_PIPE,
      anon_sym_AMP,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(116), 14,
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
  [506] = 3,
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
  [534] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(128), 1,
      anon_sym_STAR,
    ACTIONS(130), 1,
      anon_sym_SLASH,
    ACTIONS(134), 1,
      anon_sym_PIPE,
    ACTIONS(136), 1,
      anon_sym_AMP,
    ACTIONS(126), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(132), 3,
      anon_sym_BANG,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(124), 11,
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
  [572] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(128), 1,
      anon_sym_STAR,
    ACTIONS(130), 1,
      anon_sym_SLASH,
    ACTIONS(132), 5,
      anon_sym_BANG,
      anon_sym_PIPE,
      anon_sym_AMP,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(124), 13,
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
  [604] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(128), 1,
      anon_sym_STAR,
    ACTIONS(130), 1,
      anon_sym_SLASH,
    ACTIONS(136), 1,
      anon_sym_AMP,
    ACTIONS(132), 4,
      anon_sym_BANG,
      anon_sym_PIPE,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(124), 13,
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
  [638] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(128), 1,
      anon_sym_STAR,
    ACTIONS(130), 1,
      anon_sym_SLASH,
    ACTIONS(132), 1,
      anon_sym_BANG,
    ACTIONS(134), 1,
      anon_sym_PIPE,
    ACTIONS(136), 1,
      anon_sym_AMP,
    ACTIONS(126), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(140), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(138), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
    ACTIONS(124), 7,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_else,
      anon_sym_while,
      anon_sym_PIPE_PIPE,
      anon_sym_AMP_AMP,
  [680] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(128), 1,
      anon_sym_STAR,
    ACTIONS(130), 1,
      anon_sym_SLASH,
    ACTIONS(134), 1,
      anon_sym_PIPE,
    ACTIONS(136), 1,
      anon_sym_AMP,
    ACTIONS(142), 1,
      anon_sym_BANG,
    ACTIONS(126), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(140), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(138), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
    ACTIONS(124), 7,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_else,
      anon_sym_while,
      anon_sym_PIPE_PIPE,
      anon_sym_AMP_AMP,
  [722] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(128), 1,
      anon_sym_STAR,
    ACTIONS(130), 1,
      anon_sym_SLASH,
    ACTIONS(134), 1,
      anon_sym_PIPE,
    ACTIONS(136), 1,
      anon_sym_AMP,
    ACTIONS(142), 1,
      anon_sym_BANG,
    ACTIONS(144), 1,
      anon_sym_AMP_AMP,
    ACTIONS(126), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(140), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(138), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
    ACTIONS(124), 6,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_else,
      anon_sym_while,
      anon_sym_PIPE_PIPE,
  [766] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(132), 6,
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
  [794] = 3,
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
  [822] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(128), 1,
      anon_sym_STAR,
    ACTIONS(130), 1,
      anon_sym_SLASH,
    ACTIONS(134), 1,
      anon_sym_PIPE,
    ACTIONS(136), 1,
      anon_sym_AMP,
    ACTIONS(132), 3,
      anon_sym_BANG,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(124), 13,
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
  [858] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(13), 1,
      anon_sym_LPAREN,
    ACTIONS(27), 1,
      anon_sym_DASH,
    ACTIONS(29), 1,
      anon_sym_PLUS,
    ACTIONS(33), 1,
      aux_sym__numeric_literal_token1,
    ACTIONS(37), 1,
      anon_sym_DQUOTE,
    ACTIONS(150), 1,
      anon_sym_RPAREN,
    ACTIONS(152), 1,
      sym_identifier,
    ACTIONS(35), 3,
      aux_sym__numeric_literal_token2,
      aux_sym__vector_literal_token1,
      aux_sym__vector_literal_token2,
    STATE(27), 3,
      sym__numeric_literal,
      sym__vector_literal,
      sym__string_literal,
    STATE(32), 6,
      sym__expression,
      sym_unary_expression,
      sym_binary_expression,
      sym_funcall_expression,
      sym_parenthesized_expression,
      sym_literal,
  [901] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(13), 1,
      anon_sym_LPAREN,
    ACTIONS(27), 1,
      anon_sym_DASH,
    ACTIONS(29), 1,
      anon_sym_PLUS,
    ACTIONS(33), 1,
      aux_sym__numeric_literal_token1,
    ACTIONS(37), 1,
      anon_sym_DQUOTE,
    ACTIONS(152), 1,
      sym_identifier,
    ACTIONS(35), 3,
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
  [941] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(13), 1,
      anon_sym_LPAREN,
    ACTIONS(27), 1,
      anon_sym_DASH,
    ACTIONS(29), 1,
      anon_sym_PLUS,
    ACTIONS(33), 1,
      aux_sym__numeric_literal_token1,
    ACTIONS(37), 1,
      anon_sym_DQUOTE,
    ACTIONS(152), 1,
      sym_identifier,
    ACTIONS(35), 3,
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
  [981] = 14,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(128), 1,
      anon_sym_STAR,
    ACTIONS(130), 1,
      anon_sym_SLASH,
    ACTIONS(134), 1,
      anon_sym_PIPE,
    ACTIONS(136), 1,
      anon_sym_AMP,
    ACTIONS(142), 1,
      anon_sym_BANG,
    ACTIONS(144), 1,
      anon_sym_AMP_AMP,
    ACTIONS(154), 1,
      anon_sym_COMMA,
    ACTIONS(156), 1,
      anon_sym_RPAREN,
    ACTIONS(158), 1,
      anon_sym_PIPE_PIPE,
    STATE(115), 1,
      aux_sym_funcall_expression_repeat1,
    ACTIONS(126), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(140), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(138), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
  [1029] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(13), 1,
      anon_sym_LPAREN,
    ACTIONS(27), 1,
      anon_sym_DASH,
    ACTIONS(29), 1,
      anon_sym_PLUS,
    ACTIONS(33), 1,
      aux_sym__numeric_literal_token1,
    ACTIONS(37), 1,
      anon_sym_DQUOTE,
    ACTIONS(152), 1,
      sym_identifier,
    ACTIONS(35), 3,
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
  [1069] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(128), 1,
      anon_sym_STAR,
    ACTIONS(130), 1,
      anon_sym_SLASH,
    ACTIONS(134), 1,
      anon_sym_PIPE,
    ACTIONS(136), 1,
      anon_sym_AMP,
    ACTIONS(142), 1,
      anon_sym_BANG,
    ACTIONS(144), 1,
      anon_sym_AMP_AMP,
    ACTIONS(158), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(126), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(140), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(160), 3,
      anon_sym_SEMI,
      anon_sym_else,
      anon_sym_while,
    ACTIONS(138), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
  [1113] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(128), 1,
      anon_sym_STAR,
    ACTIONS(130), 1,
      anon_sym_SLASH,
    ACTIONS(134), 1,
      anon_sym_PIPE,
    ACTIONS(136), 1,
      anon_sym_AMP,
    ACTIONS(142), 1,
      anon_sym_BANG,
    ACTIONS(144), 1,
      anon_sym_AMP_AMP,
    ACTIONS(158), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(126), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(140), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(162), 3,
      anon_sym_SEMI,
      anon_sym_else,
      anon_sym_while,
    ACTIONS(138), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
  [1157] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(13), 1,
      anon_sym_LPAREN,
    ACTIONS(27), 1,
      anon_sym_DASH,
    ACTIONS(29), 1,
      anon_sym_PLUS,
    ACTIONS(33), 1,
      aux_sym__numeric_literal_token1,
    ACTIONS(37), 1,
      anon_sym_DQUOTE,
    ACTIONS(152), 1,
      sym_identifier,
    ACTIONS(35), 3,
      aux_sym__numeric_literal_token2,
      aux_sym__vector_literal_token1,
      aux_sym__vector_literal_token2,
    STATE(27), 3,
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
  [1197] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(13), 1,
      anon_sym_LPAREN,
    ACTIONS(27), 1,
      anon_sym_DASH,
    ACTIONS(29), 1,
      anon_sym_PLUS,
    ACTIONS(33), 1,
      aux_sym__numeric_literal_token1,
    ACTIONS(37), 1,
      anon_sym_DQUOTE,
    ACTIONS(152), 1,
      sym_identifier,
    ACTIONS(35), 3,
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
  [1237] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(13), 1,
      anon_sym_LPAREN,
    ACTIONS(27), 1,
      anon_sym_DASH,
    ACTIONS(29), 1,
      anon_sym_PLUS,
    ACTIONS(33), 1,
      aux_sym__numeric_literal_token1,
    ACTIONS(37), 1,
      anon_sym_DQUOTE,
    ACTIONS(152), 1,
      sym_identifier,
    ACTIONS(35), 3,
      aux_sym__numeric_literal_token2,
      aux_sym__vector_literal_token1,
      aux_sym__vector_literal_token2,
    STATE(27), 3,
      sym__numeric_literal,
      sym__vector_literal,
      sym__string_literal,
    STATE(54), 6,
      sym__expression,
      sym_unary_expression,
      sym_binary_expression,
      sym_funcall_expression,
      sym_parenthesized_expression,
      sym_literal,
  [1277] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(13), 1,
      anon_sym_LPAREN,
    ACTIONS(27), 1,
      anon_sym_DASH,
    ACTIONS(29), 1,
      anon_sym_PLUS,
    ACTIONS(33), 1,
      aux_sym__numeric_literal_token1,
    ACTIONS(37), 1,
      anon_sym_DQUOTE,
    ACTIONS(152), 1,
      sym_identifier,
    ACTIONS(35), 3,
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
  [1317] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(13), 1,
      anon_sym_LPAREN,
    ACTIONS(27), 1,
      anon_sym_DASH,
    ACTIONS(29), 1,
      anon_sym_PLUS,
    ACTIONS(33), 1,
      aux_sym__numeric_literal_token1,
    ACTIONS(37), 1,
      anon_sym_DQUOTE,
    ACTIONS(152), 1,
      sym_identifier,
    ACTIONS(35), 3,
      aux_sym__numeric_literal_token2,
      aux_sym__vector_literal_token1,
      aux_sym__vector_literal_token2,
    STATE(27), 3,
      sym__numeric_literal,
      sym__vector_literal,
      sym__string_literal,
    STATE(50), 6,
      sym__expression,
      sym_unary_expression,
      sym_binary_expression,
      sym_funcall_expression,
      sym_parenthesized_expression,
      sym_literal,
  [1357] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(13), 1,
      anon_sym_LPAREN,
    ACTIONS(27), 1,
      anon_sym_DASH,
    ACTIONS(29), 1,
      anon_sym_PLUS,
    ACTIONS(33), 1,
      aux_sym__numeric_literal_token1,
    ACTIONS(37), 1,
      anon_sym_DQUOTE,
    ACTIONS(152), 1,
      sym_identifier,
    ACTIONS(35), 3,
      aux_sym__numeric_literal_token2,
      aux_sym__vector_literal_token1,
      aux_sym__vector_literal_token2,
    STATE(27), 3,
      sym__numeric_literal,
      sym__vector_literal,
      sym__string_literal,
    STATE(25), 6,
      sym__expression,
      sym_unary_expression,
      sym_binary_expression,
      sym_funcall_expression,
      sym_parenthesized_expression,
      sym_literal,
  [1397] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(13), 1,
      anon_sym_LPAREN,
    ACTIONS(27), 1,
      anon_sym_DASH,
    ACTIONS(29), 1,
      anon_sym_PLUS,
    ACTIONS(33), 1,
      aux_sym__numeric_literal_token1,
    ACTIONS(37), 1,
      anon_sym_DQUOTE,
    ACTIONS(152), 1,
      sym_identifier,
    ACTIONS(35), 3,
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
  [1437] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(128), 1,
      anon_sym_STAR,
    ACTIONS(130), 1,
      anon_sym_SLASH,
    ACTIONS(134), 1,
      anon_sym_PIPE,
    ACTIONS(136), 1,
      anon_sym_AMP,
    ACTIONS(142), 1,
      anon_sym_BANG,
    ACTIONS(144), 1,
      anon_sym_AMP_AMP,
    ACTIONS(158), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(126), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(140), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(164), 3,
      anon_sym_SEMI,
      anon_sym_else,
      anon_sym_while,
    ACTIONS(138), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
  [1481] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(13), 1,
      anon_sym_LPAREN,
    ACTIONS(27), 1,
      anon_sym_DASH,
    ACTIONS(29), 1,
      anon_sym_PLUS,
    ACTIONS(33), 1,
      aux_sym__numeric_literal_token1,
    ACTIONS(37), 1,
      anon_sym_DQUOTE,
    ACTIONS(152), 1,
      sym_identifier,
    ACTIONS(35), 3,
      aux_sym__numeric_literal_token2,
      aux_sym__vector_literal_token1,
      aux_sym__vector_literal_token2,
    STATE(27), 3,
      sym__numeric_literal,
      sym__vector_literal,
      sym__string_literal,
    STATE(20), 6,
      sym__expression,
      sym_unary_expression,
      sym_binary_expression,
      sym_funcall_expression,
      sym_parenthesized_expression,
      sym_literal,
  [1521] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(13), 1,
      anon_sym_LPAREN,
    ACTIONS(27), 1,
      anon_sym_DASH,
    ACTIONS(29), 1,
      anon_sym_PLUS,
    ACTIONS(33), 1,
      aux_sym__numeric_literal_token1,
    ACTIONS(37), 1,
      anon_sym_DQUOTE,
    ACTIONS(152), 1,
      sym_identifier,
    ACTIONS(35), 3,
      aux_sym__numeric_literal_token2,
      aux_sym__vector_literal_token1,
      aux_sym__vector_literal_token2,
    STATE(27), 3,
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
  [1561] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(13), 1,
      anon_sym_LPAREN,
    ACTIONS(27), 1,
      anon_sym_DASH,
    ACTIONS(29), 1,
      anon_sym_PLUS,
    ACTIONS(33), 1,
      aux_sym__numeric_literal_token1,
    ACTIONS(37), 1,
      anon_sym_DQUOTE,
    ACTIONS(152), 1,
      sym_identifier,
    ACTIONS(35), 3,
      aux_sym__numeric_literal_token2,
      aux_sym__vector_literal_token1,
      aux_sym__vector_literal_token2,
    STATE(27), 3,
      sym__numeric_literal,
      sym__vector_literal,
      sym__string_literal,
    STATE(24), 6,
      sym__expression,
      sym_unary_expression,
      sym_binary_expression,
      sym_funcall_expression,
      sym_parenthesized_expression,
      sym_literal,
  [1601] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(13), 1,
      anon_sym_LPAREN,
    ACTIONS(27), 1,
      anon_sym_DASH,
    ACTIONS(29), 1,
      anon_sym_PLUS,
    ACTIONS(33), 1,
      aux_sym__numeric_literal_token1,
    ACTIONS(37), 1,
      anon_sym_DQUOTE,
    ACTIONS(152), 1,
      sym_identifier,
    ACTIONS(35), 3,
      aux_sym__numeric_literal_token2,
      aux_sym__vector_literal_token1,
      aux_sym__vector_literal_token2,
    STATE(27), 3,
      sym__numeric_literal,
      sym__vector_literal,
      sym__string_literal,
    STATE(35), 6,
      sym__expression,
      sym_unary_expression,
      sym_binary_expression,
      sym_funcall_expression,
      sym_parenthesized_expression,
      sym_literal,
  [1641] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(13), 1,
      anon_sym_LPAREN,
    ACTIONS(27), 1,
      anon_sym_DASH,
    ACTIONS(29), 1,
      anon_sym_PLUS,
    ACTIONS(33), 1,
      aux_sym__numeric_literal_token1,
    ACTIONS(37), 1,
      anon_sym_DQUOTE,
    ACTIONS(152), 1,
      sym_identifier,
    ACTIONS(35), 3,
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
  [1681] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(13), 1,
      anon_sym_LPAREN,
    ACTIONS(27), 1,
      anon_sym_DASH,
    ACTIONS(29), 1,
      anon_sym_PLUS,
    ACTIONS(33), 1,
      aux_sym__numeric_literal_token1,
    ACTIONS(37), 1,
      anon_sym_DQUOTE,
    ACTIONS(152), 1,
      sym_identifier,
    ACTIONS(35), 3,
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
  [1721] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(128), 1,
      anon_sym_STAR,
    ACTIONS(130), 1,
      anon_sym_SLASH,
    ACTIONS(134), 1,
      anon_sym_PIPE,
    ACTIONS(136), 1,
      anon_sym_AMP,
    ACTIONS(142), 1,
      anon_sym_BANG,
    ACTIONS(144), 1,
      anon_sym_AMP_AMP,
    ACTIONS(158), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(126), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(140), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(166), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
    ACTIONS(138), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
  [1764] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(168), 1,
      ts_builtin_sym_end,
    ACTIONS(170), 1,
      anon_sym_DOT,
    STATE(108), 1,
      sym_simple_type,
    ACTIONS(173), 6,
      anon_sym_void,
      anon_sym_entity,
      anon_sym_float,
      anon_sym_vector,
      anon_sym_string,
      anon_sym_int,
    STATE(51), 7,
      sym__definition,
      sym_function_declaration,
      sym_function_definition,
      sym_constant_definition,
      sym_variable_definition,
      sym_field_definition,
      aux_sym_source_file_repeat1,
  [1794] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(128), 1,
      anon_sym_STAR,
    ACTIONS(130), 1,
      anon_sym_SLASH,
    ACTIONS(134), 1,
      anon_sym_PIPE,
    ACTIONS(136), 1,
      anon_sym_AMP,
    ACTIONS(142), 1,
      anon_sym_BANG,
    ACTIONS(144), 1,
      anon_sym_AMP_AMP,
    ACTIONS(158), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(176), 1,
      anon_sym_RPAREN,
    ACTIONS(126), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(140), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(138), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
  [1836] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(7), 1,
      anon_sym_DOT,
    ACTIONS(178), 1,
      ts_builtin_sym_end,
    STATE(108), 1,
      sym_simple_type,
    ACTIONS(9), 6,
      anon_sym_void,
      anon_sym_entity,
      anon_sym_float,
      anon_sym_vector,
      anon_sym_string,
      anon_sym_int,
    STATE(51), 7,
      sym__definition,
      sym_function_declaration,
      sym_function_definition,
      sym_constant_definition,
      sym_variable_definition,
      sym_field_definition,
      aux_sym_source_file_repeat1,
  [1866] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(128), 1,
      anon_sym_STAR,
    ACTIONS(130), 1,
      anon_sym_SLASH,
    ACTIONS(134), 1,
      anon_sym_PIPE,
    ACTIONS(136), 1,
      anon_sym_AMP,
    ACTIONS(142), 1,
      anon_sym_BANG,
    ACTIONS(144), 1,
      anon_sym_AMP_AMP,
    ACTIONS(158), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(180), 1,
      anon_sym_RPAREN,
    ACTIONS(126), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(140), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(138), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
  [1908] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(128), 1,
      anon_sym_STAR,
    ACTIONS(130), 1,
      anon_sym_SLASH,
    ACTIONS(134), 1,
      anon_sym_PIPE,
    ACTIONS(136), 1,
      anon_sym_AMP,
    ACTIONS(142), 1,
      anon_sym_BANG,
    ACTIONS(144), 1,
      anon_sym_AMP_AMP,
    ACTIONS(158), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(182), 1,
      anon_sym_RPAREN,
    ACTIONS(126), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(140), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(138), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
  [1950] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(128), 1,
      anon_sym_STAR,
    ACTIONS(130), 1,
      anon_sym_SLASH,
    ACTIONS(134), 1,
      anon_sym_PIPE,
    ACTIONS(136), 1,
      anon_sym_AMP,
    ACTIONS(142), 1,
      anon_sym_BANG,
    ACTIONS(144), 1,
      anon_sym_AMP_AMP,
    ACTIONS(158), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(184), 1,
      anon_sym_RPAREN,
    ACTIONS(126), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(140), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(138), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
  [1992] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(186), 1,
      anon_sym_RPAREN,
    STATE(114), 1,
      sym__parameter,
    STATE(136), 1,
      sym_simple_type,
    ACTIONS(9), 6,
      anon_sym_void,
      anon_sym_entity,
      anon_sym_float,
      anon_sym_vector,
      anon_sym_string,
      anon_sym_int,
  [2013] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(33), 1,
      aux_sym__numeric_literal_token1,
    ACTIONS(37), 1,
      anon_sym_DQUOTE,
    STATE(87), 1,
      sym_literal,
    ACTIONS(35), 3,
      aux_sym__numeric_literal_token2,
      aux_sym__vector_literal_token1,
      aux_sym__vector_literal_token2,
    STATE(27), 3,
      sym__numeric_literal,
      sym__vector_literal,
      sym__string_literal,
  [2036] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(33), 1,
      aux_sym__numeric_literal_token1,
    ACTIONS(37), 1,
      anon_sym_DQUOTE,
    STATE(99), 1,
      sym_literal,
    ACTIONS(35), 3,
      aux_sym__numeric_literal_token2,
      aux_sym__vector_literal_token1,
      aux_sym__vector_literal_token2,
    STATE(27), 3,
      sym__numeric_literal,
      sym__vector_literal,
      sym__string_literal,
  [2059] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(33), 1,
      aux_sym__numeric_literal_token1,
    ACTIONS(37), 1,
      anon_sym_DQUOTE,
    STATE(97), 1,
      sym_literal,
    ACTIONS(35), 3,
      aux_sym__numeric_literal_token2,
      aux_sym__vector_literal_token1,
      aux_sym__vector_literal_token2,
    STATE(27), 3,
      sym__numeric_literal,
      sym__vector_literal,
      sym__string_literal,
  [2082] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(33), 1,
      aux_sym__numeric_literal_token1,
    ACTIONS(37), 1,
      anon_sym_DQUOTE,
    STATE(83), 1,
      sym_literal,
    ACTIONS(35), 3,
      aux_sym__numeric_literal_token2,
      aux_sym__vector_literal_token1,
      aux_sym__vector_literal_token2,
    STATE(27), 3,
      sym__numeric_literal,
      sym__vector_literal,
      sym__string_literal,
  [2105] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(33), 1,
      aux_sym__numeric_literal_token1,
    ACTIONS(37), 1,
      anon_sym_DQUOTE,
    STATE(151), 1,
      sym_literal,
    ACTIONS(35), 3,
      aux_sym__numeric_literal_token2,
      aux_sym__vector_literal_token1,
      aux_sym__vector_literal_token2,
    STATE(27), 3,
      sym__numeric_literal,
      sym__vector_literal,
      sym__string_literal,
  [2128] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(33), 1,
      aux_sym__numeric_literal_token1,
    ACTIONS(37), 1,
      anon_sym_DQUOTE,
    STATE(90), 1,
      sym_literal,
    ACTIONS(35), 3,
      aux_sym__numeric_literal_token2,
      aux_sym__vector_literal_token1,
      aux_sym__vector_literal_token2,
    STATE(27), 3,
      sym__numeric_literal,
      sym__vector_literal,
      sym__string_literal,
  [2151] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(33), 1,
      aux_sym__numeric_literal_token1,
    ACTIONS(37), 1,
      anon_sym_DQUOTE,
    STATE(100), 1,
      sym_literal,
    ACTIONS(35), 3,
      aux_sym__numeric_literal_token2,
      aux_sym__vector_literal_token1,
      aux_sym__vector_literal_token2,
    STATE(27), 3,
      sym__numeric_literal,
      sym__vector_literal,
      sym__string_literal,
  [2174] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(33), 1,
      aux_sym__numeric_literal_token1,
    ACTIONS(37), 1,
      anon_sym_DQUOTE,
    STATE(94), 1,
      sym_literal,
    ACTIONS(35), 3,
      aux_sym__numeric_literal_token2,
      aux_sym__vector_literal_token1,
      aux_sym__vector_literal_token2,
    STATE(27), 3,
      sym__numeric_literal,
      sym__vector_literal,
      sym__string_literal,
  [2197] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(188), 8,
      ts_builtin_sym_end,
      anon_sym_DOT,
      anon_sym_void,
      anon_sym_entity,
      anon_sym_float,
      anon_sym_vector,
      anon_sym_string,
      anon_sym_int,
  [2211] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(190), 8,
      ts_builtin_sym_end,
      anon_sym_DOT,
      anon_sym_void,
      anon_sym_entity,
      anon_sym_float,
      anon_sym_vector,
      anon_sym_string,
      anon_sym_int,
  [2225] = 2,
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
  [2239] = 4,
    ACTIONS(3), 1,
      sym_comment,
    STATE(122), 1,
      sym__parameter,
    STATE(136), 1,
      sym_simple_type,
    ACTIONS(9), 6,
      anon_sym_void,
      anon_sym_entity,
      anon_sym_float,
      anon_sym_vector,
      anon_sym_string,
      anon_sym_int,
  [2257] = 2,
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
  [2271] = 2,
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
  [2285] = 2,
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
  [2299] = 2,
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
  [2313] = 2,
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
  [2327] = 2,
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
  [2341] = 3,
    ACTIONS(3), 1,
      sym_comment,
    STATE(148), 1,
      sym_simple_type,
    ACTIONS(9), 6,
      anon_sym_void,
      anon_sym_entity,
      anon_sym_float,
      anon_sym_vector,
      anon_sym_string,
      anon_sym_int,
  [2356] = 3,
    ACTIONS(3), 1,
      sym_comment,
    STATE(133), 1,
      sym_simple_type,
    ACTIONS(9), 6,
      anon_sym_void,
      anon_sym_entity,
      anon_sym_float,
      anon_sym_vector,
      anon_sym_string,
      anon_sym_int,
  [2371] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(208), 1,
      anon_sym_EQ,
    ACTIONS(210), 1,
      anon_sym_COMMA,
    STATE(92), 1,
      aux_sym_variable_definition_statement_repeat1,
    ACTIONS(206), 3,
      anon_sym_SEMI,
      anon_sym_else,
      anon_sym_while,
  [2389] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(210), 1,
      anon_sym_COMMA,
    ACTIONS(214), 1,
      anon_sym_EQ,
    STATE(91), 1,
      aux_sym_variable_definition_statement_repeat1,
    ACTIONS(212), 3,
      anon_sym_SEMI,
      anon_sym_else,
      anon_sym_while,
  [2407] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(210), 1,
      anon_sym_COMMA,
    ACTIONS(218), 1,
      anon_sym_EQ,
    STATE(82), 1,
      aux_sym_variable_definition_statement_repeat1,
    ACTIONS(216), 3,
      anon_sym_SEMI,
      anon_sym_else,
      anon_sym_while,
  [2425] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(210), 1,
      anon_sym_COMMA,
    ACTIONS(222), 1,
      anon_sym_EQ,
    STATE(89), 1,
      aux_sym_variable_definition_statement_repeat1,
    ACTIONS(220), 3,
      anon_sym_SEMI,
      anon_sym_else,
      anon_sym_while,
  [2443] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(210), 1,
      anon_sym_COMMA,
    STATE(84), 1,
      aux_sym_variable_definition_statement_repeat1,
    ACTIONS(220), 3,
      anon_sym_SEMI,
      anon_sym_else,
      anon_sym_while,
  [2458] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(210), 1,
      anon_sym_COMMA,
    STATE(92), 1,
      aux_sym_variable_definition_statement_repeat1,
    ACTIONS(206), 3,
      anon_sym_SEMI,
      anon_sym_else,
      anon_sym_while,
  [2473] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(226), 1,
      anon_sym_COMMA,
    STATE(84), 1,
      aux_sym_variable_definition_statement_repeat1,
    ACTIONS(224), 3,
      anon_sym_SEMI,
      anon_sym_else,
      anon_sym_while,
  [2488] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(210), 1,
      anon_sym_COMMA,
    STATE(84), 1,
      aux_sym_variable_definition_statement_repeat1,
    ACTIONS(229), 3,
      anon_sym_SEMI,
      anon_sym_else,
      anon_sym_while,
  [2503] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(231), 1,
      anon_sym_EQ,
    ACTIONS(224), 4,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_else,
      anon_sym_while,
  [2516] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(210), 1,
      anon_sym_COMMA,
    STATE(89), 1,
      aux_sym_variable_definition_statement_repeat1,
    ACTIONS(220), 3,
      anon_sym_SEMI,
      anon_sym_else,
      anon_sym_while,
  [2531] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(235), 1,
      anon_sym_EQ,
    ACTIONS(237), 1,
      anon_sym_COMMA,
    ACTIONS(233), 3,
      anon_sym_SEMI,
      anon_sym_else,
      anon_sym_while,
  [2546] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(210), 1,
      anon_sym_COMMA,
    STATE(84), 1,
      aux_sym_variable_definition_statement_repeat1,
    ACTIONS(206), 3,
      anon_sym_SEMI,
      anon_sym_else,
      anon_sym_while,
  [2561] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(210), 1,
      anon_sym_COMMA,
    STATE(95), 1,
      aux_sym_variable_definition_statement_repeat1,
    ACTIONS(239), 3,
      anon_sym_SEMI,
      anon_sym_else,
      anon_sym_while,
  [2576] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(210), 1,
      anon_sym_COMMA,
    STATE(84), 1,
      aux_sym_variable_definition_statement_repeat1,
    ACTIONS(216), 3,
      anon_sym_SEMI,
      anon_sym_else,
      anon_sym_while,
  [2591] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(210), 1,
      anon_sym_COMMA,
    STATE(84), 1,
      aux_sym_variable_definition_statement_repeat1,
    ACTIONS(239), 3,
      anon_sym_SEMI,
      anon_sym_else,
      anon_sym_while,
  [2606] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(243), 1,
      anon_sym_EQ,
    ACTIONS(245), 1,
      anon_sym_COMMA,
    ACTIONS(241), 3,
      anon_sym_SEMI,
      anon_sym_else,
      anon_sym_while,
  [2621] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(210), 1,
      anon_sym_COMMA,
    STATE(85), 1,
      aux_sym_variable_definition_statement_repeat1,
    ACTIONS(247), 3,
      anon_sym_SEMI,
      anon_sym_else,
      anon_sym_while,
  [2636] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(210), 1,
      anon_sym_COMMA,
    STATE(84), 1,
      aux_sym_variable_definition_statement_repeat1,
    ACTIONS(247), 3,
      anon_sym_SEMI,
      anon_sym_else,
      anon_sym_while,
  [2651] = 4,
    ACTIONS(251), 1,
      aux_sym__string_literal_token3,
    ACTIONS(253), 1,
      sym_comment,
    STATE(98), 1,
      aux_sym__string_literal_repeat1,
    ACTIONS(249), 2,
      aux_sym__string_literal_token1,
      aux_sym__string_literal_token2,
  [2665] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(255), 1,
      anon_sym_COMMA,
    ACTIONS(216), 3,
      anon_sym_SEMI,
      anon_sym_else,
      anon_sym_while,
  [2677] = 4,
    ACTIONS(253), 1,
      sym_comment,
    ACTIONS(260), 1,
      aux_sym__string_literal_token3,
    STATE(98), 1,
      aux_sym__string_literal_repeat1,
    ACTIONS(257), 2,
      aux_sym__string_literal_token1,
      aux_sym__string_literal_token2,
  [2691] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(262), 1,
      anon_sym_COMMA,
    ACTIONS(212), 3,
      anon_sym_SEMI,
      anon_sym_else,
      anon_sym_while,
  [2703] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(264), 4,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_else,
      anon_sym_while,
  [2713] = 4,
    ACTIONS(253), 1,
      sym_comment,
    ACTIONS(268), 1,
      aux_sym__string_literal_token3,
    STATE(96), 1,
      aux_sym__string_literal_repeat1,
    ACTIONS(266), 2,
      aux_sym__string_literal_token1,
      aux_sym__string_literal_token2,
  [2727] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(270), 1,
      anon_sym_SEMI,
    ACTIONS(272), 1,
      anon_sym_EQ,
    ACTIONS(274), 1,
      anon_sym_COMMA,
  [2740] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(276), 3,
      anon_sym_SEMI,
      anon_sym_else,
      anon_sym_while,
  [2749] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(278), 1,
      anon_sym_SEMI,
    ACTIONS(280), 1,
      anon_sym_COMMA,
    STATE(109), 1,
      aux_sym_variable_definition_repeat1,
  [2762] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(282), 3,
      anon_sym_SEMI,
      anon_sym_else,
      anon_sym_while,
  [2771] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(284), 1,
      anon_sym_COMMA,
    ACTIONS(286), 1,
      anon_sym_RPAREN,
    STATE(117), 1,
      aux_sym_parameter_list_repeat1,
  [2784] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(280), 1,
      anon_sym_COMMA,
    ACTIONS(288), 1,
      anon_sym_SEMI,
    STATE(113), 1,
      aux_sym_variable_definition_repeat1,
  [2797] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(290), 1,
      anon_sym_LPAREN,
    ACTIONS(292), 1,
      sym_identifier,
    STATE(128), 1,
      sym_parameter_list,
  [2810] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(280), 1,
      anon_sym_COMMA,
    ACTIONS(294), 1,
      anon_sym_SEMI,
    STATE(113), 1,
      aux_sym_variable_definition_repeat1,
  [2823] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(296), 3,
      anon_sym_SEMI,
      anon_sym_else,
      anon_sym_while,
  [2832] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(298), 3,
      anon_sym_SEMI,
      anon_sym_else,
      anon_sym_while,
  [2841] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(166), 1,
      anon_sym_RPAREN,
    ACTIONS(300), 1,
      anon_sym_COMMA,
    STATE(112), 1,
      aux_sym_funcall_expression_repeat1,
  [2854] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(303), 1,
      anon_sym_SEMI,
    ACTIONS(305), 1,
      anon_sym_COMMA,
    STATE(113), 1,
      aux_sym_variable_definition_repeat1,
  [2867] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(284), 1,
      anon_sym_COMMA,
    ACTIONS(308), 1,
      anon_sym_RPAREN,
    STATE(106), 1,
      aux_sym_parameter_list_repeat1,
  [2880] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(154), 1,
      anon_sym_COMMA,
    ACTIONS(310), 1,
      anon_sym_RPAREN,
    STATE(112), 1,
      aux_sym_funcall_expression_repeat1,
  [2893] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(280), 1,
      anon_sym_COMMA,
    ACTIONS(312), 1,
      anon_sym_SEMI,
    STATE(107), 1,
      aux_sym_variable_definition_repeat1,
  [2906] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(314), 1,
      anon_sym_COMMA,
    ACTIONS(317), 1,
      anon_sym_RPAREN,
    STATE(117), 1,
      aux_sym_parameter_list_repeat1,
  [2919] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(321), 1,
      anon_sym_else,
    ACTIONS(319), 2,
      anon_sym_SEMI,
      anon_sym_while,
  [2930] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(323), 3,
      anon_sym_SEMI,
      anon_sym_else,
      anon_sym_while,
  [2939] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(303), 2,
      anon_sym_SEMI,
      anon_sym_COMMA,
  [2947] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(325), 2,
      anon_sym_LPAREN,
      sym_identifier,
  [2955] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(317), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [2963] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(327), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [2971] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(329), 1,
      anon_sym_SEMI,
    ACTIONS(331), 1,
      anon_sym_COMMA,
  [2981] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(333), 1,
      anon_sym_SEMI,
    ACTIONS(335), 1,
      anon_sym_EQ,
  [2991] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(337), 1,
      sym_identifier,
  [2998] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(339), 1,
      sym_identifier,
  [3005] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(341), 1,
      sym_identifier,
  [3012] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(343), 1,
      sym_identifier,
  [3019] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(345), 1,
      anon_sym_LPAREN,
  [3026] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(347), 1,
      sym_identifier,
  [3033] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(349), 1,
      sym_identifier,
  [3040] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(351), 1,
      sym_identifier,
  [3047] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(353), 1,
      anon_sym_DQUOTE,
  [3054] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(355), 1,
      sym_identifier,
  [3061] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(357), 1,
      sym_identifier,
  [3068] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(359), 1,
      sym_identifier,
  [3075] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(361), 1,
      anon_sym_LPAREN,
  [3082] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(363), 1,
      sym_identifier,
  [3089] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(365), 1,
      anon_sym_LPAREN,
  [3096] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(367), 1,
      anon_sym_SEMI,
  [3103] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(369), 1,
      sym_identifier,
  [3110] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(371), 1,
      sym_identifier,
  [3117] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(373), 1,
      ts_builtin_sym_end,
  [3124] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(375), 1,
      sym_identifier,
  [3131] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(377), 1,
      sym_identifier,
  [3138] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(379), 1,
      anon_sym_DQUOTE,
  [3145] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(381), 1,
      sym_identifier,
  [3152] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(383), 1,
      anon_sym_while,
  [3159] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(385), 1,
      anon_sym_SEMI,
  [3166] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(387), 1,
      anon_sym_SEMI,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(7)] = 0,
  [SMALL_STATE(8)] = 82,
  [SMALL_STATE(9)] = 164,
  [SMALL_STATE(10)] = 246,
  [SMALL_STATE(11)] = 277,
  [SMALL_STATE(12)] = 306,
  [SMALL_STATE(13)] = 334,
  [SMALL_STATE(14)] = 362,
  [SMALL_STATE(15)] = 390,
  [SMALL_STATE(16)] = 418,
  [SMALL_STATE(17)] = 446,
  [SMALL_STATE(18)] = 478,
  [SMALL_STATE(19)] = 506,
  [SMALL_STATE(20)] = 534,
  [SMALL_STATE(21)] = 572,
  [SMALL_STATE(22)] = 604,
  [SMALL_STATE(23)] = 638,
  [SMALL_STATE(24)] = 680,
  [SMALL_STATE(25)] = 722,
  [SMALL_STATE(26)] = 766,
  [SMALL_STATE(27)] = 794,
  [SMALL_STATE(28)] = 822,
  [SMALL_STATE(29)] = 858,
  [SMALL_STATE(30)] = 901,
  [SMALL_STATE(31)] = 941,
  [SMALL_STATE(32)] = 981,
  [SMALL_STATE(33)] = 1029,
  [SMALL_STATE(34)] = 1069,
  [SMALL_STATE(35)] = 1113,
  [SMALL_STATE(36)] = 1157,
  [SMALL_STATE(37)] = 1197,
  [SMALL_STATE(38)] = 1237,
  [SMALL_STATE(39)] = 1277,
  [SMALL_STATE(40)] = 1317,
  [SMALL_STATE(41)] = 1357,
  [SMALL_STATE(42)] = 1397,
  [SMALL_STATE(43)] = 1437,
  [SMALL_STATE(44)] = 1481,
  [SMALL_STATE(45)] = 1521,
  [SMALL_STATE(46)] = 1561,
  [SMALL_STATE(47)] = 1601,
  [SMALL_STATE(48)] = 1641,
  [SMALL_STATE(49)] = 1681,
  [SMALL_STATE(50)] = 1721,
  [SMALL_STATE(51)] = 1764,
  [SMALL_STATE(52)] = 1794,
  [SMALL_STATE(53)] = 1836,
  [SMALL_STATE(54)] = 1866,
  [SMALL_STATE(55)] = 1908,
  [SMALL_STATE(56)] = 1950,
  [SMALL_STATE(57)] = 1992,
  [SMALL_STATE(58)] = 2013,
  [SMALL_STATE(59)] = 2036,
  [SMALL_STATE(60)] = 2059,
  [SMALL_STATE(61)] = 2082,
  [SMALL_STATE(62)] = 2105,
  [SMALL_STATE(63)] = 2128,
  [SMALL_STATE(64)] = 2151,
  [SMALL_STATE(65)] = 2174,
  [SMALL_STATE(66)] = 2197,
  [SMALL_STATE(67)] = 2211,
  [SMALL_STATE(68)] = 2225,
  [SMALL_STATE(69)] = 2239,
  [SMALL_STATE(70)] = 2257,
  [SMALL_STATE(71)] = 2271,
  [SMALL_STATE(72)] = 2285,
  [SMALL_STATE(73)] = 2299,
  [SMALL_STATE(74)] = 2313,
  [SMALL_STATE(75)] = 2327,
  [SMALL_STATE(76)] = 2341,
  [SMALL_STATE(77)] = 2356,
  [SMALL_STATE(78)] = 2371,
  [SMALL_STATE(79)] = 2389,
  [SMALL_STATE(80)] = 2407,
  [SMALL_STATE(81)] = 2425,
  [SMALL_STATE(82)] = 2443,
  [SMALL_STATE(83)] = 2458,
  [SMALL_STATE(84)] = 2473,
  [SMALL_STATE(85)] = 2488,
  [SMALL_STATE(86)] = 2503,
  [SMALL_STATE(87)] = 2516,
  [SMALL_STATE(88)] = 2531,
  [SMALL_STATE(89)] = 2546,
  [SMALL_STATE(90)] = 2561,
  [SMALL_STATE(91)] = 2576,
  [SMALL_STATE(92)] = 2591,
  [SMALL_STATE(93)] = 2606,
  [SMALL_STATE(94)] = 2621,
  [SMALL_STATE(95)] = 2636,
  [SMALL_STATE(96)] = 2651,
  [SMALL_STATE(97)] = 2665,
  [SMALL_STATE(98)] = 2677,
  [SMALL_STATE(99)] = 2691,
  [SMALL_STATE(100)] = 2703,
  [SMALL_STATE(101)] = 2713,
  [SMALL_STATE(102)] = 2727,
  [SMALL_STATE(103)] = 2740,
  [SMALL_STATE(104)] = 2749,
  [SMALL_STATE(105)] = 2762,
  [SMALL_STATE(106)] = 2771,
  [SMALL_STATE(107)] = 2784,
  [SMALL_STATE(108)] = 2797,
  [SMALL_STATE(109)] = 2810,
  [SMALL_STATE(110)] = 2823,
  [SMALL_STATE(111)] = 2832,
  [SMALL_STATE(112)] = 2841,
  [SMALL_STATE(113)] = 2854,
  [SMALL_STATE(114)] = 2867,
  [SMALL_STATE(115)] = 2880,
  [SMALL_STATE(116)] = 2893,
  [SMALL_STATE(117)] = 2906,
  [SMALL_STATE(118)] = 2919,
  [SMALL_STATE(119)] = 2930,
  [SMALL_STATE(120)] = 2939,
  [SMALL_STATE(121)] = 2947,
  [SMALL_STATE(122)] = 2955,
  [SMALL_STATE(123)] = 2963,
  [SMALL_STATE(124)] = 2971,
  [SMALL_STATE(125)] = 2981,
  [SMALL_STATE(126)] = 2991,
  [SMALL_STATE(127)] = 2998,
  [SMALL_STATE(128)] = 3005,
  [SMALL_STATE(129)] = 3012,
  [SMALL_STATE(130)] = 3019,
  [SMALL_STATE(131)] = 3026,
  [SMALL_STATE(132)] = 3033,
  [SMALL_STATE(133)] = 3040,
  [SMALL_STATE(134)] = 3047,
  [SMALL_STATE(135)] = 3054,
  [SMALL_STATE(136)] = 3061,
  [SMALL_STATE(137)] = 3068,
  [SMALL_STATE(138)] = 3075,
  [SMALL_STATE(139)] = 3082,
  [SMALL_STATE(140)] = 3089,
  [SMALL_STATE(141)] = 3096,
  [SMALL_STATE(142)] = 3103,
  [SMALL_STATE(143)] = 3110,
  [SMALL_STATE(144)] = 3117,
  [SMALL_STATE(145)] = 3124,
  [SMALL_STATE(146)] = 3131,
  [SMALL_STATE(147)] = 3138,
  [SMALL_STATE(148)] = 3145,
  [SMALL_STATE(149)] = 3152,
  [SMALL_STATE(150)] = 3159,
  [SMALL_STATE(151)] = 3166,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT_EXTRA(),
  [5] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(77),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(121),
  [11] = {.entry = {.count = 1, .reusable = false}}, SHIFT(121),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [17] = {.entry = {.count = 1, .reusable = false}}, SHIFT(138),
  [19] = {.entry = {.count = 1, .reusable = false}}, SHIFT(140),
  [21] = {.entry = {.count = 1, .reusable = false}}, SHIFT(6),
  [23] = {.entry = {.count = 1, .reusable = false}}, SHIFT(47),
  [25] = {.entry = {.count = 1, .reusable = false}}, SHIFT(76),
  [27] = {.entry = {.count = 1, .reusable = false}}, SHIFT(49),
  [29] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [31] = {.entry = {.count = 1, .reusable = false}}, SHIFT(17),
  [33] = {.entry = {.count = 1, .reusable = false}}, SHIFT(27),
  [35] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [37] = {.entry = {.count = 1, .reusable = true}}, SHIFT(101),
  [39] = {.entry = {.count = 1, .reusable = true}}, SHIFT(141),
  [41] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__compound_statement_repeat1, 2), SHIFT_REPEAT(121),
  [44] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__compound_statement_repeat1, 2), SHIFT_REPEAT(42),
  [47] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__compound_statement_repeat1, 2),
  [49] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__compound_statement_repeat1, 2), SHIFT_REPEAT(138),
  [52] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__compound_statement_repeat1, 2), SHIFT_REPEAT(140),
  [55] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__compound_statement_repeat1, 2), SHIFT_REPEAT(6),
  [58] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__compound_statement_repeat1, 2), SHIFT_REPEAT(47),
  [61] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__compound_statement_repeat1, 2), SHIFT_REPEAT(76),
  [64] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__compound_statement_repeat1, 2), SHIFT_REPEAT(49),
  [67] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__compound_statement_repeat1, 2), SHIFT_REPEAT(49),
  [70] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__compound_statement_repeat1, 2), SHIFT_REPEAT(17),
  [73] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__compound_statement_repeat1, 2), SHIFT_REPEAT(27),
  [76] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__compound_statement_repeat1, 2), SHIFT_REPEAT(27),
  [79] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__compound_statement_repeat1, 2), SHIFT_REPEAT(101),
  [82] = {.entry = {.count = 1, .reusable = true}}, SHIFT(110),
  [84] = {.entry = {.count = 1, .reusable = true}}, SHIFT(105),
  [86] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__expression, 1),
  [88] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [90] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__expression, 1),
  [92] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__compound_statement_repeat1, 2),
  [94] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_funcall_expression, 4),
  [96] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_funcall_expression, 4),
  [98] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parenthesized_expression, 3),
  [100] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_parenthesized_expression, 3),
  [102] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__string_literal, 4),
  [104] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__string_literal, 4),
  [106] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_unary_expression, 2),
  [108] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_unary_expression, 2),
  [110] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_funcall_expression, 5),
  [112] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_funcall_expression, 5),
  [114] = {.entry = {.count = 1, .reusable = false}}, SHIFT(33),
  [116] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_funcall_expression, 3),
  [118] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_funcall_expression, 3),
  [120] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__string_literal, 3),
  [122] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__string_literal, 3),
  [124] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_binary_expression, 3),
  [126] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [128] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [130] = {.entry = {.count = 1, .reusable = false}}, SHIFT(31),
  [132] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_binary_expression, 3),
  [134] = {.entry = {.count = 1, .reusable = false}}, SHIFT(30),
  [136] = {.entry = {.count = 1, .reusable = false}}, SHIFT(45),
  [138] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [140] = {.entry = {.count = 1, .reusable = false}}, SHIFT(44),
  [142] = {.entry = {.count = 1, .reusable = false}}, SHIFT(48),
  [144] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [146] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_literal, 1),
  [148] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_literal, 1),
  [150] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [152] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [154] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [156] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [158] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [160] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_assignment_statement, 3),
  [162] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_return_statement, 2),
  [164] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__expression_statement, 1),
  [166] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_funcall_expression_repeat1, 2),
  [168] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2),
  [170] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(77),
  [173] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(121),
  [176] = {.entry = {.count = 1, .reusable = true}}, SHIFT(111),
  [178] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1),
  [180] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [182] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [184] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [186] = {.entry = {.count = 1, .reusable = true}}, SHIFT(145),
  [188] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable_definition, 5),
  [190] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_field_definition, 6),
  [192] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable_definition, 6),
  [194] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_declaration, 4),
  [196] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable_definition, 3),
  [198] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_constant_definition, 5),
  [200] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_field_definition, 7),
  [202] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_field_definition, 4),
  [204] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_definition, 6),
  [206] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable_definition_statement, 7),
  [208] = {.entry = {.count = 1, .reusable = true}}, SHIFT(65),
  [210] = {.entry = {.count = 1, .reusable = true}}, SHIFT(129),
  [212] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable_definition_statement, 4),
  [214] = {.entry = {.count = 1, .reusable = true}}, SHIFT(58),
  [216] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable_definition_statement, 5),
  [218] = {.entry = {.count = 1, .reusable = true}}, SHIFT(61),
  [220] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable_definition_statement, 6),
  [222] = {.entry = {.count = 1, .reusable = true}}, SHIFT(63),
  [224] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_variable_definition_statement_repeat1, 2),
  [226] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_variable_definition_statement_repeat1, 2), SHIFT_REPEAT(129),
  [229] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable_definition_statement, 10),
  [231] = {.entry = {.count = 1, .reusable = true}}, SHIFT(64),
  [233] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable_definition_statement, 2),
  [235] = {.entry = {.count = 1, .reusable = true}}, SHIFT(59),
  [237] = {.entry = {.count = 1, .reusable = true}}, SHIFT(127),
  [239] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable_definition_statement, 8),
  [241] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable_definition_statement, 3),
  [243] = {.entry = {.count = 1, .reusable = true}}, SHIFT(60),
  [245] = {.entry = {.count = 1, .reusable = true}}, SHIFT(142),
  [247] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable_definition_statement, 9),
  [249] = {.entry = {.count = 1, .reusable = false}}, SHIFT(98),
  [251] = {.entry = {.count = 1, .reusable = false}}, SHIFT(147),
  [253] = {.entry = {.count = 1, .reusable = false}}, SHIFT_EXTRA(),
  [255] = {.entry = {.count = 1, .reusable = true}}, SHIFT(132),
  [257] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__string_literal_repeat1, 2), SHIFT_REPEAT(98),
  [260] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__string_literal_repeat1, 2),
  [262] = {.entry = {.count = 1, .reusable = true}}, SHIFT(139),
  [264] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_variable_definition_statement_repeat1, 4),
  [266] = {.entry = {.count = 1, .reusable = false}}, SHIFT(96),
  [268] = {.entry = {.count = 1, .reusable = false}}, SHIFT(134),
  [270] = {.entry = {.count = 1, .reusable = true}}, SHIFT(71),
  [272] = {.entry = {.count = 1, .reusable = true}}, SHIFT(62),
  [274] = {.entry = {.count = 1, .reusable = true}}, SHIFT(131),
  [276] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_if_statement, 7),
  [278] = {.entry = {.count = 1, .reusable = true}}, SHIFT(66),
  [280] = {.entry = {.count = 1, .reusable = true}}, SHIFT(126),
  [282] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__compound_statement, 2),
  [284] = {.entry = {.count = 1, .reusable = true}}, SHIFT(69),
  [286] = {.entry = {.count = 1, .reusable = true}}, SHIFT(135),
  [288] = {.entry = {.count = 1, .reusable = true}}, SHIFT(73),
  [290] = {.entry = {.count = 1, .reusable = true}}, SHIFT(57),
  [292] = {.entry = {.count = 1, .reusable = true}}, SHIFT(102),
  [294] = {.entry = {.count = 1, .reusable = true}}, SHIFT(68),
  [296] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__compound_statement, 3),
  [298] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_do_while_statement, 6),
  [300] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_funcall_expression_repeat1, 2), SHIFT_REPEAT(40),
  [303] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_variable_definition_repeat1, 2),
  [305] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_variable_definition_repeat1, 2), SHIFT_REPEAT(126),
  [308] = {.entry = {.count = 1, .reusable = true}}, SHIFT(146),
  [310] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [312] = {.entry = {.count = 1, .reusable = true}}, SHIFT(67),
  [314] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_parameter_list_repeat1, 2), SHIFT_REPEAT(69),
  [317] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_parameter_list_repeat1, 2),
  [319] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_if_statement, 5),
  [321] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [323] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_while_statement, 5),
  [325] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_simple_type, 1),
  [327] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__parameter, 2),
  [329] = {.entry = {.count = 1, .reusable = true}}, SHIFT(74),
  [331] = {.entry = {.count = 1, .reusable = true}}, SHIFT(137),
  [333] = {.entry = {.count = 1, .reusable = true}}, SHIFT(70),
  [335] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [337] = {.entry = {.count = 1, .reusable = true}}, SHIFT(120),
  [339] = {.entry = {.count = 1, .reusable = true}}, SHIFT(79),
  [341] = {.entry = {.count = 1, .reusable = true}}, SHIFT(125),
  [343] = {.entry = {.count = 1, .reusable = true}}, SHIFT(86),
  [345] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [347] = {.entry = {.count = 1, .reusable = true}}, SHIFT(104),
  [349] = {.entry = {.count = 1, .reusable = true}}, SHIFT(78),
  [351] = {.entry = {.count = 1, .reusable = true}}, SHIFT(124),
  [353] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [355] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter_list, 4),
  [357] = {.entry = {.count = 1, .reusable = true}}, SHIFT(123),
  [359] = {.entry = {.count = 1, .reusable = true}}, SHIFT(116),
  [361] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [363] = {.entry = {.count = 1, .reusable = true}}, SHIFT(81),
  [365] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [367] = {.entry = {.count = 1, .reusable = true}}, SHIFT(75),
  [369] = {.entry = {.count = 1, .reusable = true}}, SHIFT(80),
  [371] = {.entry = {.count = 1, .reusable = true}}, SHIFT(88),
  [373] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [375] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter_list, 2),
  [377] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter_list, 3),
  [379] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [381] = {.entry = {.count = 1, .reusable = true}}, SHIFT(93),
  [383] = {.entry = {.count = 1, .reusable = true}}, SHIFT(130),
  [385] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [387] = {.entry = {.count = 1, .reusable = true}}, SHIFT(72),
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
