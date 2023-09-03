#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 174
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 89
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
  anon_sym_LPAREN = 7,
  anon_sym_DOT_DOT_DOT = 8,
  anon_sym_RPAREN = 9,
  anon_sym_LBRACE = 10,
  anon_sym_RBRACE = 11,
  anon_sym_if = 12,
  anon_sym_else = 13,
  anon_sym_while = 14,
  anon_sym_do = 15,
  anon_sym_return = 16,
  anon_sym_local = 17,
  anon_sym_DASH = 18,
  anon_sym_PLUS = 19,
  anon_sym_STAR = 20,
  anon_sym_SLASH = 21,
  anon_sym_PIPE_PIPE = 22,
  anon_sym_AMP_AMP = 23,
  anon_sym_BANG = 24,
  anon_sym_PIPE = 25,
  anon_sym_AMP = 26,
  anon_sym_EQ_EQ = 27,
  anon_sym_BANG_EQ = 28,
  anon_sym_GT = 29,
  anon_sym_GT_EQ = 30,
  anon_sym_LT_EQ = 31,
  anon_sym_LT = 32,
  anon_sym_void = 33,
  anon_sym_entity = 34,
  anon_sym_float = 35,
  anon_sym_vector = 36,
  anon_sym_string = 37,
  anon_sym_int = 38,
  sym_identifier = 39,
  anon_sym_DOLLAR = 40,
  aux_sym_frame_identifier_token1 = 41,
  sym__integer_literal = 42,
  sym__float_literal = 43,
  anon_sym_BQUOTE = 44,
  anon_sym_DQUOTE = 45,
  aux_sym__string_literal_token1 = 46,
  aux_sym__string_literal_token2 = 47,
  aux_sym__string_literal_token3 = 48,
  aux_sym__builtin_literal_token1 = 49,
  sym_comment = 50,
  sym_source_file = 51,
  sym__definition = 52,
  sym_function_declaration = 53,
  sym_function_definition = 54,
  sym_constant_definition = 55,
  sym_variable_definition = 56,
  sym_field_definition = 57,
  sym_parameter_list = 58,
  sym__parameter = 59,
  sym__statement = 60,
  sym__compound_statement = 61,
  sym__simple_statement = 62,
  sym_assignment_statement = 63,
  sym_if_statement = 64,
  sym_while_statement = 65,
  sym_do_while_statement = 66,
  sym_return_statement = 67,
  sym_variable_definition_statement = 68,
  sym__expression_statement = 69,
  sym__expression = 70,
  sym_unary_expression = 71,
  sym_binary_expression = 72,
  sym_funcall_expression = 73,
  sym_parenthesized_expression = 74,
  sym_simple_type = 75,
  sym_frame_identifier = 76,
  sym_literal = 77,
  sym__numeric_literal = 78,
  sym__vector_literal = 79,
  sym__string_literal = 80,
  sym__builtin_literal = 81,
  aux_sym_source_file_repeat1 = 82,
  aux_sym_variable_definition_repeat1 = 83,
  aux_sym_parameter_list_repeat1 = 84,
  aux_sym__compound_statement_repeat1 = 85,
  aux_sym_variable_definition_statement_repeat1 = 86,
  aux_sym_funcall_expression_repeat1 = 87,
  aux_sym__string_literal_repeat1 = 88,
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
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(70);
      if (lookahead == '!') ADVANCE(101);
      if (lookahead == '"') ADVANCE(165);
      if (lookahead == '#') ADVANCE(64);
      if (lookahead == '$') ADVANCE(160);
      if (lookahead == '&') ADVANCE(103);
      if (lookahead == '(') ADVANCE(78);
      if (lookahead == ')') ADVANCE(80);
      if (lookahead == '*') ADVANCE(97);
      if (lookahead == '+') ADVANCE(96);
      if (lookahead == ',') ADVANCE(74);
      if (lookahead == '-') ADVANCE(95);
      if (lookahead == '.') ADVANCE(77);
      if (lookahead == '/') ADVANCE(98);
      if (lookahead == ';') ADVANCE(71);
      if (lookahead == '<') ADVANCE(109);
      if (lookahead == '=') ADVANCE(72);
      if (lookahead == '>') ADVANCE(106);
      if (lookahead == '[') ADVANCE(73);
      if (lookahead == '\\') ADVANCE(2);
      if (lookahead == ']') ADVANCE(75);
      if (lookahead == '`') ADVANCE(164);
      if (lookahead == 'd') ADVANCE(47);
      if (lookahead == 'e') ADVANCE(39);
      if (lookahead == 'f') ADVANCE(41);
      if (lookahead == 'i') ADVANCE(32);
      if (lookahead == 'l') ADVANCE(48);
      if (lookahead == 'r') ADVANCE(31);
      if (lookahead == 's') ADVANCE(55);
      if (lookahead == 'v') ADVANCE(30);
      if (lookahead == 'w') ADVANCE(34);
      if (lookahead == '{') ADVANCE(81);
      if (lookahead == '|') ADVANCE(102);
      if (lookahead == '}') ADVANCE(82);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(162);
      END_STATE();
    case 1:
      if (lookahead == '\n') SKIP(11)
      END_STATE();
    case 2:
      if (lookahead == '\n') SKIP(11)
      if (lookahead == '\r') SKIP(1)
      if (lookahead == 'n' ||
          lookahead == 'r') ADVANCE(171);
      END_STATE();
    case 3:
      if (lookahead == '\n') SKIP(12)
      END_STATE();
    case 4:
      if (lookahead == '\n') SKIP(12)
      if (lookahead == '\r') SKIP(3)
      END_STATE();
    case 5:
      if (lookahead == '\n') SKIP(13)
      END_STATE();
    case 6:
      if (lookahead == '\n') SKIP(13)
      if (lookahead == '\r') SKIP(5)
      END_STATE();
    case 7:
      if (lookahead == '\n') SKIP(20)
      END_STATE();
    case 8:
      if (lookahead == '\n') SKIP(20)
      if (lookahead == '\r') SKIP(7)
      END_STATE();
    case 9:
      if (lookahead == '\n') SKIP(21)
      END_STATE();
    case 10:
      if (lookahead == '\n') SKIP(21)
      if (lookahead == '\r') SKIP(9)
      END_STATE();
    case 11:
      if (lookahead == '!') ADVANCE(101);
      if (lookahead == '"') ADVANCE(165);
      if (lookahead == '#') ADVANCE(64);
      if (lookahead == '$') ADVANCE(160);
      if (lookahead == '&') ADVANCE(103);
      if (lookahead == '(') ADVANCE(78);
      if (lookahead == ')') ADVANCE(80);
      if (lookahead == '*') ADVANCE(97);
      if (lookahead == '+') ADVANCE(96);
      if (lookahead == ',') ADVANCE(74);
      if (lookahead == '-') ADVANCE(95);
      if (lookahead == '.') ADVANCE(77);
      if (lookahead == '/') ADVANCE(98);
      if (lookahead == ';') ADVANCE(71);
      if (lookahead == '<') ADVANCE(109);
      if (lookahead == '=') ADVANCE(72);
      if (lookahead == '>') ADVANCE(106);
      if (lookahead == '[') ADVANCE(73);
      if (lookahead == '\\') ADVANCE(2);
      if (lookahead == ']') ADVANCE(75);
      if (lookahead == '`') ADVANCE(164);
      if (lookahead == 'd') ADVANCE(47);
      if (lookahead == 'e') ADVANCE(39);
      if (lookahead == 'f') ADVANCE(41);
      if (lookahead == 'i') ADVANCE(32);
      if (lookahead == 'l') ADVANCE(48);
      if (lookahead == 'r') ADVANCE(31);
      if (lookahead == 's') ADVANCE(55);
      if (lookahead == 'v') ADVANCE(30);
      if (lookahead == 'w') ADVANCE(34);
      if (lookahead == '{') ADVANCE(81);
      if (lookahead == '|') ADVANCE(102);
      if (lookahead == '}') ADVANCE(82);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(11)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(162);
      END_STATE();
    case 12:
      if (lookahead == '"') ADVANCE(165);
      if (lookahead == '#') ADVANCE(64);
      if (lookahead == '(') ADVANCE(78);
      if (lookahead == '+') ADVANCE(96);
      if (lookahead == '-') ADVANCE(95);
      if (lookahead == '.') ADVANCE(18);
      if (lookahead == '/') ADVANCE(14);
      if (lookahead == '[') ADVANCE(73);
      if (lookahead == '\\') SKIP(4)
      if (lookahead == '`') ADVANCE(164);
      if (lookahead == 'd') ADVANCE(143);
      if (lookahead == 'e') ADVANCE(142);
      if (lookahead == 'f') ADVANCE(139);
      if (lookahead == 'i') ADVANCE(130);
      if (lookahead == 'l') ADVANCE(144);
      if (lookahead == 'r') ADVANCE(129);
      if (lookahead == 's') ADVANCE(150);
      if (lookahead == 'v') ADVANCE(128);
      if (lookahead == 'w') ADVANCE(132);
      if (lookahead == '{') ADVANCE(81);
      if (lookahead == '}') ADVANCE(82);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(12)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(162);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(159);
      END_STATE();
    case 13:
      if (lookahead == '"') ADVANCE(165);
      if (lookahead == '(') ADVANCE(78);
      if (lookahead == ')') ADVANCE(80);
      if (lookahead == '+') ADVANCE(96);
      if (lookahead == '-') ADVANCE(95);
      if (lookahead == '.') ADVANCE(65);
      if (lookahead == '/') ADVANCE(14);
      if (lookahead == '\\') SKIP(6)
      if (lookahead == '`') ADVANCE(164);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(13)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(162);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(159);
      END_STATE();
    case 14:
      if (lookahead == '*') ADVANCE(16);
      if (lookahead == '/') ADVANCE(184);
      END_STATE();
    case 15:
      if (lookahead == '*') ADVANCE(15);
      if (lookahead == '/') ADVANCE(183);
      if (lookahead != 0) ADVANCE(16);
      END_STATE();
    case 16:
      if (lookahead == '*') ADVANCE(15);
      if (lookahead != 0) ADVANCE(16);
      END_STATE();
    case 17:
      if (lookahead == '.') ADVANCE(19);
      END_STATE();
    case 18:
      if (lookahead == '.') ADVANCE(19);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(163);
      END_STATE();
    case 19:
      if (lookahead == '.') ADVANCE(79);
      END_STATE();
    case 20:
      if (lookahead == '.') ADVANCE(17);
      if (lookahead == '/') ADVANCE(14);
      if (lookahead == '\\') SKIP(8)
      if (lookahead == 'e') ADVANCE(45);
      if (lookahead == 'f') ADVANCE(41);
      if (lookahead == 'i') ADVANCE(46);
      if (lookahead == 's') ADVANCE(55);
      if (lookahead == 'v') ADVANCE(30);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(20)
      END_STATE();
    case 21:
      if (lookahead == '/') ADVANCE(14);
      if (lookahead == '\\') SKIP(10)
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(21)
      END_STATE();
    case 22:
      if (lookahead == '/') ADVANCE(14);
      if (lookahead == '\\') SKIP(10)
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(21)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(161);
      END_STATE();
    case 23:
      if (lookahead == 'a') ADVANCE(40);
      END_STATE();
    case 24:
      if (lookahead == 'a') ADVANCE(59);
      END_STATE();
    case 25:
      if (lookahead == 'c') ADVANCE(23);
      END_STATE();
    case 26:
      if (lookahead == 'c') ADVANCE(61);
      END_STATE();
    case 27:
      if (lookahead == 'd') ADVANCE(110);
      END_STATE();
    case 28:
      if (lookahead == 'e') ADVANCE(85);
      END_STATE();
    case 29:
      if (lookahead == 'e') ADVANCE(86);
      END_STATE();
    case 30:
      if (lookahead == 'e') ADVANCE(26);
      if (lookahead == 'o') ADVANCE(35);
      END_STATE();
    case 31:
      if (lookahead == 'e') ADVANCE(57);
      END_STATE();
    case 32:
      if (lookahead == 'f') ADVANCE(83);
      if (lookahead == 'n') ADVANCE(56);
      END_STATE();
    case 33:
      if (lookahead == 'g') ADVANCE(118);
      END_STATE();
    case 34:
      if (lookahead == 'h') ADVANCE(37);
      END_STATE();
    case 35:
      if (lookahead == 'i') ADVANCE(27);
      END_STATE();
    case 36:
      if (lookahead == 'i') ADVANCE(43);
      END_STATE();
    case 37:
      if (lookahead == 'i') ADVANCE(42);
      END_STATE();
    case 38:
      if (lookahead == 'i') ADVANCE(58);
      END_STATE();
    case 39:
      if (lookahead == 'l') ADVANCE(54);
      if (lookahead == 'n') ADVANCE(60);
      END_STATE();
    case 40:
      if (lookahead == 'l') ADVANCE(92);
      END_STATE();
    case 41:
      if (lookahead == 'l') ADVANCE(49);
      END_STATE();
    case 42:
      if (lookahead == 'l') ADVANCE(29);
      END_STATE();
    case 43:
      if (lookahead == 'n') ADVANCE(33);
      END_STATE();
    case 44:
      if (lookahead == 'n') ADVANCE(90);
      END_STATE();
    case 45:
      if (lookahead == 'n') ADVANCE(60);
      END_STATE();
    case 46:
      if (lookahead == 'n') ADVANCE(56);
      END_STATE();
    case 47:
      if (lookahead == 'o') ADVANCE(88);
      END_STATE();
    case 48:
      if (lookahead == 'o') ADVANCE(25);
      END_STATE();
    case 49:
      if (lookahead == 'o') ADVANCE(24);
      END_STATE();
    case 50:
      if (lookahead == 'o') ADVANCE(51);
      END_STATE();
    case 51:
      if (lookahead == 'r') ADVANCE(116);
      END_STATE();
    case 52:
      if (lookahead == 'r') ADVANCE(44);
      END_STATE();
    case 53:
      if (lookahead == 'r') ADVANCE(36);
      END_STATE();
    case 54:
      if (lookahead == 's') ADVANCE(28);
      END_STATE();
    case 55:
      if (lookahead == 't') ADVANCE(53);
      END_STATE();
    case 56:
      if (lookahead == 't') ADVANCE(120);
      END_STATE();
    case 57:
      if (lookahead == 't') ADVANCE(62);
      END_STATE();
    case 58:
      if (lookahead == 't') ADVANCE(63);
      END_STATE();
    case 59:
      if (lookahead == 't') ADVANCE(114);
      END_STATE();
    case 60:
      if (lookahead == 't') ADVANCE(38);
      END_STATE();
    case 61:
      if (lookahead == 't') ADVANCE(50);
      END_STATE();
    case 62:
      if (lookahead == 'u') ADVANCE(52);
      END_STATE();
    case 63:
      if (lookahead == 'y') ADVANCE(112);
      END_STATE();
    case 64:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(181);
      END_STATE();
    case 65:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(163);
      END_STATE();
    case 66:
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(182);
      END_STATE();
    case 67:
      if (eof) ADVANCE(70);
      if (lookahead == '\n') SKIP(69)
      END_STATE();
    case 68:
      if (eof) ADVANCE(70);
      if (lookahead == '\n') SKIP(69)
      if (lookahead == '\r') SKIP(67)
      END_STATE();
    case 69:
      if (eof) ADVANCE(70);
      if (lookahead == '!') ADVANCE(101);
      if (lookahead == '&') ADVANCE(103);
      if (lookahead == '(') ADVANCE(78);
      if (lookahead == ')') ADVANCE(80);
      if (lookahead == '*') ADVANCE(97);
      if (lookahead == '+') ADVANCE(96);
      if (lookahead == ',') ADVANCE(74);
      if (lookahead == '-') ADVANCE(94);
      if (lookahead == '.') ADVANCE(76);
      if (lookahead == '/') ADVANCE(98);
      if (lookahead == ';') ADVANCE(71);
      if (lookahead == '<') ADVANCE(109);
      if (lookahead == '=') ADVANCE(72);
      if (lookahead == '>') ADVANCE(106);
      if (lookahead == '\\') SKIP(68)
      if (lookahead == 'e') ADVANCE(39);
      if (lookahead == 'f') ADVANCE(41);
      if (lookahead == 'i') ADVANCE(46);
      if (lookahead == 's') ADVANCE(55);
      if (lookahead == 'v') ADVANCE(30);
      if (lookahead == 'w') ADVANCE(34);
      if (lookahead == '|') ADVANCE(102);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(69)
      END_STATE();
    case 70:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 71:
      ACCEPT_TOKEN(anon_sym_SEMI);
      END_STATE();
    case 72:
      ACCEPT_TOKEN(anon_sym_EQ);
      if (lookahead == '=') ADVANCE(104);
      END_STATE();
    case 73:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 74:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 75:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 76:
      ACCEPT_TOKEN(anon_sym_DOT);
      END_STATE();
    case 77:
      ACCEPT_TOKEN(anon_sym_DOT);
      if (lookahead == '.') ADVANCE(19);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(163);
      END_STATE();
    case 78:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 79:
      ACCEPT_TOKEN(anon_sym_DOT_DOT_DOT);
      END_STATE();
    case 80:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 81:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 82:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 83:
      ACCEPT_TOKEN(anon_sym_if);
      END_STATE();
    case 84:
      ACCEPT_TOKEN(anon_sym_if);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(159);
      END_STATE();
    case 85:
      ACCEPT_TOKEN(anon_sym_else);
      END_STATE();
    case 86:
      ACCEPT_TOKEN(anon_sym_while);
      END_STATE();
    case 87:
      ACCEPT_TOKEN(anon_sym_while);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(159);
      END_STATE();
    case 88:
      ACCEPT_TOKEN(anon_sym_do);
      END_STATE();
    case 89:
      ACCEPT_TOKEN(anon_sym_do);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(159);
      END_STATE();
    case 90:
      ACCEPT_TOKEN(anon_sym_return);
      END_STATE();
    case 91:
      ACCEPT_TOKEN(anon_sym_return);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(159);
      END_STATE();
    case 92:
      ACCEPT_TOKEN(anon_sym_local);
      END_STATE();
    case 93:
      ACCEPT_TOKEN(anon_sym_local);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(159);
      END_STATE();
    case 94:
      ACCEPT_TOKEN(anon_sym_DASH);
      END_STATE();
    case 95:
      ACCEPT_TOKEN(anon_sym_DASH);
      if (lookahead == '.') ADVANCE(65);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(162);
      END_STATE();
    case 96:
      ACCEPT_TOKEN(anon_sym_PLUS);
      END_STATE();
    case 97:
      ACCEPT_TOKEN(anon_sym_STAR);
      END_STATE();
    case 98:
      ACCEPT_TOKEN(anon_sym_SLASH);
      if (lookahead == '*') ADVANCE(16);
      if (lookahead == '/') ADVANCE(184);
      END_STATE();
    case 99:
      ACCEPT_TOKEN(anon_sym_PIPE_PIPE);
      END_STATE();
    case 100:
      ACCEPT_TOKEN(anon_sym_AMP_AMP);
      END_STATE();
    case 101:
      ACCEPT_TOKEN(anon_sym_BANG);
      if (lookahead == '=') ADVANCE(105);
      END_STATE();
    case 102:
      ACCEPT_TOKEN(anon_sym_PIPE);
      if (lookahead == '|') ADVANCE(99);
      END_STATE();
    case 103:
      ACCEPT_TOKEN(anon_sym_AMP);
      if (lookahead == '&') ADVANCE(100);
      END_STATE();
    case 104:
      ACCEPT_TOKEN(anon_sym_EQ_EQ);
      END_STATE();
    case 105:
      ACCEPT_TOKEN(anon_sym_BANG_EQ);
      END_STATE();
    case 106:
      ACCEPT_TOKEN(anon_sym_GT);
      if (lookahead == '=') ADVANCE(107);
      END_STATE();
    case 107:
      ACCEPT_TOKEN(anon_sym_GT_EQ);
      END_STATE();
    case 108:
      ACCEPT_TOKEN(anon_sym_LT_EQ);
      END_STATE();
    case 109:
      ACCEPT_TOKEN(anon_sym_LT);
      if (lookahead == '=') ADVANCE(108);
      END_STATE();
    case 110:
      ACCEPT_TOKEN(anon_sym_void);
      END_STATE();
    case 111:
      ACCEPT_TOKEN(anon_sym_void);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(159);
      END_STATE();
    case 112:
      ACCEPT_TOKEN(anon_sym_entity);
      END_STATE();
    case 113:
      ACCEPT_TOKEN(anon_sym_entity);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(159);
      END_STATE();
    case 114:
      ACCEPT_TOKEN(anon_sym_float);
      END_STATE();
    case 115:
      ACCEPT_TOKEN(anon_sym_float);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(159);
      END_STATE();
    case 116:
      ACCEPT_TOKEN(anon_sym_vector);
      END_STATE();
    case 117:
      ACCEPT_TOKEN(anon_sym_vector);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(159);
      END_STATE();
    case 118:
      ACCEPT_TOKEN(anon_sym_string);
      END_STATE();
    case 119:
      ACCEPT_TOKEN(anon_sym_string);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(159);
      END_STATE();
    case 120:
      ACCEPT_TOKEN(anon_sym_int);
      END_STATE();
    case 121:
      ACCEPT_TOKEN(anon_sym_int);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(159);
      END_STATE();
    case 122:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(137);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(159);
      END_STATE();
    case 123:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(154);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(159);
      END_STATE();
    case 124:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'c') ADVANCE(122);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(159);
      END_STATE();
    case 125:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'c') ADVANCE(156);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(159);
      END_STATE();
    case 126:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'd') ADVANCE(111);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(159);
      END_STATE();
    case 127:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(87);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(159);
      END_STATE();
    case 128:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(125);
      if (lookahead == 'o') ADVANCE(133);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(159);
      END_STATE();
    case 129:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(152);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(159);
      END_STATE();
    case 130:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'f') ADVANCE(84);
      if (lookahead == 'n') ADVANCE(151);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(159);
      END_STATE();
    case 131:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'g') ADVANCE(119);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(159);
      END_STATE();
    case 132:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'h') ADVANCE(135);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(159);
      END_STATE();
    case 133:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(126);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(159);
      END_STATE();
    case 134:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(140);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(159);
      END_STATE();
    case 135:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(138);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(159);
      END_STATE();
    case 136:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(153);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(159);
      END_STATE();
    case 137:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(93);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(159);
      END_STATE();
    case 138:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(127);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(159);
      END_STATE();
    case 139:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(145);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(159);
      END_STATE();
    case 140:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(131);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(159);
      END_STATE();
    case 141:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(91);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(159);
      END_STATE();
    case 142:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(155);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(159);
      END_STATE();
    case 143:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(89);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(159);
      END_STATE();
    case 144:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(124);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(159);
      END_STATE();
    case 145:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(123);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(159);
      END_STATE();
    case 146:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(147);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(159);
      END_STATE();
    case 147:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(117);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(159);
      END_STATE();
    case 148:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(141);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(159);
      END_STATE();
    case 149:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(134);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(159);
      END_STATE();
    case 150:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(149);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(159);
      END_STATE();
    case 151:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(121);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(159);
      END_STATE();
    case 152:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(157);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(159);
      END_STATE();
    case 153:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(158);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(159);
      END_STATE();
    case 154:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(115);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(159);
      END_STATE();
    case 155:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(136);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(159);
      END_STATE();
    case 156:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(146);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(159);
      END_STATE();
    case 157:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'u') ADVANCE(148);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(159);
      END_STATE();
    case 158:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'y') ADVANCE(113);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(159);
      END_STATE();
    case 159:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(159);
      END_STATE();
    case 160:
      ACCEPT_TOKEN(anon_sym_DOLLAR);
      END_STATE();
    case 161:
      ACCEPT_TOKEN(aux_sym_frame_identifier_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(161);
      END_STATE();
    case 162:
      ACCEPT_TOKEN(sym__integer_literal);
      if (lookahead == '.') ADVANCE(65);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(162);
      END_STATE();
    case 163:
      ACCEPT_TOKEN(sym__float_literal);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(163);
      END_STATE();
    case 164:
      ACCEPT_TOKEN(anon_sym_BQUOTE);
      END_STATE();
    case 165:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 166:
      ACCEPT_TOKEN(aux_sym__string_literal_token1);
      if (lookahead == '*') ADVANCE(168);
      if (lookahead == '/') ADVANCE(170);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(170);
      END_STATE();
    case 167:
      ACCEPT_TOKEN(aux_sym__string_literal_token1);
      if (lookahead == '*') ADVANCE(167);
      if (lookahead == '/') ADVANCE(170);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(168);
      END_STATE();
    case 168:
      ACCEPT_TOKEN(aux_sym__string_literal_token1);
      if (lookahead == '*') ADVANCE(167);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(168);
      END_STATE();
    case 169:
      ACCEPT_TOKEN(aux_sym__string_literal_token1);
      if (lookahead == '/') ADVANCE(166);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(169);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(170);
      END_STATE();
    case 170:
      ACCEPT_TOKEN(aux_sym__string_literal_token1);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(170);
      END_STATE();
    case 171:
      ACCEPT_TOKEN(aux_sym__string_literal_token2);
      END_STATE();
    case 172:
      ACCEPT_TOKEN(aux_sym__string_literal_token3);
      if (lookahead == '\n') ADVANCE(179);
      if (lookahead == '\r') ADVANCE(174);
      if (lookahead == 'n' ||
          lookahead == 'r') ADVANCE(171);
      if (lookahead != 0 &&
          lookahead != '"') ADVANCE(180);
      END_STATE();
    case 173:
      ACCEPT_TOKEN(aux_sym__string_literal_token3);
      if (lookahead == '\n') ADVANCE(179);
      if (lookahead == '/') ADVANCE(166);
      if (lookahead == '\\') ADVANCE(172);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(169);
      if (lookahead != 0 &&
          lookahead != '"') ADVANCE(170);
      END_STATE();
    case 174:
      ACCEPT_TOKEN(aux_sym__string_literal_token3);
      if (lookahead == '\n') ADVANCE(179);
      if (lookahead != 0 &&
          lookahead != '"') ADVANCE(180);
      END_STATE();
    case 175:
      ACCEPT_TOKEN(aux_sym__string_literal_token3);
      if (lookahead == '\n') ADVANCE(180);
      if (lookahead == '"') ADVANCE(184);
      if (lookahead != 0) ADVANCE(175);
      END_STATE();
    case 176:
      ACCEPT_TOKEN(aux_sym__string_literal_token3);
      if (lookahead == '"') ADVANCE(16);
      if (lookahead == '*') ADVANCE(176);
      if (lookahead == '/') ADVANCE(180);
      if (lookahead != 0) ADVANCE(177);
      END_STATE();
    case 177:
      ACCEPT_TOKEN(aux_sym__string_literal_token3);
      if (lookahead == '"') ADVANCE(16);
      if (lookahead == '*') ADVANCE(176);
      if (lookahead != 0) ADVANCE(177);
      END_STATE();
    case 178:
      ACCEPT_TOKEN(aux_sym__string_literal_token3);
      if (lookahead == '*') ADVANCE(177);
      if (lookahead == '/') ADVANCE(175);
      if (lookahead != 0 &&
          lookahead != '"') ADVANCE(180);
      END_STATE();
    case 179:
      ACCEPT_TOKEN(aux_sym__string_literal_token3);
      if (lookahead == '/') ADVANCE(178);
      if (lookahead == '\\') ADVANCE(172);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(179);
      if (lookahead != 0 &&
          lookahead != '"') ADVANCE(180);
      END_STATE();
    case 180:
      ACCEPT_TOKEN(aux_sym__string_literal_token3);
      if (lookahead != 0 &&
          lookahead != '"') ADVANCE(180);
      END_STATE();
    case 181:
      ACCEPT_TOKEN(aux_sym__builtin_literal_token1);
      if (lookahead == ':') ADVANCE(66);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(181);
      END_STATE();
    case 182:
      ACCEPT_TOKEN(aux_sym__builtin_literal_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(182);
      END_STATE();
    case 183:
      ACCEPT_TOKEN(sym_comment);
      END_STATE();
    case 184:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(184);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 69},
  [2] = {.lex_state = 12},
  [3] = {.lex_state = 12},
  [4] = {.lex_state = 12},
  [5] = {.lex_state = 12},
  [6] = {.lex_state = 12},
  [7] = {.lex_state = 12},
  [8] = {.lex_state = 12},
  [9] = {.lex_state = 12},
  [10] = {.lex_state = 12},
  [11] = {.lex_state = 69},
  [12] = {.lex_state = 69},
  [13] = {.lex_state = 69},
  [14] = {.lex_state = 69},
  [15] = {.lex_state = 69},
  [16] = {.lex_state = 69},
  [17] = {.lex_state = 69},
  [18] = {.lex_state = 69},
  [19] = {.lex_state = 69},
  [20] = {.lex_state = 69},
  [21] = {.lex_state = 69},
  [22] = {.lex_state = 12},
  [23] = {.lex_state = 69},
  [24] = {.lex_state = 69},
  [25] = {.lex_state = 69},
  [26] = {.lex_state = 69},
  [27] = {.lex_state = 69},
  [28] = {.lex_state = 69},
  [29] = {.lex_state = 69},
  [30] = {.lex_state = 69},
  [31] = {.lex_state = 69},
  [32] = {.lex_state = 69},
  [33] = {.lex_state = 69},
  [34] = {.lex_state = 69},
  [35] = {.lex_state = 13},
  [36] = {.lex_state = 13},
  [37] = {.lex_state = 13},
  [38] = {.lex_state = 13},
  [39] = {.lex_state = 13},
  [40] = {.lex_state = 13},
  [41] = {.lex_state = 13},
  [42] = {.lex_state = 13},
  [43] = {.lex_state = 13},
  [44] = {.lex_state = 13},
  [45] = {.lex_state = 13},
  [46] = {.lex_state = 13},
  [47] = {.lex_state = 13},
  [48] = {.lex_state = 13},
  [49] = {.lex_state = 69},
  [50] = {.lex_state = 13},
  [51] = {.lex_state = 13},
  [52] = {.lex_state = 13},
  [53] = {.lex_state = 69},
  [54] = {.lex_state = 69},
  [55] = {.lex_state = 69},
  [56] = {.lex_state = 69},
  [57] = {.lex_state = 69},
  [58] = {.lex_state = 69},
  [59] = {.lex_state = 0},
  [60] = {.lex_state = 20},
  [61] = {.lex_state = 20},
  [62] = {.lex_state = 12},
  [63] = {.lex_state = 12},
  [64] = {.lex_state = 69},
  [65] = {.lex_state = 69},
  [66] = {.lex_state = 69},
  [67] = {.lex_state = 12},
  [68] = {.lex_state = 0},
  [69] = {.lex_state = 12},
  [70] = {.lex_state = 12},
  [71] = {.lex_state = 69},
  [72] = {.lex_state = 69},
  [73] = {.lex_state = 12},
  [74] = {.lex_state = 69},
  [75] = {.lex_state = 69},
  [76] = {.lex_state = 12},
  [77] = {.lex_state = 12},
  [78] = {.lex_state = 69},
  [79] = {.lex_state = 69},
  [80] = {.lex_state = 69},
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
  [100] = {.lex_state = 0},
  [101] = {.lex_state = 0},
  [102] = {.lex_state = 0},
  [103] = {.lex_state = 173},
  [104] = {.lex_state = 173},
  [105] = {.lex_state = 0},
  [106] = {.lex_state = 173},
  [107] = {.lex_state = 0},
  [108] = {.lex_state = 12},
  [109] = {.lex_state = 0},
  [110] = {.lex_state = 0},
  [111] = {.lex_state = 0},
  [112] = {.lex_state = 0},
  [113] = {.lex_state = 12},
  [114] = {.lex_state = 12},
  [115] = {.lex_state = 0},
  [116] = {.lex_state = 0},
  [117] = {.lex_state = 0},
  [118] = {.lex_state = 0},
  [119] = {.lex_state = 0},
  [120] = {.lex_state = 0},
  [121] = {.lex_state = 13},
  [122] = {.lex_state = 0},
  [123] = {.lex_state = 0},
  [124] = {.lex_state = 0},
  [125] = {.lex_state = 0},
  [126] = {.lex_state = 0},
  [127] = {.lex_state = 0},
  [128] = {.lex_state = 0},
  [129] = {.lex_state = 13},
  [130] = {.lex_state = 0},
  [131] = {.lex_state = 0},
  [132] = {.lex_state = 0},
  [133] = {.lex_state = 0},
  [134] = {.lex_state = 0},
  [135] = {.lex_state = 13},
  [136] = {.lex_state = 0},
  [137] = {.lex_state = 13},
  [138] = {.lex_state = 13},
  [139] = {.lex_state = 0},
  [140] = {.lex_state = 0},
  [141] = {.lex_state = 0},
  [142] = {.lex_state = 22},
  [143] = {.lex_state = 0},
  [144] = {.lex_state = 0},
  [145] = {.lex_state = 0},
  [146] = {.lex_state = 13},
  [147] = {.lex_state = 13},
  [148] = {.lex_state = 13},
  [149] = {.lex_state = 0},
  [150] = {.lex_state = 0},
  [151] = {.lex_state = 13},
  [152] = {.lex_state = 13},
  [153] = {.lex_state = 13},
  [154] = {.lex_state = 13},
  [155] = {.lex_state = 0},
  [156] = {.lex_state = 13},
  [157] = {.lex_state = 12},
  [158] = {.lex_state = 13},
  [159] = {.lex_state = 0},
  [160] = {.lex_state = 0},
  [161] = {.lex_state = 13},
  [162] = {.lex_state = 0},
  [163] = {.lex_state = 13},
  [164] = {.lex_state = 13},
  [165] = {.lex_state = 13},
  [166] = {.lex_state = 0},
  [167] = {.lex_state = 0},
  [168] = {.lex_state = 13},
  [169] = {.lex_state = 13},
  [170] = {.lex_state = 0},
  [171] = {.lex_state = 13},
  [172] = {.lex_state = 0},
  [173] = {.lex_state = 0},
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
    [aux_sym__builtin_literal_token1] = ACTIONS(1),
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
    [sym_simple_type] = STATE(121),
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
      aux_sym__builtin_literal_token1,
    STATE(158), 1,
      sym_simple_type,
    STATE(30), 3,
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
    STATE(32), 6,
      sym__expression,
      sym_unary_expression,
      sym_binary_expression,
      sym_funcall_expression,
      sym_parenthesized_expression,
      sym_literal,
    STATE(159), 11,
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
      sym__builtin_literal,
  [89] = 21,
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
      aux_sym__builtin_literal_token1,
    STATE(158), 1,
      sym_simple_type,
    STATE(30), 3,
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
    STATE(32), 6,
      sym__expression,
      sym_unary_expression,
      sym_binary_expression,
      sym_funcall_expression,
      sym_parenthesized_expression,
      sym_literal,
    STATE(150), 11,
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
      sym__builtin_literal,
  [175] = 20,
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
    STATE(158), 1,
      sym_simple_type,
    STATE(30), 3,
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
    STATE(32), 6,
      sym__expression,
      sym_unary_expression,
      sym_binary_expression,
      sym_funcall_expression,
      sym_parenthesized_expression,
      sym_literal,
    STATE(116), 10,
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
  [257] = 20,
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
    STATE(158), 1,
      sym_simple_type,
    STATE(30), 3,
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
    STATE(32), 6,
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
  [339] = 20,
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
    STATE(158), 1,
      sym_simple_type,
    STATE(30), 3,
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
    STATE(32), 6,
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
  [421] = 20,
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
    STATE(158), 1,
      sym_simple_type,
    STATE(30), 3,
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
    STATE(32), 6,
      sym__expression,
      sym_unary_expression,
      sym_binary_expression,
      sym_funcall_expression,
      sym_parenthesized_expression,
      sym_literal,
    STATE(120), 10,
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
  [503] = 21,
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
    STATE(158), 1,
      sym_simple_type,
    STATE(30), 3,
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
    STATE(32), 6,
      sym__expression,
      sym_unary_expression,
      sym_binary_expression,
      sym_funcall_expression,
      sym_parenthesized_expression,
      sym_literal,
    STATE(140), 8,
      sym__simple_statement,
      sym_assignment_statement,
      sym_if_statement,
      sym_while_statement,
      sym_do_while_statement,
      sym_return_statement,
      sym_variable_definition_statement,
      sym__expression_statement,
  [586] = 21,
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
    STATE(10), 1,
      aux_sym__compound_statement_repeat1,
    STATE(158), 1,
      sym_simple_type,
    STATE(30), 3,
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
    STATE(32), 6,
      sym__expression,
      sym_unary_expression,
      sym_binary_expression,
      sym_funcall_expression,
      sym_parenthesized_expression,
      sym_literal,
    STATE(140), 8,
      sym__simple_statement,
      sym_assignment_statement,
      sym_if_statement,
      sym_while_statement,
      sym_do_while_statement,
      sym_return_statement,
      sym_variable_definition_statement,
      sym__expression_statement,
  [669] = 21,
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
    STATE(8), 1,
      aux_sym__compound_statement_repeat1,
    STATE(158), 1,
      sym_simple_type,
    STATE(30), 3,
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
    STATE(32), 6,
      sym__expression,
      sym_unary_expression,
      sym_binary_expression,
      sym_funcall_expression,
      sym_parenthesized_expression,
      sym_literal,
    STATE(140), 8,
      sym__simple_statement,
      sym_assignment_statement,
      sym_if_statement,
      sym_while_statement,
      sym_do_while_statement,
      sym_return_statement,
      sym_variable_definition_statement,
      sym__expression_statement,
  [752] = 4,
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
  [783] = 3,
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
  [811] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(109), 1,
      anon_sym_STAR,
    ACTIONS(111), 1,
      anon_sym_SLASH,
    ACTIONS(113), 1,
      anon_sym_BANG,
    ACTIONS(115), 1,
      anon_sym_PIPE,
    ACTIONS(117), 1,
      anon_sym_AMP,
    ACTIONS(107), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(121), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(119), 4,
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
  [853] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(109), 1,
      anon_sym_STAR,
    ACTIONS(111), 1,
      anon_sym_SLASH,
    ACTIONS(115), 1,
      anon_sym_PIPE,
    ACTIONS(117), 1,
      anon_sym_AMP,
    ACTIONS(123), 1,
      anon_sym_BANG,
    ACTIONS(107), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(121), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(119), 4,
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
  [895] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(109), 1,
      anon_sym_STAR,
    ACTIONS(111), 1,
      anon_sym_SLASH,
    ACTIONS(115), 1,
      anon_sym_PIPE,
    ACTIONS(117), 1,
      anon_sym_AMP,
    ACTIONS(123), 1,
      anon_sym_BANG,
    ACTIONS(125), 1,
      anon_sym_AMP_AMP,
    ACTIONS(107), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(121), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(119), 4,
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
  [939] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(113), 6,
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
  [967] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(109), 1,
      anon_sym_STAR,
    ACTIONS(111), 1,
      anon_sym_SLASH,
    ACTIONS(115), 1,
      anon_sym_PIPE,
    ACTIONS(117), 1,
      anon_sym_AMP,
    ACTIONS(113), 3,
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
  [1031] = 3,
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
  [1059] = 3,
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
  [1087] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(109), 1,
      anon_sym_STAR,
    ACTIONS(111), 1,
      anon_sym_SLASH,
    ACTIONS(115), 1,
      anon_sym_PIPE,
    ACTIONS(117), 1,
      anon_sym_AMP,
    ACTIONS(107), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(113), 3,
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
  [1125] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(50), 6,
      anon_sym_LPAREN,
      anon_sym_RBRACE,
      anon_sym_PLUS,
      sym__float_literal,
      anon_sym_BQUOTE,
      anon_sym_DQUOTE,
    ACTIONS(139), 14,
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
  [1153] = 3,
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
  [1181] = 3,
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
  [1209] = 3,
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
  [1237] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(155), 6,
      anon_sym_SLASH,
      anon_sym_BANG,
      anon_sym_PIPE,
      anon_sym_AMP,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(153), 14,
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
  [1265] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(97), 1,
      anon_sym_LPAREN,
    ACTIONS(157), 1,
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
  [1297] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(109), 1,
      anon_sym_STAR,
    ACTIONS(111), 1,
      anon_sym_SLASH,
    ACTIONS(117), 1,
      anon_sym_AMP,
    ACTIONS(113), 4,
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
  [1331] = 5,
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
  [1363] = 3,
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
  [1391] = 14,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(109), 1,
      anon_sym_STAR,
    ACTIONS(111), 1,
      anon_sym_SLASH,
    ACTIONS(115), 1,
      anon_sym_PIPE,
    ACTIONS(117), 1,
      anon_sym_AMP,
    ACTIONS(123), 1,
      anon_sym_BANG,
    ACTIONS(125), 1,
      anon_sym_AMP_AMP,
    ACTIONS(163), 1,
      anon_sym_COMMA,
    ACTIONS(165), 1,
      anon_sym_RPAREN,
    ACTIONS(167), 1,
      anon_sym_PIPE_PIPE,
    STATE(111), 1,
      aux_sym_funcall_expression_repeat1,
    ACTIONS(107), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(121), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(119), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
  [1439] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(109), 1,
      anon_sym_STAR,
    ACTIONS(111), 1,
      anon_sym_SLASH,
    ACTIONS(115), 1,
      anon_sym_PIPE,
    ACTIONS(117), 1,
      anon_sym_AMP,
    ACTIONS(123), 1,
      anon_sym_BANG,
    ACTIONS(125), 1,
      anon_sym_AMP_AMP,
    ACTIONS(167), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(107), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(121), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(169), 3,
      anon_sym_SEMI,
      anon_sym_else,
      anon_sym_while,
    ACTIONS(119), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
  [1483] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(109), 1,
      anon_sym_STAR,
    ACTIONS(111), 1,
      anon_sym_SLASH,
    ACTIONS(115), 1,
      anon_sym_PIPE,
    ACTIONS(117), 1,
      anon_sym_AMP,
    ACTIONS(123), 1,
      anon_sym_BANG,
    ACTIONS(125), 1,
      anon_sym_AMP_AMP,
    ACTIONS(167), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(107), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(121), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(171), 3,
      anon_sym_SEMI,
      anon_sym_else,
      anon_sym_while,
    ACTIONS(119), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
  [1527] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(109), 1,
      anon_sym_STAR,
    ACTIONS(111), 1,
      anon_sym_SLASH,
    ACTIONS(115), 1,
      anon_sym_PIPE,
    ACTIONS(117), 1,
      anon_sym_AMP,
    ACTIONS(123), 1,
      anon_sym_BANG,
    ACTIONS(125), 1,
      anon_sym_AMP_AMP,
    ACTIONS(167), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(107), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(121), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(173), 3,
      anon_sym_SEMI,
      anon_sym_else,
      anon_sym_while,
    ACTIONS(119), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
  [1571] = 12,
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
      anon_sym_RPAREN,
    ACTIONS(177), 1,
      sym_identifier,
    STATE(30), 3,
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
  [1615] = 11,
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
    ACTIONS(177), 1,
      sym_identifier,
    STATE(30), 3,
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
  [1656] = 11,
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
    ACTIONS(177), 1,
      sym_identifier,
    STATE(30), 3,
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
  [1697] = 11,
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
    ACTIONS(177), 1,
      sym_identifier,
    STATE(30), 3,
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
  [1738] = 11,
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
    ACTIONS(177), 1,
      sym_identifier,
    STATE(30), 3,
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
  [1779] = 11,
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
    ACTIONS(177), 1,
      sym_identifier,
    STATE(30), 3,
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
  [1820] = 11,
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
    ACTIONS(177), 1,
      sym_identifier,
    STATE(30), 3,
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
  [1861] = 11,
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
    ACTIONS(177), 1,
      sym_identifier,
    STATE(30), 3,
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
  [1902] = 11,
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
    ACTIONS(177), 1,
      sym_identifier,
    STATE(30), 3,
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
  [1943] = 11,
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
    ACTIONS(177), 1,
      sym_identifier,
    STATE(30), 3,
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
  [1984] = 11,
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
    ACTIONS(177), 1,
      sym_identifier,
    STATE(30), 3,
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
  [2025] = 11,
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
    ACTIONS(177), 1,
      sym_identifier,
    STATE(30), 3,
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
    ACTIONS(177), 1,
      sym_identifier,
    STATE(30), 3,
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
    ACTIONS(177), 1,
      sym_identifier,
    STATE(30), 3,
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
  [2148] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(109), 1,
      anon_sym_STAR,
    ACTIONS(111), 1,
      anon_sym_SLASH,
    ACTIONS(115), 1,
      anon_sym_PIPE,
    ACTIONS(117), 1,
      anon_sym_AMP,
    ACTIONS(123), 1,
      anon_sym_BANG,
    ACTIONS(125), 1,
      anon_sym_AMP_AMP,
    ACTIONS(167), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(107), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(121), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(179), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
    ACTIONS(119), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
  [2191] = 11,
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
    ACTIONS(177), 1,
      sym_identifier,
    STATE(30), 3,
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
  [2232] = 11,
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
    ACTIONS(177), 1,
      sym_identifier,
    STATE(30), 3,
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
  [2273] = 11,
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
    ACTIONS(177), 1,
      sym_identifier,
    STATE(30), 3,
      sym__numeric_literal,
      sym__vector_literal,
      sym__string_literal,
    STATE(49), 6,
      sym__expression,
      sym_unary_expression,
      sym_binary_expression,
      sym_funcall_expression,
      sym_parenthesized_expression,
      sym_literal,
  [2314] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(7), 1,
      anon_sym_DOT,
    ACTIONS(181), 1,
      ts_builtin_sym_end,
    STATE(121), 1,
      sym_simple_type,
    ACTIONS(9), 6,
      anon_sym_void,
      anon_sym_entity,
      anon_sym_float,
      anon_sym_vector,
      anon_sym_string,
      anon_sym_int,
    STATE(55), 7,
      sym__definition,
      sym_function_declaration,
      sym_function_definition,
      sym_constant_definition,
      sym_variable_definition,
      sym_field_definition,
      aux_sym_source_file_repeat1,
  [2344] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(109), 1,
      anon_sym_STAR,
    ACTIONS(111), 1,
      anon_sym_SLASH,
    ACTIONS(115), 1,
      anon_sym_PIPE,
    ACTIONS(117), 1,
      anon_sym_AMP,
    ACTIONS(123), 1,
      anon_sym_BANG,
    ACTIONS(125), 1,
      anon_sym_AMP_AMP,
    ACTIONS(167), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(183), 1,
      anon_sym_RPAREN,
    ACTIONS(107), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(121), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(119), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
  [2386] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(185), 1,
      ts_builtin_sym_end,
    ACTIONS(187), 1,
      anon_sym_DOT,
    STATE(121), 1,
      sym_simple_type,
    ACTIONS(190), 6,
      anon_sym_void,
      anon_sym_entity,
      anon_sym_float,
      anon_sym_vector,
      anon_sym_string,
      anon_sym_int,
    STATE(55), 7,
      sym__definition,
      sym_function_declaration,
      sym_function_definition,
      sym_constant_definition,
      sym_variable_definition,
      sym_field_definition,
      aux_sym_source_file_repeat1,
  [2416] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(109), 1,
      anon_sym_STAR,
    ACTIONS(111), 1,
      anon_sym_SLASH,
    ACTIONS(115), 1,
      anon_sym_PIPE,
    ACTIONS(117), 1,
      anon_sym_AMP,
    ACTIONS(123), 1,
      anon_sym_BANG,
    ACTIONS(125), 1,
      anon_sym_AMP_AMP,
    ACTIONS(167), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(193), 1,
      anon_sym_RPAREN,
    ACTIONS(107), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(121), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(119), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
  [2458] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(109), 1,
      anon_sym_STAR,
    ACTIONS(111), 1,
      anon_sym_SLASH,
    ACTIONS(115), 1,
      anon_sym_PIPE,
    ACTIONS(117), 1,
      anon_sym_AMP,
    ACTIONS(123), 1,
      anon_sym_BANG,
    ACTIONS(125), 1,
      anon_sym_AMP_AMP,
    ACTIONS(167), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(195), 1,
      anon_sym_RPAREN,
    ACTIONS(107), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(121), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(119), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
  [2500] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(109), 1,
      anon_sym_STAR,
    ACTIONS(111), 1,
      anon_sym_SLASH,
    ACTIONS(115), 1,
      anon_sym_PIPE,
    ACTIONS(117), 1,
      anon_sym_AMP,
    ACTIONS(123), 1,
      anon_sym_BANG,
    ACTIONS(125), 1,
      anon_sym_AMP_AMP,
    ACTIONS(167), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(197), 1,
      anon_sym_RPAREN,
    ACTIONS(107), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(121), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(119), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
  [2542] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(199), 1,
      anon_sym_COMMA,
    ACTIONS(201), 1,
      anon_sym_RPAREN,
    STATE(118), 1,
      sym__parameter,
    STATE(163), 1,
      sym_simple_type,
    ACTIONS(9), 6,
      anon_sym_void,
      anon_sym_entity,
      anon_sym_float,
      anon_sym_vector,
      anon_sym_string,
      anon_sym_int,
  [2566] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(203), 1,
      anon_sym_DOT_DOT_DOT,
    STATE(134), 1,
      sym__parameter,
    STATE(163), 1,
      sym_simple_type,
    ACTIONS(9), 6,
      anon_sym_void,
      anon_sym_entity,
      anon_sym_float,
      anon_sym_vector,
      anon_sym_string,
      anon_sym_int,
  [2587] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(205), 1,
      anon_sym_DOT_DOT_DOT,
    STATE(134), 1,
      sym__parameter,
    STATE(163), 1,
      sym_simple_type,
    ACTIONS(9), 6,
      anon_sym_void,
      anon_sym_entity,
      anon_sym_float,
      anon_sym_vector,
      anon_sym_string,
      anon_sym_int,
  [2608] = 7,
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
    STATE(105), 1,
      sym_literal,
    STATE(30), 3,
      sym__numeric_literal,
      sym__vector_literal,
      sym__string_literal,
  [2632] = 7,
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
    STATE(97), 1,
      sym_literal,
    STATE(30), 3,
      sym__numeric_literal,
      sym__vector_literal,
      sym__string_literal,
  [2656] = 2,
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
  [2670] = 2,
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
  [2684] = 2,
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
  [2698] = 7,
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
    STATE(88), 1,
      sym_literal,
    STATE(30), 3,
      sym__numeric_literal,
      sym__vector_literal,
      sym__string_literal,
  [2722] = 4,
    ACTIONS(3), 1,
      sym_comment,
    STATE(134), 1,
      sym__parameter,
    STATE(163), 1,
      sym_simple_type,
    ACTIONS(9), 6,
      anon_sym_void,
      anon_sym_entity,
      anon_sym_float,
      anon_sym_vector,
      anon_sym_string,
      anon_sym_int,
  [2740] = 7,
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
    STATE(143), 1,
      sym_literal,
    STATE(30), 3,
      sym__numeric_literal,
      sym__vector_literal,
      sym__string_literal,
  [2764] = 7,
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
    STATE(98), 1,
      sym_literal,
    STATE(30), 3,
      sym__numeric_literal,
      sym__vector_literal,
      sym__string_literal,
  [2788] = 2,
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
  [2802] = 2,
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
  [2816] = 7,
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
    STATE(30), 3,
      sym__numeric_literal,
      sym__vector_literal,
      sym__string_literal,
  [2840] = 2,
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
  [2854] = 2,
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
  [2868] = 7,
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
    STATE(102), 1,
      sym_literal,
    STATE(30), 3,
      sym__numeric_literal,
      sym__vector_literal,
      sym__string_literal,
  [2892] = 7,
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
    STATE(30), 3,
      sym__numeric_literal,
      sym__vector_literal,
      sym__string_literal,
  [2916] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(221), 8,
      ts_builtin_sym_end,
      anon_sym_DOT,
      anon_sym_void,
      anon_sym_entity,
      anon_sym_float,
      anon_sym_vector,
      anon_sym_string,
      anon_sym_int,
  [2930] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(223), 8,
      ts_builtin_sym_end,
      anon_sym_DOT,
      anon_sym_void,
      anon_sym_entity,
      anon_sym_float,
      anon_sym_vector,
      anon_sym_string,
      anon_sym_int,
  [2944] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(225), 8,
      ts_builtin_sym_end,
      anon_sym_DOT,
      anon_sym_void,
      anon_sym_entity,
      anon_sym_float,
      anon_sym_vector,
      anon_sym_string,
      anon_sym_int,
  [2958] = 3,
    ACTIONS(3), 1,
      sym_comment,
    STATE(138), 1,
      sym_simple_type,
    ACTIONS(9), 6,
      anon_sym_void,
      anon_sym_entity,
      anon_sym_float,
      anon_sym_vector,
      anon_sym_string,
      anon_sym_int,
  [2973] = 3,
    ACTIONS(3), 1,
      sym_comment,
    STATE(154), 1,
      sym_simple_type,
    ACTIONS(9), 6,
      anon_sym_void,
      anon_sym_entity,
      anon_sym_float,
      anon_sym_vector,
      anon_sym_string,
      anon_sym_int,
  [2988] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(229), 1,
      anon_sym_EQ,
    ACTIONS(231), 1,
      anon_sym_COMMA,
    STATE(93), 1,
      aux_sym_variable_definition_statement_repeat1,
    ACTIONS(227), 3,
      anon_sym_SEMI,
      anon_sym_else,
      anon_sym_while,
  [3006] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(231), 1,
      anon_sym_COMMA,
    ACTIONS(235), 1,
      anon_sym_EQ,
    STATE(100), 1,
      aux_sym_variable_definition_statement_repeat1,
    ACTIONS(233), 3,
      anon_sym_SEMI,
      anon_sym_else,
      anon_sym_while,
  [3024] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(231), 1,
      anon_sym_COMMA,
    ACTIONS(239), 1,
      anon_sym_EQ,
    STATE(89), 1,
      aux_sym_variable_definition_statement_repeat1,
    ACTIONS(237), 3,
      anon_sym_SEMI,
      anon_sym_else,
      anon_sym_while,
  [3042] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(231), 1,
      anon_sym_COMMA,
    ACTIONS(243), 1,
      anon_sym_EQ,
    STATE(90), 1,
      aux_sym_variable_definition_statement_repeat1,
    ACTIONS(241), 3,
      anon_sym_SEMI,
      anon_sym_else,
      anon_sym_while,
  [3060] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(247), 1,
      anon_sym_COMMA,
    STATE(87), 1,
      aux_sym_variable_definition_statement_repeat1,
    ACTIONS(245), 3,
      anon_sym_SEMI,
      anon_sym_else,
      anon_sym_while,
  [3075] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(231), 1,
      anon_sym_COMMA,
    STATE(93), 1,
      aux_sym_variable_definition_statement_repeat1,
    ACTIONS(227), 3,
      anon_sym_SEMI,
      anon_sym_else,
      anon_sym_while,
  [3090] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(231), 1,
      anon_sym_COMMA,
    STATE(87), 1,
      aux_sym_variable_definition_statement_repeat1,
    ACTIONS(241), 3,
      anon_sym_SEMI,
      anon_sym_else,
      anon_sym_while,
  [3105] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(231), 1,
      anon_sym_COMMA,
    STATE(87), 1,
      aux_sym_variable_definition_statement_repeat1,
    ACTIONS(227), 3,
      anon_sym_SEMI,
      anon_sym_else,
      anon_sym_while,
  [3120] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(252), 1,
      anon_sym_EQ,
    ACTIONS(254), 1,
      anon_sym_COMMA,
    ACTIONS(250), 3,
      anon_sym_SEMI,
      anon_sym_else,
      anon_sym_while,
  [3135] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(256), 1,
      anon_sym_EQ,
    ACTIONS(245), 4,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_else,
      anon_sym_while,
  [3148] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(231), 1,
      anon_sym_COMMA,
    STATE(87), 1,
      aux_sym_variable_definition_statement_repeat1,
    ACTIONS(258), 3,
      anon_sym_SEMI,
      anon_sym_else,
      anon_sym_while,
  [3163] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(231), 1,
      anon_sym_COMMA,
    STATE(99), 1,
      aux_sym_variable_definition_statement_repeat1,
    ACTIONS(258), 3,
      anon_sym_SEMI,
      anon_sym_else,
      anon_sym_while,
  [3178] = 4,
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
  [3193] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(231), 1,
      anon_sym_COMMA,
    STATE(87), 1,
      aux_sym_variable_definition_statement_repeat1,
    ACTIONS(266), 3,
      anon_sym_SEMI,
      anon_sym_else,
      anon_sym_while,
  [3208] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(231), 1,
      anon_sym_COMMA,
    STATE(96), 1,
      aux_sym_variable_definition_statement_repeat1,
    ACTIONS(268), 3,
      anon_sym_SEMI,
      anon_sym_else,
      anon_sym_while,
  [3223] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(231), 1,
      anon_sym_COMMA,
    STATE(90), 1,
      aux_sym_variable_definition_statement_repeat1,
    ACTIONS(241), 3,
      anon_sym_SEMI,
      anon_sym_else,
      anon_sym_while,
  [3238] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(231), 1,
      anon_sym_COMMA,
    STATE(87), 1,
      aux_sym_variable_definition_statement_repeat1,
    ACTIONS(268), 3,
      anon_sym_SEMI,
      anon_sym_else,
      anon_sym_while,
  [3253] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(231), 1,
      anon_sym_COMMA,
    STATE(87), 1,
      aux_sym_variable_definition_statement_repeat1,
    ACTIONS(237), 3,
      anon_sym_SEMI,
      anon_sym_else,
      anon_sym_while,
  [3268] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(270), 1,
      anon_sym_COMMA,
    ACTIONS(237), 3,
      anon_sym_SEMI,
      anon_sym_else,
      anon_sym_while,
  [3280] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(272), 4,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_else,
      anon_sym_while,
  [3290] = 4,
    ACTIONS(276), 1,
      aux_sym__string_literal_token3,
    ACTIONS(278), 1,
      sym_comment,
    STATE(104), 1,
      aux_sym__string_literal_repeat1,
    ACTIONS(274), 2,
      aux_sym__string_literal_token1,
      aux_sym__string_literal_token2,
  [3304] = 4,
    ACTIONS(278), 1,
      sym_comment,
    ACTIONS(283), 1,
      aux_sym__string_literal_token3,
    STATE(104), 1,
      aux_sym__string_literal_repeat1,
    ACTIONS(280), 2,
      aux_sym__string_literal_token1,
      aux_sym__string_literal_token2,
  [3318] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(285), 1,
      anon_sym_COMMA,
    ACTIONS(233), 3,
      anon_sym_SEMI,
      anon_sym_else,
      anon_sym_while,
  [3330] = 4,
    ACTIONS(278), 1,
      sym_comment,
    ACTIONS(289), 1,
      aux_sym__string_literal_token3,
    STATE(103), 1,
      aux_sym__string_literal_repeat1,
    ACTIONS(287), 2,
      aux_sym__string_literal_token1,
      aux_sym__string_literal_token2,
  [3344] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(291), 3,
      anon_sym_SEMI,
      anon_sym_else,
      anon_sym_while,
  [3353] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(293), 1,
      sym__integer_literal,
    ACTIONS(295), 1,
      sym__float_literal,
    STATE(136), 1,
      sym__numeric_literal,
  [3366] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(297), 1,
      anon_sym_SEMI,
    ACTIONS(299), 1,
      anon_sym_COMMA,
    STATE(115), 1,
      aux_sym_variable_definition_repeat1,
  [3379] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(299), 1,
      anon_sym_COMMA,
    ACTIONS(301), 1,
      anon_sym_SEMI,
    STATE(119), 1,
      aux_sym_variable_definition_repeat1,
  [3392] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(163), 1,
      anon_sym_COMMA,
    ACTIONS(303), 1,
      anon_sym_RPAREN,
    STATE(125), 1,
      aux_sym_funcall_expression_repeat1,
  [3405] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(305), 1,
      anon_sym_COMMA,
    ACTIONS(308), 1,
      anon_sym_RPAREN,
    STATE(112), 1,
      aux_sym_parameter_list_repeat1,
  [3418] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(310), 1,
      sym__integer_literal,
    ACTIONS(312), 1,
      sym__float_literal,
    STATE(114), 1,
      sym__numeric_literal,
  [3431] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(314), 1,
      sym__integer_literal,
    ACTIONS(316), 1,
      sym__float_literal,
    STATE(108), 1,
      sym__numeric_literal,
  [3444] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(299), 1,
      anon_sym_COMMA,
    ACTIONS(318), 1,
      anon_sym_SEMI,
    STATE(126), 1,
      aux_sym_variable_definition_repeat1,
  [3457] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(322), 1,
      anon_sym_else,
    ACTIONS(320), 2,
      anon_sym_SEMI,
      anon_sym_while,
  [3468] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(324), 3,
      anon_sym_SEMI,
      anon_sym_else,
      anon_sym_while,
  [3477] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(326), 1,
      anon_sym_COMMA,
    ACTIONS(328), 1,
      anon_sym_RPAREN,
    STATE(124), 1,
      aux_sym_parameter_list_repeat1,
  [3490] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(299), 1,
      anon_sym_COMMA,
    ACTIONS(330), 1,
      anon_sym_SEMI,
    STATE(126), 1,
      aux_sym_variable_definition_repeat1,
  [3503] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(332), 3,
      anon_sym_SEMI,
      anon_sym_else,
      anon_sym_while,
  [3512] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(334), 1,
      anon_sym_LPAREN,
    ACTIONS(336), 1,
      sym_identifier,
    STATE(147), 1,
      sym_parameter_list,
  [3525] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(338), 3,
      anon_sym_SEMI,
      anon_sym_else,
      anon_sym_while,
  [3534] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(340), 3,
      anon_sym_SEMI,
      anon_sym_else,
      anon_sym_while,
  [3543] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(342), 1,
      anon_sym_COMMA,
    ACTIONS(344), 1,
      anon_sym_RPAREN,
    STATE(112), 1,
      aux_sym_parameter_list_repeat1,
  [3556] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(179), 1,
      anon_sym_RPAREN,
    ACTIONS(346), 1,
      anon_sym_COMMA,
    STATE(125), 1,
      aux_sym_funcall_expression_repeat1,
  [3569] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(349), 1,
      anon_sym_SEMI,
    ACTIONS(351), 1,
      anon_sym_COMMA,
    STATE(126), 1,
      aux_sym_variable_definition_repeat1,
  [3582] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(354), 1,
      anon_sym_SEMI,
    ACTIONS(356), 1,
      anon_sym_EQ,
    ACTIONS(358), 1,
      anon_sym_COMMA,
  [3595] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(349), 2,
      anon_sym_SEMI,
      anon_sym_COMMA,
  [3603] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(360), 2,
      anon_sym_LPAREN,
      sym_identifier,
  [3611] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(362), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [3619] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(364), 1,
      anon_sym_SEMI,
    ACTIONS(366), 1,
      anon_sym_COMMA,
  [3629] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(368), 1,
      anon_sym_DOLLAR,
    STATE(141), 1,
      sym_frame_identifier,
  [3639] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(370), 1,
      anon_sym_SEMI,
    ACTIONS(372), 1,
      anon_sym_EQ,
  [3649] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(308), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [3657] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(374), 1,
      sym_identifier,
  [3664] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(376), 1,
      anon_sym_BQUOTE,
  [3671] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(378), 1,
      sym_identifier,
  [3678] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(380), 1,
      sym_identifier,
  [3685] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(382), 1,
      anon_sym_while,
  [3692] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(384), 1,
      anon_sym_SEMI,
  [3699] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(386), 1,
      anon_sym_COMMA,
  [3706] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(388), 1,
      aux_sym_frame_identifier_token1,
  [3713] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(390), 1,
      anon_sym_SEMI,
  [3720] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(392), 1,
      ts_builtin_sym_end,
  [3727] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(394), 1,
      anon_sym_RBRACK,
  [3734] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(396), 1,
      sym_identifier,
  [3741] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(398), 1,
      sym_identifier,
  [3748] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(400), 1,
      sym_identifier,
  [3755] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(402), 1,
      anon_sym_DQUOTE,
  [3762] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(404), 1,
      anon_sym_SEMI,
  [3769] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(406), 1,
      sym_identifier,
  [3776] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(408), 1,
      sym_identifier,
  [3783] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(410), 1,
      sym_identifier,
  [3790] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(412), 1,
      sym_identifier,
  [3797] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(414), 1,
      anon_sym_RPAREN,
  [3804] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(416), 1,
      sym_identifier,
  [3811] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(418), 1,
      anon_sym_DOT_DOT_DOT,
  [3818] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(420), 1,
      sym_identifier,
  [3825] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(422), 1,
      anon_sym_SEMI,
  [3832] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(424), 1,
      anon_sym_LPAREN,
  [3839] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(426), 1,
      sym_identifier,
  [3846] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(428), 1,
      anon_sym_LPAREN,
  [3853] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(430), 1,
      sym_identifier,
  [3860] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(432), 1,
      sym_identifier,
  [3867] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(434), 1,
      sym_identifier,
  [3874] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(436), 1,
      anon_sym_DQUOTE,
  [3881] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(438), 1,
      anon_sym_COMMA,
  [3888] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(440), 1,
      sym_identifier,
  [3895] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(442), 1,
      sym_identifier,
  [3902] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(444), 1,
      anon_sym_RPAREN,
  [3909] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(446), 1,
      sym_identifier,
  [3916] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(344), 1,
      anon_sym_RPAREN,
  [3923] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(448), 1,
      anon_sym_LPAREN,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 89,
  [SMALL_STATE(4)] = 175,
  [SMALL_STATE(5)] = 257,
  [SMALL_STATE(6)] = 339,
  [SMALL_STATE(7)] = 421,
  [SMALL_STATE(8)] = 503,
  [SMALL_STATE(9)] = 586,
  [SMALL_STATE(10)] = 669,
  [SMALL_STATE(11)] = 752,
  [SMALL_STATE(12)] = 783,
  [SMALL_STATE(13)] = 811,
  [SMALL_STATE(14)] = 853,
  [SMALL_STATE(15)] = 895,
  [SMALL_STATE(16)] = 939,
  [SMALL_STATE(17)] = 967,
  [SMALL_STATE(18)] = 1003,
  [SMALL_STATE(19)] = 1031,
  [SMALL_STATE(20)] = 1059,
  [SMALL_STATE(21)] = 1087,
  [SMALL_STATE(22)] = 1125,
  [SMALL_STATE(23)] = 1153,
  [SMALL_STATE(24)] = 1181,
  [SMALL_STATE(25)] = 1209,
  [SMALL_STATE(26)] = 1237,
  [SMALL_STATE(27)] = 1265,
  [SMALL_STATE(28)] = 1297,
  [SMALL_STATE(29)] = 1331,
  [SMALL_STATE(30)] = 1363,
  [SMALL_STATE(31)] = 1391,
  [SMALL_STATE(32)] = 1439,
  [SMALL_STATE(33)] = 1483,
  [SMALL_STATE(34)] = 1527,
  [SMALL_STATE(35)] = 1571,
  [SMALL_STATE(36)] = 1615,
  [SMALL_STATE(37)] = 1656,
  [SMALL_STATE(38)] = 1697,
  [SMALL_STATE(39)] = 1738,
  [SMALL_STATE(40)] = 1779,
  [SMALL_STATE(41)] = 1820,
  [SMALL_STATE(42)] = 1861,
  [SMALL_STATE(43)] = 1902,
  [SMALL_STATE(44)] = 1943,
  [SMALL_STATE(45)] = 1984,
  [SMALL_STATE(46)] = 2025,
  [SMALL_STATE(47)] = 2066,
  [SMALL_STATE(48)] = 2107,
  [SMALL_STATE(49)] = 2148,
  [SMALL_STATE(50)] = 2191,
  [SMALL_STATE(51)] = 2232,
  [SMALL_STATE(52)] = 2273,
  [SMALL_STATE(53)] = 2314,
  [SMALL_STATE(54)] = 2344,
  [SMALL_STATE(55)] = 2386,
  [SMALL_STATE(56)] = 2416,
  [SMALL_STATE(57)] = 2458,
  [SMALL_STATE(58)] = 2500,
  [SMALL_STATE(59)] = 2542,
  [SMALL_STATE(60)] = 2566,
  [SMALL_STATE(61)] = 2587,
  [SMALL_STATE(62)] = 2608,
  [SMALL_STATE(63)] = 2632,
  [SMALL_STATE(64)] = 2656,
  [SMALL_STATE(65)] = 2670,
  [SMALL_STATE(66)] = 2684,
  [SMALL_STATE(67)] = 2698,
  [SMALL_STATE(68)] = 2722,
  [SMALL_STATE(69)] = 2740,
  [SMALL_STATE(70)] = 2764,
  [SMALL_STATE(71)] = 2788,
  [SMALL_STATE(72)] = 2802,
  [SMALL_STATE(73)] = 2816,
  [SMALL_STATE(74)] = 2840,
  [SMALL_STATE(75)] = 2854,
  [SMALL_STATE(76)] = 2868,
  [SMALL_STATE(77)] = 2892,
  [SMALL_STATE(78)] = 2916,
  [SMALL_STATE(79)] = 2930,
  [SMALL_STATE(80)] = 2944,
  [SMALL_STATE(81)] = 2958,
  [SMALL_STATE(82)] = 2973,
  [SMALL_STATE(83)] = 2988,
  [SMALL_STATE(84)] = 3006,
  [SMALL_STATE(85)] = 3024,
  [SMALL_STATE(86)] = 3042,
  [SMALL_STATE(87)] = 3060,
  [SMALL_STATE(88)] = 3075,
  [SMALL_STATE(89)] = 3090,
  [SMALL_STATE(90)] = 3105,
  [SMALL_STATE(91)] = 3120,
  [SMALL_STATE(92)] = 3135,
  [SMALL_STATE(93)] = 3148,
  [SMALL_STATE(94)] = 3163,
  [SMALL_STATE(95)] = 3178,
  [SMALL_STATE(96)] = 3193,
  [SMALL_STATE(97)] = 3208,
  [SMALL_STATE(98)] = 3223,
  [SMALL_STATE(99)] = 3238,
  [SMALL_STATE(100)] = 3253,
  [SMALL_STATE(101)] = 3268,
  [SMALL_STATE(102)] = 3280,
  [SMALL_STATE(103)] = 3290,
  [SMALL_STATE(104)] = 3304,
  [SMALL_STATE(105)] = 3318,
  [SMALL_STATE(106)] = 3330,
  [SMALL_STATE(107)] = 3344,
  [SMALL_STATE(108)] = 3353,
  [SMALL_STATE(109)] = 3366,
  [SMALL_STATE(110)] = 3379,
  [SMALL_STATE(111)] = 3392,
  [SMALL_STATE(112)] = 3405,
  [SMALL_STATE(113)] = 3418,
  [SMALL_STATE(114)] = 3431,
  [SMALL_STATE(115)] = 3444,
  [SMALL_STATE(116)] = 3457,
  [SMALL_STATE(117)] = 3468,
  [SMALL_STATE(118)] = 3477,
  [SMALL_STATE(119)] = 3490,
  [SMALL_STATE(120)] = 3503,
  [SMALL_STATE(121)] = 3512,
  [SMALL_STATE(122)] = 3525,
  [SMALL_STATE(123)] = 3534,
  [SMALL_STATE(124)] = 3543,
  [SMALL_STATE(125)] = 3556,
  [SMALL_STATE(126)] = 3569,
  [SMALL_STATE(127)] = 3582,
  [SMALL_STATE(128)] = 3595,
  [SMALL_STATE(129)] = 3603,
  [SMALL_STATE(130)] = 3611,
  [SMALL_STATE(131)] = 3619,
  [SMALL_STATE(132)] = 3629,
  [SMALL_STATE(133)] = 3639,
  [SMALL_STATE(134)] = 3649,
  [SMALL_STATE(135)] = 3657,
  [SMALL_STATE(136)] = 3664,
  [SMALL_STATE(137)] = 3671,
  [SMALL_STATE(138)] = 3678,
  [SMALL_STATE(139)] = 3685,
  [SMALL_STATE(140)] = 3692,
  [SMALL_STATE(141)] = 3699,
  [SMALL_STATE(142)] = 3706,
  [SMALL_STATE(143)] = 3713,
  [SMALL_STATE(144)] = 3720,
  [SMALL_STATE(145)] = 3727,
  [SMALL_STATE(146)] = 3734,
  [SMALL_STATE(147)] = 3741,
  [SMALL_STATE(148)] = 3748,
  [SMALL_STATE(149)] = 3755,
  [SMALL_STATE(150)] = 3762,
  [SMALL_STATE(151)] = 3769,
  [SMALL_STATE(152)] = 3776,
  [SMALL_STATE(153)] = 3783,
  [SMALL_STATE(154)] = 3790,
  [SMALL_STATE(155)] = 3797,
  [SMALL_STATE(156)] = 3804,
  [SMALL_STATE(157)] = 3811,
  [SMALL_STATE(158)] = 3818,
  [SMALL_STATE(159)] = 3825,
  [SMALL_STATE(160)] = 3832,
  [SMALL_STATE(161)] = 3839,
  [SMALL_STATE(162)] = 3846,
  [SMALL_STATE(163)] = 3853,
  [SMALL_STATE(164)] = 3860,
  [SMALL_STATE(165)] = 3867,
  [SMALL_STATE(166)] = 3874,
  [SMALL_STATE(167)] = 3881,
  [SMALL_STATE(168)] = 3888,
  [SMALL_STATE(169)] = 3895,
  [SMALL_STATE(170)] = 3902,
  [SMALL_STATE(171)] = 3909,
  [SMALL_STATE(172)] = 3916,
  [SMALL_STATE(173)] = 3923,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT_EXTRA(),
  [5] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(82),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(129),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(132),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [17] = {.entry = {.count = 1, .reusable = false}}, SHIFT(162),
  [19] = {.entry = {.count = 1, .reusable = false}}, SHIFT(160),
  [21] = {.entry = {.count = 1, .reusable = false}}, SHIFT(6),
  [23] = {.entry = {.count = 1, .reusable = false}}, SHIFT(39),
  [25] = {.entry = {.count = 1, .reusable = false}}, SHIFT(81),
  [27] = {.entry = {.count = 1, .reusable = false}}, SHIFT(38),
  [29] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [31] = {.entry = {.count = 1, .reusable = false}}, SHIFT(129),
  [33] = {.entry = {.count = 1, .reusable = false}}, SHIFT(27),
  [35] = {.entry = {.count = 1, .reusable = false}}, SHIFT(30),
  [37] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [39] = {.entry = {.count = 1, .reusable = true}}, SHIFT(113),
  [41] = {.entry = {.count = 1, .reusable = true}}, SHIFT(106),
  [43] = {.entry = {.count = 1, .reusable = true}}, SHIFT(159),
  [45] = {.entry = {.count = 1, .reusable = true}}, SHIFT(150),
  [47] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__compound_statement_repeat1, 2), SHIFT_REPEAT(50),
  [50] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__compound_statement_repeat1, 2),
  [52] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__compound_statement_repeat1, 2), SHIFT_REPEAT(162),
  [55] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__compound_statement_repeat1, 2), SHIFT_REPEAT(160),
  [58] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__compound_statement_repeat1, 2), SHIFT_REPEAT(6),
  [61] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__compound_statement_repeat1, 2), SHIFT_REPEAT(39),
  [64] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__compound_statement_repeat1, 2), SHIFT_REPEAT(81),
  [67] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__compound_statement_repeat1, 2), SHIFT_REPEAT(38),
  [70] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__compound_statement_repeat1, 2), SHIFT_REPEAT(38),
  [73] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__compound_statement_repeat1, 2), SHIFT_REPEAT(129),
  [76] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__compound_statement_repeat1, 2), SHIFT_REPEAT(27),
  [79] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__compound_statement_repeat1, 2), SHIFT_REPEAT(30),
  [82] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__compound_statement_repeat1, 2), SHIFT_REPEAT(30),
  [85] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__compound_statement_repeat1, 2), SHIFT_REPEAT(113),
  [88] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__compound_statement_repeat1, 2), SHIFT_REPEAT(106),
  [91] = {.entry = {.count = 1, .reusable = true}}, SHIFT(123),
  [93] = {.entry = {.count = 1, .reusable = true}}, SHIFT(107),
  [95] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__expression, 1),
  [97] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [99] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__expression, 1),
  [101] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_funcall_expression, 3),
  [103] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_funcall_expression, 3),
  [105] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_binary_expression, 3),
  [107] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [109] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [111] = {.entry = {.count = 1, .reusable = false}}, SHIFT(48),
  [113] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_binary_expression, 3),
  [115] = {.entry = {.count = 1, .reusable = false}}, SHIFT(43),
  [117] = {.entry = {.count = 1, .reusable = false}}, SHIFT(42),
  [119] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [121] = {.entry = {.count = 1, .reusable = false}}, SHIFT(41),
  [123] = {.entry = {.count = 1, .reusable = false}}, SHIFT(44),
  [125] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [127] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__string_literal, 3),
  [129] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__string_literal, 3),
  [131] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__vector_literal, 5),
  [133] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__vector_literal, 5),
  [135] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_funcall_expression, 5),
  [137] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_funcall_expression, 5),
  [139] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__compound_statement_repeat1, 2),
  [141] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parenthesized_expression, 3),
  [143] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_parenthesized_expression, 3),
  [145] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__string_literal, 4),
  [147] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__string_literal, 4),
  [149] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_funcall_expression, 4),
  [151] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_funcall_expression, 4),
  [153] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_unary_expression, 2),
  [155] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_unary_expression, 2),
  [157] = {.entry = {.count = 1, .reusable = false}}, SHIFT(51),
  [159] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_literal, 1),
  [161] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_literal, 1),
  [163] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [165] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [167] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [169] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__expression_statement, 1),
  [171] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_assignment_statement, 3),
  [173] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_return_statement, 2),
  [175] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [177] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [179] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_funcall_expression_repeat1, 2),
  [181] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1),
  [183] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [185] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2),
  [187] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(82),
  [190] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(129),
  [193] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [195] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [197] = {.entry = {.count = 1, .reusable = true}}, SHIFT(122),
  [199] = {.entry = {.count = 1, .reusable = true}}, SHIFT(157),
  [201] = {.entry = {.count = 1, .reusable = true}}, SHIFT(161),
  [203] = {.entry = {.count = 1, .reusable = true}}, SHIFT(155),
  [205] = {.entry = {.count = 1, .reusable = true}}, SHIFT(170),
  [207] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_field_definition, 6),
  [209] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable_definition, 5),
  [211] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_field_definition, 4),
  [213] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable_definition, 3),
  [215] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable_definition, 6),
  [217] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_field_definition, 7),
  [219] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_definition, 6),
  [221] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_declaration, 4),
  [223] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_definition, 11),
  [225] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_constant_definition, 5),
  [227] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable_definition_statement, 7),
  [229] = {.entry = {.count = 1, .reusable = true}}, SHIFT(63),
  [231] = {.entry = {.count = 1, .reusable = true}}, SHIFT(148),
  [233] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable_definition_statement, 4),
  [235] = {.entry = {.count = 1, .reusable = true}}, SHIFT(70),
  [237] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable_definition_statement, 5),
  [239] = {.entry = {.count = 1, .reusable = true}}, SHIFT(67),
  [241] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable_definition_statement, 6),
  [243] = {.entry = {.count = 1, .reusable = true}}, SHIFT(73),
  [245] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_variable_definition_statement_repeat1, 2),
  [247] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_variable_definition_statement_repeat1, 2), SHIFT_REPEAT(148),
  [250] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable_definition_statement, 3),
  [252] = {.entry = {.count = 1, .reusable = true}}, SHIFT(77),
  [254] = {.entry = {.count = 1, .reusable = true}}, SHIFT(137),
  [256] = {.entry = {.count = 1, .reusable = true}}, SHIFT(76),
  [258] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable_definition_statement, 8),
  [260] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable_definition_statement, 2),
  [262] = {.entry = {.count = 1, .reusable = true}}, SHIFT(62),
  [264] = {.entry = {.count = 1, .reusable = true}}, SHIFT(135),
  [266] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable_definition_statement, 10),
  [268] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable_definition_statement, 9),
  [270] = {.entry = {.count = 1, .reusable = true}}, SHIFT(153),
  [272] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_variable_definition_statement_repeat1, 4),
  [274] = {.entry = {.count = 1, .reusable = false}}, SHIFT(104),
  [276] = {.entry = {.count = 1, .reusable = false}}, SHIFT(149),
  [278] = {.entry = {.count = 1, .reusable = false}}, SHIFT_EXTRA(),
  [280] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__string_literal_repeat1, 2), SHIFT_REPEAT(104),
  [283] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__string_literal_repeat1, 2),
  [285] = {.entry = {.count = 1, .reusable = true}}, SHIFT(146),
  [287] = {.entry = {.count = 1, .reusable = false}}, SHIFT(103),
  [289] = {.entry = {.count = 1, .reusable = false}}, SHIFT(166),
  [291] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__compound_statement, 3),
  [293] = {.entry = {.count = 1, .reusable = false}}, SHIFT(136),
  [295] = {.entry = {.count = 1, .reusable = true}}, SHIFT(136),
  [297] = {.entry = {.count = 1, .reusable = true}}, SHIFT(65),
  [299] = {.entry = {.count = 1, .reusable = true}}, SHIFT(165),
  [301] = {.entry = {.count = 1, .reusable = true}}, SHIFT(64),
  [303] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [305] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_parameter_list_repeat1, 2), SHIFT_REPEAT(68),
  [308] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_parameter_list_repeat1, 2),
  [310] = {.entry = {.count = 1, .reusable = false}}, SHIFT(114),
  [312] = {.entry = {.count = 1, .reusable = true}}, SHIFT(114),
  [314] = {.entry = {.count = 1, .reusable = false}}, SHIFT(108),
  [316] = {.entry = {.count = 1, .reusable = true}}, SHIFT(108),
  [318] = {.entry = {.count = 1, .reusable = true}}, SHIFT(72),
  [320] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_if_statement, 5),
  [322] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [324] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_if_statement, 7),
  [326] = {.entry = {.count = 1, .reusable = true}}, SHIFT(61),
  [328] = {.entry = {.count = 1, .reusable = true}}, SHIFT(164),
  [330] = {.entry = {.count = 1, .reusable = true}}, SHIFT(74),
  [332] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_while_statement, 5),
  [334] = {.entry = {.count = 1, .reusable = true}}, SHIFT(59),
  [336] = {.entry = {.count = 1, .reusable = true}}, SHIFT(127),
  [338] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_do_while_statement, 6),
  [340] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__compound_statement, 2),
  [342] = {.entry = {.count = 1, .reusable = true}}, SHIFT(60),
  [344] = {.entry = {.count = 1, .reusable = true}}, SHIFT(171),
  [346] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_funcall_expression_repeat1, 2), SHIFT_REPEAT(52),
  [349] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_variable_definition_repeat1, 2),
  [351] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_variable_definition_repeat1, 2), SHIFT_REPEAT(165),
  [354] = {.entry = {.count = 1, .reusable = true}}, SHIFT(71),
  [356] = {.entry = {.count = 1, .reusable = true}}, SHIFT(69),
  [358] = {.entry = {.count = 1, .reusable = true}}, SHIFT(168),
  [360] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_simple_type, 1),
  [362] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__parameter, 2),
  [364] = {.entry = {.count = 1, .reusable = true}}, SHIFT(66),
  [366] = {.entry = {.count = 1, .reusable = true}}, SHIFT(151),
  [368] = {.entry = {.count = 1, .reusable = true}}, SHIFT(142),
  [370] = {.entry = {.count = 1, .reusable = true}}, SHIFT(78),
  [372] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [374] = {.entry = {.count = 1, .reusable = true}}, SHIFT(84),
  [376] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [378] = {.entry = {.count = 1, .reusable = true}}, SHIFT(85),
  [380] = {.entry = {.count = 1, .reusable = true}}, SHIFT(91),
  [382] = {.entry = {.count = 1, .reusable = true}}, SHIFT(173),
  [384] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [386] = {.entry = {.count = 1, .reusable = true}}, SHIFT(169),
  [388] = {.entry = {.count = 1, .reusable = true}}, SHIFT(167),
  [390] = {.entry = {.count = 1, .reusable = true}}, SHIFT(80),
  [392] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [394] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [396] = {.entry = {.count = 1, .reusable = true}}, SHIFT(86),
  [398] = {.entry = {.count = 1, .reusable = true}}, SHIFT(133),
  [400] = {.entry = {.count = 1, .reusable = true}}, SHIFT(92),
  [402] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [404] = {.entry = {.count = 1, .reusable = true}}, SHIFT(79),
  [406] = {.entry = {.count = 1, .reusable = true}}, SHIFT(110),
  [408] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter_list, 6),
  [410] = {.entry = {.count = 1, .reusable = true}}, SHIFT(83),
  [412] = {.entry = {.count = 1, .reusable = true}}, SHIFT(131),
  [414] = {.entry = {.count = 1, .reusable = true}}, SHIFT(152),
  [416] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter_list, 5),
  [418] = {.entry = {.count = 1, .reusable = true}}, SHIFT(172),
  [420] = {.entry = {.count = 1, .reusable = true}}, SHIFT(95),
  [422] = {.entry = {.count = 1, .reusable = true}}, SHIFT(75),
  [424] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [426] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter_list, 2),
  [428] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [430] = {.entry = {.count = 1, .reusable = true}}, SHIFT(130),
  [432] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter_list, 3),
  [434] = {.entry = {.count = 1, .reusable = true}}, SHIFT(128),
  [436] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [438] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_frame_identifier, 2),
  [440] = {.entry = {.count = 1, .reusable = true}}, SHIFT(109),
  [442] = {.entry = {.count = 1, .reusable = true}}, SHIFT(145),
  [444] = {.entry = {.count = 1, .reusable = true}}, SHIFT(156),
  [446] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter_list, 4),
  [448] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
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
