#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 98
#define LARGE_STATE_COUNT 10
#define SYMBOL_COUNT 56
#define ALIAS_COUNT 0
#define TOKEN_COUNT 29
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
  sym_identifier = 20,
  aux_sym__numeric_literal_token1 = 21,
  aux_sym__numeric_literal_token2 = 22,
  aux_sym__numeric_literal_token3 = 23,
  aux_sym__numeric_literal_token4 = 24,
  anon_sym_DQUOTE = 25,
  aux_sym__string_literal_token1 = 26,
  sym__builtin_literal = 27,
  sym_comment = 28,
  sym_source_file = 29,
  sym__definition = 30,
  sym_function_declaration = 31,
  sym_function_definition = 32,
  sym_constant_definition = 33,
  sym_variable_definition = 34,
  sym_simple_type = 35,
  sym_parameter_list = 36,
  sym__parameter = 37,
  sym__statement = 38,
  sym__compound_statement = 39,
  sym__simple_statement = 40,
  sym_assignment_statement = 41,
  sym_if_statement = 42,
  sym_while_statement = 43,
  sym_do_while_statement = 44,
  sym_return_statement = 45,
  sym__variable_definition_statement = 46,
  sym__expression_statement = 47,
  sym__expression = 48,
  sym_literal = 49,
  sym__numeric_literal = 50,
  sym__string_literal = 51,
  aux_sym_source_file_repeat1 = 52,
  aux_sym_variable_definition_repeat1 = 53,
  aux_sym_parameter_list_repeat1 = 54,
  aux_sym__compound_statement_repeat1 = 55,
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
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(75);
      if (lookahead == '"') ADVANCE(148);
      if (lookahead == '#') ADVANCE(63);
      if (lookahead == '(') ADVANCE(93);
      if (lookahead == ')') ADVANCE(94);
      if (lookahead == ',') ADVANCE(80);
      if (lookahead == '-') ADVANCE(62);
      if (lookahead == '/') ADVANCE(11);
      if (lookahead == ';') ADVANCE(76);
      if (lookahead == '=') ADVANCE(77);
      if (lookahead == '\\') SKIP(74)
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
      if (lookahead == '{') ADVANCE(95);
      if (lookahead == '}') ADVANCE(96);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(144);
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
      if (lookahead == '.') ADVANCE(70);
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
      if (lookahead == '"') ADVANCE(148);
      if (lookahead == '#') ADVANCE(63);
      if (lookahead == '-') ADVANCE(62);
      if (lookahead == '/') ADVANCE(11);
      if (lookahead == '\\') SKIP(2)
      if (lookahead == '`') ADVANCE(14);
      if (lookahead == 'd') ADVANCE(127);
      if (lookahead == 'e') ADVANCE(126);
      if (lookahead == 'f') ADVANCE(123);
      if (lookahead == 'i') ADVANCE(114);
      if (lookahead == 'l') ADVANCE(128);
      if (lookahead == 'r') ADVANCE(113);
      if (lookahead == 's') ADVANCE(134);
      if (lookahead == 'v') ADVANCE(112);
      if (lookahead == 'w') ADVANCE(116);
      if (lookahead == '{') ADVANCE(95);
      if (lookahead == '}') ADVANCE(96);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(9)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(144);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(143);
      END_STATE();
    case 10:
      if (lookahead == '"') ADVANCE(148);
      if (lookahead == '(') ADVANCE(93);
      if (lookahead == '-') ADVANCE(62);
      if (lookahead == '/') ADVANCE(11);
      if (lookahead == '\\') SKIP(4)
      if (lookahead == '`') ADVANCE(14);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(10)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(144);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(143);
      END_STATE();
    case 11:
      if (lookahead == '*') ADVANCE(13);
      if (lookahead == '/') ADVANCE(159);
      END_STATE();
    case 12:
      if (lookahead == '*') ADVANCE(12);
      if (lookahead == '/') ADVANCE(158);
      if (lookahead != 0) ADVANCE(13);
      END_STATE();
    case 13:
      if (lookahead == '*') ADVANCE(12);
      if (lookahead != 0) ADVANCE(13);
      END_STATE();
    case 14:
      if (lookahead == '-') ADVANCE(64);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(5);
      END_STATE();
    case 15:
      if (lookahead == '-') ADVANCE(67);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(21);
      END_STATE();
    case 16:
      if (lookahead == '-') ADVANCE(68);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(20);
      END_STATE();
    case 17:
      if (lookahead == '-') ADVANCE(66);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(6);
      END_STATE();
    case 18:
      if (lookahead == '-') ADVANCE(71);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(19);
      END_STATE();
    case 19:
      if (lookahead == '.') ADVANCE(69);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(19);
      END_STATE();
    case 20:
      if (lookahead == '.') ADVANCE(72);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(20);
      END_STATE();
    case 21:
      if (lookahead == '`') ADVANCE(146);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(21);
      END_STATE();
    case 22:
      if (lookahead == '`') ADVANCE(147);
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
      if (lookahead == 'd') ADVANCE(81);
      END_STATE();
    case 28:
      if (lookahead == 'e') ADVANCE(99);
      END_STATE();
    case 29:
      if (lookahead == 'e') ADVANCE(100);
      END_STATE();
    case 30:
      if (lookahead == 'e') ADVANCE(26);
      if (lookahead == 'o') ADVANCE(35);
      END_STATE();
    case 31:
      if (lookahead == 'e') ADVANCE(55);
      END_STATE();
    case 32:
      if (lookahead == 'f') ADVANCE(97);
      if (lookahead == 'n') ADVANCE(54);
      END_STATE();
    case 33:
      if (lookahead == 'g') ADVANCE(89);
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
      if (lookahead == 'l') ADVANCE(78);
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
      if (lookahead == 'n') ADVANCE(104);
      END_STATE();
    case 45:
      if (lookahead == 'o') ADVANCE(102);
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
      if (lookahead == 'r') ADVANCE(87);
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
      if (lookahead == 't') ADVANCE(91);
      END_STATE();
    case 55:
      if (lookahead == 't') ADVANCE(60);
      END_STATE();
    case 56:
      if (lookahead == 't') ADVANCE(61);
      END_STATE();
    case 57:
      if (lookahead == 't') ADVANCE(85);
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
      if (lookahead == 'y') ADVANCE(83);
      END_STATE();
    case 62:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(144);
      END_STATE();
    case 63:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(157);
      END_STATE();
    case 64:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(5);
      END_STATE();
    case 65:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(145);
      END_STATE();
    case 66:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(6);
      END_STATE();
    case 67:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(21);
      END_STATE();
    case 68:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(20);
      END_STATE();
    case 69:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(22);
      END_STATE();
    case 70:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(7);
      END_STATE();
    case 71:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(19);
      END_STATE();
    case 72:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(8);
      END_STATE();
    case 73:
      if (eof) ADVANCE(75);
      if (lookahead == '\n') SKIP(0)
      END_STATE();
    case 74:
      if (eof) ADVANCE(75);
      if (lookahead == '\n') SKIP(0)
      if (lookahead == '\r') SKIP(73)
      END_STATE();
    case 75:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 76:
      ACCEPT_TOKEN(anon_sym_SEMI);
      END_STATE();
    case 77:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 78:
      ACCEPT_TOKEN(anon_sym_local);
      END_STATE();
    case 79:
      ACCEPT_TOKEN(anon_sym_local);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(143);
      END_STATE();
    case 80:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 81:
      ACCEPT_TOKEN(anon_sym_void);
      END_STATE();
    case 82:
      ACCEPT_TOKEN(anon_sym_void);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(143);
      END_STATE();
    case 83:
      ACCEPT_TOKEN(anon_sym_entity);
      END_STATE();
    case 84:
      ACCEPT_TOKEN(anon_sym_entity);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(143);
      END_STATE();
    case 85:
      ACCEPT_TOKEN(anon_sym_float);
      END_STATE();
    case 86:
      ACCEPT_TOKEN(anon_sym_float);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(143);
      END_STATE();
    case 87:
      ACCEPT_TOKEN(anon_sym_vector);
      END_STATE();
    case 88:
      ACCEPT_TOKEN(anon_sym_vector);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(143);
      END_STATE();
    case 89:
      ACCEPT_TOKEN(anon_sym_string);
      END_STATE();
    case 90:
      ACCEPT_TOKEN(anon_sym_string);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(143);
      END_STATE();
    case 91:
      ACCEPT_TOKEN(anon_sym_int);
      END_STATE();
    case 92:
      ACCEPT_TOKEN(anon_sym_int);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(143);
      END_STATE();
    case 93:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 94:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 95:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 96:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 97:
      ACCEPT_TOKEN(anon_sym_if);
      END_STATE();
    case 98:
      ACCEPT_TOKEN(anon_sym_if);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(143);
      END_STATE();
    case 99:
      ACCEPT_TOKEN(anon_sym_else);
      END_STATE();
    case 100:
      ACCEPT_TOKEN(anon_sym_while);
      END_STATE();
    case 101:
      ACCEPT_TOKEN(anon_sym_while);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(143);
      END_STATE();
    case 102:
      ACCEPT_TOKEN(anon_sym_do);
      END_STATE();
    case 103:
      ACCEPT_TOKEN(anon_sym_do);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(143);
      END_STATE();
    case 104:
      ACCEPT_TOKEN(anon_sym_return);
      END_STATE();
    case 105:
      ACCEPT_TOKEN(anon_sym_return);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(143);
      END_STATE();
    case 106:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(121);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(143);
      END_STATE();
    case 107:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(138);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(143);
      END_STATE();
    case 108:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'c') ADVANCE(106);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(143);
      END_STATE();
    case 109:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'c') ADVANCE(140);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(143);
      END_STATE();
    case 110:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'd') ADVANCE(82);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(143);
      END_STATE();
    case 111:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(101);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(143);
      END_STATE();
    case 112:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(109);
      if (lookahead == 'o') ADVANCE(117);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(143);
      END_STATE();
    case 113:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(136);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(143);
      END_STATE();
    case 114:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'f') ADVANCE(98);
      if (lookahead == 'n') ADVANCE(135);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(143);
      END_STATE();
    case 115:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'g') ADVANCE(90);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(143);
      END_STATE();
    case 116:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'h') ADVANCE(119);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(143);
      END_STATE();
    case 117:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(110);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(143);
      END_STATE();
    case 118:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(124);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(143);
      END_STATE();
    case 119:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(122);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(143);
      END_STATE();
    case 120:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(137);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(143);
      END_STATE();
    case 121:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(79);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(143);
      END_STATE();
    case 122:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(111);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(143);
      END_STATE();
    case 123:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(129);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(143);
      END_STATE();
    case 124:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(115);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(143);
      END_STATE();
    case 125:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(105);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(143);
      END_STATE();
    case 126:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(139);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(143);
      END_STATE();
    case 127:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(103);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(143);
      END_STATE();
    case 128:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(108);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(143);
      END_STATE();
    case 129:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(107);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(143);
      END_STATE();
    case 130:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(131);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(143);
      END_STATE();
    case 131:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(88);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(143);
      END_STATE();
    case 132:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(125);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(143);
      END_STATE();
    case 133:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(118);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(143);
      END_STATE();
    case 134:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(133);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(143);
      END_STATE();
    case 135:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(92);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(143);
      END_STATE();
    case 136:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(141);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(143);
      END_STATE();
    case 137:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(142);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(143);
      END_STATE();
    case 138:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(86);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(143);
      END_STATE();
    case 139:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(120);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(143);
      END_STATE();
    case 140:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(130);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(143);
      END_STATE();
    case 141:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'u') ADVANCE(132);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(143);
      END_STATE();
    case 142:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'y') ADVANCE(84);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(143);
      END_STATE();
    case 143:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(143);
      END_STATE();
    case 144:
      ACCEPT_TOKEN(aux_sym__numeric_literal_token1);
      if (lookahead == '.') ADVANCE(65);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(144);
      END_STATE();
    case 145:
      ACCEPT_TOKEN(aux_sym__numeric_literal_token2);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(145);
      END_STATE();
    case 146:
      ACCEPT_TOKEN(aux_sym__numeric_literal_token3);
      END_STATE();
    case 147:
      ACCEPT_TOKEN(aux_sym__numeric_literal_token4);
      END_STATE();
    case 148:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 149:
      ACCEPT_TOKEN(aux_sym__string_literal_token1);
      if (lookahead == '\n') ADVANCE(155);
      if (lookahead == '\r') ADVANCE(150);
      if (lookahead != 0 &&
          lookahead != '"') ADVANCE(156);
      END_STATE();
    case 150:
      ACCEPT_TOKEN(aux_sym__string_literal_token1);
      if (lookahead == '\n') ADVANCE(155);
      if (lookahead != 0 &&
          lookahead != '"') ADVANCE(156);
      END_STATE();
    case 151:
      ACCEPT_TOKEN(aux_sym__string_literal_token1);
      if (lookahead == '\n') ADVANCE(156);
      if (lookahead == '"') ADVANCE(159);
      if (lookahead != 0) ADVANCE(151);
      END_STATE();
    case 152:
      ACCEPT_TOKEN(aux_sym__string_literal_token1);
      if (lookahead == '"') ADVANCE(13);
      if (lookahead == '*') ADVANCE(152);
      if (lookahead == '/') ADVANCE(156);
      if (lookahead != 0) ADVANCE(153);
      END_STATE();
    case 153:
      ACCEPT_TOKEN(aux_sym__string_literal_token1);
      if (lookahead == '"') ADVANCE(13);
      if (lookahead == '*') ADVANCE(152);
      if (lookahead != 0) ADVANCE(153);
      END_STATE();
    case 154:
      ACCEPT_TOKEN(aux_sym__string_literal_token1);
      if (lookahead == '*') ADVANCE(153);
      if (lookahead == '/') ADVANCE(151);
      if (lookahead != 0 &&
          lookahead != '"') ADVANCE(156);
      END_STATE();
    case 155:
      ACCEPT_TOKEN(aux_sym__string_literal_token1);
      if (lookahead == '/') ADVANCE(154);
      if (lookahead == '\\') ADVANCE(149);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(155);
      if (lookahead != 0 &&
          lookahead != '"') ADVANCE(156);
      END_STATE();
    case 156:
      ACCEPT_TOKEN(aux_sym__string_literal_token1);
      if (lookahead != 0 &&
          lookahead != '"') ADVANCE(156);
      END_STATE();
    case 157:
      ACCEPT_TOKEN(sym__builtin_literal);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(157);
      END_STATE();
    case 158:
      ACCEPT_TOKEN(sym_comment);
      END_STATE();
    case 159:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(159);
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
  [12] = {.lex_state = 0},
  [13] = {.lex_state = 10},
  [14] = {.lex_state = 10},
  [15] = {.lex_state = 10},
  [16] = {.lex_state = 10},
  [17] = {.lex_state = 10},
  [18] = {.lex_state = 0},
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
  [63] = {.lex_state = 10},
  [64] = {.lex_state = 0},
  [65] = {.lex_state = 0},
  [66] = {.lex_state = 0},
  [67] = {.lex_state = 0},
  [68] = {.lex_state = 0},
  [69] = {.lex_state = 10},
  [70] = {.lex_state = 0},
  [71] = {.lex_state = 0},
  [72] = {.lex_state = 0},
  [73] = {.lex_state = 0},
  [74] = {.lex_state = 10},
  [75] = {.lex_state = 10},
  [76] = {.lex_state = 0},
  [77] = {.lex_state = 10},
  [78] = {.lex_state = 0},
  [79] = {.lex_state = 0},
  [80] = {.lex_state = 0},
  [81] = {.lex_state = 10},
  [82] = {.lex_state = 10},
  [83] = {.lex_state = 10},
  [84] = {.lex_state = 0},
  [85] = {.lex_state = 10},
  [86] = {.lex_state = 0},
  [87] = {.lex_state = 10},
  [88] = {.lex_state = 0},
  [89] = {.lex_state = 155},
  [90] = {.lex_state = 10},
  [91] = {.lex_state = 0},
  [92] = {.lex_state = 0},
  [93] = {.lex_state = 10},
  [94] = {.lex_state = 10},
  [95] = {.lex_state = 10},
  [96] = {.lex_state = 0},
  [97] = {.lex_state = 0},
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
    [aux_sym__numeric_literal_token1] = ACTIONS(1),
    [aux_sym__numeric_literal_token2] = ACTIONS(1),
    [aux_sym__numeric_literal_token3] = ACTIONS(1),
    [aux_sym__numeric_literal_token4] = ACTIONS(1),
    [anon_sym_DQUOTE] = ACTIONS(1),
    [sym__builtin_literal] = ACTIONS(1),
    [sym_comment] = ACTIONS(3),
  },
  [1] = {
    [sym_source_file] = STATE(97),
    [sym__definition] = STATE(12),
    [sym_function_declaration] = STATE(12),
    [sym_function_definition] = STATE(12),
    [sym_constant_definition] = STATE(12),
    [sym_simple_type] = STATE(63),
    [aux_sym_source_file_repeat1] = STATE(12),
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
    [sym_variable_definition] = STATE(72),
    [sym_simple_type] = STATE(82),
    [sym__statement] = STATE(72),
    [sym__compound_statement] = STATE(72),
    [sym__simple_statement] = STATE(72),
    [sym_assignment_statement] = STATE(72),
    [sym_if_statement] = STATE(72),
    [sym_while_statement] = STATE(72),
    [sym_do_while_statement] = STATE(72),
    [sym_return_statement] = STATE(72),
    [sym__variable_definition_statement] = STATE(72),
    [sym__expression_statement] = STATE(72),
    [sym__expression] = STATE(72),
    [sym_literal] = STATE(72),
    [sym__numeric_literal] = STATE(37),
    [sym__string_literal] = STATE(37),
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
    [sym_identifier] = ACTIONS(23),
    [aux_sym__numeric_literal_token1] = ACTIONS(25),
    [aux_sym__numeric_literal_token2] = ACTIONS(27),
    [aux_sym__numeric_literal_token3] = ACTIONS(27),
    [aux_sym__numeric_literal_token4] = ACTIONS(27),
    [anon_sym_DQUOTE] = ACTIONS(29),
    [sym__builtin_literal] = ACTIONS(31),
    [sym_comment] = ACTIONS(3),
  },
  [3] = {
    [sym_variable_definition] = STATE(79),
    [sym_simple_type] = STATE(82),
    [sym__statement] = STATE(79),
    [sym__compound_statement] = STATE(79),
    [sym__simple_statement] = STATE(79),
    [sym_assignment_statement] = STATE(79),
    [sym_if_statement] = STATE(79),
    [sym_while_statement] = STATE(79),
    [sym_do_while_statement] = STATE(79),
    [sym_return_statement] = STATE(79),
    [sym__variable_definition_statement] = STATE(79),
    [sym__expression_statement] = STATE(79),
    [sym__expression] = STATE(79),
    [sym_literal] = STATE(79),
    [sym__numeric_literal] = STATE(37),
    [sym__string_literal] = STATE(37),
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
    [sym_identifier] = ACTIONS(23),
    [aux_sym__numeric_literal_token1] = ACTIONS(25),
    [aux_sym__numeric_literal_token2] = ACTIONS(27),
    [aux_sym__numeric_literal_token3] = ACTIONS(27),
    [aux_sym__numeric_literal_token4] = ACTIONS(27),
    [anon_sym_DQUOTE] = ACTIONS(29),
    [sym_comment] = ACTIONS(3),
  },
  [4] = {
    [sym_variable_definition] = STATE(65),
    [sym_simple_type] = STATE(82),
    [sym__statement] = STATE(65),
    [sym__compound_statement] = STATE(65),
    [sym__simple_statement] = STATE(65),
    [sym_assignment_statement] = STATE(65),
    [sym_if_statement] = STATE(65),
    [sym_while_statement] = STATE(65),
    [sym_do_while_statement] = STATE(65),
    [sym_return_statement] = STATE(65),
    [sym__variable_definition_statement] = STATE(65),
    [sym__expression_statement] = STATE(65),
    [sym__expression] = STATE(65),
    [sym_literal] = STATE(65),
    [sym__numeric_literal] = STATE(37),
    [sym__string_literal] = STATE(37),
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
    [sym_identifier] = ACTIONS(23),
    [aux_sym__numeric_literal_token1] = ACTIONS(25),
    [aux_sym__numeric_literal_token2] = ACTIONS(27),
    [aux_sym__numeric_literal_token3] = ACTIONS(27),
    [aux_sym__numeric_literal_token4] = ACTIONS(27),
    [anon_sym_DQUOTE] = ACTIONS(29),
    [sym_comment] = ACTIONS(3),
  },
  [5] = {
    [sym_variable_definition] = STATE(57),
    [sym_simple_type] = STATE(82),
    [sym__statement] = STATE(57),
    [sym__compound_statement] = STATE(57),
    [sym__simple_statement] = STATE(57),
    [sym_assignment_statement] = STATE(57),
    [sym_if_statement] = STATE(57),
    [sym_while_statement] = STATE(57),
    [sym_do_while_statement] = STATE(57),
    [sym_return_statement] = STATE(57),
    [sym__variable_definition_statement] = STATE(57),
    [sym__expression_statement] = STATE(57),
    [sym__expression] = STATE(57),
    [sym_literal] = STATE(57),
    [sym__numeric_literal] = STATE(37),
    [sym__string_literal] = STATE(37),
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
    [sym_identifier] = ACTIONS(23),
    [aux_sym__numeric_literal_token1] = ACTIONS(25),
    [aux_sym__numeric_literal_token2] = ACTIONS(27),
    [aux_sym__numeric_literal_token3] = ACTIONS(27),
    [aux_sym__numeric_literal_token4] = ACTIONS(27),
    [anon_sym_DQUOTE] = ACTIONS(29),
    [sym_comment] = ACTIONS(3),
  },
  [6] = {
    [sym_variable_definition] = STATE(64),
    [sym_simple_type] = STATE(82),
    [sym__statement] = STATE(64),
    [sym__compound_statement] = STATE(64),
    [sym__simple_statement] = STATE(64),
    [sym_assignment_statement] = STATE(64),
    [sym_if_statement] = STATE(64),
    [sym_while_statement] = STATE(64),
    [sym_do_while_statement] = STATE(64),
    [sym_return_statement] = STATE(64),
    [sym__variable_definition_statement] = STATE(64),
    [sym__expression_statement] = STATE(64),
    [sym__expression] = STATE(64),
    [sym_literal] = STATE(64),
    [sym__numeric_literal] = STATE(37),
    [sym__string_literal] = STATE(37),
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
    [sym_identifier] = ACTIONS(23),
    [aux_sym__numeric_literal_token1] = ACTIONS(25),
    [aux_sym__numeric_literal_token2] = ACTIONS(27),
    [aux_sym__numeric_literal_token3] = ACTIONS(27),
    [aux_sym__numeric_literal_token4] = ACTIONS(27),
    [anon_sym_DQUOTE] = ACTIONS(29),
    [sym_comment] = ACTIONS(3),
  },
  [7] = {
    [sym_variable_definition] = STATE(80),
    [sym_simple_type] = STATE(82),
    [sym__simple_statement] = STATE(80),
    [sym_assignment_statement] = STATE(80),
    [sym_if_statement] = STATE(80),
    [sym_while_statement] = STATE(80),
    [sym_do_while_statement] = STATE(80),
    [sym_return_statement] = STATE(80),
    [sym__variable_definition_statement] = STATE(80),
    [sym__expression_statement] = STATE(80),
    [sym__expression] = STATE(80),
    [sym_literal] = STATE(80),
    [sym__numeric_literal] = STATE(37),
    [sym__string_literal] = STATE(37),
    [aux_sym__compound_statement_repeat1] = STATE(7),
    [anon_sym_local] = ACTIONS(33),
    [anon_sym_void] = ACTIONS(36),
    [anon_sym_entity] = ACTIONS(36),
    [anon_sym_float] = ACTIONS(36),
    [anon_sym_vector] = ACTIONS(36),
    [anon_sym_string] = ACTIONS(36),
    [anon_sym_int] = ACTIONS(36),
    [anon_sym_RBRACE] = ACTIONS(39),
    [anon_sym_if] = ACTIONS(41),
    [anon_sym_while] = ACTIONS(44),
    [anon_sym_do] = ACTIONS(47),
    [anon_sym_return] = ACTIONS(50),
    [sym_identifier] = ACTIONS(53),
    [aux_sym__numeric_literal_token1] = ACTIONS(56),
    [aux_sym__numeric_literal_token2] = ACTIONS(59),
    [aux_sym__numeric_literal_token3] = ACTIONS(59),
    [aux_sym__numeric_literal_token4] = ACTIONS(59),
    [anon_sym_DQUOTE] = ACTIONS(62),
    [sym_comment] = ACTIONS(3),
  },
  [8] = {
    [sym_variable_definition] = STATE(80),
    [sym_simple_type] = STATE(82),
    [sym__simple_statement] = STATE(80),
    [sym_assignment_statement] = STATE(80),
    [sym_if_statement] = STATE(80),
    [sym_while_statement] = STATE(80),
    [sym_do_while_statement] = STATE(80),
    [sym_return_statement] = STATE(80),
    [sym__variable_definition_statement] = STATE(80),
    [sym__expression_statement] = STATE(80),
    [sym__expression] = STATE(80),
    [sym_literal] = STATE(80),
    [sym__numeric_literal] = STATE(37),
    [sym__string_literal] = STATE(37),
    [aux_sym__compound_statement_repeat1] = STATE(7),
    [anon_sym_local] = ACTIONS(9),
    [anon_sym_void] = ACTIONS(11),
    [anon_sym_entity] = ACTIONS(11),
    [anon_sym_float] = ACTIONS(11),
    [anon_sym_vector] = ACTIONS(11),
    [anon_sym_string] = ACTIONS(11),
    [anon_sym_int] = ACTIONS(11),
    [anon_sym_RBRACE] = ACTIONS(65),
    [anon_sym_if] = ACTIONS(15),
    [anon_sym_while] = ACTIONS(17),
    [anon_sym_do] = ACTIONS(19),
    [anon_sym_return] = ACTIONS(21),
    [sym_identifier] = ACTIONS(23),
    [aux_sym__numeric_literal_token1] = ACTIONS(25),
    [aux_sym__numeric_literal_token2] = ACTIONS(27),
    [aux_sym__numeric_literal_token3] = ACTIONS(27),
    [aux_sym__numeric_literal_token4] = ACTIONS(27),
    [anon_sym_DQUOTE] = ACTIONS(29),
    [sym_comment] = ACTIONS(3),
  },
  [9] = {
    [sym_variable_definition] = STATE(80),
    [sym_simple_type] = STATE(82),
    [sym__simple_statement] = STATE(80),
    [sym_assignment_statement] = STATE(80),
    [sym_if_statement] = STATE(80),
    [sym_while_statement] = STATE(80),
    [sym_do_while_statement] = STATE(80),
    [sym_return_statement] = STATE(80),
    [sym__variable_definition_statement] = STATE(80),
    [sym__expression_statement] = STATE(80),
    [sym__expression] = STATE(80),
    [sym_literal] = STATE(80),
    [sym__numeric_literal] = STATE(37),
    [sym__string_literal] = STATE(37),
    [aux_sym__compound_statement_repeat1] = STATE(8),
    [anon_sym_local] = ACTIONS(9),
    [anon_sym_void] = ACTIONS(11),
    [anon_sym_entity] = ACTIONS(11),
    [anon_sym_float] = ACTIONS(11),
    [anon_sym_vector] = ACTIONS(11),
    [anon_sym_string] = ACTIONS(11),
    [anon_sym_int] = ACTIONS(11),
    [anon_sym_RBRACE] = ACTIONS(67),
    [anon_sym_if] = ACTIONS(15),
    [anon_sym_while] = ACTIONS(17),
    [anon_sym_do] = ACTIONS(19),
    [anon_sym_return] = ACTIONS(21),
    [sym_identifier] = ACTIONS(23),
    [aux_sym__numeric_literal_token1] = ACTIONS(25),
    [aux_sym__numeric_literal_token2] = ACTIONS(27),
    [aux_sym__numeric_literal_token3] = ACTIONS(27),
    [aux_sym__numeric_literal_token4] = ACTIONS(27),
    [anon_sym_DQUOTE] = ACTIONS(29),
    [sym_comment] = ACTIONS(3),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(39), 5,
      anon_sym_RBRACE,
      aux_sym__numeric_literal_token2,
      aux_sym__numeric_literal_token3,
      aux_sym__numeric_literal_token4,
      anon_sym_DQUOTE,
    ACTIONS(69), 13,
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
      sym_identifier,
      aux_sym__numeric_literal_token1,
  [26] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(71), 1,
      ts_builtin_sym_end,
    STATE(63), 1,
      sym_simple_type,
    STATE(11), 5,
      sym__definition,
      sym_function_declaration,
      sym_function_definition,
      sym_constant_definition,
      aux_sym_source_file_repeat1,
    ACTIONS(73), 6,
      anon_sym_void,
      anon_sym_entity,
      anon_sym_float,
      anon_sym_vector,
      anon_sym_string,
      anon_sym_int,
  [51] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(76), 1,
      ts_builtin_sym_end,
    STATE(63), 1,
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
  [76] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(25), 1,
      aux_sym__numeric_literal_token1,
    ACTIONS(29), 1,
      anon_sym_DQUOTE,
    ACTIONS(78), 1,
      sym_identifier,
    STATE(37), 2,
      sym__numeric_literal,
      sym__string_literal,
    STATE(92), 2,
      sym__expression,
      sym_literal,
    ACTIONS(27), 3,
      aux_sym__numeric_literal_token2,
      aux_sym__numeric_literal_token3,
      aux_sym__numeric_literal_token4,
  [102] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(25), 1,
      aux_sym__numeric_literal_token1,
    ACTIONS(29), 1,
      anon_sym_DQUOTE,
    ACTIONS(80), 1,
      sym_identifier,
    STATE(37), 2,
      sym__numeric_literal,
      sym__string_literal,
    STATE(62), 2,
      sym__expression,
      sym_literal,
    ACTIONS(27), 3,
      aux_sym__numeric_literal_token2,
      aux_sym__numeric_literal_token3,
      aux_sym__numeric_literal_token4,
  [128] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(25), 1,
      aux_sym__numeric_literal_token1,
    ACTIONS(29), 1,
      anon_sym_DQUOTE,
    ACTIONS(82), 1,
      sym_identifier,
    STATE(37), 2,
      sym__numeric_literal,
      sym__string_literal,
    STATE(76), 2,
      sym__expression,
      sym_literal,
    ACTIONS(27), 3,
      aux_sym__numeric_literal_token2,
      aux_sym__numeric_literal_token3,
      aux_sym__numeric_literal_token4,
  [154] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(25), 1,
      aux_sym__numeric_literal_token1,
    ACTIONS(29), 1,
      anon_sym_DQUOTE,
    ACTIONS(84), 1,
      sym_identifier,
    STATE(37), 2,
      sym__numeric_literal,
      sym__string_literal,
    STATE(78), 2,
      sym__expression,
      sym_literal,
    ACTIONS(27), 3,
      aux_sym__numeric_literal_token2,
      aux_sym__numeric_literal_token3,
      aux_sym__numeric_literal_token4,
  [180] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(25), 1,
      aux_sym__numeric_literal_token1,
    ACTIONS(29), 1,
      anon_sym_DQUOTE,
    ACTIONS(86), 1,
      sym_identifier,
    STATE(37), 2,
      sym__numeric_literal,
      sym__string_literal,
    STATE(58), 2,
      sym__expression,
      sym_literal,
    ACTIONS(27), 3,
      aux_sym__numeric_literal_token2,
      aux_sym__numeric_literal_token3,
      aux_sym__numeric_literal_token4,
  [206] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(88), 1,
      anon_sym_RPAREN,
    STATE(60), 1,
      sym__parameter,
    STATE(93), 1,
      sym_simple_type,
    ACTIONS(7), 6,
      anon_sym_void,
      anon_sym_entity,
      anon_sym_float,
      anon_sym_vector,
      anon_sym_string,
      anon_sym_int,
  [227] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(25), 1,
      aux_sym__numeric_literal_token1,
    ACTIONS(29), 1,
      anon_sym_DQUOTE,
    STATE(41), 1,
      sym_literal,
    STATE(37), 2,
      sym__numeric_literal,
      sym__string_literal,
    ACTIONS(27), 3,
      aux_sym__numeric_literal_token2,
      aux_sym__numeric_literal_token3,
      aux_sym__numeric_literal_token4,
  [249] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(25), 1,
      aux_sym__numeric_literal_token1,
    ACTIONS(29), 1,
      anon_sym_DQUOTE,
    STATE(47), 1,
      sym_literal,
    STATE(37), 2,
      sym__numeric_literal,
      sym__string_literal,
    ACTIONS(27), 3,
      aux_sym__numeric_literal_token2,
      aux_sym__numeric_literal_token3,
      aux_sym__numeric_literal_token4,
  [271] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(25), 1,
      aux_sym__numeric_literal_token1,
    ACTIONS(29), 1,
      anon_sym_DQUOTE,
    STATE(55), 1,
      sym_literal,
    STATE(37), 2,
      sym__numeric_literal,
      sym__string_literal,
    ACTIONS(27), 3,
      aux_sym__numeric_literal_token2,
      aux_sym__numeric_literal_token3,
      aux_sym__numeric_literal_token4,
  [293] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(25), 1,
      aux_sym__numeric_literal_token1,
    ACTIONS(29), 1,
      anon_sym_DQUOTE,
    STATE(54), 1,
      sym_literal,
    STATE(37), 2,
      sym__numeric_literal,
      sym__string_literal,
    ACTIONS(27), 3,
      aux_sym__numeric_literal_token2,
      aux_sym__numeric_literal_token3,
      aux_sym__numeric_literal_token4,
  [315] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(25), 1,
      aux_sym__numeric_literal_token1,
    ACTIONS(29), 1,
      anon_sym_DQUOTE,
    STATE(88), 1,
      sym_literal,
    STATE(37), 2,
      sym__numeric_literal,
      sym__string_literal,
    ACTIONS(27), 3,
      aux_sym__numeric_literal_token2,
      aux_sym__numeric_literal_token3,
      aux_sym__numeric_literal_token4,
  [337] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(25), 1,
      aux_sym__numeric_literal_token1,
    ACTIONS(29), 1,
      anon_sym_DQUOTE,
    STATE(48), 1,
      sym_literal,
    STATE(37), 2,
      sym__numeric_literal,
      sym__string_literal,
    ACTIONS(27), 3,
      aux_sym__numeric_literal_token2,
      aux_sym__numeric_literal_token3,
      aux_sym__numeric_literal_token4,
  [359] = 4,
    ACTIONS(3), 1,
      sym_comment,
    STATE(68), 1,
      sym__parameter,
    STATE(93), 1,
      sym_simple_type,
    ACTIONS(7), 6,
      anon_sym_void,
      anon_sym_entity,
      anon_sym_float,
      anon_sym_vector,
      anon_sym_string,
      anon_sym_int,
  [377] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(25), 1,
      aux_sym__numeric_literal_token1,
    ACTIONS(29), 1,
      anon_sym_DQUOTE,
    STATE(53), 1,
      sym_literal,
    STATE(37), 2,
      sym__numeric_literal,
      sym__string_literal,
    ACTIONS(27), 3,
      aux_sym__numeric_literal_token2,
      aux_sym__numeric_literal_token3,
      aux_sym__numeric_literal_token4,
  [399] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(25), 1,
      aux_sym__numeric_literal_token1,
    ACTIONS(29), 1,
      anon_sym_DQUOTE,
    STATE(46), 1,
      sym_literal,
    STATE(37), 2,
      sym__numeric_literal,
      sym__string_literal,
    ACTIONS(27), 3,
      aux_sym__numeric_literal_token2,
      aux_sym__numeric_literal_token3,
      aux_sym__numeric_literal_token4,
  [421] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(90), 7,
      ts_builtin_sym_end,
      anon_sym_void,
      anon_sym_entity,
      anon_sym_float,
      anon_sym_vector,
      anon_sym_string,
      anon_sym_int,
  [434] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(92), 7,
      ts_builtin_sym_end,
      anon_sym_void,
      anon_sym_entity,
      anon_sym_float,
      anon_sym_vector,
      anon_sym_string,
      anon_sym_int,
  [447] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(94), 7,
      ts_builtin_sym_end,
      anon_sym_void,
      anon_sym_entity,
      anon_sym_float,
      anon_sym_vector,
      anon_sym_string,
      anon_sym_int,
  [460] = 3,
    ACTIONS(3), 1,
      sym_comment,
    STATE(81), 1,
      sym_simple_type,
    ACTIONS(7), 6,
      anon_sym_void,
      anon_sym_entity,
      anon_sym_float,
      anon_sym_vector,
      anon_sym_string,
      anon_sym_int,
  [475] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(98), 1,
      anon_sym_EQ,
    ACTIONS(100), 1,
      anon_sym_COMMA,
    STATE(51), 1,
      aux_sym_variable_definition_repeat1,
    ACTIONS(96), 3,
      anon_sym_SEMI,
      anon_sym_else,
      anon_sym_while,
  [493] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(100), 1,
      anon_sym_COMMA,
    ACTIONS(104), 1,
      anon_sym_EQ,
    STATE(39), 1,
      aux_sym_variable_definition_repeat1,
    ACTIONS(102), 3,
      anon_sym_SEMI,
      anon_sym_else,
      anon_sym_while,
  [511] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(100), 1,
      anon_sym_COMMA,
    ACTIONS(108), 1,
      anon_sym_EQ,
    STATE(45), 1,
      aux_sym_variable_definition_repeat1,
    ACTIONS(106), 3,
      anon_sym_SEMI,
      anon_sym_else,
      anon_sym_while,
  [529] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(100), 1,
      anon_sym_COMMA,
    ACTIONS(112), 1,
      anon_sym_EQ,
    STATE(36), 1,
      aux_sym_variable_definition_repeat1,
    ACTIONS(110), 3,
      anon_sym_SEMI,
      anon_sym_else,
      anon_sym_while,
  [547] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(100), 1,
      anon_sym_COMMA,
    STATE(44), 1,
      aux_sym_variable_definition_repeat1,
    ACTIONS(96), 3,
      anon_sym_SEMI,
      anon_sym_else,
      anon_sym_while,
  [562] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(114), 5,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_else,
      anon_sym_while,
  [573] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(116), 5,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_else,
      anon_sym_while,
  [584] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(100), 1,
      anon_sym_COMMA,
    STATE(44), 1,
      aux_sym_variable_definition_repeat1,
    ACTIONS(106), 3,
      anon_sym_SEMI,
      anon_sym_else,
      anon_sym_while,
  [599] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(100), 1,
      anon_sym_COMMA,
    STATE(44), 1,
      aux_sym_variable_definition_repeat1,
    ACTIONS(118), 3,
      anon_sym_SEMI,
      anon_sym_else,
      anon_sym_while,
  [614] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(100), 1,
      anon_sym_COMMA,
    STATE(36), 1,
      aux_sym_variable_definition_repeat1,
    ACTIONS(110), 3,
      anon_sym_SEMI,
      anon_sym_else,
      anon_sym_while,
  [629] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(100), 1,
      anon_sym_COMMA,
    STATE(44), 1,
      aux_sym_variable_definition_repeat1,
    ACTIONS(120), 3,
      anon_sym_SEMI,
      anon_sym_else,
      anon_sym_while,
  [644] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(124), 1,
      anon_sym_EQ,
    ACTIONS(122), 4,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_else,
      anon_sym_while,
  [657] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(126), 1,
      anon_sym_COMMA,
    STATE(44), 1,
      aux_sym_variable_definition_repeat1,
    ACTIONS(122), 3,
      anon_sym_SEMI,
      anon_sym_else,
      anon_sym_while,
  [672] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(100), 1,
      anon_sym_COMMA,
    STATE(44), 1,
      aux_sym_variable_definition_repeat1,
    ACTIONS(110), 3,
      anon_sym_SEMI,
      anon_sym_else,
      anon_sym_while,
  [687] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(100), 1,
      anon_sym_COMMA,
    STATE(42), 1,
      aux_sym_variable_definition_repeat1,
    ACTIONS(118), 3,
      anon_sym_SEMI,
      anon_sym_else,
      anon_sym_while,
  [702] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(100), 1,
      anon_sym_COMMA,
    STATE(40), 1,
      aux_sym_variable_definition_repeat1,
    ACTIONS(129), 3,
      anon_sym_SEMI,
      anon_sym_else,
      anon_sym_while,
  [717] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(100), 1,
      anon_sym_COMMA,
    STATE(51), 1,
      aux_sym_variable_definition_repeat1,
    ACTIONS(96), 3,
      anon_sym_SEMI,
      anon_sym_else,
      anon_sym_while,
  [732] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(133), 1,
      anon_sym_EQ,
    ACTIONS(135), 1,
      anon_sym_COMMA,
    ACTIONS(131), 3,
      anon_sym_SEMI,
      anon_sym_else,
      anon_sym_while,
  [747] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(139), 1,
      anon_sym_EQ,
    ACTIONS(141), 1,
      anon_sym_COMMA,
    ACTIONS(137), 3,
      anon_sym_SEMI,
      anon_sym_else,
      anon_sym_while,
  [762] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(100), 1,
      anon_sym_COMMA,
    STATE(44), 1,
      aux_sym_variable_definition_repeat1,
    ACTIONS(129), 3,
      anon_sym_SEMI,
      anon_sym_else,
      anon_sym_while,
  [777] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(145), 1,
      anon_sym_EQ,
    ACTIONS(143), 3,
      anon_sym_SEMI,
      anon_sym_else,
      anon_sym_while,
  [789] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(147), 4,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_else,
      anon_sym_while,
  [799] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(149), 1,
      anon_sym_COMMA,
    ACTIONS(102), 3,
      anon_sym_SEMI,
      anon_sym_else,
      anon_sym_while,
  [811] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(151), 1,
      anon_sym_COMMA,
    ACTIONS(106), 3,
      anon_sym_SEMI,
      anon_sym_else,
      anon_sym_while,
  [823] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(153), 3,
      anon_sym_SEMI,
      anon_sym_else,
      anon_sym_while,
  [832] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(155), 3,
      anon_sym_SEMI,
      anon_sym_else,
      anon_sym_while,
  [841] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(157), 3,
      anon_sym_SEMI,
      anon_sym_else,
      anon_sym_while,
  [850] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(159), 1,
      anon_sym_COMMA,
    ACTIONS(161), 1,
      anon_sym_RPAREN,
    STATE(61), 1,
      aux_sym_parameter_list_repeat1,
  [863] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(159), 1,
      anon_sym_COMMA,
    ACTIONS(163), 1,
      anon_sym_RPAREN,
    STATE(59), 1,
      aux_sym_parameter_list_repeat1,
  [876] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(165), 1,
      anon_sym_COMMA,
    ACTIONS(168), 1,
      anon_sym_RPAREN,
    STATE(61), 1,
      aux_sym_parameter_list_repeat1,
  [889] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(170), 3,
      anon_sym_SEMI,
      anon_sym_else,
      anon_sym_while,
  [898] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(172), 1,
      anon_sym_LPAREN,
    ACTIONS(174), 1,
      sym_identifier,
    STATE(95), 1,
      sym_parameter_list,
  [911] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(178), 1,
      anon_sym_else,
    ACTIONS(176), 2,
      anon_sym_SEMI,
      anon_sym_while,
  [922] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(180), 3,
      anon_sym_SEMI,
      anon_sym_else,
      anon_sym_while,
  [931] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(182), 3,
      anon_sym_SEMI,
      anon_sym_else,
      anon_sym_while,
  [940] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(184), 3,
      anon_sym_SEMI,
      anon_sym_else,
      anon_sym_while,
  [949] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(168), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [957] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(186), 2,
      anon_sym_LPAREN,
      sym_identifier,
  [965] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(188), 1,
      anon_sym_SEMI,
    ACTIONS(190), 1,
      anon_sym_EQ,
  [975] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(192), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [983] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(194), 1,
      anon_sym_SEMI,
  [990] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(196), 1,
      anon_sym_LPAREN,
  [997] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(198), 1,
      sym_identifier,
  [1004] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(200), 1,
      sym_identifier,
  [1011] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(202), 1,
      anon_sym_RPAREN,
  [1018] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(204), 1,
      sym_identifier,
  [1025] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(206), 1,
      anon_sym_RPAREN,
  [1032] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(208), 1,
      anon_sym_while,
  [1039] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(210), 1,
      anon_sym_SEMI,
  [1046] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(212), 1,
      sym_identifier,
  [1053] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(214), 1,
      sym_identifier,
  [1060] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(216), 1,
      sym_identifier,
  [1067] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(218), 1,
      anon_sym_LPAREN,
  [1074] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(220), 1,
      sym_identifier,
  [1081] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(222), 1,
      anon_sym_DQUOTE,
  [1088] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(224), 1,
      sym_identifier,
  [1095] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(226), 1,
      anon_sym_SEMI,
  [1102] = 2,
    ACTIONS(228), 1,
      aux_sym__string_literal_token1,
    ACTIONS(230), 1,
      sym_comment,
  [1109] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(232), 1,
      sym_identifier,
  [1116] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(234), 1,
      anon_sym_LPAREN,
  [1123] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(236), 1,
      anon_sym_RPAREN,
  [1130] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(238), 1,
      sym_identifier,
  [1137] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(240), 1,
      sym_identifier,
  [1144] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(242), 1,
      sym_identifier,
  [1151] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(244), 1,
      anon_sym_EQ,
  [1158] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(246), 1,
      ts_builtin_sym_end,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(10)] = 0,
  [SMALL_STATE(11)] = 26,
  [SMALL_STATE(12)] = 51,
  [SMALL_STATE(13)] = 76,
  [SMALL_STATE(14)] = 102,
  [SMALL_STATE(15)] = 128,
  [SMALL_STATE(16)] = 154,
  [SMALL_STATE(17)] = 180,
  [SMALL_STATE(18)] = 206,
  [SMALL_STATE(19)] = 227,
  [SMALL_STATE(20)] = 249,
  [SMALL_STATE(21)] = 271,
  [SMALL_STATE(22)] = 293,
  [SMALL_STATE(23)] = 315,
  [SMALL_STATE(24)] = 337,
  [SMALL_STATE(25)] = 359,
  [SMALL_STATE(26)] = 377,
  [SMALL_STATE(27)] = 399,
  [SMALL_STATE(28)] = 421,
  [SMALL_STATE(29)] = 434,
  [SMALL_STATE(30)] = 447,
  [SMALL_STATE(31)] = 460,
  [SMALL_STATE(32)] = 475,
  [SMALL_STATE(33)] = 493,
  [SMALL_STATE(34)] = 511,
  [SMALL_STATE(35)] = 529,
  [SMALL_STATE(36)] = 547,
  [SMALL_STATE(37)] = 562,
  [SMALL_STATE(38)] = 573,
  [SMALL_STATE(39)] = 584,
  [SMALL_STATE(40)] = 599,
  [SMALL_STATE(41)] = 614,
  [SMALL_STATE(42)] = 629,
  [SMALL_STATE(43)] = 644,
  [SMALL_STATE(44)] = 657,
  [SMALL_STATE(45)] = 672,
  [SMALL_STATE(46)] = 687,
  [SMALL_STATE(47)] = 702,
  [SMALL_STATE(48)] = 717,
  [SMALL_STATE(49)] = 732,
  [SMALL_STATE(50)] = 747,
  [SMALL_STATE(51)] = 762,
  [SMALL_STATE(52)] = 777,
  [SMALL_STATE(53)] = 789,
  [SMALL_STATE(54)] = 799,
  [SMALL_STATE(55)] = 811,
  [SMALL_STATE(56)] = 823,
  [SMALL_STATE(57)] = 832,
  [SMALL_STATE(58)] = 841,
  [SMALL_STATE(59)] = 850,
  [SMALL_STATE(60)] = 863,
  [SMALL_STATE(61)] = 876,
  [SMALL_STATE(62)] = 889,
  [SMALL_STATE(63)] = 898,
  [SMALL_STATE(64)] = 911,
  [SMALL_STATE(65)] = 922,
  [SMALL_STATE(66)] = 931,
  [SMALL_STATE(67)] = 940,
  [SMALL_STATE(68)] = 949,
  [SMALL_STATE(69)] = 957,
  [SMALL_STATE(70)] = 965,
  [SMALL_STATE(71)] = 975,
  [SMALL_STATE(72)] = 983,
  [SMALL_STATE(73)] = 990,
  [SMALL_STATE(74)] = 997,
  [SMALL_STATE(75)] = 1004,
  [SMALL_STATE(76)] = 1011,
  [SMALL_STATE(77)] = 1018,
  [SMALL_STATE(78)] = 1025,
  [SMALL_STATE(79)] = 1032,
  [SMALL_STATE(80)] = 1039,
  [SMALL_STATE(81)] = 1046,
  [SMALL_STATE(82)] = 1053,
  [SMALL_STATE(83)] = 1060,
  [SMALL_STATE(84)] = 1067,
  [SMALL_STATE(85)] = 1074,
  [SMALL_STATE(86)] = 1081,
  [SMALL_STATE(87)] = 1088,
  [SMALL_STATE(88)] = 1095,
  [SMALL_STATE(89)] = 1102,
  [SMALL_STATE(90)] = 1109,
  [SMALL_STATE(91)] = 1116,
  [SMALL_STATE(92)] = 1123,
  [SMALL_STATE(93)] = 1130,
  [SMALL_STATE(94)] = 1137,
  [SMALL_STATE(95)] = 1144,
  [SMALL_STATE(96)] = 1151,
  [SMALL_STATE(97)] = 1158,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT_EXTRA(),
  [5] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(69),
  [9] = {.entry = {.count = 1, .reusable = false}}, SHIFT(31),
  [11] = {.entry = {.count = 1, .reusable = false}}, SHIFT(69),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [15] = {.entry = {.count = 1, .reusable = false}}, SHIFT(73),
  [17] = {.entry = {.count = 1, .reusable = false}}, SHIFT(84),
  [19] = {.entry = {.count = 1, .reusable = false}}, SHIFT(3),
  [21] = {.entry = {.count = 1, .reusable = false}}, SHIFT(14),
  [23] = {.entry = {.count = 1, .reusable = false}}, SHIFT(52),
  [25] = {.entry = {.count = 1, .reusable = false}}, SHIFT(37),
  [27] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [29] = {.entry = {.count = 1, .reusable = true}}, SHIFT(89),
  [31] = {.entry = {.count = 1, .reusable = true}}, SHIFT(72),
  [33] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__compound_statement_repeat1, 2), SHIFT_REPEAT(31),
  [36] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__compound_statement_repeat1, 2), SHIFT_REPEAT(69),
  [39] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__compound_statement_repeat1, 2),
  [41] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__compound_statement_repeat1, 2), SHIFT_REPEAT(73),
  [44] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__compound_statement_repeat1, 2), SHIFT_REPEAT(84),
  [47] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__compound_statement_repeat1, 2), SHIFT_REPEAT(3),
  [50] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__compound_statement_repeat1, 2), SHIFT_REPEAT(14),
  [53] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__compound_statement_repeat1, 2), SHIFT_REPEAT(52),
  [56] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__compound_statement_repeat1, 2), SHIFT_REPEAT(37),
  [59] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__compound_statement_repeat1, 2), SHIFT_REPEAT(37),
  [62] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__compound_statement_repeat1, 2), SHIFT_REPEAT(89),
  [65] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
  [67] = {.entry = {.count = 1, .reusable = true}}, SHIFT(66),
  [69] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__compound_statement_repeat1, 2),
  [71] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2),
  [73] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(69),
  [76] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1),
  [78] = {.entry = {.count = 1, .reusable = true}}, SHIFT(92),
  [80] = {.entry = {.count = 1, .reusable = true}}, SHIFT(62),
  [82] = {.entry = {.count = 1, .reusable = true}}, SHIFT(76),
  [84] = {.entry = {.count = 1, .reusable = true}}, SHIFT(78),
  [86] = {.entry = {.count = 1, .reusable = true}}, SHIFT(58),
  [88] = {.entry = {.count = 1, .reusable = true}}, SHIFT(94),
  [90] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_definition, 6),
  [92] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_declaration, 4),
  [94] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_constant_definition, 5),
  [96] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable_definition, 7),
  [98] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [100] = {.entry = {.count = 1, .reusable = true}}, SHIFT(75),
  [102] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable_definition, 4),
  [104] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [106] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable_definition, 5),
  [108] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [110] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable_definition, 6),
  [112] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [114] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_literal, 1),
  [116] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__string_literal, 3),
  [118] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable_definition, 9),
  [120] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable_definition, 10),
  [122] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_variable_definition_repeat1, 2),
  [124] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [126] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_variable_definition_repeat1, 2), SHIFT_REPEAT(75),
  [129] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable_definition, 8),
  [131] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable_definition, 2),
  [133] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [135] = {.entry = {.count = 1, .reusable = true}}, SHIFT(83),
  [137] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable_definition, 3),
  [139] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [141] = {.entry = {.count = 1, .reusable = true}}, SHIFT(74),
  [143] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__expression, 1),
  [145] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [147] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_variable_definition_repeat1, 4),
  [149] = {.entry = {.count = 1, .reusable = true}}, SHIFT(85),
  [151] = {.entry = {.count = 1, .reusable = true}}, SHIFT(77),
  [153] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__compound_statement, 3),
  [155] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_if_statement, 7),
  [157] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_assignment_statement, 3),
  [159] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [161] = {.entry = {.count = 1, .reusable = true}}, SHIFT(87),
  [163] = {.entry = {.count = 1, .reusable = true}}, SHIFT(90),
  [165] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_parameter_list_repeat1, 2), SHIFT_REPEAT(25),
  [168] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_parameter_list_repeat1, 2),
  [170] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_return_statement, 2),
  [172] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [174] = {.entry = {.count = 1, .reusable = true}}, SHIFT(96),
  [176] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_if_statement, 5),
  [178] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [180] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_while_statement, 5),
  [182] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__compound_statement, 2),
  [184] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_do_while_statement, 6),
  [186] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_simple_type, 1),
  [188] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [190] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [192] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__parameter, 2),
  [194] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [196] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [198] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [200] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [202] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [204] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [206] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [208] = {.entry = {.count = 1, .reusable = true}}, SHIFT(91),
  [210] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [212] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [214] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [216] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [218] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [220] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [222] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [224] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter_list, 4),
  [226] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [228] = {.entry = {.count = 1, .reusable = false}}, SHIFT(86),
  [230] = {.entry = {.count = 1, .reusable = false}}, SHIFT_EXTRA(),
  [232] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter_list, 3),
  [234] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [236] = {.entry = {.count = 1, .reusable = true}}, SHIFT(67),
  [238] = {.entry = {.count = 1, .reusable = true}}, SHIFT(71),
  [240] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter_list, 2),
  [242] = {.entry = {.count = 1, .reusable = true}}, SHIFT(70),
  [244] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [246] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
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
