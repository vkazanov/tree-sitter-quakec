#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 29
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 31
#define ALIAS_COUNT 0
#define TOKEN_COUNT 21
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 5
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
  sym_identifier = 13,
  aux_sym_immediate_token1 = 14,
  aux_sym_immediate_token2 = 15,
  aux_sym_immediate_token3 = 16,
  aux_sym_immediate_token4 = 17,
  anon_sym_DQUOTE = 18,
  aux_sym_immediate_token5 = 19,
  sym_comment = 20,
  sym_source_file = 21,
  sym__definition = 22,
  sym_function_declaration = 23,
  sym_constant_definition = 24,
  sym_simple_type = 25,
  sym_parameter_list = 26,
  sym__parameter = 27,
  sym_immediate = 28,
  aux_sym_source_file_repeat1 = 29,
  aux_sym_parameter_list_repeat1 = 30,
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
  [sym_identifier] = "identifier",
  [aux_sym_immediate_token1] = "immediate_token1",
  [aux_sym_immediate_token2] = "immediate_token2",
  [aux_sym_immediate_token3] = "immediate_token3",
  [aux_sym_immediate_token4] = "immediate_token4",
  [anon_sym_DQUOTE] = "\"",
  [aux_sym_immediate_token5] = "immediate_token5",
  [sym_comment] = "comment",
  [sym_source_file] = "source_file",
  [sym__definition] = "_definition",
  [sym_function_declaration] = "function_declaration",
  [sym_constant_definition] = "constant_definition",
  [sym_simple_type] = "simple_type",
  [sym_parameter_list] = "parameter_list",
  [sym__parameter] = "_parameter",
  [sym_immediate] = "immediate",
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
  [sym_identifier] = sym_identifier,
  [aux_sym_immediate_token1] = aux_sym_immediate_token1,
  [aux_sym_immediate_token2] = aux_sym_immediate_token2,
  [aux_sym_immediate_token3] = aux_sym_immediate_token3,
  [aux_sym_immediate_token4] = aux_sym_immediate_token4,
  [anon_sym_DQUOTE] = anon_sym_DQUOTE,
  [aux_sym_immediate_token5] = aux_sym_immediate_token5,
  [sym_comment] = sym_comment,
  [sym_source_file] = sym_source_file,
  [sym__definition] = sym__definition,
  [sym_function_declaration] = sym_function_declaration,
  [sym_constant_definition] = sym_constant_definition,
  [sym_simple_type] = sym_simple_type,
  [sym_parameter_list] = sym_parameter_list,
  [sym__parameter] = sym__parameter,
  [sym_immediate] = sym_immediate,
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
  [sym_identifier] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_immediate_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_immediate_token2] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_immediate_token3] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_immediate_token4] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_DQUOTE] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_immediate_token5] = {
    .visible = false,
    .named = false,
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
  [sym_immediate] = {
    .visible = true,
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
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(60);
      if (lookahead == '"') ADVANCE(78);
      if (lookahead == '(') ADVANCE(71);
      if (lookahead == ')') ADVANCE(72);
      if (lookahead == ',') ADVANCE(64);
      if (lookahead == '-') ADVANCE(47);
      if (lookahead == '/') ADVANCE(8);
      if (lookahead == ';') ADVANCE(61);
      if (lookahead == '=') ADVANCE(62);
      if (lookahead == '\\') SKIP(59)
      if (lookahead == '`') ADVANCE(11);
      if (lookahead == 'e') ADVANCE(33);
      if (lookahead == 'f') ADVANCE(31);
      if (lookahead == 'i') ADVANCE(34);
      if (lookahead == 'l') ADVANCE(35);
      if (lookahead == 's') ADVANCE(40);
      if (lookahead == 'v') ADVANCE(25);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(74);
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
      if (lookahead == '.') ADVANCE(54);
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
      if (lookahead == '(') ADVANCE(71);
      if (lookahead == '/') ADVANCE(8);
      if (lookahead == '\\') SKIP(2)
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(7)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(57);
      END_STATE();
    case 8:
      if (lookahead == '*') ADVANCE(10);
      if (lookahead == '/') ADVANCE(88);
      END_STATE();
    case 9:
      if (lookahead == '*') ADVANCE(9);
      if (lookahead == '/') ADVANCE(87);
      if (lookahead != 0) ADVANCE(10);
      END_STATE();
    case 10:
      if (lookahead == '*') ADVANCE(9);
      if (lookahead != 0) ADVANCE(10);
      END_STATE();
    case 11:
      if (lookahead == '-') ADVANCE(48);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(3);
      END_STATE();
    case 12:
      if (lookahead == '-') ADVANCE(51);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(18);
      END_STATE();
    case 13:
      if (lookahead == '-') ADVANCE(52);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(17);
      END_STATE();
    case 14:
      if (lookahead == '-') ADVANCE(50);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(4);
      END_STATE();
    case 15:
      if (lookahead == '-') ADVANCE(55);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(16);
      END_STATE();
    case 16:
      if (lookahead == '.') ADVANCE(53);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(16);
      END_STATE();
    case 17:
      if (lookahead == '.') ADVANCE(56);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(17);
      END_STATE();
    case 18:
      if (lookahead == '`') ADVANCE(76);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(18);
      END_STATE();
    case 19:
      if (lookahead == '`') ADVANCE(77);
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
      if (lookahead == 'd') ADVANCE(65);
      END_STATE();
    case 25:
      if (lookahead == 'e') ADVANCE(23);
      if (lookahead == 'o') ADVANCE(27);
      END_STATE();
    case 26:
      if (lookahead == 'g') ADVANCE(69);
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
      if (lookahead == 'l') ADVANCE(63);
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
      if (lookahead == 'r') ADVANCE(68);
      END_STATE();
    case 39:
      if (lookahead == 'r') ADVANCE(28);
      END_STATE();
    case 40:
      if (lookahead == 't') ADVANCE(39);
      END_STATE();
    case 41:
      if (lookahead == 't') ADVANCE(70);
      END_STATE();
    case 42:
      if (lookahead == 't') ADVANCE(46);
      END_STATE();
    case 43:
      if (lookahead == 't') ADVANCE(67);
      END_STATE();
    case 44:
      if (lookahead == 't') ADVANCE(29);
      END_STATE();
    case 45:
      if (lookahead == 't') ADVANCE(37);
      END_STATE();
    case 46:
      if (lookahead == 'y') ADVANCE(66);
      END_STATE();
    case 47:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(74);
      END_STATE();
    case 48:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(3);
      END_STATE();
    case 49:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(75);
      END_STATE();
    case 50:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(4);
      END_STATE();
    case 51:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(18);
      END_STATE();
    case 52:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(17);
      END_STATE();
    case 53:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(19);
      END_STATE();
    case 54:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(5);
      END_STATE();
    case 55:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(16);
      END_STATE();
    case 56:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(6);
      END_STATE();
    case 57:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(73);
      END_STATE();
    case 58:
      if (eof) ADVANCE(60);
      if (lookahead == '\n') SKIP(0)
      END_STATE();
    case 59:
      if (eof) ADVANCE(60);
      if (lookahead == '\n') SKIP(0)
      if (lookahead == '\r') SKIP(58)
      END_STATE();
    case 60:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 61:
      ACCEPT_TOKEN(anon_sym_SEMI);
      END_STATE();
    case 62:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 63:
      ACCEPT_TOKEN(anon_sym_local);
      END_STATE();
    case 64:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 65:
      ACCEPT_TOKEN(anon_sym_void);
      END_STATE();
    case 66:
      ACCEPT_TOKEN(anon_sym_entity);
      END_STATE();
    case 67:
      ACCEPT_TOKEN(anon_sym_float);
      END_STATE();
    case 68:
      ACCEPT_TOKEN(anon_sym_vector);
      END_STATE();
    case 69:
      ACCEPT_TOKEN(anon_sym_string);
      END_STATE();
    case 70:
      ACCEPT_TOKEN(anon_sym_int);
      END_STATE();
    case 71:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 72:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 73:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(73);
      END_STATE();
    case 74:
      ACCEPT_TOKEN(aux_sym_immediate_token1);
      if (lookahead == '.') ADVANCE(49);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(74);
      END_STATE();
    case 75:
      ACCEPT_TOKEN(aux_sym_immediate_token2);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(75);
      END_STATE();
    case 76:
      ACCEPT_TOKEN(aux_sym_immediate_token3);
      END_STATE();
    case 77:
      ACCEPT_TOKEN(aux_sym_immediate_token4);
      END_STATE();
    case 78:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 79:
      ACCEPT_TOKEN(aux_sym_immediate_token5);
      if (lookahead == '\n') ADVANCE(85);
      if (lookahead == '\r') ADVANCE(80);
      if (lookahead != 0 &&
          lookahead != '"') ADVANCE(86);
      END_STATE();
    case 80:
      ACCEPT_TOKEN(aux_sym_immediate_token5);
      if (lookahead == '\n') ADVANCE(85);
      if (lookahead != 0 &&
          lookahead != '"') ADVANCE(86);
      END_STATE();
    case 81:
      ACCEPT_TOKEN(aux_sym_immediate_token5);
      if (lookahead == '\n') ADVANCE(86);
      if (lookahead == '"') ADVANCE(88);
      if (lookahead != 0) ADVANCE(81);
      END_STATE();
    case 82:
      ACCEPT_TOKEN(aux_sym_immediate_token5);
      if (lookahead == '"') ADVANCE(10);
      if (lookahead == '*') ADVANCE(82);
      if (lookahead == '/') ADVANCE(86);
      if (lookahead != 0) ADVANCE(83);
      END_STATE();
    case 83:
      ACCEPT_TOKEN(aux_sym_immediate_token5);
      if (lookahead == '"') ADVANCE(10);
      if (lookahead == '*') ADVANCE(82);
      if (lookahead != 0) ADVANCE(83);
      END_STATE();
    case 84:
      ACCEPT_TOKEN(aux_sym_immediate_token5);
      if (lookahead == '*') ADVANCE(83);
      if (lookahead == '/') ADVANCE(81);
      if (lookahead != 0 &&
          lookahead != '"') ADVANCE(86);
      END_STATE();
    case 85:
      ACCEPT_TOKEN(aux_sym_immediate_token5);
      if (lookahead == '/') ADVANCE(84);
      if (lookahead == '\\') ADVANCE(79);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(85);
      if (lookahead != 0 &&
          lookahead != '"') ADVANCE(86);
      END_STATE();
    case 86:
      ACCEPT_TOKEN(aux_sym_immediate_token5);
      if (lookahead != 0 &&
          lookahead != '"') ADVANCE(86);
      END_STATE();
    case 87:
      ACCEPT_TOKEN(sym_comment);
      END_STATE();
    case 88:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(88);
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
  [9] = {.lex_state = 7},
  [10] = {.lex_state = 0},
  [11] = {.lex_state = 0},
  [12] = {.lex_state = 0},
  [13] = {.lex_state = 7},
  [14] = {.lex_state = 0},
  [15] = {.lex_state = 0},
  [16] = {.lex_state = 0},
  [17] = {.lex_state = 7},
  [18] = {.lex_state = 0},
  [19] = {.lex_state = 0},
  [20] = {.lex_state = 85},
  [21] = {.lex_state = 0},
  [22] = {.lex_state = 7},
  [23] = {.lex_state = 7},
  [24] = {.lex_state = 7},
  [25] = {.lex_state = 7},
  [26] = {.lex_state = 0},
  [27] = {.lex_state = 0},
  [28] = {.lex_state = 0},
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
    [aux_sym_immediate_token1] = ACTIONS(1),
    [aux_sym_immediate_token2] = ACTIONS(1),
    [aux_sym_immediate_token3] = ACTIONS(1),
    [aux_sym_immediate_token4] = ACTIONS(1),
    [anon_sym_DQUOTE] = ACTIONS(1),
    [sym_comment] = ACTIONS(3),
  },
  [1] = {
    [sym_source_file] = STATE(18),
    [sym__definition] = STATE(2),
    [sym_function_declaration] = STATE(2),
    [sym_constant_definition] = STATE(2),
    [sym_simple_type] = STATE(9),
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
    STATE(9), 1,
      sym_simple_type,
    STATE(3), 4,
      sym__definition,
      sym_function_declaration,
      sym_constant_definition,
      aux_sym_source_file_repeat1,
    ACTIONS(7), 6,
      anon_sym_void,
      anon_sym_entity,
      anon_sym_float,
      anon_sym_vector,
      anon_sym_string,
      anon_sym_int,
  [24] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(11), 1,
      ts_builtin_sym_end,
    STATE(9), 1,
      sym_simple_type,
    STATE(3), 4,
      sym__definition,
      sym_function_declaration,
      sym_constant_definition,
      aux_sym_source_file_repeat1,
    ACTIONS(13), 6,
      anon_sym_void,
      anon_sym_entity,
      anon_sym_float,
      anon_sym_vector,
      anon_sym_string,
      anon_sym_int,
  [48] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(16), 1,
      anon_sym_RPAREN,
    STATE(12), 1,
      sym__parameter,
    STATE(22), 1,
      sym_simple_type,
    ACTIONS(7), 6,
      anon_sym_void,
      anon_sym_entity,
      anon_sym_float,
      anon_sym_vector,
      anon_sym_string,
      anon_sym_int,
  [69] = 4,
    ACTIONS(3), 1,
      sym_comment,
    STATE(14), 1,
      sym__parameter,
    STATE(22), 1,
      sym_simple_type,
    ACTIONS(7), 6,
      anon_sym_void,
      anon_sym_entity,
      anon_sym_float,
      anon_sym_vector,
      anon_sym_string,
      anon_sym_int,
  [87] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(18), 7,
      ts_builtin_sym_end,
      anon_sym_void,
      anon_sym_entity,
      anon_sym_float,
      anon_sym_vector,
      anon_sym_string,
      anon_sym_int,
  [100] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(20), 7,
      ts_builtin_sym_end,
      anon_sym_void,
      anon_sym_entity,
      anon_sym_float,
      anon_sym_vector,
      anon_sym_string,
      anon_sym_int,
  [113] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(22), 1,
      aux_sym_immediate_token1,
    ACTIONS(26), 1,
      anon_sym_DQUOTE,
    STATE(21), 1,
      sym_immediate,
    ACTIONS(24), 3,
      aux_sym_immediate_token2,
      aux_sym_immediate_token3,
      aux_sym_immediate_token4,
  [131] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(28), 1,
      anon_sym_LPAREN,
    ACTIONS(30), 1,
      sym_identifier,
    STATE(25), 1,
      sym_parameter_list,
  [144] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(32), 1,
      anon_sym_COMMA,
    ACTIONS(35), 1,
      anon_sym_RPAREN,
    STATE(10), 1,
      aux_sym_parameter_list_repeat1,
  [157] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(37), 1,
      anon_sym_COMMA,
    ACTIONS(39), 1,
      anon_sym_RPAREN,
    STATE(10), 1,
      aux_sym_parameter_list_repeat1,
  [170] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(37), 1,
      anon_sym_COMMA,
    ACTIONS(41), 1,
      anon_sym_RPAREN,
    STATE(11), 1,
      aux_sym_parameter_list_repeat1,
  [183] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(43), 2,
      anon_sym_LPAREN,
      sym_identifier,
  [191] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(35), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [199] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(45), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [207] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(47), 1,
      anon_sym_SEMI,
  [214] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(49), 1,
      sym_identifier,
  [221] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(51), 1,
      ts_builtin_sym_end,
  [228] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(53), 1,
      anon_sym_SEMI,
  [235] = 2,
    ACTIONS(55), 1,
      aux_sym_immediate_token5,
    ACTIONS(57), 1,
      sym_comment,
  [242] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(59), 1,
      anon_sym_SEMI,
  [249] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(61), 1,
      sym_identifier,
  [256] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(63), 1,
      sym_identifier,
  [263] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(65), 1,
      sym_identifier,
  [270] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(67), 1,
      sym_identifier,
  [277] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(69), 1,
      anon_sym_DQUOTE,
  [284] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(71), 1,
      anon_sym_EQ,
  [291] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(73), 1,
      anon_sym_SEMI,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 24,
  [SMALL_STATE(4)] = 48,
  [SMALL_STATE(5)] = 69,
  [SMALL_STATE(6)] = 87,
  [SMALL_STATE(7)] = 100,
  [SMALL_STATE(8)] = 113,
  [SMALL_STATE(9)] = 131,
  [SMALL_STATE(10)] = 144,
  [SMALL_STATE(11)] = 157,
  [SMALL_STATE(12)] = 170,
  [SMALL_STATE(13)] = 183,
  [SMALL_STATE(14)] = 191,
  [SMALL_STATE(15)] = 199,
  [SMALL_STATE(16)] = 207,
  [SMALL_STATE(17)] = 214,
  [SMALL_STATE(18)] = 221,
  [SMALL_STATE(19)] = 228,
  [SMALL_STATE(20)] = 235,
  [SMALL_STATE(21)] = 242,
  [SMALL_STATE(22)] = 249,
  [SMALL_STATE(23)] = 256,
  [SMALL_STATE(24)] = 263,
  [SMALL_STATE(25)] = 270,
  [SMALL_STATE(26)] = 277,
  [SMALL_STATE(27)] = 284,
  [SMALL_STATE(28)] = 291,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT_EXTRA(),
  [5] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [9] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1),
  [11] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2),
  [13] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(13),
  [16] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [18] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_constant_definition, 5),
  [20] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_declaration, 4),
  [22] = {.entry = {.count = 1, .reusable = false}}, SHIFT(19),
  [24] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [26] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [28] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [30] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [32] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_parameter_list_repeat1, 2), SHIFT_REPEAT(5),
  [35] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_parameter_list_repeat1, 2),
  [37] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [39] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [41] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [43] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_simple_type, 1),
  [45] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__parameter, 2),
  [47] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [49] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter_list, 3),
  [51] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [53] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_immediate, 1),
  [55] = {.entry = {.count = 1, .reusable = false}}, SHIFT(26),
  [57] = {.entry = {.count = 1, .reusable = false}}, SHIFT_EXTRA(),
  [59] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [61] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [63] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter_list, 2),
  [65] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter_list, 4),
  [67] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [69] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [71] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [73] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_immediate, 3),
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
