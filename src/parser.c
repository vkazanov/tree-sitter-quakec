#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 34
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 38
#define ALIAS_COUNT 0
#define TOKEN_COUNT 24
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 6
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
  sym_identifier = 15,
  aux_sym__numeric_literal_token1 = 16,
  aux_sym__numeric_literal_token2 = 17,
  aux_sym__numeric_literal_token3 = 18,
  aux_sym__numeric_literal_token4 = 19,
  anon_sym_DQUOTE = 20,
  aux_sym__string_literal_token1 = 21,
  sym__builtin_literal = 22,
  sym_comment = 23,
  sym_source_file = 24,
  sym__definition = 25,
  sym_function_declaration = 26,
  sym_function_definition = 27,
  sym_constant_definition = 28,
  sym_simple_type = 29,
  sym_parameter_list = 30,
  sym__parameter = 31,
  sym_compound_statement = 32,
  sym_literal = 33,
  sym__numeric_literal = 34,
  sym__string_literal = 35,
  aux_sym_source_file_repeat1 = 36,
  aux_sym_parameter_list_repeat1 = 37,
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
  [sym_compound_statement] = "compound_statement",
  [sym_literal] = "literal",
  [sym__numeric_literal] = "_numeric_literal",
  [sym__string_literal] = "_string_literal",
  [aux_sym_source_file_repeat1] = "source_file_repeat1",
  [aux_sym_parameter_list_repeat1] = "parameter_list_repeat1",
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
  [sym_compound_statement] = sym_compound_statement,
  [sym_literal] = sym_literal,
  [sym__numeric_literal] = sym__numeric_literal,
  [sym__string_literal] = sym__string_literal,
  [aux_sym_source_file_repeat1] = aux_sym_source_file_repeat1,
  [aux_sym_parameter_list_repeat1] = aux_sym_parameter_list_repeat1,
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
  [sym_compound_statement] = {
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
  [aux_sym_parameter_list_repeat1] = {
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
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(61);
      if (lookahead == '"') ADVANCE(81);
      if (lookahead == '#') ADVANCE(48);
      if (lookahead == '(') ADVANCE(72);
      if (lookahead == ')') ADVANCE(73);
      if (lookahead == ',') ADVANCE(65);
      if (lookahead == '-') ADVANCE(47);
      if (lookahead == '/') ADVANCE(8);
      if (lookahead == ';') ADVANCE(62);
      if (lookahead == '=') ADVANCE(63);
      if (lookahead == '\\') SKIP(60)
      if (lookahead == '`') ADVANCE(11);
      if (lookahead == 'e') ADVANCE(33);
      if (lookahead == 'f') ADVANCE(31);
      if (lookahead == 'i') ADVANCE(34);
      if (lookahead == 'l') ADVANCE(35);
      if (lookahead == 's') ADVANCE(40);
      if (lookahead == 'v') ADVANCE(25);
      if (lookahead == '{') ADVANCE(74);
      if (lookahead == '}') ADVANCE(75);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(77);
      END_STATE();
    case 1:
      if (lookahead == '\n') SKIP(7)
      END_STATE();
    case 2:
      if (lookahead == '\n') SKIP(7)
      if (lookahead == '\r') SKIP(1)
      END_STATE();
    case 3:
      if (lookahead == ' ') ADVANCE(14);
      if (lookahead == '.') ADVANCE(55);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(3);
      END_STATE();
    case 4:
      if (lookahead == ' ') ADVANCE(12);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(4);
      END_STATE();
    case 5:
      if (lookahead == ' ') ADVANCE(13);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(5);
      END_STATE();
    case 6:
      if (lookahead == ' ') ADVANCE(15);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(6);
      END_STATE();
    case 7:
      if (lookahead == '(') ADVANCE(72);
      if (lookahead == '/') ADVANCE(8);
      if (lookahead == '\\') SKIP(2)
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(7)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(58);
      END_STATE();
    case 8:
      if (lookahead == '*') ADVANCE(10);
      if (lookahead == '/') ADVANCE(92);
      END_STATE();
    case 9:
      if (lookahead == '*') ADVANCE(9);
      if (lookahead == '/') ADVANCE(91);
      if (lookahead != 0) ADVANCE(10);
      END_STATE();
    case 10:
      if (lookahead == '*') ADVANCE(9);
      if (lookahead != 0) ADVANCE(10);
      END_STATE();
    case 11:
      if (lookahead == '-') ADVANCE(49);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(3);
      END_STATE();
    case 12:
      if (lookahead == '-') ADVANCE(52);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(18);
      END_STATE();
    case 13:
      if (lookahead == '-') ADVANCE(53);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(17);
      END_STATE();
    case 14:
      if (lookahead == '-') ADVANCE(51);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(4);
      END_STATE();
    case 15:
      if (lookahead == '-') ADVANCE(56);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(16);
      END_STATE();
    case 16:
      if (lookahead == '.') ADVANCE(54);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(16);
      END_STATE();
    case 17:
      if (lookahead == '.') ADVANCE(57);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(17);
      END_STATE();
    case 18:
      if (lookahead == '`') ADVANCE(79);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(18);
      END_STATE();
    case 19:
      if (lookahead == '`') ADVANCE(80);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(19);
      END_STATE();
    case 20:
      if (lookahead == 'a') ADVANCE(30);
      END_STATE();
    case 21:
      if (lookahead == 'a') ADVANCE(43);
      END_STATE();
    case 22:
      if (lookahead == 'c') ADVANCE(20);
      END_STATE();
    case 23:
      if (lookahead == 'c') ADVANCE(45);
      END_STATE();
    case 24:
      if (lookahead == 'd') ADVANCE(66);
      END_STATE();
    case 25:
      if (lookahead == 'e') ADVANCE(23);
      if (lookahead == 'o') ADVANCE(27);
      END_STATE();
    case 26:
      if (lookahead == 'g') ADVANCE(70);
      END_STATE();
    case 27:
      if (lookahead == 'i') ADVANCE(24);
      END_STATE();
    case 28:
      if (lookahead == 'i') ADVANCE(32);
      END_STATE();
    case 29:
      if (lookahead == 'i') ADVANCE(42);
      END_STATE();
    case 30:
      if (lookahead == 'l') ADVANCE(64);
      END_STATE();
    case 31:
      if (lookahead == 'l') ADVANCE(36);
      END_STATE();
    case 32:
      if (lookahead == 'n') ADVANCE(26);
      END_STATE();
    case 33:
      if (lookahead == 'n') ADVANCE(44);
      END_STATE();
    case 34:
      if (lookahead == 'n') ADVANCE(41);
      END_STATE();
    case 35:
      if (lookahead == 'o') ADVANCE(22);
      END_STATE();
    case 36:
      if (lookahead == 'o') ADVANCE(21);
      END_STATE();
    case 37:
      if (lookahead == 'o') ADVANCE(38);
      END_STATE();
    case 38:
      if (lookahead == 'r') ADVANCE(69);
      END_STATE();
    case 39:
      if (lookahead == 'r') ADVANCE(28);
      END_STATE();
    case 40:
      if (lookahead == 't') ADVANCE(39);
      END_STATE();
    case 41:
      if (lookahead == 't') ADVANCE(71);
      END_STATE();
    case 42:
      if (lookahead == 't') ADVANCE(46);
      END_STATE();
    case 43:
      if (lookahead == 't') ADVANCE(68);
      END_STATE();
    case 44:
      if (lookahead == 't') ADVANCE(29);
      END_STATE();
    case 45:
      if (lookahead == 't') ADVANCE(37);
      END_STATE();
    case 46:
      if (lookahead == 'y') ADVANCE(67);
      END_STATE();
    case 47:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(77);
      END_STATE();
    case 48:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(90);
      END_STATE();
    case 49:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(3);
      END_STATE();
    case 50:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(78);
      END_STATE();
    case 51:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(4);
      END_STATE();
    case 52:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(18);
      END_STATE();
    case 53:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(17);
      END_STATE();
    case 54:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(19);
      END_STATE();
    case 55:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(5);
      END_STATE();
    case 56:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(16);
      END_STATE();
    case 57:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(6);
      END_STATE();
    case 58:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(76);
      END_STATE();
    case 59:
      if (eof) ADVANCE(61);
      if (lookahead == '\n') SKIP(0)
      END_STATE();
    case 60:
      if (eof) ADVANCE(61);
      if (lookahead == '\n') SKIP(0)
      if (lookahead == '\r') SKIP(59)
      END_STATE();
    case 61:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 62:
      ACCEPT_TOKEN(anon_sym_SEMI);
      END_STATE();
    case 63:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 64:
      ACCEPT_TOKEN(anon_sym_local);
      END_STATE();
    case 65:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 66:
      ACCEPT_TOKEN(anon_sym_void);
      END_STATE();
    case 67:
      ACCEPT_TOKEN(anon_sym_entity);
      END_STATE();
    case 68:
      ACCEPT_TOKEN(anon_sym_float);
      END_STATE();
    case 69:
      ACCEPT_TOKEN(anon_sym_vector);
      END_STATE();
    case 70:
      ACCEPT_TOKEN(anon_sym_string);
      END_STATE();
    case 71:
      ACCEPT_TOKEN(anon_sym_int);
      END_STATE();
    case 72:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 73:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 74:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 75:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 76:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(76);
      END_STATE();
    case 77:
      ACCEPT_TOKEN(aux_sym__numeric_literal_token1);
      if (lookahead == '.') ADVANCE(50);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(77);
      END_STATE();
    case 78:
      ACCEPT_TOKEN(aux_sym__numeric_literal_token2);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(78);
      END_STATE();
    case 79:
      ACCEPT_TOKEN(aux_sym__numeric_literal_token3);
      END_STATE();
    case 80:
      ACCEPT_TOKEN(aux_sym__numeric_literal_token4);
      END_STATE();
    case 81:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 82:
      ACCEPT_TOKEN(aux_sym__string_literal_token1);
      if (lookahead == '\n') ADVANCE(88);
      if (lookahead == '\r') ADVANCE(83);
      if (lookahead != 0 &&
          lookahead != '"') ADVANCE(89);
      END_STATE();
    case 83:
      ACCEPT_TOKEN(aux_sym__string_literal_token1);
      if (lookahead == '\n') ADVANCE(88);
      if (lookahead != 0 &&
          lookahead != '"') ADVANCE(89);
      END_STATE();
    case 84:
      ACCEPT_TOKEN(aux_sym__string_literal_token1);
      if (lookahead == '\n') ADVANCE(89);
      if (lookahead == '"') ADVANCE(92);
      if (lookahead != 0) ADVANCE(84);
      END_STATE();
    case 85:
      ACCEPT_TOKEN(aux_sym__string_literal_token1);
      if (lookahead == '"') ADVANCE(10);
      if (lookahead == '*') ADVANCE(85);
      if (lookahead == '/') ADVANCE(89);
      if (lookahead != 0) ADVANCE(86);
      END_STATE();
    case 86:
      ACCEPT_TOKEN(aux_sym__string_literal_token1);
      if (lookahead == '"') ADVANCE(10);
      if (lookahead == '*') ADVANCE(85);
      if (lookahead != 0) ADVANCE(86);
      END_STATE();
    case 87:
      ACCEPT_TOKEN(aux_sym__string_literal_token1);
      if (lookahead == '*') ADVANCE(86);
      if (lookahead == '/') ADVANCE(84);
      if (lookahead != 0 &&
          lookahead != '"') ADVANCE(89);
      END_STATE();
    case 88:
      ACCEPT_TOKEN(aux_sym__string_literal_token1);
      if (lookahead == '/') ADVANCE(87);
      if (lookahead == '\\') ADVANCE(82);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(88);
      if (lookahead != 0 &&
          lookahead != '"') ADVANCE(89);
      END_STATE();
    case 89:
      ACCEPT_TOKEN(aux_sym__string_literal_token1);
      if (lookahead != 0 &&
          lookahead != '"') ADVANCE(89);
      END_STATE();
    case 90:
      ACCEPT_TOKEN(sym__builtin_literal);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(90);
      END_STATE();
    case 91:
      ACCEPT_TOKEN(sym_comment);
      END_STATE();
    case 92:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(92);
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
  [4] = {.lex_state = 0},
  [5] = {.lex_state = 0},
  [6] = {.lex_state = 0},
  [7] = {.lex_state = 0},
  [8] = {.lex_state = 0},
  [9] = {.lex_state = 0},
  [10] = {.lex_state = 7},
  [11] = {.lex_state = 0},
  [12] = {.lex_state = 0},
  [13] = {.lex_state = 0},
  [14] = {.lex_state = 0},
  [15] = {.lex_state = 0},
  [16] = {.lex_state = 0},
  [17] = {.lex_state = 7},
  [18] = {.lex_state = 0},
  [19] = {.lex_state = 7},
  [20] = {.lex_state = 88},
  [21] = {.lex_state = 0},
  [22] = {.lex_state = 0},
  [23] = {.lex_state = 7},
  [24] = {.lex_state = 7},
  [25] = {.lex_state = 7},
  [26] = {.lex_state = 7},
  [27] = {.lex_state = 0},
  [28] = {.lex_state = 0},
  [29] = {.lex_state = 0},
  [30] = {.lex_state = 0},
  [31] = {.lex_state = 0},
  [32] = {.lex_state = 0},
  [33] = {.lex_state = 0},
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
    [aux_sym__numeric_literal_token1] = ACTIONS(1),
    [aux_sym__numeric_literal_token2] = ACTIONS(1),
    [aux_sym__numeric_literal_token3] = ACTIONS(1),
    [aux_sym__numeric_literal_token4] = ACTIONS(1),
    [anon_sym_DQUOTE] = ACTIONS(1),
    [sym__builtin_literal] = ACTIONS(1),
    [sym_comment] = ACTIONS(3),
  },
  [1] = {
    [sym_source_file] = STATE(33),
    [sym__definition] = STATE(2),
    [sym_function_declaration] = STATE(2),
    [sym_function_definition] = STATE(2),
    [sym_constant_definition] = STATE(2),
    [sym_simple_type] = STATE(10),
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
    STATE(10), 1,
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
    STATE(10), 1,
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
  [50] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(16), 1,
      anon_sym_RPAREN,
    STATE(13), 1,
      sym__parameter,
    STATE(23), 1,
      sym_simple_type,
    ACTIONS(7), 6,
      anon_sym_void,
      anon_sym_entity,
      anon_sym_float,
      anon_sym_vector,
      anon_sym_string,
      anon_sym_int,
  [71] = 4,
    ACTIONS(3), 1,
      sym_comment,
    STATE(15), 1,
      sym__parameter,
    STATE(23), 1,
      sym_simple_type,
    ACTIONS(7), 6,
      anon_sym_void,
      anon_sym_entity,
      anon_sym_float,
      anon_sym_vector,
      anon_sym_string,
      anon_sym_int,
  [89] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(18), 1,
      aux_sym__numeric_literal_token1,
    ACTIONS(22), 1,
      anon_sym_DQUOTE,
    STATE(21), 1,
      sym_literal,
    STATE(22), 2,
      sym__numeric_literal,
      sym__string_literal,
    ACTIONS(20), 3,
      aux_sym__numeric_literal_token2,
      aux_sym__numeric_literal_token3,
      aux_sym__numeric_literal_token4,
  [111] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(24), 7,
      ts_builtin_sym_end,
      anon_sym_void,
      anon_sym_entity,
      anon_sym_float,
      anon_sym_vector,
      anon_sym_string,
      anon_sym_int,
  [124] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(26), 7,
      ts_builtin_sym_end,
      anon_sym_void,
      anon_sym_entity,
      anon_sym_float,
      anon_sym_vector,
      anon_sym_string,
      anon_sym_int,
  [137] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(28), 7,
      ts_builtin_sym_end,
      anon_sym_void,
      anon_sym_entity,
      anon_sym_float,
      anon_sym_vector,
      anon_sym_string,
      anon_sym_int,
  [150] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(30), 1,
      anon_sym_LPAREN,
    ACTIONS(32), 1,
      sym_identifier,
    STATE(26), 1,
      sym_parameter_list,
  [163] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(34), 1,
      anon_sym_COMMA,
    ACTIONS(37), 1,
      anon_sym_RPAREN,
    STATE(11), 1,
      aux_sym_parameter_list_repeat1,
  [176] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(39), 1,
      anon_sym_LBRACE,
    ACTIONS(41), 1,
      sym__builtin_literal,
    STATE(30), 1,
      sym_compound_statement,
  [189] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(43), 1,
      anon_sym_COMMA,
    ACTIONS(45), 1,
      anon_sym_RPAREN,
    STATE(14), 1,
      aux_sym_parameter_list_repeat1,
  [202] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(43), 1,
      anon_sym_COMMA,
    ACTIONS(47), 1,
      anon_sym_RPAREN,
    STATE(11), 1,
      aux_sym_parameter_list_repeat1,
  [215] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(37), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [223] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(49), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [231] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(51), 2,
      anon_sym_LPAREN,
      sym_identifier,
  [239] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(53), 1,
      anon_sym_SEMI,
    ACTIONS(55), 1,
      anon_sym_EQ,
  [249] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(57), 1,
      sym_identifier,
  [256] = 2,
    ACTIONS(59), 1,
      aux_sym__string_literal_token1,
    ACTIONS(61), 1,
      sym_comment,
  [263] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(63), 1,
      anon_sym_SEMI,
  [270] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(65), 1,
      anon_sym_SEMI,
  [277] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(67), 1,
      sym_identifier,
  [284] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(69), 1,
      sym_identifier,
  [291] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(71), 1,
      sym_identifier,
  [298] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(73), 1,
      sym_identifier,
  [305] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(75), 1,
      anon_sym_DQUOTE,
  [312] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(77), 1,
      anon_sym_EQ,
  [319] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(79), 1,
      anon_sym_RBRACE,
  [326] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(81), 1,
      anon_sym_SEMI,
  [333] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(83), 1,
      anon_sym_SEMI,
  [340] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(85), 1,
      anon_sym_SEMI,
  [347] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(87), 1,
      ts_builtin_sym_end,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 25,
  [SMALL_STATE(4)] = 50,
  [SMALL_STATE(5)] = 71,
  [SMALL_STATE(6)] = 89,
  [SMALL_STATE(7)] = 111,
  [SMALL_STATE(8)] = 124,
  [SMALL_STATE(9)] = 137,
  [SMALL_STATE(10)] = 150,
  [SMALL_STATE(11)] = 163,
  [SMALL_STATE(12)] = 176,
  [SMALL_STATE(13)] = 189,
  [SMALL_STATE(14)] = 202,
  [SMALL_STATE(15)] = 215,
  [SMALL_STATE(16)] = 223,
  [SMALL_STATE(17)] = 231,
  [SMALL_STATE(18)] = 239,
  [SMALL_STATE(19)] = 249,
  [SMALL_STATE(20)] = 256,
  [SMALL_STATE(21)] = 263,
  [SMALL_STATE(22)] = 270,
  [SMALL_STATE(23)] = 277,
  [SMALL_STATE(24)] = 284,
  [SMALL_STATE(25)] = 291,
  [SMALL_STATE(26)] = 298,
  [SMALL_STATE(27)] = 305,
  [SMALL_STATE(28)] = 312,
  [SMALL_STATE(29)] = 319,
  [SMALL_STATE(30)] = 326,
  [SMALL_STATE(31)] = 333,
  [SMALL_STATE(32)] = 340,
  [SMALL_STATE(33)] = 347,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT_EXTRA(),
  [5] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [9] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1),
  [11] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2),
  [13] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(17),
  [16] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [18] = {.entry = {.count = 1, .reusable = false}}, SHIFT(22),
  [20] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [22] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [24] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_definition, 6),
  [26] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_constant_definition, 5),
  [28] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_declaration, 4),
  [30] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [32] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [34] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_parameter_list_repeat1, 2), SHIFT_REPEAT(5),
  [37] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_parameter_list_repeat1, 2),
  [39] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [41] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [43] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [45] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [47] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [49] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__parameter, 2),
  [51] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_simple_type, 1),
  [53] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [55] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [57] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter_list, 3),
  [59] = {.entry = {.count = 1, .reusable = false}}, SHIFT(27),
  [61] = {.entry = {.count = 1, .reusable = false}}, SHIFT_EXTRA(),
  [63] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [65] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_literal, 1),
  [67] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [69] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter_list, 2),
  [71] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter_list, 4),
  [73] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [75] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [77] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [79] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [81] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [83] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__string_literal, 3),
  [85] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_compound_statement, 2),
  [87] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
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
