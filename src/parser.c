#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 21
#define LARGE_STATE_COUNT 4
#define SYMBOL_COUNT 20
#define ALIAS_COUNT 0
#define TOKEN_COUNT 12
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 4
#define PRODUCTION_ID_COUNT 1

enum {
  anon_sym_SEMI = 1,
  anon_sym_void = 2,
  anon_sym_entity = 3,
  anon_sym_float = 4,
  anon_sym_vector = 5,
  anon_sym_string = 6,
  anon_sym_int = 7,
  anon_sym_LPAREN = 8,
  anon_sym_COMMA = 9,
  anon_sym_RPAREN = 10,
  sym_identifier = 11,
  sym_source_file = 12,
  sym__definition = 13,
  sym_function_declaration = 14,
  sym_primitive_type = 15,
  sym_parameter_list = 16,
  sym__parameter = 17,
  aux_sym_source_file_repeat1 = 18,
  aux_sym_parameter_list_repeat1 = 19,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [anon_sym_SEMI] = ";",
  [anon_sym_void] = "void",
  [anon_sym_entity] = "entity",
  [anon_sym_float] = "float",
  [anon_sym_vector] = "vector",
  [anon_sym_string] = "string",
  [anon_sym_int] = "int",
  [anon_sym_LPAREN] = "(",
  [anon_sym_COMMA] = ",",
  [anon_sym_RPAREN] = ")",
  [sym_identifier] = "identifier",
  [sym_source_file] = "source_file",
  [sym__definition] = "_definition",
  [sym_function_declaration] = "function_declaration",
  [sym_primitive_type] = "primitive_type",
  [sym_parameter_list] = "parameter_list",
  [sym__parameter] = "_parameter",
  [aux_sym_source_file_repeat1] = "source_file_repeat1",
  [aux_sym_parameter_list_repeat1] = "parameter_list_repeat1",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [anon_sym_SEMI] = anon_sym_SEMI,
  [anon_sym_void] = anon_sym_void,
  [anon_sym_entity] = anon_sym_entity,
  [anon_sym_float] = anon_sym_float,
  [anon_sym_vector] = anon_sym_vector,
  [anon_sym_string] = anon_sym_string,
  [anon_sym_int] = anon_sym_int,
  [anon_sym_LPAREN] = anon_sym_LPAREN,
  [anon_sym_COMMA] = anon_sym_COMMA,
  [anon_sym_RPAREN] = anon_sym_RPAREN,
  [sym_identifier] = sym_identifier,
  [sym_source_file] = sym_source_file,
  [sym__definition] = sym__definition,
  [sym_function_declaration] = sym_function_declaration,
  [sym_primitive_type] = sym_primitive_type,
  [sym_parameter_list] = sym_parameter_list,
  [sym__parameter] = sym__parameter,
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
  [anon_sym_COMMA] = {
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
  [sym_primitive_type] = {
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
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(26);
      if (lookahead == '(') ADVANCE(34);
      if (lookahead == ')') ADVANCE(36);
      if (lookahead == ',') ADVANCE(35);
      if (lookahead == ';') ADVANCE(27);
      if (lookahead == 'e') ADVANCE(12);
      if (lookahead == 'f') ADVANCE(10);
      if (lookahead == 'i') ADVANCE(13);
      if (lookahead == 's') ADVANCE(18);
      if (lookahead == 'v') ADVANCE(5);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0)
      END_STATE();
    case 1:
      if (lookahead == '(') ADVANCE(34);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(1)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(25);
      END_STATE();
    case 2:
      if (lookahead == 'a') ADVANCE(21);
      END_STATE();
    case 3:
      if (lookahead == 'c') ADVANCE(22);
      END_STATE();
    case 4:
      if (lookahead == 'd') ADVANCE(28);
      END_STATE();
    case 5:
      if (lookahead == 'e') ADVANCE(3);
      if (lookahead == 'o') ADVANCE(7);
      END_STATE();
    case 6:
      if (lookahead == 'g') ADVANCE(32);
      END_STATE();
    case 7:
      if (lookahead == 'i') ADVANCE(4);
      END_STATE();
    case 8:
      if (lookahead == 'i') ADVANCE(11);
      END_STATE();
    case 9:
      if (lookahead == 'i') ADVANCE(20);
      END_STATE();
    case 10:
      if (lookahead == 'l') ADVANCE(14);
      END_STATE();
    case 11:
      if (lookahead == 'n') ADVANCE(6);
      END_STATE();
    case 12:
      if (lookahead == 'n') ADVANCE(23);
      END_STATE();
    case 13:
      if (lookahead == 'n') ADVANCE(19);
      END_STATE();
    case 14:
      if (lookahead == 'o') ADVANCE(2);
      END_STATE();
    case 15:
      if (lookahead == 'o') ADVANCE(16);
      END_STATE();
    case 16:
      if (lookahead == 'r') ADVANCE(31);
      END_STATE();
    case 17:
      if (lookahead == 'r') ADVANCE(8);
      END_STATE();
    case 18:
      if (lookahead == 't') ADVANCE(17);
      END_STATE();
    case 19:
      if (lookahead == 't') ADVANCE(33);
      END_STATE();
    case 20:
      if (lookahead == 't') ADVANCE(24);
      END_STATE();
    case 21:
      if (lookahead == 't') ADVANCE(30);
      END_STATE();
    case 22:
      if (lookahead == 't') ADVANCE(15);
      END_STATE();
    case 23:
      if (lookahead == 't') ADVANCE(9);
      END_STATE();
    case 24:
      if (lookahead == 'y') ADVANCE(29);
      END_STATE();
    case 25:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(37);
      END_STATE();
    case 26:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 27:
      ACCEPT_TOKEN(anon_sym_SEMI);
      END_STATE();
    case 28:
      ACCEPT_TOKEN(anon_sym_void);
      END_STATE();
    case 29:
      ACCEPT_TOKEN(anon_sym_entity);
      END_STATE();
    case 30:
      ACCEPT_TOKEN(anon_sym_float);
      END_STATE();
    case 31:
      ACCEPT_TOKEN(anon_sym_vector);
      END_STATE();
    case 32:
      ACCEPT_TOKEN(anon_sym_string);
      END_STATE();
    case 33:
      ACCEPT_TOKEN(anon_sym_int);
      END_STATE();
    case 34:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 35:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 36:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 37:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(37);
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
  [10] = {.lex_state = 1},
  [11] = {.lex_state = 0},
  [12] = {.lex_state = 0},
  [13] = {.lex_state = 0},
  [14] = {.lex_state = 1},
  [15] = {.lex_state = 1},
  [16] = {.lex_state = 0},
  [17] = {.lex_state = 0},
  [18] = {.lex_state = 1},
  [19] = {.lex_state = 1},
  [20] = {.lex_state = 1},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [anon_sym_SEMI] = ACTIONS(1),
    [anon_sym_void] = ACTIONS(1),
    [anon_sym_entity] = ACTIONS(1),
    [anon_sym_float] = ACTIONS(1),
    [anon_sym_vector] = ACTIONS(1),
    [anon_sym_string] = ACTIONS(1),
    [anon_sym_int] = ACTIONS(1),
    [anon_sym_LPAREN] = ACTIONS(1),
    [anon_sym_COMMA] = ACTIONS(1),
    [anon_sym_RPAREN] = ACTIONS(1),
  },
  [1] = {
    [sym_source_file] = STATE(17),
    [sym__definition] = STATE(2),
    [sym_function_declaration] = STATE(2),
    [sym_primitive_type] = STATE(11),
    [aux_sym_source_file_repeat1] = STATE(2),
    [ts_builtin_sym_end] = ACTIONS(3),
    [anon_sym_void] = ACTIONS(5),
    [anon_sym_entity] = ACTIONS(5),
    [anon_sym_float] = ACTIONS(5),
    [anon_sym_vector] = ACTIONS(5),
    [anon_sym_string] = ACTIONS(5),
    [anon_sym_int] = ACTIONS(5),
  },
  [2] = {
    [sym__definition] = STATE(3),
    [sym_function_declaration] = STATE(3),
    [sym_primitive_type] = STATE(11),
    [aux_sym_source_file_repeat1] = STATE(3),
    [ts_builtin_sym_end] = ACTIONS(7),
    [anon_sym_void] = ACTIONS(5),
    [anon_sym_entity] = ACTIONS(5),
    [anon_sym_float] = ACTIONS(5),
    [anon_sym_vector] = ACTIONS(5),
    [anon_sym_string] = ACTIONS(5),
    [anon_sym_int] = ACTIONS(5),
  },
  [3] = {
    [sym__definition] = STATE(3),
    [sym_function_declaration] = STATE(3),
    [sym_primitive_type] = STATE(11),
    [aux_sym_source_file_repeat1] = STATE(3),
    [ts_builtin_sym_end] = ACTIONS(9),
    [anon_sym_void] = ACTIONS(11),
    [anon_sym_entity] = ACTIONS(11),
    [anon_sym_float] = ACTIONS(11),
    [anon_sym_vector] = ACTIONS(11),
    [anon_sym_string] = ACTIONS(11),
    [anon_sym_int] = ACTIONS(11),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 4,
    ACTIONS(14), 1,
      anon_sym_RPAREN,
    STATE(9), 1,
      sym__parameter,
    STATE(14), 1,
      sym_primitive_type,
    ACTIONS(5), 6,
      anon_sym_void,
      anon_sym_entity,
      anon_sym_float,
      anon_sym_vector,
      anon_sym_string,
      anon_sym_int,
  [18] = 3,
    STATE(12), 1,
      sym__parameter,
    STATE(14), 1,
      sym_primitive_type,
    ACTIONS(5), 6,
      anon_sym_void,
      anon_sym_entity,
      anon_sym_float,
      anon_sym_vector,
      anon_sym_string,
      anon_sym_int,
  [33] = 1,
    ACTIONS(16), 7,
      ts_builtin_sym_end,
      anon_sym_void,
      anon_sym_entity,
      anon_sym_float,
      anon_sym_vector,
      anon_sym_string,
      anon_sym_int,
  [43] = 3,
    ACTIONS(18), 1,
      anon_sym_COMMA,
    ACTIONS(20), 1,
      anon_sym_RPAREN,
    STATE(8), 1,
      aux_sym_parameter_list_repeat1,
  [53] = 3,
    ACTIONS(22), 1,
      anon_sym_COMMA,
    ACTIONS(25), 1,
      anon_sym_RPAREN,
    STATE(8), 1,
      aux_sym_parameter_list_repeat1,
  [63] = 3,
    ACTIONS(18), 1,
      anon_sym_COMMA,
    ACTIONS(27), 1,
      anon_sym_RPAREN,
    STATE(7), 1,
      aux_sym_parameter_list_repeat1,
  [73] = 1,
    ACTIONS(29), 2,
      anon_sym_LPAREN,
      sym_identifier,
  [78] = 2,
    ACTIONS(31), 1,
      anon_sym_LPAREN,
    STATE(20), 1,
      sym_parameter_list,
  [85] = 1,
    ACTIONS(25), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [90] = 1,
    ACTIONS(33), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [95] = 1,
    ACTIONS(35), 1,
      sym_identifier,
  [99] = 1,
    ACTIONS(37), 1,
      sym_identifier,
  [103] = 1,
    ACTIONS(39), 1,
      anon_sym_SEMI,
  [107] = 1,
    ACTIONS(41), 1,
      ts_builtin_sym_end,
  [111] = 1,
    ACTIONS(43), 1,
      sym_identifier,
  [115] = 1,
    ACTIONS(45), 1,
      sym_identifier,
  [119] = 1,
    ACTIONS(47), 1,
      sym_identifier,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(4)] = 0,
  [SMALL_STATE(5)] = 18,
  [SMALL_STATE(6)] = 33,
  [SMALL_STATE(7)] = 43,
  [SMALL_STATE(8)] = 53,
  [SMALL_STATE(9)] = 63,
  [SMALL_STATE(10)] = 73,
  [SMALL_STATE(11)] = 78,
  [SMALL_STATE(12)] = 85,
  [SMALL_STATE(13)] = 90,
  [SMALL_STATE(14)] = 95,
  [SMALL_STATE(15)] = 99,
  [SMALL_STATE(16)] = 103,
  [SMALL_STATE(17)] = 107,
  [SMALL_STATE(18)] = 111,
  [SMALL_STATE(19)] = 115,
  [SMALL_STATE(20)] = 119,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [7] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1),
  [9] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2),
  [11] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(10),
  [14] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [16] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_declaration, 4),
  [18] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [20] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [22] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_parameter_list_repeat1, 2), SHIFT_REPEAT(5),
  [25] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_parameter_list_repeat1, 2),
  [27] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [29] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_primitive_type, 1),
  [31] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [33] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__parameter, 2),
  [35] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [37] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter_list, 3),
  [39] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [41] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [43] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter_list, 2),
  [45] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter_list, 4),
  [47] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
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
