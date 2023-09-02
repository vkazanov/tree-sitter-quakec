#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 117
#define LARGE_STATE_COUNT 10
#define SYMBOL_COUNT 73
#define ALIAS_COUNT 0
#define TOKEN_COUNT 44
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
  aux_sym__numeric_literal_token3 = 38,
  aux_sym__numeric_literal_token4 = 39,
  anon_sym_DQUOTE = 40,
  aux_sym__string_literal_token1 = 41,
  sym__builtin_literal = 42,
  sym_comment = 43,
  sym_source_file = 44,
  sym__definition = 45,
  sym_function_declaration = 46,
  sym_function_definition = 47,
  sym_constant_definition = 48,
  sym_variable_definition = 49,
  sym_simple_type = 50,
  sym_parameter_list = 51,
  sym__parameter = 52,
  sym__statement = 53,
  sym__compound_statement = 54,
  sym__simple_statement = 55,
  sym_assignment_statement = 56,
  sym_if_statement = 57,
  sym_while_statement = 58,
  sym_do_while_statement = 59,
  sym_return_statement = 60,
  sym__variable_definition_statement = 61,
  sym__expression_statement = 62,
  sym__expression = 63,
  sym_unary_expression = 64,
  sym_binary_expression = 65,
  sym_literal = 66,
  sym__numeric_literal = 67,
  sym__string_literal = 68,
  aux_sym_source_file_repeat1 = 69,
  aux_sym_variable_definition_repeat1 = 70,
  aux_sym_parameter_list_repeat1 = 71,
  aux_sym__compound_statement_repeat1 = 72,
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
  [aux_sym__numeric_literal_token3] = "_numeric_literal_token3",
  [aux_sym__numeric_literal_token4] = "_numeric_literal_token4",
  [anon_sym_DQUOTE] = "\"",
  [aux_sym__string_literal_token1] = "_string_literal_token1",
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
  [sym_literal] = "literal",
  [sym__numeric_literal] = "_numeric_literal",
  [sym__string_literal] = "_string_literal",
  [aux_sym_source_file_repeat1] = "source_file_repeat1",
  [aux_sym_variable_definition_repeat1] = "variable_definition_repeat1",
  [aux_sym_parameter_list_repeat1] = "parameter_list_repeat1",
  [aux_sym__compound_statement_repeat1] = "_compound_statement_repeat1",
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
  [aux_sym__numeric_literal_token3] = aux_sym__numeric_literal_token3,
  [aux_sym__numeric_literal_token4] = aux_sym__numeric_literal_token4,
  [anon_sym_DQUOTE] = anon_sym_DQUOTE,
  [aux_sym__string_literal_token1] = aux_sym__string_literal_token1,
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
  [sym_literal] = sym_literal,
  [sym__numeric_literal] = sym__numeric_literal,
  [sym__string_literal] = sym__string_literal,
  [aux_sym_source_file_repeat1] = aux_sym_source_file_repeat1,
  [aux_sym_variable_definition_repeat1] = aux_sym_variable_definition_repeat1,
  [aux_sym_parameter_list_repeat1] = aux_sym_parameter_list_repeat1,
  [aux_sym__compound_statement_repeat1] = aux_sym__compound_statement_repeat1,
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
  [aux_sym__numeric_literal_token3] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__numeric_literal_token4] = {
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
  [sym_literal] = {
    .visible = true,
    .named = true,
  },
  [sym__numeric_literal] = {
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
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(78);
      if (lookahead == '!') ADVANCE(116);
      if (lookahead == '"') ADVANCE(167);
      if (lookahead == '#') ADVANCE(66);
      if (lookahead == '&') ADVANCE(118);
      if (lookahead == '(') ADVANCE(96);
      if (lookahead == ')') ADVANCE(97);
      if (lookahead == '*') ADVANCE(112);
      if (lookahead == '+') ADVANCE(111);
      if (lookahead == ',') ADVANCE(83);
      if (lookahead == '-') ADVANCE(110);
      if (lookahead == '/') ADVANCE(113);
      if (lookahead == ';') ADVANCE(79);
      if (lookahead == '<') ADVANCE(124);
      if (lookahead == '=') ADVANCE(80);
      if (lookahead == '>') ADVANCE(121);
      if (lookahead == '\\') SKIP(77)
      if (lookahead == '`') ADVANCE(17);
      if (lookahead == 'd') ADVANCE(49);
      if (lookahead == 'e') ADVANCE(43);
      if (lookahead == 'f') ADVANCE(45);
      if (lookahead == 'i') ADVANCE(35);
      if (lookahead == 'l') ADVANCE(50);
      if (lookahead == 'r') ADVANCE(34);
      if (lookahead == 's') ADVANCE(57);
      if (lookahead == 'v') ADVANCE(33);
      if (lookahead == 'w') ADVANCE(37);
      if (lookahead == '{') ADVANCE(98);
      if (lookahead == '|') ADVANCE(117);
      if (lookahead == '}') ADVANCE(99);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(163);
      END_STATE();
    case 1:
      if (lookahead == '\n') SKIP(12)
      END_STATE();
    case 2:
      if (lookahead == '\n') SKIP(12)
      if (lookahead == '\r') SKIP(1)
      END_STATE();
    case 3:
      if (lookahead == '\n') SKIP(11)
      END_STATE();
    case 4:
      if (lookahead == '\n') SKIP(11)
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
      if (lookahead == ' ') ADVANCE(20);
      if (lookahead == '.') ADVANCE(73);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(7);
      END_STATE();
    case 8:
      if (lookahead == ' ') ADVANCE(18);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(8);
      END_STATE();
    case 9:
      if (lookahead == ' ') ADVANCE(19);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(9);
      END_STATE();
    case 10:
      if (lookahead == ' ') ADVANCE(21);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(10);
      END_STATE();
    case 11:
      if (lookahead == '!') ADVANCE(116);
      if (lookahead == '&') ADVANCE(118);
      if (lookahead == ')') ADVANCE(97);
      if (lookahead == '*') ADVANCE(112);
      if (lookahead == '+') ADVANCE(111);
      if (lookahead == ',') ADVANCE(83);
      if (lookahead == '-') ADVANCE(109);
      if (lookahead == '/') ADVANCE(113);
      if (lookahead == ';') ADVANCE(79);
      if (lookahead == '<') ADVANCE(124);
      if (lookahead == '=') ADVANCE(80);
      if (lookahead == '>') ADVANCE(121);
      if (lookahead == '\\') SKIP(4)
      if (lookahead == 'e') ADVANCE(42);
      if (lookahead == 'w') ADVANCE(37);
      if (lookahead == '|') ADVANCE(117);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(11)
      END_STATE();
    case 12:
      if (lookahead == '"') ADVANCE(167);
      if (lookahead == '#') ADVANCE(66);
      if (lookahead == '+') ADVANCE(111);
      if (lookahead == '-') ADVANCE(110);
      if (lookahead == '/') ADVANCE(14);
      if (lookahead == '\\') SKIP(2)
      if (lookahead == '`') ADVANCE(17);
      if (lookahead == 'd') ADVANCE(146);
      if (lookahead == 'e') ADVANCE(145);
      if (lookahead == 'f') ADVANCE(142);
      if (lookahead == 'i') ADVANCE(133);
      if (lookahead == 'l') ADVANCE(147);
      if (lookahead == 'r') ADVANCE(132);
      if (lookahead == 's') ADVANCE(153);
      if (lookahead == 'v') ADVANCE(131);
      if (lookahead == 'w') ADVANCE(135);
      if (lookahead == '{') ADVANCE(98);
      if (lookahead == '}') ADVANCE(99);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(12)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(163);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(162);
      END_STATE();
    case 13:
      if (lookahead == '"') ADVANCE(167);
      if (lookahead == '(') ADVANCE(96);
      if (lookahead == '+') ADVANCE(111);
      if (lookahead == '-') ADVANCE(110);
      if (lookahead == '/') ADVANCE(14);
      if (lookahead == '\\') SKIP(6)
      if (lookahead == '`') ADVANCE(17);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(13)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(163);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(162);
      END_STATE();
    case 14:
      if (lookahead == '*') ADVANCE(16);
      if (lookahead == '/') ADVANCE(178);
      END_STATE();
    case 15:
      if (lookahead == '*') ADVANCE(15);
      if (lookahead == '/') ADVANCE(177);
      if (lookahead != 0) ADVANCE(16);
      END_STATE();
    case 16:
      if (lookahead == '*') ADVANCE(15);
      if (lookahead != 0) ADVANCE(16);
      END_STATE();
    case 17:
      if (lookahead == '-') ADVANCE(67);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(7);
      END_STATE();
    case 18:
      if (lookahead == '-') ADVANCE(70);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(24);
      END_STATE();
    case 19:
      if (lookahead == '-') ADVANCE(71);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(23);
      END_STATE();
    case 20:
      if (lookahead == '-') ADVANCE(69);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(8);
      END_STATE();
    case 21:
      if (lookahead == '-') ADVANCE(74);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(22);
      END_STATE();
    case 22:
      if (lookahead == '.') ADVANCE(72);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(22);
      END_STATE();
    case 23:
      if (lookahead == '.') ADVANCE(75);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(23);
      END_STATE();
    case 24:
      if (lookahead == '`') ADVANCE(165);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(24);
      END_STATE();
    case 25:
      if (lookahead == '`') ADVANCE(166);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(25);
      END_STATE();
    case 26:
      if (lookahead == 'a') ADVANCE(44);
      END_STATE();
    case 27:
      if (lookahead == 'a') ADVANCE(61);
      END_STATE();
    case 28:
      if (lookahead == 'c') ADVANCE(26);
      END_STATE();
    case 29:
      if (lookahead == 'c') ADVANCE(63);
      END_STATE();
    case 30:
      if (lookahead == 'd') ADVANCE(84);
      END_STATE();
    case 31:
      if (lookahead == 'e') ADVANCE(102);
      END_STATE();
    case 32:
      if (lookahead == 'e') ADVANCE(103);
      END_STATE();
    case 33:
      if (lookahead == 'e') ADVANCE(29);
      if (lookahead == 'o') ADVANCE(38);
      END_STATE();
    case 34:
      if (lookahead == 'e') ADVANCE(59);
      END_STATE();
    case 35:
      if (lookahead == 'f') ADVANCE(100);
      if (lookahead == 'n') ADVANCE(58);
      END_STATE();
    case 36:
      if (lookahead == 'g') ADVANCE(92);
      END_STATE();
    case 37:
      if (lookahead == 'h') ADVANCE(40);
      END_STATE();
    case 38:
      if (lookahead == 'i') ADVANCE(30);
      END_STATE();
    case 39:
      if (lookahead == 'i') ADVANCE(47);
      END_STATE();
    case 40:
      if (lookahead == 'i') ADVANCE(46);
      END_STATE();
    case 41:
      if (lookahead == 'i') ADVANCE(60);
      END_STATE();
    case 42:
      if (lookahead == 'l') ADVANCE(56);
      END_STATE();
    case 43:
      if (lookahead == 'l') ADVANCE(56);
      if (lookahead == 'n') ADVANCE(62);
      END_STATE();
    case 44:
      if (lookahead == 'l') ADVANCE(81);
      END_STATE();
    case 45:
      if (lookahead == 'l') ADVANCE(51);
      END_STATE();
    case 46:
      if (lookahead == 'l') ADVANCE(32);
      END_STATE();
    case 47:
      if (lookahead == 'n') ADVANCE(36);
      END_STATE();
    case 48:
      if (lookahead == 'n') ADVANCE(107);
      END_STATE();
    case 49:
      if (lookahead == 'o') ADVANCE(105);
      END_STATE();
    case 50:
      if (lookahead == 'o') ADVANCE(28);
      END_STATE();
    case 51:
      if (lookahead == 'o') ADVANCE(27);
      END_STATE();
    case 52:
      if (lookahead == 'o') ADVANCE(53);
      END_STATE();
    case 53:
      if (lookahead == 'r') ADVANCE(90);
      END_STATE();
    case 54:
      if (lookahead == 'r') ADVANCE(48);
      END_STATE();
    case 55:
      if (lookahead == 'r') ADVANCE(39);
      END_STATE();
    case 56:
      if (lookahead == 's') ADVANCE(31);
      END_STATE();
    case 57:
      if (lookahead == 't') ADVANCE(55);
      END_STATE();
    case 58:
      if (lookahead == 't') ADVANCE(94);
      END_STATE();
    case 59:
      if (lookahead == 't') ADVANCE(64);
      END_STATE();
    case 60:
      if (lookahead == 't') ADVANCE(65);
      END_STATE();
    case 61:
      if (lookahead == 't') ADVANCE(88);
      END_STATE();
    case 62:
      if (lookahead == 't') ADVANCE(41);
      END_STATE();
    case 63:
      if (lookahead == 't') ADVANCE(52);
      END_STATE();
    case 64:
      if (lookahead == 'u') ADVANCE(54);
      END_STATE();
    case 65:
      if (lookahead == 'y') ADVANCE(86);
      END_STATE();
    case 66:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(176);
      END_STATE();
    case 67:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(7);
      END_STATE();
    case 68:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(164);
      END_STATE();
    case 69:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(8);
      END_STATE();
    case 70:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(24);
      END_STATE();
    case 71:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(23);
      END_STATE();
    case 72:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(25);
      END_STATE();
    case 73:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(9);
      END_STATE();
    case 74:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(22);
      END_STATE();
    case 75:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(10);
      END_STATE();
    case 76:
      if (eof) ADVANCE(78);
      if (lookahead == '\n') SKIP(0)
      END_STATE();
    case 77:
      if (eof) ADVANCE(78);
      if (lookahead == '\n') SKIP(0)
      if (lookahead == '\r') SKIP(76)
      END_STATE();
    case 78:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 79:
      ACCEPT_TOKEN(anon_sym_SEMI);
      END_STATE();
    case 80:
      ACCEPT_TOKEN(anon_sym_EQ);
      if (lookahead == '=') ADVANCE(119);
      END_STATE();
    case 81:
      ACCEPT_TOKEN(anon_sym_local);
      END_STATE();
    case 82:
      ACCEPT_TOKEN(anon_sym_local);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(162);
      END_STATE();
    case 83:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 84:
      ACCEPT_TOKEN(anon_sym_void);
      END_STATE();
    case 85:
      ACCEPT_TOKEN(anon_sym_void);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(162);
      END_STATE();
    case 86:
      ACCEPT_TOKEN(anon_sym_entity);
      END_STATE();
    case 87:
      ACCEPT_TOKEN(anon_sym_entity);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(162);
      END_STATE();
    case 88:
      ACCEPT_TOKEN(anon_sym_float);
      END_STATE();
    case 89:
      ACCEPT_TOKEN(anon_sym_float);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(162);
      END_STATE();
    case 90:
      ACCEPT_TOKEN(anon_sym_vector);
      END_STATE();
    case 91:
      ACCEPT_TOKEN(anon_sym_vector);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(162);
      END_STATE();
    case 92:
      ACCEPT_TOKEN(anon_sym_string);
      END_STATE();
    case 93:
      ACCEPT_TOKEN(anon_sym_string);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(162);
      END_STATE();
    case 94:
      ACCEPT_TOKEN(anon_sym_int);
      END_STATE();
    case 95:
      ACCEPT_TOKEN(anon_sym_int);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(162);
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
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(162);
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
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(162);
      END_STATE();
    case 105:
      ACCEPT_TOKEN(anon_sym_do);
      END_STATE();
    case 106:
      ACCEPT_TOKEN(anon_sym_do);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(162);
      END_STATE();
    case 107:
      ACCEPT_TOKEN(anon_sym_return);
      END_STATE();
    case 108:
      ACCEPT_TOKEN(anon_sym_return);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(162);
      END_STATE();
    case 109:
      ACCEPT_TOKEN(anon_sym_DASH);
      END_STATE();
    case 110:
      ACCEPT_TOKEN(anon_sym_DASH);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(163);
      END_STATE();
    case 111:
      ACCEPT_TOKEN(anon_sym_PLUS);
      END_STATE();
    case 112:
      ACCEPT_TOKEN(anon_sym_STAR);
      END_STATE();
    case 113:
      ACCEPT_TOKEN(anon_sym_SLASH);
      if (lookahead == '*') ADVANCE(16);
      if (lookahead == '/') ADVANCE(178);
      END_STATE();
    case 114:
      ACCEPT_TOKEN(anon_sym_PIPE_PIPE);
      END_STATE();
    case 115:
      ACCEPT_TOKEN(anon_sym_AMP_AMP);
      END_STATE();
    case 116:
      ACCEPT_TOKEN(anon_sym_BANG);
      if (lookahead == '=') ADVANCE(120);
      END_STATE();
    case 117:
      ACCEPT_TOKEN(anon_sym_PIPE);
      if (lookahead == '|') ADVANCE(114);
      END_STATE();
    case 118:
      ACCEPT_TOKEN(anon_sym_AMP);
      if (lookahead == '&') ADVANCE(115);
      END_STATE();
    case 119:
      ACCEPT_TOKEN(anon_sym_EQ_EQ);
      END_STATE();
    case 120:
      ACCEPT_TOKEN(anon_sym_BANG_EQ);
      END_STATE();
    case 121:
      ACCEPT_TOKEN(anon_sym_GT);
      if (lookahead == '=') ADVANCE(122);
      END_STATE();
    case 122:
      ACCEPT_TOKEN(anon_sym_GT_EQ);
      END_STATE();
    case 123:
      ACCEPT_TOKEN(anon_sym_LT_EQ);
      END_STATE();
    case 124:
      ACCEPT_TOKEN(anon_sym_LT);
      if (lookahead == '=') ADVANCE(123);
      END_STATE();
    case 125:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(140);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(162);
      END_STATE();
    case 126:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(157);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(162);
      END_STATE();
    case 127:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'c') ADVANCE(125);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(162);
      END_STATE();
    case 128:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'c') ADVANCE(159);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(162);
      END_STATE();
    case 129:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'd') ADVANCE(85);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(162);
      END_STATE();
    case 130:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(104);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(162);
      END_STATE();
    case 131:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(128);
      if (lookahead == 'o') ADVANCE(136);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(162);
      END_STATE();
    case 132:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(155);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(162);
      END_STATE();
    case 133:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'f') ADVANCE(101);
      if (lookahead == 'n') ADVANCE(154);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(162);
      END_STATE();
    case 134:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'g') ADVANCE(93);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(162);
      END_STATE();
    case 135:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'h') ADVANCE(138);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(162);
      END_STATE();
    case 136:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(129);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(162);
      END_STATE();
    case 137:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(143);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(162);
      END_STATE();
    case 138:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(141);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(162);
      END_STATE();
    case 139:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(156);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(162);
      END_STATE();
    case 140:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(82);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(162);
      END_STATE();
    case 141:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(130);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(162);
      END_STATE();
    case 142:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(148);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(162);
      END_STATE();
    case 143:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(134);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(162);
      END_STATE();
    case 144:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(108);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(162);
      END_STATE();
    case 145:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(158);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(162);
      END_STATE();
    case 146:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(106);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(162);
      END_STATE();
    case 147:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(127);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(162);
      END_STATE();
    case 148:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(126);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(162);
      END_STATE();
    case 149:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(150);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(162);
      END_STATE();
    case 150:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(91);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(162);
      END_STATE();
    case 151:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(144);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(162);
      END_STATE();
    case 152:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(137);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(162);
      END_STATE();
    case 153:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(152);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(162);
      END_STATE();
    case 154:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(95);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(162);
      END_STATE();
    case 155:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(160);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(162);
      END_STATE();
    case 156:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(161);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(162);
      END_STATE();
    case 157:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(89);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(162);
      END_STATE();
    case 158:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(139);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(162);
      END_STATE();
    case 159:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(149);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(162);
      END_STATE();
    case 160:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'u') ADVANCE(151);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(162);
      END_STATE();
    case 161:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'y') ADVANCE(87);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(162);
      END_STATE();
    case 162:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(162);
      END_STATE();
    case 163:
      ACCEPT_TOKEN(aux_sym__numeric_literal_token1);
      if (lookahead == '.') ADVANCE(68);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(163);
      END_STATE();
    case 164:
      ACCEPT_TOKEN(aux_sym__numeric_literal_token2);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(164);
      END_STATE();
    case 165:
      ACCEPT_TOKEN(aux_sym__numeric_literal_token3);
      END_STATE();
    case 166:
      ACCEPT_TOKEN(aux_sym__numeric_literal_token4);
      END_STATE();
    case 167:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 168:
      ACCEPT_TOKEN(aux_sym__string_literal_token1);
      if (lookahead == '\n') ADVANCE(174);
      if (lookahead == '\r') ADVANCE(169);
      if (lookahead != 0 &&
          lookahead != '"') ADVANCE(175);
      END_STATE();
    case 169:
      ACCEPT_TOKEN(aux_sym__string_literal_token1);
      if (lookahead == '\n') ADVANCE(174);
      if (lookahead != 0 &&
          lookahead != '"') ADVANCE(175);
      END_STATE();
    case 170:
      ACCEPT_TOKEN(aux_sym__string_literal_token1);
      if (lookahead == '\n') ADVANCE(175);
      if (lookahead == '"') ADVANCE(178);
      if (lookahead != 0) ADVANCE(170);
      END_STATE();
    case 171:
      ACCEPT_TOKEN(aux_sym__string_literal_token1);
      if (lookahead == '"') ADVANCE(16);
      if (lookahead == '*') ADVANCE(171);
      if (lookahead == '/') ADVANCE(175);
      if (lookahead != 0) ADVANCE(172);
      END_STATE();
    case 172:
      ACCEPT_TOKEN(aux_sym__string_literal_token1);
      if (lookahead == '"') ADVANCE(16);
      if (lookahead == '*') ADVANCE(171);
      if (lookahead != 0) ADVANCE(172);
      END_STATE();
    case 173:
      ACCEPT_TOKEN(aux_sym__string_literal_token1);
      if (lookahead == '*') ADVANCE(172);
      if (lookahead == '/') ADVANCE(170);
      if (lookahead != 0 &&
          lookahead != '"') ADVANCE(175);
      END_STATE();
    case 174:
      ACCEPT_TOKEN(aux_sym__string_literal_token1);
      if (lookahead == '/') ADVANCE(173);
      if (lookahead == '\\') ADVANCE(168);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(174);
      if (lookahead != 0 &&
          lookahead != '"') ADVANCE(175);
      END_STATE();
    case 175:
      ACCEPT_TOKEN(aux_sym__string_literal_token1);
      if (lookahead != 0 &&
          lookahead != '"') ADVANCE(175);
      END_STATE();
    case 176:
      ACCEPT_TOKEN(sym__builtin_literal);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(176);
      END_STATE();
    case 177:
      ACCEPT_TOKEN(sym_comment);
      END_STATE();
    case 178:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(178);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 0},
  [2] = {.lex_state = 12},
  [3] = {.lex_state = 12},
  [4] = {.lex_state = 12},
  [5] = {.lex_state = 12},
  [6] = {.lex_state = 12},
  [7] = {.lex_state = 12},
  [8] = {.lex_state = 12},
  [9] = {.lex_state = 12},
  [10] = {.lex_state = 11},
  [11] = {.lex_state = 12},
  [12] = {.lex_state = 11},
  [13] = {.lex_state = 11},
  [14] = {.lex_state = 11},
  [15] = {.lex_state = 11},
  [16] = {.lex_state = 11},
  [17] = {.lex_state = 11},
  [18] = {.lex_state = 11},
  [19] = {.lex_state = 11},
  [20] = {.lex_state = 11},
  [21] = {.lex_state = 11},
  [22] = {.lex_state = 11},
  [23] = {.lex_state = 11},
  [24] = {.lex_state = 11},
  [25] = {.lex_state = 11},
  [26] = {.lex_state = 11},
  [27] = {.lex_state = 11},
  [28] = {.lex_state = 11},
  [29] = {.lex_state = 13},
  [30] = {.lex_state = 13},
  [31] = {.lex_state = 13},
  [32] = {.lex_state = 13},
  [33] = {.lex_state = 13},
  [34] = {.lex_state = 13},
  [35] = {.lex_state = 13},
  [36] = {.lex_state = 13},
  [37] = {.lex_state = 13},
  [38] = {.lex_state = 13},
  [39] = {.lex_state = 13},
  [40] = {.lex_state = 13},
  [41] = {.lex_state = 13},
  [42] = {.lex_state = 13},
  [43] = {.lex_state = 0},
  [44] = {.lex_state = 0},
  [45] = {.lex_state = 0},
  [46] = {.lex_state = 0},
  [47] = {.lex_state = 0},
  [48] = {.lex_state = 0},
  [49] = {.lex_state = 0},
  [50] = {.lex_state = 0},
  [51] = {.lex_state = 0},
  [52] = {.lex_state = 0},
  [53] = {.lex_state = 0},
  [54] = {.lex_state = 0},
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
  [82] = {.lex_state = 13},
  [83] = {.lex_state = 0},
  [84] = {.lex_state = 0},
  [85] = {.lex_state = 0},
  [86] = {.lex_state = 0},
  [87] = {.lex_state = 0},
  [88] = {.lex_state = 0},
  [89] = {.lex_state = 0},
  [90] = {.lex_state = 0},
  [91] = {.lex_state = 0},
  [92] = {.lex_state = 13},
  [93] = {.lex_state = 0},
  [94] = {.lex_state = 13},
  [95] = {.lex_state = 0},
  [96] = {.lex_state = 13},
  [97] = {.lex_state = 13},
  [98] = {.lex_state = 13},
  [99] = {.lex_state = 0},
  [100] = {.lex_state = 0},
  [101] = {.lex_state = 13},
  [102] = {.lex_state = 13},
  [103] = {.lex_state = 13},
  [104] = {.lex_state = 0},
  [105] = {.lex_state = 13},
  [106] = {.lex_state = 13},
  [107] = {.lex_state = 0},
  [108] = {.lex_state = 13},
  [109] = {.lex_state = 174},
  [110] = {.lex_state = 0},
  [111] = {.lex_state = 0},
  [112] = {.lex_state = 0},
  [113] = {.lex_state = 0},
  [114] = {.lex_state = 0},
  [115] = {.lex_state = 13},
  [116] = {.lex_state = 13},
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
    [aux_sym__numeric_literal_token3] = ACTIONS(1),
    [aux_sym__numeric_literal_token4] = ACTIONS(1),
    [anon_sym_DQUOTE] = ACTIONS(1),
    [sym__builtin_literal] = ACTIONS(1),
    [sym_comment] = ACTIONS(3),
  },
  [1] = {
    [sym_source_file] = STATE(110),
    [sym__definition] = STATE(43),
    [sym_function_declaration] = STATE(43),
    [sym_function_definition] = STATE(43),
    [sym_constant_definition] = STATE(43),
    [sym_simple_type] = STATE(82),
    [aux_sym_source_file_repeat1] = STATE(43),
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
    [sym_variable_definition] = STATE(114),
    [sym_simple_type] = STATE(115),
    [sym__statement] = STATE(114),
    [sym__compound_statement] = STATE(114),
    [sym__simple_statement] = STATE(114),
    [sym_assignment_statement] = STATE(114),
    [sym_if_statement] = STATE(114),
    [sym_while_statement] = STATE(114),
    [sym_do_while_statement] = STATE(114),
    [sym_return_statement] = STATE(114),
    [sym__variable_definition_statement] = STATE(114),
    [sym__expression_statement] = STATE(114),
    [sym__expression] = STATE(25),
    [sym_unary_expression] = STATE(25),
    [sym_binary_expression] = STATE(25),
    [sym_literal] = STATE(25),
    [sym__numeric_literal] = STATE(10),
    [sym__string_literal] = STATE(10),
    [anon_sym_local] = ACTIONS(9),
    [anon_sym_void] = ACTIONS(11),
    [anon_sym_entity] = ACTIONS(11),
    [anon_sym_float] = ACTIONS(11),
    [anon_sym_vector] = ACTIONS(11),
    [anon_sym_string] = ACTIONS(11),
    [anon_sym_int] = ACTIONS(11),
    [anon_sym_LBRACE] = ACTIONS(13),
    [anon_sym_if] = ACTIONS(15),
    [anon_sym_while] = ACTIONS(17),
    [anon_sym_do] = ACTIONS(19),
    [anon_sym_return] = ACTIONS(21),
    [anon_sym_DASH] = ACTIONS(23),
    [anon_sym_PLUS] = ACTIONS(25),
    [sym_identifier] = ACTIONS(27),
    [aux_sym__numeric_literal_token1] = ACTIONS(29),
    [aux_sym__numeric_literal_token2] = ACTIONS(31),
    [aux_sym__numeric_literal_token3] = ACTIONS(31),
    [aux_sym__numeric_literal_token4] = ACTIONS(31),
    [anon_sym_DQUOTE] = ACTIONS(33),
    [sym__builtin_literal] = ACTIONS(35),
    [sym_comment] = ACTIONS(3),
  },
  [3] = {
    [sym_variable_definition] = STATE(104),
    [sym_simple_type] = STATE(115),
    [sym__statement] = STATE(104),
    [sym__compound_statement] = STATE(104),
    [sym__simple_statement] = STATE(104),
    [sym_assignment_statement] = STATE(104),
    [sym_if_statement] = STATE(104),
    [sym_while_statement] = STATE(104),
    [sym_do_while_statement] = STATE(104),
    [sym_return_statement] = STATE(104),
    [sym__variable_definition_statement] = STATE(104),
    [sym__expression_statement] = STATE(104),
    [sym__expression] = STATE(25),
    [sym_unary_expression] = STATE(25),
    [sym_binary_expression] = STATE(25),
    [sym_literal] = STATE(25),
    [sym__numeric_literal] = STATE(10),
    [sym__string_literal] = STATE(10),
    [anon_sym_local] = ACTIONS(9),
    [anon_sym_void] = ACTIONS(11),
    [anon_sym_entity] = ACTIONS(11),
    [anon_sym_float] = ACTIONS(11),
    [anon_sym_vector] = ACTIONS(11),
    [anon_sym_string] = ACTIONS(11),
    [anon_sym_int] = ACTIONS(11),
    [anon_sym_LBRACE] = ACTIONS(13),
    [anon_sym_if] = ACTIONS(15),
    [anon_sym_while] = ACTIONS(17),
    [anon_sym_do] = ACTIONS(19),
    [anon_sym_return] = ACTIONS(21),
    [anon_sym_DASH] = ACTIONS(23),
    [anon_sym_PLUS] = ACTIONS(25),
    [sym_identifier] = ACTIONS(27),
    [aux_sym__numeric_literal_token1] = ACTIONS(29),
    [aux_sym__numeric_literal_token2] = ACTIONS(31),
    [aux_sym__numeric_literal_token3] = ACTIONS(31),
    [aux_sym__numeric_literal_token4] = ACTIONS(31),
    [anon_sym_DQUOTE] = ACTIONS(33),
    [sym_comment] = ACTIONS(3),
  },
  [4] = {
    [sym_variable_definition] = STATE(84),
    [sym_simple_type] = STATE(115),
    [sym__statement] = STATE(84),
    [sym__compound_statement] = STATE(84),
    [sym__simple_statement] = STATE(84),
    [sym_assignment_statement] = STATE(84),
    [sym_if_statement] = STATE(84),
    [sym_while_statement] = STATE(84),
    [sym_do_while_statement] = STATE(84),
    [sym_return_statement] = STATE(84),
    [sym__variable_definition_statement] = STATE(84),
    [sym__expression_statement] = STATE(84),
    [sym__expression] = STATE(25),
    [sym_unary_expression] = STATE(25),
    [sym_binary_expression] = STATE(25),
    [sym_literal] = STATE(25),
    [sym__numeric_literal] = STATE(10),
    [sym__string_literal] = STATE(10),
    [anon_sym_local] = ACTIONS(9),
    [anon_sym_void] = ACTIONS(11),
    [anon_sym_entity] = ACTIONS(11),
    [anon_sym_float] = ACTIONS(11),
    [anon_sym_vector] = ACTIONS(11),
    [anon_sym_string] = ACTIONS(11),
    [anon_sym_int] = ACTIONS(11),
    [anon_sym_LBRACE] = ACTIONS(13),
    [anon_sym_if] = ACTIONS(15),
    [anon_sym_while] = ACTIONS(17),
    [anon_sym_do] = ACTIONS(19),
    [anon_sym_return] = ACTIONS(21),
    [anon_sym_DASH] = ACTIONS(23),
    [anon_sym_PLUS] = ACTIONS(25),
    [sym_identifier] = ACTIONS(27),
    [aux_sym__numeric_literal_token1] = ACTIONS(29),
    [aux_sym__numeric_literal_token2] = ACTIONS(31),
    [aux_sym__numeric_literal_token3] = ACTIONS(31),
    [aux_sym__numeric_literal_token4] = ACTIONS(31),
    [anon_sym_DQUOTE] = ACTIONS(33),
    [sym_comment] = ACTIONS(3),
  },
  [5] = {
    [sym_variable_definition] = STATE(89),
    [sym_simple_type] = STATE(115),
    [sym__statement] = STATE(89),
    [sym__compound_statement] = STATE(89),
    [sym__simple_statement] = STATE(89),
    [sym_assignment_statement] = STATE(89),
    [sym_if_statement] = STATE(89),
    [sym_while_statement] = STATE(89),
    [sym_do_while_statement] = STATE(89),
    [sym_return_statement] = STATE(89),
    [sym__variable_definition_statement] = STATE(89),
    [sym__expression_statement] = STATE(89),
    [sym__expression] = STATE(25),
    [sym_unary_expression] = STATE(25),
    [sym_binary_expression] = STATE(25),
    [sym_literal] = STATE(25),
    [sym__numeric_literal] = STATE(10),
    [sym__string_literal] = STATE(10),
    [anon_sym_local] = ACTIONS(9),
    [anon_sym_void] = ACTIONS(11),
    [anon_sym_entity] = ACTIONS(11),
    [anon_sym_float] = ACTIONS(11),
    [anon_sym_vector] = ACTIONS(11),
    [anon_sym_string] = ACTIONS(11),
    [anon_sym_int] = ACTIONS(11),
    [anon_sym_LBRACE] = ACTIONS(13),
    [anon_sym_if] = ACTIONS(15),
    [anon_sym_while] = ACTIONS(17),
    [anon_sym_do] = ACTIONS(19),
    [anon_sym_return] = ACTIONS(21),
    [anon_sym_DASH] = ACTIONS(23),
    [anon_sym_PLUS] = ACTIONS(25),
    [sym_identifier] = ACTIONS(27),
    [aux_sym__numeric_literal_token1] = ACTIONS(29),
    [aux_sym__numeric_literal_token2] = ACTIONS(31),
    [aux_sym__numeric_literal_token3] = ACTIONS(31),
    [aux_sym__numeric_literal_token4] = ACTIONS(31),
    [anon_sym_DQUOTE] = ACTIONS(33),
    [sym_comment] = ACTIONS(3),
  },
  [6] = {
    [sym_variable_definition] = STATE(88),
    [sym_simple_type] = STATE(115),
    [sym__statement] = STATE(88),
    [sym__compound_statement] = STATE(88),
    [sym__simple_statement] = STATE(88),
    [sym_assignment_statement] = STATE(88),
    [sym_if_statement] = STATE(88),
    [sym_while_statement] = STATE(88),
    [sym_do_while_statement] = STATE(88),
    [sym_return_statement] = STATE(88),
    [sym__variable_definition_statement] = STATE(88),
    [sym__expression_statement] = STATE(88),
    [sym__expression] = STATE(25),
    [sym_unary_expression] = STATE(25),
    [sym_binary_expression] = STATE(25),
    [sym_literal] = STATE(25),
    [sym__numeric_literal] = STATE(10),
    [sym__string_literal] = STATE(10),
    [anon_sym_local] = ACTIONS(9),
    [anon_sym_void] = ACTIONS(11),
    [anon_sym_entity] = ACTIONS(11),
    [anon_sym_float] = ACTIONS(11),
    [anon_sym_vector] = ACTIONS(11),
    [anon_sym_string] = ACTIONS(11),
    [anon_sym_int] = ACTIONS(11),
    [anon_sym_LBRACE] = ACTIONS(13),
    [anon_sym_if] = ACTIONS(15),
    [anon_sym_while] = ACTIONS(17),
    [anon_sym_do] = ACTIONS(19),
    [anon_sym_return] = ACTIONS(21),
    [anon_sym_DASH] = ACTIONS(23),
    [anon_sym_PLUS] = ACTIONS(25),
    [sym_identifier] = ACTIONS(27),
    [aux_sym__numeric_literal_token1] = ACTIONS(29),
    [aux_sym__numeric_literal_token2] = ACTIONS(31),
    [aux_sym__numeric_literal_token3] = ACTIONS(31),
    [aux_sym__numeric_literal_token4] = ACTIONS(31),
    [anon_sym_DQUOTE] = ACTIONS(33),
    [sym_comment] = ACTIONS(3),
  },
  [7] = {
    [sym_variable_definition] = STATE(100),
    [sym_simple_type] = STATE(115),
    [sym__simple_statement] = STATE(100),
    [sym_assignment_statement] = STATE(100),
    [sym_if_statement] = STATE(100),
    [sym_while_statement] = STATE(100),
    [sym_do_while_statement] = STATE(100),
    [sym_return_statement] = STATE(100),
    [sym__variable_definition_statement] = STATE(100),
    [sym__expression_statement] = STATE(100),
    [sym__expression] = STATE(25),
    [sym_unary_expression] = STATE(25),
    [sym_binary_expression] = STATE(25),
    [sym_literal] = STATE(25),
    [sym__numeric_literal] = STATE(10),
    [sym__string_literal] = STATE(10),
    [aux_sym__compound_statement_repeat1] = STATE(8),
    [anon_sym_local] = ACTIONS(9),
    [anon_sym_void] = ACTIONS(11),
    [anon_sym_entity] = ACTIONS(11),
    [anon_sym_float] = ACTIONS(11),
    [anon_sym_vector] = ACTIONS(11),
    [anon_sym_string] = ACTIONS(11),
    [anon_sym_int] = ACTIONS(11),
    [anon_sym_RBRACE] = ACTIONS(37),
    [anon_sym_if] = ACTIONS(15),
    [anon_sym_while] = ACTIONS(17),
    [anon_sym_do] = ACTIONS(19),
    [anon_sym_return] = ACTIONS(21),
    [anon_sym_DASH] = ACTIONS(23),
    [anon_sym_PLUS] = ACTIONS(25),
    [sym_identifier] = ACTIONS(27),
    [aux_sym__numeric_literal_token1] = ACTIONS(29),
    [aux_sym__numeric_literal_token2] = ACTIONS(31),
    [aux_sym__numeric_literal_token3] = ACTIONS(31),
    [aux_sym__numeric_literal_token4] = ACTIONS(31),
    [anon_sym_DQUOTE] = ACTIONS(33),
    [sym_comment] = ACTIONS(3),
  },
  [8] = {
    [sym_variable_definition] = STATE(100),
    [sym_simple_type] = STATE(115),
    [sym__simple_statement] = STATE(100),
    [sym_assignment_statement] = STATE(100),
    [sym_if_statement] = STATE(100),
    [sym_while_statement] = STATE(100),
    [sym_do_while_statement] = STATE(100),
    [sym_return_statement] = STATE(100),
    [sym__variable_definition_statement] = STATE(100),
    [sym__expression_statement] = STATE(100),
    [sym__expression] = STATE(25),
    [sym_unary_expression] = STATE(25),
    [sym_binary_expression] = STATE(25),
    [sym_literal] = STATE(25),
    [sym__numeric_literal] = STATE(10),
    [sym__string_literal] = STATE(10),
    [aux_sym__compound_statement_repeat1] = STATE(8),
    [anon_sym_local] = ACTIONS(39),
    [anon_sym_void] = ACTIONS(42),
    [anon_sym_entity] = ACTIONS(42),
    [anon_sym_float] = ACTIONS(42),
    [anon_sym_vector] = ACTIONS(42),
    [anon_sym_string] = ACTIONS(42),
    [anon_sym_int] = ACTIONS(42),
    [anon_sym_RBRACE] = ACTIONS(45),
    [anon_sym_if] = ACTIONS(47),
    [anon_sym_while] = ACTIONS(50),
    [anon_sym_do] = ACTIONS(53),
    [anon_sym_return] = ACTIONS(56),
    [anon_sym_DASH] = ACTIONS(59),
    [anon_sym_PLUS] = ACTIONS(62),
    [sym_identifier] = ACTIONS(65),
    [aux_sym__numeric_literal_token1] = ACTIONS(68),
    [aux_sym__numeric_literal_token2] = ACTIONS(71),
    [aux_sym__numeric_literal_token3] = ACTIONS(71),
    [aux_sym__numeric_literal_token4] = ACTIONS(71),
    [anon_sym_DQUOTE] = ACTIONS(74),
    [sym_comment] = ACTIONS(3),
  },
  [9] = {
    [sym_variable_definition] = STATE(100),
    [sym_simple_type] = STATE(115),
    [sym__simple_statement] = STATE(100),
    [sym_assignment_statement] = STATE(100),
    [sym_if_statement] = STATE(100),
    [sym_while_statement] = STATE(100),
    [sym_do_while_statement] = STATE(100),
    [sym_return_statement] = STATE(100),
    [sym__variable_definition_statement] = STATE(100),
    [sym__expression_statement] = STATE(100),
    [sym__expression] = STATE(25),
    [sym_unary_expression] = STATE(25),
    [sym_binary_expression] = STATE(25),
    [sym_literal] = STATE(25),
    [sym__numeric_literal] = STATE(10),
    [sym__string_literal] = STATE(10),
    [aux_sym__compound_statement_repeat1] = STATE(7),
    [anon_sym_local] = ACTIONS(9),
    [anon_sym_void] = ACTIONS(11),
    [anon_sym_entity] = ACTIONS(11),
    [anon_sym_float] = ACTIONS(11),
    [anon_sym_vector] = ACTIONS(11),
    [anon_sym_string] = ACTIONS(11),
    [anon_sym_int] = ACTIONS(11),
    [anon_sym_RBRACE] = ACTIONS(77),
    [anon_sym_if] = ACTIONS(15),
    [anon_sym_while] = ACTIONS(17),
    [anon_sym_do] = ACTIONS(19),
    [anon_sym_return] = ACTIONS(21),
    [anon_sym_DASH] = ACTIONS(23),
    [anon_sym_PLUS] = ACTIONS(25),
    [sym_identifier] = ACTIONS(27),
    [aux_sym__numeric_literal_token1] = ACTIONS(29),
    [aux_sym__numeric_literal_token2] = ACTIONS(31),
    [aux_sym__numeric_literal_token3] = ACTIONS(31),
    [aux_sym__numeric_literal_token4] = ACTIONS(31),
    [anon_sym_DQUOTE] = ACTIONS(33),
    [sym_comment] = ACTIONS(3),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(81), 6,
      anon_sym_SLASH,
      anon_sym_BANG,
      anon_sym_PIPE,
      anon_sym_AMP,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(79), 14,
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
  [28] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(45), 6,
      anon_sym_RBRACE,
      anon_sym_PLUS,
      aux_sym__numeric_literal_token2,
      aux_sym__numeric_literal_token3,
      aux_sym__numeric_literal_token4,
      anon_sym_DQUOTE,
    ACTIONS(83), 14,
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
  [56] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(87), 6,
      anon_sym_SLASH,
      anon_sym_BANG,
      anon_sym_PIPE,
      anon_sym_AMP,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(85), 14,
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
  [84] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(91), 6,
      anon_sym_SLASH,
      anon_sym_BANG,
      anon_sym_PIPE,
      anon_sym_AMP,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(89), 13,
      anon_sym_SEMI,
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
  [111] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(95), 6,
      anon_sym_SLASH,
      anon_sym_BANG,
      anon_sym_PIPE,
      anon_sym_AMP,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(93), 13,
      anon_sym_SEMI,
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
  [138] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(99), 1,
      anon_sym_STAR,
    ACTIONS(101), 1,
      anon_sym_SLASH,
    ACTIONS(103), 1,
      anon_sym_PIPE,
    ACTIONS(105), 1,
      anon_sym_AMP,
    ACTIONS(97), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(91), 3,
      anon_sym_BANG,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(89), 10,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      anon_sym_else,
      anon_sym_while,
      anon_sym_PIPE_PIPE,
      anon_sym_AMP_AMP,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
  [175] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(99), 1,
      anon_sym_STAR,
    ACTIONS(101), 1,
      anon_sym_SLASH,
    ACTIONS(91), 5,
      anon_sym_BANG,
      anon_sym_PIPE,
      anon_sym_AMP,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(89), 12,
      anon_sym_SEMI,
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
  [206] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(99), 1,
      anon_sym_STAR,
    ACTIONS(101), 1,
      anon_sym_SLASH,
    ACTIONS(105), 1,
      anon_sym_AMP,
    ACTIONS(91), 4,
      anon_sym_BANG,
      anon_sym_PIPE,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(89), 12,
      anon_sym_SEMI,
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
  [239] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(91), 1,
      anon_sym_BANG,
    ACTIONS(99), 1,
      anon_sym_STAR,
    ACTIONS(101), 1,
      anon_sym_SLASH,
    ACTIONS(103), 1,
      anon_sym_PIPE,
    ACTIONS(105), 1,
      anon_sym_AMP,
    ACTIONS(97), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(109), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(107), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
    ACTIONS(89), 6,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      anon_sym_else,
      anon_sym_while,
      anon_sym_PIPE_PIPE,
      anon_sym_AMP_AMP,
  [280] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(113), 1,
      anon_sym_EQ,
    ACTIONS(115), 6,
      anon_sym_SLASH,
      anon_sym_BANG,
      anon_sym_PIPE,
      anon_sym_AMP,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(111), 12,
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
  [309] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(99), 1,
      anon_sym_STAR,
    ACTIONS(101), 1,
      anon_sym_SLASH,
    ACTIONS(103), 1,
      anon_sym_PIPE,
    ACTIONS(105), 1,
      anon_sym_AMP,
    ACTIONS(117), 1,
      anon_sym_BANG,
    ACTIONS(97), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(109), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(107), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
    ACTIONS(89), 6,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      anon_sym_else,
      anon_sym_while,
      anon_sym_PIPE_PIPE,
      anon_sym_AMP_AMP,
  [350] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(99), 1,
      anon_sym_STAR,
    ACTIONS(101), 1,
      anon_sym_SLASH,
    ACTIONS(103), 1,
      anon_sym_PIPE,
    ACTIONS(105), 1,
      anon_sym_AMP,
    ACTIONS(117), 1,
      anon_sym_BANG,
    ACTIONS(119), 1,
      anon_sym_AMP_AMP,
    ACTIONS(97), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(109), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(107), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
    ACTIONS(89), 5,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      anon_sym_else,
      anon_sym_while,
      anon_sym_PIPE_PIPE,
  [393] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(99), 1,
      anon_sym_STAR,
    ACTIONS(101), 1,
      anon_sym_SLASH,
    ACTIONS(103), 1,
      anon_sym_PIPE,
    ACTIONS(105), 1,
      anon_sym_AMP,
    ACTIONS(91), 3,
      anon_sym_BANG,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(89), 12,
      anon_sym_SEMI,
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
  [428] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(99), 1,
      anon_sym_STAR,
    ACTIONS(101), 1,
      anon_sym_SLASH,
    ACTIONS(103), 1,
      anon_sym_PIPE,
    ACTIONS(105), 1,
      anon_sym_AMP,
    ACTIONS(117), 1,
      anon_sym_BANG,
    ACTIONS(119), 1,
      anon_sym_AMP_AMP,
    ACTIONS(123), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(97), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(109), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(121), 3,
      anon_sym_SEMI,
      anon_sym_else,
      anon_sym_while,
    ACTIONS(107), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
  [472] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(99), 1,
      anon_sym_STAR,
    ACTIONS(101), 1,
      anon_sym_SLASH,
    ACTIONS(103), 1,
      anon_sym_PIPE,
    ACTIONS(105), 1,
      anon_sym_AMP,
    ACTIONS(117), 1,
      anon_sym_BANG,
    ACTIONS(119), 1,
      anon_sym_AMP_AMP,
    ACTIONS(123), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(97), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(109), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(125), 3,
      anon_sym_SEMI,
      anon_sym_else,
      anon_sym_while,
    ACTIONS(107), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
  [516] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(99), 1,
      anon_sym_STAR,
    ACTIONS(101), 1,
      anon_sym_SLASH,
    ACTIONS(103), 1,
      anon_sym_PIPE,
    ACTIONS(105), 1,
      anon_sym_AMP,
    ACTIONS(117), 1,
      anon_sym_BANG,
    ACTIONS(119), 1,
      anon_sym_AMP_AMP,
    ACTIONS(123), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(97), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(109), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(127), 3,
      anon_sym_SEMI,
      anon_sym_else,
      anon_sym_while,
    ACTIONS(107), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
  [560] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(99), 1,
      anon_sym_STAR,
    ACTIONS(101), 1,
      anon_sym_SLASH,
    ACTIONS(103), 1,
      anon_sym_PIPE,
    ACTIONS(105), 1,
      anon_sym_AMP,
    ACTIONS(117), 1,
      anon_sym_BANG,
    ACTIONS(119), 1,
      anon_sym_AMP_AMP,
    ACTIONS(123), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(129), 1,
      anon_sym_RPAREN,
    ACTIONS(97), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(109), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(107), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
  [602] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(99), 1,
      anon_sym_STAR,
    ACTIONS(101), 1,
      anon_sym_SLASH,
    ACTIONS(103), 1,
      anon_sym_PIPE,
    ACTIONS(105), 1,
      anon_sym_AMP,
    ACTIONS(117), 1,
      anon_sym_BANG,
    ACTIONS(119), 1,
      anon_sym_AMP_AMP,
    ACTIONS(123), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(131), 1,
      anon_sym_RPAREN,
    ACTIONS(97), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(109), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(107), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
  [644] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(99), 1,
      anon_sym_STAR,
    ACTIONS(101), 1,
      anon_sym_SLASH,
    ACTIONS(103), 1,
      anon_sym_PIPE,
    ACTIONS(105), 1,
      anon_sym_AMP,
    ACTIONS(117), 1,
      anon_sym_BANG,
    ACTIONS(119), 1,
      anon_sym_AMP_AMP,
    ACTIONS(123), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(133), 1,
      anon_sym_RPAREN,
    ACTIONS(97), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(109), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(107), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
  [686] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(23), 1,
      anon_sym_DASH,
    ACTIONS(25), 1,
      anon_sym_PLUS,
    ACTIONS(29), 1,
      aux_sym__numeric_literal_token1,
    ACTIONS(33), 1,
      anon_sym_DQUOTE,
    ACTIONS(135), 1,
      sym_identifier,
    STATE(10), 2,
      sym__numeric_literal,
      sym__string_literal,
    ACTIONS(31), 3,
      aux_sym__numeric_literal_token2,
      aux_sym__numeric_literal_token3,
      aux_sym__numeric_literal_token4,
    STATE(24), 4,
      sym__expression,
      sym_unary_expression,
      sym_binary_expression,
      sym_literal,
  [720] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(23), 1,
      anon_sym_DASH,
    ACTIONS(25), 1,
      anon_sym_PLUS,
    ACTIONS(29), 1,
      aux_sym__numeric_literal_token1,
    ACTIONS(33), 1,
      anon_sym_DQUOTE,
    ACTIONS(137), 1,
      sym_identifier,
    STATE(10), 2,
      sym__numeric_literal,
      sym__string_literal,
    ACTIONS(31), 3,
      aux_sym__numeric_literal_token2,
      aux_sym__numeric_literal_token3,
      aux_sym__numeric_literal_token4,
    STATE(15), 4,
      sym__expression,
      sym_unary_expression,
      sym_binary_expression,
      sym_literal,
  [754] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(23), 1,
      anon_sym_DASH,
    ACTIONS(25), 1,
      anon_sym_PLUS,
    ACTIONS(29), 1,
      aux_sym__numeric_literal_token1,
    ACTIONS(33), 1,
      anon_sym_DQUOTE,
    ACTIONS(139), 1,
      sym_identifier,
    STATE(10), 2,
      sym__numeric_literal,
      sym__string_literal,
    ACTIONS(31), 3,
      aux_sym__numeric_literal_token2,
      aux_sym__numeric_literal_token3,
      aux_sym__numeric_literal_token4,
    STATE(13), 4,
      sym__expression,
      sym_unary_expression,
      sym_binary_expression,
      sym_literal,
  [788] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(23), 1,
      anon_sym_DASH,
    ACTIONS(25), 1,
      anon_sym_PLUS,
    ACTIONS(29), 1,
      aux_sym__numeric_literal_token1,
    ACTIONS(33), 1,
      anon_sym_DQUOTE,
    ACTIONS(141), 1,
      sym_identifier,
    STATE(10), 2,
      sym__numeric_literal,
      sym__string_literal,
    ACTIONS(31), 3,
      aux_sym__numeric_literal_token2,
      aux_sym__numeric_literal_token3,
      aux_sym__numeric_literal_token4,
    STATE(27), 4,
      sym__expression,
      sym_unary_expression,
      sym_binary_expression,
      sym_literal,
  [822] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(23), 1,
      anon_sym_DASH,
    ACTIONS(25), 1,
      anon_sym_PLUS,
    ACTIONS(29), 1,
      aux_sym__numeric_literal_token1,
    ACTIONS(33), 1,
      anon_sym_DQUOTE,
    ACTIONS(143), 1,
      sym_identifier,
    STATE(10), 2,
      sym__numeric_literal,
      sym__string_literal,
    ACTIONS(31), 3,
      aux_sym__numeric_literal_token2,
      aux_sym__numeric_literal_token3,
      aux_sym__numeric_literal_token4,
    STATE(22), 4,
      sym__expression,
      sym_unary_expression,
      sym_binary_expression,
      sym_literal,
  [856] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(23), 1,
      anon_sym_DASH,
    ACTIONS(25), 1,
      anon_sym_PLUS,
    ACTIONS(29), 1,
      aux_sym__numeric_literal_token1,
    ACTIONS(33), 1,
      anon_sym_DQUOTE,
    ACTIONS(145), 1,
      sym_identifier,
    STATE(10), 2,
      sym__numeric_literal,
      sym__string_literal,
    ACTIONS(31), 3,
      aux_sym__numeric_literal_token2,
      aux_sym__numeric_literal_token3,
      aux_sym__numeric_literal_token4,
    STATE(20), 4,
      sym__expression,
      sym_unary_expression,
      sym_binary_expression,
      sym_literal,
  [890] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(23), 1,
      anon_sym_DASH,
    ACTIONS(25), 1,
      anon_sym_PLUS,
    ACTIONS(29), 1,
      aux_sym__numeric_literal_token1,
    ACTIONS(33), 1,
      anon_sym_DQUOTE,
    ACTIONS(147), 1,
      sym_identifier,
    STATE(10), 2,
      sym__numeric_literal,
      sym__string_literal,
    ACTIONS(31), 3,
      aux_sym__numeric_literal_token2,
      aux_sym__numeric_literal_token3,
      aux_sym__numeric_literal_token4,
    STATE(14), 4,
      sym__expression,
      sym_unary_expression,
      sym_binary_expression,
      sym_literal,
  [924] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(23), 1,
      anon_sym_DASH,
    ACTIONS(25), 1,
      anon_sym_PLUS,
    ACTIONS(29), 1,
      aux_sym__numeric_literal_token1,
    ACTIONS(33), 1,
      anon_sym_DQUOTE,
    ACTIONS(149), 1,
      sym_identifier,
    STATE(10), 2,
      sym__numeric_literal,
      sym__string_literal,
    ACTIONS(31), 3,
      aux_sym__numeric_literal_token2,
      aux_sym__numeric_literal_token3,
      aux_sym__numeric_literal_token4,
    STATE(21), 4,
      sym__expression,
      sym_unary_expression,
      sym_binary_expression,
      sym_literal,
  [958] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(23), 1,
      anon_sym_DASH,
    ACTIONS(25), 1,
      anon_sym_PLUS,
    ACTIONS(29), 1,
      aux_sym__numeric_literal_token1,
    ACTIONS(33), 1,
      anon_sym_DQUOTE,
    ACTIONS(151), 1,
      sym_identifier,
    STATE(10), 2,
      sym__numeric_literal,
      sym__string_literal,
    ACTIONS(31), 3,
      aux_sym__numeric_literal_token2,
      aux_sym__numeric_literal_token3,
      aux_sym__numeric_literal_token4,
    STATE(18), 4,
      sym__expression,
      sym_unary_expression,
      sym_binary_expression,
      sym_literal,
  [992] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(23), 1,
      anon_sym_DASH,
    ACTIONS(25), 1,
      anon_sym_PLUS,
    ACTIONS(29), 1,
      aux_sym__numeric_literal_token1,
    ACTIONS(33), 1,
      anon_sym_DQUOTE,
    ACTIONS(153), 1,
      sym_identifier,
    STATE(10), 2,
      sym__numeric_literal,
      sym__string_literal,
    ACTIONS(31), 3,
      aux_sym__numeric_literal_token2,
      aux_sym__numeric_literal_token3,
      aux_sym__numeric_literal_token4,
    STATE(23), 4,
      sym__expression,
      sym_unary_expression,
      sym_binary_expression,
      sym_literal,
  [1026] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(23), 1,
      anon_sym_DASH,
    ACTIONS(25), 1,
      anon_sym_PLUS,
    ACTIONS(29), 1,
      aux_sym__numeric_literal_token1,
    ACTIONS(33), 1,
      anon_sym_DQUOTE,
    ACTIONS(155), 1,
      sym_identifier,
    STATE(10), 2,
      sym__numeric_literal,
      sym__string_literal,
    ACTIONS(31), 3,
      aux_sym__numeric_literal_token2,
      aux_sym__numeric_literal_token3,
      aux_sym__numeric_literal_token4,
    STATE(17), 4,
      sym__expression,
      sym_unary_expression,
      sym_binary_expression,
      sym_literal,
  [1060] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(23), 1,
      anon_sym_DASH,
    ACTIONS(25), 1,
      anon_sym_PLUS,
    ACTIONS(29), 1,
      aux_sym__numeric_literal_token1,
    ACTIONS(33), 1,
      anon_sym_DQUOTE,
    ACTIONS(157), 1,
      sym_identifier,
    STATE(10), 2,
      sym__numeric_literal,
      sym__string_literal,
    ACTIONS(31), 3,
      aux_sym__numeric_literal_token2,
      aux_sym__numeric_literal_token3,
      aux_sym__numeric_literal_token4,
    STATE(28), 4,
      sym__expression,
      sym_unary_expression,
      sym_binary_expression,
      sym_literal,
  [1094] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(23), 1,
      anon_sym_DASH,
    ACTIONS(25), 1,
      anon_sym_PLUS,
    ACTIONS(29), 1,
      aux_sym__numeric_literal_token1,
    ACTIONS(33), 1,
      anon_sym_DQUOTE,
    ACTIONS(159), 1,
      sym_identifier,
    STATE(10), 2,
      sym__numeric_literal,
      sym__string_literal,
    ACTIONS(31), 3,
      aux_sym__numeric_literal_token2,
      aux_sym__numeric_literal_token3,
      aux_sym__numeric_literal_token4,
    STATE(26), 4,
      sym__expression,
      sym_unary_expression,
      sym_binary_expression,
      sym_literal,
  [1128] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(23), 1,
      anon_sym_DASH,
    ACTIONS(25), 1,
      anon_sym_PLUS,
    ACTIONS(29), 1,
      aux_sym__numeric_literal_token1,
    ACTIONS(33), 1,
      anon_sym_DQUOTE,
    ACTIONS(161), 1,
      sym_identifier,
    STATE(10), 2,
      sym__numeric_literal,
      sym__string_literal,
    ACTIONS(31), 3,
      aux_sym__numeric_literal_token2,
      aux_sym__numeric_literal_token3,
      aux_sym__numeric_literal_token4,
    STATE(16), 4,
      sym__expression,
      sym_unary_expression,
      sym_binary_expression,
      sym_literal,
  [1162] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(163), 1,
      ts_builtin_sym_end,
    STATE(82), 1,
      sym_simple_type,
    STATE(44), 5,
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
  [1187] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(165), 1,
      ts_builtin_sym_end,
    STATE(82), 1,
      sym_simple_type,
    STATE(44), 5,
      sym__definition,
      sym_function_declaration,
      sym_function_definition,
      sym_constant_definition,
      aux_sym_source_file_repeat1,
    ACTIONS(167), 6,
      anon_sym_void,
      anon_sym_entity,
      anon_sym_float,
      anon_sym_vector,
      anon_sym_string,
      anon_sym_int,
  [1212] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(170), 1,
      anon_sym_RPAREN,
    STATE(80), 1,
      sym__parameter,
    STATE(102), 1,
      sym_simple_type,
    ACTIONS(7), 6,
      anon_sym_void,
      anon_sym_entity,
      anon_sym_float,
      anon_sym_vector,
      anon_sym_string,
      anon_sym_int,
  [1233] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(29), 1,
      aux_sym__numeric_literal_token1,
    ACTIONS(33), 1,
      anon_sym_DQUOTE,
    STATE(77), 1,
      sym_literal,
    STATE(10), 2,
      sym__numeric_literal,
      sym__string_literal,
    ACTIONS(31), 3,
      aux_sym__numeric_literal_token2,
      aux_sym__numeric_literal_token3,
      aux_sym__numeric_literal_token4,
  [1255] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(29), 1,
      aux_sym__numeric_literal_token1,
    ACTIONS(33), 1,
      anon_sym_DQUOTE,
    STATE(78), 1,
      sym_literal,
    STATE(10), 2,
      sym__numeric_literal,
      sym__string_literal,
    ACTIONS(31), 3,
      aux_sym__numeric_literal_token2,
      aux_sym__numeric_literal_token3,
      aux_sym__numeric_literal_token4,
  [1277] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(29), 1,
      aux_sym__numeric_literal_token1,
    ACTIONS(33), 1,
      anon_sym_DQUOTE,
    STATE(67), 1,
      sym_literal,
    STATE(10), 2,
      sym__numeric_literal,
      sym__string_literal,
    ACTIONS(31), 3,
      aux_sym__numeric_literal_token2,
      aux_sym__numeric_literal_token3,
      aux_sym__numeric_literal_token4,
  [1299] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(29), 1,
      aux_sym__numeric_literal_token1,
    ACTIONS(33), 1,
      anon_sym_DQUOTE,
    STATE(79), 1,
      sym_literal,
    STATE(10), 2,
      sym__numeric_literal,
      sym__string_literal,
    ACTIONS(31), 3,
      aux_sym__numeric_literal_token2,
      aux_sym__numeric_literal_token3,
      aux_sym__numeric_literal_token4,
  [1321] = 4,
    ACTIONS(3), 1,
      sym_comment,
    STATE(93), 1,
      sym__parameter,
    STATE(102), 1,
      sym_simple_type,
    ACTIONS(7), 6,
      anon_sym_void,
      anon_sym_entity,
      anon_sym_float,
      anon_sym_vector,
      anon_sym_string,
      anon_sym_int,
  [1339] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(29), 1,
      aux_sym__numeric_literal_token1,
    ACTIONS(33), 1,
      anon_sym_DQUOTE,
    STATE(99), 1,
      sym_literal,
    STATE(10), 2,
      sym__numeric_literal,
      sym__string_literal,
    ACTIONS(31), 3,
      aux_sym__numeric_literal_token2,
      aux_sym__numeric_literal_token3,
      aux_sym__numeric_literal_token4,
  [1361] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(29), 1,
      aux_sym__numeric_literal_token1,
    ACTIONS(33), 1,
      anon_sym_DQUOTE,
    STATE(66), 1,
      sym_literal,
    STATE(10), 2,
      sym__numeric_literal,
      sym__string_literal,
    ACTIONS(31), 3,
      aux_sym__numeric_literal_token2,
      aux_sym__numeric_literal_token3,
      aux_sym__numeric_literal_token4,
  [1383] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(29), 1,
      aux_sym__numeric_literal_token1,
    ACTIONS(33), 1,
      anon_sym_DQUOTE,
    STATE(63), 1,
      sym_literal,
    STATE(10), 2,
      sym__numeric_literal,
      sym__string_literal,
    ACTIONS(31), 3,
      aux_sym__numeric_literal_token2,
      aux_sym__numeric_literal_token3,
      aux_sym__numeric_literal_token4,
  [1405] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(29), 1,
      aux_sym__numeric_literal_token1,
    ACTIONS(33), 1,
      anon_sym_DQUOTE,
    STATE(70), 1,
      sym_literal,
    STATE(10), 2,
      sym__numeric_literal,
      sym__string_literal,
    ACTIONS(31), 3,
      aux_sym__numeric_literal_token2,
      aux_sym__numeric_literal_token3,
      aux_sym__numeric_literal_token4,
  [1427] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(172), 7,
      ts_builtin_sym_end,
      anon_sym_void,
      anon_sym_entity,
      anon_sym_float,
      anon_sym_vector,
      anon_sym_string,
      anon_sym_int,
  [1440] = 3,
    ACTIONS(3), 1,
      sym_comment,
    STATE(116), 1,
      sym_simple_type,
    ACTIONS(7), 6,
      anon_sym_void,
      anon_sym_entity,
      anon_sym_float,
      anon_sym_vector,
      anon_sym_string,
      anon_sym_int,
  [1455] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(174), 7,
      ts_builtin_sym_end,
      anon_sym_void,
      anon_sym_entity,
      anon_sym_float,
      anon_sym_vector,
      anon_sym_string,
      anon_sym_int,
  [1468] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(176), 7,
      ts_builtin_sym_end,
      anon_sym_void,
      anon_sym_entity,
      anon_sym_float,
      anon_sym_vector,
      anon_sym_string,
      anon_sym_int,
  [1481] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(180), 1,
      anon_sym_EQ,
    ACTIONS(182), 1,
      anon_sym_COMMA,
    STATE(68), 1,
      aux_sym_variable_definition_repeat1,
    ACTIONS(178), 3,
      anon_sym_SEMI,
      anon_sym_else,
      anon_sym_while,
  [1499] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(182), 1,
      anon_sym_COMMA,
    ACTIONS(186), 1,
      anon_sym_EQ,
    STATE(69), 1,
      aux_sym_variable_definition_repeat1,
    ACTIONS(184), 3,
      anon_sym_SEMI,
      anon_sym_else,
      anon_sym_while,
  [1517] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(182), 1,
      anon_sym_COMMA,
    ACTIONS(190), 1,
      anon_sym_EQ,
    STATE(73), 1,
      aux_sym_variable_definition_repeat1,
    ACTIONS(188), 3,
      anon_sym_SEMI,
      anon_sym_else,
      anon_sym_while,
  [1535] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(182), 1,
      anon_sym_COMMA,
    ACTIONS(194), 1,
      anon_sym_EQ,
    STATE(74), 1,
      aux_sym_variable_definition_repeat1,
    ACTIONS(192), 3,
      anon_sym_SEMI,
      anon_sym_else,
      anon_sym_while,
  [1553] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(182), 1,
      anon_sym_COMMA,
    STATE(69), 1,
      aux_sym_variable_definition_repeat1,
    ACTIONS(184), 3,
      anon_sym_SEMI,
      anon_sym_else,
      anon_sym_while,
  [1568] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(182), 1,
      anon_sym_COMMA,
    STATE(71), 1,
      aux_sym_variable_definition_repeat1,
    ACTIONS(196), 3,
      anon_sym_SEMI,
      anon_sym_else,
      anon_sym_while,
  [1583] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(182), 1,
      anon_sym_COMMA,
    STATE(71), 1,
      aux_sym_variable_definition_repeat1,
    ACTIONS(198), 3,
      anon_sym_SEMI,
      anon_sym_else,
      anon_sym_while,
  [1598] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(182), 1,
      anon_sym_COMMA,
    STATE(64), 1,
      aux_sym_variable_definition_repeat1,
    ACTIONS(198), 3,
      anon_sym_SEMI,
      anon_sym_else,
      anon_sym_while,
  [1613] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(182), 1,
      anon_sym_COMMA,
    STATE(65), 1,
      aux_sym_variable_definition_repeat1,
    ACTIONS(200), 3,
      anon_sym_SEMI,
      anon_sym_else,
      anon_sym_while,
  [1628] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(182), 1,
      anon_sym_COMMA,
    STATE(71), 1,
      aux_sym_variable_definition_repeat1,
    ACTIONS(200), 3,
      anon_sym_SEMI,
      anon_sym_else,
      anon_sym_while,
  [1643] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(182), 1,
      anon_sym_COMMA,
    STATE(71), 1,
      aux_sym_variable_definition_repeat1,
    ACTIONS(178), 3,
      anon_sym_SEMI,
      anon_sym_else,
      anon_sym_while,
  [1658] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(182), 1,
      anon_sym_COMMA,
    STATE(68), 1,
      aux_sym_variable_definition_repeat1,
    ACTIONS(178), 3,
      anon_sym_SEMI,
      anon_sym_else,
      anon_sym_while,
  [1673] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(204), 1,
      anon_sym_COMMA,
    STATE(71), 1,
      aux_sym_variable_definition_repeat1,
    ACTIONS(202), 3,
      anon_sym_SEMI,
      anon_sym_else,
      anon_sym_while,
  [1688] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(207), 1,
      anon_sym_EQ,
    ACTIONS(202), 4,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_else,
      anon_sym_while,
  [1701] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(182), 1,
      anon_sym_COMMA,
    STATE(71), 1,
      aux_sym_variable_definition_repeat1,
    ACTIONS(184), 3,
      anon_sym_SEMI,
      anon_sym_else,
      anon_sym_while,
  [1716] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(182), 1,
      anon_sym_COMMA,
    STATE(71), 1,
      aux_sym_variable_definition_repeat1,
    ACTIONS(188), 3,
      anon_sym_SEMI,
      anon_sym_else,
      anon_sym_while,
  [1731] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(211), 1,
      anon_sym_EQ,
    ACTIONS(213), 1,
      anon_sym_COMMA,
    ACTIONS(209), 3,
      anon_sym_SEMI,
      anon_sym_else,
      anon_sym_while,
  [1746] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(217), 1,
      anon_sym_EQ,
    ACTIONS(219), 1,
      anon_sym_COMMA,
    ACTIONS(215), 3,
      anon_sym_SEMI,
      anon_sym_else,
      anon_sym_while,
  [1761] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(221), 1,
      anon_sym_COMMA,
    ACTIONS(192), 3,
      anon_sym_SEMI,
      anon_sym_else,
      anon_sym_while,
  [1773] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(223), 4,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_else,
      anon_sym_while,
  [1783] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(225), 1,
      anon_sym_COMMA,
    ACTIONS(188), 3,
      anon_sym_SEMI,
      anon_sym_else,
      anon_sym_while,
  [1795] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(227), 1,
      anon_sym_COMMA,
    ACTIONS(229), 1,
      anon_sym_RPAREN,
    STATE(83), 1,
      aux_sym_parameter_list_repeat1,
  [1808] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(231), 3,
      anon_sym_SEMI,
      anon_sym_else,
      anon_sym_while,
  [1817] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(233), 1,
      anon_sym_LPAREN,
    ACTIONS(235), 1,
      sym_identifier,
    STATE(98), 1,
      sym_parameter_list,
  [1830] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(227), 1,
      anon_sym_COMMA,
    ACTIONS(237), 1,
      anon_sym_RPAREN,
    STATE(85), 1,
      aux_sym_parameter_list_repeat1,
  [1843] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(239), 3,
      anon_sym_SEMI,
      anon_sym_else,
      anon_sym_while,
  [1852] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(241), 1,
      anon_sym_COMMA,
    ACTIONS(244), 1,
      anon_sym_RPAREN,
    STATE(85), 1,
      aux_sym_parameter_list_repeat1,
  [1865] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(246), 3,
      anon_sym_SEMI,
      anon_sym_else,
      anon_sym_while,
  [1874] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(248), 3,
      anon_sym_SEMI,
      anon_sym_else,
      anon_sym_while,
  [1883] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(252), 1,
      anon_sym_else,
    ACTIONS(250), 2,
      anon_sym_SEMI,
      anon_sym_while,
  [1894] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(254), 3,
      anon_sym_SEMI,
      anon_sym_else,
      anon_sym_while,
  [1903] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(256), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [1911] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(258), 1,
      anon_sym_SEMI,
    ACTIONS(260), 1,
      anon_sym_EQ,
  [1921] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(262), 2,
      anon_sym_LPAREN,
      sym_identifier,
  [1929] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(244), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [1937] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(264), 1,
      sym_identifier,
  [1944] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(266), 1,
      anon_sym_DQUOTE,
  [1951] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(268), 1,
      sym_identifier,
  [1958] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(270), 1,
      sym_identifier,
  [1965] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(272), 1,
      sym_identifier,
  [1972] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(274), 1,
      anon_sym_SEMI,
  [1979] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(276), 1,
      anon_sym_SEMI,
  [1986] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(278), 1,
      sym_identifier,
  [1993] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(280), 1,
      sym_identifier,
  [2000] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(282), 1,
      sym_identifier,
  [2007] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(284), 1,
      anon_sym_while,
  [2014] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(286), 1,
      sym_identifier,
  [2021] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(288), 1,
      sym_identifier,
  [2028] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(290), 1,
      anon_sym_EQ,
  [2035] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(292), 1,
      sym_identifier,
  [2042] = 2,
    ACTIONS(294), 1,
      aux_sym__string_literal_token1,
    ACTIONS(296), 1,
      sym_comment,
  [2049] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(298), 1,
      ts_builtin_sym_end,
  [2056] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(300), 1,
      anon_sym_LPAREN,
  [2063] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(302), 1,
      anon_sym_LPAREN,
  [2070] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(304), 1,
      anon_sym_LPAREN,
  [2077] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(306), 1,
      anon_sym_SEMI,
  [2084] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(308), 1,
      sym_identifier,
  [2091] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(310), 1,
      sym_identifier,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(10)] = 0,
  [SMALL_STATE(11)] = 28,
  [SMALL_STATE(12)] = 56,
  [SMALL_STATE(13)] = 84,
  [SMALL_STATE(14)] = 111,
  [SMALL_STATE(15)] = 138,
  [SMALL_STATE(16)] = 175,
  [SMALL_STATE(17)] = 206,
  [SMALL_STATE(18)] = 239,
  [SMALL_STATE(19)] = 280,
  [SMALL_STATE(20)] = 309,
  [SMALL_STATE(21)] = 350,
  [SMALL_STATE(22)] = 393,
  [SMALL_STATE(23)] = 428,
  [SMALL_STATE(24)] = 472,
  [SMALL_STATE(25)] = 516,
  [SMALL_STATE(26)] = 560,
  [SMALL_STATE(27)] = 602,
  [SMALL_STATE(28)] = 644,
  [SMALL_STATE(29)] = 686,
  [SMALL_STATE(30)] = 720,
  [SMALL_STATE(31)] = 754,
  [SMALL_STATE(32)] = 788,
  [SMALL_STATE(33)] = 822,
  [SMALL_STATE(34)] = 856,
  [SMALL_STATE(35)] = 890,
  [SMALL_STATE(36)] = 924,
  [SMALL_STATE(37)] = 958,
  [SMALL_STATE(38)] = 992,
  [SMALL_STATE(39)] = 1026,
  [SMALL_STATE(40)] = 1060,
  [SMALL_STATE(41)] = 1094,
  [SMALL_STATE(42)] = 1128,
  [SMALL_STATE(43)] = 1162,
  [SMALL_STATE(44)] = 1187,
  [SMALL_STATE(45)] = 1212,
  [SMALL_STATE(46)] = 1233,
  [SMALL_STATE(47)] = 1255,
  [SMALL_STATE(48)] = 1277,
  [SMALL_STATE(49)] = 1299,
  [SMALL_STATE(50)] = 1321,
  [SMALL_STATE(51)] = 1339,
  [SMALL_STATE(52)] = 1361,
  [SMALL_STATE(53)] = 1383,
  [SMALL_STATE(54)] = 1405,
  [SMALL_STATE(55)] = 1427,
  [SMALL_STATE(56)] = 1440,
  [SMALL_STATE(57)] = 1455,
  [SMALL_STATE(58)] = 1468,
  [SMALL_STATE(59)] = 1481,
  [SMALL_STATE(60)] = 1499,
  [SMALL_STATE(61)] = 1517,
  [SMALL_STATE(62)] = 1535,
  [SMALL_STATE(63)] = 1553,
  [SMALL_STATE(64)] = 1568,
  [SMALL_STATE(65)] = 1583,
  [SMALL_STATE(66)] = 1598,
  [SMALL_STATE(67)] = 1613,
  [SMALL_STATE(68)] = 1628,
  [SMALL_STATE(69)] = 1643,
  [SMALL_STATE(70)] = 1658,
  [SMALL_STATE(71)] = 1673,
  [SMALL_STATE(72)] = 1688,
  [SMALL_STATE(73)] = 1701,
  [SMALL_STATE(74)] = 1716,
  [SMALL_STATE(75)] = 1731,
  [SMALL_STATE(76)] = 1746,
  [SMALL_STATE(77)] = 1761,
  [SMALL_STATE(78)] = 1773,
  [SMALL_STATE(79)] = 1783,
  [SMALL_STATE(80)] = 1795,
  [SMALL_STATE(81)] = 1808,
  [SMALL_STATE(82)] = 1817,
  [SMALL_STATE(83)] = 1830,
  [SMALL_STATE(84)] = 1843,
  [SMALL_STATE(85)] = 1852,
  [SMALL_STATE(86)] = 1865,
  [SMALL_STATE(87)] = 1874,
  [SMALL_STATE(88)] = 1883,
  [SMALL_STATE(89)] = 1894,
  [SMALL_STATE(90)] = 1903,
  [SMALL_STATE(91)] = 1911,
  [SMALL_STATE(92)] = 1921,
  [SMALL_STATE(93)] = 1929,
  [SMALL_STATE(94)] = 1937,
  [SMALL_STATE(95)] = 1944,
  [SMALL_STATE(96)] = 1951,
  [SMALL_STATE(97)] = 1958,
  [SMALL_STATE(98)] = 1965,
  [SMALL_STATE(99)] = 1972,
  [SMALL_STATE(100)] = 1979,
  [SMALL_STATE(101)] = 1986,
  [SMALL_STATE(102)] = 1993,
  [SMALL_STATE(103)] = 2000,
  [SMALL_STATE(104)] = 2007,
  [SMALL_STATE(105)] = 2014,
  [SMALL_STATE(106)] = 2021,
  [SMALL_STATE(107)] = 2028,
  [SMALL_STATE(108)] = 2035,
  [SMALL_STATE(109)] = 2042,
  [SMALL_STATE(110)] = 2049,
  [SMALL_STATE(111)] = 2056,
  [SMALL_STATE(112)] = 2063,
  [SMALL_STATE(113)] = 2070,
  [SMALL_STATE(114)] = 2077,
  [SMALL_STATE(115)] = 2084,
  [SMALL_STATE(116)] = 2091,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT_EXTRA(),
  [5] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(92),
  [9] = {.entry = {.count = 1, .reusable = false}}, SHIFT(56),
  [11] = {.entry = {.count = 1, .reusable = false}}, SHIFT(92),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [15] = {.entry = {.count = 1, .reusable = false}}, SHIFT(111),
  [17] = {.entry = {.count = 1, .reusable = false}}, SHIFT(112),
  [19] = {.entry = {.count = 1, .reusable = false}}, SHIFT(3),
  [21] = {.entry = {.count = 1, .reusable = false}}, SHIFT(29),
  [23] = {.entry = {.count = 1, .reusable = false}}, SHIFT(35),
  [25] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [27] = {.entry = {.count = 1, .reusable = false}}, SHIFT(19),
  [29] = {.entry = {.count = 1, .reusable = false}}, SHIFT(10),
  [31] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [33] = {.entry = {.count = 1, .reusable = true}}, SHIFT(109),
  [35] = {.entry = {.count = 1, .reusable = true}}, SHIFT(114),
  [37] = {.entry = {.count = 1, .reusable = true}}, SHIFT(86),
  [39] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__compound_statement_repeat1, 2), SHIFT_REPEAT(56),
  [42] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__compound_statement_repeat1, 2), SHIFT_REPEAT(92),
  [45] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__compound_statement_repeat1, 2),
  [47] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__compound_statement_repeat1, 2), SHIFT_REPEAT(111),
  [50] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__compound_statement_repeat1, 2), SHIFT_REPEAT(112),
  [53] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__compound_statement_repeat1, 2), SHIFT_REPEAT(3),
  [56] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__compound_statement_repeat1, 2), SHIFT_REPEAT(29),
  [59] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__compound_statement_repeat1, 2), SHIFT_REPEAT(35),
  [62] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__compound_statement_repeat1, 2), SHIFT_REPEAT(35),
  [65] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__compound_statement_repeat1, 2), SHIFT_REPEAT(19),
  [68] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__compound_statement_repeat1, 2), SHIFT_REPEAT(10),
  [71] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__compound_statement_repeat1, 2), SHIFT_REPEAT(10),
  [74] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__compound_statement_repeat1, 2), SHIFT_REPEAT(109),
  [77] = {.entry = {.count = 1, .reusable = true}}, SHIFT(87),
  [79] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_literal, 1),
  [81] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_literal, 1),
  [83] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__compound_statement_repeat1, 2),
  [85] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__string_literal, 3),
  [87] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__string_literal, 3),
  [89] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_binary_expression, 3),
  [91] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_binary_expression, 3),
  [93] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_unary_expression, 2),
  [95] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_unary_expression, 2),
  [97] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [99] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [101] = {.entry = {.count = 1, .reusable = false}}, SHIFT(31),
  [103] = {.entry = {.count = 1, .reusable = false}}, SHIFT(39),
  [105] = {.entry = {.count = 1, .reusable = false}}, SHIFT(42),
  [107] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [109] = {.entry = {.count = 1, .reusable = false}}, SHIFT(30),
  [111] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__expression, 1),
  [113] = {.entry = {.count = 1, .reusable = false}}, SHIFT(38),
  [115] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__expression, 1),
  [117] = {.entry = {.count = 1, .reusable = false}}, SHIFT(37),
  [119] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [121] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_assignment_statement, 3),
  [123] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [125] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_return_statement, 2),
  [127] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__expression_statement, 1),
  [129] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [131] = {.entry = {.count = 1, .reusable = true}}, SHIFT(81),
  [133] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [135] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [137] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [139] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [141] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [143] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [145] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [147] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [149] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [151] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [153] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [155] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [157] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [159] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [161] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [163] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1),
  [165] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2),
  [167] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(92),
  [170] = {.entry = {.count = 1, .reusable = true}}, SHIFT(96),
  [172] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_constant_definition, 5),
  [174] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_definition, 6),
  [176] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_declaration, 4),
  [178] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable_definition, 7),
  [180] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [182] = {.entry = {.count = 1, .reusable = true}}, SHIFT(101),
  [184] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable_definition, 6),
  [186] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [188] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable_definition, 5),
  [190] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
  [192] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable_definition, 4),
  [194] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [196] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable_definition, 10),
  [198] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable_definition, 9),
  [200] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable_definition, 8),
  [202] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_variable_definition_repeat1, 2),
  [204] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_variable_definition_repeat1, 2), SHIFT_REPEAT(101),
  [207] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [209] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable_definition, 2),
  [211] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [213] = {.entry = {.count = 1, .reusable = true}}, SHIFT(108),
  [215] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable_definition, 3),
  [217] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [219] = {.entry = {.count = 1, .reusable = true}}, SHIFT(106),
  [221] = {.entry = {.count = 1, .reusable = true}}, SHIFT(97),
  [223] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_variable_definition_repeat1, 4),
  [225] = {.entry = {.count = 1, .reusable = true}}, SHIFT(105),
  [227] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [229] = {.entry = {.count = 1, .reusable = true}}, SHIFT(103),
  [231] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_do_while_statement, 6),
  [233] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [235] = {.entry = {.count = 1, .reusable = true}}, SHIFT(107),
  [237] = {.entry = {.count = 1, .reusable = true}}, SHIFT(94),
  [239] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_if_statement, 7),
  [241] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_parameter_list_repeat1, 2), SHIFT_REPEAT(50),
  [244] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_parameter_list_repeat1, 2),
  [246] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__compound_statement, 3),
  [248] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__compound_statement, 2),
  [250] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_if_statement, 5),
  [252] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [254] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_while_statement, 5),
  [256] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__parameter, 2),
  [258] = {.entry = {.count = 1, .reusable = true}}, SHIFT(58),
  [260] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [262] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_simple_type, 1),
  [264] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter_list, 4),
  [266] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [268] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter_list, 2),
  [270] = {.entry = {.count = 1, .reusable = true}}, SHIFT(60),
  [272] = {.entry = {.count = 1, .reusable = true}}, SHIFT(91),
  [274] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [276] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [278] = {.entry = {.count = 1, .reusable = true}}, SHIFT(72),
  [280] = {.entry = {.count = 1, .reusable = true}}, SHIFT(90),
  [282] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter_list, 3),
  [284] = {.entry = {.count = 1, .reusable = true}}, SHIFT(113),
  [286] = {.entry = {.count = 1, .reusable = true}}, SHIFT(59),
  [288] = {.entry = {.count = 1, .reusable = true}}, SHIFT(61),
  [290] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [292] = {.entry = {.count = 1, .reusable = true}}, SHIFT(62),
  [294] = {.entry = {.count = 1, .reusable = false}}, SHIFT(95),
  [296] = {.entry = {.count = 1, .reusable = false}}, SHIFT_EXTRA(),
  [298] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [300] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [302] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [304] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [306] = {.entry = {.count = 1, .reusable = true}}, SHIFT(57),
  [308] = {.entry = {.count = 1, .reusable = true}}, SHIFT(75),
  [310] = {.entry = {.count = 1, .reusable = true}}, SHIFT(76),
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
