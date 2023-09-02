#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 100
#define LARGE_STATE_COUNT 10
#define SYMBOL_COUNT 59
#define ALIAS_COUNT 0
#define TOKEN_COUNT 31
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
  sym_identifier = 22,
  aux_sym__numeric_literal_token1 = 23,
  aux_sym__numeric_literal_token2 = 24,
  aux_sym__numeric_literal_token3 = 25,
  aux_sym__numeric_literal_token4 = 26,
  anon_sym_DQUOTE = 27,
  aux_sym__string_literal_token1 = 28,
  sym__builtin_literal = 29,
  sym_comment = 30,
  sym_source_file = 31,
  sym__definition = 32,
  sym_function_declaration = 33,
  sym_function_definition = 34,
  sym_constant_definition = 35,
  sym_variable_definition = 36,
  sym_simple_type = 37,
  sym_parameter_list = 38,
  sym__parameter = 39,
  sym__statement = 40,
  sym__compound_statement = 41,
  sym__simple_statement = 42,
  sym_assignment_statement = 43,
  sym_if_statement = 44,
  sym_while_statement = 45,
  sym_do_while_statement = 46,
  sym_return_statement = 47,
  sym__variable_definition_statement = 48,
  sym__expression_statement = 49,
  sym__expression = 50,
  sym_unary_expression = 51,
  sym_literal = 52,
  sym__numeric_literal = 53,
  sym__string_literal = 54,
  aux_sym_source_file_repeat1 = 55,
  aux_sym_variable_definition_repeat1 = 56,
  aux_sym_parameter_list_repeat1 = 57,
  aux_sym__compound_statement_repeat1 = 58,
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
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(74);
      if (lookahead == '"') ADVANCE(149);
      if (lookahead == '#') ADVANCE(62);
      if (lookahead == '(') ADVANCE(92);
      if (lookahead == ')') ADVANCE(93);
      if (lookahead == '+') ADVANCE(106);
      if (lookahead == ',') ADVANCE(79);
      if (lookahead == '-') ADVANCE(105);
      if (lookahead == '/') ADVANCE(11);
      if (lookahead == ';') ADVANCE(75);
      if (lookahead == '=') ADVANCE(76);
      if (lookahead == '\\') SKIP(73)
      if (lookahead == '`') ADVANCE(14);
      if (lookahead == 'd') ADVANCE(45);
      if (lookahead == 'e') ADVANCE(39);
      if (lookahead == 'f') ADVANCE(41);
      if (lookahead == 'i') ADVANCE(32);
      if (lookahead == 'l') ADVANCE(46);
      if (lookahead == 'r') ADVANCE(31);
      if (lookahead == 's') ADVANCE(53);
      if (lookahead == 'v') ADVANCE(30);
      if (lookahead == 'w') ADVANCE(34);
      if (lookahead == '{') ADVANCE(94);
      if (lookahead == '}') ADVANCE(95);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(145);
      END_STATE();
    case 1:
      if (lookahead == '\n') SKIP(9)
      END_STATE();
    case 2:
      if (lookahead == '\n') SKIP(9)
      if (lookahead == '\r') SKIP(1)
      END_STATE();
    case 3:
      if (lookahead == '\n') SKIP(10)
      END_STATE();
    case 4:
      if (lookahead == '\n') SKIP(10)
      if (lookahead == '\r') SKIP(3)
      END_STATE();
    case 5:
      if (lookahead == ' ') ADVANCE(17);
      if (lookahead == '.') ADVANCE(69);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(5);
      END_STATE();
    case 6:
      if (lookahead == ' ') ADVANCE(15);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(6);
      END_STATE();
    case 7:
      if (lookahead == ' ') ADVANCE(16);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(7);
      END_STATE();
    case 8:
      if (lookahead == ' ') ADVANCE(18);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(8);
      END_STATE();
    case 9:
      if (lookahead == '"') ADVANCE(149);
      if (lookahead == '#') ADVANCE(62);
      if (lookahead == '+') ADVANCE(106);
      if (lookahead == '-') ADVANCE(105);
      if (lookahead == '/') ADVANCE(11);
      if (lookahead == '\\') SKIP(2)
      if (lookahead == '`') ADVANCE(14);
      if (lookahead == 'd') ADVANCE(128);
      if (lookahead == 'e') ADVANCE(127);
      if (lookahead == 'f') ADVANCE(124);
      if (lookahead == 'i') ADVANCE(115);
      if (lookahead == 'l') ADVANCE(129);
      if (lookahead == 'r') ADVANCE(114);
      if (lookahead == 's') ADVANCE(135);
      if (lookahead == 'v') ADVANCE(113);
      if (lookahead == 'w') ADVANCE(117);
      if (lookahead == '{') ADVANCE(94);
      if (lookahead == '}') ADVANCE(95);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(9)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(145);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(144);
      END_STATE();
    case 10:
      if (lookahead == '"') ADVANCE(149);
      if (lookahead == '(') ADVANCE(92);
      if (lookahead == '+') ADVANCE(106);
      if (lookahead == '-') ADVANCE(105);
      if (lookahead == '/') ADVANCE(11);
      if (lookahead == '\\') SKIP(4)
      if (lookahead == '`') ADVANCE(14);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(10)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(145);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(144);
      END_STATE();
    case 11:
      if (lookahead == '*') ADVANCE(13);
      if (lookahead == '/') ADVANCE(160);
      END_STATE();
    case 12:
      if (lookahead == '*') ADVANCE(12);
      if (lookahead == '/') ADVANCE(159);
      if (lookahead != 0) ADVANCE(13);
      END_STATE();
    case 13:
      if (lookahead == '*') ADVANCE(12);
      if (lookahead != 0) ADVANCE(13);
      END_STATE();
    case 14:
      if (lookahead == '-') ADVANCE(63);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(5);
      END_STATE();
    case 15:
      if (lookahead == '-') ADVANCE(66);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(21);
      END_STATE();
    case 16:
      if (lookahead == '-') ADVANCE(67);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(20);
      END_STATE();
    case 17:
      if (lookahead == '-') ADVANCE(65);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(6);
      END_STATE();
    case 18:
      if (lookahead == '-') ADVANCE(70);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(19);
      END_STATE();
    case 19:
      if (lookahead == '.') ADVANCE(68);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(19);
      END_STATE();
    case 20:
      if (lookahead == '.') ADVANCE(71);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(20);
      END_STATE();
    case 21:
      if (lookahead == '`') ADVANCE(147);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(21);
      END_STATE();
    case 22:
      if (lookahead == '`') ADVANCE(148);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(22);
      END_STATE();
    case 23:
      if (lookahead == 'a') ADVANCE(40);
      END_STATE();
    case 24:
      if (lookahead == 'a') ADVANCE(57);
      END_STATE();
    case 25:
      if (lookahead == 'c') ADVANCE(23);
      END_STATE();
    case 26:
      if (lookahead == 'c') ADVANCE(59);
      END_STATE();
    case 27:
      if (lookahead == 'd') ADVANCE(80);
      END_STATE();
    case 28:
      if (lookahead == 'e') ADVANCE(98);
      END_STATE();
    case 29:
      if (lookahead == 'e') ADVANCE(99);
      END_STATE();
    case 30:
      if (lookahead == 'e') ADVANCE(26);
      if (lookahead == 'o') ADVANCE(35);
      END_STATE();
    case 31:
      if (lookahead == 'e') ADVANCE(55);
      END_STATE();
    case 32:
      if (lookahead == 'f') ADVANCE(96);
      if (lookahead == 'n') ADVANCE(54);
      END_STATE();
    case 33:
      if (lookahead == 'g') ADVANCE(88);
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
      if (lookahead == 'i') ADVANCE(56);
      END_STATE();
    case 39:
      if (lookahead == 'l') ADVANCE(52);
      if (lookahead == 'n') ADVANCE(58);
      END_STATE();
    case 40:
      if (lookahead == 'l') ADVANCE(77);
      END_STATE();
    case 41:
      if (lookahead == 'l') ADVANCE(47);
      END_STATE();
    case 42:
      if (lookahead == 'l') ADVANCE(29);
      END_STATE();
    case 43:
      if (lookahead == 'n') ADVANCE(33);
      END_STATE();
    case 44:
      if (lookahead == 'n') ADVANCE(103);
      END_STATE();
    case 45:
      if (lookahead == 'o') ADVANCE(101);
      END_STATE();
    case 46:
      if (lookahead == 'o') ADVANCE(25);
      END_STATE();
    case 47:
      if (lookahead == 'o') ADVANCE(24);
      END_STATE();
    case 48:
      if (lookahead == 'o') ADVANCE(49);
      END_STATE();
    case 49:
      if (lookahead == 'r') ADVANCE(86);
      END_STATE();
    case 50:
      if (lookahead == 'r') ADVANCE(44);
      END_STATE();
    case 51:
      if (lookahead == 'r') ADVANCE(36);
      END_STATE();
    case 52:
      if (lookahead == 's') ADVANCE(28);
      END_STATE();
    case 53:
      if (lookahead == 't') ADVANCE(51);
      END_STATE();
    case 54:
      if (lookahead == 't') ADVANCE(90);
      END_STATE();
    case 55:
      if (lookahead == 't') ADVANCE(60);
      END_STATE();
    case 56:
      if (lookahead == 't') ADVANCE(61);
      END_STATE();
    case 57:
      if (lookahead == 't') ADVANCE(84);
      END_STATE();
    case 58:
      if (lookahead == 't') ADVANCE(38);
      END_STATE();
    case 59:
      if (lookahead == 't') ADVANCE(48);
      END_STATE();
    case 60:
      if (lookahead == 'u') ADVANCE(50);
      END_STATE();
    case 61:
      if (lookahead == 'y') ADVANCE(82);
      END_STATE();
    case 62:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(158);
      END_STATE();
    case 63:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(5);
      END_STATE();
    case 64:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(146);
      END_STATE();
    case 65:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(6);
      END_STATE();
    case 66:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(21);
      END_STATE();
    case 67:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(20);
      END_STATE();
    case 68:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(22);
      END_STATE();
    case 69:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(7);
      END_STATE();
    case 70:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(19);
      END_STATE();
    case 71:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(8);
      END_STATE();
    case 72:
      if (eof) ADVANCE(74);
      if (lookahead == '\n') SKIP(0)
      END_STATE();
    case 73:
      if (eof) ADVANCE(74);
      if (lookahead == '\n') SKIP(0)
      if (lookahead == '\r') SKIP(72)
      END_STATE();
    case 74:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 75:
      ACCEPT_TOKEN(anon_sym_SEMI);
      END_STATE();
    case 76:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 77:
      ACCEPT_TOKEN(anon_sym_local);
      END_STATE();
    case 78:
      ACCEPT_TOKEN(anon_sym_local);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(144);
      END_STATE();
    case 79:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 80:
      ACCEPT_TOKEN(anon_sym_void);
      END_STATE();
    case 81:
      ACCEPT_TOKEN(anon_sym_void);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(144);
      END_STATE();
    case 82:
      ACCEPT_TOKEN(anon_sym_entity);
      END_STATE();
    case 83:
      ACCEPT_TOKEN(anon_sym_entity);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(144);
      END_STATE();
    case 84:
      ACCEPT_TOKEN(anon_sym_float);
      END_STATE();
    case 85:
      ACCEPT_TOKEN(anon_sym_float);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(144);
      END_STATE();
    case 86:
      ACCEPT_TOKEN(anon_sym_vector);
      END_STATE();
    case 87:
      ACCEPT_TOKEN(anon_sym_vector);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(144);
      END_STATE();
    case 88:
      ACCEPT_TOKEN(anon_sym_string);
      END_STATE();
    case 89:
      ACCEPT_TOKEN(anon_sym_string);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(144);
      END_STATE();
    case 90:
      ACCEPT_TOKEN(anon_sym_int);
      END_STATE();
    case 91:
      ACCEPT_TOKEN(anon_sym_int);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(144);
      END_STATE();
    case 92:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 93:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 94:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 95:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 96:
      ACCEPT_TOKEN(anon_sym_if);
      END_STATE();
    case 97:
      ACCEPT_TOKEN(anon_sym_if);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(144);
      END_STATE();
    case 98:
      ACCEPT_TOKEN(anon_sym_else);
      END_STATE();
    case 99:
      ACCEPT_TOKEN(anon_sym_while);
      END_STATE();
    case 100:
      ACCEPT_TOKEN(anon_sym_while);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(144);
      END_STATE();
    case 101:
      ACCEPT_TOKEN(anon_sym_do);
      END_STATE();
    case 102:
      ACCEPT_TOKEN(anon_sym_do);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(144);
      END_STATE();
    case 103:
      ACCEPT_TOKEN(anon_sym_return);
      END_STATE();
    case 104:
      ACCEPT_TOKEN(anon_sym_return);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(144);
      END_STATE();
    case 105:
      ACCEPT_TOKEN(anon_sym_DASH);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(145);
      END_STATE();
    case 106:
      ACCEPT_TOKEN(anon_sym_PLUS);
      END_STATE();
    case 107:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(122);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(144);
      END_STATE();
    case 108:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(139);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(144);
      END_STATE();
    case 109:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'c') ADVANCE(107);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(144);
      END_STATE();
    case 110:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'c') ADVANCE(141);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(144);
      END_STATE();
    case 111:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'd') ADVANCE(81);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(144);
      END_STATE();
    case 112:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(100);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(144);
      END_STATE();
    case 113:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(110);
      if (lookahead == 'o') ADVANCE(118);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(144);
      END_STATE();
    case 114:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(137);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(144);
      END_STATE();
    case 115:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'f') ADVANCE(97);
      if (lookahead == 'n') ADVANCE(136);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(144);
      END_STATE();
    case 116:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'g') ADVANCE(89);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(144);
      END_STATE();
    case 117:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'h') ADVANCE(120);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(144);
      END_STATE();
    case 118:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(111);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(144);
      END_STATE();
    case 119:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(125);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(144);
      END_STATE();
    case 120:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(123);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(144);
      END_STATE();
    case 121:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(138);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(144);
      END_STATE();
    case 122:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(78);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(144);
      END_STATE();
    case 123:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(112);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(144);
      END_STATE();
    case 124:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(130);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(144);
      END_STATE();
    case 125:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(116);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(144);
      END_STATE();
    case 126:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(104);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(144);
      END_STATE();
    case 127:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(140);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(144);
      END_STATE();
    case 128:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(102);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(144);
      END_STATE();
    case 129:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(109);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(144);
      END_STATE();
    case 130:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(108);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(144);
      END_STATE();
    case 131:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(132);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(144);
      END_STATE();
    case 132:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(87);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(144);
      END_STATE();
    case 133:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(126);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(144);
      END_STATE();
    case 134:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(119);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(144);
      END_STATE();
    case 135:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(134);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(144);
      END_STATE();
    case 136:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(91);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(144);
      END_STATE();
    case 137:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(142);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(144);
      END_STATE();
    case 138:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(143);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(144);
      END_STATE();
    case 139:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(85);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(144);
      END_STATE();
    case 140:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(121);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(144);
      END_STATE();
    case 141:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(131);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(144);
      END_STATE();
    case 142:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'u') ADVANCE(133);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(144);
      END_STATE();
    case 143:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'y') ADVANCE(83);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(144);
      END_STATE();
    case 144:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(144);
      END_STATE();
    case 145:
      ACCEPT_TOKEN(aux_sym__numeric_literal_token1);
      if (lookahead == '.') ADVANCE(64);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(145);
      END_STATE();
    case 146:
      ACCEPT_TOKEN(aux_sym__numeric_literal_token2);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(146);
      END_STATE();
    case 147:
      ACCEPT_TOKEN(aux_sym__numeric_literal_token3);
      END_STATE();
    case 148:
      ACCEPT_TOKEN(aux_sym__numeric_literal_token4);
      END_STATE();
    case 149:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 150:
      ACCEPT_TOKEN(aux_sym__string_literal_token1);
      if (lookahead == '\n') ADVANCE(156);
      if (lookahead == '\r') ADVANCE(151);
      if (lookahead != 0 &&
          lookahead != '"') ADVANCE(157);
      END_STATE();
    case 151:
      ACCEPT_TOKEN(aux_sym__string_literal_token1);
      if (lookahead == '\n') ADVANCE(156);
      if (lookahead != 0 &&
          lookahead != '"') ADVANCE(157);
      END_STATE();
    case 152:
      ACCEPT_TOKEN(aux_sym__string_literal_token1);
      if (lookahead == '\n') ADVANCE(157);
      if (lookahead == '"') ADVANCE(160);
      if (lookahead != 0) ADVANCE(152);
      END_STATE();
    case 153:
      ACCEPT_TOKEN(aux_sym__string_literal_token1);
      if (lookahead == '"') ADVANCE(13);
      if (lookahead == '*') ADVANCE(153);
      if (lookahead == '/') ADVANCE(157);
      if (lookahead != 0) ADVANCE(154);
      END_STATE();
    case 154:
      ACCEPT_TOKEN(aux_sym__string_literal_token1);
      if (lookahead == '"') ADVANCE(13);
      if (lookahead == '*') ADVANCE(153);
      if (lookahead != 0) ADVANCE(154);
      END_STATE();
    case 155:
      ACCEPT_TOKEN(aux_sym__string_literal_token1);
      if (lookahead == '*') ADVANCE(154);
      if (lookahead == '/') ADVANCE(152);
      if (lookahead != 0 &&
          lookahead != '"') ADVANCE(157);
      END_STATE();
    case 156:
      ACCEPT_TOKEN(aux_sym__string_literal_token1);
      if (lookahead == '/') ADVANCE(155);
      if (lookahead == '\\') ADVANCE(150);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(156);
      if (lookahead != 0 &&
          lookahead != '"') ADVANCE(157);
      END_STATE();
    case 157:
      ACCEPT_TOKEN(aux_sym__string_literal_token1);
      if (lookahead != 0 &&
          lookahead != '"') ADVANCE(157);
      END_STATE();
    case 158:
      ACCEPT_TOKEN(sym__builtin_literal);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(158);
      END_STATE();
    case 159:
      ACCEPT_TOKEN(sym_comment);
      END_STATE();
    case 160:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(160);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 0},
  [2] = {.lex_state = 9},
  [3] = {.lex_state = 9},
  [4] = {.lex_state = 9},
  [5] = {.lex_state = 9},
  [6] = {.lex_state = 9},
  [7] = {.lex_state = 9},
  [8] = {.lex_state = 9},
  [9] = {.lex_state = 9},
  [10] = {.lex_state = 9},
  [11] = {.lex_state = 0},
  [12] = {.lex_state = 10},
  [13] = {.lex_state = 10},
  [14] = {.lex_state = 10},
  [15] = {.lex_state = 10},
  [16] = {.lex_state = 0},
  [17] = {.lex_state = 10},
  [18] = {.lex_state = 10},
  [19] = {.lex_state = 0},
  [20] = {.lex_state = 0},
  [21] = {.lex_state = 0},
  [22] = {.lex_state = 0},
  [23] = {.lex_state = 0},
  [24] = {.lex_state = 0},
  [25] = {.lex_state = 0},
  [26] = {.lex_state = 0},
  [27] = {.lex_state = 0},
  [28] = {.lex_state = 0},
  [29] = {.lex_state = 0},
  [30] = {.lex_state = 0},
  [31] = {.lex_state = 0},
  [32] = {.lex_state = 0},
  [33] = {.lex_state = 0},
  [34] = {.lex_state = 0},
  [35] = {.lex_state = 0},
  [36] = {.lex_state = 0},
  [37] = {.lex_state = 0},
  [38] = {.lex_state = 0},
  [39] = {.lex_state = 0},
  [40] = {.lex_state = 0},
  [41] = {.lex_state = 0},
  [42] = {.lex_state = 0},
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
  [65] = {.lex_state = 10},
  [66] = {.lex_state = 0},
  [67] = {.lex_state = 0},
  [68] = {.lex_state = 0},
  [69] = {.lex_state = 0},
  [70] = {.lex_state = 0},
  [71] = {.lex_state = 10},
  [72] = {.lex_state = 0},
  [73] = {.lex_state = 0},
  [74] = {.lex_state = 0},
  [75] = {.lex_state = 0},
  [76] = {.lex_state = 10},
  [77] = {.lex_state = 10},
  [78] = {.lex_state = 0},
  [79] = {.lex_state = 10},
  [80] = {.lex_state = 0},
  [81] = {.lex_state = 0},
  [82] = {.lex_state = 0},
  [83] = {.lex_state = 10},
  [84] = {.lex_state = 10},
  [85] = {.lex_state = 10},
  [86] = {.lex_state = 0},
  [87] = {.lex_state = 10},
  [88] = {.lex_state = 0},
  [89] = {.lex_state = 10},
  [90] = {.lex_state = 0},
  [91] = {.lex_state = 156},
  [92] = {.lex_state = 10},
  [93] = {.lex_state = 0},
  [94] = {.lex_state = 0},
  [95] = {.lex_state = 10},
  [96] = {.lex_state = 10},
  [97] = {.lex_state = 10},
  [98] = {.lex_state = 0},
  [99] = {.lex_state = 0},
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
    [aux_sym__numeric_literal_token1] = ACTIONS(1),
    [aux_sym__numeric_literal_token2] = ACTIONS(1),
    [aux_sym__numeric_literal_token3] = ACTIONS(1),
    [aux_sym__numeric_literal_token4] = ACTIONS(1),
    [anon_sym_DQUOTE] = ACTIONS(1),
    [sym__builtin_literal] = ACTIONS(1),
    [sym_comment] = ACTIONS(3),
  },
  [1] = {
    [sym_source_file] = STATE(99),
    [sym__definition] = STATE(16),
    [sym_function_declaration] = STATE(16),
    [sym_function_definition] = STATE(16),
    [sym_constant_definition] = STATE(16),
    [sym_simple_type] = STATE(65),
    [aux_sym_source_file_repeat1] = STATE(16),
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
    [sym_variable_definition] = STATE(74),
    [sym_simple_type] = STATE(84),
    [sym__statement] = STATE(74),
    [sym__compound_statement] = STATE(74),
    [sym__simple_statement] = STATE(74),
    [sym_assignment_statement] = STATE(74),
    [sym_if_statement] = STATE(74),
    [sym_while_statement] = STATE(74),
    [sym_do_while_statement] = STATE(74),
    [sym_return_statement] = STATE(74),
    [sym__variable_definition_statement] = STATE(74),
    [sym__expression_statement] = STATE(74),
    [sym__expression] = STATE(74),
    [sym_unary_expression] = STATE(74),
    [sym_literal] = STATE(74),
    [sym__numeric_literal] = STATE(38),
    [sym__string_literal] = STATE(38),
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
    [sym_variable_definition] = STATE(81),
    [sym_simple_type] = STATE(84),
    [sym__statement] = STATE(81),
    [sym__compound_statement] = STATE(81),
    [sym__simple_statement] = STATE(81),
    [sym_assignment_statement] = STATE(81),
    [sym_if_statement] = STATE(81),
    [sym_while_statement] = STATE(81),
    [sym_do_while_statement] = STATE(81),
    [sym_return_statement] = STATE(81),
    [sym__variable_definition_statement] = STATE(81),
    [sym__expression_statement] = STATE(81),
    [sym__expression] = STATE(81),
    [sym_unary_expression] = STATE(81),
    [sym_literal] = STATE(81),
    [sym__numeric_literal] = STATE(38),
    [sym__string_literal] = STATE(38),
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
    [sym_variable_definition] = STATE(67),
    [sym_simple_type] = STATE(84),
    [sym__statement] = STATE(67),
    [sym__compound_statement] = STATE(67),
    [sym__simple_statement] = STATE(67),
    [sym_assignment_statement] = STATE(67),
    [sym_if_statement] = STATE(67),
    [sym_while_statement] = STATE(67),
    [sym_do_while_statement] = STATE(67),
    [sym_return_statement] = STATE(67),
    [sym__variable_definition_statement] = STATE(67),
    [sym__expression_statement] = STATE(67),
    [sym__expression] = STATE(67),
    [sym_unary_expression] = STATE(67),
    [sym_literal] = STATE(67),
    [sym__numeric_literal] = STATE(38),
    [sym__string_literal] = STATE(38),
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
    [sym_variable_definition] = STATE(59),
    [sym_simple_type] = STATE(84),
    [sym__statement] = STATE(59),
    [sym__compound_statement] = STATE(59),
    [sym__simple_statement] = STATE(59),
    [sym_assignment_statement] = STATE(59),
    [sym_if_statement] = STATE(59),
    [sym_while_statement] = STATE(59),
    [sym_do_while_statement] = STATE(59),
    [sym_return_statement] = STATE(59),
    [sym__variable_definition_statement] = STATE(59),
    [sym__expression_statement] = STATE(59),
    [sym__expression] = STATE(59),
    [sym_unary_expression] = STATE(59),
    [sym_literal] = STATE(59),
    [sym__numeric_literal] = STATE(38),
    [sym__string_literal] = STATE(38),
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
    [sym_variable_definition] = STATE(66),
    [sym_simple_type] = STATE(84),
    [sym__statement] = STATE(66),
    [sym__compound_statement] = STATE(66),
    [sym__simple_statement] = STATE(66),
    [sym_assignment_statement] = STATE(66),
    [sym_if_statement] = STATE(66),
    [sym_while_statement] = STATE(66),
    [sym_do_while_statement] = STATE(66),
    [sym_return_statement] = STATE(66),
    [sym__variable_definition_statement] = STATE(66),
    [sym__expression_statement] = STATE(66),
    [sym__expression] = STATE(66),
    [sym_unary_expression] = STATE(66),
    [sym_literal] = STATE(66),
    [sym__numeric_literal] = STATE(38),
    [sym__string_literal] = STATE(38),
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
    [sym_variable_definition] = STATE(82),
    [sym_simple_type] = STATE(84),
    [sym__simple_statement] = STATE(82),
    [sym_assignment_statement] = STATE(82),
    [sym_if_statement] = STATE(82),
    [sym_while_statement] = STATE(82),
    [sym_do_while_statement] = STATE(82),
    [sym_return_statement] = STATE(82),
    [sym__variable_definition_statement] = STATE(82),
    [sym__expression_statement] = STATE(82),
    [sym__expression] = STATE(82),
    [sym_unary_expression] = STATE(82),
    [sym_literal] = STATE(82),
    [sym__numeric_literal] = STATE(38),
    [sym__string_literal] = STATE(38),
    [aux_sym__compound_statement_repeat1] = STATE(7),
    [anon_sym_local] = ACTIONS(37),
    [anon_sym_void] = ACTIONS(40),
    [anon_sym_entity] = ACTIONS(40),
    [anon_sym_float] = ACTIONS(40),
    [anon_sym_vector] = ACTIONS(40),
    [anon_sym_string] = ACTIONS(40),
    [anon_sym_int] = ACTIONS(40),
    [anon_sym_RBRACE] = ACTIONS(43),
    [anon_sym_if] = ACTIONS(45),
    [anon_sym_while] = ACTIONS(48),
    [anon_sym_do] = ACTIONS(51),
    [anon_sym_return] = ACTIONS(54),
    [anon_sym_DASH] = ACTIONS(57),
    [anon_sym_PLUS] = ACTIONS(60),
    [sym_identifier] = ACTIONS(63),
    [aux_sym__numeric_literal_token1] = ACTIONS(66),
    [aux_sym__numeric_literal_token2] = ACTIONS(69),
    [aux_sym__numeric_literal_token3] = ACTIONS(69),
    [aux_sym__numeric_literal_token4] = ACTIONS(69),
    [anon_sym_DQUOTE] = ACTIONS(72),
    [sym_comment] = ACTIONS(3),
  },
  [8] = {
    [sym_variable_definition] = STATE(82),
    [sym_simple_type] = STATE(84),
    [sym__simple_statement] = STATE(82),
    [sym_assignment_statement] = STATE(82),
    [sym_if_statement] = STATE(82),
    [sym_while_statement] = STATE(82),
    [sym_do_while_statement] = STATE(82),
    [sym_return_statement] = STATE(82),
    [sym__variable_definition_statement] = STATE(82),
    [sym__expression_statement] = STATE(82),
    [sym__expression] = STATE(82),
    [sym_unary_expression] = STATE(82),
    [sym_literal] = STATE(82),
    [sym__numeric_literal] = STATE(38),
    [sym__string_literal] = STATE(38),
    [aux_sym__compound_statement_repeat1] = STATE(7),
    [anon_sym_local] = ACTIONS(9),
    [anon_sym_void] = ACTIONS(11),
    [anon_sym_entity] = ACTIONS(11),
    [anon_sym_float] = ACTIONS(11),
    [anon_sym_vector] = ACTIONS(11),
    [anon_sym_string] = ACTIONS(11),
    [anon_sym_int] = ACTIONS(11),
    [anon_sym_RBRACE] = ACTIONS(75),
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
  [9] = {
    [sym_variable_definition] = STATE(82),
    [sym_simple_type] = STATE(84),
    [sym__simple_statement] = STATE(82),
    [sym_assignment_statement] = STATE(82),
    [sym_if_statement] = STATE(82),
    [sym_while_statement] = STATE(82),
    [sym_do_while_statement] = STATE(82),
    [sym_return_statement] = STATE(82),
    [sym__variable_definition_statement] = STATE(82),
    [sym__expression_statement] = STATE(82),
    [sym__expression] = STATE(82),
    [sym_unary_expression] = STATE(82),
    [sym_literal] = STATE(82),
    [sym__numeric_literal] = STATE(38),
    [sym__string_literal] = STATE(38),
    [aux_sym__compound_statement_repeat1] = STATE(8),
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
    ACTIONS(43), 6,
      anon_sym_RBRACE,
      anon_sym_PLUS,
      aux_sym__numeric_literal_token2,
      aux_sym__numeric_literal_token3,
      aux_sym__numeric_literal_token4,
      anon_sym_DQUOTE,
    ACTIONS(79), 14,
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
  [28] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(81), 1,
      ts_builtin_sym_end,
    STATE(65), 1,
      sym_simple_type,
    STATE(11), 5,
      sym__definition,
      sym_function_declaration,
      sym_function_definition,
      sym_constant_definition,
      aux_sym_source_file_repeat1,
    ACTIONS(83), 6,
      anon_sym_void,
      anon_sym_entity,
      anon_sym_float,
      anon_sym_vector,
      anon_sym_string,
      anon_sym_int,
  [53] = 9,
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
    ACTIONS(86), 1,
      sym_identifier,
    STATE(38), 2,
      sym__numeric_literal,
      sym__string_literal,
    ACTIONS(31), 3,
      aux_sym__numeric_literal_token2,
      aux_sym__numeric_literal_token3,
      aux_sym__numeric_literal_token4,
    STATE(94), 3,
      sym__expression,
      sym_unary_expression,
      sym_literal,
  [86] = 9,
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
    ACTIONS(88), 1,
      sym_identifier,
    STATE(38), 2,
      sym__numeric_literal,
      sym__string_literal,
    ACTIONS(31), 3,
      aux_sym__numeric_literal_token2,
      aux_sym__numeric_literal_token3,
      aux_sym__numeric_literal_token4,
    STATE(56), 3,
      sym__expression,
      sym_unary_expression,
      sym_literal,
  [119] = 9,
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
    ACTIONS(90), 1,
      sym_identifier,
    STATE(38), 2,
      sym__numeric_literal,
      sym__string_literal,
    ACTIONS(31), 3,
      aux_sym__numeric_literal_token2,
      aux_sym__numeric_literal_token3,
      aux_sym__numeric_literal_token4,
    STATE(68), 3,
      sym__expression,
      sym_unary_expression,
      sym_literal,
  [152] = 9,
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
    ACTIONS(92), 1,
      sym_identifier,
    STATE(38), 2,
      sym__numeric_literal,
      sym__string_literal,
    ACTIONS(31), 3,
      aux_sym__numeric_literal_token2,
      aux_sym__numeric_literal_token3,
      aux_sym__numeric_literal_token4,
    STATE(78), 3,
      sym__expression,
      sym_unary_expression,
      sym_literal,
  [185] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(94), 1,
      ts_builtin_sym_end,
    STATE(65), 1,
      sym_simple_type,
    STATE(11), 5,
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
  [210] = 9,
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
    ACTIONS(96), 1,
      sym_identifier,
    STATE(38), 2,
      sym__numeric_literal,
      sym__string_literal,
    ACTIONS(31), 3,
      aux_sym__numeric_literal_token2,
      aux_sym__numeric_literal_token3,
      aux_sym__numeric_literal_token4,
    STATE(80), 3,
      sym__expression,
      sym_unary_expression,
      sym_literal,
  [243] = 9,
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
    ACTIONS(98), 1,
      sym_identifier,
    STATE(38), 2,
      sym__numeric_literal,
      sym__string_literal,
    ACTIONS(31), 3,
      aux_sym__numeric_literal_token2,
      aux_sym__numeric_literal_token3,
      aux_sym__numeric_literal_token4,
    STATE(60), 3,
      sym__expression,
      sym_unary_expression,
      sym_literal,
  [276] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(100), 1,
      anon_sym_RPAREN,
    STATE(62), 1,
      sym__parameter,
    STATE(95), 1,
      sym_simple_type,
    ACTIONS(7), 6,
      anon_sym_void,
      anon_sym_entity,
      anon_sym_float,
      anon_sym_vector,
      anon_sym_string,
      anon_sym_int,
  [297] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(29), 1,
      aux_sym__numeric_literal_token1,
    ACTIONS(33), 1,
      anon_sym_DQUOTE,
    STATE(48), 1,
      sym_literal,
    STATE(38), 2,
      sym__numeric_literal,
      sym__string_literal,
    ACTIONS(31), 3,
      aux_sym__numeric_literal_token2,
      aux_sym__numeric_literal_token3,
      aux_sym__numeric_literal_token4,
  [319] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(29), 1,
      aux_sym__numeric_literal_token1,
    ACTIONS(33), 1,
      anon_sym_DQUOTE,
    STATE(57), 1,
      sym_literal,
    STATE(38), 2,
      sym__numeric_literal,
      sym__string_literal,
    ACTIONS(31), 3,
      aux_sym__numeric_literal_token2,
      aux_sym__numeric_literal_token3,
      aux_sym__numeric_literal_token4,
  [341] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(29), 1,
      aux_sym__numeric_literal_token1,
    ACTIONS(33), 1,
      anon_sym_DQUOTE,
    STATE(53), 1,
      sym_literal,
    STATE(38), 2,
      sym__numeric_literal,
      sym__string_literal,
    ACTIONS(31), 3,
      aux_sym__numeric_literal_token2,
      aux_sym__numeric_literal_token3,
      aux_sym__numeric_literal_token4,
  [363] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(29), 1,
      aux_sym__numeric_literal_token1,
    ACTIONS(33), 1,
      anon_sym_DQUOTE,
    STATE(90), 1,
      sym_literal,
    STATE(38), 2,
      sym__numeric_literal,
      sym__string_literal,
    ACTIONS(31), 3,
      aux_sym__numeric_literal_token2,
      aux_sym__numeric_literal_token3,
      aux_sym__numeric_literal_token4,
  [385] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(29), 1,
      aux_sym__numeric_literal_token1,
    ACTIONS(33), 1,
      anon_sym_DQUOTE,
    STATE(42), 1,
      sym_literal,
    STATE(38), 2,
      sym__numeric_literal,
      sym__string_literal,
    ACTIONS(31), 3,
      aux_sym__numeric_literal_token2,
      aux_sym__numeric_literal_token3,
      aux_sym__numeric_literal_token4,
  [407] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(29), 1,
      aux_sym__numeric_literal_token1,
    ACTIONS(33), 1,
      anon_sym_DQUOTE,
    STATE(50), 1,
      sym_literal,
    STATE(38), 2,
      sym__numeric_literal,
      sym__string_literal,
    ACTIONS(31), 3,
      aux_sym__numeric_literal_token2,
      aux_sym__numeric_literal_token3,
      aux_sym__numeric_literal_token4,
  [429] = 4,
    ACTIONS(3), 1,
      sym_comment,
    STATE(70), 1,
      sym__parameter,
    STATE(95), 1,
      sym_simple_type,
    ACTIONS(7), 6,
      anon_sym_void,
      anon_sym_entity,
      anon_sym_float,
      anon_sym_vector,
      anon_sym_string,
      anon_sym_int,
  [447] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(29), 1,
      aux_sym__numeric_literal_token1,
    ACTIONS(33), 1,
      anon_sym_DQUOTE,
    STATE(54), 1,
      sym_literal,
    STATE(38), 2,
      sym__numeric_literal,
      sym__string_literal,
    ACTIONS(31), 3,
      aux_sym__numeric_literal_token2,
      aux_sym__numeric_literal_token3,
      aux_sym__numeric_literal_token4,
  [469] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(29), 1,
      aux_sym__numeric_literal_token1,
    ACTIONS(33), 1,
      anon_sym_DQUOTE,
    STATE(47), 1,
      sym_literal,
    STATE(38), 2,
      sym__numeric_literal,
      sym__string_literal,
    ACTIONS(31), 3,
      aux_sym__numeric_literal_token2,
      aux_sym__numeric_literal_token3,
      aux_sym__numeric_literal_token4,
  [491] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(102), 7,
      ts_builtin_sym_end,
      anon_sym_void,
      anon_sym_entity,
      anon_sym_float,
      anon_sym_vector,
      anon_sym_string,
      anon_sym_int,
  [504] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(104), 7,
      ts_builtin_sym_end,
      anon_sym_void,
      anon_sym_entity,
      anon_sym_float,
      anon_sym_vector,
      anon_sym_string,
      anon_sym_int,
  [517] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(106), 7,
      ts_builtin_sym_end,
      anon_sym_void,
      anon_sym_entity,
      anon_sym_float,
      anon_sym_vector,
      anon_sym_string,
      anon_sym_int,
  [530] = 3,
    ACTIONS(3), 1,
      sym_comment,
    STATE(83), 1,
      sym_simple_type,
    ACTIONS(7), 6,
      anon_sym_void,
      anon_sym_entity,
      anon_sym_float,
      anon_sym_vector,
      anon_sym_string,
      anon_sym_int,
  [545] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(110), 1,
      anon_sym_EQ,
    ACTIONS(112), 1,
      anon_sym_COMMA,
    STATE(49), 1,
      aux_sym_variable_definition_repeat1,
    ACTIONS(108), 3,
      anon_sym_SEMI,
      anon_sym_else,
      anon_sym_while,
  [563] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(112), 1,
      anon_sym_COMMA,
    ACTIONS(116), 1,
      anon_sym_EQ,
    STATE(40), 1,
      aux_sym_variable_definition_repeat1,
    ACTIONS(114), 3,
      anon_sym_SEMI,
      anon_sym_else,
      anon_sym_while,
  [581] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(112), 1,
      anon_sym_COMMA,
    ACTIONS(120), 1,
      anon_sym_EQ,
    STATE(46), 1,
      aux_sym_variable_definition_repeat1,
    ACTIONS(118), 3,
      anon_sym_SEMI,
      anon_sym_else,
      anon_sym_while,
  [599] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(112), 1,
      anon_sym_COMMA,
    ACTIONS(124), 1,
      anon_sym_EQ,
    STATE(37), 1,
      aux_sym_variable_definition_repeat1,
    ACTIONS(122), 3,
      anon_sym_SEMI,
      anon_sym_else,
      anon_sym_while,
  [617] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(112), 1,
      anon_sym_COMMA,
    STATE(45), 1,
      aux_sym_variable_definition_repeat1,
    ACTIONS(108), 3,
      anon_sym_SEMI,
      anon_sym_else,
      anon_sym_while,
  [632] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(126), 5,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_else,
      anon_sym_while,
  [643] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(128), 5,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_else,
      anon_sym_while,
  [654] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(112), 1,
      anon_sym_COMMA,
    STATE(45), 1,
      aux_sym_variable_definition_repeat1,
    ACTIONS(118), 3,
      anon_sym_SEMI,
      anon_sym_else,
      anon_sym_while,
  [669] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(112), 1,
      anon_sym_COMMA,
    STATE(45), 1,
      aux_sym_variable_definition_repeat1,
    ACTIONS(130), 3,
      anon_sym_SEMI,
      anon_sym_else,
      anon_sym_while,
  [684] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(112), 1,
      anon_sym_COMMA,
    STATE(37), 1,
      aux_sym_variable_definition_repeat1,
    ACTIONS(122), 3,
      anon_sym_SEMI,
      anon_sym_else,
      anon_sym_while,
  [699] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(112), 1,
      anon_sym_COMMA,
    STATE(45), 1,
      aux_sym_variable_definition_repeat1,
    ACTIONS(132), 3,
      anon_sym_SEMI,
      anon_sym_else,
      anon_sym_while,
  [714] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(136), 1,
      anon_sym_EQ,
    ACTIONS(134), 4,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_else,
      anon_sym_while,
  [727] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(138), 1,
      anon_sym_COMMA,
    STATE(45), 1,
      aux_sym_variable_definition_repeat1,
    ACTIONS(134), 3,
      anon_sym_SEMI,
      anon_sym_else,
      anon_sym_while,
  [742] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(112), 1,
      anon_sym_COMMA,
    STATE(45), 1,
      aux_sym_variable_definition_repeat1,
    ACTIONS(122), 3,
      anon_sym_SEMI,
      anon_sym_else,
      anon_sym_while,
  [757] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(112), 1,
      anon_sym_COMMA,
    STATE(43), 1,
      aux_sym_variable_definition_repeat1,
    ACTIONS(130), 3,
      anon_sym_SEMI,
      anon_sym_else,
      anon_sym_while,
  [772] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(112), 1,
      anon_sym_COMMA,
    STATE(41), 1,
      aux_sym_variable_definition_repeat1,
    ACTIONS(141), 3,
      anon_sym_SEMI,
      anon_sym_else,
      anon_sym_while,
  [787] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(112), 1,
      anon_sym_COMMA,
    STATE(45), 1,
      aux_sym_variable_definition_repeat1,
    ACTIONS(141), 3,
      anon_sym_SEMI,
      anon_sym_else,
      anon_sym_while,
  [802] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(112), 1,
      anon_sym_COMMA,
    STATE(49), 1,
      aux_sym_variable_definition_repeat1,
    ACTIONS(108), 3,
      anon_sym_SEMI,
      anon_sym_else,
      anon_sym_while,
  [817] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(145), 1,
      anon_sym_EQ,
    ACTIONS(147), 1,
      anon_sym_COMMA,
    ACTIONS(143), 3,
      anon_sym_SEMI,
      anon_sym_else,
      anon_sym_while,
  [832] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(151), 1,
      anon_sym_EQ,
    ACTIONS(153), 1,
      anon_sym_COMMA,
    ACTIONS(149), 3,
      anon_sym_SEMI,
      anon_sym_else,
      anon_sym_while,
  [847] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(155), 1,
      anon_sym_COMMA,
    ACTIONS(114), 3,
      anon_sym_SEMI,
      anon_sym_else,
      anon_sym_while,
  [859] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(157), 4,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_else,
      anon_sym_while,
  [869] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(161), 1,
      anon_sym_EQ,
    ACTIONS(159), 3,
      anon_sym_SEMI,
      anon_sym_else,
      anon_sym_while,
  [881] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(163), 4,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      anon_sym_else,
      anon_sym_while,
  [891] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(165), 1,
      anon_sym_COMMA,
    ACTIONS(118), 3,
      anon_sym_SEMI,
      anon_sym_else,
      anon_sym_while,
  [903] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(167), 3,
      anon_sym_SEMI,
      anon_sym_else,
      anon_sym_while,
  [912] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(169), 3,
      anon_sym_SEMI,
      anon_sym_else,
      anon_sym_while,
  [921] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(171), 3,
      anon_sym_SEMI,
      anon_sym_else,
      anon_sym_while,
  [930] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(173), 1,
      anon_sym_COMMA,
    ACTIONS(175), 1,
      anon_sym_RPAREN,
    STATE(64), 1,
      aux_sym_parameter_list_repeat1,
  [943] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(173), 1,
      anon_sym_COMMA,
    ACTIONS(177), 1,
      anon_sym_RPAREN,
    STATE(61), 1,
      aux_sym_parameter_list_repeat1,
  [956] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(179), 3,
      anon_sym_SEMI,
      anon_sym_else,
      anon_sym_while,
  [965] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(181), 1,
      anon_sym_COMMA,
    ACTIONS(184), 1,
      anon_sym_RPAREN,
    STATE(64), 1,
      aux_sym_parameter_list_repeat1,
  [978] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(186), 1,
      anon_sym_LPAREN,
    ACTIONS(188), 1,
      sym_identifier,
    STATE(97), 1,
      sym_parameter_list,
  [991] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(192), 1,
      anon_sym_else,
    ACTIONS(190), 2,
      anon_sym_SEMI,
      anon_sym_while,
  [1002] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(194), 3,
      anon_sym_SEMI,
      anon_sym_else,
      anon_sym_while,
  [1011] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(196), 3,
      anon_sym_SEMI,
      anon_sym_else,
      anon_sym_while,
  [1020] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(198), 3,
      anon_sym_SEMI,
      anon_sym_else,
      anon_sym_while,
  [1029] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(184), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [1037] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(200), 2,
      anon_sym_LPAREN,
      sym_identifier,
  [1045] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(202), 1,
      anon_sym_SEMI,
    ACTIONS(204), 1,
      anon_sym_EQ,
  [1055] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(206), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [1063] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(208), 1,
      anon_sym_SEMI,
  [1070] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(210), 1,
      anon_sym_LPAREN,
  [1077] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(212), 1,
      sym_identifier,
  [1084] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(214), 1,
      sym_identifier,
  [1091] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(216), 1,
      anon_sym_RPAREN,
  [1098] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(218), 1,
      sym_identifier,
  [1105] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(220), 1,
      anon_sym_RPAREN,
  [1112] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(222), 1,
      anon_sym_while,
  [1119] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(224), 1,
      anon_sym_SEMI,
  [1126] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(226), 1,
      sym_identifier,
  [1133] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(228), 1,
      sym_identifier,
  [1140] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(230), 1,
      sym_identifier,
  [1147] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(232), 1,
      anon_sym_LPAREN,
  [1154] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(234), 1,
      sym_identifier,
  [1161] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(236), 1,
      anon_sym_DQUOTE,
  [1168] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(238), 1,
      sym_identifier,
  [1175] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(240), 1,
      anon_sym_SEMI,
  [1182] = 2,
    ACTIONS(242), 1,
      aux_sym__string_literal_token1,
    ACTIONS(244), 1,
      sym_comment,
  [1189] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(246), 1,
      sym_identifier,
  [1196] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(248), 1,
      anon_sym_LPAREN,
  [1203] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(250), 1,
      anon_sym_RPAREN,
  [1210] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(252), 1,
      sym_identifier,
  [1217] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(254), 1,
      sym_identifier,
  [1224] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(256), 1,
      sym_identifier,
  [1231] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(258), 1,
      anon_sym_EQ,
  [1238] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(260), 1,
      ts_builtin_sym_end,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(10)] = 0,
  [SMALL_STATE(11)] = 28,
  [SMALL_STATE(12)] = 53,
  [SMALL_STATE(13)] = 86,
  [SMALL_STATE(14)] = 119,
  [SMALL_STATE(15)] = 152,
  [SMALL_STATE(16)] = 185,
  [SMALL_STATE(17)] = 210,
  [SMALL_STATE(18)] = 243,
  [SMALL_STATE(19)] = 276,
  [SMALL_STATE(20)] = 297,
  [SMALL_STATE(21)] = 319,
  [SMALL_STATE(22)] = 341,
  [SMALL_STATE(23)] = 363,
  [SMALL_STATE(24)] = 385,
  [SMALL_STATE(25)] = 407,
  [SMALL_STATE(26)] = 429,
  [SMALL_STATE(27)] = 447,
  [SMALL_STATE(28)] = 469,
  [SMALL_STATE(29)] = 491,
  [SMALL_STATE(30)] = 504,
  [SMALL_STATE(31)] = 517,
  [SMALL_STATE(32)] = 530,
  [SMALL_STATE(33)] = 545,
  [SMALL_STATE(34)] = 563,
  [SMALL_STATE(35)] = 581,
  [SMALL_STATE(36)] = 599,
  [SMALL_STATE(37)] = 617,
  [SMALL_STATE(38)] = 632,
  [SMALL_STATE(39)] = 643,
  [SMALL_STATE(40)] = 654,
  [SMALL_STATE(41)] = 669,
  [SMALL_STATE(42)] = 684,
  [SMALL_STATE(43)] = 699,
  [SMALL_STATE(44)] = 714,
  [SMALL_STATE(45)] = 727,
  [SMALL_STATE(46)] = 742,
  [SMALL_STATE(47)] = 757,
  [SMALL_STATE(48)] = 772,
  [SMALL_STATE(49)] = 787,
  [SMALL_STATE(50)] = 802,
  [SMALL_STATE(51)] = 817,
  [SMALL_STATE(52)] = 832,
  [SMALL_STATE(53)] = 847,
  [SMALL_STATE(54)] = 859,
  [SMALL_STATE(55)] = 869,
  [SMALL_STATE(56)] = 881,
  [SMALL_STATE(57)] = 891,
  [SMALL_STATE(58)] = 903,
  [SMALL_STATE(59)] = 912,
  [SMALL_STATE(60)] = 921,
  [SMALL_STATE(61)] = 930,
  [SMALL_STATE(62)] = 943,
  [SMALL_STATE(63)] = 956,
  [SMALL_STATE(64)] = 965,
  [SMALL_STATE(65)] = 978,
  [SMALL_STATE(66)] = 991,
  [SMALL_STATE(67)] = 1002,
  [SMALL_STATE(68)] = 1011,
  [SMALL_STATE(69)] = 1020,
  [SMALL_STATE(70)] = 1029,
  [SMALL_STATE(71)] = 1037,
  [SMALL_STATE(72)] = 1045,
  [SMALL_STATE(73)] = 1055,
  [SMALL_STATE(74)] = 1063,
  [SMALL_STATE(75)] = 1070,
  [SMALL_STATE(76)] = 1077,
  [SMALL_STATE(77)] = 1084,
  [SMALL_STATE(78)] = 1091,
  [SMALL_STATE(79)] = 1098,
  [SMALL_STATE(80)] = 1105,
  [SMALL_STATE(81)] = 1112,
  [SMALL_STATE(82)] = 1119,
  [SMALL_STATE(83)] = 1126,
  [SMALL_STATE(84)] = 1133,
  [SMALL_STATE(85)] = 1140,
  [SMALL_STATE(86)] = 1147,
  [SMALL_STATE(87)] = 1154,
  [SMALL_STATE(88)] = 1161,
  [SMALL_STATE(89)] = 1168,
  [SMALL_STATE(90)] = 1175,
  [SMALL_STATE(91)] = 1182,
  [SMALL_STATE(92)] = 1189,
  [SMALL_STATE(93)] = 1196,
  [SMALL_STATE(94)] = 1203,
  [SMALL_STATE(95)] = 1210,
  [SMALL_STATE(96)] = 1217,
  [SMALL_STATE(97)] = 1224,
  [SMALL_STATE(98)] = 1231,
  [SMALL_STATE(99)] = 1238,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT_EXTRA(),
  [5] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(71),
  [9] = {.entry = {.count = 1, .reusable = false}}, SHIFT(32),
  [11] = {.entry = {.count = 1, .reusable = false}}, SHIFT(71),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [15] = {.entry = {.count = 1, .reusable = false}}, SHIFT(75),
  [17] = {.entry = {.count = 1, .reusable = false}}, SHIFT(86),
  [19] = {.entry = {.count = 1, .reusable = false}}, SHIFT(3),
  [21] = {.entry = {.count = 1, .reusable = false}}, SHIFT(14),
  [23] = {.entry = {.count = 1, .reusable = false}}, SHIFT(13),
  [25] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [27] = {.entry = {.count = 1, .reusable = false}}, SHIFT(55),
  [29] = {.entry = {.count = 1, .reusable = false}}, SHIFT(38),
  [31] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [33] = {.entry = {.count = 1, .reusable = true}}, SHIFT(91),
  [35] = {.entry = {.count = 1, .reusable = true}}, SHIFT(74),
  [37] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__compound_statement_repeat1, 2), SHIFT_REPEAT(32),
  [40] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__compound_statement_repeat1, 2), SHIFT_REPEAT(71),
  [43] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__compound_statement_repeat1, 2),
  [45] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__compound_statement_repeat1, 2), SHIFT_REPEAT(75),
  [48] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__compound_statement_repeat1, 2), SHIFT_REPEAT(86),
  [51] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__compound_statement_repeat1, 2), SHIFT_REPEAT(3),
  [54] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__compound_statement_repeat1, 2), SHIFT_REPEAT(14),
  [57] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__compound_statement_repeat1, 2), SHIFT_REPEAT(13),
  [60] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__compound_statement_repeat1, 2), SHIFT_REPEAT(13),
  [63] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__compound_statement_repeat1, 2), SHIFT_REPEAT(55),
  [66] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__compound_statement_repeat1, 2), SHIFT_REPEAT(38),
  [69] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__compound_statement_repeat1, 2), SHIFT_REPEAT(38),
  [72] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__compound_statement_repeat1, 2), SHIFT_REPEAT(91),
  [75] = {.entry = {.count = 1, .reusable = true}}, SHIFT(58),
  [77] = {.entry = {.count = 1, .reusable = true}}, SHIFT(69),
  [79] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__compound_statement_repeat1, 2),
  [81] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2),
  [83] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(71),
  [86] = {.entry = {.count = 1, .reusable = true}}, SHIFT(94),
  [88] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
  [90] = {.entry = {.count = 1, .reusable = true}}, SHIFT(68),
  [92] = {.entry = {.count = 1, .reusable = true}}, SHIFT(78),
  [94] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1),
  [96] = {.entry = {.count = 1, .reusable = true}}, SHIFT(80),
  [98] = {.entry = {.count = 1, .reusable = true}}, SHIFT(60),
  [100] = {.entry = {.count = 1, .reusable = true}}, SHIFT(96),
  [102] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_definition, 6),
  [104] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_declaration, 4),
  [106] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_constant_definition, 5),
  [108] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable_definition, 7),
  [110] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [112] = {.entry = {.count = 1, .reusable = true}}, SHIFT(77),
  [114] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable_definition, 4),
  [116] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [118] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable_definition, 5),
  [120] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [122] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable_definition, 6),
  [124] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [126] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_literal, 1),
  [128] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__string_literal, 3),
  [130] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable_definition, 9),
  [132] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable_definition, 10),
  [134] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_variable_definition_repeat1, 2),
  [136] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [138] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_variable_definition_repeat1, 2), SHIFT_REPEAT(77),
  [141] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable_definition, 8),
  [143] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable_definition, 2),
  [145] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [147] = {.entry = {.count = 1, .reusable = true}}, SHIFT(85),
  [149] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable_definition, 3),
  [151] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [153] = {.entry = {.count = 1, .reusable = true}}, SHIFT(76),
  [155] = {.entry = {.count = 1, .reusable = true}}, SHIFT(87),
  [157] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_variable_definition_repeat1, 4),
  [159] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__expression, 1),
  [161] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [163] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_unary_expression, 2),
  [165] = {.entry = {.count = 1, .reusable = true}}, SHIFT(79),
  [167] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__compound_statement, 3),
  [169] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_if_statement, 7),
  [171] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_assignment_statement, 3),
  [173] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [175] = {.entry = {.count = 1, .reusable = true}}, SHIFT(89),
  [177] = {.entry = {.count = 1, .reusable = true}}, SHIFT(92),
  [179] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_do_while_statement, 6),
  [181] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_parameter_list_repeat1, 2), SHIFT_REPEAT(26),
  [184] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_parameter_list_repeat1, 2),
  [186] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [188] = {.entry = {.count = 1, .reusable = true}}, SHIFT(98),
  [190] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_if_statement, 5),
  [192] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [194] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_while_statement, 5),
  [196] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_return_statement, 2),
  [198] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__compound_statement, 2),
  [200] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_simple_type, 1),
  [202] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [204] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [206] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__parameter, 2),
  [208] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [210] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [212] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [214] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [216] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [218] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [220] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [222] = {.entry = {.count = 1, .reusable = true}}, SHIFT(93),
  [224] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [226] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [228] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [230] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [232] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [234] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [236] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [238] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter_list, 4),
  [240] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [242] = {.entry = {.count = 1, .reusable = false}}, SHIFT(88),
  [244] = {.entry = {.count = 1, .reusable = false}}, SHIFT_EXTRA(),
  [246] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter_list, 3),
  [248] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [250] = {.entry = {.count = 1, .reusable = true}}, SHIFT(63),
  [252] = {.entry = {.count = 1, .reusable = true}}, SHIFT(73),
  [254] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter_list, 2),
  [256] = {.entry = {.count = 1, .reusable = true}}, SHIFT(72),
  [258] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [260] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
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
