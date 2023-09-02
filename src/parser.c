#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 49
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 46
#define ALIAS_COUNT 0
#define TOKEN_COUNT 26
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
  sym_identifier = 17,
  aux_sym__numeric_literal_token1 = 18,
  aux_sym__numeric_literal_token2 = 19,
  aux_sym__numeric_literal_token3 = 20,
  aux_sym__numeric_literal_token4 = 21,
  anon_sym_DQUOTE = 22,
  aux_sym__string_literal_token1 = 23,
  sym__builtin_literal = 24,
  sym_comment = 25,
  sym_source_file = 26,
  sym__definition = 27,
  sym_function_declaration = 28,
  sym_function_definition = 29,
  sym_constant_definition = 30,
  sym_simple_type = 31,
  sym_parameter_list = 32,
  sym__parameter = 33,
  sym__statement = 34,
  sym__compound_statement = 35,
  sym__simple_statement = 36,
  sym_assignment_statement = 37,
  sym_if_statement = 38,
  sym__expression = 39,
  sym_literal = 40,
  sym__numeric_literal = 41,
  sym__string_literal = 42,
  aux_sym_source_file_repeat1 = 43,
  aux_sym_parameter_list_repeat1 = 44,
  aux_sym__compound_statement_repeat1 = 45,
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
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(65);
      if (lookahead == '"') ADVANCE(89);
      if (lookahead == '#') ADVANCE(53);
      if (lookahead == '(') ADVANCE(76);
      if (lookahead == ')') ADVANCE(77);
      if (lookahead == ',') ADVANCE(69);
      if (lookahead == '-') ADVANCE(52);
      if (lookahead == '/') ADVANCE(11);
      if (lookahead == ';') ADVANCE(66);
      if (lookahead == '=') ADVANCE(67);
      if (lookahead == '\\') SKIP(64)
      if (lookahead == '`') ADVANCE(14);
      if (lookahead == 'e') ADVANCE(35);
      if (lookahead == 'f') ADVANCE(37);
      if (lookahead == 'i') ADVANCE(30);
      if (lookahead == 'l') ADVANCE(39);
      if (lookahead == 's') ADVANCE(45);
      if (lookahead == 'v') ADVANCE(29);
      if (lookahead == '{') ADVANCE(78);
      if (lookahead == '}') ADVANCE(79);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(85);
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
      if (lookahead == '.') ADVANCE(60);
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
      if (lookahead == '"') ADVANCE(89);
      if (lookahead == '(') ADVANCE(76);
      if (lookahead == '-') ADVANCE(52);
      if (lookahead == '/') ADVANCE(11);
      if (lookahead == '\\') SKIP(2)
      if (lookahead == '`') ADVANCE(14);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(9)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(85);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(84);
      END_STATE();
    case 10:
      if (lookahead == '#') ADVANCE(53);
      if (lookahead == '/') ADVANCE(11);
      if (lookahead == '\\') SKIP(4)
      if (lookahead == 'i') ADVANCE(83);
      if (lookahead == '{') ADVANCE(78);
      if (lookahead == '}') ADVANCE(79);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(10)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(84);
      END_STATE();
    case 11:
      if (lookahead == '*') ADVANCE(13);
      if (lookahead == '/') ADVANCE(100);
      END_STATE();
    case 12:
      if (lookahead == '*') ADVANCE(12);
      if (lookahead == '/') ADVANCE(99);
      if (lookahead != 0) ADVANCE(13);
      END_STATE();
    case 13:
      if (lookahead == '*') ADVANCE(12);
      if (lookahead != 0) ADVANCE(13);
      END_STATE();
    case 14:
      if (lookahead == '-') ADVANCE(54);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(5);
      END_STATE();
    case 15:
      if (lookahead == '-') ADVANCE(57);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(21);
      END_STATE();
    case 16:
      if (lookahead == '-') ADVANCE(58);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(20);
      END_STATE();
    case 17:
      if (lookahead == '-') ADVANCE(56);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(6);
      END_STATE();
    case 18:
      if (lookahead == '-') ADVANCE(61);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(19);
      END_STATE();
    case 19:
      if (lookahead == '.') ADVANCE(59);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(19);
      END_STATE();
    case 20:
      if (lookahead == '.') ADVANCE(62);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(20);
      END_STATE();
    case 21:
      if (lookahead == '`') ADVANCE(87);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(21);
      END_STATE();
    case 22:
      if (lookahead == '`') ADVANCE(88);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(22);
      END_STATE();
    case 23:
      if (lookahead == 'a') ADVANCE(36);
      END_STATE();
    case 24:
      if (lookahead == 'a') ADVANCE(48);
      END_STATE();
    case 25:
      if (lookahead == 'c') ADVANCE(23);
      END_STATE();
    case 26:
      if (lookahead == 'c') ADVANCE(50);
      END_STATE();
    case 27:
      if (lookahead == 'd') ADVANCE(70);
      END_STATE();
    case 28:
      if (lookahead == 'e') ADVANCE(82);
      END_STATE();
    case 29:
      if (lookahead == 'e') ADVANCE(26);
      if (lookahead == 'o') ADVANCE(32);
      END_STATE();
    case 30:
      if (lookahead == 'f') ADVANCE(80);
      if (lookahead == 'n') ADVANCE(46);
      END_STATE();
    case 31:
      if (lookahead == 'g') ADVANCE(74);
      END_STATE();
    case 32:
      if (lookahead == 'i') ADVANCE(27);
      END_STATE();
    case 33:
      if (lookahead == 'i') ADVANCE(38);
      END_STATE();
    case 34:
      if (lookahead == 'i') ADVANCE(47);
      END_STATE();
    case 35:
      if (lookahead == 'l') ADVANCE(44);
      if (lookahead == 'n') ADVANCE(49);
      END_STATE();
    case 36:
      if (lookahead == 'l') ADVANCE(68);
      END_STATE();
    case 37:
      if (lookahead == 'l') ADVANCE(40);
      END_STATE();
    case 38:
      if (lookahead == 'n') ADVANCE(31);
      END_STATE();
    case 39:
      if (lookahead == 'o') ADVANCE(25);
      END_STATE();
    case 40:
      if (lookahead == 'o') ADVANCE(24);
      END_STATE();
    case 41:
      if (lookahead == 'o') ADVANCE(42);
      END_STATE();
    case 42:
      if (lookahead == 'r') ADVANCE(73);
      END_STATE();
    case 43:
      if (lookahead == 'r') ADVANCE(33);
      END_STATE();
    case 44:
      if (lookahead == 's') ADVANCE(28);
      END_STATE();
    case 45:
      if (lookahead == 't') ADVANCE(43);
      END_STATE();
    case 46:
      if (lookahead == 't') ADVANCE(75);
      END_STATE();
    case 47:
      if (lookahead == 't') ADVANCE(51);
      END_STATE();
    case 48:
      if (lookahead == 't') ADVANCE(72);
      END_STATE();
    case 49:
      if (lookahead == 't') ADVANCE(34);
      END_STATE();
    case 50:
      if (lookahead == 't') ADVANCE(41);
      END_STATE();
    case 51:
      if (lookahead == 'y') ADVANCE(71);
      END_STATE();
    case 52:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(85);
      END_STATE();
    case 53:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(98);
      END_STATE();
    case 54:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(5);
      END_STATE();
    case 55:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(86);
      END_STATE();
    case 56:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(6);
      END_STATE();
    case 57:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(21);
      END_STATE();
    case 58:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(20);
      END_STATE();
    case 59:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(22);
      END_STATE();
    case 60:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(7);
      END_STATE();
    case 61:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(19);
      END_STATE();
    case 62:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(8);
      END_STATE();
    case 63:
      if (eof) ADVANCE(65);
      if (lookahead == '\n') SKIP(0)
      END_STATE();
    case 64:
      if (eof) ADVANCE(65);
      if (lookahead == '\n') SKIP(0)
      if (lookahead == '\r') SKIP(63)
      END_STATE();
    case 65:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 66:
      ACCEPT_TOKEN(anon_sym_SEMI);
      END_STATE();
    case 67:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 68:
      ACCEPT_TOKEN(anon_sym_local);
      END_STATE();
    case 69:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 70:
      ACCEPT_TOKEN(anon_sym_void);
      END_STATE();
    case 71:
      ACCEPT_TOKEN(anon_sym_entity);
      END_STATE();
    case 72:
      ACCEPT_TOKEN(anon_sym_float);
      END_STATE();
    case 73:
      ACCEPT_TOKEN(anon_sym_vector);
      END_STATE();
    case 74:
      ACCEPT_TOKEN(anon_sym_string);
      END_STATE();
    case 75:
      ACCEPT_TOKEN(anon_sym_int);
      END_STATE();
    case 76:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 77:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 78:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 79:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 80:
      ACCEPT_TOKEN(anon_sym_if);
      END_STATE();
    case 81:
      ACCEPT_TOKEN(anon_sym_if);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(84);
      END_STATE();
    case 82:
      ACCEPT_TOKEN(anon_sym_else);
      END_STATE();
    case 83:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'f') ADVANCE(81);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(84);
      END_STATE();
    case 84:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(84);
      END_STATE();
    case 85:
      ACCEPT_TOKEN(aux_sym__numeric_literal_token1);
      if (lookahead == '.') ADVANCE(55);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(85);
      END_STATE();
    case 86:
      ACCEPT_TOKEN(aux_sym__numeric_literal_token2);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(86);
      END_STATE();
    case 87:
      ACCEPT_TOKEN(aux_sym__numeric_literal_token3);
      END_STATE();
    case 88:
      ACCEPT_TOKEN(aux_sym__numeric_literal_token4);
      END_STATE();
    case 89:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 90:
      ACCEPT_TOKEN(aux_sym__string_literal_token1);
      if (lookahead == '\n') ADVANCE(96);
      if (lookahead == '\r') ADVANCE(91);
      if (lookahead != 0 &&
          lookahead != '"') ADVANCE(97);
      END_STATE();
    case 91:
      ACCEPT_TOKEN(aux_sym__string_literal_token1);
      if (lookahead == '\n') ADVANCE(96);
      if (lookahead != 0 &&
          lookahead != '"') ADVANCE(97);
      END_STATE();
    case 92:
      ACCEPT_TOKEN(aux_sym__string_literal_token1);
      if (lookahead == '\n') ADVANCE(97);
      if (lookahead == '"') ADVANCE(100);
      if (lookahead != 0) ADVANCE(92);
      END_STATE();
    case 93:
      ACCEPT_TOKEN(aux_sym__string_literal_token1);
      if (lookahead == '"') ADVANCE(13);
      if (lookahead == '*') ADVANCE(93);
      if (lookahead == '/') ADVANCE(97);
      if (lookahead != 0) ADVANCE(94);
      END_STATE();
    case 94:
      ACCEPT_TOKEN(aux_sym__string_literal_token1);
      if (lookahead == '"') ADVANCE(13);
      if (lookahead == '*') ADVANCE(93);
      if (lookahead != 0) ADVANCE(94);
      END_STATE();
    case 95:
      ACCEPT_TOKEN(aux_sym__string_literal_token1);
      if (lookahead == '*') ADVANCE(94);
      if (lookahead == '/') ADVANCE(92);
      if (lookahead != 0 &&
          lookahead != '"') ADVANCE(97);
      END_STATE();
    case 96:
      ACCEPT_TOKEN(aux_sym__string_literal_token1);
      if (lookahead == '/') ADVANCE(95);
      if (lookahead == '\\') ADVANCE(90);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(96);
      if (lookahead != 0 &&
          lookahead != '"') ADVANCE(97);
      END_STATE();
    case 97:
      ACCEPT_TOKEN(aux_sym__string_literal_token1);
      if (lookahead != 0 &&
          lookahead != '"') ADVANCE(97);
      END_STATE();
    case 98:
      ACCEPT_TOKEN(sym__builtin_literal);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(98);
      END_STATE();
    case 99:
      ACCEPT_TOKEN(sym_comment);
      END_STATE();
    case 100:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(100);
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
  [4] = {.lex_state = 9},
  [5] = {.lex_state = 9},
  [6] = {.lex_state = 0},
  [7] = {.lex_state = 10},
  [8] = {.lex_state = 10},
  [9] = {.lex_state = 10},
  [10] = {.lex_state = 0},
  [11] = {.lex_state = 0},
  [12] = {.lex_state = 0},
  [13] = {.lex_state = 10},
  [14] = {.lex_state = 0},
  [15] = {.lex_state = 10},
  [16] = {.lex_state = 10},
  [17] = {.lex_state = 0},
  [18] = {.lex_state = 0},
  [19] = {.lex_state = 0},
  [20] = {.lex_state = 0},
  [21] = {.lex_state = 9},
  [22] = {.lex_state = 10},
  [23] = {.lex_state = 0},
  [24] = {.lex_state = 0},
  [25] = {.lex_state = 0},
  [26] = {.lex_state = 0},
  [27] = {.lex_state = 0},
  [28] = {.lex_state = 9},
  [29] = {.lex_state = 0},
  [30] = {.lex_state = 0},
  [31] = {.lex_state = 0},
  [32] = {.lex_state = 0},
  [33] = {.lex_state = 0},
  [34] = {.lex_state = 9},
  [35] = {.lex_state = 9},
  [36] = {.lex_state = 0},
  [37] = {.lex_state = 9},
  [38] = {.lex_state = 9},
  [39] = {.lex_state = 9},
  [40] = {.lex_state = 0},
  [41] = {.lex_state = 0},
  [42] = {.lex_state = 0},
  [43] = {.lex_state = 0},
  [44] = {.lex_state = 0},
  [45] = {.lex_state = 96},
  [46] = {.lex_state = 0},
  [47] = {.lex_state = 0},
  [48] = {.lex_state = 0},
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
    [aux_sym__numeric_literal_token1] = ACTIONS(1),
    [aux_sym__numeric_literal_token2] = ACTIONS(1),
    [aux_sym__numeric_literal_token3] = ACTIONS(1),
    [aux_sym__numeric_literal_token4] = ACTIONS(1),
    [anon_sym_DQUOTE] = ACTIONS(1),
    [sym__builtin_literal] = ACTIONS(1),
    [sym_comment] = ACTIONS(3),
  },
  [1] = {
    [sym_source_file] = STATE(47),
    [sym__definition] = STATE(2),
    [sym_function_declaration] = STATE(2),
    [sym_function_definition] = STATE(2),
    [sym_constant_definition] = STATE(2),
    [sym_simple_type] = STATE(21),
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
    STATE(21), 1,
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
    STATE(21), 1,
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
  [50] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(16), 1,
      sym_identifier,
    ACTIONS(18), 1,
      aux_sym__numeric_literal_token1,
    ACTIONS(22), 1,
      anon_sym_DQUOTE,
    STATE(23), 2,
      sym__numeric_literal,
      sym__string_literal,
    STATE(31), 2,
      sym__expression,
      sym_literal,
    ACTIONS(20), 3,
      aux_sym__numeric_literal_token2,
      aux_sym__numeric_literal_token3,
      aux_sym__numeric_literal_token4,
  [76] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(18), 1,
      aux_sym__numeric_literal_token1,
    ACTIONS(22), 1,
      anon_sym_DQUOTE,
    ACTIONS(24), 1,
      sym_identifier,
    STATE(23), 2,
      sym__numeric_literal,
      sym__string_literal,
    STATE(43), 2,
      sym__expression,
      sym_literal,
    ACTIONS(20), 3,
      aux_sym__numeric_literal_token2,
      aux_sym__numeric_literal_token3,
      aux_sym__numeric_literal_token4,
  [102] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(26), 1,
      anon_sym_RPAREN,
    STATE(18), 1,
      sym__parameter,
    STATE(34), 1,
      sym_simple_type,
    ACTIONS(7), 6,
      anon_sym_void,
      anon_sym_entity,
      anon_sym_float,
      anon_sym_vector,
      anon_sym_string,
      anon_sym_int,
  [123] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(28), 1,
      anon_sym_LBRACE,
    ACTIONS(30), 1,
      anon_sym_if,
    ACTIONS(32), 1,
      sym_identifier,
    ACTIONS(34), 1,
      sym__builtin_literal,
    STATE(44), 5,
      sym__statement,
      sym__compound_statement,
      sym__simple_statement,
      sym_assignment_statement,
      sym_if_statement,
  [146] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(28), 1,
      anon_sym_LBRACE,
    ACTIONS(30), 1,
      anon_sym_if,
    ACTIONS(32), 1,
      sym_identifier,
    STATE(27), 5,
      sym__statement,
      sym__compound_statement,
      sym__simple_statement,
      sym_assignment_statement,
      sym_if_statement,
  [166] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(28), 1,
      anon_sym_LBRACE,
    ACTIONS(30), 1,
      anon_sym_if,
    ACTIONS(32), 1,
      sym_identifier,
    STATE(30), 5,
      sym__statement,
      sym__compound_statement,
      sym__simple_statement,
      sym_assignment_statement,
      sym_if_statement,
  [186] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(18), 1,
      aux_sym__numeric_literal_token1,
    ACTIONS(22), 1,
      anon_sym_DQUOTE,
    STATE(40), 1,
      sym_literal,
    STATE(23), 2,
      sym__numeric_literal,
      sym__string_literal,
    ACTIONS(20), 3,
      aux_sym__numeric_literal_token2,
      aux_sym__numeric_literal_token3,
      aux_sym__numeric_literal_token4,
  [208] = 4,
    ACTIONS(3), 1,
      sym_comment,
    STATE(26), 1,
      sym__parameter,
    STATE(34), 1,
      sym_simple_type,
    ACTIONS(7), 6,
      anon_sym_void,
      anon_sym_entity,
      anon_sym_float,
      anon_sym_vector,
      anon_sym_string,
      anon_sym_int,
  [226] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(36), 7,
      ts_builtin_sym_end,
      anon_sym_void,
      anon_sym_entity,
      anon_sym_float,
      anon_sym_vector,
      anon_sym_string,
      anon_sym_int,
  [239] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(38), 1,
      anon_sym_RBRACE,
    ACTIONS(40), 1,
      anon_sym_if,
    ACTIONS(43), 1,
      sym_identifier,
    STATE(13), 1,
      aux_sym__compound_statement_repeat1,
    STATE(36), 3,
      sym__simple_statement,
      sym_assignment_statement,
      sym_if_statement,
  [260] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(46), 7,
      ts_builtin_sym_end,
      anon_sym_void,
      anon_sym_entity,
      anon_sym_float,
      anon_sym_vector,
      anon_sym_string,
      anon_sym_int,
  [273] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(30), 1,
      anon_sym_if,
    ACTIONS(32), 1,
      sym_identifier,
    ACTIONS(48), 1,
      anon_sym_RBRACE,
    STATE(13), 1,
      aux_sym__compound_statement_repeat1,
    STATE(36), 3,
      sym__simple_statement,
      sym_assignment_statement,
      sym_if_statement,
  [294] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(30), 1,
      anon_sym_if,
    ACTIONS(32), 1,
      sym_identifier,
    ACTIONS(50), 1,
      anon_sym_RBRACE,
    STATE(15), 1,
      aux_sym__compound_statement_repeat1,
    STATE(36), 3,
      sym__simple_statement,
      sym_assignment_statement,
      sym_if_statement,
  [315] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(52), 7,
      ts_builtin_sym_end,
      anon_sym_void,
      anon_sym_entity,
      anon_sym_float,
      anon_sym_vector,
      anon_sym_string,
      anon_sym_int,
  [328] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(54), 1,
      anon_sym_COMMA,
    ACTIONS(56), 1,
      anon_sym_RPAREN,
    STATE(20), 1,
      aux_sym_parameter_list_repeat1,
  [341] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(58), 3,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      anon_sym_else,
  [350] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(54), 1,
      anon_sym_COMMA,
    ACTIONS(60), 1,
      anon_sym_RPAREN,
    STATE(24), 1,
      aux_sym_parameter_list_repeat1,
  [363] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(62), 1,
      anon_sym_LPAREN,
    ACTIONS(64), 1,
      sym_identifier,
    STATE(39), 1,
      sym_parameter_list,
  [376] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(38), 1,
      anon_sym_RBRACE,
    ACTIONS(66), 2,
      anon_sym_if,
      sym_identifier,
  [387] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(68), 3,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      anon_sym_else,
  [396] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(70), 1,
      anon_sym_COMMA,
    ACTIONS(73), 1,
      anon_sym_RPAREN,
    STATE(24), 1,
      aux_sym_parameter_list_repeat1,
  [409] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(75), 2,
      anon_sym_SEMI,
      anon_sym_else,
  [417] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(73), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [425] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(77), 2,
      anon_sym_SEMI,
      anon_sym_else,
  [433] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(79), 2,
      anon_sym_LPAREN,
      sym_identifier,
  [441] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(81), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [449] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(83), 1,
      anon_sym_SEMI,
    ACTIONS(85), 1,
      anon_sym_else,
  [459] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(87), 2,
      anon_sym_SEMI,
      anon_sym_else,
  [467] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(89), 2,
      anon_sym_SEMI,
      anon_sym_else,
  [475] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(91), 1,
      anon_sym_SEMI,
    ACTIONS(93), 1,
      anon_sym_EQ,
  [485] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(95), 1,
      sym_identifier,
  [492] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(97), 1,
      sym_identifier,
  [499] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(99), 1,
      anon_sym_SEMI,
  [506] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(101), 1,
      sym_identifier,
  [513] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(103), 1,
      sym_identifier,
  [520] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(105), 1,
      sym_identifier,
  [527] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(107), 1,
      anon_sym_SEMI,
  [534] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(109), 1,
      anon_sym_DQUOTE,
  [541] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(111), 1,
      anon_sym_EQ,
  [548] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(113), 1,
      anon_sym_RPAREN,
  [555] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(115), 1,
      anon_sym_SEMI,
  [562] = 2,
    ACTIONS(117), 1,
      aux_sym__string_literal_token1,
    ACTIONS(119), 1,
      sym_comment,
  [569] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(121), 1,
      anon_sym_EQ,
  [576] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(123), 1,
      ts_builtin_sym_end,
  [583] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(125), 1,
      anon_sym_LPAREN,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 25,
  [SMALL_STATE(4)] = 50,
  [SMALL_STATE(5)] = 76,
  [SMALL_STATE(6)] = 102,
  [SMALL_STATE(7)] = 123,
  [SMALL_STATE(8)] = 146,
  [SMALL_STATE(9)] = 166,
  [SMALL_STATE(10)] = 186,
  [SMALL_STATE(11)] = 208,
  [SMALL_STATE(12)] = 226,
  [SMALL_STATE(13)] = 239,
  [SMALL_STATE(14)] = 260,
  [SMALL_STATE(15)] = 273,
  [SMALL_STATE(16)] = 294,
  [SMALL_STATE(17)] = 315,
  [SMALL_STATE(18)] = 328,
  [SMALL_STATE(19)] = 341,
  [SMALL_STATE(20)] = 350,
  [SMALL_STATE(21)] = 363,
  [SMALL_STATE(22)] = 376,
  [SMALL_STATE(23)] = 387,
  [SMALL_STATE(24)] = 396,
  [SMALL_STATE(25)] = 409,
  [SMALL_STATE(26)] = 417,
  [SMALL_STATE(27)] = 425,
  [SMALL_STATE(28)] = 433,
  [SMALL_STATE(29)] = 441,
  [SMALL_STATE(30)] = 449,
  [SMALL_STATE(31)] = 459,
  [SMALL_STATE(32)] = 467,
  [SMALL_STATE(33)] = 475,
  [SMALL_STATE(34)] = 485,
  [SMALL_STATE(35)] = 492,
  [SMALL_STATE(36)] = 499,
  [SMALL_STATE(37)] = 506,
  [SMALL_STATE(38)] = 513,
  [SMALL_STATE(39)] = 520,
  [SMALL_STATE(40)] = 527,
  [SMALL_STATE(41)] = 534,
  [SMALL_STATE(42)] = 541,
  [SMALL_STATE(43)] = 548,
  [SMALL_STATE(44)] = 555,
  [SMALL_STATE(45)] = 562,
  [SMALL_STATE(46)] = 569,
  [SMALL_STATE(47)] = 576,
  [SMALL_STATE(48)] = 583,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT_EXTRA(),
  [5] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [9] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1),
  [11] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2),
  [13] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(28),
  [16] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [18] = {.entry = {.count = 1, .reusable = false}}, SHIFT(23),
  [20] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [22] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [24] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [26] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [28] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [30] = {.entry = {.count = 1, .reusable = false}}, SHIFT(48),
  [32] = {.entry = {.count = 1, .reusable = false}}, SHIFT(46),
  [34] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [36] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_declaration, 4),
  [38] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__compound_statement_repeat1, 2),
  [40] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__compound_statement_repeat1, 2), SHIFT_REPEAT(48),
  [43] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__compound_statement_repeat1, 2), SHIFT_REPEAT(46),
  [46] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_definition, 6),
  [48] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [50] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [52] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_constant_definition, 5),
  [54] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [56] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [58] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__string_literal, 3),
  [60] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [62] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [64] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [66] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__compound_statement_repeat1, 2),
  [68] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_literal, 1),
  [70] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_parameter_list_repeat1, 2), SHIFT_REPEAT(11),
  [73] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_parameter_list_repeat1, 2),
  [75] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__compound_statement, 2),
  [77] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_if_statement, 7),
  [79] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_simple_type, 1),
  [81] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__parameter, 2),
  [83] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_if_statement, 5),
  [85] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [87] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_assignment_statement, 3),
  [89] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__compound_statement, 3),
  [91] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [93] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [95] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [97] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter_list, 3),
  [99] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [101] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter_list, 4),
  [103] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter_list, 2),
  [105] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [107] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [109] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [111] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [113] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [115] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [117] = {.entry = {.count = 1, .reusable = false}}, SHIFT(41),
  [119] = {.entry = {.count = 1, .reusable = false}}, SHIFT_EXTRA(),
  [121] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [123] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [125] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
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
