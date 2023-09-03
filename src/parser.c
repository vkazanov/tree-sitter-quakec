#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 166
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 87
#define ALIAS_COUNT 0
#define TOKEN_COUNT 50
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
  anon_sym_LPAREN = 7,
  anon_sym_RPAREN = 8,
  anon_sym_LBRACE = 9,
  anon_sym_RBRACE = 10,
  anon_sym_if = 11,
  anon_sym_else = 12,
  anon_sym_while = 13,
  anon_sym_do = 14,
  anon_sym_return = 15,
  anon_sym_local = 16,
  anon_sym_DASH = 17,
  anon_sym_PLUS = 18,
  anon_sym_STAR = 19,
  anon_sym_SLASH = 20,
  anon_sym_PIPE_PIPE = 21,
  anon_sym_AMP_AMP = 22,
  anon_sym_BANG = 23,
  anon_sym_PIPE = 24,
  anon_sym_AMP = 25,
  anon_sym_EQ_EQ = 26,
  anon_sym_BANG_EQ = 27,
  anon_sym_GT = 28,
  anon_sym_GT_EQ = 29,
  anon_sym_LT_EQ = 30,
  anon_sym_LT = 31,
  anon_sym_void = 32,
  anon_sym_entity = 33,
  anon_sym_float = 34,
  anon_sym_vector = 35,
  anon_sym_string = 36,
  anon_sym_int = 37,
  sym_identifier = 38,
  anon_sym_DOLLAR = 39,
  aux_sym_frame_identifier_token1 = 40,
  sym__integer_literal = 41,
  sym__float_literal = 42,
  anon_sym_BQUOTE = 43,
  anon_sym_DQUOTE = 44,
  aux_sym__string_literal_token1 = 45,
  aux_sym__string_literal_token2 = 46,
  aux_sym__string_literal_token3 = 47,
  sym__builtin_literal = 48,
  sym_comment = 49,
  sym_source_file = 50,
  sym__definition = 51,
  sym_function_declaration = 52,
  sym_function_definition = 53,
  sym_constant_definition = 54,
  sym_variable_definition = 55,
  sym_field_definition = 56,
  sym_parameter_list = 57,
  sym__parameter = 58,
  sym__statement = 59,
  sym__compound_statement = 60,
  sym__simple_statement = 61,
  sym_assignment_statement = 62,
  sym_if_statement = 63,
  sym_while_statement = 64,
  sym_do_while_statement = 65,
  sym_return_statement = 66,
  sym_variable_definition_statement = 67,
  sym__expression_statement = 68,
  sym__expression = 69,
  sym_unary_expression = 70,
  sym_binary_expression = 71,
  sym_funcall_expression = 72,
  sym_parenthesized_expression = 73,
  sym_simple_type = 74,
  sym_frame_identifier = 75,
  sym_literal = 76,
  sym__numeric_literal = 77,
  sym__vector_literal = 78,
  sym__string_literal = 79,
  aux_sym_source_file_repeat1 = 80,
  aux_sym_variable_definition_repeat1 = 81,
  aux_sym_parameter_list_repeat1 = 82,
  aux_sym__compound_statement_repeat1 = 83,
  aux_sym_variable_definition_statement_repeat1 = 84,
  aux_sym_funcall_expression_repeat1 = 85,
  aux_sym__string_literal_repeat1 = 86,
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
  [anon_sym_void] = "void",
  [anon_sym_entity] = "entity",
  [anon_sym_float] = "float",
  [anon_sym_vector] = "vector",
  [anon_sym_string] = "string",
  [anon_sym_int] = "int",
  [sym_identifier] = "identifier",
  [anon_sym_DOLLAR] = "$",
  [aux_sym_frame_identifier_token1] = "frame_identifier_token1",
  [sym__integer_literal] = "_integer_literal",
  [sym__float_literal] = "_float_literal",
  [anon_sym_BQUOTE] = "`",
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
  [sym_simple_type] = "simple_type",
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
  [anon_sym_void] = anon_sym_void,
  [anon_sym_entity] = anon_sym_entity,
  [anon_sym_float] = anon_sym_float,
  [anon_sym_vector] = anon_sym_vector,
  [anon_sym_string] = anon_sym_string,
  [anon_sym_int] = anon_sym_int,
  [sym_identifier] = sym_identifier,
  [anon_sym_DOLLAR] = anon_sym_DOLLAR,
  [aux_sym_frame_identifier_token1] = aux_sym_frame_identifier_token1,
  [sym__integer_literal] = sym__integer_literal,
  [sym__float_literal] = sym__float_literal,
  [anon_sym_BQUOTE] = anon_sym_BQUOTE,
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
  [sym_simple_type] = sym_simple_type,
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
  [anon_sym_DOLLAR] = {
    .visible = true,
    .named = false,
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
  [161] = 161,
  [162] = 162,
  [163] = 163,
  [164] = 164,
  [165] = 165,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(62);
      if (lookahead == '!') ADVANCE(92);
      if (lookahead == '"') ADVANCE(156);
      if (lookahead == '#') ADVANCE(57);
      if (lookahead == '$') ADVANCE(151);
      if (lookahead == '&') ADVANCE(94);
      if (lookahead == '(') ADVANCE(70);
      if (lookahead == ')') ADVANCE(71);
      if (lookahead == '*') ADVANCE(88);
      if (lookahead == '+') ADVANCE(87);
      if (lookahead == ',') ADVANCE(66);
      if (lookahead == '-') ADVANCE(86);
      if (lookahead == '.') ADVANCE(69);
      if (lookahead == '/') ADVANCE(89);
      if (lookahead == ';') ADVANCE(63);
      if (lookahead == '<') ADVANCE(100);
      if (lookahead == '=') ADVANCE(64);
      if (lookahead == '>') ADVANCE(97);
      if (lookahead == '[') ADVANCE(65);
      if (lookahead == '\\') ADVANCE(2);
      if (lookahead == ']') ADVANCE(67);
      if (lookahead == '`') ADVANCE(155);
      if (lookahead == 'd') ADVANCE(40);
      if (lookahead == 'e') ADVANCE(33);
      if (lookahead == 'f') ADVANCE(35);
      if (lookahead == 'i') ADVANCE(26);
      if (lookahead == 'l') ADVANCE(41);
      if (lookahead == 'r') ADVANCE(25);
      if (lookahead == 's') ADVANCE(48);
      if (lookahead == 'v') ADVANCE(24);
      if (lookahead == 'w') ADVANCE(28);
      if (lookahead == '{') ADVANCE(72);
      if (lookahead == '|') ADVANCE(93);
      if (lookahead == '}') ADVANCE(73);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(153);
      END_STATE();
    case 1:
      if (lookahead == '\n') SKIP(9)
      END_STATE();
    case 2:
      if (lookahead == '\n') SKIP(9)
      if (lookahead == '\r') SKIP(1)
      if (lookahead == 'n' ||
          lookahead == 'r') ADVANCE(162);
      END_STATE();
    case 3:
      if (lookahead == '\n') SKIP(10)
      END_STATE();
    case 4:
      if (lookahead == '\n') SKIP(10)
      if (lookahead == '\r') SKIP(3)
      END_STATE();
    case 5:
      if (lookahead == '\n') SKIP(11)
      END_STATE();
    case 6:
      if (lookahead == '\n') SKIP(11)
      if (lookahead == '\r') SKIP(5)
      END_STATE();
    case 7:
      if (lookahead == '\n') SKIP(15)
      END_STATE();
    case 8:
      if (lookahead == '\n') SKIP(15)
      if (lookahead == '\r') SKIP(7)
      END_STATE();
    case 9:
      if (lookahead == '!') ADVANCE(92);
      if (lookahead == '"') ADVANCE(156);
      if (lookahead == '#') ADVANCE(57);
      if (lookahead == '$') ADVANCE(151);
      if (lookahead == '&') ADVANCE(94);
      if (lookahead == '(') ADVANCE(70);
      if (lookahead == ')') ADVANCE(71);
      if (lookahead == '*') ADVANCE(88);
      if (lookahead == '+') ADVANCE(87);
      if (lookahead == ',') ADVANCE(66);
      if (lookahead == '-') ADVANCE(86);
      if (lookahead == '.') ADVANCE(69);
      if (lookahead == '/') ADVANCE(89);
      if (lookahead == ';') ADVANCE(63);
      if (lookahead == '<') ADVANCE(100);
      if (lookahead == '=') ADVANCE(64);
      if (lookahead == '>') ADVANCE(97);
      if (lookahead == '[') ADVANCE(65);
      if (lookahead == '\\') ADVANCE(2);
      if (lookahead == ']') ADVANCE(67);
      if (lookahead == '`') ADVANCE(155);
      if (lookahead == 'd') ADVANCE(40);
      if (lookahead == 'e') ADVANCE(33);
      if (lookahead == 'f') ADVANCE(35);
      if (lookahead == 'i') ADVANCE(26);
      if (lookahead == 'l') ADVANCE(41);
      if (lookahead == 'r') ADVANCE(25);
      if (lookahead == 's') ADVANCE(48);
      if (lookahead == 'v') ADVANCE(24);
      if (lookahead == 'w') ADVANCE(28);
      if (lookahead == '{') ADVANCE(72);
      if (lookahead == '|') ADVANCE(93);
      if (lookahead == '}') ADVANCE(73);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(9)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(153);
      END_STATE();
    case 10:
      if (lookahead == '"') ADVANCE(156);
      if (lookahead == '#') ADVANCE(57);
      if (lookahead == '(') ADVANCE(70);
      if (lookahead == '+') ADVANCE(87);
      if (lookahead == '-') ADVANCE(86);
      if (lookahead == '.') ADVANCE(58);
      if (lookahead == '/') ADVANCE(12);
      if (lookahead == '[') ADVANCE(65);
      if (lookahead == '\\') SKIP(4)
      if (lookahead == '`') ADVANCE(155);
      if (lookahead == 'd') ADVANCE(134);
      if (lookahead == 'e') ADVANCE(133);
      if (lookahead == 'f') ADVANCE(130);
      if (lookahead == 'i') ADVANCE(121);
      if (lookahead == 'l') ADVANCE(135);
      if (lookahead == 'r') ADVANCE(120);
      if (lookahead == 's') ADVANCE(141);
      if (lookahead == 'v') ADVANCE(119);
      if (lookahead == 'w') ADVANCE(123);
      if (lookahead == '{') ADVANCE(72);
      if (lookahead == '}') ADVANCE(73);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(10)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(153);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(150);
      END_STATE();
    case 11:
      if (lookahead == '"') ADVANCE(156);
      if (lookahead == '(') ADVANCE(70);
      if (lookahead == ')') ADVANCE(71);
      if (lookahead == '+') ADVANCE(87);
      if (lookahead == '-') ADVANCE(86);
      if (lookahead == '.') ADVANCE(58);
      if (lookahead == '/') ADVANCE(12);
      if (lookahead == '\\') SKIP(6)
      if (lookahead == '`') ADVANCE(155);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(11)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(153);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(150);
      END_STATE();
    case 12:
      if (lookahead == '*') ADVANCE(14);
      if (lookahead == '/') ADVANCE(174);
      END_STATE();
    case 13:
      if (lookahead == '*') ADVANCE(13);
      if (lookahead == '/') ADVANCE(173);
      if (lookahead != 0) ADVANCE(14);
      END_STATE();
    case 14:
      if (lookahead == '*') ADVANCE(13);
      if (lookahead != 0) ADVANCE(14);
      END_STATE();
    case 15:
      if (lookahead == '/') ADVANCE(12);
      if (lookahead == '\\') SKIP(8)
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(15)
      END_STATE();
    case 16:
      if (lookahead == '/') ADVANCE(12);
      if (lookahead == '\\') SKIP(8)
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(15)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(152);
      END_STATE();
    case 17:
      if (lookahead == 'a') ADVANCE(34);
      END_STATE();
    case 18:
      if (lookahead == 'a') ADVANCE(52);
      END_STATE();
    case 19:
      if (lookahead == 'c') ADVANCE(17);
      END_STATE();
    case 20:
      if (lookahead == 'c') ADVANCE(54);
      END_STATE();
    case 21:
      if (lookahead == 'd') ADVANCE(101);
      END_STATE();
    case 22:
      if (lookahead == 'e') ADVANCE(76);
      END_STATE();
    case 23:
      if (lookahead == 'e') ADVANCE(77);
      END_STATE();
    case 24:
      if (lookahead == 'e') ADVANCE(20);
      if (lookahead == 'o') ADVANCE(29);
      END_STATE();
    case 25:
      if (lookahead == 'e') ADVANCE(50);
      END_STATE();
    case 26:
      if (lookahead == 'f') ADVANCE(74);
      if (lookahead == 'n') ADVANCE(49);
      END_STATE();
    case 27:
      if (lookahead == 'g') ADVANCE(109);
      END_STATE();
    case 28:
      if (lookahead == 'h') ADVANCE(31);
      END_STATE();
    case 29:
      if (lookahead == 'i') ADVANCE(21);
      END_STATE();
    case 30:
      if (lookahead == 'i') ADVANCE(37);
      END_STATE();
    case 31:
      if (lookahead == 'i') ADVANCE(36);
      END_STATE();
    case 32:
      if (lookahead == 'i') ADVANCE(51);
      END_STATE();
    case 33:
      if (lookahead == 'l') ADVANCE(47);
      if (lookahead == 'n') ADVANCE(53);
      END_STATE();
    case 34:
      if (lookahead == 'l') ADVANCE(83);
      END_STATE();
    case 35:
      if (lookahead == 'l') ADVANCE(42);
      END_STATE();
    case 36:
      if (lookahead == 'l') ADVANCE(23);
      END_STATE();
    case 37:
      if (lookahead == 'n') ADVANCE(27);
      END_STATE();
    case 38:
      if (lookahead == 'n') ADVANCE(81);
      END_STATE();
    case 39:
      if (lookahead == 'n') ADVANCE(49);
      END_STATE();
    case 40:
      if (lookahead == 'o') ADVANCE(79);
      END_STATE();
    case 41:
      if (lookahead == 'o') ADVANCE(19);
      END_STATE();
    case 42:
      if (lookahead == 'o') ADVANCE(18);
      END_STATE();
    case 43:
      if (lookahead == 'o') ADVANCE(44);
      END_STATE();
    case 44:
      if (lookahead == 'r') ADVANCE(107);
      END_STATE();
    case 45:
      if (lookahead == 'r') ADVANCE(38);
      END_STATE();
    case 46:
      if (lookahead == 'r') ADVANCE(30);
      END_STATE();
    case 47:
      if (lookahead == 's') ADVANCE(22);
      END_STATE();
    case 48:
      if (lookahead == 't') ADVANCE(46);
      END_STATE();
    case 49:
      if (lookahead == 't') ADVANCE(111);
      END_STATE();
    case 50:
      if (lookahead == 't') ADVANCE(55);
      END_STATE();
    case 51:
      if (lookahead == 't') ADVANCE(56);
      END_STATE();
    case 52:
      if (lookahead == 't') ADVANCE(105);
      END_STATE();
    case 53:
      if (lookahead == 't') ADVANCE(32);
      END_STATE();
    case 54:
      if (lookahead == 't') ADVANCE(43);
      END_STATE();
    case 55:
      if (lookahead == 'u') ADVANCE(45);
      END_STATE();
    case 56:
      if (lookahead == 'y') ADVANCE(103);
      END_STATE();
    case 57:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(172);
      END_STATE();
    case 58:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(154);
      END_STATE();
    case 59:
      if (eof) ADVANCE(62);
      if (lookahead == '\n') SKIP(61)
      END_STATE();
    case 60:
      if (eof) ADVANCE(62);
      if (lookahead == '\n') SKIP(61)
      if (lookahead == '\r') SKIP(59)
      END_STATE();
    case 61:
      if (eof) ADVANCE(62);
      if (lookahead == '!') ADVANCE(92);
      if (lookahead == '&') ADVANCE(94);
      if (lookahead == '(') ADVANCE(70);
      if (lookahead == ')') ADVANCE(71);
      if (lookahead == '*') ADVANCE(88);
      if (lookahead == '+') ADVANCE(87);
      if (lookahead == ',') ADVANCE(66);
      if (lookahead == '-') ADVANCE(85);
      if (lookahead == '.') ADVANCE(68);
      if (lookahead == '/') ADVANCE(89);
      if (lookahead == ';') ADVANCE(63);
      if (lookahead == '<') ADVANCE(100);
      if (lookahead == '=') ADVANCE(64);
      if (lookahead == '>') ADVANCE(97);
      if (lookahead == '\\') SKIP(60)
      if (lookahead == 'e') ADVANCE(33);
      if (lookahead == 'f') ADVANCE(35);
      if (lookahead == 'i') ADVANCE(39);
      if (lookahead == 's') ADVANCE(48);
      if (lookahead == 'v') ADVANCE(24);
      if (lookahead == 'w') ADVANCE(28);
      if (lookahead == '|') ADVANCE(93);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(61)
      END_STATE();
    case 62:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 63:
      ACCEPT_TOKEN(anon_sym_SEMI);
      END_STATE();
    case 64:
      ACCEPT_TOKEN(anon_sym_EQ);
      if (lookahead == '=') ADVANCE(95);
      END_STATE();
    case 65:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 66:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 67:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 68:
      ACCEPT_TOKEN(anon_sym_DOT);
      END_STATE();
    case 69:
      ACCEPT_TOKEN(anon_sym_DOT);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(154);
      END_STATE();
    case 70:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 71:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 72:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 73:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 74:
      ACCEPT_TOKEN(anon_sym_if);
      END_STATE();
    case 75:
      ACCEPT_TOKEN(anon_sym_if);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(150);
      END_STATE();
    case 76:
      ACCEPT_TOKEN(anon_sym_else);
      END_STATE();
    case 77:
      ACCEPT_TOKEN(anon_sym_while);
      END_STATE();
    case 78:
      ACCEPT_TOKEN(anon_sym_while);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(150);
      END_STATE();
    case 79:
      ACCEPT_TOKEN(anon_sym_do);
      END_STATE();
    case 80:
      ACCEPT_TOKEN(anon_sym_do);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(150);
      END_STATE();
    case 81:
      ACCEPT_TOKEN(anon_sym_return);
      END_STATE();
    case 82:
      ACCEPT_TOKEN(anon_sym_return);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(150);
      END_STATE();
    case 83:
      ACCEPT_TOKEN(anon_sym_local);
      END_STATE();
    case 84:
      ACCEPT_TOKEN(anon_sym_local);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(150);
      END_STATE();
    case 85:
      ACCEPT_TOKEN(anon_sym_DASH);
      END_STATE();
    case 86:
      ACCEPT_TOKEN(anon_sym_DASH);
      if (lookahead == '.') ADVANCE(58);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(153);
      END_STATE();
    case 87:
      ACCEPT_TOKEN(anon_sym_PLUS);
      END_STATE();
    case 88:
      ACCEPT_TOKEN(anon_sym_STAR);
      END_STATE();
    case 89:
      ACCEPT_TOKEN(anon_sym_SLASH);
      if (lookahead == '*') ADVANCE(14);
      if (lookahead == '/') ADVANCE(174);
      END_STATE();
    case 90:
      ACCEPT_TOKEN(anon_sym_PIPE_PIPE);
      END_STATE();
    case 91:
      ACCEPT_TOKEN(anon_sym_AMP_AMP);
      END_STATE();
    case 92:
      ACCEPT_TOKEN(anon_sym_BANG);
      if (lookahead == '=') ADVANCE(96);
      END_STATE();
    case 93:
      ACCEPT_TOKEN(anon_sym_PIPE);
      if (lookahead == '|') ADVANCE(90);
      END_STATE();
    case 94:
      ACCEPT_TOKEN(anon_sym_AMP);
      if (lookahead == '&') ADVANCE(91);
      END_STATE();
    case 95:
      ACCEPT_TOKEN(anon_sym_EQ_EQ);
      END_STATE();
    case 96:
      ACCEPT_TOKEN(anon_sym_BANG_EQ);
      END_STATE();
    case 97:
      ACCEPT_TOKEN(anon_sym_GT);
      if (lookahead == '=') ADVANCE(98);
      END_STATE();
    case 98:
      ACCEPT_TOKEN(anon_sym_GT_EQ);
      END_STATE();
    case 99:
      ACCEPT_TOKEN(anon_sym_LT_EQ);
      END_STATE();
    case 100:
      ACCEPT_TOKEN(anon_sym_LT);
      if (lookahead == '=') ADVANCE(99);
      END_STATE();
    case 101:
      ACCEPT_TOKEN(anon_sym_void);
      END_STATE();
    case 102:
      ACCEPT_TOKEN(anon_sym_void);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(150);
      END_STATE();
    case 103:
      ACCEPT_TOKEN(anon_sym_entity);
      END_STATE();
    case 104:
      ACCEPT_TOKEN(anon_sym_entity);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(150);
      END_STATE();
    case 105:
      ACCEPT_TOKEN(anon_sym_float);
      END_STATE();
    case 106:
      ACCEPT_TOKEN(anon_sym_float);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(150);
      END_STATE();
    case 107:
      ACCEPT_TOKEN(anon_sym_vector);
      END_STATE();
    case 108:
      ACCEPT_TOKEN(anon_sym_vector);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(150);
      END_STATE();
    case 109:
      ACCEPT_TOKEN(anon_sym_string);
      END_STATE();
    case 110:
      ACCEPT_TOKEN(anon_sym_string);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(150);
      END_STATE();
    case 111:
      ACCEPT_TOKEN(anon_sym_int);
      END_STATE();
    case 112:
      ACCEPT_TOKEN(anon_sym_int);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(150);
      END_STATE();
    case 113:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(128);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(150);
      END_STATE();
    case 114:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(145);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(150);
      END_STATE();
    case 115:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'c') ADVANCE(113);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(150);
      END_STATE();
    case 116:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'c') ADVANCE(147);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(150);
      END_STATE();
    case 117:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'd') ADVANCE(102);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(150);
      END_STATE();
    case 118:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(78);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(150);
      END_STATE();
    case 119:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(116);
      if (lookahead == 'o') ADVANCE(124);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(150);
      END_STATE();
    case 120:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(143);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(150);
      END_STATE();
    case 121:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'f') ADVANCE(75);
      if (lookahead == 'n') ADVANCE(142);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(150);
      END_STATE();
    case 122:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'g') ADVANCE(110);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(150);
      END_STATE();
    case 123:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'h') ADVANCE(126);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(150);
      END_STATE();
    case 124:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(117);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(150);
      END_STATE();
    case 125:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(131);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(150);
      END_STATE();
    case 126:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(129);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(150);
      END_STATE();
    case 127:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(144);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(150);
      END_STATE();
    case 128:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(84);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(150);
      END_STATE();
    case 129:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(118);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(150);
      END_STATE();
    case 130:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(136);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(150);
      END_STATE();
    case 131:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(122);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(150);
      END_STATE();
    case 132:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(82);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(150);
      END_STATE();
    case 133:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(146);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(150);
      END_STATE();
    case 134:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(80);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(150);
      END_STATE();
    case 135:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(115);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(150);
      END_STATE();
    case 136:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(114);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(150);
      END_STATE();
    case 137:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(138);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(150);
      END_STATE();
    case 138:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(108);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(150);
      END_STATE();
    case 139:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(132);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(150);
      END_STATE();
    case 140:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(125);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(150);
      END_STATE();
    case 141:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(140);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(150);
      END_STATE();
    case 142:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(112);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(150);
      END_STATE();
    case 143:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(148);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(150);
      END_STATE();
    case 144:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(149);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(150);
      END_STATE();
    case 145:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(106);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(150);
      END_STATE();
    case 146:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(127);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(150);
      END_STATE();
    case 147:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(137);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(150);
      END_STATE();
    case 148:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'u') ADVANCE(139);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(150);
      END_STATE();
    case 149:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'y') ADVANCE(104);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(150);
      END_STATE();
    case 150:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(150);
      END_STATE();
    case 151:
      ACCEPT_TOKEN(anon_sym_DOLLAR);
      END_STATE();
    case 152:
      ACCEPT_TOKEN(aux_sym_frame_identifier_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(152);
      END_STATE();
    case 153:
      ACCEPT_TOKEN(sym__integer_literal);
      if (lookahead == '.') ADVANCE(58);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(153);
      END_STATE();
    case 154:
      ACCEPT_TOKEN(sym__float_literal);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(154);
      END_STATE();
    case 155:
      ACCEPT_TOKEN(anon_sym_BQUOTE);
      END_STATE();
    case 156:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 157:
      ACCEPT_TOKEN(aux_sym__string_literal_token1);
      if (lookahead == '*') ADVANCE(159);
      if (lookahead == '/') ADVANCE(161);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(161);
      END_STATE();
    case 158:
      ACCEPT_TOKEN(aux_sym__string_literal_token1);
      if (lookahead == '*') ADVANCE(158);
      if (lookahead == '/') ADVANCE(161);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(159);
      END_STATE();
    case 159:
      ACCEPT_TOKEN(aux_sym__string_literal_token1);
      if (lookahead == '*') ADVANCE(158);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(159);
      END_STATE();
    case 160:
      ACCEPT_TOKEN(aux_sym__string_literal_token1);
      if (lookahead == '/') ADVANCE(157);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(160);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(161);
      END_STATE();
    case 161:
      ACCEPT_TOKEN(aux_sym__string_literal_token1);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(161);
      END_STATE();
    case 162:
      ACCEPT_TOKEN(aux_sym__string_literal_token2);
      END_STATE();
    case 163:
      ACCEPT_TOKEN(aux_sym__string_literal_token3);
      if (lookahead == '\n') ADVANCE(170);
      if (lookahead == '\r') ADVANCE(165);
      if (lookahead == 'n' ||
          lookahead == 'r') ADVANCE(162);
      if (lookahead != 0 &&
          lookahead != '"') ADVANCE(171);
      END_STATE();
    case 164:
      ACCEPT_TOKEN(aux_sym__string_literal_token3);
      if (lookahead == '\n') ADVANCE(170);
      if (lookahead == '/') ADVANCE(157);
      if (lookahead == '\\') ADVANCE(163);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(160);
      if (lookahead != 0 &&
          lookahead != '"') ADVANCE(161);
      END_STATE();
    case 165:
      ACCEPT_TOKEN(aux_sym__string_literal_token3);
      if (lookahead == '\n') ADVANCE(170);
      if (lookahead != 0 &&
          lookahead != '"') ADVANCE(171);
      END_STATE();
    case 166:
      ACCEPT_TOKEN(aux_sym__string_literal_token3);
      if (lookahead == '\n') ADVANCE(171);
      if (lookahead == '"') ADVANCE(174);
      if (lookahead != 0) ADVANCE(166);
      END_STATE();
    case 167:
      ACCEPT_TOKEN(aux_sym__string_literal_token3);
      if (lookahead == '"') ADVANCE(14);
      if (lookahead == '*') ADVANCE(167);
      if (lookahead == '/') ADVANCE(171);
      if (lookahead != 0) ADVANCE(168);
      END_STATE();
    case 168:
      ACCEPT_TOKEN(aux_sym__string_literal_token3);
      if (lookahead == '"') ADVANCE(14);
      if (lookahead == '*') ADVANCE(167);
      if (lookahead != 0) ADVANCE(168);
      END_STATE();
    case 169:
      ACCEPT_TOKEN(aux_sym__string_literal_token3);
      if (lookahead == '*') ADVANCE(168);
      if (lookahead == '/') ADVANCE(166);
      if (lookahead != 0 &&
          lookahead != '"') ADVANCE(171);
      END_STATE();
    case 170:
      ACCEPT_TOKEN(aux_sym__string_literal_token3);
      if (lookahead == '/') ADVANCE(169);
      if (lookahead == '\\') ADVANCE(163);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(170);
      if (lookahead != 0 &&
          lookahead != '"') ADVANCE(171);
      END_STATE();
    case 171:
      ACCEPT_TOKEN(aux_sym__string_literal_token3);
      if (lookahead != 0 &&
          lookahead != '"') ADVANCE(171);
      END_STATE();
    case 172:
      ACCEPT_TOKEN(sym__builtin_literal);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(172);
      END_STATE();
    case 173:
      ACCEPT_TOKEN(sym_comment);
      END_STATE();
    case 174:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(174);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 61},
  [2] = {.lex_state = 10},
  [3] = {.lex_state = 10},
  [4] = {.lex_state = 10},
  [5] = {.lex_state = 10},
  [6] = {.lex_state = 10},
  [7] = {.lex_state = 10},
  [8] = {.lex_state = 10},
  [9] = {.lex_state = 10},
  [10] = {.lex_state = 10},
  [11] = {.lex_state = 61},
  [12] = {.lex_state = 61},
  [13] = {.lex_state = 61},
  [14] = {.lex_state = 61},
  [15] = {.lex_state = 61},
  [16] = {.lex_state = 61},
  [17] = {.lex_state = 61},
  [18] = {.lex_state = 61},
  [19] = {.lex_state = 61},
  [20] = {.lex_state = 61},
  [21] = {.lex_state = 61},
  [22] = {.lex_state = 61},
  [23] = {.lex_state = 61},
  [24] = {.lex_state = 61},
  [25] = {.lex_state = 61},
  [26] = {.lex_state = 61},
  [27] = {.lex_state = 61},
  [28] = {.lex_state = 10},
  [29] = {.lex_state = 61},
  [30] = {.lex_state = 61},
  [31] = {.lex_state = 61},
  [32] = {.lex_state = 61},
  [33] = {.lex_state = 61},
  [34] = {.lex_state = 11},
  [35] = {.lex_state = 61},
  [36] = {.lex_state = 11},
  [37] = {.lex_state = 11},
  [38] = {.lex_state = 11},
  [39] = {.lex_state = 11},
  [40] = {.lex_state = 11},
  [41] = {.lex_state = 11},
  [42] = {.lex_state = 11},
  [43] = {.lex_state = 11},
  [44] = {.lex_state = 11},
  [45] = {.lex_state = 11},
  [46] = {.lex_state = 61},
  [47] = {.lex_state = 11},
  [48] = {.lex_state = 11},
  [49] = {.lex_state = 11},
  [50] = {.lex_state = 11},
  [51] = {.lex_state = 11},
  [52] = {.lex_state = 11},
  [53] = {.lex_state = 61},
  [54] = {.lex_state = 61},
  [55] = {.lex_state = 61},
  [56] = {.lex_state = 61},
  [57] = {.lex_state = 61},
  [58] = {.lex_state = 61},
  [59] = {.lex_state = 0},
  [60] = {.lex_state = 61},
  [61] = {.lex_state = 10},
  [62] = {.lex_state = 10},
  [63] = {.lex_state = 61},
  [64] = {.lex_state = 10},
  [65] = {.lex_state = 10},
  [66] = {.lex_state = 61},
  [67] = {.lex_state = 61},
  [68] = {.lex_state = 61},
  [69] = {.lex_state = 0},
  [70] = {.lex_state = 10},
  [71] = {.lex_state = 10},
  [72] = {.lex_state = 61},
  [73] = {.lex_state = 61},
  [74] = {.lex_state = 61},
  [75] = {.lex_state = 10},
  [76] = {.lex_state = 10},
  [77] = {.lex_state = 61},
  [78] = {.lex_state = 61},
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
  [99] = {.lex_state = 0},
  [100] = {.lex_state = 164},
  [101] = {.lex_state = 0},
  [102] = {.lex_state = 164},
  [103] = {.lex_state = 0},
  [104] = {.lex_state = 164},
  [105] = {.lex_state = 0},
  [106] = {.lex_state = 10},
  [107] = {.lex_state = 0},
  [108] = {.lex_state = 0},
  [109] = {.lex_state = 0},
  [110] = {.lex_state = 0},
  [111] = {.lex_state = 0},
  [112] = {.lex_state = 0},
  [113] = {.lex_state = 11},
  [114] = {.lex_state = 0},
  [115] = {.lex_state = 0},
  [116] = {.lex_state = 0},
  [117] = {.lex_state = 0},
  [118] = {.lex_state = 10},
  [119] = {.lex_state = 0},
  [120] = {.lex_state = 0},
  [121] = {.lex_state = 10},
  [122] = {.lex_state = 0},
  [123] = {.lex_state = 0},
  [124] = {.lex_state = 0},
  [125] = {.lex_state = 0},
  [126] = {.lex_state = 0},
  [127] = {.lex_state = 11},
  [128] = {.lex_state = 0},
  [129] = {.lex_state = 0},
  [130] = {.lex_state = 0},
  [131] = {.lex_state = 0},
  [132] = {.lex_state = 0},
  [133] = {.lex_state = 11},
  [134] = {.lex_state = 0},
  [135] = {.lex_state = 11},
  [136] = {.lex_state = 11},
  [137] = {.lex_state = 0},
  [138] = {.lex_state = 0},
  [139] = {.lex_state = 11},
  [140] = {.lex_state = 11},
  [141] = {.lex_state = 11},
  [142] = {.lex_state = 11},
  [143] = {.lex_state = 11},
  [144] = {.lex_state = 0},
  [145] = {.lex_state = 11},
  [146] = {.lex_state = 0},
  [147] = {.lex_state = 0},
  [148] = {.lex_state = 11},
  [149] = {.lex_state = 11},
  [150] = {.lex_state = 11},
  [151] = {.lex_state = 11},
  [152] = {.lex_state = 0},
  [153] = {.lex_state = 0},
  [154] = {.lex_state = 11},
  [155] = {.lex_state = 11},
  [156] = {.lex_state = 0},
  [157] = {.lex_state = 0},
  [158] = {.lex_state = 11},
  [159] = {.lex_state = 0},
  [160] = {.lex_state = 0},
  [161] = {.lex_state = 11},
  [162] = {.lex_state = 0},
  [163] = {.lex_state = 0},
  [164] = {.lex_state = 16},
  [165] = {.lex_state = 0},
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
    [anon_sym_void] = ACTIONS(1),
    [anon_sym_entity] = ACTIONS(1),
    [anon_sym_float] = ACTIONS(1),
    [anon_sym_vector] = ACTIONS(1),
    [anon_sym_string] = ACTIONS(1),
    [anon_sym_int] = ACTIONS(1),
    [anon_sym_DOLLAR] = ACTIONS(1),
    [sym__integer_literal] = ACTIONS(1),
    [sym__float_literal] = ACTIONS(1),
    [anon_sym_BQUOTE] = ACTIONS(1),
    [anon_sym_DQUOTE] = ACTIONS(1),
    [aux_sym__string_literal_token2] = ACTIONS(1),
    [sym__builtin_literal] = ACTIONS(1),
    [sym_comment] = ACTIONS(3),
  },
  [1] = {
    [sym_source_file] = STATE(138),
    [sym__definition] = STATE(55),
    [sym_function_declaration] = STATE(55),
    [sym_function_definition] = STATE(55),
    [sym_constant_definition] = STATE(55),
    [sym_variable_definition] = STATE(55),
    [sym_field_definition] = STATE(55),
    [sym_simple_type] = STATE(113),
    [aux_sym_source_file_repeat1] = STATE(55),
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
  [0] = 22,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(11), 1,
      anon_sym_LBRACK,
    ACTIONS(13), 1,
      anon_sym_LPAREN,
    ACTIONS(15), 1,
      anon_sym_LBRACE,
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
    ACTIONS(33), 1,
      sym_identifier,
    ACTIONS(35), 1,
      sym__integer_literal,
    ACTIONS(37), 1,
      sym__float_literal,
    ACTIONS(39), 1,
      anon_sym_BQUOTE,
    ACTIONS(41), 1,
      anon_sym_DQUOTE,
    ACTIONS(43), 1,
      sym__builtin_literal,
    STATE(161), 1,
      sym_simple_type,
    STATE(12), 3,
      sym__numeric_literal,
      sym__vector_literal,
      sym__string_literal,
    ACTIONS(31), 6,
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
    STATE(159), 10,
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
  [88] = 21,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(13), 1,
      anon_sym_LPAREN,
    ACTIONS(15), 1,
      anon_sym_LBRACE,
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
    ACTIONS(33), 1,
      sym_identifier,
    ACTIONS(35), 1,
      sym__integer_literal,
    ACTIONS(37), 1,
      sym__float_literal,
    ACTIONS(39), 1,
      anon_sym_BQUOTE,
    ACTIONS(41), 1,
      anon_sym_DQUOTE,
    ACTIONS(45), 1,
      sym__builtin_literal,
    STATE(161), 1,
      sym_simple_type,
    STATE(12), 3,
      sym__numeric_literal,
      sym__vector_literal,
      sym__string_literal,
    ACTIONS(31), 6,
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
    STATE(144), 10,
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
  [173] = 20,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(13), 1,
      anon_sym_LPAREN,
    ACTIONS(15), 1,
      anon_sym_LBRACE,
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
    ACTIONS(33), 1,
      sym_identifier,
    ACTIONS(35), 1,
      sym__integer_literal,
    ACTIONS(37), 1,
      sym__float_literal,
    ACTIONS(39), 1,
      anon_sym_BQUOTE,
    ACTIONS(41), 1,
      anon_sym_DQUOTE,
    STATE(161), 1,
      sym_simple_type,
    STATE(12), 3,
      sym__numeric_literal,
      sym__vector_literal,
      sym__string_literal,
    ACTIONS(31), 6,
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
    STATE(125), 10,
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
  [255] = 20,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(13), 1,
      anon_sym_LPAREN,
    ACTIONS(15), 1,
      anon_sym_LBRACE,
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
    ACTIONS(33), 1,
      sym_identifier,
    ACTIONS(35), 1,
      sym__integer_literal,
    ACTIONS(37), 1,
      sym__float_literal,
    ACTIONS(39), 1,
      anon_sym_BQUOTE,
    ACTIONS(41), 1,
      anon_sym_DQUOTE,
    STATE(161), 1,
      sym_simple_type,
    STATE(12), 3,
      sym__numeric_literal,
      sym__vector_literal,
      sym__string_literal,
    ACTIONS(31), 6,
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
    STATE(160), 10,
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
  [337] = 20,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(13), 1,
      anon_sym_LPAREN,
    ACTIONS(15), 1,
      anon_sym_LBRACE,
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
    ACTIONS(33), 1,
      sym_identifier,
    ACTIONS(35), 1,
      sym__integer_literal,
    ACTIONS(37), 1,
      sym__float_literal,
    ACTIONS(39), 1,
      anon_sym_BQUOTE,
    ACTIONS(41), 1,
      anon_sym_DQUOTE,
    STATE(161), 1,
      sym_simple_type,
    STATE(12), 3,
      sym__numeric_literal,
      sym__vector_literal,
      sym__string_literal,
    ACTIONS(31), 6,
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
    STATE(124), 10,
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
  [419] = 20,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(13), 1,
      anon_sym_LPAREN,
    ACTIONS(15), 1,
      anon_sym_LBRACE,
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
    ACTIONS(33), 1,
      sym_identifier,
    ACTIONS(35), 1,
      sym__integer_literal,
    ACTIONS(37), 1,
      sym__float_literal,
    ACTIONS(39), 1,
      anon_sym_BQUOTE,
    ACTIONS(41), 1,
      anon_sym_DQUOTE,
    STATE(161), 1,
      sym_simple_type,
    STATE(12), 3,
      sym__numeric_literal,
      sym__vector_literal,
      sym__string_literal,
    ACTIONS(31), 6,
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
    STATE(123), 10,
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
  [501] = 21,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(47), 1,
      anon_sym_LPAREN,
    ACTIONS(50), 1,
      anon_sym_RBRACE,
    ACTIONS(52), 1,
      anon_sym_if,
    ACTIONS(55), 1,
      anon_sym_while,
    ACTIONS(58), 1,
      anon_sym_do,
    ACTIONS(61), 1,
      anon_sym_return,
    ACTIONS(64), 1,
      anon_sym_local,
    ACTIONS(67), 1,
      anon_sym_DASH,
    ACTIONS(70), 1,
      anon_sym_PLUS,
    ACTIONS(76), 1,
      sym_identifier,
    ACTIONS(79), 1,
      sym__integer_literal,
    ACTIONS(82), 1,
      sym__float_literal,
    ACTIONS(85), 1,
      anon_sym_BQUOTE,
    ACTIONS(88), 1,
      anon_sym_DQUOTE,
    STATE(8), 1,
      aux_sym__compound_statement_repeat1,
    STATE(161), 1,
      sym_simple_type,
    STATE(12), 3,
      sym__numeric_literal,
      sym__vector_literal,
      sym__string_literal,
    ACTIONS(73), 6,
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
    STATE(162), 8,
      sym__simple_statement,
      sym_assignment_statement,
      sym_if_statement,
      sym_while_statement,
      sym_do_while_statement,
      sym_return_statement,
      sym_variable_definition_statement,
      sym__expression_statement,
  [584] = 21,
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
    ACTIONS(33), 1,
      sym_identifier,
    ACTIONS(35), 1,
      sym__integer_literal,
    ACTIONS(37), 1,
      sym__float_literal,
    ACTIONS(39), 1,
      anon_sym_BQUOTE,
    ACTIONS(41), 1,
      anon_sym_DQUOTE,
    ACTIONS(91), 1,
      anon_sym_RBRACE,
    STATE(8), 1,
      aux_sym__compound_statement_repeat1,
    STATE(161), 1,
      sym_simple_type,
    STATE(12), 3,
      sym__numeric_literal,
      sym__vector_literal,
      sym__string_literal,
    ACTIONS(31), 6,
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
    STATE(162), 8,
      sym__simple_statement,
      sym_assignment_statement,
      sym_if_statement,
      sym_while_statement,
      sym_do_while_statement,
      sym_return_statement,
      sym_variable_definition_statement,
      sym__expression_statement,
  [667] = 21,
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
    ACTIONS(33), 1,
      sym_identifier,
    ACTIONS(35), 1,
      sym__integer_literal,
    ACTIONS(37), 1,
      sym__float_literal,
    ACTIONS(39), 1,
      anon_sym_BQUOTE,
    ACTIONS(41), 1,
      anon_sym_DQUOTE,
    ACTIONS(93), 1,
      anon_sym_RBRACE,
    STATE(9), 1,
      aux_sym__compound_statement_repeat1,
    STATE(161), 1,
      sym_simple_type,
    STATE(12), 3,
      sym__numeric_literal,
      sym__vector_literal,
      sym__string_literal,
    ACTIONS(31), 6,
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
    STATE(162), 8,
      sym__simple_statement,
      sym_assignment_statement,
      sym_if_statement,
      sym_while_statement,
      sym_do_while_statement,
      sym_return_statement,
      sym_variable_definition_statement,
      sym__expression_statement,
  [750] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(97), 1,
      anon_sym_LPAREN,
    ACTIONS(99), 6,
      anon_sym_SLASH,
      anon_sym_BANG,
      anon_sym_PIPE,
      anon_sym_AMP,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(95), 14,
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
  [781] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(103), 6,
      anon_sym_SLASH,
      anon_sym_BANG,
      anon_sym_PIPE,
      anon_sym_AMP,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(101), 14,
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
  [809] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(107), 6,
      anon_sym_SLASH,
      anon_sym_BANG,
      anon_sym_PIPE,
      anon_sym_AMP,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(105), 14,
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
  [837] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(111), 6,
      anon_sym_SLASH,
      anon_sym_BANG,
      anon_sym_PIPE,
      anon_sym_AMP,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(109), 14,
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
  [865] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(97), 1,
      anon_sym_LPAREN,
    ACTIONS(113), 1,
      anon_sym_EQ,
    ACTIONS(99), 6,
      anon_sym_SLASH,
      anon_sym_BANG,
      anon_sym_PIPE,
      anon_sym_AMP,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(95), 12,
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
  [897] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(117), 6,
      anon_sym_SLASH,
      anon_sym_BANG,
      anon_sym_PIPE,
      anon_sym_AMP,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(115), 14,
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
  [925] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(121), 1,
      anon_sym_STAR,
    ACTIONS(123), 1,
      anon_sym_SLASH,
    ACTIONS(125), 1,
      anon_sym_PIPE,
    ACTIONS(127), 1,
      anon_sym_AMP,
    ACTIONS(119), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(107), 3,
      anon_sym_BANG,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(105), 11,
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
  [963] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(121), 1,
      anon_sym_STAR,
    ACTIONS(123), 1,
      anon_sym_SLASH,
    ACTIONS(107), 5,
      anon_sym_BANG,
      anon_sym_PIPE,
      anon_sym_AMP,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(105), 13,
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
  [995] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(121), 1,
      anon_sym_STAR,
    ACTIONS(123), 1,
      anon_sym_SLASH,
    ACTIONS(127), 1,
      anon_sym_AMP,
    ACTIONS(107), 4,
      anon_sym_BANG,
      anon_sym_PIPE,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(105), 13,
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
  [1029] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(107), 1,
      anon_sym_BANG,
    ACTIONS(121), 1,
      anon_sym_STAR,
    ACTIONS(123), 1,
      anon_sym_SLASH,
    ACTIONS(125), 1,
      anon_sym_PIPE,
    ACTIONS(127), 1,
      anon_sym_AMP,
    ACTIONS(119), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(131), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(129), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
    ACTIONS(105), 7,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_else,
      anon_sym_while,
      anon_sym_PIPE_PIPE,
      anon_sym_AMP_AMP,
  [1071] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(121), 1,
      anon_sym_STAR,
    ACTIONS(123), 1,
      anon_sym_SLASH,
    ACTIONS(125), 1,
      anon_sym_PIPE,
    ACTIONS(127), 1,
      anon_sym_AMP,
    ACTIONS(133), 1,
      anon_sym_BANG,
    ACTIONS(119), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(131), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(129), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
    ACTIONS(105), 7,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_else,
      anon_sym_while,
      anon_sym_PIPE_PIPE,
      anon_sym_AMP_AMP,
  [1113] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(121), 1,
      anon_sym_STAR,
    ACTIONS(123), 1,
      anon_sym_SLASH,
    ACTIONS(125), 1,
      anon_sym_PIPE,
    ACTIONS(127), 1,
      anon_sym_AMP,
    ACTIONS(133), 1,
      anon_sym_BANG,
    ACTIONS(135), 1,
      anon_sym_AMP_AMP,
    ACTIONS(119), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(131), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(129), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
    ACTIONS(105), 6,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_else,
      anon_sym_while,
      anon_sym_PIPE_PIPE,
  [1157] = 3,
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
  [1185] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(121), 1,
      anon_sym_STAR,
    ACTIONS(123), 1,
      anon_sym_SLASH,
    ACTIONS(125), 1,
      anon_sym_PIPE,
    ACTIONS(127), 1,
      anon_sym_AMP,
    ACTIONS(107), 3,
      anon_sym_BANG,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(105), 13,
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
  [1221] = 3,
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
  [1249] = 3,
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
  [1277] = 3,
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
  [1305] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(50), 6,
      anon_sym_LPAREN,
      anon_sym_RBRACE,
      anon_sym_PLUS,
      sym__float_literal,
      anon_sym_BQUOTE,
      anon_sym_DQUOTE,
    ACTIONS(153), 14,
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
  [1333] = 3,
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
  [1361] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(161), 6,
      anon_sym_SLASH,
      anon_sym_BANG,
      anon_sym_PIPE,
      anon_sym_AMP,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(159), 14,
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
  [1389] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(121), 1,
      anon_sym_STAR,
    ACTIONS(123), 1,
      anon_sym_SLASH,
    ACTIONS(125), 1,
      anon_sym_PIPE,
    ACTIONS(127), 1,
      anon_sym_AMP,
    ACTIONS(133), 1,
      anon_sym_BANG,
    ACTIONS(135), 1,
      anon_sym_AMP_AMP,
    ACTIONS(165), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(119), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(131), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(163), 3,
      anon_sym_SEMI,
      anon_sym_else,
      anon_sym_while,
    ACTIONS(129), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
  [1433] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(121), 1,
      anon_sym_STAR,
    ACTIONS(123), 1,
      anon_sym_SLASH,
    ACTIONS(125), 1,
      anon_sym_PIPE,
    ACTIONS(127), 1,
      anon_sym_AMP,
    ACTIONS(133), 1,
      anon_sym_BANG,
    ACTIONS(135), 1,
      anon_sym_AMP_AMP,
    ACTIONS(165), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(119), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(131), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(167), 3,
      anon_sym_SEMI,
      anon_sym_else,
      anon_sym_while,
    ACTIONS(129), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
  [1477] = 14,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(121), 1,
      anon_sym_STAR,
    ACTIONS(123), 1,
      anon_sym_SLASH,
    ACTIONS(125), 1,
      anon_sym_PIPE,
    ACTIONS(127), 1,
      anon_sym_AMP,
    ACTIONS(133), 1,
      anon_sym_BANG,
    ACTIONS(135), 1,
      anon_sym_AMP_AMP,
    ACTIONS(165), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(169), 1,
      anon_sym_COMMA,
    ACTIONS(171), 1,
      anon_sym_RPAREN,
    STATE(119), 1,
      aux_sym_funcall_expression_repeat1,
    ACTIONS(119), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(131), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(129), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
  [1525] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(13), 1,
      anon_sym_LPAREN,
    ACTIONS(27), 1,
      anon_sym_DASH,
    ACTIONS(29), 1,
      anon_sym_PLUS,
    ACTIONS(35), 1,
      sym__integer_literal,
    ACTIONS(37), 1,
      sym__float_literal,
    ACTIONS(39), 1,
      anon_sym_BQUOTE,
    ACTIONS(41), 1,
      anon_sym_DQUOTE,
    ACTIONS(173), 1,
      anon_sym_RPAREN,
    ACTIONS(175), 1,
      sym_identifier,
    STATE(12), 3,
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
  [1569] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(121), 1,
      anon_sym_STAR,
    ACTIONS(123), 1,
      anon_sym_SLASH,
    ACTIONS(125), 1,
      anon_sym_PIPE,
    ACTIONS(127), 1,
      anon_sym_AMP,
    ACTIONS(133), 1,
      anon_sym_BANG,
    ACTIONS(135), 1,
      anon_sym_AMP_AMP,
    ACTIONS(165), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(119), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(131), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(177), 3,
      anon_sym_SEMI,
      anon_sym_else,
      anon_sym_while,
    ACTIONS(129), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
  [1613] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(13), 1,
      anon_sym_LPAREN,
    ACTIONS(27), 1,
      anon_sym_DASH,
    ACTIONS(29), 1,
      anon_sym_PLUS,
    ACTIONS(35), 1,
      sym__integer_literal,
    ACTIONS(37), 1,
      sym__float_literal,
    ACTIONS(39), 1,
      anon_sym_BQUOTE,
    ACTIONS(41), 1,
      anon_sym_DQUOTE,
    ACTIONS(175), 1,
      sym_identifier,
    STATE(12), 3,
      sym__numeric_literal,
      sym__vector_literal,
      sym__string_literal,
    STATE(17), 6,
      sym__expression,
      sym_unary_expression,
      sym_binary_expression,
      sym_funcall_expression,
      sym_parenthesized_expression,
      sym_literal,
  [1654] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(13), 1,
      anon_sym_LPAREN,
    ACTIONS(27), 1,
      anon_sym_DASH,
    ACTIONS(29), 1,
      anon_sym_PLUS,
    ACTIONS(35), 1,
      sym__integer_literal,
    ACTIONS(37), 1,
      sym__float_literal,
    ACTIONS(39), 1,
      anon_sym_BQUOTE,
    ACTIONS(41), 1,
      anon_sym_DQUOTE,
    ACTIONS(175), 1,
      sym_identifier,
    STATE(12), 3,
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
  [1695] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(13), 1,
      anon_sym_LPAREN,
    ACTIONS(27), 1,
      anon_sym_DASH,
    ACTIONS(29), 1,
      anon_sym_PLUS,
    ACTIONS(35), 1,
      sym__integer_literal,
    ACTIONS(37), 1,
      sym__float_literal,
    ACTIONS(39), 1,
      anon_sym_BQUOTE,
    ACTIONS(41), 1,
      anon_sym_DQUOTE,
    ACTIONS(175), 1,
      sym_identifier,
    STATE(12), 3,
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
  [1736] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(13), 1,
      anon_sym_LPAREN,
    ACTIONS(27), 1,
      anon_sym_DASH,
    ACTIONS(29), 1,
      anon_sym_PLUS,
    ACTIONS(35), 1,
      sym__integer_literal,
    ACTIONS(37), 1,
      sym__float_literal,
    ACTIONS(39), 1,
      anon_sym_BQUOTE,
    ACTIONS(41), 1,
      anon_sym_DQUOTE,
    ACTIONS(175), 1,
      sym_identifier,
    STATE(12), 3,
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
  [1777] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(13), 1,
      anon_sym_LPAREN,
    ACTIONS(27), 1,
      anon_sym_DASH,
    ACTIONS(29), 1,
      anon_sym_PLUS,
    ACTIONS(35), 1,
      sym__integer_literal,
    ACTIONS(37), 1,
      sym__float_literal,
    ACTIONS(39), 1,
      anon_sym_BQUOTE,
    ACTIONS(41), 1,
      anon_sym_DQUOTE,
    ACTIONS(175), 1,
      sym_identifier,
    STATE(12), 3,
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
  [1818] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(13), 1,
      anon_sym_LPAREN,
    ACTIONS(27), 1,
      anon_sym_DASH,
    ACTIONS(29), 1,
      anon_sym_PLUS,
    ACTIONS(35), 1,
      sym__integer_literal,
    ACTIONS(37), 1,
      sym__float_literal,
    ACTIONS(39), 1,
      anon_sym_BQUOTE,
    ACTIONS(41), 1,
      anon_sym_DQUOTE,
    ACTIONS(175), 1,
      sym_identifier,
    STATE(12), 3,
      sym__numeric_literal,
      sym__vector_literal,
      sym__string_literal,
    STATE(46), 6,
      sym__expression,
      sym_unary_expression,
      sym_binary_expression,
      sym_funcall_expression,
      sym_parenthesized_expression,
      sym_literal,
  [1859] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(13), 1,
      anon_sym_LPAREN,
    ACTIONS(27), 1,
      anon_sym_DASH,
    ACTIONS(29), 1,
      anon_sym_PLUS,
    ACTIONS(35), 1,
      sym__integer_literal,
    ACTIONS(37), 1,
      sym__float_literal,
    ACTIONS(39), 1,
      anon_sym_BQUOTE,
    ACTIONS(41), 1,
      anon_sym_DQUOTE,
    ACTIONS(175), 1,
      sym_identifier,
    STATE(12), 3,
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
  [1900] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(13), 1,
      anon_sym_LPAREN,
    ACTIONS(27), 1,
      anon_sym_DASH,
    ACTIONS(29), 1,
      anon_sym_PLUS,
    ACTIONS(35), 1,
      sym__integer_literal,
    ACTIONS(37), 1,
      sym__float_literal,
    ACTIONS(39), 1,
      anon_sym_BQUOTE,
    ACTIONS(41), 1,
      anon_sym_DQUOTE,
    ACTIONS(175), 1,
      sym_identifier,
    STATE(12), 3,
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
  [1941] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(13), 1,
      anon_sym_LPAREN,
    ACTIONS(27), 1,
      anon_sym_DASH,
    ACTIONS(29), 1,
      anon_sym_PLUS,
    ACTIONS(35), 1,
      sym__integer_literal,
    ACTIONS(37), 1,
      sym__float_literal,
    ACTIONS(39), 1,
      anon_sym_BQUOTE,
    ACTIONS(41), 1,
      anon_sym_DQUOTE,
    ACTIONS(175), 1,
      sym_identifier,
    STATE(12), 3,
      sym__numeric_literal,
      sym__vector_literal,
      sym__string_literal,
    STATE(18), 6,
      sym__expression,
      sym_unary_expression,
      sym_binary_expression,
      sym_funcall_expression,
      sym_parenthesized_expression,
      sym_literal,
  [1982] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(13), 1,
      anon_sym_LPAREN,
    ACTIONS(27), 1,
      anon_sym_DASH,
    ACTIONS(29), 1,
      anon_sym_PLUS,
    ACTIONS(35), 1,
      sym__integer_literal,
    ACTIONS(37), 1,
      sym__float_literal,
    ACTIONS(39), 1,
      anon_sym_BQUOTE,
    ACTIONS(41), 1,
      anon_sym_DQUOTE,
    ACTIONS(175), 1,
      sym_identifier,
    STATE(12), 3,
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
  [2023] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(121), 1,
      anon_sym_STAR,
    ACTIONS(123), 1,
      anon_sym_SLASH,
    ACTIONS(125), 1,
      anon_sym_PIPE,
    ACTIONS(127), 1,
      anon_sym_AMP,
    ACTIONS(133), 1,
      anon_sym_BANG,
    ACTIONS(135), 1,
      anon_sym_AMP_AMP,
    ACTIONS(165), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(119), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(131), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(179), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
    ACTIONS(129), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
  [2066] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(13), 1,
      anon_sym_LPAREN,
    ACTIONS(27), 1,
      anon_sym_DASH,
    ACTIONS(29), 1,
      anon_sym_PLUS,
    ACTIONS(35), 1,
      sym__integer_literal,
    ACTIONS(37), 1,
      sym__float_literal,
    ACTIONS(39), 1,
      anon_sym_BQUOTE,
    ACTIONS(41), 1,
      anon_sym_DQUOTE,
    ACTIONS(175), 1,
      sym_identifier,
    STATE(12), 3,
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
  [2107] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(13), 1,
      anon_sym_LPAREN,
    ACTIONS(27), 1,
      anon_sym_DASH,
    ACTIONS(29), 1,
      anon_sym_PLUS,
    ACTIONS(35), 1,
      sym__integer_literal,
    ACTIONS(37), 1,
      sym__float_literal,
    ACTIONS(39), 1,
      anon_sym_BQUOTE,
    ACTIONS(41), 1,
      anon_sym_DQUOTE,
    ACTIONS(175), 1,
      sym_identifier,
    STATE(12), 3,
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
  [2148] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(13), 1,
      anon_sym_LPAREN,
    ACTIONS(27), 1,
      anon_sym_DASH,
    ACTIONS(29), 1,
      anon_sym_PLUS,
    ACTIONS(35), 1,
      sym__integer_literal,
    ACTIONS(37), 1,
      sym__float_literal,
    ACTIONS(39), 1,
      anon_sym_BQUOTE,
    ACTIONS(41), 1,
      anon_sym_DQUOTE,
    ACTIONS(175), 1,
      sym_identifier,
    STATE(12), 3,
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
  [2189] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(13), 1,
      anon_sym_LPAREN,
    ACTIONS(27), 1,
      anon_sym_DASH,
    ACTIONS(29), 1,
      anon_sym_PLUS,
    ACTIONS(35), 1,
      sym__integer_literal,
    ACTIONS(37), 1,
      sym__float_literal,
    ACTIONS(39), 1,
      anon_sym_BQUOTE,
    ACTIONS(41), 1,
      anon_sym_DQUOTE,
    ACTIONS(175), 1,
      sym_identifier,
    STATE(12), 3,
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
  [2230] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(13), 1,
      anon_sym_LPAREN,
    ACTIONS(27), 1,
      anon_sym_DASH,
    ACTIONS(29), 1,
      anon_sym_PLUS,
    ACTIONS(35), 1,
      sym__integer_literal,
    ACTIONS(37), 1,
      sym__float_literal,
    ACTIONS(39), 1,
      anon_sym_BQUOTE,
    ACTIONS(41), 1,
      anon_sym_DQUOTE,
    ACTIONS(175), 1,
      sym_identifier,
    STATE(12), 3,
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
  [2271] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(13), 1,
      anon_sym_LPAREN,
    ACTIONS(27), 1,
      anon_sym_DASH,
    ACTIONS(29), 1,
      anon_sym_PLUS,
    ACTIONS(35), 1,
      sym__integer_literal,
    ACTIONS(37), 1,
      sym__float_literal,
    ACTIONS(39), 1,
      anon_sym_BQUOTE,
    ACTIONS(41), 1,
      anon_sym_DQUOTE,
    ACTIONS(175), 1,
      sym_identifier,
    STATE(12), 3,
      sym__numeric_literal,
      sym__vector_literal,
      sym__string_literal,
    STATE(29), 6,
      sym__expression,
      sym_unary_expression,
      sym_binary_expression,
      sym_funcall_expression,
      sym_parenthesized_expression,
      sym_literal,
  [2312] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(121), 1,
      anon_sym_STAR,
    ACTIONS(123), 1,
      anon_sym_SLASH,
    ACTIONS(125), 1,
      anon_sym_PIPE,
    ACTIONS(127), 1,
      anon_sym_AMP,
    ACTIONS(133), 1,
      anon_sym_BANG,
    ACTIONS(135), 1,
      anon_sym_AMP_AMP,
    ACTIONS(165), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(181), 1,
      anon_sym_RPAREN,
    ACTIONS(119), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(131), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(129), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
  [2354] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(121), 1,
      anon_sym_STAR,
    ACTIONS(123), 1,
      anon_sym_SLASH,
    ACTIONS(125), 1,
      anon_sym_PIPE,
    ACTIONS(127), 1,
      anon_sym_AMP,
    ACTIONS(133), 1,
      anon_sym_BANG,
    ACTIONS(135), 1,
      anon_sym_AMP_AMP,
    ACTIONS(165), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(183), 1,
      anon_sym_RPAREN,
    ACTIONS(119), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(131), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(129), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
  [2396] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(7), 1,
      anon_sym_DOT,
    ACTIONS(185), 1,
      ts_builtin_sym_end,
    STATE(113), 1,
      sym_simple_type,
    ACTIONS(9), 6,
      anon_sym_void,
      anon_sym_entity,
      anon_sym_float,
      anon_sym_vector,
      anon_sym_string,
      anon_sym_int,
    STATE(56), 7,
      sym__definition,
      sym_function_declaration,
      sym_function_definition,
      sym_constant_definition,
      sym_variable_definition,
      sym_field_definition,
      aux_sym_source_file_repeat1,
  [2426] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(187), 1,
      ts_builtin_sym_end,
    ACTIONS(189), 1,
      anon_sym_DOT,
    STATE(113), 1,
      sym_simple_type,
    ACTIONS(192), 6,
      anon_sym_void,
      anon_sym_entity,
      anon_sym_float,
      anon_sym_vector,
      anon_sym_string,
      anon_sym_int,
    STATE(56), 7,
      sym__definition,
      sym_function_declaration,
      sym_function_definition,
      sym_constant_definition,
      sym_variable_definition,
      sym_field_definition,
      aux_sym_source_file_repeat1,
  [2456] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(121), 1,
      anon_sym_STAR,
    ACTIONS(123), 1,
      anon_sym_SLASH,
    ACTIONS(125), 1,
      anon_sym_PIPE,
    ACTIONS(127), 1,
      anon_sym_AMP,
    ACTIONS(133), 1,
      anon_sym_BANG,
    ACTIONS(135), 1,
      anon_sym_AMP_AMP,
    ACTIONS(165), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(195), 1,
      anon_sym_RPAREN,
    ACTIONS(119), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(131), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(129), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
  [2498] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(121), 1,
      anon_sym_STAR,
    ACTIONS(123), 1,
      anon_sym_SLASH,
    ACTIONS(125), 1,
      anon_sym_PIPE,
    ACTIONS(127), 1,
      anon_sym_AMP,
    ACTIONS(133), 1,
      anon_sym_BANG,
    ACTIONS(135), 1,
      anon_sym_AMP_AMP,
    ACTIONS(165), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(197), 1,
      anon_sym_RPAREN,
    ACTIONS(119), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(131), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(129), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
  [2540] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(199), 1,
      anon_sym_RPAREN,
    STATE(117), 1,
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
  [2561] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(201), 8,
      ts_builtin_sym_end,
      anon_sym_DOT,
      anon_sym_void,
      anon_sym_entity,
      anon_sym_float,
      anon_sym_vector,
      anon_sym_string,
      anon_sym_int,
  [2575] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(35), 1,
      sym__integer_literal,
    ACTIONS(37), 1,
      sym__float_literal,
    ACTIONS(39), 1,
      anon_sym_BQUOTE,
    ACTIONS(41), 1,
      anon_sym_DQUOTE,
    STATE(96), 1,
      sym_literal,
    STATE(12), 3,
      sym__numeric_literal,
      sym__vector_literal,
      sym__string_literal,
  [2599] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(35), 1,
      sym__integer_literal,
    ACTIONS(37), 1,
      sym__float_literal,
    ACTIONS(39), 1,
      anon_sym_BQUOTE,
    ACTIONS(41), 1,
      anon_sym_DQUOTE,
    STATE(99), 1,
      sym_literal,
    STATE(12), 3,
      sym__numeric_literal,
      sym__vector_literal,
      sym__string_literal,
  [2623] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(203), 8,
      ts_builtin_sym_end,
      anon_sym_DOT,
      anon_sym_void,
      anon_sym_entity,
      anon_sym_float,
      anon_sym_vector,
      anon_sym_string,
      anon_sym_int,
  [2637] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(35), 1,
      sym__integer_literal,
    ACTIONS(37), 1,
      sym__float_literal,
    ACTIONS(39), 1,
      anon_sym_BQUOTE,
    ACTIONS(41), 1,
      anon_sym_DQUOTE,
    STATE(101), 1,
      sym_literal,
    STATE(12), 3,
      sym__numeric_literal,
      sym__vector_literal,
      sym__string_literal,
  [2661] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(35), 1,
      sym__integer_literal,
    ACTIONS(37), 1,
      sym__float_literal,
    ACTIONS(39), 1,
      anon_sym_BQUOTE,
    ACTIONS(41), 1,
      anon_sym_DQUOTE,
    STATE(147), 1,
      sym_literal,
    STATE(12), 3,
      sym__numeric_literal,
      sym__vector_literal,
      sym__string_literal,
  [2685] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(205), 8,
      ts_builtin_sym_end,
      anon_sym_DOT,
      anon_sym_void,
      anon_sym_entity,
      anon_sym_float,
      anon_sym_vector,
      anon_sym_string,
      anon_sym_int,
  [2699] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(207), 8,
      ts_builtin_sym_end,
      anon_sym_DOT,
      anon_sym_void,
      anon_sym_entity,
      anon_sym_float,
      anon_sym_vector,
      anon_sym_string,
      anon_sym_int,
  [2713] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(209), 8,
      ts_builtin_sym_end,
      anon_sym_DOT,
      anon_sym_void,
      anon_sym_entity,
      anon_sym_float,
      anon_sym_vector,
      anon_sym_string,
      anon_sym_int,
  [2727] = 4,
    ACTIONS(3), 1,
      sym_comment,
    STATE(130), 1,
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
  [2745] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(35), 1,
      sym__integer_literal,
    ACTIONS(37), 1,
      sym__float_literal,
    ACTIONS(39), 1,
      anon_sym_BQUOTE,
    ACTIONS(41), 1,
      anon_sym_DQUOTE,
    STATE(90), 1,
      sym_literal,
    STATE(12), 3,
      sym__numeric_literal,
      sym__vector_literal,
      sym__string_literal,
  [2769] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(35), 1,
      sym__integer_literal,
    ACTIONS(37), 1,
      sym__float_literal,
    ACTIONS(39), 1,
      anon_sym_BQUOTE,
    ACTIONS(41), 1,
      anon_sym_DQUOTE,
    STATE(95), 1,
      sym_literal,
    STATE(12), 3,
      sym__numeric_literal,
      sym__vector_literal,
      sym__string_literal,
  [2793] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(211), 8,
      ts_builtin_sym_end,
      anon_sym_DOT,
      anon_sym_void,
      anon_sym_entity,
      anon_sym_float,
      anon_sym_vector,
      anon_sym_string,
      anon_sym_int,
  [2807] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(213), 8,
      ts_builtin_sym_end,
      anon_sym_DOT,
      anon_sym_void,
      anon_sym_entity,
      anon_sym_float,
      anon_sym_vector,
      anon_sym_string,
      anon_sym_int,
  [2821] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(215), 8,
      ts_builtin_sym_end,
      anon_sym_DOT,
      anon_sym_void,
      anon_sym_entity,
      anon_sym_float,
      anon_sym_vector,
      anon_sym_string,
      anon_sym_int,
  [2835] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(35), 1,
      sym__integer_literal,
    ACTIONS(37), 1,
      sym__float_literal,
    ACTIONS(39), 1,
      anon_sym_BQUOTE,
    ACTIONS(41), 1,
      anon_sym_DQUOTE,
    STATE(94), 1,
      sym_literal,
    STATE(12), 3,
      sym__numeric_literal,
      sym__vector_literal,
      sym__string_literal,
  [2859] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(35), 1,
      sym__integer_literal,
    ACTIONS(37), 1,
      sym__float_literal,
    ACTIONS(39), 1,
      anon_sym_BQUOTE,
    ACTIONS(41), 1,
      anon_sym_DQUOTE,
    STATE(103), 1,
      sym_literal,
    STATE(12), 3,
      sym__numeric_literal,
      sym__vector_literal,
      sym__string_literal,
  [2883] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(217), 8,
      ts_builtin_sym_end,
      anon_sym_DOT,
      anon_sym_void,
      anon_sym_entity,
      anon_sym_float,
      anon_sym_vector,
      anon_sym_string,
      anon_sym_int,
  [2897] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(219), 8,
      ts_builtin_sym_end,
      anon_sym_DOT,
      anon_sym_void,
      anon_sym_entity,
      anon_sym_float,
      anon_sym_vector,
      anon_sym_string,
      anon_sym_int,
  [2911] = 3,
    ACTIONS(3), 1,
      sym_comment,
    STATE(158), 1,
      sym_simple_type,
    ACTIONS(9), 6,
      anon_sym_void,
      anon_sym_entity,
      anon_sym_float,
      anon_sym_vector,
      anon_sym_string,
      anon_sym_int,
  [2926] = 3,
    ACTIONS(3), 1,
      sym_comment,
    STATE(150), 1,
      sym_simple_type,
    ACTIONS(9), 6,
      anon_sym_void,
      anon_sym_entity,
      anon_sym_float,
      anon_sym_vector,
      anon_sym_string,
      anon_sym_int,
  [2941] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(223), 1,
      anon_sym_EQ,
    ACTIONS(225), 1,
      anon_sym_COMMA,
    STATE(88), 1,
      aux_sym_variable_definition_statement_repeat1,
    ACTIONS(221), 3,
      anon_sym_SEMI,
      anon_sym_else,
      anon_sym_while,
  [2959] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(225), 1,
      anon_sym_COMMA,
    ACTIONS(229), 1,
      anon_sym_EQ,
    STATE(92), 1,
      aux_sym_variable_definition_statement_repeat1,
    ACTIONS(227), 3,
      anon_sym_SEMI,
      anon_sym_else,
      anon_sym_while,
  [2977] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(225), 1,
      anon_sym_COMMA,
    ACTIONS(233), 1,
      anon_sym_EQ,
    STATE(91), 1,
      aux_sym_variable_definition_statement_repeat1,
    ACTIONS(231), 3,
      anon_sym_SEMI,
      anon_sym_else,
      anon_sym_while,
  [2995] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(225), 1,
      anon_sym_COMMA,
    ACTIONS(237), 1,
      anon_sym_EQ,
    STATE(97), 1,
      aux_sym_variable_definition_statement_repeat1,
    ACTIONS(235), 3,
      anon_sym_SEMI,
      anon_sym_else,
      anon_sym_while,
  [3013] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(241), 1,
      anon_sym_COMMA,
    STATE(85), 1,
      aux_sym_variable_definition_statement_repeat1,
    ACTIONS(239), 3,
      anon_sym_SEMI,
      anon_sym_else,
      anon_sym_while,
  [3028] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(225), 1,
      anon_sym_COMMA,
    STATE(85), 1,
      aux_sym_variable_definition_statement_repeat1,
    ACTIONS(244), 3,
      anon_sym_SEMI,
      anon_sym_else,
      anon_sym_while,
  [3043] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(248), 1,
      anon_sym_EQ,
    ACTIONS(250), 1,
      anon_sym_COMMA,
    ACTIONS(246), 3,
      anon_sym_SEMI,
      anon_sym_else,
      anon_sym_while,
  [3058] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(225), 1,
      anon_sym_COMMA,
    STATE(85), 1,
      aux_sym_variable_definition_statement_repeat1,
    ACTIONS(227), 3,
      anon_sym_SEMI,
      anon_sym_else,
      anon_sym_while,
  [3073] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(252), 1,
      anon_sym_EQ,
    ACTIONS(239), 4,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_else,
      anon_sym_while,
  [3086] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(225), 1,
      anon_sym_COMMA,
    STATE(91), 1,
      aux_sym_variable_definition_statement_repeat1,
    ACTIONS(231), 3,
      anon_sym_SEMI,
      anon_sym_else,
      anon_sym_while,
  [3101] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(225), 1,
      anon_sym_COMMA,
    STATE(85), 1,
      aux_sym_variable_definition_statement_repeat1,
    ACTIONS(235), 3,
      anon_sym_SEMI,
      anon_sym_else,
      anon_sym_while,
  [3116] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(225), 1,
      anon_sym_COMMA,
    STATE(85), 1,
      aux_sym_variable_definition_statement_repeat1,
    ACTIONS(231), 3,
      anon_sym_SEMI,
      anon_sym_else,
      anon_sym_while,
  [3131] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(225), 1,
      anon_sym_COMMA,
    STATE(85), 1,
      aux_sym_variable_definition_statement_repeat1,
    ACTIONS(254), 3,
      anon_sym_SEMI,
      anon_sym_else,
      anon_sym_while,
  [3146] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(225), 1,
      anon_sym_COMMA,
    STATE(86), 1,
      aux_sym_variable_definition_statement_repeat1,
    ACTIONS(254), 3,
      anon_sym_SEMI,
      anon_sym_else,
      anon_sym_while,
  [3161] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(225), 1,
      anon_sym_COMMA,
    STATE(97), 1,
      aux_sym_variable_definition_statement_repeat1,
    ACTIONS(235), 3,
      anon_sym_SEMI,
      anon_sym_else,
      anon_sym_while,
  [3176] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(225), 1,
      anon_sym_COMMA,
    STATE(93), 1,
      aux_sym_variable_definition_statement_repeat1,
    ACTIONS(256), 3,
      anon_sym_SEMI,
      anon_sym_else,
      anon_sym_while,
  [3191] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(225), 1,
      anon_sym_COMMA,
    STATE(85), 1,
      aux_sym_variable_definition_statement_repeat1,
    ACTIONS(256), 3,
      anon_sym_SEMI,
      anon_sym_else,
      anon_sym_while,
  [3206] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(260), 1,
      anon_sym_EQ,
    ACTIONS(262), 1,
      anon_sym_COMMA,
    ACTIONS(258), 3,
      anon_sym_SEMI,
      anon_sym_else,
      anon_sym_while,
  [3221] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(264), 1,
      anon_sym_COMMA,
    ACTIONS(227), 3,
      anon_sym_SEMI,
      anon_sym_else,
      anon_sym_while,
  [3233] = 4,
    ACTIONS(268), 1,
      aux_sym__string_literal_token3,
    ACTIONS(270), 1,
      sym_comment,
    STATE(102), 1,
      aux_sym__string_literal_repeat1,
    ACTIONS(266), 2,
      aux_sym__string_literal_token1,
      aux_sym__string_literal_token2,
  [3247] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(272), 1,
      anon_sym_COMMA,
    ACTIONS(221), 3,
      anon_sym_SEMI,
      anon_sym_else,
      anon_sym_while,
  [3259] = 4,
    ACTIONS(270), 1,
      sym_comment,
    ACTIONS(277), 1,
      aux_sym__string_literal_token3,
    STATE(102), 1,
      aux_sym__string_literal_repeat1,
    ACTIONS(274), 2,
      aux_sym__string_literal_token1,
      aux_sym__string_literal_token2,
  [3273] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(279), 4,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_else,
      anon_sym_while,
  [3283] = 4,
    ACTIONS(270), 1,
      sym_comment,
    ACTIONS(283), 1,
      aux_sym__string_literal_token3,
    STATE(100), 1,
      aux_sym__string_literal_repeat1,
    ACTIONS(281), 2,
      aux_sym__string_literal_token1,
      aux_sym__string_literal_token2,
  [3297] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(285), 3,
      anon_sym_SEMI,
      anon_sym_else,
      anon_sym_while,
  [3306] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(287), 1,
      sym__integer_literal,
    ACTIONS(289), 1,
      sym__float_literal,
    STATE(121), 1,
      sym__numeric_literal,
  [3319] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(291), 1,
      anon_sym_COMMA,
    ACTIONS(293), 1,
      anon_sym_RPAREN,
    STATE(120), 1,
      aux_sym_parameter_list_repeat1,
  [3332] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(295), 3,
      anon_sym_SEMI,
      anon_sym_else,
      anon_sym_while,
  [3341] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(297), 1,
      anon_sym_SEMI,
    ACTIONS(299), 1,
      anon_sym_COMMA,
    STATE(112), 1,
      aux_sym_variable_definition_repeat1,
  [3354] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(179), 1,
      anon_sym_RPAREN,
    ACTIONS(301), 1,
      anon_sym_COMMA,
    STATE(110), 1,
      aux_sym_funcall_expression_repeat1,
  [3367] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(299), 1,
      anon_sym_COMMA,
    ACTIONS(304), 1,
      anon_sym_SEMI,
    STATE(109), 1,
      aux_sym_variable_definition_repeat1,
  [3380] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(306), 1,
      anon_sym_SEMI,
    ACTIONS(308), 1,
      anon_sym_COMMA,
    STATE(112), 1,
      aux_sym_variable_definition_repeat1,
  [3393] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(311), 1,
      anon_sym_LPAREN,
    ACTIONS(313), 1,
      sym_identifier,
    STATE(135), 1,
      sym_parameter_list,
  [3406] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(315), 3,
      anon_sym_SEMI,
      anon_sym_else,
      anon_sym_while,
  [3415] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(299), 1,
      anon_sym_COMMA,
    ACTIONS(317), 1,
      anon_sym_SEMI,
    STATE(116), 1,
      aux_sym_variable_definition_repeat1,
  [3428] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(299), 1,
      anon_sym_COMMA,
    ACTIONS(319), 1,
      anon_sym_SEMI,
    STATE(112), 1,
      aux_sym_variable_definition_repeat1,
  [3441] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(291), 1,
      anon_sym_COMMA,
    ACTIONS(321), 1,
      anon_sym_RPAREN,
    STATE(107), 1,
      aux_sym_parameter_list_repeat1,
  [3454] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(323), 1,
      sym__integer_literal,
    ACTIONS(325), 1,
      sym__float_literal,
    STATE(152), 1,
      sym__numeric_literal,
  [3467] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(169), 1,
      anon_sym_COMMA,
    ACTIONS(327), 1,
      anon_sym_RPAREN,
    STATE(110), 1,
      aux_sym_funcall_expression_repeat1,
  [3480] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(329), 1,
      anon_sym_COMMA,
    ACTIONS(332), 1,
      anon_sym_RPAREN,
    STATE(120), 1,
      aux_sym_parameter_list_repeat1,
  [3493] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(334), 1,
      sym__integer_literal,
    ACTIONS(336), 1,
      sym__float_literal,
    STATE(118), 1,
      sym__numeric_literal,
  [3506] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(338), 1,
      anon_sym_SEMI,
    ACTIONS(340), 1,
      anon_sym_EQ,
    ACTIONS(342), 1,
      anon_sym_COMMA,
  [3519] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(346), 1,
      anon_sym_else,
    ACTIONS(344), 2,
      anon_sym_SEMI,
      anon_sym_while,
  [3530] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(348), 3,
      anon_sym_SEMI,
      anon_sym_else,
      anon_sym_while,
  [3539] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(350), 3,
      anon_sym_SEMI,
      anon_sym_else,
      anon_sym_while,
  [3548] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(352), 1,
      anon_sym_SEMI,
    ACTIONS(354), 1,
      anon_sym_EQ,
  [3558] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(356), 2,
      anon_sym_LPAREN,
      sym_identifier,
  [3566] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(306), 2,
      anon_sym_SEMI,
      anon_sym_COMMA,
  [3574] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(358), 1,
      anon_sym_DOLLAR,
    STATE(163), 1,
      sym_frame_identifier,
  [3584] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(332), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [3592] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(360), 1,
      anon_sym_SEMI,
    ACTIONS(362), 1,
      anon_sym_COMMA,
  [3602] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(364), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [3610] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(366), 1,
      sym_identifier,
  [3617] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(368), 1,
      anon_sym_COMMA,
  [3624] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(370), 1,
      sym_identifier,
  [3631] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(372), 1,
      sym_identifier,
  [3638] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(374), 1,
      anon_sym_DQUOTE,
  [3645] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(376), 1,
      ts_builtin_sym_end,
  [3652] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(378), 1,
      sym_identifier,
  [3659] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(380), 1,
      sym_identifier,
  [3666] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(382), 1,
      sym_identifier,
  [3673] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(384), 1,
      sym_identifier,
  [3680] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(386), 1,
      sym_identifier,
  [3687] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(388), 1,
      anon_sym_SEMI,
  [3694] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(390), 1,
      sym_identifier,
  [3701] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(392), 1,
      anon_sym_LPAREN,
  [3708] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(394), 1,
      anon_sym_SEMI,
  [3715] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(396), 1,
      sym_identifier,
  [3722] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(398), 1,
      sym_identifier,
  [3729] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(400), 1,
      sym_identifier,
  [3736] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(402), 1,
      sym_identifier,
  [3743] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(404), 1,
      anon_sym_BQUOTE,
  [3750] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(406), 1,
      anon_sym_DQUOTE,
  [3757] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(408), 1,
      sym_identifier,
  [3764] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(410), 1,
      sym_identifier,
  [3771] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(412), 1,
      anon_sym_LPAREN,
  [3778] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(414), 1,
      anon_sym_LPAREN,
  [3785] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(416), 1,
      sym_identifier,
  [3792] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(418), 1,
      anon_sym_SEMI,
  [3799] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(420), 1,
      anon_sym_while,
  [3806] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(422), 1,
      sym_identifier,
  [3813] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(424), 1,
      anon_sym_SEMI,
  [3820] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(426), 1,
      anon_sym_COMMA,
  [3827] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(428), 1,
      aux_sym_frame_identifier_token1,
  [3834] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(430), 1,
      anon_sym_RBRACK,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 88,
  [SMALL_STATE(4)] = 173,
  [SMALL_STATE(5)] = 255,
  [SMALL_STATE(6)] = 337,
  [SMALL_STATE(7)] = 419,
  [SMALL_STATE(8)] = 501,
  [SMALL_STATE(9)] = 584,
  [SMALL_STATE(10)] = 667,
  [SMALL_STATE(11)] = 750,
  [SMALL_STATE(12)] = 781,
  [SMALL_STATE(13)] = 809,
  [SMALL_STATE(14)] = 837,
  [SMALL_STATE(15)] = 865,
  [SMALL_STATE(16)] = 897,
  [SMALL_STATE(17)] = 925,
  [SMALL_STATE(18)] = 963,
  [SMALL_STATE(19)] = 995,
  [SMALL_STATE(20)] = 1029,
  [SMALL_STATE(21)] = 1071,
  [SMALL_STATE(22)] = 1113,
  [SMALL_STATE(23)] = 1157,
  [SMALL_STATE(24)] = 1185,
  [SMALL_STATE(25)] = 1221,
  [SMALL_STATE(26)] = 1249,
  [SMALL_STATE(27)] = 1277,
  [SMALL_STATE(28)] = 1305,
  [SMALL_STATE(29)] = 1333,
  [SMALL_STATE(30)] = 1361,
  [SMALL_STATE(31)] = 1389,
  [SMALL_STATE(32)] = 1433,
  [SMALL_STATE(33)] = 1477,
  [SMALL_STATE(34)] = 1525,
  [SMALL_STATE(35)] = 1569,
  [SMALL_STATE(36)] = 1613,
  [SMALL_STATE(37)] = 1654,
  [SMALL_STATE(38)] = 1695,
  [SMALL_STATE(39)] = 1736,
  [SMALL_STATE(40)] = 1777,
  [SMALL_STATE(41)] = 1818,
  [SMALL_STATE(42)] = 1859,
  [SMALL_STATE(43)] = 1900,
  [SMALL_STATE(44)] = 1941,
  [SMALL_STATE(45)] = 1982,
  [SMALL_STATE(46)] = 2023,
  [SMALL_STATE(47)] = 2066,
  [SMALL_STATE(48)] = 2107,
  [SMALL_STATE(49)] = 2148,
  [SMALL_STATE(50)] = 2189,
  [SMALL_STATE(51)] = 2230,
  [SMALL_STATE(52)] = 2271,
  [SMALL_STATE(53)] = 2312,
  [SMALL_STATE(54)] = 2354,
  [SMALL_STATE(55)] = 2396,
  [SMALL_STATE(56)] = 2426,
  [SMALL_STATE(57)] = 2456,
  [SMALL_STATE(58)] = 2498,
  [SMALL_STATE(59)] = 2540,
  [SMALL_STATE(60)] = 2561,
  [SMALL_STATE(61)] = 2575,
  [SMALL_STATE(62)] = 2599,
  [SMALL_STATE(63)] = 2623,
  [SMALL_STATE(64)] = 2637,
  [SMALL_STATE(65)] = 2661,
  [SMALL_STATE(66)] = 2685,
  [SMALL_STATE(67)] = 2699,
  [SMALL_STATE(68)] = 2713,
  [SMALL_STATE(69)] = 2727,
  [SMALL_STATE(70)] = 2745,
  [SMALL_STATE(71)] = 2769,
  [SMALL_STATE(72)] = 2793,
  [SMALL_STATE(73)] = 2807,
  [SMALL_STATE(74)] = 2821,
  [SMALL_STATE(75)] = 2835,
  [SMALL_STATE(76)] = 2859,
  [SMALL_STATE(77)] = 2883,
  [SMALL_STATE(78)] = 2897,
  [SMALL_STATE(79)] = 2911,
  [SMALL_STATE(80)] = 2926,
  [SMALL_STATE(81)] = 2941,
  [SMALL_STATE(82)] = 2959,
  [SMALL_STATE(83)] = 2977,
  [SMALL_STATE(84)] = 2995,
  [SMALL_STATE(85)] = 3013,
  [SMALL_STATE(86)] = 3028,
  [SMALL_STATE(87)] = 3043,
  [SMALL_STATE(88)] = 3058,
  [SMALL_STATE(89)] = 3073,
  [SMALL_STATE(90)] = 3086,
  [SMALL_STATE(91)] = 3101,
  [SMALL_STATE(92)] = 3116,
  [SMALL_STATE(93)] = 3131,
  [SMALL_STATE(94)] = 3146,
  [SMALL_STATE(95)] = 3161,
  [SMALL_STATE(96)] = 3176,
  [SMALL_STATE(97)] = 3191,
  [SMALL_STATE(98)] = 3206,
  [SMALL_STATE(99)] = 3221,
  [SMALL_STATE(100)] = 3233,
  [SMALL_STATE(101)] = 3247,
  [SMALL_STATE(102)] = 3259,
  [SMALL_STATE(103)] = 3273,
  [SMALL_STATE(104)] = 3283,
  [SMALL_STATE(105)] = 3297,
  [SMALL_STATE(106)] = 3306,
  [SMALL_STATE(107)] = 3319,
  [SMALL_STATE(108)] = 3332,
  [SMALL_STATE(109)] = 3341,
  [SMALL_STATE(110)] = 3354,
  [SMALL_STATE(111)] = 3367,
  [SMALL_STATE(112)] = 3380,
  [SMALL_STATE(113)] = 3393,
  [SMALL_STATE(114)] = 3406,
  [SMALL_STATE(115)] = 3415,
  [SMALL_STATE(116)] = 3428,
  [SMALL_STATE(117)] = 3441,
  [SMALL_STATE(118)] = 3454,
  [SMALL_STATE(119)] = 3467,
  [SMALL_STATE(120)] = 3480,
  [SMALL_STATE(121)] = 3493,
  [SMALL_STATE(122)] = 3506,
  [SMALL_STATE(123)] = 3519,
  [SMALL_STATE(124)] = 3530,
  [SMALL_STATE(125)] = 3539,
  [SMALL_STATE(126)] = 3548,
  [SMALL_STATE(127)] = 3558,
  [SMALL_STATE(128)] = 3566,
  [SMALL_STATE(129)] = 3574,
  [SMALL_STATE(130)] = 3584,
  [SMALL_STATE(131)] = 3592,
  [SMALL_STATE(132)] = 3602,
  [SMALL_STATE(133)] = 3610,
  [SMALL_STATE(134)] = 3617,
  [SMALL_STATE(135)] = 3624,
  [SMALL_STATE(136)] = 3631,
  [SMALL_STATE(137)] = 3638,
  [SMALL_STATE(138)] = 3645,
  [SMALL_STATE(139)] = 3652,
  [SMALL_STATE(140)] = 3659,
  [SMALL_STATE(141)] = 3666,
  [SMALL_STATE(142)] = 3673,
  [SMALL_STATE(143)] = 3680,
  [SMALL_STATE(144)] = 3687,
  [SMALL_STATE(145)] = 3694,
  [SMALL_STATE(146)] = 3701,
  [SMALL_STATE(147)] = 3708,
  [SMALL_STATE(148)] = 3715,
  [SMALL_STATE(149)] = 3722,
  [SMALL_STATE(150)] = 3729,
  [SMALL_STATE(151)] = 3736,
  [SMALL_STATE(152)] = 3743,
  [SMALL_STATE(153)] = 3750,
  [SMALL_STATE(154)] = 3757,
  [SMALL_STATE(155)] = 3764,
  [SMALL_STATE(156)] = 3771,
  [SMALL_STATE(157)] = 3778,
  [SMALL_STATE(158)] = 3785,
  [SMALL_STATE(159)] = 3792,
  [SMALL_STATE(160)] = 3799,
  [SMALL_STATE(161)] = 3806,
  [SMALL_STATE(162)] = 3813,
  [SMALL_STATE(163)] = 3820,
  [SMALL_STATE(164)] = 3827,
  [SMALL_STATE(165)] = 3834,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT_EXTRA(),
  [5] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(80),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(127),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(129),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [17] = {.entry = {.count = 1, .reusable = false}}, SHIFT(156),
  [19] = {.entry = {.count = 1, .reusable = false}}, SHIFT(157),
  [21] = {.entry = {.count = 1, .reusable = false}}, SHIFT(5),
  [23] = {.entry = {.count = 1, .reusable = false}}, SHIFT(50),
  [25] = {.entry = {.count = 1, .reusable = false}}, SHIFT(79),
  [27] = {.entry = {.count = 1, .reusable = false}}, SHIFT(52),
  [29] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [31] = {.entry = {.count = 1, .reusable = false}}, SHIFT(127),
  [33] = {.entry = {.count = 1, .reusable = false}}, SHIFT(15),
  [35] = {.entry = {.count = 1, .reusable = false}}, SHIFT(12),
  [37] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [39] = {.entry = {.count = 1, .reusable = true}}, SHIFT(106),
  [41] = {.entry = {.count = 1, .reusable = true}}, SHIFT(104),
  [43] = {.entry = {.count = 1, .reusable = true}}, SHIFT(159),
  [45] = {.entry = {.count = 1, .reusable = true}}, SHIFT(144),
  [47] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__compound_statement_repeat1, 2), SHIFT_REPEAT(45),
  [50] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__compound_statement_repeat1, 2),
  [52] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__compound_statement_repeat1, 2), SHIFT_REPEAT(156),
  [55] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__compound_statement_repeat1, 2), SHIFT_REPEAT(157),
  [58] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__compound_statement_repeat1, 2), SHIFT_REPEAT(5),
  [61] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__compound_statement_repeat1, 2), SHIFT_REPEAT(50),
  [64] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__compound_statement_repeat1, 2), SHIFT_REPEAT(79),
  [67] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__compound_statement_repeat1, 2), SHIFT_REPEAT(52),
  [70] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__compound_statement_repeat1, 2), SHIFT_REPEAT(52),
  [73] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__compound_statement_repeat1, 2), SHIFT_REPEAT(127),
  [76] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__compound_statement_repeat1, 2), SHIFT_REPEAT(15),
  [79] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__compound_statement_repeat1, 2), SHIFT_REPEAT(12),
  [82] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__compound_statement_repeat1, 2), SHIFT_REPEAT(12),
  [85] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__compound_statement_repeat1, 2), SHIFT_REPEAT(106),
  [88] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__compound_statement_repeat1, 2), SHIFT_REPEAT(104),
  [91] = {.entry = {.count = 1, .reusable = true}}, SHIFT(114),
  [93] = {.entry = {.count = 1, .reusable = true}}, SHIFT(108),
  [95] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__expression, 1),
  [97] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [99] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__expression, 1),
  [101] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_literal, 1),
  [103] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_literal, 1),
  [105] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_binary_expression, 3),
  [107] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_binary_expression, 3),
  [109] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_funcall_expression, 4),
  [111] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_funcall_expression, 4),
  [113] = {.entry = {.count = 1, .reusable = false}}, SHIFT(37),
  [115] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__vector_literal, 5),
  [117] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__vector_literal, 5),
  [119] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [121] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [123] = {.entry = {.count = 1, .reusable = false}}, SHIFT(42),
  [125] = {.entry = {.count = 1, .reusable = false}}, SHIFT(47),
  [127] = {.entry = {.count = 1, .reusable = false}}, SHIFT(44),
  [129] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [131] = {.entry = {.count = 1, .reusable = false}}, SHIFT(36),
  [133] = {.entry = {.count = 1, .reusable = false}}, SHIFT(38),
  [135] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [137] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__string_literal, 4),
  [139] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__string_literal, 4),
  [141] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parenthesized_expression, 3),
  [143] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_parenthesized_expression, 3),
  [145] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_funcall_expression, 3),
  [147] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_funcall_expression, 3),
  [149] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_funcall_expression, 5),
  [151] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_funcall_expression, 5),
  [153] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__compound_statement_repeat1, 2),
  [155] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_unary_expression, 2),
  [157] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_unary_expression, 2),
  [159] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__string_literal, 3),
  [161] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__string_literal, 3),
  [163] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_return_statement, 2),
  [165] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [167] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_assignment_statement, 3),
  [169] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [171] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [173] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [175] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [177] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__expression_statement, 1),
  [179] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_funcall_expression_repeat1, 2),
  [181] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [183] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [185] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1),
  [187] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2),
  [189] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(80),
  [192] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(127),
  [195] = {.entry = {.count = 1, .reusable = true}}, SHIFT(105),
  [197] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [199] = {.entry = {.count = 1, .reusable = true}}, SHIFT(148),
  [201] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable_definition, 5),
  [203] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable_definition, 3),
  [205] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_field_definition, 6),
  [207] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable_definition, 6),
  [209] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_field_definition, 4),
  [211] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_declaration, 4),
  [213] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_field_definition, 7),
  [215] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_constant_definition, 5),
  [217] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_definition, 6),
  [219] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_definition, 11),
  [221] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable_definition_statement, 4),
  [223] = {.entry = {.count = 1, .reusable = true}}, SHIFT(70),
  [225] = {.entry = {.count = 1, .reusable = true}}, SHIFT(142),
  [227] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable_definition_statement, 5),
  [229] = {.entry = {.count = 1, .reusable = true}}, SHIFT(71),
  [231] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable_definition_statement, 6),
  [233] = {.entry = {.count = 1, .reusable = true}}, SHIFT(61),
  [235] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable_definition_statement, 7),
  [237] = {.entry = {.count = 1, .reusable = true}}, SHIFT(75),
  [239] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_variable_definition_statement_repeat1, 2),
  [241] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_variable_definition_statement_repeat1, 2), SHIFT_REPEAT(142),
  [244] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable_definition_statement, 10),
  [246] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable_definition_statement, 2),
  [248] = {.entry = {.count = 1, .reusable = true}}, SHIFT(64),
  [250] = {.entry = {.count = 1, .reusable = true}}, SHIFT(145),
  [252] = {.entry = {.count = 1, .reusable = true}}, SHIFT(76),
  [254] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable_definition_statement, 9),
  [256] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable_definition_statement, 8),
  [258] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable_definition_statement, 3),
  [260] = {.entry = {.count = 1, .reusable = true}}, SHIFT(62),
  [262] = {.entry = {.count = 1, .reusable = true}}, SHIFT(155),
  [264] = {.entry = {.count = 1, .reusable = true}}, SHIFT(133),
  [266] = {.entry = {.count = 1, .reusable = false}}, SHIFT(102),
  [268] = {.entry = {.count = 1, .reusable = false}}, SHIFT(137),
  [270] = {.entry = {.count = 1, .reusable = false}}, SHIFT_EXTRA(),
  [272] = {.entry = {.count = 1, .reusable = true}}, SHIFT(140),
  [274] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__string_literal_repeat1, 2), SHIFT_REPEAT(102),
  [277] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__string_literal_repeat1, 2),
  [279] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_variable_definition_statement_repeat1, 4),
  [281] = {.entry = {.count = 1, .reusable = false}}, SHIFT(100),
  [283] = {.entry = {.count = 1, .reusable = false}}, SHIFT(153),
  [285] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_do_while_statement, 6),
  [287] = {.entry = {.count = 1, .reusable = false}}, SHIFT(121),
  [289] = {.entry = {.count = 1, .reusable = true}}, SHIFT(121),
  [291] = {.entry = {.count = 1, .reusable = true}}, SHIFT(69),
  [293] = {.entry = {.count = 1, .reusable = true}}, SHIFT(151),
  [295] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__compound_statement, 2),
  [297] = {.entry = {.count = 1, .reusable = true}}, SHIFT(67),
  [299] = {.entry = {.count = 1, .reusable = true}}, SHIFT(154),
  [301] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_funcall_expression_repeat1, 2), SHIFT_REPEAT(41),
  [304] = {.entry = {.count = 1, .reusable = true}}, SHIFT(60),
  [306] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_variable_definition_repeat1, 2),
  [308] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_variable_definition_repeat1, 2), SHIFT_REPEAT(154),
  [311] = {.entry = {.count = 1, .reusable = true}}, SHIFT(59),
  [313] = {.entry = {.count = 1, .reusable = true}}, SHIFT(122),
  [315] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__compound_statement, 3),
  [317] = {.entry = {.count = 1, .reusable = true}}, SHIFT(66),
  [319] = {.entry = {.count = 1, .reusable = true}}, SHIFT(73),
  [321] = {.entry = {.count = 1, .reusable = true}}, SHIFT(143),
  [323] = {.entry = {.count = 1, .reusable = false}}, SHIFT(152),
  [325] = {.entry = {.count = 1, .reusable = true}}, SHIFT(152),
  [327] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [329] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_parameter_list_repeat1, 2), SHIFT_REPEAT(69),
  [332] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_parameter_list_repeat1, 2),
  [334] = {.entry = {.count = 1, .reusable = false}}, SHIFT(118),
  [336] = {.entry = {.count = 1, .reusable = true}}, SHIFT(118),
  [338] = {.entry = {.count = 1, .reusable = true}}, SHIFT(63),
  [340] = {.entry = {.count = 1, .reusable = true}}, SHIFT(65),
  [342] = {.entry = {.count = 1, .reusable = true}}, SHIFT(139),
  [344] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_if_statement, 5),
  [346] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [348] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_while_statement, 5),
  [350] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_if_statement, 7),
  [352] = {.entry = {.count = 1, .reusable = true}}, SHIFT(72),
  [354] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [356] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_simple_type, 1),
  [358] = {.entry = {.count = 1, .reusable = true}}, SHIFT(164),
  [360] = {.entry = {.count = 1, .reusable = true}}, SHIFT(68),
  [362] = {.entry = {.count = 1, .reusable = true}}, SHIFT(141),
  [364] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__parameter, 2),
  [366] = {.entry = {.count = 1, .reusable = true}}, SHIFT(84),
  [368] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_frame_identifier, 2),
  [370] = {.entry = {.count = 1, .reusable = true}}, SHIFT(126),
  [372] = {.entry = {.count = 1, .reusable = true}}, SHIFT(132),
  [374] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [376] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [378] = {.entry = {.count = 1, .reusable = true}}, SHIFT(111),
  [380] = {.entry = {.count = 1, .reusable = true}}, SHIFT(83),
  [382] = {.entry = {.count = 1, .reusable = true}}, SHIFT(115),
  [384] = {.entry = {.count = 1, .reusable = true}}, SHIFT(89),
  [386] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter_list, 3),
  [388] = {.entry = {.count = 1, .reusable = true}}, SHIFT(78),
  [390] = {.entry = {.count = 1, .reusable = true}}, SHIFT(81),
  [392] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [394] = {.entry = {.count = 1, .reusable = true}}, SHIFT(74),
  [396] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter_list, 2),
  [398] = {.entry = {.count = 1, .reusable = true}}, SHIFT(165),
  [400] = {.entry = {.count = 1, .reusable = true}}, SHIFT(131),
  [402] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter_list, 4),
  [404] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [406] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [408] = {.entry = {.count = 1, .reusable = true}}, SHIFT(128),
  [410] = {.entry = {.count = 1, .reusable = true}}, SHIFT(82),
  [412] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [414] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [416] = {.entry = {.count = 1, .reusable = true}}, SHIFT(98),
  [418] = {.entry = {.count = 1, .reusable = true}}, SHIFT(77),
  [420] = {.entry = {.count = 1, .reusable = true}}, SHIFT(146),
  [422] = {.entry = {.count = 1, .reusable = true}}, SHIFT(87),
  [424] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [426] = {.entry = {.count = 1, .reusable = true}}, SHIFT(149),
  [428] = {.entry = {.count = 1, .reusable = true}}, SHIFT(134),
  [430] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
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
