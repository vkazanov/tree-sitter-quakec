#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 134
#define LARGE_STATE_COUNT 10
#define SYMBOL_COUNT 80
#define ALIAS_COUNT 0
#define TOKEN_COUNT 46
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 10
#define PRODUCTION_ID_COUNT 1

enum {
  anon_sym_SEMI = 1,
  anon_sym_EQ = 2,
  anon_sym_local = 3,
  anon_sym_COMMA = 4,
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
  anon_sym_DASH = 20,
  anon_sym_PLUS = 21,
  anon_sym_STAR = 22,
  anon_sym_SLASH = 23,
  anon_sym_PIPE_PIPE = 24,
  anon_sym_AMP_AMP = 25,
  anon_sym_BANG = 26,
  anon_sym_PIPE = 27,
  anon_sym_AMP = 28,
  anon_sym_EQ_EQ = 29,
  anon_sym_BANG_EQ = 30,
  anon_sym_GT = 31,
  anon_sym_GT_EQ = 32,
  anon_sym_LT_EQ = 33,
  anon_sym_LT = 34,
  sym_identifier = 35,
  aux_sym__numeric_literal_token1 = 36,
  aux_sym__numeric_literal_token2 = 37,
  aux_sym__vector_literal_token1 = 38,
  aux_sym__vector_literal_token2 = 39,
  anon_sym_DQUOTE = 40,
  aux_sym__string_literal_token1 = 41,
  aux_sym__string_literal_token2 = 42,
  aux_sym__string_literal_token3 = 43,
  sym__builtin_literal = 44,
  sym_comment = 45,
  sym_source_file = 46,
  sym__definition = 47,
  sym_function_declaration = 48,
  sym_function_definition = 49,
  sym_constant_definition = 50,
  sym_variable_definition = 51,
  sym_simple_type = 52,
  sym_parameter_list = 53,
  sym__parameter = 54,
  sym__statement = 55,
  sym__compound_statement = 56,
  sym__simple_statement = 57,
  sym_assignment_statement = 58,
  sym_if_statement = 59,
  sym_while_statement = 60,
  sym_do_while_statement = 61,
  sym_return_statement = 62,
  sym__variable_definition_statement = 63,
  sym__expression_statement = 64,
  sym__expression = 65,
  sym_unary_expression = 66,
  sym_binary_expression = 67,
  sym_funcall_expression = 68,
  sym_parenthesized_expression = 69,
  sym_literal = 70,
  sym__numeric_literal = 71,
  sym__vector_literal = 72,
  sym__string_literal = 73,
  aux_sym_source_file_repeat1 = 74,
  aux_sym_variable_definition_repeat1 = 75,
  aux_sym_parameter_list_repeat1 = 76,
  aux_sym__compound_statement_repeat1 = 77,
  aux_sym_funcall_expression_repeat1 = 78,
  aux_sym__string_literal_repeat1 = 79,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [anon_sym_SEMI] = ";",
  [anon_sym_EQ] = "=",
  [anon_sym_local] = "local",
  [anon_sym_COMMA] = ",",
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
  [sym_variable_definition] = "variable_definition_statement",
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
  [sym__variable_definition_statement] = "_variable_definition_statement",
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
  [aux_sym_funcall_expression_repeat1] = "funcall_expression_repeat1",
  [aux_sym__string_literal_repeat1] = "_string_literal_repeat1",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [anon_sym_SEMI] = anon_sym_SEMI,
  [anon_sym_EQ] = anon_sym_EQ,
  [anon_sym_local] = anon_sym_local,
  [anon_sym_COMMA] = anon_sym_COMMA,
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
  [sym__variable_definition_statement] = sym__variable_definition_statement,
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
  [anon_sym_local] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COMMA] = {
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
  [sym__variable_definition_statement] = {
    .visible = false,
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
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(79);
      if (lookahead == '!') ADVANCE(117);
      if (lookahead == '"') ADVANCE(168);
      if (lookahead == '#') ADVANCE(69);
      if (lookahead == '&') ADVANCE(119);
      if (lookahead == '(') ADVANCE(97);
      if (lookahead == ')') ADVANCE(98);
      if (lookahead == '*') ADVANCE(113);
      if (lookahead == '+') ADVANCE(112);
      if (lookahead == ',') ADVANCE(84);
      if (lookahead == '-') ADVANCE(111);
      if (lookahead == '/') ADVANCE(114);
      if (lookahead == ';') ADVANCE(80);
      if (lookahead == '<') ADVANCE(125);
      if (lookahead == '=') ADVANCE(81);
      if (lookahead == '>') ADVANCE(122);
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
      if (lookahead == '{') ADVANCE(99);
      if (lookahead == '|') ADVANCE(118);
      if (lookahead == '}') ADVANCE(100);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(164);
      END_STATE();
    case 1:
      if (lookahead == '\n') SKIP(13)
      END_STATE();
    case 2:
      if (lookahead == '\n') SKIP(13)
      if (lookahead == '\r') SKIP(1)
      if (lookahead == 'n' ||
          lookahead == 'r') ADVANCE(174);
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
      if (lookahead == '!') ADVANCE(117);
      if (lookahead == '"') ADVANCE(168);
      if (lookahead == '#') ADVANCE(69);
      if (lookahead == '&') ADVANCE(119);
      if (lookahead == '(') ADVANCE(97);
      if (lookahead == ')') ADVANCE(98);
      if (lookahead == '*') ADVANCE(113);
      if (lookahead == '+') ADVANCE(112);
      if (lookahead == ',') ADVANCE(84);
      if (lookahead == '-') ADVANCE(111);
      if (lookahead == '/') ADVANCE(114);
      if (lookahead == ';') ADVANCE(80);
      if (lookahead == '<') ADVANCE(125);
      if (lookahead == '=') ADVANCE(81);
      if (lookahead == '>') ADVANCE(122);
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
      if (lookahead == '{') ADVANCE(99);
      if (lookahead == '|') ADVANCE(118);
      if (lookahead == '}') ADVANCE(100);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(13)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(164);
      END_STATE();
    case 14:
      if (lookahead == '!') ADVANCE(117);
      if (lookahead == '&') ADVANCE(119);
      if (lookahead == '(') ADVANCE(97);
      if (lookahead == ')') ADVANCE(98);
      if (lookahead == '*') ADVANCE(113);
      if (lookahead == '+') ADVANCE(112);
      if (lookahead == ',') ADVANCE(84);
      if (lookahead == '-') ADVANCE(110);
      if (lookahead == '/') ADVANCE(114);
      if (lookahead == ';') ADVANCE(80);
      if (lookahead == '<') ADVANCE(125);
      if (lookahead == '=') ADVANCE(81);
      if (lookahead == '>') ADVANCE(122);
      if (lookahead == '\\') SKIP(6)
      if (lookahead == 'e') ADVANCE(45);
      if (lookahead == 'w') ADVANCE(40);
      if (lookahead == '|') ADVANCE(118);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(14)
      END_STATE();
    case 15:
      if (lookahead == '"') ADVANCE(168);
      if (lookahead == '#') ADVANCE(69);
      if (lookahead == '(') ADVANCE(97);
      if (lookahead == '+') ADVANCE(112);
      if (lookahead == '-') ADVANCE(111);
      if (lookahead == '/') ADVANCE(17);
      if (lookahead == '\\') SKIP(4)
      if (lookahead == '`') ADVANCE(20);
      if (lookahead == 'd') ADVANCE(147);
      if (lookahead == 'e') ADVANCE(146);
      if (lookahead == 'f') ADVANCE(143);
      if (lookahead == 'i') ADVANCE(134);
      if (lookahead == 'l') ADVANCE(148);
      if (lookahead == 'r') ADVANCE(133);
      if (lookahead == 's') ADVANCE(154);
      if (lookahead == 'v') ADVANCE(132);
      if (lookahead == 'w') ADVANCE(136);
      if (lookahead == '{') ADVANCE(99);
      if (lookahead == '}') ADVANCE(100);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(15)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(164);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(163);
      END_STATE();
    case 16:
      if (lookahead == '"') ADVANCE(168);
      if (lookahead == '(') ADVANCE(97);
      if (lookahead == ')') ADVANCE(98);
      if (lookahead == '+') ADVANCE(112);
      if (lookahead == '-') ADVANCE(111);
      if (lookahead == '/') ADVANCE(17);
      if (lookahead == '\\') SKIP(8)
      if (lookahead == '`') ADVANCE(20);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(16)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(164);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(163);
      END_STATE();
    case 17:
      if (lookahead == '*') ADVANCE(19);
      if (lookahead == '/') ADVANCE(186);
      END_STATE();
    case 18:
      if (lookahead == '*') ADVANCE(18);
      if (lookahead == '/') ADVANCE(185);
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
      if (lookahead == '`') ADVANCE(166);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(27);
      END_STATE();
    case 28:
      if (lookahead == '`') ADVANCE(167);
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
      if (lookahead == 'd') ADVANCE(85);
      END_STATE();
    case 34:
      if (lookahead == 'e') ADVANCE(103);
      END_STATE();
    case 35:
      if (lookahead == 'e') ADVANCE(104);
      END_STATE();
    case 36:
      if (lookahead == 'e') ADVANCE(32);
      if (lookahead == 'o') ADVANCE(41);
      END_STATE();
    case 37:
      if (lookahead == 'e') ADVANCE(62);
      END_STATE();
    case 38:
      if (lookahead == 'f') ADVANCE(101);
      if (lookahead == 'n') ADVANCE(61);
      END_STATE();
    case 39:
      if (lookahead == 'g') ADVANCE(93);
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
      if (lookahead == 'l') ADVANCE(82);
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
      if (lookahead == 'n') ADVANCE(108);
      END_STATE();
    case 52:
      if (lookahead == 'o') ADVANCE(106);
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
      if (lookahead == 'r') ADVANCE(91);
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
      if (lookahead == 't') ADVANCE(95);
      END_STATE();
    case 62:
      if (lookahead == 't') ADVANCE(67);
      END_STATE();
    case 63:
      if (lookahead == 't') ADVANCE(68);
      END_STATE();
    case 64:
      if (lookahead == 't') ADVANCE(89);
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
      if (lookahead == 'y') ADVANCE(87);
      END_STATE();
    case 69:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(184);
      END_STATE();
    case 70:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(9);
      END_STATE();
    case 71:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(165);
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
      if (lookahead == '=') ADVANCE(120);
      END_STATE();
    case 82:
      ACCEPT_TOKEN(anon_sym_local);
      END_STATE();
    case 83:
      ACCEPT_TOKEN(anon_sym_local);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(163);
      END_STATE();
    case 84:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 85:
      ACCEPT_TOKEN(anon_sym_void);
      END_STATE();
    case 86:
      ACCEPT_TOKEN(anon_sym_void);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(163);
      END_STATE();
    case 87:
      ACCEPT_TOKEN(anon_sym_entity);
      END_STATE();
    case 88:
      ACCEPT_TOKEN(anon_sym_entity);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(163);
      END_STATE();
    case 89:
      ACCEPT_TOKEN(anon_sym_float);
      END_STATE();
    case 90:
      ACCEPT_TOKEN(anon_sym_float);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(163);
      END_STATE();
    case 91:
      ACCEPT_TOKEN(anon_sym_vector);
      END_STATE();
    case 92:
      ACCEPT_TOKEN(anon_sym_vector);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(163);
      END_STATE();
    case 93:
      ACCEPT_TOKEN(anon_sym_string);
      END_STATE();
    case 94:
      ACCEPT_TOKEN(anon_sym_string);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(163);
      END_STATE();
    case 95:
      ACCEPT_TOKEN(anon_sym_int);
      END_STATE();
    case 96:
      ACCEPT_TOKEN(anon_sym_int);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(163);
      END_STATE();
    case 97:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 98:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 99:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 100:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 101:
      ACCEPT_TOKEN(anon_sym_if);
      END_STATE();
    case 102:
      ACCEPT_TOKEN(anon_sym_if);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(163);
      END_STATE();
    case 103:
      ACCEPT_TOKEN(anon_sym_else);
      END_STATE();
    case 104:
      ACCEPT_TOKEN(anon_sym_while);
      END_STATE();
    case 105:
      ACCEPT_TOKEN(anon_sym_while);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(163);
      END_STATE();
    case 106:
      ACCEPT_TOKEN(anon_sym_do);
      END_STATE();
    case 107:
      ACCEPT_TOKEN(anon_sym_do);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(163);
      END_STATE();
    case 108:
      ACCEPT_TOKEN(anon_sym_return);
      END_STATE();
    case 109:
      ACCEPT_TOKEN(anon_sym_return);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(163);
      END_STATE();
    case 110:
      ACCEPT_TOKEN(anon_sym_DASH);
      END_STATE();
    case 111:
      ACCEPT_TOKEN(anon_sym_DASH);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(164);
      END_STATE();
    case 112:
      ACCEPT_TOKEN(anon_sym_PLUS);
      END_STATE();
    case 113:
      ACCEPT_TOKEN(anon_sym_STAR);
      END_STATE();
    case 114:
      ACCEPT_TOKEN(anon_sym_SLASH);
      if (lookahead == '*') ADVANCE(19);
      if (lookahead == '/') ADVANCE(186);
      END_STATE();
    case 115:
      ACCEPT_TOKEN(anon_sym_PIPE_PIPE);
      END_STATE();
    case 116:
      ACCEPT_TOKEN(anon_sym_AMP_AMP);
      END_STATE();
    case 117:
      ACCEPT_TOKEN(anon_sym_BANG);
      if (lookahead == '=') ADVANCE(121);
      END_STATE();
    case 118:
      ACCEPT_TOKEN(anon_sym_PIPE);
      if (lookahead == '|') ADVANCE(115);
      END_STATE();
    case 119:
      ACCEPT_TOKEN(anon_sym_AMP);
      if (lookahead == '&') ADVANCE(116);
      END_STATE();
    case 120:
      ACCEPT_TOKEN(anon_sym_EQ_EQ);
      END_STATE();
    case 121:
      ACCEPT_TOKEN(anon_sym_BANG_EQ);
      END_STATE();
    case 122:
      ACCEPT_TOKEN(anon_sym_GT);
      if (lookahead == '=') ADVANCE(123);
      END_STATE();
    case 123:
      ACCEPT_TOKEN(anon_sym_GT_EQ);
      END_STATE();
    case 124:
      ACCEPT_TOKEN(anon_sym_LT_EQ);
      END_STATE();
    case 125:
      ACCEPT_TOKEN(anon_sym_LT);
      if (lookahead == '=') ADVANCE(124);
      END_STATE();
    case 126:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(141);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(163);
      END_STATE();
    case 127:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(158);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(163);
      END_STATE();
    case 128:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'c') ADVANCE(126);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(163);
      END_STATE();
    case 129:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'c') ADVANCE(160);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(163);
      END_STATE();
    case 130:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'd') ADVANCE(86);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(163);
      END_STATE();
    case 131:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(105);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(163);
      END_STATE();
    case 132:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(129);
      if (lookahead == 'o') ADVANCE(137);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(163);
      END_STATE();
    case 133:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(156);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(163);
      END_STATE();
    case 134:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'f') ADVANCE(102);
      if (lookahead == 'n') ADVANCE(155);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(163);
      END_STATE();
    case 135:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'g') ADVANCE(94);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(163);
      END_STATE();
    case 136:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'h') ADVANCE(139);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(163);
      END_STATE();
    case 137:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(130);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(163);
      END_STATE();
    case 138:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(144);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(163);
      END_STATE();
    case 139:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(142);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(163);
      END_STATE();
    case 140:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(157);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(163);
      END_STATE();
    case 141:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(83);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(163);
      END_STATE();
    case 142:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(131);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(163);
      END_STATE();
    case 143:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(149);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(163);
      END_STATE();
    case 144:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(135);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(163);
      END_STATE();
    case 145:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(109);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(163);
      END_STATE();
    case 146:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(159);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(163);
      END_STATE();
    case 147:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(107);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(163);
      END_STATE();
    case 148:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(128);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(163);
      END_STATE();
    case 149:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(127);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(163);
      END_STATE();
    case 150:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(151);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(163);
      END_STATE();
    case 151:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(92);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(163);
      END_STATE();
    case 152:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(145);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(163);
      END_STATE();
    case 153:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(138);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(163);
      END_STATE();
    case 154:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(153);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(163);
      END_STATE();
    case 155:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(96);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(163);
      END_STATE();
    case 156:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(161);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(163);
      END_STATE();
    case 157:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(162);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(163);
      END_STATE();
    case 158:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(90);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(163);
      END_STATE();
    case 159:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(140);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(163);
      END_STATE();
    case 160:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(150);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(163);
      END_STATE();
    case 161:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'u') ADVANCE(152);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(163);
      END_STATE();
    case 162:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'y') ADVANCE(88);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(163);
      END_STATE();
    case 163:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(163);
      END_STATE();
    case 164:
      ACCEPT_TOKEN(aux_sym__numeric_literal_token1);
      if (lookahead == '.') ADVANCE(71);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(164);
      END_STATE();
    case 165:
      ACCEPT_TOKEN(aux_sym__numeric_literal_token2);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(165);
      END_STATE();
    case 166:
      ACCEPT_TOKEN(aux_sym__vector_literal_token1);
      END_STATE();
    case 167:
      ACCEPT_TOKEN(aux_sym__vector_literal_token2);
      END_STATE();
    case 168:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 169:
      ACCEPT_TOKEN(aux_sym__string_literal_token1);
      if (lookahead == '*') ADVANCE(171);
      if (lookahead == '/') ADVANCE(173);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(173);
      END_STATE();
    case 170:
      ACCEPT_TOKEN(aux_sym__string_literal_token1);
      if (lookahead == '*') ADVANCE(170);
      if (lookahead == '/') ADVANCE(173);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(171);
      END_STATE();
    case 171:
      ACCEPT_TOKEN(aux_sym__string_literal_token1);
      if (lookahead == '*') ADVANCE(170);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(171);
      END_STATE();
    case 172:
      ACCEPT_TOKEN(aux_sym__string_literal_token1);
      if (lookahead == '/') ADVANCE(169);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(172);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(173);
      END_STATE();
    case 173:
      ACCEPT_TOKEN(aux_sym__string_literal_token1);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(173);
      END_STATE();
    case 174:
      ACCEPT_TOKEN(aux_sym__string_literal_token2);
      END_STATE();
    case 175:
      ACCEPT_TOKEN(aux_sym__string_literal_token3);
      if (lookahead == '\n') ADVANCE(182);
      if (lookahead == '\r') ADVANCE(177);
      if (lookahead == 'n' ||
          lookahead == 'r') ADVANCE(174);
      if (lookahead != 0 &&
          lookahead != '"') ADVANCE(183);
      END_STATE();
    case 176:
      ACCEPT_TOKEN(aux_sym__string_literal_token3);
      if (lookahead == '\n') ADVANCE(182);
      if (lookahead == '/') ADVANCE(169);
      if (lookahead == '\\') ADVANCE(175);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(172);
      if (lookahead != 0 &&
          lookahead != '"') ADVANCE(173);
      END_STATE();
    case 177:
      ACCEPT_TOKEN(aux_sym__string_literal_token3);
      if (lookahead == '\n') ADVANCE(182);
      if (lookahead != 0 &&
          lookahead != '"') ADVANCE(183);
      END_STATE();
    case 178:
      ACCEPT_TOKEN(aux_sym__string_literal_token3);
      if (lookahead == '\n') ADVANCE(183);
      if (lookahead == '"') ADVANCE(186);
      if (lookahead != 0) ADVANCE(178);
      END_STATE();
    case 179:
      ACCEPT_TOKEN(aux_sym__string_literal_token3);
      if (lookahead == '"') ADVANCE(19);
      if (lookahead == '*') ADVANCE(179);
      if (lookahead == '/') ADVANCE(183);
      if (lookahead != 0) ADVANCE(180);
      END_STATE();
    case 180:
      ACCEPT_TOKEN(aux_sym__string_literal_token3);
      if (lookahead == '"') ADVANCE(19);
      if (lookahead == '*') ADVANCE(179);
      if (lookahead != 0) ADVANCE(180);
      END_STATE();
    case 181:
      ACCEPT_TOKEN(aux_sym__string_literal_token3);
      if (lookahead == '*') ADVANCE(180);
      if (lookahead == '/') ADVANCE(178);
      if (lookahead != 0 &&
          lookahead != '"') ADVANCE(183);
      END_STATE();
    case 182:
      ACCEPT_TOKEN(aux_sym__string_literal_token3);
      if (lookahead == '/') ADVANCE(181);
      if (lookahead == '\\') ADVANCE(175);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(182);
      if (lookahead != 0 &&
          lookahead != '"') ADVANCE(183);
      END_STATE();
    case 183:
      ACCEPT_TOKEN(aux_sym__string_literal_token3);
      if (lookahead != 0 &&
          lookahead != '"') ADVANCE(183);
      END_STATE();
    case 184:
      ACCEPT_TOKEN(sym__builtin_literal);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(184);
      END_STATE();
    case 185:
      ACCEPT_TOKEN(sym_comment);
      END_STATE();
    case 186:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(186);
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
  [31] = {.lex_state = 14},
  [32] = {.lex_state = 16},
  [33] = {.lex_state = 16},
  [34] = {.lex_state = 16},
  [35] = {.lex_state = 16},
  [36] = {.lex_state = 16},
  [37] = {.lex_state = 16},
  [38] = {.lex_state = 16},
  [39] = {.lex_state = 16},
  [40] = {.lex_state = 16},
  [41] = {.lex_state = 16},
  [42] = {.lex_state = 14},
  [43] = {.lex_state = 16},
  [44] = {.lex_state = 14},
  [45] = {.lex_state = 16},
  [46] = {.lex_state = 16},
  [47] = {.lex_state = 16},
  [48] = {.lex_state = 14},
  [49] = {.lex_state = 16},
  [50] = {.lex_state = 14},
  [51] = {.lex_state = 14},
  [52] = {.lex_state = 14},
  [53] = {.lex_state = 14},
  [54] = {.lex_state = 14},
  [55] = {.lex_state = 0},
  [56] = {.lex_state = 0},
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
  [90] = {.lex_state = 176},
  [91] = {.lex_state = 0},
  [92] = {.lex_state = 176},
  [93] = {.lex_state = 176},
  [94] = {.lex_state = 0},
  [95] = {.lex_state = 0},
  [96] = {.lex_state = 16},
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
  [107] = {.lex_state = 16},
  [108] = {.lex_state = 0},
  [109] = {.lex_state = 0},
  [110] = {.lex_state = 0},
  [111] = {.lex_state = 0},
  [112] = {.lex_state = 16},
  [113] = {.lex_state = 16},
  [114] = {.lex_state = 16},
  [115] = {.lex_state = 0},
  [116] = {.lex_state = 16},
  [117] = {.lex_state = 16},
  [118] = {.lex_state = 0},
  [119] = {.lex_state = 0},
  [120] = {.lex_state = 0},
  [121] = {.lex_state = 16},
  [122] = {.lex_state = 0},
  [123] = {.lex_state = 16},
  [124] = {.lex_state = 0},
  [125] = {.lex_state = 16},
  [126] = {.lex_state = 0},
  [127] = {.lex_state = 16},
  [128] = {.lex_state = 16},
  [129] = {.lex_state = 16},
  [130] = {.lex_state = 16},
  [131] = {.lex_state = 0},
  [132] = {.lex_state = 0},
  [133] = {.lex_state = 0},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [anon_sym_SEMI] = ACTIONS(1),
    [anon_sym_EQ] = ACTIONS(1),
    [anon_sym_local] = ACTIONS(1),
    [anon_sym_COMMA] = ACTIONS(1),
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
    [sym_source_file] = STATE(133),
    [sym__definition] = STATE(56),
    [sym_function_declaration] = STATE(56),
    [sym_function_definition] = STATE(56),
    [sym_constant_definition] = STATE(56),
    [sym_simple_type] = STATE(96),
    [aux_sym_source_file_repeat1] = STATE(56),
    [ts_builtin_sym_end] = ACTIONS(5),
    [anon_sym_void] = ACTIONS(7),
    [anon_sym_entity] = ACTIONS(7),
    [anon_sym_float] = ACTIONS(7),
    [anon_sym_vector] = ACTIONS(7),
    [anon_sym_string] = ACTIONS(7),
    [anon_sym_int] = ACTIONS(7),
    [sym_comment] = ACTIONS(3),
  },
  [2] = {
    [sym_variable_definition] = STATE(124),
    [sym_simple_type] = STATE(125),
    [sym__statement] = STATE(124),
    [sym__compound_statement] = STATE(124),
    [sym__simple_statement] = STATE(124),
    [sym_assignment_statement] = STATE(124),
    [sym_if_statement] = STATE(124),
    [sym_while_statement] = STATE(124),
    [sym_do_while_statement] = STATE(124),
    [sym_return_statement] = STATE(124),
    [sym__variable_definition_statement] = STATE(124),
    [sym__expression_statement] = STATE(124),
    [sym__expression] = STATE(42),
    [sym_unary_expression] = STATE(42),
    [sym_binary_expression] = STATE(42),
    [sym_funcall_expression] = STATE(42),
    [sym_parenthesized_expression] = STATE(42),
    [sym_literal] = STATE(42),
    [sym__numeric_literal] = STATE(20),
    [sym__vector_literal] = STATE(20),
    [sym__string_literal] = STATE(20),
    [anon_sym_local] = ACTIONS(9),
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
    [anon_sym_DASH] = ACTIONS(25),
    [anon_sym_PLUS] = ACTIONS(27),
    [sym_identifier] = ACTIONS(29),
    [aux_sym__numeric_literal_token1] = ACTIONS(31),
    [aux_sym__numeric_literal_token2] = ACTIONS(33),
    [aux_sym__vector_literal_token1] = ACTIONS(33),
    [aux_sym__vector_literal_token2] = ACTIONS(33),
    [anon_sym_DQUOTE] = ACTIONS(35),
    [sym__builtin_literal] = ACTIONS(37),
    [sym_comment] = ACTIONS(3),
  },
  [3] = {
    [sym_variable_definition] = STATE(101),
    [sym_simple_type] = STATE(125),
    [sym__statement] = STATE(101),
    [sym__compound_statement] = STATE(101),
    [sym__simple_statement] = STATE(101),
    [sym_assignment_statement] = STATE(101),
    [sym_if_statement] = STATE(101),
    [sym_while_statement] = STATE(101),
    [sym_do_while_statement] = STATE(101),
    [sym_return_statement] = STATE(101),
    [sym__variable_definition_statement] = STATE(101),
    [sym__expression_statement] = STATE(101),
    [sym__expression] = STATE(42),
    [sym_unary_expression] = STATE(42),
    [sym_binary_expression] = STATE(42),
    [sym_funcall_expression] = STATE(42),
    [sym_parenthesized_expression] = STATE(42),
    [sym_literal] = STATE(42),
    [sym__numeric_literal] = STATE(20),
    [sym__vector_literal] = STATE(20),
    [sym__string_literal] = STATE(20),
    [anon_sym_local] = ACTIONS(9),
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
    [anon_sym_DASH] = ACTIONS(25),
    [anon_sym_PLUS] = ACTIONS(27),
    [sym_identifier] = ACTIONS(29),
    [aux_sym__numeric_literal_token1] = ACTIONS(31),
    [aux_sym__numeric_literal_token2] = ACTIONS(33),
    [aux_sym__vector_literal_token1] = ACTIONS(33),
    [aux_sym__vector_literal_token2] = ACTIONS(33),
    [anon_sym_DQUOTE] = ACTIONS(35),
    [sym_comment] = ACTIONS(3),
  },
  [4] = {
    [sym_variable_definition] = STATE(95),
    [sym_simple_type] = STATE(125),
    [sym__statement] = STATE(95),
    [sym__compound_statement] = STATE(95),
    [sym__simple_statement] = STATE(95),
    [sym_assignment_statement] = STATE(95),
    [sym_if_statement] = STATE(95),
    [sym_while_statement] = STATE(95),
    [sym_do_while_statement] = STATE(95),
    [sym_return_statement] = STATE(95),
    [sym__variable_definition_statement] = STATE(95),
    [sym__expression_statement] = STATE(95),
    [sym__expression] = STATE(42),
    [sym_unary_expression] = STATE(42),
    [sym_binary_expression] = STATE(42),
    [sym_funcall_expression] = STATE(42),
    [sym_parenthesized_expression] = STATE(42),
    [sym_literal] = STATE(42),
    [sym__numeric_literal] = STATE(20),
    [sym__vector_literal] = STATE(20),
    [sym__string_literal] = STATE(20),
    [anon_sym_local] = ACTIONS(9),
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
    [anon_sym_DASH] = ACTIONS(25),
    [anon_sym_PLUS] = ACTIONS(27),
    [sym_identifier] = ACTIONS(29),
    [aux_sym__numeric_literal_token1] = ACTIONS(31),
    [aux_sym__numeric_literal_token2] = ACTIONS(33),
    [aux_sym__vector_literal_token1] = ACTIONS(33),
    [aux_sym__vector_literal_token2] = ACTIONS(33),
    [anon_sym_DQUOTE] = ACTIONS(35),
    [sym_comment] = ACTIONS(3),
  },
  [5] = {
    [sym_variable_definition] = STATE(102),
    [sym_simple_type] = STATE(125),
    [sym__statement] = STATE(102),
    [sym__compound_statement] = STATE(102),
    [sym__simple_statement] = STATE(102),
    [sym_assignment_statement] = STATE(102),
    [sym_if_statement] = STATE(102),
    [sym_while_statement] = STATE(102),
    [sym_do_while_statement] = STATE(102),
    [sym_return_statement] = STATE(102),
    [sym__variable_definition_statement] = STATE(102),
    [sym__expression_statement] = STATE(102),
    [sym__expression] = STATE(42),
    [sym_unary_expression] = STATE(42),
    [sym_binary_expression] = STATE(42),
    [sym_funcall_expression] = STATE(42),
    [sym_parenthesized_expression] = STATE(42),
    [sym_literal] = STATE(42),
    [sym__numeric_literal] = STATE(20),
    [sym__vector_literal] = STATE(20),
    [sym__string_literal] = STATE(20),
    [anon_sym_local] = ACTIONS(9),
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
    [anon_sym_DASH] = ACTIONS(25),
    [anon_sym_PLUS] = ACTIONS(27),
    [sym_identifier] = ACTIONS(29),
    [aux_sym__numeric_literal_token1] = ACTIONS(31),
    [aux_sym__numeric_literal_token2] = ACTIONS(33),
    [aux_sym__vector_literal_token1] = ACTIONS(33),
    [aux_sym__vector_literal_token2] = ACTIONS(33),
    [anon_sym_DQUOTE] = ACTIONS(35),
    [sym_comment] = ACTIONS(3),
  },
  [6] = {
    [sym_variable_definition] = STATE(115),
    [sym_simple_type] = STATE(125),
    [sym__statement] = STATE(115),
    [sym__compound_statement] = STATE(115),
    [sym__simple_statement] = STATE(115),
    [sym_assignment_statement] = STATE(115),
    [sym_if_statement] = STATE(115),
    [sym_while_statement] = STATE(115),
    [sym_do_while_statement] = STATE(115),
    [sym_return_statement] = STATE(115),
    [sym__variable_definition_statement] = STATE(115),
    [sym__expression_statement] = STATE(115),
    [sym__expression] = STATE(42),
    [sym_unary_expression] = STATE(42),
    [sym_binary_expression] = STATE(42),
    [sym_funcall_expression] = STATE(42),
    [sym_parenthesized_expression] = STATE(42),
    [sym_literal] = STATE(42),
    [sym__numeric_literal] = STATE(20),
    [sym__vector_literal] = STATE(20),
    [sym__string_literal] = STATE(20),
    [anon_sym_local] = ACTIONS(9),
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
    [anon_sym_DASH] = ACTIONS(25),
    [anon_sym_PLUS] = ACTIONS(27),
    [sym_identifier] = ACTIONS(29),
    [aux_sym__numeric_literal_token1] = ACTIONS(31),
    [aux_sym__numeric_literal_token2] = ACTIONS(33),
    [aux_sym__vector_literal_token1] = ACTIONS(33),
    [aux_sym__vector_literal_token2] = ACTIONS(33),
    [anon_sym_DQUOTE] = ACTIONS(35),
    [sym_comment] = ACTIONS(3),
  },
  [7] = {
    [sym_variable_definition] = STATE(132),
    [sym_simple_type] = STATE(125),
    [sym__simple_statement] = STATE(132),
    [sym_assignment_statement] = STATE(132),
    [sym_if_statement] = STATE(132),
    [sym_while_statement] = STATE(132),
    [sym_do_while_statement] = STATE(132),
    [sym_return_statement] = STATE(132),
    [sym__variable_definition_statement] = STATE(132),
    [sym__expression_statement] = STATE(132),
    [sym__expression] = STATE(42),
    [sym_unary_expression] = STATE(42),
    [sym_binary_expression] = STATE(42),
    [sym_funcall_expression] = STATE(42),
    [sym_parenthesized_expression] = STATE(42),
    [sym_literal] = STATE(42),
    [sym__numeric_literal] = STATE(20),
    [sym__vector_literal] = STATE(20),
    [sym__string_literal] = STATE(20),
    [aux_sym__compound_statement_repeat1] = STATE(7),
    [anon_sym_local] = ACTIONS(39),
    [anon_sym_void] = ACTIONS(42),
    [anon_sym_entity] = ACTIONS(42),
    [anon_sym_float] = ACTIONS(42),
    [anon_sym_vector] = ACTIONS(42),
    [anon_sym_string] = ACTIONS(42),
    [anon_sym_int] = ACTIONS(42),
    [anon_sym_LPAREN] = ACTIONS(45),
    [anon_sym_RBRACE] = ACTIONS(48),
    [anon_sym_if] = ACTIONS(50),
    [anon_sym_while] = ACTIONS(53),
    [anon_sym_do] = ACTIONS(56),
    [anon_sym_return] = ACTIONS(59),
    [anon_sym_DASH] = ACTIONS(62),
    [anon_sym_PLUS] = ACTIONS(65),
    [sym_identifier] = ACTIONS(68),
    [aux_sym__numeric_literal_token1] = ACTIONS(71),
    [aux_sym__numeric_literal_token2] = ACTIONS(74),
    [aux_sym__vector_literal_token1] = ACTIONS(74),
    [aux_sym__vector_literal_token2] = ACTIONS(74),
    [anon_sym_DQUOTE] = ACTIONS(77),
    [sym_comment] = ACTIONS(3),
  },
  [8] = {
    [sym_variable_definition] = STATE(132),
    [sym_simple_type] = STATE(125),
    [sym__simple_statement] = STATE(132),
    [sym_assignment_statement] = STATE(132),
    [sym_if_statement] = STATE(132),
    [sym_while_statement] = STATE(132),
    [sym_do_while_statement] = STATE(132),
    [sym_return_statement] = STATE(132),
    [sym__variable_definition_statement] = STATE(132),
    [sym__expression_statement] = STATE(132),
    [sym__expression] = STATE(42),
    [sym_unary_expression] = STATE(42),
    [sym_binary_expression] = STATE(42),
    [sym_funcall_expression] = STATE(42),
    [sym_parenthesized_expression] = STATE(42),
    [sym_literal] = STATE(42),
    [sym__numeric_literal] = STATE(20),
    [sym__vector_literal] = STATE(20),
    [sym__string_literal] = STATE(20),
    [aux_sym__compound_statement_repeat1] = STATE(9),
    [anon_sym_local] = ACTIONS(9),
    [anon_sym_void] = ACTIONS(11),
    [anon_sym_entity] = ACTIONS(11),
    [anon_sym_float] = ACTIONS(11),
    [anon_sym_vector] = ACTIONS(11),
    [anon_sym_string] = ACTIONS(11),
    [anon_sym_int] = ACTIONS(11),
    [anon_sym_LPAREN] = ACTIONS(13),
    [anon_sym_RBRACE] = ACTIONS(80),
    [anon_sym_if] = ACTIONS(17),
    [anon_sym_while] = ACTIONS(19),
    [anon_sym_do] = ACTIONS(21),
    [anon_sym_return] = ACTIONS(23),
    [anon_sym_DASH] = ACTIONS(25),
    [anon_sym_PLUS] = ACTIONS(27),
    [sym_identifier] = ACTIONS(29),
    [aux_sym__numeric_literal_token1] = ACTIONS(31),
    [aux_sym__numeric_literal_token2] = ACTIONS(33),
    [aux_sym__vector_literal_token1] = ACTIONS(33),
    [aux_sym__vector_literal_token2] = ACTIONS(33),
    [anon_sym_DQUOTE] = ACTIONS(35),
    [sym_comment] = ACTIONS(3),
  },
  [9] = {
    [sym_variable_definition] = STATE(132),
    [sym_simple_type] = STATE(125),
    [sym__simple_statement] = STATE(132),
    [sym_assignment_statement] = STATE(132),
    [sym_if_statement] = STATE(132),
    [sym_while_statement] = STATE(132),
    [sym_do_while_statement] = STATE(132),
    [sym_return_statement] = STATE(132),
    [sym__variable_definition_statement] = STATE(132),
    [sym__expression_statement] = STATE(132),
    [sym__expression] = STATE(42),
    [sym_unary_expression] = STATE(42),
    [sym_binary_expression] = STATE(42),
    [sym_funcall_expression] = STATE(42),
    [sym_parenthesized_expression] = STATE(42),
    [sym_literal] = STATE(42),
    [sym__numeric_literal] = STATE(20),
    [sym__vector_literal] = STATE(20),
    [sym__string_literal] = STATE(20),
    [aux_sym__compound_statement_repeat1] = STATE(7),
    [anon_sym_local] = ACTIONS(9),
    [anon_sym_void] = ACTIONS(11),
    [anon_sym_entity] = ACTIONS(11),
    [anon_sym_float] = ACTIONS(11),
    [anon_sym_vector] = ACTIONS(11),
    [anon_sym_string] = ACTIONS(11),
    [anon_sym_int] = ACTIONS(11),
    [anon_sym_LPAREN] = ACTIONS(13),
    [anon_sym_RBRACE] = ACTIONS(82),
    [anon_sym_if] = ACTIONS(17),
    [anon_sym_while] = ACTIONS(19),
    [anon_sym_do] = ACTIONS(21),
    [anon_sym_return] = ACTIONS(23),
    [anon_sym_DASH] = ACTIONS(25),
    [anon_sym_PLUS] = ACTIONS(27),
    [sym_identifier] = ACTIONS(29),
    [aux_sym__numeric_literal_token1] = ACTIONS(31),
    [aux_sym__numeric_literal_token2] = ACTIONS(33),
    [aux_sym__vector_literal_token1] = ACTIONS(33),
    [aux_sym__vector_literal_token2] = ACTIONS(33),
    [anon_sym_DQUOTE] = ACTIONS(35),
    [sym_comment] = ACTIONS(3),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(86), 1,
      anon_sym_LPAREN,
    ACTIONS(88), 6,
      anon_sym_SLASH,
      anon_sym_BANG,
      anon_sym_PIPE,
      anon_sym_AMP,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(84), 14,
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
  [31] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(48), 7,
      anon_sym_LPAREN,
      anon_sym_RBRACE,
      anon_sym_PLUS,
      aux_sym__numeric_literal_token2,
      aux_sym__vector_literal_token1,
      aux_sym__vector_literal_token2,
      anon_sym_DQUOTE,
    ACTIONS(90), 14,
      anon_sym_local,
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
      anon_sym_DASH,
      sym_identifier,
      aux_sym__numeric_literal_token1,
  [60] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(94), 6,
      anon_sym_SLASH,
      anon_sym_BANG,
      anon_sym_PIPE,
      anon_sym_AMP,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(92), 14,
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
  [88] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(98), 1,
      anon_sym_STAR,
    ACTIONS(100), 1,
      anon_sym_SLASH,
    ACTIONS(104), 1,
      anon_sym_PIPE,
    ACTIONS(106), 1,
      anon_sym_AMP,
    ACTIONS(102), 3,
      anon_sym_BANG,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(96), 13,
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
  [124] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(110), 6,
      anon_sym_SLASH,
      anon_sym_BANG,
      anon_sym_PIPE,
      anon_sym_AMP,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(108), 14,
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
  [152] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(114), 6,
      anon_sym_SLASH,
      anon_sym_BANG,
      anon_sym_PIPE,
      anon_sym_AMP,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(112), 14,
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
  [180] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(98), 1,
      anon_sym_STAR,
    ACTIONS(100), 1,
      anon_sym_SLASH,
    ACTIONS(104), 1,
      anon_sym_PIPE,
    ACTIONS(106), 1,
      anon_sym_AMP,
    ACTIONS(116), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(102), 3,
      anon_sym_BANG,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(96), 11,
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
  [218] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(120), 6,
      anon_sym_SLASH,
      anon_sym_BANG,
      anon_sym_PIPE,
      anon_sym_AMP,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(118), 14,
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
  [246] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(102), 6,
      anon_sym_SLASH,
      anon_sym_BANG,
      anon_sym_PIPE,
      anon_sym_AMP,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(96), 14,
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
  [274] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(124), 6,
      anon_sym_SLASH,
      anon_sym_BANG,
      anon_sym_PIPE,
      anon_sym_AMP,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(122), 14,
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
  [302] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(128), 6,
      anon_sym_SLASH,
      anon_sym_BANG,
      anon_sym_PIPE,
      anon_sym_AMP,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(126), 14,
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
  [330] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(98), 1,
      anon_sym_STAR,
    ACTIONS(100), 1,
      anon_sym_SLASH,
    ACTIONS(104), 1,
      anon_sym_PIPE,
    ACTIONS(106), 1,
      anon_sym_AMP,
    ACTIONS(130), 1,
      anon_sym_AMP_AMP,
    ACTIONS(132), 1,
      anon_sym_BANG,
    ACTIONS(116), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(136), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(134), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
    ACTIONS(96), 6,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_else,
      anon_sym_while,
      anon_sym_PIPE_PIPE,
  [374] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(98), 1,
      anon_sym_STAR,
    ACTIONS(100), 1,
      anon_sym_SLASH,
    ACTIONS(104), 1,
      anon_sym_PIPE,
    ACTIONS(106), 1,
      anon_sym_AMP,
    ACTIONS(132), 1,
      anon_sym_BANG,
    ACTIONS(116), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(136), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(134), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
    ACTIONS(96), 7,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_else,
      anon_sym_while,
      anon_sym_PIPE_PIPE,
      anon_sym_AMP_AMP,
  [416] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(98), 1,
      anon_sym_STAR,
    ACTIONS(100), 1,
      anon_sym_SLASH,
    ACTIONS(102), 1,
      anon_sym_BANG,
    ACTIONS(104), 1,
      anon_sym_PIPE,
    ACTIONS(106), 1,
      anon_sym_AMP,
    ACTIONS(116), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(136), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(134), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
    ACTIONS(96), 7,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_else,
      anon_sym_while,
      anon_sym_PIPE_PIPE,
      anon_sym_AMP_AMP,
  [458] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(98), 1,
      anon_sym_STAR,
    ACTIONS(100), 1,
      anon_sym_SLASH,
    ACTIONS(106), 1,
      anon_sym_AMP,
    ACTIONS(102), 4,
      anon_sym_BANG,
      anon_sym_PIPE,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(96), 13,
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
  [492] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(86), 1,
      anon_sym_LPAREN,
    ACTIONS(138), 1,
      anon_sym_EQ,
    ACTIONS(88), 6,
      anon_sym_SLASH,
      anon_sym_BANG,
      anon_sym_PIPE,
      anon_sym_AMP,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(84), 12,
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
  [524] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(98), 1,
      anon_sym_STAR,
    ACTIONS(100), 1,
      anon_sym_SLASH,
    ACTIONS(102), 5,
      anon_sym_BANG,
      anon_sym_PIPE,
      anon_sym_AMP,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(96), 13,
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
  [556] = 3,
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
  [584] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(146), 6,
      anon_sym_SLASH,
      anon_sym_BANG,
      anon_sym_PIPE,
      anon_sym_AMP,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(144), 14,
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
  [612] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(13), 1,
      anon_sym_LPAREN,
    ACTIONS(25), 1,
      anon_sym_DASH,
    ACTIONS(27), 1,
      anon_sym_PLUS,
    ACTIONS(31), 1,
      aux_sym__numeric_literal_token1,
    ACTIONS(35), 1,
      anon_sym_DQUOTE,
    ACTIONS(148), 1,
      anon_sym_RPAREN,
    ACTIONS(150), 1,
      sym_identifier,
    ACTIONS(33), 3,
      aux_sym__numeric_literal_token2,
      aux_sym__vector_literal_token1,
      aux_sym__vector_literal_token2,
    STATE(20), 3,
      sym__numeric_literal,
      sym__vector_literal,
      sym__string_literal,
    STATE(48), 6,
      sym__expression,
      sym_unary_expression,
      sym_binary_expression,
      sym_funcall_expression,
      sym_parenthesized_expression,
      sym_literal,
  [655] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(13), 1,
      anon_sym_LPAREN,
    ACTIONS(25), 1,
      anon_sym_DASH,
    ACTIONS(27), 1,
      anon_sym_PLUS,
    ACTIONS(31), 1,
      aux_sym__numeric_literal_token1,
    ACTIONS(35), 1,
      anon_sym_DQUOTE,
    ACTIONS(150), 1,
      sym_identifier,
    ACTIONS(33), 3,
      aux_sym__numeric_literal_token2,
      aux_sym__vector_literal_token1,
      aux_sym__vector_literal_token2,
    STATE(20), 3,
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
  [695] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(98), 1,
      anon_sym_STAR,
    ACTIONS(100), 1,
      anon_sym_SLASH,
    ACTIONS(104), 1,
      anon_sym_PIPE,
    ACTIONS(106), 1,
      anon_sym_AMP,
    ACTIONS(130), 1,
      anon_sym_AMP_AMP,
    ACTIONS(132), 1,
      anon_sym_BANG,
    ACTIONS(154), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(116), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(136), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(152), 3,
      anon_sym_SEMI,
      anon_sym_else,
      anon_sym_while,
    ACTIONS(134), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
  [739] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(13), 1,
      anon_sym_LPAREN,
    ACTIONS(25), 1,
      anon_sym_DASH,
    ACTIONS(27), 1,
      anon_sym_PLUS,
    ACTIONS(31), 1,
      aux_sym__numeric_literal_token1,
    ACTIONS(35), 1,
      anon_sym_DQUOTE,
    ACTIONS(150), 1,
      sym_identifier,
    ACTIONS(33), 3,
      aux_sym__numeric_literal_token2,
      aux_sym__vector_literal_token1,
      aux_sym__vector_literal_token2,
    STATE(20), 3,
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
  [779] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(13), 1,
      anon_sym_LPAREN,
    ACTIONS(25), 1,
      anon_sym_DASH,
    ACTIONS(27), 1,
      anon_sym_PLUS,
    ACTIONS(31), 1,
      aux_sym__numeric_literal_token1,
    ACTIONS(35), 1,
      anon_sym_DQUOTE,
    ACTIONS(150), 1,
      sym_identifier,
    ACTIONS(33), 3,
      aux_sym__numeric_literal_token2,
      aux_sym__vector_literal_token1,
      aux_sym__vector_literal_token2,
    STATE(20), 3,
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
  [819] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(13), 1,
      anon_sym_LPAREN,
    ACTIONS(25), 1,
      anon_sym_DASH,
    ACTIONS(27), 1,
      anon_sym_PLUS,
    ACTIONS(31), 1,
      aux_sym__numeric_literal_token1,
    ACTIONS(35), 1,
      anon_sym_DQUOTE,
    ACTIONS(150), 1,
      sym_identifier,
    ACTIONS(33), 3,
      aux_sym__numeric_literal_token2,
      aux_sym__vector_literal_token1,
      aux_sym__vector_literal_token2,
    STATE(20), 3,
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
  [859] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(13), 1,
      anon_sym_LPAREN,
    ACTIONS(25), 1,
      anon_sym_DASH,
    ACTIONS(27), 1,
      anon_sym_PLUS,
    ACTIONS(31), 1,
      aux_sym__numeric_literal_token1,
    ACTIONS(35), 1,
      anon_sym_DQUOTE,
    ACTIONS(150), 1,
      sym_identifier,
    ACTIONS(33), 3,
      aux_sym__numeric_literal_token2,
      aux_sym__vector_literal_token1,
      aux_sym__vector_literal_token2,
    STATE(20), 3,
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
  [899] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(13), 1,
      anon_sym_LPAREN,
    ACTIONS(25), 1,
      anon_sym_DASH,
    ACTIONS(27), 1,
      anon_sym_PLUS,
    ACTIONS(31), 1,
      aux_sym__numeric_literal_token1,
    ACTIONS(35), 1,
      anon_sym_DQUOTE,
    ACTIONS(150), 1,
      sym_identifier,
    ACTIONS(33), 3,
      aux_sym__numeric_literal_token2,
      aux_sym__vector_literal_token1,
      aux_sym__vector_literal_token2,
    STATE(20), 3,
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
  [939] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(13), 1,
      anon_sym_LPAREN,
    ACTIONS(25), 1,
      anon_sym_DASH,
    ACTIONS(27), 1,
      anon_sym_PLUS,
    ACTIONS(31), 1,
      aux_sym__numeric_literal_token1,
    ACTIONS(35), 1,
      anon_sym_DQUOTE,
    ACTIONS(150), 1,
      sym_identifier,
    ACTIONS(33), 3,
      aux_sym__numeric_literal_token2,
      aux_sym__vector_literal_token1,
      aux_sym__vector_literal_token2,
    STATE(20), 3,
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
  [979] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(13), 1,
      anon_sym_LPAREN,
    ACTIONS(25), 1,
      anon_sym_DASH,
    ACTIONS(27), 1,
      anon_sym_PLUS,
    ACTIONS(31), 1,
      aux_sym__numeric_literal_token1,
    ACTIONS(35), 1,
      anon_sym_DQUOTE,
    ACTIONS(150), 1,
      sym_identifier,
    ACTIONS(33), 3,
      aux_sym__numeric_literal_token2,
      aux_sym__vector_literal_token1,
      aux_sym__vector_literal_token2,
    STATE(20), 3,
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
  [1019] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(13), 1,
      anon_sym_LPAREN,
    ACTIONS(25), 1,
      anon_sym_DASH,
    ACTIONS(27), 1,
      anon_sym_PLUS,
    ACTIONS(31), 1,
      aux_sym__numeric_literal_token1,
    ACTIONS(35), 1,
      anon_sym_DQUOTE,
    ACTIONS(150), 1,
      sym_identifier,
    ACTIONS(33), 3,
      aux_sym__numeric_literal_token2,
      aux_sym__vector_literal_token1,
      aux_sym__vector_literal_token2,
    STATE(20), 3,
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
  [1059] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(13), 1,
      anon_sym_LPAREN,
    ACTIONS(25), 1,
      anon_sym_DASH,
    ACTIONS(27), 1,
      anon_sym_PLUS,
    ACTIONS(31), 1,
      aux_sym__numeric_literal_token1,
    ACTIONS(35), 1,
      anon_sym_DQUOTE,
    ACTIONS(150), 1,
      sym_identifier,
    ACTIONS(33), 3,
      aux_sym__numeric_literal_token2,
      aux_sym__vector_literal_token1,
      aux_sym__vector_literal_token2,
    STATE(20), 3,
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
  [1099] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(13), 1,
      anon_sym_LPAREN,
    ACTIONS(25), 1,
      anon_sym_DASH,
    ACTIONS(27), 1,
      anon_sym_PLUS,
    ACTIONS(31), 1,
      aux_sym__numeric_literal_token1,
    ACTIONS(35), 1,
      anon_sym_DQUOTE,
    ACTIONS(150), 1,
      sym_identifier,
    ACTIONS(33), 3,
      aux_sym__numeric_literal_token2,
      aux_sym__vector_literal_token1,
      aux_sym__vector_literal_token2,
    STATE(20), 3,
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
  [1139] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(98), 1,
      anon_sym_STAR,
    ACTIONS(100), 1,
      anon_sym_SLASH,
    ACTIONS(104), 1,
      anon_sym_PIPE,
    ACTIONS(106), 1,
      anon_sym_AMP,
    ACTIONS(130), 1,
      anon_sym_AMP_AMP,
    ACTIONS(132), 1,
      anon_sym_BANG,
    ACTIONS(154), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(116), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(136), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(156), 3,
      anon_sym_SEMI,
      anon_sym_else,
      anon_sym_while,
    ACTIONS(134), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
  [1183] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(13), 1,
      anon_sym_LPAREN,
    ACTIONS(25), 1,
      anon_sym_DASH,
    ACTIONS(27), 1,
      anon_sym_PLUS,
    ACTIONS(31), 1,
      aux_sym__numeric_literal_token1,
    ACTIONS(35), 1,
      anon_sym_DQUOTE,
    ACTIONS(150), 1,
      sym_identifier,
    ACTIONS(33), 3,
      aux_sym__numeric_literal_token2,
      aux_sym__vector_literal_token1,
      aux_sym__vector_literal_token2,
    STATE(20), 3,
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
  [1223] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(98), 1,
      anon_sym_STAR,
    ACTIONS(100), 1,
      anon_sym_SLASH,
    ACTIONS(104), 1,
      anon_sym_PIPE,
    ACTIONS(106), 1,
      anon_sym_AMP,
    ACTIONS(130), 1,
      anon_sym_AMP_AMP,
    ACTIONS(132), 1,
      anon_sym_BANG,
    ACTIONS(154), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(116), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(136), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(158), 3,
      anon_sym_SEMI,
      anon_sym_else,
      anon_sym_while,
    ACTIONS(134), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
  [1267] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(13), 1,
      anon_sym_LPAREN,
    ACTIONS(25), 1,
      anon_sym_DASH,
    ACTIONS(27), 1,
      anon_sym_PLUS,
    ACTIONS(31), 1,
      aux_sym__numeric_literal_token1,
    ACTIONS(35), 1,
      anon_sym_DQUOTE,
    ACTIONS(150), 1,
      sym_identifier,
    ACTIONS(33), 3,
      aux_sym__numeric_literal_token2,
      aux_sym__vector_literal_token1,
      aux_sym__vector_literal_token2,
    STATE(20), 3,
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
  [1307] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(13), 1,
      anon_sym_LPAREN,
    ACTIONS(25), 1,
      anon_sym_DASH,
    ACTIONS(27), 1,
      anon_sym_PLUS,
    ACTIONS(31), 1,
      aux_sym__numeric_literal_token1,
    ACTIONS(35), 1,
      anon_sym_DQUOTE,
    ACTIONS(150), 1,
      sym_identifier,
    ACTIONS(33), 3,
      aux_sym__numeric_literal_token2,
      aux_sym__vector_literal_token1,
      aux_sym__vector_literal_token2,
    STATE(20), 3,
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
  [1347] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(13), 1,
      anon_sym_LPAREN,
    ACTIONS(25), 1,
      anon_sym_DASH,
    ACTIONS(27), 1,
      anon_sym_PLUS,
    ACTIONS(31), 1,
      aux_sym__numeric_literal_token1,
    ACTIONS(35), 1,
      anon_sym_DQUOTE,
    ACTIONS(150), 1,
      sym_identifier,
    ACTIONS(33), 3,
      aux_sym__numeric_literal_token2,
      aux_sym__vector_literal_token1,
      aux_sym__vector_literal_token2,
    STATE(20), 3,
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
  [1387] = 14,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(98), 1,
      anon_sym_STAR,
    ACTIONS(100), 1,
      anon_sym_SLASH,
    ACTIONS(104), 1,
      anon_sym_PIPE,
    ACTIONS(106), 1,
      anon_sym_AMP,
    ACTIONS(130), 1,
      anon_sym_AMP_AMP,
    ACTIONS(132), 1,
      anon_sym_BANG,
    ACTIONS(154), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(160), 1,
      anon_sym_COMMA,
    ACTIONS(162), 1,
      anon_sym_RPAREN,
    STATE(98), 1,
      aux_sym_funcall_expression_repeat1,
    ACTIONS(116), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(136), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(134), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
  [1435] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(13), 1,
      anon_sym_LPAREN,
    ACTIONS(25), 1,
      anon_sym_DASH,
    ACTIONS(27), 1,
      anon_sym_PLUS,
    ACTIONS(31), 1,
      aux_sym__numeric_literal_token1,
    ACTIONS(35), 1,
      anon_sym_DQUOTE,
    ACTIONS(150), 1,
      sym_identifier,
    ACTIONS(33), 3,
      aux_sym__numeric_literal_token2,
      aux_sym__vector_literal_token1,
      aux_sym__vector_literal_token2,
    STATE(20), 3,
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
  [1475] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(98), 1,
      anon_sym_STAR,
    ACTIONS(100), 1,
      anon_sym_SLASH,
    ACTIONS(104), 1,
      anon_sym_PIPE,
    ACTIONS(106), 1,
      anon_sym_AMP,
    ACTIONS(130), 1,
      anon_sym_AMP_AMP,
    ACTIONS(132), 1,
      anon_sym_BANG,
    ACTIONS(154), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(116), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(136), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(164), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
    ACTIONS(134), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
  [1518] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(98), 1,
      anon_sym_STAR,
    ACTIONS(100), 1,
      anon_sym_SLASH,
    ACTIONS(104), 1,
      anon_sym_PIPE,
    ACTIONS(106), 1,
      anon_sym_AMP,
    ACTIONS(130), 1,
      anon_sym_AMP_AMP,
    ACTIONS(132), 1,
      anon_sym_BANG,
    ACTIONS(154), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(166), 1,
      anon_sym_RPAREN,
    ACTIONS(116), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(136), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(134), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
  [1560] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(98), 1,
      anon_sym_STAR,
    ACTIONS(100), 1,
      anon_sym_SLASH,
    ACTIONS(104), 1,
      anon_sym_PIPE,
    ACTIONS(106), 1,
      anon_sym_AMP,
    ACTIONS(130), 1,
      anon_sym_AMP_AMP,
    ACTIONS(132), 1,
      anon_sym_BANG,
    ACTIONS(154), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(168), 1,
      anon_sym_RPAREN,
    ACTIONS(116), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(136), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(134), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
  [1602] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(98), 1,
      anon_sym_STAR,
    ACTIONS(100), 1,
      anon_sym_SLASH,
    ACTIONS(104), 1,
      anon_sym_PIPE,
    ACTIONS(106), 1,
      anon_sym_AMP,
    ACTIONS(130), 1,
      anon_sym_AMP_AMP,
    ACTIONS(132), 1,
      anon_sym_BANG,
    ACTIONS(154), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(170), 1,
      anon_sym_RPAREN,
    ACTIONS(116), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(136), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(134), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
  [1644] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(98), 1,
      anon_sym_STAR,
    ACTIONS(100), 1,
      anon_sym_SLASH,
    ACTIONS(104), 1,
      anon_sym_PIPE,
    ACTIONS(106), 1,
      anon_sym_AMP,
    ACTIONS(130), 1,
      anon_sym_AMP_AMP,
    ACTIONS(132), 1,
      anon_sym_BANG,
    ACTIONS(154), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(172), 1,
      anon_sym_RPAREN,
    ACTIONS(116), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(136), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(134), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
  [1686] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(174), 1,
      ts_builtin_sym_end,
    STATE(96), 1,
      sym_simple_type,
    STATE(55), 5,
      sym__definition,
      sym_function_declaration,
      sym_function_definition,
      sym_constant_definition,
      aux_sym_source_file_repeat1,
    ACTIONS(176), 6,
      anon_sym_void,
      anon_sym_entity,
      anon_sym_float,
      anon_sym_vector,
      anon_sym_string,
      anon_sym_int,
  [1711] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(179), 1,
      ts_builtin_sym_end,
    STATE(96), 1,
      sym_simple_type,
    STATE(55), 5,
      sym__definition,
      sym_function_declaration,
      sym_function_definition,
      sym_constant_definition,
      aux_sym_source_file_repeat1,
    ACTIONS(7), 6,
      anon_sym_void,
      anon_sym_entity,
      anon_sym_float,
      anon_sym_vector,
      anon_sym_string,
      anon_sym_int,
  [1736] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(31), 1,
      aux_sym__numeric_literal_token1,
    ACTIONS(35), 1,
      anon_sym_DQUOTE,
    STATE(87), 1,
      sym_literal,
    ACTIONS(33), 3,
      aux_sym__numeric_literal_token2,
      aux_sym__vector_literal_token1,
      aux_sym__vector_literal_token2,
    STATE(20), 3,
      sym__numeric_literal,
      sym__vector_literal,
      sym__string_literal,
  [1759] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(31), 1,
      aux_sym__numeric_literal_token1,
    ACTIONS(35), 1,
      anon_sym_DQUOTE,
    STATE(89), 1,
      sym_literal,
    ACTIONS(33), 3,
      aux_sym__numeric_literal_token2,
      aux_sym__vector_literal_token1,
      aux_sym__vector_literal_token2,
    STATE(20), 3,
      sym__numeric_literal,
      sym__vector_literal,
      sym__string_literal,
  [1782] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(31), 1,
      aux_sym__numeric_literal_token1,
    ACTIONS(35), 1,
      anon_sym_DQUOTE,
    STATE(91), 1,
      sym_literal,
    ACTIONS(33), 3,
      aux_sym__numeric_literal_token2,
      aux_sym__vector_literal_token1,
      aux_sym__vector_literal_token2,
    STATE(20), 3,
      sym__numeric_literal,
      sym__vector_literal,
      sym__string_literal,
  [1805] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(31), 1,
      aux_sym__numeric_literal_token1,
    ACTIONS(35), 1,
      anon_sym_DQUOTE,
    STATE(86), 1,
      sym_literal,
    ACTIONS(33), 3,
      aux_sym__numeric_literal_token2,
      aux_sym__vector_literal_token1,
      aux_sym__vector_literal_token2,
    STATE(20), 3,
      sym__numeric_literal,
      sym__vector_literal,
      sym__string_literal,
  [1828] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(31), 1,
      aux_sym__numeric_literal_token1,
    ACTIONS(35), 1,
      anon_sym_DQUOTE,
    STATE(119), 1,
      sym_literal,
    ACTIONS(33), 3,
      aux_sym__numeric_literal_token2,
      aux_sym__vector_literal_token1,
      aux_sym__vector_literal_token2,
    STATE(20), 3,
      sym__numeric_literal,
      sym__vector_literal,
      sym__string_literal,
  [1851] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(31), 1,
      aux_sym__numeric_literal_token1,
    ACTIONS(35), 1,
      anon_sym_DQUOTE,
    STATE(83), 1,
      sym_literal,
    ACTIONS(33), 3,
      aux_sym__numeric_literal_token2,
      aux_sym__vector_literal_token1,
      aux_sym__vector_literal_token2,
    STATE(20), 3,
      sym__numeric_literal,
      sym__vector_literal,
      sym__string_literal,
  [1874] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(31), 1,
      aux_sym__numeric_literal_token1,
    ACTIONS(35), 1,
      anon_sym_DQUOTE,
    STATE(77), 1,
      sym_literal,
    ACTIONS(33), 3,
      aux_sym__numeric_literal_token2,
      aux_sym__vector_literal_token1,
      aux_sym__vector_literal_token2,
    STATE(20), 3,
      sym__numeric_literal,
      sym__vector_literal,
      sym__string_literal,
  [1897] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(181), 1,
      anon_sym_RPAREN,
    STATE(100), 1,
      sym__parameter,
    STATE(127), 1,
      sym_simple_type,
    ACTIONS(7), 6,
      anon_sym_void,
      anon_sym_entity,
      anon_sym_float,
      anon_sym_vector,
      anon_sym_string,
      anon_sym_int,
  [1918] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(31), 1,
      aux_sym__numeric_literal_token1,
    ACTIONS(35), 1,
      anon_sym_DQUOTE,
    STATE(94), 1,
      sym_literal,
    ACTIONS(33), 3,
      aux_sym__numeric_literal_token2,
      aux_sym__vector_literal_token1,
      aux_sym__vector_literal_token2,
    STATE(20), 3,
      sym__numeric_literal,
      sym__vector_literal,
      sym__string_literal,
  [1941] = 4,
    ACTIONS(3), 1,
      sym_comment,
    STATE(110), 1,
      sym__parameter,
    STATE(127), 1,
      sym_simple_type,
    ACTIONS(7), 6,
      anon_sym_void,
      anon_sym_entity,
      anon_sym_float,
      anon_sym_vector,
      anon_sym_string,
      anon_sym_int,
  [1959] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(183), 7,
      ts_builtin_sym_end,
      anon_sym_void,
      anon_sym_entity,
      anon_sym_float,
      anon_sym_vector,
      anon_sym_string,
      anon_sym_int,
  [1972] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(185), 7,
      ts_builtin_sym_end,
      anon_sym_void,
      anon_sym_entity,
      anon_sym_float,
      anon_sym_vector,
      anon_sym_string,
      anon_sym_int,
  [1985] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(187), 7,
      ts_builtin_sym_end,
      anon_sym_void,
      anon_sym_entity,
      anon_sym_float,
      anon_sym_vector,
      anon_sym_string,
      anon_sym_int,
  [1998] = 3,
    ACTIONS(3), 1,
      sym_comment,
    STATE(130), 1,
      sym_simple_type,
    ACTIONS(7), 6,
      anon_sym_void,
      anon_sym_entity,
      anon_sym_float,
      anon_sym_vector,
      anon_sym_string,
      anon_sym_int,
  [2013] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(191), 1,
      anon_sym_EQ,
    ACTIONS(193), 1,
      anon_sym_COMMA,
    STATE(75), 1,
      aux_sym_variable_definition_repeat1,
    ACTIONS(189), 3,
      anon_sym_SEMI,
      anon_sym_else,
      anon_sym_while,
  [2031] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(193), 1,
      anon_sym_COMMA,
    ACTIONS(197), 1,
      anon_sym_EQ,
    STATE(85), 1,
      aux_sym_variable_definition_repeat1,
    ACTIONS(195), 3,
      anon_sym_SEMI,
      anon_sym_else,
      anon_sym_while,
  [2049] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(193), 1,
      anon_sym_COMMA,
    ACTIONS(201), 1,
      anon_sym_EQ,
    STATE(82), 1,
      aux_sym_variable_definition_repeat1,
    ACTIONS(199), 3,
      anon_sym_SEMI,
      anon_sym_else,
      anon_sym_while,
  [2067] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(193), 1,
      anon_sym_COMMA,
    ACTIONS(205), 1,
      anon_sym_EQ,
    STATE(76), 1,
      aux_sym_variable_definition_repeat1,
    ACTIONS(203), 3,
      anon_sym_SEMI,
      anon_sym_else,
      anon_sym_while,
  [2085] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(193), 1,
      anon_sym_COMMA,
    STATE(81), 1,
      aux_sym_variable_definition_repeat1,
    ACTIONS(203), 3,
      anon_sym_SEMI,
      anon_sym_else,
      anon_sym_while,
  [2100] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(193), 1,
      anon_sym_COMMA,
    STATE(81), 1,
      aux_sym_variable_definition_repeat1,
    ACTIONS(199), 3,
      anon_sym_SEMI,
      anon_sym_else,
      anon_sym_while,
  [2115] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(193), 1,
      anon_sym_COMMA,
    STATE(76), 1,
      aux_sym_variable_definition_repeat1,
    ACTIONS(203), 3,
      anon_sym_SEMI,
      anon_sym_else,
      anon_sym_while,
  [2130] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(209), 1,
      anon_sym_EQ,
    ACTIONS(211), 1,
      anon_sym_COMMA,
    ACTIONS(207), 3,
      anon_sym_SEMI,
      anon_sym_else,
      anon_sym_while,
  [2145] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(215), 1,
      anon_sym_EQ,
    ACTIONS(213), 4,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_else,
      anon_sym_while,
  [2158] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(193), 1,
      anon_sym_COMMA,
    STATE(81), 1,
      aux_sym_variable_definition_repeat1,
    ACTIONS(217), 3,
      anon_sym_SEMI,
      anon_sym_else,
      anon_sym_while,
  [2173] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(219), 1,
      anon_sym_COMMA,
    STATE(81), 1,
      aux_sym_variable_definition_repeat1,
    ACTIONS(213), 3,
      anon_sym_SEMI,
      anon_sym_else,
      anon_sym_while,
  [2188] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(193), 1,
      anon_sym_COMMA,
    STATE(81), 1,
      aux_sym_variable_definition_repeat1,
    ACTIONS(222), 3,
      anon_sym_SEMI,
      anon_sym_else,
      anon_sym_while,
  [2203] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(193), 1,
      anon_sym_COMMA,
    STATE(88), 1,
      aux_sym_variable_definition_repeat1,
    ACTIONS(222), 3,
      anon_sym_SEMI,
      anon_sym_else,
      anon_sym_while,
  [2218] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(226), 1,
      anon_sym_EQ,
    ACTIONS(228), 1,
      anon_sym_COMMA,
    ACTIONS(224), 3,
      anon_sym_SEMI,
      anon_sym_else,
      anon_sym_while,
  [2233] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(193), 1,
      anon_sym_COMMA,
    STATE(81), 1,
      aux_sym_variable_definition_repeat1,
    ACTIONS(189), 3,
      anon_sym_SEMI,
      anon_sym_else,
      anon_sym_while,
  [2248] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(193), 1,
      anon_sym_COMMA,
    STATE(80), 1,
      aux_sym_variable_definition_repeat1,
    ACTIONS(230), 3,
      anon_sym_SEMI,
      anon_sym_else,
      anon_sym_while,
  [2263] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(193), 1,
      anon_sym_COMMA,
    STATE(82), 1,
      aux_sym_variable_definition_repeat1,
    ACTIONS(199), 3,
      anon_sym_SEMI,
      anon_sym_else,
      anon_sym_while,
  [2278] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(193), 1,
      anon_sym_COMMA,
    STATE(81), 1,
      aux_sym_variable_definition_repeat1,
    ACTIONS(230), 3,
      anon_sym_SEMI,
      anon_sym_else,
      anon_sym_while,
  [2293] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(232), 1,
      anon_sym_COMMA,
    ACTIONS(195), 3,
      anon_sym_SEMI,
      anon_sym_else,
      anon_sym_while,
  [2305] = 4,
    ACTIONS(237), 1,
      aux_sym__string_literal_token3,
    ACTIONS(239), 1,
      sym_comment,
    STATE(90), 1,
      aux_sym__string_literal_repeat1,
    ACTIONS(234), 2,
      aux_sym__string_literal_token1,
      aux_sym__string_literal_token2,
  [2319] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(241), 4,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_else,
      anon_sym_while,
  [2329] = 4,
    ACTIONS(239), 1,
      sym_comment,
    ACTIONS(245), 1,
      aux_sym__string_literal_token3,
    STATE(93), 1,
      aux_sym__string_literal_repeat1,
    ACTIONS(243), 2,
      aux_sym__string_literal_token1,
      aux_sym__string_literal_token2,
  [2343] = 4,
    ACTIONS(239), 1,
      sym_comment,
    ACTIONS(249), 1,
      aux_sym__string_literal_token3,
    STATE(90), 1,
      aux_sym__string_literal_repeat1,
    ACTIONS(247), 2,
      aux_sym__string_literal_token1,
      aux_sym__string_literal_token2,
  [2357] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(251), 1,
      anon_sym_COMMA,
    ACTIONS(189), 3,
      anon_sym_SEMI,
      anon_sym_else,
      anon_sym_while,
  [2369] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(253), 3,
      anon_sym_SEMI,
      anon_sym_else,
      anon_sym_while,
  [2378] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(255), 1,
      anon_sym_LPAREN,
    ACTIONS(257), 1,
      sym_identifier,
    STATE(129), 1,
      sym_parameter_list,
  [2391] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(259), 3,
      anon_sym_SEMI,
      anon_sym_else,
      anon_sym_while,
  [2400] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(160), 1,
      anon_sym_COMMA,
    ACTIONS(261), 1,
      anon_sym_RPAREN,
    STATE(104), 1,
      aux_sym_funcall_expression_repeat1,
  [2413] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(263), 3,
      anon_sym_SEMI,
      anon_sym_else,
      anon_sym_while,
  [2422] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(265), 1,
      anon_sym_COMMA,
    ACTIONS(267), 1,
      anon_sym_RPAREN,
    STATE(103), 1,
      aux_sym_parameter_list_repeat1,
  [2435] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(271), 1,
      anon_sym_else,
    ACTIONS(269), 2,
      anon_sym_SEMI,
      anon_sym_while,
  [2446] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(273), 3,
      anon_sym_SEMI,
      anon_sym_else,
      anon_sym_while,
  [2455] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(265), 1,
      anon_sym_COMMA,
    ACTIONS(275), 1,
      anon_sym_RPAREN,
    STATE(106), 1,
      aux_sym_parameter_list_repeat1,
  [2468] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(164), 1,
      anon_sym_RPAREN,
    ACTIONS(277), 1,
      anon_sym_COMMA,
    STATE(104), 1,
      aux_sym_funcall_expression_repeat1,
  [2481] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(280), 3,
      anon_sym_SEMI,
      anon_sym_else,
      anon_sym_while,
  [2490] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(282), 1,
      anon_sym_COMMA,
    ACTIONS(285), 1,
      anon_sym_RPAREN,
    STATE(106), 1,
      aux_sym_parameter_list_repeat1,
  [2503] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(287), 2,
      anon_sym_LPAREN,
      sym_identifier,
  [2511] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(289), 1,
      anon_sym_SEMI,
    ACTIONS(291), 1,
      anon_sym_EQ,
  [2521] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(293), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [2529] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(285), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [2537] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(295), 1,
      anon_sym_DQUOTE,
  [2544] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(297), 1,
      sym_identifier,
  [2551] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(299), 1,
      sym_identifier,
  [2558] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(301), 1,
      sym_identifier,
  [2565] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(303), 1,
      anon_sym_while,
  [2572] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(305), 1,
      sym_identifier,
  [2579] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(307), 1,
      sym_identifier,
  [2586] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(309), 1,
      anon_sym_LPAREN,
  [2593] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(311), 1,
      anon_sym_SEMI,
  [2600] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(313), 1,
      anon_sym_LPAREN,
  [2607] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(315), 1,
      sym_identifier,
  [2614] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(317), 1,
      anon_sym_LPAREN,
  [2621] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(319), 1,
      sym_identifier,
  [2628] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(321), 1,
      anon_sym_SEMI,
  [2635] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(323), 1,
      sym_identifier,
  [2642] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(325), 1,
      anon_sym_DQUOTE,
  [2649] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(327), 1,
      sym_identifier,
  [2656] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(329), 1,
      sym_identifier,
  [2663] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(331), 1,
      sym_identifier,
  [2670] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(333), 1,
      sym_identifier,
  [2677] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(335), 1,
      anon_sym_EQ,
  [2684] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(337), 1,
      anon_sym_SEMI,
  [2691] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(339), 1,
      ts_builtin_sym_end,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(10)] = 0,
  [SMALL_STATE(11)] = 31,
  [SMALL_STATE(12)] = 60,
  [SMALL_STATE(13)] = 88,
  [SMALL_STATE(14)] = 124,
  [SMALL_STATE(15)] = 152,
  [SMALL_STATE(16)] = 180,
  [SMALL_STATE(17)] = 218,
  [SMALL_STATE(18)] = 246,
  [SMALL_STATE(19)] = 274,
  [SMALL_STATE(20)] = 302,
  [SMALL_STATE(21)] = 330,
  [SMALL_STATE(22)] = 374,
  [SMALL_STATE(23)] = 416,
  [SMALL_STATE(24)] = 458,
  [SMALL_STATE(25)] = 492,
  [SMALL_STATE(26)] = 524,
  [SMALL_STATE(27)] = 556,
  [SMALL_STATE(28)] = 584,
  [SMALL_STATE(29)] = 612,
  [SMALL_STATE(30)] = 655,
  [SMALL_STATE(31)] = 695,
  [SMALL_STATE(32)] = 739,
  [SMALL_STATE(33)] = 779,
  [SMALL_STATE(34)] = 819,
  [SMALL_STATE(35)] = 859,
  [SMALL_STATE(36)] = 899,
  [SMALL_STATE(37)] = 939,
  [SMALL_STATE(38)] = 979,
  [SMALL_STATE(39)] = 1019,
  [SMALL_STATE(40)] = 1059,
  [SMALL_STATE(41)] = 1099,
  [SMALL_STATE(42)] = 1139,
  [SMALL_STATE(43)] = 1183,
  [SMALL_STATE(44)] = 1223,
  [SMALL_STATE(45)] = 1267,
  [SMALL_STATE(46)] = 1307,
  [SMALL_STATE(47)] = 1347,
  [SMALL_STATE(48)] = 1387,
  [SMALL_STATE(49)] = 1435,
  [SMALL_STATE(50)] = 1475,
  [SMALL_STATE(51)] = 1518,
  [SMALL_STATE(52)] = 1560,
  [SMALL_STATE(53)] = 1602,
  [SMALL_STATE(54)] = 1644,
  [SMALL_STATE(55)] = 1686,
  [SMALL_STATE(56)] = 1711,
  [SMALL_STATE(57)] = 1736,
  [SMALL_STATE(58)] = 1759,
  [SMALL_STATE(59)] = 1782,
  [SMALL_STATE(60)] = 1805,
  [SMALL_STATE(61)] = 1828,
  [SMALL_STATE(62)] = 1851,
  [SMALL_STATE(63)] = 1874,
  [SMALL_STATE(64)] = 1897,
  [SMALL_STATE(65)] = 1918,
  [SMALL_STATE(66)] = 1941,
  [SMALL_STATE(67)] = 1959,
  [SMALL_STATE(68)] = 1972,
  [SMALL_STATE(69)] = 1985,
  [SMALL_STATE(70)] = 1998,
  [SMALL_STATE(71)] = 2013,
  [SMALL_STATE(72)] = 2031,
  [SMALL_STATE(73)] = 2049,
  [SMALL_STATE(74)] = 2067,
  [SMALL_STATE(75)] = 2085,
  [SMALL_STATE(76)] = 2100,
  [SMALL_STATE(77)] = 2115,
  [SMALL_STATE(78)] = 2130,
  [SMALL_STATE(79)] = 2145,
  [SMALL_STATE(80)] = 2158,
  [SMALL_STATE(81)] = 2173,
  [SMALL_STATE(82)] = 2188,
  [SMALL_STATE(83)] = 2203,
  [SMALL_STATE(84)] = 2218,
  [SMALL_STATE(85)] = 2233,
  [SMALL_STATE(86)] = 2248,
  [SMALL_STATE(87)] = 2263,
  [SMALL_STATE(88)] = 2278,
  [SMALL_STATE(89)] = 2293,
  [SMALL_STATE(90)] = 2305,
  [SMALL_STATE(91)] = 2319,
  [SMALL_STATE(92)] = 2329,
  [SMALL_STATE(93)] = 2343,
  [SMALL_STATE(94)] = 2357,
  [SMALL_STATE(95)] = 2369,
  [SMALL_STATE(96)] = 2378,
  [SMALL_STATE(97)] = 2391,
  [SMALL_STATE(98)] = 2400,
  [SMALL_STATE(99)] = 2413,
  [SMALL_STATE(100)] = 2422,
  [SMALL_STATE(101)] = 2435,
  [SMALL_STATE(102)] = 2446,
  [SMALL_STATE(103)] = 2455,
  [SMALL_STATE(104)] = 2468,
  [SMALL_STATE(105)] = 2481,
  [SMALL_STATE(106)] = 2490,
  [SMALL_STATE(107)] = 2503,
  [SMALL_STATE(108)] = 2511,
  [SMALL_STATE(109)] = 2521,
  [SMALL_STATE(110)] = 2529,
  [SMALL_STATE(111)] = 2537,
  [SMALL_STATE(112)] = 2544,
  [SMALL_STATE(113)] = 2551,
  [SMALL_STATE(114)] = 2558,
  [SMALL_STATE(115)] = 2565,
  [SMALL_STATE(116)] = 2572,
  [SMALL_STATE(117)] = 2579,
  [SMALL_STATE(118)] = 2586,
  [SMALL_STATE(119)] = 2593,
  [SMALL_STATE(120)] = 2600,
  [SMALL_STATE(121)] = 2607,
  [SMALL_STATE(122)] = 2614,
  [SMALL_STATE(123)] = 2621,
  [SMALL_STATE(124)] = 2628,
  [SMALL_STATE(125)] = 2635,
  [SMALL_STATE(126)] = 2642,
  [SMALL_STATE(127)] = 2649,
  [SMALL_STATE(128)] = 2656,
  [SMALL_STATE(129)] = 2663,
  [SMALL_STATE(130)] = 2670,
  [SMALL_STATE(131)] = 2677,
  [SMALL_STATE(132)] = 2684,
  [SMALL_STATE(133)] = 2691,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT_EXTRA(),
  [5] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(107),
  [9] = {.entry = {.count = 1, .reusable = false}}, SHIFT(70),
  [11] = {.entry = {.count = 1, .reusable = false}}, SHIFT(107),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [17] = {.entry = {.count = 1, .reusable = false}}, SHIFT(122),
  [19] = {.entry = {.count = 1, .reusable = false}}, SHIFT(118),
  [21] = {.entry = {.count = 1, .reusable = false}}, SHIFT(6),
  [23] = {.entry = {.count = 1, .reusable = false}}, SHIFT(38),
  [25] = {.entry = {.count = 1, .reusable = false}}, SHIFT(39),
  [27] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [29] = {.entry = {.count = 1, .reusable = false}}, SHIFT(25),
  [31] = {.entry = {.count = 1, .reusable = false}}, SHIFT(20),
  [33] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [35] = {.entry = {.count = 1, .reusable = true}}, SHIFT(92),
  [37] = {.entry = {.count = 1, .reusable = true}}, SHIFT(124),
  [39] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__compound_statement_repeat1, 2), SHIFT_REPEAT(70),
  [42] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__compound_statement_repeat1, 2), SHIFT_REPEAT(107),
  [45] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__compound_statement_repeat1, 2), SHIFT_REPEAT(36),
  [48] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__compound_statement_repeat1, 2),
  [50] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__compound_statement_repeat1, 2), SHIFT_REPEAT(122),
  [53] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__compound_statement_repeat1, 2), SHIFT_REPEAT(118),
  [56] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__compound_statement_repeat1, 2), SHIFT_REPEAT(6),
  [59] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__compound_statement_repeat1, 2), SHIFT_REPEAT(38),
  [62] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__compound_statement_repeat1, 2), SHIFT_REPEAT(39),
  [65] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__compound_statement_repeat1, 2), SHIFT_REPEAT(39),
  [68] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__compound_statement_repeat1, 2), SHIFT_REPEAT(25),
  [71] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__compound_statement_repeat1, 2), SHIFT_REPEAT(20),
  [74] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__compound_statement_repeat1, 2), SHIFT_REPEAT(20),
  [77] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__compound_statement_repeat1, 2), SHIFT_REPEAT(92),
  [80] = {.entry = {.count = 1, .reusable = true}}, SHIFT(99),
  [82] = {.entry = {.count = 1, .reusable = true}}, SHIFT(97),
  [84] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__expression, 1),
  [86] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [88] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__expression, 1),
  [90] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__compound_statement_repeat1, 2),
  [92] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parenthesized_expression, 3),
  [94] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_parenthesized_expression, 3),
  [96] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_binary_expression, 3),
  [98] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [100] = {.entry = {.count = 1, .reusable = false}}, SHIFT(40),
  [102] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_binary_expression, 3),
  [104] = {.entry = {.count = 1, .reusable = false}}, SHIFT(33),
  [106] = {.entry = {.count = 1, .reusable = false}}, SHIFT(30),
  [108] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_funcall_expression, 3),
  [110] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_funcall_expression, 3),
  [112] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__string_literal, 4),
  [114] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__string_literal, 4),
  [116] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [118] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_unary_expression, 2),
  [120] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_unary_expression, 2),
  [122] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_funcall_expression, 4),
  [124] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_funcall_expression, 4),
  [126] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_literal, 1),
  [128] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_literal, 1),
  [130] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [132] = {.entry = {.count = 1, .reusable = false}}, SHIFT(34),
  [134] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [136] = {.entry = {.count = 1, .reusable = false}}, SHIFT(32),
  [138] = {.entry = {.count = 1, .reusable = false}}, SHIFT(43),
  [140] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__string_literal, 3),
  [142] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__string_literal, 3),
  [144] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_funcall_expression, 5),
  [146] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_funcall_expression, 5),
  [148] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [150] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [152] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_assignment_statement, 3),
  [154] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [156] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__expression_statement, 1),
  [158] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_return_statement, 2),
  [160] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [162] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [164] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_funcall_expression_repeat1, 2),
  [166] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [168] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [170] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [172] = {.entry = {.count = 1, .reusable = true}}, SHIFT(105),
  [174] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2),
  [176] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(107),
  [179] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1),
  [181] = {.entry = {.count = 1, .reusable = true}}, SHIFT(128),
  [183] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_definition, 6),
  [185] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_declaration, 4),
  [187] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_constant_definition, 5),
  [189] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable_definition, 5),
  [191] = {.entry = {.count = 1, .reusable = true}}, SHIFT(57),
  [193] = {.entry = {.count = 1, .reusable = true}}, SHIFT(116),
  [195] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable_definition, 4),
  [197] = {.entry = {.count = 1, .reusable = true}}, SHIFT(63),
  [199] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable_definition, 7),
  [201] = {.entry = {.count = 1, .reusable = true}}, SHIFT(60),
  [203] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable_definition, 6),
  [205] = {.entry = {.count = 1, .reusable = true}}, SHIFT(62),
  [207] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable_definition, 3),
  [209] = {.entry = {.count = 1, .reusable = true}}, SHIFT(65),
  [211] = {.entry = {.count = 1, .reusable = true}}, SHIFT(114),
  [213] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_variable_definition_repeat1, 2),
  [215] = {.entry = {.count = 1, .reusable = true}}, SHIFT(59),
  [217] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable_definition, 10),
  [219] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_variable_definition_repeat1, 2), SHIFT_REPEAT(116),
  [222] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable_definition, 8),
  [224] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable_definition, 2),
  [226] = {.entry = {.count = 1, .reusable = true}}, SHIFT(58),
  [228] = {.entry = {.count = 1, .reusable = true}}, SHIFT(123),
  [230] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable_definition, 9),
  [232] = {.entry = {.count = 1, .reusable = true}}, SHIFT(121),
  [234] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__string_literal_repeat1, 2), SHIFT_REPEAT(90),
  [237] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__string_literal_repeat1, 2),
  [239] = {.entry = {.count = 1, .reusable = false}}, SHIFT_EXTRA(),
  [241] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_variable_definition_repeat1, 4),
  [243] = {.entry = {.count = 1, .reusable = false}}, SHIFT(93),
  [245] = {.entry = {.count = 1, .reusable = false}}, SHIFT(111),
  [247] = {.entry = {.count = 1, .reusable = false}}, SHIFT(90),
  [249] = {.entry = {.count = 1, .reusable = false}}, SHIFT(126),
  [251] = {.entry = {.count = 1, .reusable = true}}, SHIFT(113),
  [253] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_if_statement, 7),
  [255] = {.entry = {.count = 1, .reusable = true}}, SHIFT(64),
  [257] = {.entry = {.count = 1, .reusable = true}}, SHIFT(131),
  [259] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__compound_statement, 3),
  [261] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [263] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__compound_statement, 2),
  [265] = {.entry = {.count = 1, .reusable = true}}, SHIFT(66),
  [267] = {.entry = {.count = 1, .reusable = true}}, SHIFT(112),
  [269] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_if_statement, 5),
  [271] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [273] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_while_statement, 5),
  [275] = {.entry = {.count = 1, .reusable = true}}, SHIFT(117),
  [277] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_funcall_expression_repeat1, 2), SHIFT_REPEAT(49),
  [280] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_do_while_statement, 6),
  [282] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_parameter_list_repeat1, 2), SHIFT_REPEAT(66),
  [285] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_parameter_list_repeat1, 2),
  [287] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_simple_type, 1),
  [289] = {.entry = {.count = 1, .reusable = true}}, SHIFT(68),
  [291] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [293] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__parameter, 2),
  [295] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [297] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter_list, 3),
  [299] = {.entry = {.count = 1, .reusable = true}}, SHIFT(73),
  [301] = {.entry = {.count = 1, .reusable = true}}, SHIFT(71),
  [303] = {.entry = {.count = 1, .reusable = true}}, SHIFT(120),
  [305] = {.entry = {.count = 1, .reusable = true}}, SHIFT(79),
  [307] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter_list, 4),
  [309] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [311] = {.entry = {.count = 1, .reusable = true}}, SHIFT(69),
  [313] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [315] = {.entry = {.count = 1, .reusable = true}}, SHIFT(74),
  [317] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [319] = {.entry = {.count = 1, .reusable = true}}, SHIFT(72),
  [321] = {.entry = {.count = 1, .reusable = true}}, SHIFT(67),
  [323] = {.entry = {.count = 1, .reusable = true}}, SHIFT(84),
  [325] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [327] = {.entry = {.count = 1, .reusable = true}}, SHIFT(109),
  [329] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter_list, 2),
  [331] = {.entry = {.count = 1, .reusable = true}}, SHIFT(108),
  [333] = {.entry = {.count = 1, .reusable = true}}, SHIFT(78),
  [335] = {.entry = {.count = 1, .reusable = true}}, SHIFT(61),
  [337] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [339] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
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
