#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 60
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 50
#define ALIAS_COUNT 0
#define TOKEN_COUNT 28
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 7
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
  sym_identifier = 19,
  aux_sym__numeric_literal_token1 = 20,
  aux_sym__numeric_literal_token2 = 21,
  aux_sym__numeric_literal_token3 = 22,
  aux_sym__numeric_literal_token4 = 23,
  anon_sym_DQUOTE = 24,
  aux_sym__string_literal_token1 = 25,
  sym__builtin_literal = 26,
  sym_comment = 27,
  sym_source_file = 28,
  sym__definition = 29,
  sym_function_declaration = 30,
  sym_function_definition = 31,
  sym_constant_definition = 32,
  sym_simple_type = 33,
  sym_parameter_list = 34,
  sym__parameter = 35,
  sym__statement = 36,
  sym__compound_statement = 37,
  sym__simple_statement = 38,
  sym_assignment_statement = 39,
  sym_if_statement = 40,
  sym_while_statement = 41,
  sym_do_while_statement = 42,
  sym__expression = 43,
  sym_literal = 44,
  sym__numeric_literal = 45,
  sym__string_literal = 46,
  aux_sym_source_file_repeat1 = 47,
  aux_sym_parameter_list_repeat1 = 48,
  aux_sym__compound_statement_repeat1 = 49,
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
  [sym__expression] = "_expression",
  [sym_literal] = "literal",
  [sym__numeric_literal] = "_numeric_literal",
  [sym__string_literal] = "_string_literal",
  [aux_sym_source_file_repeat1] = "source_file_repeat1",
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
  [sym__expression] = sym__expression,
  [sym_literal] = sym_literal,
  [sym__numeric_literal] = sym__numeric_literal,
  [sym__string_literal] = sym__string_literal,
  [aux_sym_source_file_repeat1] = aux_sym_source_file_repeat1,
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
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(70);
      if (lookahead == '"') ADVANCE(103);
      if (lookahead == '#') ADVANCE(58);
      if (lookahead == '(') ADVANCE(81);
      if (lookahead == ')') ADVANCE(82);
      if (lookahead == ',') ADVANCE(74);
      if (lookahead == '-') ADVANCE(57);
      if (lookahead == '/') ADVANCE(11);
      if (lookahead == ';') ADVANCE(71);
      if (lookahead == '=') ADVANCE(72);
      if (lookahead == '\\') SKIP(69)
      if (lookahead == '`') ADVANCE(14);
      if (lookahead == 'd') ADVANCE(43);
      if (lookahead == 'e') ADVANCE(38);
      if (lookahead == 'f') ADVANCE(41);
      if (lookahead == 'i') ADVANCE(31);
      if (lookahead == 'l') ADVANCE(44);
      if (lookahead == 's') ADVANCE(50);
      if (lookahead == 'v') ADVANCE(30);
      if (lookahead == 'w') ADVANCE(33);
      if (lookahead == '{') ADVANCE(83);
      if (lookahead == '}') ADVANCE(84);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(99);
      END_STATE();
    case 1:
      if (lookahead == '\n') SKIP(10)
      END_STATE();
    case 2:
      if (lookahead == '\n') SKIP(10)
      if (lookahead == '\r') SKIP(1)
      END_STATE();
    case 3:
      if (lookahead == '\n') SKIP(9)
      END_STATE();
    case 4:
      if (lookahead == '\n') SKIP(9)
      if (lookahead == '\r') SKIP(3)
      END_STATE();
    case 5:
      if (lookahead == ' ') ADVANCE(17);
      if (lookahead == '.') ADVANCE(65);
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
      if (lookahead == '"') ADVANCE(103);
      if (lookahead == '(') ADVANCE(81);
      if (lookahead == '-') ADVANCE(57);
      if (lookahead == '/') ADVANCE(11);
      if (lookahead == '\\') SKIP(4)
      if (lookahead == '`') ADVANCE(14);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(9)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(99);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(98);
      END_STATE();
    case 10:
      if (lookahead == '#') ADVANCE(58);
      if (lookahead == '/') ADVANCE(11);
      if (lookahead == '\\') SKIP(2)
      if (lookahead == 'd') ADVANCE(97);
      if (lookahead == 'i') ADVANCE(93);
      if (lookahead == 'w') ADVANCE(94);
      if (lookahead == '{') ADVANCE(83);
      if (lookahead == '}') ADVANCE(84);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(10)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(98);
      END_STATE();
    case 11:
      if (lookahead == '*') ADVANCE(13);
      if (lookahead == '/') ADVANCE(114);
      END_STATE();
    case 12:
      if (lookahead == '*') ADVANCE(12);
      if (lookahead == '/') ADVANCE(113);
      if (lookahead != 0) ADVANCE(13);
      END_STATE();
    case 13:
      if (lookahead == '*') ADVANCE(12);
      if (lookahead != 0) ADVANCE(13);
      END_STATE();
    case 14:
      if (lookahead == '-') ADVANCE(59);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(5);
      END_STATE();
    case 15:
      if (lookahead == '-') ADVANCE(62);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(21);
      END_STATE();
    case 16:
      if (lookahead == '-') ADVANCE(63);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(20);
      END_STATE();
    case 17:
      if (lookahead == '-') ADVANCE(61);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(6);
      END_STATE();
    case 18:
      if (lookahead == '-') ADVANCE(66);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(19);
      END_STATE();
    case 19:
      if (lookahead == '.') ADVANCE(64);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(19);
      END_STATE();
    case 20:
      if (lookahead == '.') ADVANCE(67);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(20);
      END_STATE();
    case 21:
      if (lookahead == '`') ADVANCE(101);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(21);
      END_STATE();
    case 22:
      if (lookahead == '`') ADVANCE(102);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(22);
      END_STATE();
    case 23:
      if (lookahead == 'a') ADVANCE(39);
      END_STATE();
    case 24:
      if (lookahead == 'a') ADVANCE(53);
      END_STATE();
    case 25:
      if (lookahead == 'c') ADVANCE(23);
      END_STATE();
    case 26:
      if (lookahead == 'c') ADVANCE(55);
      END_STATE();
    case 27:
      if (lookahead == 'd') ADVANCE(75);
      END_STATE();
    case 28:
      if (lookahead == 'e') ADVANCE(87);
      END_STATE();
    case 29:
      if (lookahead == 'e') ADVANCE(88);
      END_STATE();
    case 30:
      if (lookahead == 'e') ADVANCE(26);
      if (lookahead == 'o') ADVANCE(34);
      END_STATE();
    case 31:
      if (lookahead == 'f') ADVANCE(85);
      if (lookahead == 'n') ADVANCE(51);
      END_STATE();
    case 32:
      if (lookahead == 'g') ADVANCE(79);
      END_STATE();
    case 33:
      if (lookahead == 'h') ADVANCE(36);
      END_STATE();
    case 34:
      if (lookahead == 'i') ADVANCE(27);
      END_STATE();
    case 35:
      if (lookahead == 'i') ADVANCE(42);
      END_STATE();
    case 36:
      if (lookahead == 'i') ADVANCE(40);
      END_STATE();
    case 37:
      if (lookahead == 'i') ADVANCE(52);
      END_STATE();
    case 38:
      if (lookahead == 'l') ADVANCE(49);
      if (lookahead == 'n') ADVANCE(54);
      END_STATE();
    case 39:
      if (lookahead == 'l') ADVANCE(73);
      END_STATE();
    case 40:
      if (lookahead == 'l') ADVANCE(29);
      END_STATE();
    case 41:
      if (lookahead == 'l') ADVANCE(45);
      END_STATE();
    case 42:
      if (lookahead == 'n') ADVANCE(32);
      END_STATE();
    case 43:
      if (lookahead == 'o') ADVANCE(90);
      END_STATE();
    case 44:
      if (lookahead == 'o') ADVANCE(25);
      END_STATE();
    case 45:
      if (lookahead == 'o') ADVANCE(24);
      END_STATE();
    case 46:
      if (lookahead == 'o') ADVANCE(47);
      END_STATE();
    case 47:
      if (lookahead == 'r') ADVANCE(78);
      END_STATE();
    case 48:
      if (lookahead == 'r') ADVANCE(35);
      END_STATE();
    case 49:
      if (lookahead == 's') ADVANCE(28);
      END_STATE();
    case 50:
      if (lookahead == 't') ADVANCE(48);
      END_STATE();
    case 51:
      if (lookahead == 't') ADVANCE(80);
      END_STATE();
    case 52:
      if (lookahead == 't') ADVANCE(56);
      END_STATE();
    case 53:
      if (lookahead == 't') ADVANCE(77);
      END_STATE();
    case 54:
      if (lookahead == 't') ADVANCE(37);
      END_STATE();
    case 55:
      if (lookahead == 't') ADVANCE(46);
      END_STATE();
    case 56:
      if (lookahead == 'y') ADVANCE(76);
      END_STATE();
    case 57:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(99);
      END_STATE();
    case 58:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(112);
      END_STATE();
    case 59:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(5);
      END_STATE();
    case 60:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(100);
      END_STATE();
    case 61:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(6);
      END_STATE();
    case 62:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(21);
      END_STATE();
    case 63:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(20);
      END_STATE();
    case 64:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(22);
      END_STATE();
    case 65:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(7);
      END_STATE();
    case 66:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(19);
      END_STATE();
    case 67:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(8);
      END_STATE();
    case 68:
      if (eof) ADVANCE(70);
      if (lookahead == '\n') SKIP(0)
      END_STATE();
    case 69:
      if (eof) ADVANCE(70);
      if (lookahead == '\n') SKIP(0)
      if (lookahead == '\r') SKIP(68)
      END_STATE();
    case 70:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 71:
      ACCEPT_TOKEN(anon_sym_SEMI);
      END_STATE();
    case 72:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 73:
      ACCEPT_TOKEN(anon_sym_local);
      END_STATE();
    case 74:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 75:
      ACCEPT_TOKEN(anon_sym_void);
      END_STATE();
    case 76:
      ACCEPT_TOKEN(anon_sym_entity);
      END_STATE();
    case 77:
      ACCEPT_TOKEN(anon_sym_float);
      END_STATE();
    case 78:
      ACCEPT_TOKEN(anon_sym_vector);
      END_STATE();
    case 79:
      ACCEPT_TOKEN(anon_sym_string);
      END_STATE();
    case 80:
      ACCEPT_TOKEN(anon_sym_int);
      END_STATE();
    case 81:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 82:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 83:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 84:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 85:
      ACCEPT_TOKEN(anon_sym_if);
      END_STATE();
    case 86:
      ACCEPT_TOKEN(anon_sym_if);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(98);
      END_STATE();
    case 87:
      ACCEPT_TOKEN(anon_sym_else);
      END_STATE();
    case 88:
      ACCEPT_TOKEN(anon_sym_while);
      END_STATE();
    case 89:
      ACCEPT_TOKEN(anon_sym_while);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(98);
      END_STATE();
    case 90:
      ACCEPT_TOKEN(anon_sym_do);
      END_STATE();
    case 91:
      ACCEPT_TOKEN(anon_sym_do);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(98);
      END_STATE();
    case 92:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(89);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(98);
      END_STATE();
    case 93:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'f') ADVANCE(86);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(98);
      END_STATE();
    case 94:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'h') ADVANCE(95);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(98);
      END_STATE();
    case 95:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(96);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(98);
      END_STATE();
    case 96:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(92);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(98);
      END_STATE();
    case 97:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(91);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(98);
      END_STATE();
    case 98:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(98);
      END_STATE();
    case 99:
      ACCEPT_TOKEN(aux_sym__numeric_literal_token1);
      if (lookahead == '.') ADVANCE(60);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(99);
      END_STATE();
    case 100:
      ACCEPT_TOKEN(aux_sym__numeric_literal_token2);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(100);
      END_STATE();
    case 101:
      ACCEPT_TOKEN(aux_sym__numeric_literal_token3);
      END_STATE();
    case 102:
      ACCEPT_TOKEN(aux_sym__numeric_literal_token4);
      END_STATE();
    case 103:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 104:
      ACCEPT_TOKEN(aux_sym__string_literal_token1);
      if (lookahead == '\n') ADVANCE(110);
      if (lookahead == '\r') ADVANCE(105);
      if (lookahead != 0 &&
          lookahead != '"') ADVANCE(111);
      END_STATE();
    case 105:
      ACCEPT_TOKEN(aux_sym__string_literal_token1);
      if (lookahead == '\n') ADVANCE(110);
      if (lookahead != 0 &&
          lookahead != '"') ADVANCE(111);
      END_STATE();
    case 106:
      ACCEPT_TOKEN(aux_sym__string_literal_token1);
      if (lookahead == '\n') ADVANCE(111);
      if (lookahead == '"') ADVANCE(114);
      if (lookahead != 0) ADVANCE(106);
      END_STATE();
    case 107:
      ACCEPT_TOKEN(aux_sym__string_literal_token1);
      if (lookahead == '"') ADVANCE(13);
      if (lookahead == '*') ADVANCE(107);
      if (lookahead == '/') ADVANCE(111);
      if (lookahead != 0) ADVANCE(108);
      END_STATE();
    case 108:
      ACCEPT_TOKEN(aux_sym__string_literal_token1);
      if (lookahead == '"') ADVANCE(13);
      if (lookahead == '*') ADVANCE(107);
      if (lookahead != 0) ADVANCE(108);
      END_STATE();
    case 109:
      ACCEPT_TOKEN(aux_sym__string_literal_token1);
      if (lookahead == '*') ADVANCE(108);
      if (lookahead == '/') ADVANCE(106);
      if (lookahead != 0 &&
          lookahead != '"') ADVANCE(111);
      END_STATE();
    case 110:
      ACCEPT_TOKEN(aux_sym__string_literal_token1);
      if (lookahead == '/') ADVANCE(109);
      if (lookahead == '\\') ADVANCE(104);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(110);
      if (lookahead != 0 &&
          lookahead != '"') ADVANCE(111);
      END_STATE();
    case 111:
      ACCEPT_TOKEN(aux_sym__string_literal_token1);
      if (lookahead != 0 &&
          lookahead != '"') ADVANCE(111);
      END_STATE();
    case 112:
      ACCEPT_TOKEN(sym__builtin_literal);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(112);
      END_STATE();
    case 113:
      ACCEPT_TOKEN(sym_comment);
      END_STATE();
    case 114:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(114);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 0},
  [2] = {.lex_state = 0},
  [3] = {.lex_state = 0},
  [4] = {.lex_state = 10},
  [5] = {.lex_state = 10},
  [6] = {.lex_state = 10},
  [7] = {.lex_state = 10},
  [8] = {.lex_state = 10},
  [9] = {.lex_state = 10},
  [10] = {.lex_state = 10},
  [11] = {.lex_state = 10},
  [12] = {.lex_state = 9},
  [13] = {.lex_state = 9},
  [14] = {.lex_state = 9},
  [15] = {.lex_state = 9},
  [16] = {.lex_state = 0},
  [17] = {.lex_state = 0},
  [18] = {.lex_state = 0},
  [19] = {.lex_state = 0},
  [20] = {.lex_state = 0},
  [21] = {.lex_state = 0},
  [22] = {.lex_state = 10},
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
  [34] = {.lex_state = 9},
  [35] = {.lex_state = 0},
  [36] = {.lex_state = 0},
  [37] = {.lex_state = 9},
  [38] = {.lex_state = 0},
  [39] = {.lex_state = 0},
  [40] = {.lex_state = 0},
  [41] = {.lex_state = 0},
  [42] = {.lex_state = 0},
  [43] = {.lex_state = 0},
  [44] = {.lex_state = 0},
  [45] = {.lex_state = 9},
  [46] = {.lex_state = 0},
  [47] = {.lex_state = 0},
  [48] = {.lex_state = 0},
  [49] = {.lex_state = 0},
  [50] = {.lex_state = 0},
  [51] = {.lex_state = 110},
  [52] = {.lex_state = 9},
  [53] = {.lex_state = 0},
  [54] = {.lex_state = 9},
  [55] = {.lex_state = 9},
  [56] = {.lex_state = 0},
  [57] = {.lex_state = 9},
  [58] = {.lex_state = 0},
  [59] = {.lex_state = 0},
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
    [aux_sym__numeric_literal_token1] = ACTIONS(1),
    [aux_sym__numeric_literal_token2] = ACTIONS(1),
    [aux_sym__numeric_literal_token3] = ACTIONS(1),
    [aux_sym__numeric_literal_token4] = ACTIONS(1),
    [anon_sym_DQUOTE] = ACTIONS(1),
    [sym__builtin_literal] = ACTIONS(1),
    [sym_comment] = ACTIONS(3),
  },
  [1] = {
    [sym_source_file] = STATE(59),
    [sym__definition] = STATE(2),
    [sym_function_declaration] = STATE(2),
    [sym_function_definition] = STATE(2),
    [sym_constant_definition] = STATE(2),
    [sym_simple_type] = STATE(34),
    [aux_sym_source_file_repeat1] = STATE(2),
    [ts_builtin_sym_end] = ACTIONS(5),
    [anon_sym_void] = ACTIONS(7),
    [anon_sym_entity] = ACTIONS(7),
    [anon_sym_float] = ACTIONS(7),
    [anon_sym_vector] = ACTIONS(7),
    [anon_sym_string] = ACTIONS(7),
    [anon_sym_int] = ACTIONS(7),
    [sym_comment] = ACTIONS(3),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(9), 1,
      ts_builtin_sym_end,
    STATE(34), 1,
      sym_simple_type,
    STATE(3), 5,
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
  [25] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(11), 1,
      ts_builtin_sym_end,
    STATE(34), 1,
      sym_simple_type,
    STATE(3), 5,
      sym__definition,
      sym_function_declaration,
      sym_function_definition,
      sym_constant_definition,
      aux_sym_source_file_repeat1,
    ACTIONS(13), 6,
      anon_sym_void,
      anon_sym_entity,
      anon_sym_float,
      anon_sym_vector,
      anon_sym_string,
      anon_sym_int,
  [50] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(16), 1,
      anon_sym_LBRACE,
    ACTIONS(18), 1,
      anon_sym_if,
    ACTIONS(20), 1,
      anon_sym_while,
    ACTIONS(22), 1,
      anon_sym_do,
    ACTIONS(24), 1,
      sym_identifier,
    ACTIONS(26), 1,
      sym__builtin_literal,
    STATE(46), 7,
      sym__statement,
      sym__compound_statement,
      sym__simple_statement,
      sym_assignment_statement,
      sym_if_statement,
      sym_while_statement,
      sym_do_while_statement,
  [81] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(16), 1,
      anon_sym_LBRACE,
    ACTIONS(18), 1,
      anon_sym_if,
    ACTIONS(20), 1,
      anon_sym_while,
    ACTIONS(22), 1,
      anon_sym_do,
    ACTIONS(24), 1,
      sym_identifier,
    STATE(42), 7,
      sym__statement,
      sym__compound_statement,
      sym__simple_statement,
      sym_assignment_statement,
      sym_if_statement,
      sym_while_statement,
      sym_do_while_statement,
  [109] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(16), 1,
      anon_sym_LBRACE,
    ACTIONS(18), 1,
      anon_sym_if,
    ACTIONS(20), 1,
      anon_sym_while,
    ACTIONS(22), 1,
      anon_sym_do,
    ACTIONS(24), 1,
      sym_identifier,
    STATE(26), 7,
      sym__statement,
      sym__compound_statement,
      sym__simple_statement,
      sym_assignment_statement,
      sym_if_statement,
      sym_while_statement,
      sym_do_while_statement,
  [137] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(16), 1,
      anon_sym_LBRACE,
    ACTIONS(18), 1,
      anon_sym_if,
    ACTIONS(20), 1,
      anon_sym_while,
    ACTIONS(22), 1,
      anon_sym_do,
    ACTIONS(24), 1,
      sym_identifier,
    STATE(32), 7,
      sym__statement,
      sym__compound_statement,
      sym__simple_statement,
      sym_assignment_statement,
      sym_if_statement,
      sym_while_statement,
      sym_do_while_statement,
  [165] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(16), 1,
      anon_sym_LBRACE,
    ACTIONS(18), 1,
      anon_sym_if,
    ACTIONS(20), 1,
      anon_sym_while,
    ACTIONS(22), 1,
      anon_sym_do,
    ACTIONS(24), 1,
      sym_identifier,
    STATE(31), 7,
      sym__statement,
      sym__compound_statement,
      sym__simple_statement,
      sym_assignment_statement,
      sym_if_statement,
      sym_while_statement,
      sym_do_while_statement,
  [193] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(28), 1,
      anon_sym_RBRACE,
    ACTIONS(30), 1,
      anon_sym_if,
    ACTIONS(33), 1,
      anon_sym_while,
    ACTIONS(36), 1,
      anon_sym_do,
    ACTIONS(39), 1,
      sym_identifier,
    STATE(9), 1,
      aux_sym__compound_statement_repeat1,
    STATE(47), 5,
      sym__simple_statement,
      sym_assignment_statement,
      sym_if_statement,
      sym_while_statement,
      sym_do_while_statement,
  [222] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(18), 1,
      anon_sym_if,
    ACTIONS(20), 1,
      anon_sym_while,
    ACTIONS(22), 1,
      anon_sym_do,
    ACTIONS(24), 1,
      sym_identifier,
    ACTIONS(42), 1,
      anon_sym_RBRACE,
    STATE(9), 1,
      aux_sym__compound_statement_repeat1,
    STATE(47), 5,
      sym__simple_statement,
      sym_assignment_statement,
      sym_if_statement,
      sym_while_statement,
      sym_do_while_statement,
  [251] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(18), 1,
      anon_sym_if,
    ACTIONS(20), 1,
      anon_sym_while,
    ACTIONS(22), 1,
      anon_sym_do,
    ACTIONS(24), 1,
      sym_identifier,
    ACTIONS(44), 1,
      anon_sym_RBRACE,
    STATE(10), 1,
      aux_sym__compound_statement_repeat1,
    STATE(47), 5,
      sym__simple_statement,
      sym_assignment_statement,
      sym_if_statement,
      sym_while_statement,
      sym_do_while_statement,
  [280] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(46), 1,
      sym_identifier,
    ACTIONS(48), 1,
      aux_sym__numeric_literal_token1,
    ACTIONS(52), 1,
      anon_sym_DQUOTE,
    STATE(23), 2,
      sym__numeric_literal,
      sym__string_literal,
    STATE(40), 2,
      sym__expression,
      sym_literal,
    ACTIONS(50), 3,
      aux_sym__numeric_literal_token2,
      aux_sym__numeric_literal_token3,
      aux_sym__numeric_literal_token4,
  [306] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(48), 1,
      aux_sym__numeric_literal_token1,
    ACTIONS(52), 1,
      anon_sym_DQUOTE,
    ACTIONS(54), 1,
      sym_identifier,
    STATE(23), 2,
      sym__numeric_literal,
      sym__string_literal,
    STATE(25), 2,
      sym__expression,
      sym_literal,
    ACTIONS(50), 3,
      aux_sym__numeric_literal_token2,
      aux_sym__numeric_literal_token3,
      aux_sym__numeric_literal_token4,
  [332] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(48), 1,
      aux_sym__numeric_literal_token1,
    ACTIONS(52), 1,
      anon_sym_DQUOTE,
    ACTIONS(56), 1,
      sym_identifier,
    STATE(23), 2,
      sym__numeric_literal,
      sym__string_literal,
    STATE(56), 2,
      sym__expression,
      sym_literal,
    ACTIONS(50), 3,
      aux_sym__numeric_literal_token2,
      aux_sym__numeric_literal_token3,
      aux_sym__numeric_literal_token4,
  [358] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(48), 1,
      aux_sym__numeric_literal_token1,
    ACTIONS(52), 1,
      anon_sym_DQUOTE,
    ACTIONS(58), 1,
      sym_identifier,
    STATE(23), 2,
      sym__numeric_literal,
      sym__string_literal,
    STATE(48), 2,
      sym__expression,
      sym_literal,
    ACTIONS(50), 3,
      aux_sym__numeric_literal_token2,
      aux_sym__numeric_literal_token3,
      aux_sym__numeric_literal_token4,
  [384] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(60), 1,
      anon_sym_RPAREN,
    STATE(30), 1,
      sym__parameter,
    STATE(54), 1,
      sym_simple_type,
    ACTIONS(7), 6,
      anon_sym_void,
      anon_sym_entity,
      anon_sym_float,
      anon_sym_vector,
      anon_sym_string,
      anon_sym_int,
  [405] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(48), 1,
      aux_sym__numeric_literal_token1,
    ACTIONS(52), 1,
      anon_sym_DQUOTE,
    STATE(50), 1,
      sym_literal,
    STATE(23), 2,
      sym__numeric_literal,
      sym__string_literal,
    ACTIONS(50), 3,
      aux_sym__numeric_literal_token2,
      aux_sym__numeric_literal_token3,
      aux_sym__numeric_literal_token4,
  [427] = 4,
    ACTIONS(3), 1,
      sym_comment,
    STATE(39), 1,
      sym__parameter,
    STATE(54), 1,
      sym_simple_type,
    ACTIONS(7), 6,
      anon_sym_void,
      anon_sym_entity,
      anon_sym_float,
      anon_sym_vector,
      anon_sym_string,
      anon_sym_int,
  [445] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(62), 7,
      ts_builtin_sym_end,
      anon_sym_void,
      anon_sym_entity,
      anon_sym_float,
      anon_sym_vector,
      anon_sym_string,
      anon_sym_int,
  [458] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(64), 7,
      ts_builtin_sym_end,
      anon_sym_void,
      anon_sym_entity,
      anon_sym_float,
      anon_sym_vector,
      anon_sym_string,
      anon_sym_int,
  [471] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(66), 7,
      ts_builtin_sym_end,
      anon_sym_void,
      anon_sym_entity,
      anon_sym_float,
      anon_sym_vector,
      anon_sym_string,
      anon_sym_int,
  [484] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(28), 1,
      anon_sym_RBRACE,
    ACTIONS(68), 4,
      anon_sym_if,
      anon_sym_while,
      anon_sym_do,
      sym_identifier,
  [497] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(70), 4,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      anon_sym_else,
      anon_sym_while,
  [507] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(72), 4,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      anon_sym_else,
      anon_sym_while,
  [517] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(74), 3,
      anon_sym_SEMI,
      anon_sym_else,
      anon_sym_while,
  [526] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(76), 3,
      anon_sym_SEMI,
      anon_sym_else,
      anon_sym_while,
  [535] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(78), 3,
      anon_sym_SEMI,
      anon_sym_else,
      anon_sym_while,
  [544] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(80), 1,
      anon_sym_COMMA,
    ACTIONS(83), 1,
      anon_sym_RPAREN,
    STATE(28), 1,
      aux_sym_parameter_list_repeat1,
  [557] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(85), 1,
      anon_sym_COMMA,
    ACTIONS(87), 1,
      anon_sym_RPAREN,
    STATE(28), 1,
      aux_sym_parameter_list_repeat1,
  [570] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(85), 1,
      anon_sym_COMMA,
    ACTIONS(89), 1,
      anon_sym_RPAREN,
    STATE(29), 1,
      aux_sym_parameter_list_repeat1,
  [583] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(93), 1,
      anon_sym_else,
    ACTIONS(91), 2,
      anon_sym_SEMI,
      anon_sym_while,
  [594] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(95), 3,
      anon_sym_SEMI,
      anon_sym_else,
      anon_sym_while,
  [603] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(97), 3,
      anon_sym_SEMI,
      anon_sym_else,
      anon_sym_while,
  [612] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(99), 1,
      anon_sym_LPAREN,
    ACTIONS(101), 1,
      sym_identifier,
    STATE(57), 1,
      sym_parameter_list,
  [625] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(103), 3,
      anon_sym_SEMI,
      anon_sym_else,
      anon_sym_while,
  [634] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(105), 1,
      anon_sym_SEMI,
    ACTIONS(107), 1,
      anon_sym_EQ,
  [644] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(109), 2,
      anon_sym_LPAREN,
      sym_identifier,
  [652] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(111), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [660] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(83), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [668] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(113), 1,
      anon_sym_RPAREN,
  [675] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(115), 1,
      anon_sym_EQ,
  [682] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(117), 1,
      anon_sym_while,
  [689] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(119), 1,
      anon_sym_LPAREN,
  [696] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(121), 1,
      anon_sym_DQUOTE,
  [703] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(123), 1,
      sym_identifier,
  [710] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(125), 1,
      anon_sym_SEMI,
  [717] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(127), 1,
      anon_sym_SEMI,
  [724] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(129), 1,
      anon_sym_RPAREN,
  [731] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(131), 1,
      anon_sym_LPAREN,
  [738] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(133), 1,
      anon_sym_SEMI,
  [745] = 2,
    ACTIONS(135), 1,
      aux_sym__string_literal_token1,
    ACTIONS(137), 1,
      sym_comment,
  [752] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(139), 1,
      sym_identifier,
  [759] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(141), 1,
      anon_sym_LPAREN,
  [766] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(143), 1,
      sym_identifier,
  [773] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(145), 1,
      sym_identifier,
  [780] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(147), 1,
      anon_sym_RPAREN,
  [787] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(149), 1,
      sym_identifier,
  [794] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(151), 1,
      anon_sym_EQ,
  [801] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(153), 1,
      ts_builtin_sym_end,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 25,
  [SMALL_STATE(4)] = 50,
  [SMALL_STATE(5)] = 81,
  [SMALL_STATE(6)] = 109,
  [SMALL_STATE(7)] = 137,
  [SMALL_STATE(8)] = 165,
  [SMALL_STATE(9)] = 193,
  [SMALL_STATE(10)] = 222,
  [SMALL_STATE(11)] = 251,
  [SMALL_STATE(12)] = 280,
  [SMALL_STATE(13)] = 306,
  [SMALL_STATE(14)] = 332,
  [SMALL_STATE(15)] = 358,
  [SMALL_STATE(16)] = 384,
  [SMALL_STATE(17)] = 405,
  [SMALL_STATE(18)] = 427,
  [SMALL_STATE(19)] = 445,
  [SMALL_STATE(20)] = 458,
  [SMALL_STATE(21)] = 471,
  [SMALL_STATE(22)] = 484,
  [SMALL_STATE(23)] = 497,
  [SMALL_STATE(24)] = 507,
  [SMALL_STATE(25)] = 517,
  [SMALL_STATE(26)] = 526,
  [SMALL_STATE(27)] = 535,
  [SMALL_STATE(28)] = 544,
  [SMALL_STATE(29)] = 557,
  [SMALL_STATE(30)] = 570,
  [SMALL_STATE(31)] = 583,
  [SMALL_STATE(32)] = 594,
  [SMALL_STATE(33)] = 603,
  [SMALL_STATE(34)] = 612,
  [SMALL_STATE(35)] = 625,
  [SMALL_STATE(36)] = 634,
  [SMALL_STATE(37)] = 644,
  [SMALL_STATE(38)] = 652,
  [SMALL_STATE(39)] = 660,
  [SMALL_STATE(40)] = 668,
  [SMALL_STATE(41)] = 675,
  [SMALL_STATE(42)] = 682,
  [SMALL_STATE(43)] = 689,
  [SMALL_STATE(44)] = 696,
  [SMALL_STATE(45)] = 703,
  [SMALL_STATE(46)] = 710,
  [SMALL_STATE(47)] = 717,
  [SMALL_STATE(48)] = 724,
  [SMALL_STATE(49)] = 731,
  [SMALL_STATE(50)] = 738,
  [SMALL_STATE(51)] = 745,
  [SMALL_STATE(52)] = 752,
  [SMALL_STATE(53)] = 759,
  [SMALL_STATE(54)] = 766,
  [SMALL_STATE(55)] = 773,
  [SMALL_STATE(56)] = 780,
  [SMALL_STATE(57)] = 787,
  [SMALL_STATE(58)] = 794,
  [SMALL_STATE(59)] = 801,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT_EXTRA(),
  [5] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [9] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1),
  [11] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2),
  [13] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(37),
  [16] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [18] = {.entry = {.count = 1, .reusable = false}}, SHIFT(43),
  [20] = {.entry = {.count = 1, .reusable = false}}, SHIFT(53),
  [22] = {.entry = {.count = 1, .reusable = false}}, SHIFT(5),
  [24] = {.entry = {.count = 1, .reusable = false}}, SHIFT(41),
  [26] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [28] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__compound_statement_repeat1, 2),
  [30] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__compound_statement_repeat1, 2), SHIFT_REPEAT(43),
  [33] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__compound_statement_repeat1, 2), SHIFT_REPEAT(53),
  [36] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__compound_statement_repeat1, 2), SHIFT_REPEAT(5),
  [39] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__compound_statement_repeat1, 2), SHIFT_REPEAT(41),
  [42] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [44] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [46] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [48] = {.entry = {.count = 1, .reusable = false}}, SHIFT(23),
  [50] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [52] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [54] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [56] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
  [58] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [60] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [62] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_definition, 6),
  [64] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_declaration, 4),
  [66] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_constant_definition, 5),
  [68] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__compound_statement_repeat1, 2),
  [70] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_literal, 1),
  [72] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__string_literal, 3),
  [74] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_assignment_statement, 3),
  [76] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_if_statement, 7),
  [78] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__compound_statement, 3),
  [80] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_parameter_list_repeat1, 2), SHIFT_REPEAT(18),
  [83] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_parameter_list_repeat1, 2),
  [85] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [87] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [89] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [91] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_if_statement, 5),
  [93] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [95] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_while_statement, 5),
  [97] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__compound_statement, 2),
  [99] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [101] = {.entry = {.count = 1, .reusable = true}}, SHIFT(58),
  [103] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_do_while_statement, 6),
  [105] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [107] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [109] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_simple_type, 1),
  [111] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__parameter, 2),
  [113] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [115] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [117] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [119] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [121] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [123] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter_list, 4),
  [125] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [127] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [129] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [131] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [133] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [135] = {.entry = {.count = 1, .reusable = false}}, SHIFT(44),
  [137] = {.entry = {.count = 1, .reusable = false}}, SHIFT_EXTRA(),
  [139] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter_list, 3),
  [141] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [143] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [145] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter_list, 2),
  [147] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [149] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [151] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [153] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
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
