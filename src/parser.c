#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 130
#define LARGE_STATE_COUNT 10
#define SYMBOL_COUNT 76
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
  sym_funcall_expression = 66,
  sym_parenthesized_expression = 67,
  sym_literal = 68,
  sym__numeric_literal = 69,
  sym__string_literal = 70,
  aux_sym_source_file_repeat1 = 71,
  aux_sym_variable_definition_repeat1 = 72,
  aux_sym_parameter_list_repeat1 = 73,
  aux_sym__compound_statement_repeat1 = 74,
  aux_sym_funcall_expression_repeat1 = 75,
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
  [sym_funcall_expression] = "funcall_expression",
  [sym_parenthesized_expression] = "parenthesized_expression",
  [sym_literal] = "literal",
  [sym__numeric_literal] = "_numeric_literal",
  [sym__string_literal] = "_string_literal",
  [aux_sym_source_file_repeat1] = "source_file_repeat1",
  [aux_sym_variable_definition_repeat1] = "variable_definition_repeat1",
  [aux_sym_parameter_list_repeat1] = "parameter_list_repeat1",
  [aux_sym__compound_statement_repeat1] = "_compound_statement_repeat1",
  [aux_sym_funcall_expression_repeat1] = "funcall_expression_repeat1",
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
  [sym_funcall_expression] = sym_funcall_expression,
  [sym_parenthesized_expression] = sym_parenthesized_expression,
  [sym_literal] = sym_literal,
  [sym__numeric_literal] = sym__numeric_literal,
  [sym__string_literal] = sym__string_literal,
  [aux_sym_source_file_repeat1] = aux_sym_source_file_repeat1,
  [aux_sym_variable_definition_repeat1] = aux_sym_variable_definition_repeat1,
  [aux_sym_parameter_list_repeat1] = aux_sym_parameter_list_repeat1,
  [aux_sym__compound_statement_repeat1] = aux_sym__compound_statement_repeat1,
  [aux_sym_funcall_expression_repeat1] = aux_sym_funcall_expression_repeat1,
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
      if (lookahead == '(') ADVANCE(96);
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
      if (lookahead == '(') ADVANCE(96);
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
      if (lookahead == ')') ADVANCE(97);
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
  [10] = {.lex_state = 12},
  [11] = {.lex_state = 11},
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
  [29] = {.lex_state = 11},
  [30] = {.lex_state = 13},
  [31] = {.lex_state = 11},
  [32] = {.lex_state = 11},
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
  [43] = {.lex_state = 11},
  [44] = {.lex_state = 13},
  [45] = {.lex_state = 13},
  [46] = {.lex_state = 13},
  [47] = {.lex_state = 13},
  [48] = {.lex_state = 13},
  [49] = {.lex_state = 13},
  [50] = {.lex_state = 11},
  [51] = {.lex_state = 11},
  [52] = {.lex_state = 11},
  [53] = {.lex_state = 11},
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
  [95] = {.lex_state = 13},
  [96] = {.lex_state = 0},
  [97] = {.lex_state = 0},
  [98] = {.lex_state = 0},
  [99] = {.lex_state = 0},
  [100] = {.lex_state = 0},
  [101] = {.lex_state = 0},
  [102] = {.lex_state = 0},
  [103] = {.lex_state = 0},
  [104] = {.lex_state = 0},
  [105] = {.lex_state = 13},
  [106] = {.lex_state = 0},
  [107] = {.lex_state = 0},
  [108] = {.lex_state = 13},
  [109] = {.lex_state = 13},
  [110] = {.lex_state = 13},
  [111] = {.lex_state = 13},
  [112] = {.lex_state = 13},
  [113] = {.lex_state = 13},
  [114] = {.lex_state = 0},
  [115] = {.lex_state = 0},
  [116] = {.lex_state = 13},
  [117] = {.lex_state = 0},
  [118] = {.lex_state = 0},
  [119] = {.lex_state = 13},
  [120] = {.lex_state = 0},
  [121] = {.lex_state = 13},
  [122] = {.lex_state = 13},
  [123] = {.lex_state = 0},
  [124] = {.lex_state = 174},
  [125] = {.lex_state = 0},
  [126] = {.lex_state = 13},
  [127] = {.lex_state = 0},
  [128] = {.lex_state = 13},
  [129] = {.lex_state = 0},
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
    [sym_source_file] = STATE(123),
    [sym__definition] = STATE(55),
    [sym_function_declaration] = STATE(55),
    [sym_function_definition] = STATE(55),
    [sym_constant_definition] = STATE(55),
    [sym_simple_type] = STATE(95),
    [aux_sym_source_file_repeat1] = STATE(55),
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
    [sym_variable_definition] = STATE(117),
    [sym_simple_type] = STATE(108),
    [sym__statement] = STATE(117),
    [sym__compound_statement] = STATE(117),
    [sym__simple_statement] = STATE(117),
    [sym_assignment_statement] = STATE(117),
    [sym_if_statement] = STATE(117),
    [sym_while_statement] = STATE(117),
    [sym_do_while_statement] = STATE(117),
    [sym_return_statement] = STATE(117),
    [sym__variable_definition_statement] = STATE(117),
    [sym__expression_statement] = STATE(117),
    [sym__expression] = STATE(29),
    [sym_unary_expression] = STATE(29),
    [sym_binary_expression] = STATE(29),
    [sym_funcall_expression] = STATE(29),
    [sym_parenthesized_expression] = STATE(29),
    [sym_literal] = STATE(29),
    [sym__numeric_literal] = STATE(21),
    [sym__string_literal] = STATE(21),
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
    [aux_sym__numeric_literal_token3] = ACTIONS(33),
    [aux_sym__numeric_literal_token4] = ACTIONS(33),
    [anon_sym_DQUOTE] = ACTIONS(35),
    [sym__builtin_literal] = ACTIONS(37),
    [sym_comment] = ACTIONS(3),
  },
  [3] = {
    [sym_variable_definition] = STATE(99),
    [sym_simple_type] = STATE(108),
    [sym__statement] = STATE(99),
    [sym__compound_statement] = STATE(99),
    [sym__simple_statement] = STATE(99),
    [sym_assignment_statement] = STATE(99),
    [sym_if_statement] = STATE(99),
    [sym_while_statement] = STATE(99),
    [sym_do_while_statement] = STATE(99),
    [sym_return_statement] = STATE(99),
    [sym__variable_definition_statement] = STATE(99),
    [sym__expression_statement] = STATE(99),
    [sym__expression] = STATE(29),
    [sym_unary_expression] = STATE(29),
    [sym_binary_expression] = STATE(29),
    [sym_funcall_expression] = STATE(29),
    [sym_parenthesized_expression] = STATE(29),
    [sym_literal] = STATE(29),
    [sym__numeric_literal] = STATE(21),
    [sym__string_literal] = STATE(21),
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
    [aux_sym__numeric_literal_token3] = ACTIONS(33),
    [aux_sym__numeric_literal_token4] = ACTIONS(33),
    [anon_sym_DQUOTE] = ACTIONS(35),
    [sym_comment] = ACTIONS(3),
  },
  [4] = {
    [sym_variable_definition] = STATE(98),
    [sym_simple_type] = STATE(108),
    [sym__statement] = STATE(98),
    [sym__compound_statement] = STATE(98),
    [sym__simple_statement] = STATE(98),
    [sym_assignment_statement] = STATE(98),
    [sym_if_statement] = STATE(98),
    [sym_while_statement] = STATE(98),
    [sym_do_while_statement] = STATE(98),
    [sym_return_statement] = STATE(98),
    [sym__variable_definition_statement] = STATE(98),
    [sym__expression_statement] = STATE(98),
    [sym__expression] = STATE(29),
    [sym_unary_expression] = STATE(29),
    [sym_binary_expression] = STATE(29),
    [sym_funcall_expression] = STATE(29),
    [sym_parenthesized_expression] = STATE(29),
    [sym_literal] = STATE(29),
    [sym__numeric_literal] = STATE(21),
    [sym__string_literal] = STATE(21),
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
    [aux_sym__numeric_literal_token3] = ACTIONS(33),
    [aux_sym__numeric_literal_token4] = ACTIONS(33),
    [anon_sym_DQUOTE] = ACTIONS(35),
    [sym_comment] = ACTIONS(3),
  },
  [5] = {
    [sym_variable_definition] = STATE(127),
    [sym_simple_type] = STATE(108),
    [sym__statement] = STATE(127),
    [sym__compound_statement] = STATE(127),
    [sym__simple_statement] = STATE(127),
    [sym_assignment_statement] = STATE(127),
    [sym_if_statement] = STATE(127),
    [sym_while_statement] = STATE(127),
    [sym_do_while_statement] = STATE(127),
    [sym_return_statement] = STATE(127),
    [sym__variable_definition_statement] = STATE(127),
    [sym__expression_statement] = STATE(127),
    [sym__expression] = STATE(29),
    [sym_unary_expression] = STATE(29),
    [sym_binary_expression] = STATE(29),
    [sym_funcall_expression] = STATE(29),
    [sym_parenthesized_expression] = STATE(29),
    [sym_literal] = STATE(29),
    [sym__numeric_literal] = STATE(21),
    [sym__string_literal] = STATE(21),
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
    [aux_sym__numeric_literal_token3] = ACTIONS(33),
    [aux_sym__numeric_literal_token4] = ACTIONS(33),
    [anon_sym_DQUOTE] = ACTIONS(35),
    [sym_comment] = ACTIONS(3),
  },
  [6] = {
    [sym_variable_definition] = STATE(91),
    [sym_simple_type] = STATE(108),
    [sym__statement] = STATE(91),
    [sym__compound_statement] = STATE(91),
    [sym__simple_statement] = STATE(91),
    [sym_assignment_statement] = STATE(91),
    [sym_if_statement] = STATE(91),
    [sym_while_statement] = STATE(91),
    [sym_do_while_statement] = STATE(91),
    [sym_return_statement] = STATE(91),
    [sym__variable_definition_statement] = STATE(91),
    [sym__expression_statement] = STATE(91),
    [sym__expression] = STATE(29),
    [sym_unary_expression] = STATE(29),
    [sym_binary_expression] = STATE(29),
    [sym_funcall_expression] = STATE(29),
    [sym_parenthesized_expression] = STATE(29),
    [sym_literal] = STATE(29),
    [sym__numeric_literal] = STATE(21),
    [sym__string_literal] = STATE(21),
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
    [aux_sym__numeric_literal_token3] = ACTIONS(33),
    [aux_sym__numeric_literal_token4] = ACTIONS(33),
    [anon_sym_DQUOTE] = ACTIONS(35),
    [sym_comment] = ACTIONS(3),
  },
  [7] = {
    [sym_variable_definition] = STATE(125),
    [sym_simple_type] = STATE(108),
    [sym__simple_statement] = STATE(125),
    [sym_assignment_statement] = STATE(125),
    [sym_if_statement] = STATE(125),
    [sym_while_statement] = STATE(125),
    [sym_do_while_statement] = STATE(125),
    [sym_return_statement] = STATE(125),
    [sym__variable_definition_statement] = STATE(125),
    [sym__expression_statement] = STATE(125),
    [sym__expression] = STATE(29),
    [sym_unary_expression] = STATE(29),
    [sym_binary_expression] = STATE(29),
    [sym_funcall_expression] = STATE(29),
    [sym_parenthesized_expression] = STATE(29),
    [sym_literal] = STATE(29),
    [sym__numeric_literal] = STATE(21),
    [sym__string_literal] = STATE(21),
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
    [aux_sym__numeric_literal_token3] = ACTIONS(74),
    [aux_sym__numeric_literal_token4] = ACTIONS(74),
    [anon_sym_DQUOTE] = ACTIONS(77),
    [sym_comment] = ACTIONS(3),
  },
  [8] = {
    [sym_variable_definition] = STATE(125),
    [sym_simple_type] = STATE(108),
    [sym__simple_statement] = STATE(125),
    [sym_assignment_statement] = STATE(125),
    [sym_if_statement] = STATE(125),
    [sym_while_statement] = STATE(125),
    [sym_do_while_statement] = STATE(125),
    [sym_return_statement] = STATE(125),
    [sym__variable_definition_statement] = STATE(125),
    [sym__expression_statement] = STATE(125),
    [sym__expression] = STATE(29),
    [sym_unary_expression] = STATE(29),
    [sym_binary_expression] = STATE(29),
    [sym_funcall_expression] = STATE(29),
    [sym_parenthesized_expression] = STATE(29),
    [sym_literal] = STATE(29),
    [sym__numeric_literal] = STATE(21),
    [sym__string_literal] = STATE(21),
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
    [aux_sym__numeric_literal_token3] = ACTIONS(33),
    [aux_sym__numeric_literal_token4] = ACTIONS(33),
    [anon_sym_DQUOTE] = ACTIONS(35),
    [sym_comment] = ACTIONS(3),
  },
  [9] = {
    [sym_variable_definition] = STATE(125),
    [sym_simple_type] = STATE(108),
    [sym__simple_statement] = STATE(125),
    [sym_assignment_statement] = STATE(125),
    [sym_if_statement] = STATE(125),
    [sym_while_statement] = STATE(125),
    [sym_do_while_statement] = STATE(125),
    [sym_return_statement] = STATE(125),
    [sym__variable_definition_statement] = STATE(125),
    [sym__expression_statement] = STATE(125),
    [sym__expression] = STATE(29),
    [sym_unary_expression] = STATE(29),
    [sym_binary_expression] = STATE(29),
    [sym_funcall_expression] = STATE(29),
    [sym_parenthesized_expression] = STATE(29),
    [sym_literal] = STATE(29),
    [sym__numeric_literal] = STATE(21),
    [sym__string_literal] = STATE(21),
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
    [aux_sym__numeric_literal_token3] = ACTIONS(33),
    [aux_sym__numeric_literal_token4] = ACTIONS(33),
    [anon_sym_DQUOTE] = ACTIONS(35),
    [sym_comment] = ACTIONS(3),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(48), 7,
      anon_sym_LPAREN,
      anon_sym_RBRACE,
      anon_sym_PLUS,
      aux_sym__numeric_literal_token2,
      aux_sym__numeric_literal_token3,
      aux_sym__numeric_literal_token4,
      anon_sym_DQUOTE,
    ACTIONS(84), 14,
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
  [29] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(88), 1,
      anon_sym_LPAREN,
    ACTIONS(90), 6,
      anon_sym_SLASH,
      anon_sym_BANG,
      anon_sym_PIPE,
      anon_sym_AMP,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(86), 14,
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
  [60] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(96), 1,
      anon_sym_STAR,
    ACTIONS(98), 1,
      anon_sym_SLASH,
    ACTIONS(100), 1,
      anon_sym_AMP_AMP,
    ACTIONS(102), 1,
      anon_sym_BANG,
    ACTIONS(104), 1,
      anon_sym_PIPE,
    ACTIONS(106), 1,
      anon_sym_AMP,
    ACTIONS(94), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(110), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(108), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
    ACTIONS(92), 6,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_else,
      anon_sym_while,
      anon_sym_PIPE_PIPE,
  [104] = 3,
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
  [132] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(96), 1,
      anon_sym_STAR,
    ACTIONS(98), 1,
      anon_sym_SLASH,
    ACTIONS(106), 1,
      anon_sym_AMP,
    ACTIONS(116), 4,
      anon_sym_BANG,
      anon_sym_PIPE,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(92), 13,
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
  [166] = 3,
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
  [194] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(96), 1,
      anon_sym_STAR,
    ACTIONS(98), 1,
      anon_sym_SLASH,
    ACTIONS(102), 1,
      anon_sym_BANG,
    ACTIONS(104), 1,
      anon_sym_PIPE,
    ACTIONS(106), 1,
      anon_sym_AMP,
    ACTIONS(94), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(110), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(108), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
    ACTIONS(92), 7,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_else,
      anon_sym_while,
      anon_sym_PIPE_PIPE,
      anon_sym_AMP_AMP,
  [236] = 3,
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
  [264] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(88), 1,
      anon_sym_LPAREN,
    ACTIONS(126), 1,
      anon_sym_EQ,
    ACTIONS(90), 6,
      anon_sym_SLASH,
      anon_sym_BANG,
      anon_sym_PIPE,
      anon_sym_AMP,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(86), 12,
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
  [296] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(96), 1,
      anon_sym_STAR,
    ACTIONS(98), 1,
      anon_sym_SLASH,
    ACTIONS(104), 1,
      anon_sym_PIPE,
    ACTIONS(106), 1,
      anon_sym_AMP,
    ACTIONS(116), 1,
      anon_sym_BANG,
    ACTIONS(94), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(110), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(108), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
    ACTIONS(92), 7,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_else,
      anon_sym_while,
      anon_sym_PIPE_PIPE,
      anon_sym_AMP_AMP,
  [338] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(116), 6,
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
  [366] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(130), 6,
      anon_sym_SLASH,
      anon_sym_BANG,
      anon_sym_PIPE,
      anon_sym_AMP,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(128), 14,
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
  [394] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(134), 6,
      anon_sym_SLASH,
      anon_sym_BANG,
      anon_sym_PIPE,
      anon_sym_AMP,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(132), 14,
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
  [422] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(96), 1,
      anon_sym_STAR,
    ACTIONS(98), 1,
      anon_sym_SLASH,
    ACTIONS(104), 1,
      anon_sym_PIPE,
    ACTIONS(106), 1,
      anon_sym_AMP,
    ACTIONS(116), 3,
      anon_sym_BANG,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(92), 13,
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
  [458] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(138), 6,
      anon_sym_SLASH,
      anon_sym_BANG,
      anon_sym_PIPE,
      anon_sym_AMP,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(136), 14,
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
  [486] = 3,
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
  [514] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(96), 1,
      anon_sym_STAR,
    ACTIONS(98), 1,
      anon_sym_SLASH,
    ACTIONS(104), 1,
      anon_sym_PIPE,
    ACTIONS(106), 1,
      anon_sym_AMP,
    ACTIONS(94), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(116), 3,
      anon_sym_BANG,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(92), 11,
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
  [552] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(96), 1,
      anon_sym_STAR,
    ACTIONS(98), 1,
      anon_sym_SLASH,
    ACTIONS(116), 5,
      anon_sym_BANG,
      anon_sym_PIPE,
      anon_sym_AMP,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(92), 13,
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
  [584] = 14,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(96), 1,
      anon_sym_STAR,
    ACTIONS(98), 1,
      anon_sym_SLASH,
    ACTIONS(100), 1,
      anon_sym_AMP_AMP,
    ACTIONS(102), 1,
      anon_sym_BANG,
    ACTIONS(104), 1,
      anon_sym_PIPE,
    ACTIONS(106), 1,
      anon_sym_AMP,
    ACTIONS(144), 1,
      anon_sym_COMMA,
    ACTIONS(146), 1,
      anon_sym_RPAREN,
    ACTIONS(148), 1,
      anon_sym_PIPE_PIPE,
    STATE(97), 1,
      aux_sym_funcall_expression_repeat1,
    ACTIONS(94), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(110), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(108), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
  [632] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(96), 1,
      anon_sym_STAR,
    ACTIONS(98), 1,
      anon_sym_SLASH,
    ACTIONS(100), 1,
      anon_sym_AMP_AMP,
    ACTIONS(102), 1,
      anon_sym_BANG,
    ACTIONS(104), 1,
      anon_sym_PIPE,
    ACTIONS(106), 1,
      anon_sym_AMP,
    ACTIONS(148), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(94), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(110), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(150), 3,
      anon_sym_SEMI,
      anon_sym_else,
      anon_sym_while,
    ACTIONS(108), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
  [676] = 11,
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
    ACTIONS(152), 1,
      anon_sym_RPAREN,
    ACTIONS(154), 1,
      sym_identifier,
    STATE(21), 2,
      sym__numeric_literal,
      sym__string_literal,
    ACTIONS(33), 3,
      aux_sym__numeric_literal_token2,
      aux_sym__numeric_literal_token3,
      aux_sym__numeric_literal_token4,
    STATE(28), 6,
      sym__expression,
      sym_unary_expression,
      sym_binary_expression,
      sym_funcall_expression,
      sym_parenthesized_expression,
      sym_literal,
  [718] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(96), 1,
      anon_sym_STAR,
    ACTIONS(98), 1,
      anon_sym_SLASH,
    ACTIONS(100), 1,
      anon_sym_AMP_AMP,
    ACTIONS(102), 1,
      anon_sym_BANG,
    ACTIONS(104), 1,
      anon_sym_PIPE,
    ACTIONS(106), 1,
      anon_sym_AMP,
    ACTIONS(148), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(94), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(110), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(156), 3,
      anon_sym_SEMI,
      anon_sym_else,
      anon_sym_while,
    ACTIONS(108), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
  [762] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(96), 1,
      anon_sym_STAR,
    ACTIONS(98), 1,
      anon_sym_SLASH,
    ACTIONS(100), 1,
      anon_sym_AMP_AMP,
    ACTIONS(102), 1,
      anon_sym_BANG,
    ACTIONS(104), 1,
      anon_sym_PIPE,
    ACTIONS(106), 1,
      anon_sym_AMP,
    ACTIONS(148), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(94), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(110), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(158), 3,
      anon_sym_SEMI,
      anon_sym_else,
      anon_sym_while,
    ACTIONS(108), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
  [806] = 10,
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
    ACTIONS(154), 1,
      sym_identifier,
    STATE(21), 2,
      sym__numeric_literal,
      sym__string_literal,
    ACTIONS(33), 3,
      aux_sym__numeric_literal_token2,
      aux_sym__numeric_literal_token3,
      aux_sym__numeric_literal_token4,
    STATE(12), 6,
      sym__expression,
      sym_unary_expression,
      sym_binary_expression,
      sym_funcall_expression,
      sym_parenthesized_expression,
      sym_literal,
  [845] = 10,
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
    ACTIONS(154), 1,
      sym_identifier,
    STATE(21), 2,
      sym__numeric_literal,
      sym__string_literal,
    ACTIONS(33), 3,
      aux_sym__numeric_literal_token2,
      aux_sym__numeric_literal_token3,
      aux_sym__numeric_literal_token4,
    STATE(19), 6,
      sym__expression,
      sym_unary_expression,
      sym_binary_expression,
      sym_funcall_expression,
      sym_parenthesized_expression,
      sym_literal,
  [884] = 10,
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
    ACTIONS(154), 1,
      sym_identifier,
    STATE(21), 2,
      sym__numeric_literal,
      sym__string_literal,
    ACTIONS(33), 3,
      aux_sym__numeric_literal_token2,
      aux_sym__numeric_literal_token3,
      aux_sym__numeric_literal_token4,
    STATE(50), 6,
      sym__expression,
      sym_unary_expression,
      sym_binary_expression,
      sym_funcall_expression,
      sym_parenthesized_expression,
      sym_literal,
  [923] = 10,
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
    ACTIONS(154), 1,
      sym_identifier,
    STATE(21), 2,
      sym__numeric_literal,
      sym__string_literal,
    ACTIONS(33), 3,
      aux_sym__numeric_literal_token2,
      aux_sym__numeric_literal_token3,
      aux_sym__numeric_literal_token4,
    STATE(31), 6,
      sym__expression,
      sym_unary_expression,
      sym_binary_expression,
      sym_funcall_expression,
      sym_parenthesized_expression,
      sym_literal,
  [962] = 10,
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
    ACTIONS(154), 1,
      sym_identifier,
    STATE(21), 2,
      sym__numeric_literal,
      sym__string_literal,
    ACTIONS(33), 3,
      aux_sym__numeric_literal_token2,
      aux_sym__numeric_literal_token3,
      aux_sym__numeric_literal_token4,
    STATE(24), 6,
      sym__expression,
      sym_unary_expression,
      sym_binary_expression,
      sym_funcall_expression,
      sym_parenthesized_expression,
      sym_literal,
  [1001] = 10,
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
    ACTIONS(154), 1,
      sym_identifier,
    STATE(21), 2,
      sym__numeric_literal,
      sym__string_literal,
    ACTIONS(33), 3,
      aux_sym__numeric_literal_token2,
      aux_sym__numeric_literal_token3,
      aux_sym__numeric_literal_token4,
    STATE(32), 6,
      sym__expression,
      sym_unary_expression,
      sym_binary_expression,
      sym_funcall_expression,
      sym_parenthesized_expression,
      sym_literal,
  [1040] = 10,
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
    ACTIONS(154), 1,
      sym_identifier,
    STATE(21), 2,
      sym__numeric_literal,
      sym__string_literal,
    ACTIONS(33), 3,
      aux_sym__numeric_literal_token2,
      aux_sym__numeric_literal_token3,
      aux_sym__numeric_literal_token4,
    STATE(43), 6,
      sym__expression,
      sym_unary_expression,
      sym_binary_expression,
      sym_funcall_expression,
      sym_parenthesized_expression,
      sym_literal,
  [1079] = 10,
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
    ACTIONS(154), 1,
      sym_identifier,
    STATE(21), 2,
      sym__numeric_literal,
      sym__string_literal,
    ACTIONS(33), 3,
      aux_sym__numeric_literal_token2,
      aux_sym__numeric_literal_token3,
      aux_sym__numeric_literal_token4,
    STATE(26), 6,
      sym__expression,
      sym_unary_expression,
      sym_binary_expression,
      sym_funcall_expression,
      sym_parenthesized_expression,
      sym_literal,
  [1118] = 10,
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
    ACTIONS(154), 1,
      sym_identifier,
    STATE(21), 2,
      sym__numeric_literal,
      sym__string_literal,
    ACTIONS(33), 3,
      aux_sym__numeric_literal_token2,
      aux_sym__numeric_literal_token3,
      aux_sym__numeric_literal_token4,
    STATE(27), 6,
      sym__expression,
      sym_unary_expression,
      sym_binary_expression,
      sym_funcall_expression,
      sym_parenthesized_expression,
      sym_literal,
  [1157] = 10,
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
    ACTIONS(154), 1,
      sym_identifier,
    STATE(21), 2,
      sym__numeric_literal,
      sym__string_literal,
    ACTIONS(33), 3,
      aux_sym__numeric_literal_token2,
      aux_sym__numeric_literal_token3,
      aux_sym__numeric_literal_token4,
    STATE(14), 6,
      sym__expression,
      sym_unary_expression,
      sym_binary_expression,
      sym_funcall_expression,
      sym_parenthesized_expression,
      sym_literal,
  [1196] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(96), 1,
      anon_sym_STAR,
    ACTIONS(98), 1,
      anon_sym_SLASH,
    ACTIONS(100), 1,
      anon_sym_AMP_AMP,
    ACTIONS(102), 1,
      anon_sym_BANG,
    ACTIONS(104), 1,
      anon_sym_PIPE,
    ACTIONS(106), 1,
      anon_sym_AMP,
    ACTIONS(148), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(94), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(110), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(160), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
    ACTIONS(108), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
  [1239] = 10,
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
    ACTIONS(154), 1,
      sym_identifier,
    STATE(21), 2,
      sym__numeric_literal,
      sym__string_literal,
    ACTIONS(33), 3,
      aux_sym__numeric_literal_token2,
      aux_sym__numeric_literal_token3,
      aux_sym__numeric_literal_token4,
    STATE(16), 6,
      sym__expression,
      sym_unary_expression,
      sym_binary_expression,
      sym_funcall_expression,
      sym_parenthesized_expression,
      sym_literal,
  [1278] = 10,
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
    ACTIONS(154), 1,
      sym_identifier,
    STATE(21), 2,
      sym__numeric_literal,
      sym__string_literal,
    ACTIONS(33), 3,
      aux_sym__numeric_literal_token2,
      aux_sym__numeric_literal_token3,
      aux_sym__numeric_literal_token4,
    STATE(51), 6,
      sym__expression,
      sym_unary_expression,
      sym_binary_expression,
      sym_funcall_expression,
      sym_parenthesized_expression,
      sym_literal,
  [1317] = 10,
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
    ACTIONS(154), 1,
      sym_identifier,
    STATE(21), 2,
      sym__numeric_literal,
      sym__string_literal,
    ACTIONS(33), 3,
      aux_sym__numeric_literal_token2,
      aux_sym__numeric_literal_token3,
      aux_sym__numeric_literal_token4,
    STATE(20), 6,
      sym__expression,
      sym_unary_expression,
      sym_binary_expression,
      sym_funcall_expression,
      sym_parenthesized_expression,
      sym_literal,
  [1356] = 10,
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
    ACTIONS(154), 1,
      sym_identifier,
    STATE(21), 2,
      sym__numeric_literal,
      sym__string_literal,
    ACTIONS(33), 3,
      aux_sym__numeric_literal_token2,
      aux_sym__numeric_literal_token3,
      aux_sym__numeric_literal_token4,
    STATE(23), 6,
      sym__expression,
      sym_unary_expression,
      sym_binary_expression,
      sym_funcall_expression,
      sym_parenthesized_expression,
      sym_literal,
  [1395] = 10,
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
    ACTIONS(154), 1,
      sym_identifier,
    STATE(21), 2,
      sym__numeric_literal,
      sym__string_literal,
    ACTIONS(33), 3,
      aux_sym__numeric_literal_token2,
      aux_sym__numeric_literal_token3,
      aux_sym__numeric_literal_token4,
    STATE(52), 6,
      sym__expression,
      sym_unary_expression,
      sym_binary_expression,
      sym_funcall_expression,
      sym_parenthesized_expression,
      sym_literal,
  [1434] = 10,
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
    ACTIONS(154), 1,
      sym_identifier,
    STATE(21), 2,
      sym__numeric_literal,
      sym__string_literal,
    ACTIONS(33), 3,
      aux_sym__numeric_literal_token2,
      aux_sym__numeric_literal_token3,
      aux_sym__numeric_literal_token4,
    STATE(53), 6,
      sym__expression,
      sym_unary_expression,
      sym_binary_expression,
      sym_funcall_expression,
      sym_parenthesized_expression,
      sym_literal,
  [1473] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(96), 1,
      anon_sym_STAR,
    ACTIONS(98), 1,
      anon_sym_SLASH,
    ACTIONS(100), 1,
      anon_sym_AMP_AMP,
    ACTIONS(102), 1,
      anon_sym_BANG,
    ACTIONS(104), 1,
      anon_sym_PIPE,
    ACTIONS(106), 1,
      anon_sym_AMP,
    ACTIONS(148), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(162), 1,
      anon_sym_RPAREN,
    ACTIONS(94), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(110), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(108), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
  [1515] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(96), 1,
      anon_sym_STAR,
    ACTIONS(98), 1,
      anon_sym_SLASH,
    ACTIONS(100), 1,
      anon_sym_AMP_AMP,
    ACTIONS(102), 1,
      anon_sym_BANG,
    ACTIONS(104), 1,
      anon_sym_PIPE,
    ACTIONS(106), 1,
      anon_sym_AMP,
    ACTIONS(148), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(164), 1,
      anon_sym_RPAREN,
    ACTIONS(94), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(110), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(108), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
  [1557] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(96), 1,
      anon_sym_STAR,
    ACTIONS(98), 1,
      anon_sym_SLASH,
    ACTIONS(100), 1,
      anon_sym_AMP_AMP,
    ACTIONS(102), 1,
      anon_sym_BANG,
    ACTIONS(104), 1,
      anon_sym_PIPE,
    ACTIONS(106), 1,
      anon_sym_AMP,
    ACTIONS(148), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(166), 1,
      anon_sym_RPAREN,
    ACTIONS(94), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(110), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(108), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
  [1599] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(96), 1,
      anon_sym_STAR,
    ACTIONS(98), 1,
      anon_sym_SLASH,
    ACTIONS(100), 1,
      anon_sym_AMP_AMP,
    ACTIONS(102), 1,
      anon_sym_BANG,
    ACTIONS(104), 1,
      anon_sym_PIPE,
    ACTIONS(106), 1,
      anon_sym_AMP,
    ACTIONS(148), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(168), 1,
      anon_sym_RPAREN,
    ACTIONS(94), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(110), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(108), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
  [1641] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(170), 1,
      ts_builtin_sym_end,
    STATE(95), 1,
      sym_simple_type,
    STATE(54), 5,
      sym__definition,
      sym_function_declaration,
      sym_function_definition,
      sym_constant_definition,
      aux_sym_source_file_repeat1,
    ACTIONS(172), 6,
      anon_sym_void,
      anon_sym_entity,
      anon_sym_float,
      anon_sym_vector,
      anon_sym_string,
      anon_sym_int,
  [1666] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(175), 1,
      ts_builtin_sym_end,
    STATE(95), 1,
      sym_simple_type,
    STATE(54), 5,
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
  [1691] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(177), 1,
      anon_sym_RPAREN,
    STATE(102), 1,
      sym__parameter,
    STATE(119), 1,
      sym_simple_type,
    ACTIONS(7), 6,
      anon_sym_void,
      anon_sym_entity,
      anon_sym_float,
      anon_sym_vector,
      anon_sym_string,
      anon_sym_int,
  [1712] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(31), 1,
      aux_sym__numeric_literal_token1,
    ACTIONS(35), 1,
      anon_sym_DQUOTE,
    STATE(81), 1,
      sym_literal,
    STATE(21), 2,
      sym__numeric_literal,
      sym__string_literal,
    ACTIONS(33), 3,
      aux_sym__numeric_literal_token2,
      aux_sym__numeric_literal_token3,
      aux_sym__numeric_literal_token4,
  [1734] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(31), 1,
      aux_sym__numeric_literal_token1,
    ACTIONS(35), 1,
      anon_sym_DQUOTE,
    STATE(76), 1,
      sym_literal,
    STATE(21), 2,
      sym__numeric_literal,
      sym__string_literal,
    ACTIONS(33), 3,
      aux_sym__numeric_literal_token2,
      aux_sym__numeric_literal_token3,
      aux_sym__numeric_literal_token4,
  [1756] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(31), 1,
      aux_sym__numeric_literal_token1,
    ACTIONS(35), 1,
      anon_sym_DQUOTE,
    STATE(89), 1,
      sym_literal,
    STATE(21), 2,
      sym__numeric_literal,
      sym__string_literal,
    ACTIONS(33), 3,
      aux_sym__numeric_literal_token2,
      aux_sym__numeric_literal_token3,
      aux_sym__numeric_literal_token4,
  [1778] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(31), 1,
      aux_sym__numeric_literal_token1,
    ACTIONS(35), 1,
      anon_sym_DQUOTE,
    STATE(90), 1,
      sym_literal,
    STATE(21), 2,
      sym__numeric_literal,
      sym__string_literal,
    ACTIONS(33), 3,
      aux_sym__numeric_literal_token2,
      aux_sym__numeric_literal_token3,
      aux_sym__numeric_literal_token4,
  [1800] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(31), 1,
      aux_sym__numeric_literal_token1,
    ACTIONS(35), 1,
      anon_sym_DQUOTE,
    STATE(84), 1,
      sym_literal,
    STATE(21), 2,
      sym__numeric_literal,
      sym__string_literal,
    ACTIONS(33), 3,
      aux_sym__numeric_literal_token2,
      aux_sym__numeric_literal_token3,
      aux_sym__numeric_literal_token4,
  [1822] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(31), 1,
      aux_sym__numeric_literal_token1,
    ACTIONS(35), 1,
      anon_sym_DQUOTE,
    STATE(129), 1,
      sym_literal,
    STATE(21), 2,
      sym__numeric_literal,
      sym__string_literal,
    ACTIONS(33), 3,
      aux_sym__numeric_literal_token2,
      aux_sym__numeric_literal_token3,
      aux_sym__numeric_literal_token4,
  [1844] = 4,
    ACTIONS(3), 1,
      sym_comment,
    STATE(104), 1,
      sym__parameter,
    STATE(119), 1,
      sym_simple_type,
    ACTIONS(7), 6,
      anon_sym_void,
      anon_sym_entity,
      anon_sym_float,
      anon_sym_vector,
      anon_sym_string,
      anon_sym_int,
  [1862] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(31), 1,
      aux_sym__numeric_literal_token1,
    ACTIONS(35), 1,
      anon_sym_DQUOTE,
    STATE(78), 1,
      sym_literal,
    STATE(21), 2,
      sym__numeric_literal,
      sym__string_literal,
    ACTIONS(33), 3,
      aux_sym__numeric_literal_token2,
      aux_sym__numeric_literal_token3,
      aux_sym__numeric_literal_token4,
  [1884] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(31), 1,
      aux_sym__numeric_literal_token1,
    ACTIONS(35), 1,
      anon_sym_DQUOTE,
    STATE(88), 1,
      sym_literal,
    STATE(21), 2,
      sym__numeric_literal,
      sym__string_literal,
    ACTIONS(33), 3,
      aux_sym__numeric_literal_token2,
      aux_sym__numeric_literal_token3,
      aux_sym__numeric_literal_token4,
  [1906] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(179), 7,
      ts_builtin_sym_end,
      anon_sym_void,
      anon_sym_entity,
      anon_sym_float,
      anon_sym_vector,
      anon_sym_string,
      anon_sym_int,
  [1919] = 3,
    ACTIONS(3), 1,
      sym_comment,
    STATE(121), 1,
      sym_simple_type,
    ACTIONS(7), 6,
      anon_sym_void,
      anon_sym_entity,
      anon_sym_float,
      anon_sym_vector,
      anon_sym_string,
      anon_sym_int,
  [1934] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(181), 7,
      ts_builtin_sym_end,
      anon_sym_void,
      anon_sym_entity,
      anon_sym_float,
      anon_sym_vector,
      anon_sym_string,
      anon_sym_int,
  [1947] = 2,
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
  [1960] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(187), 1,
      anon_sym_EQ,
    ACTIONS(189), 1,
      anon_sym_COMMA,
    STATE(85), 1,
      aux_sym_variable_definition_repeat1,
    ACTIONS(185), 3,
      anon_sym_SEMI,
      anon_sym_else,
      anon_sym_while,
  [1978] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(189), 1,
      anon_sym_COMMA,
    ACTIONS(193), 1,
      anon_sym_EQ,
    STATE(86), 1,
      aux_sym_variable_definition_repeat1,
    ACTIONS(191), 3,
      anon_sym_SEMI,
      anon_sym_else,
      anon_sym_while,
  [1996] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(189), 1,
      anon_sym_COMMA,
    ACTIONS(197), 1,
      anon_sym_EQ,
    STATE(79), 1,
      aux_sym_variable_definition_repeat1,
    ACTIONS(195), 3,
      anon_sym_SEMI,
      anon_sym_else,
      anon_sym_while,
  [2014] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(189), 1,
      anon_sym_COMMA,
    ACTIONS(201), 1,
      anon_sym_EQ,
    STATE(80), 1,
      aux_sym_variable_definition_repeat1,
    ACTIONS(199), 3,
      anon_sym_SEMI,
      anon_sym_else,
      anon_sym_while,
  [2032] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(189), 1,
      anon_sym_COMMA,
    STATE(82), 1,
      aux_sym_variable_definition_repeat1,
    ACTIONS(203), 3,
      anon_sym_SEMI,
      anon_sym_else,
      anon_sym_while,
  [2047] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(189), 1,
      anon_sym_COMMA,
    STATE(82), 1,
      aux_sym_variable_definition_repeat1,
    ACTIONS(205), 3,
      anon_sym_SEMI,
      anon_sym_else,
      anon_sym_while,
  [2062] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(189), 1,
      anon_sym_COMMA,
    STATE(74), 1,
      aux_sym_variable_definition_repeat1,
    ACTIONS(205), 3,
      anon_sym_SEMI,
      anon_sym_else,
      anon_sym_while,
  [2077] = 4,
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
  [2092] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(189), 1,
      anon_sym_COMMA,
    STATE(75), 1,
      aux_sym_variable_definition_repeat1,
    ACTIONS(213), 3,
      anon_sym_SEMI,
      anon_sym_else,
      anon_sym_while,
  [2107] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(189), 1,
      anon_sym_COMMA,
    STATE(82), 1,
      aux_sym_variable_definition_repeat1,
    ACTIONS(213), 3,
      anon_sym_SEMI,
      anon_sym_else,
      anon_sym_while,
  [2122] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(189), 1,
      anon_sym_COMMA,
    STATE(82), 1,
      aux_sym_variable_definition_repeat1,
    ACTIONS(195), 3,
      anon_sym_SEMI,
      anon_sym_else,
      anon_sym_while,
  [2137] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(189), 1,
      anon_sym_COMMA,
    STATE(79), 1,
      aux_sym_variable_definition_repeat1,
    ACTIONS(195), 3,
      anon_sym_SEMI,
      anon_sym_else,
      anon_sym_while,
  [2152] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(217), 1,
      anon_sym_COMMA,
    STATE(82), 1,
      aux_sym_variable_definition_repeat1,
    ACTIONS(215), 3,
      anon_sym_SEMI,
      anon_sym_else,
      anon_sym_while,
  [2167] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(220), 1,
      anon_sym_EQ,
    ACTIONS(215), 4,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_else,
      anon_sym_while,
  [2180] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(189), 1,
      anon_sym_COMMA,
    STATE(80), 1,
      aux_sym_variable_definition_repeat1,
    ACTIONS(199), 3,
      anon_sym_SEMI,
      anon_sym_else,
      anon_sym_while,
  [2195] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(189), 1,
      anon_sym_COMMA,
    STATE(82), 1,
      aux_sym_variable_definition_repeat1,
    ACTIONS(199), 3,
      anon_sym_SEMI,
      anon_sym_else,
      anon_sym_while,
  [2210] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(189), 1,
      anon_sym_COMMA,
    STATE(82), 1,
      aux_sym_variable_definition_repeat1,
    ACTIONS(185), 3,
      anon_sym_SEMI,
      anon_sym_else,
      anon_sym_while,
  [2225] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(224), 1,
      anon_sym_EQ,
    ACTIONS(226), 1,
      anon_sym_COMMA,
    ACTIONS(222), 3,
      anon_sym_SEMI,
      anon_sym_else,
      anon_sym_while,
  [2240] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(228), 4,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_else,
      anon_sym_while,
  [2250] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(230), 1,
      anon_sym_COMMA,
    ACTIONS(185), 3,
      anon_sym_SEMI,
      anon_sym_else,
      anon_sym_while,
  [2262] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(232), 1,
      anon_sym_COMMA,
    ACTIONS(191), 3,
      anon_sym_SEMI,
      anon_sym_else,
      anon_sym_while,
  [2274] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(234), 3,
      anon_sym_SEMI,
      anon_sym_else,
      anon_sym_while,
  [2283] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(160), 1,
      anon_sym_RPAREN,
    ACTIONS(236), 1,
      anon_sym_COMMA,
    STATE(92), 1,
      aux_sym_funcall_expression_repeat1,
  [2296] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(239), 3,
      anon_sym_SEMI,
      anon_sym_else,
      anon_sym_while,
  [2305] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(241), 3,
      anon_sym_SEMI,
      anon_sym_else,
      anon_sym_while,
  [2314] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(243), 1,
      anon_sym_LPAREN,
    ACTIONS(245), 1,
      sym_identifier,
    STATE(112), 1,
      sym_parameter_list,
  [2327] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(247), 1,
      anon_sym_COMMA,
    ACTIONS(249), 1,
      anon_sym_RPAREN,
    STATE(100), 1,
      aux_sym_parameter_list_repeat1,
  [2340] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(144), 1,
      anon_sym_COMMA,
    ACTIONS(251), 1,
      anon_sym_RPAREN,
    STATE(92), 1,
      aux_sym_funcall_expression_repeat1,
  [2353] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(253), 3,
      anon_sym_SEMI,
      anon_sym_else,
      anon_sym_while,
  [2362] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(257), 1,
      anon_sym_else,
    ACTIONS(255), 2,
      anon_sym_SEMI,
      anon_sym_while,
  [2373] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(259), 1,
      anon_sym_COMMA,
    ACTIONS(262), 1,
      anon_sym_RPAREN,
    STATE(100), 1,
      aux_sym_parameter_list_repeat1,
  [2386] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(264), 3,
      anon_sym_SEMI,
      anon_sym_else,
      anon_sym_while,
  [2395] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(247), 1,
      anon_sym_COMMA,
    ACTIONS(266), 1,
      anon_sym_RPAREN,
    STATE(96), 1,
      aux_sym_parameter_list_repeat1,
  [2408] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(268), 1,
      anon_sym_SEMI,
    ACTIONS(270), 1,
      anon_sym_EQ,
  [2418] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(262), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [2426] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(272), 2,
      anon_sym_LPAREN,
      sym_identifier,
  [2434] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(274), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [2442] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(276), 1,
      anon_sym_LPAREN,
  [2449] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(278), 1,
      sym_identifier,
  [2456] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(280), 1,
      sym_identifier,
  [2463] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(282), 1,
      sym_identifier,
  [2470] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(284), 1,
      sym_identifier,
  [2477] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(286), 1,
      sym_identifier,
  [2484] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(288), 1,
      sym_identifier,
  [2491] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(290), 1,
      anon_sym_DQUOTE,
  [2498] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(292), 1,
      anon_sym_LPAREN,
  [2505] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(294), 1,
      sym_identifier,
  [2512] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(296), 1,
      anon_sym_SEMI,
  [2519] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(298), 1,
      anon_sym_LPAREN,
  [2526] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(300), 1,
      sym_identifier,
  [2533] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(302), 1,
      anon_sym_EQ,
  [2540] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(304), 1,
      sym_identifier,
  [2547] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(306), 1,
      sym_identifier,
  [2554] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(308), 1,
      ts_builtin_sym_end,
  [2561] = 2,
    ACTIONS(310), 1,
      aux_sym__string_literal_token1,
    ACTIONS(312), 1,
      sym_comment,
  [2568] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(314), 1,
      anon_sym_SEMI,
  [2575] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(316), 1,
      sym_identifier,
  [2582] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(318), 1,
      anon_sym_while,
  [2589] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(320), 1,
      sym_identifier,
  [2596] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(322), 1,
      anon_sym_SEMI,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(10)] = 0,
  [SMALL_STATE(11)] = 29,
  [SMALL_STATE(12)] = 60,
  [SMALL_STATE(13)] = 104,
  [SMALL_STATE(14)] = 132,
  [SMALL_STATE(15)] = 166,
  [SMALL_STATE(16)] = 194,
  [SMALL_STATE(17)] = 236,
  [SMALL_STATE(18)] = 264,
  [SMALL_STATE(19)] = 296,
  [SMALL_STATE(20)] = 338,
  [SMALL_STATE(21)] = 366,
  [SMALL_STATE(22)] = 394,
  [SMALL_STATE(23)] = 422,
  [SMALL_STATE(24)] = 458,
  [SMALL_STATE(25)] = 486,
  [SMALL_STATE(26)] = 514,
  [SMALL_STATE(27)] = 552,
  [SMALL_STATE(28)] = 584,
  [SMALL_STATE(29)] = 632,
  [SMALL_STATE(30)] = 676,
  [SMALL_STATE(31)] = 718,
  [SMALL_STATE(32)] = 762,
  [SMALL_STATE(33)] = 806,
  [SMALL_STATE(34)] = 845,
  [SMALL_STATE(35)] = 884,
  [SMALL_STATE(36)] = 923,
  [SMALL_STATE(37)] = 962,
  [SMALL_STATE(38)] = 1001,
  [SMALL_STATE(39)] = 1040,
  [SMALL_STATE(40)] = 1079,
  [SMALL_STATE(41)] = 1118,
  [SMALL_STATE(42)] = 1157,
  [SMALL_STATE(43)] = 1196,
  [SMALL_STATE(44)] = 1239,
  [SMALL_STATE(45)] = 1278,
  [SMALL_STATE(46)] = 1317,
  [SMALL_STATE(47)] = 1356,
  [SMALL_STATE(48)] = 1395,
  [SMALL_STATE(49)] = 1434,
  [SMALL_STATE(50)] = 1473,
  [SMALL_STATE(51)] = 1515,
  [SMALL_STATE(52)] = 1557,
  [SMALL_STATE(53)] = 1599,
  [SMALL_STATE(54)] = 1641,
  [SMALL_STATE(55)] = 1666,
  [SMALL_STATE(56)] = 1691,
  [SMALL_STATE(57)] = 1712,
  [SMALL_STATE(58)] = 1734,
  [SMALL_STATE(59)] = 1756,
  [SMALL_STATE(60)] = 1778,
  [SMALL_STATE(61)] = 1800,
  [SMALL_STATE(62)] = 1822,
  [SMALL_STATE(63)] = 1844,
  [SMALL_STATE(64)] = 1862,
  [SMALL_STATE(65)] = 1884,
  [SMALL_STATE(66)] = 1906,
  [SMALL_STATE(67)] = 1919,
  [SMALL_STATE(68)] = 1934,
  [SMALL_STATE(69)] = 1947,
  [SMALL_STATE(70)] = 1960,
  [SMALL_STATE(71)] = 1978,
  [SMALL_STATE(72)] = 1996,
  [SMALL_STATE(73)] = 2014,
  [SMALL_STATE(74)] = 2032,
  [SMALL_STATE(75)] = 2047,
  [SMALL_STATE(76)] = 2062,
  [SMALL_STATE(77)] = 2077,
  [SMALL_STATE(78)] = 2092,
  [SMALL_STATE(79)] = 2107,
  [SMALL_STATE(80)] = 2122,
  [SMALL_STATE(81)] = 2137,
  [SMALL_STATE(82)] = 2152,
  [SMALL_STATE(83)] = 2167,
  [SMALL_STATE(84)] = 2180,
  [SMALL_STATE(85)] = 2195,
  [SMALL_STATE(86)] = 2210,
  [SMALL_STATE(87)] = 2225,
  [SMALL_STATE(88)] = 2240,
  [SMALL_STATE(89)] = 2250,
  [SMALL_STATE(90)] = 2262,
  [SMALL_STATE(91)] = 2274,
  [SMALL_STATE(92)] = 2283,
  [SMALL_STATE(93)] = 2296,
  [SMALL_STATE(94)] = 2305,
  [SMALL_STATE(95)] = 2314,
  [SMALL_STATE(96)] = 2327,
  [SMALL_STATE(97)] = 2340,
  [SMALL_STATE(98)] = 2353,
  [SMALL_STATE(99)] = 2362,
  [SMALL_STATE(100)] = 2373,
  [SMALL_STATE(101)] = 2386,
  [SMALL_STATE(102)] = 2395,
  [SMALL_STATE(103)] = 2408,
  [SMALL_STATE(104)] = 2418,
  [SMALL_STATE(105)] = 2426,
  [SMALL_STATE(106)] = 2434,
  [SMALL_STATE(107)] = 2442,
  [SMALL_STATE(108)] = 2449,
  [SMALL_STATE(109)] = 2456,
  [SMALL_STATE(110)] = 2463,
  [SMALL_STATE(111)] = 2470,
  [SMALL_STATE(112)] = 2477,
  [SMALL_STATE(113)] = 2484,
  [SMALL_STATE(114)] = 2491,
  [SMALL_STATE(115)] = 2498,
  [SMALL_STATE(116)] = 2505,
  [SMALL_STATE(117)] = 2512,
  [SMALL_STATE(118)] = 2519,
  [SMALL_STATE(119)] = 2526,
  [SMALL_STATE(120)] = 2533,
  [SMALL_STATE(121)] = 2540,
  [SMALL_STATE(122)] = 2547,
  [SMALL_STATE(123)] = 2554,
  [SMALL_STATE(124)] = 2561,
  [SMALL_STATE(125)] = 2568,
  [SMALL_STATE(126)] = 2575,
  [SMALL_STATE(127)] = 2582,
  [SMALL_STATE(128)] = 2589,
  [SMALL_STATE(129)] = 2596,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT_EXTRA(),
  [5] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(105),
  [9] = {.entry = {.count = 1, .reusable = false}}, SHIFT(67),
  [11] = {.entry = {.count = 1, .reusable = false}}, SHIFT(105),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [17] = {.entry = {.count = 1, .reusable = false}}, SHIFT(115),
  [19] = {.entry = {.count = 1, .reusable = false}}, SHIFT(107),
  [21] = {.entry = {.count = 1, .reusable = false}}, SHIFT(5),
  [23] = {.entry = {.count = 1, .reusable = false}}, SHIFT(36),
  [25] = {.entry = {.count = 1, .reusable = false}}, SHIFT(37),
  [27] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [29] = {.entry = {.count = 1, .reusable = false}}, SHIFT(18),
  [31] = {.entry = {.count = 1, .reusable = false}}, SHIFT(21),
  [33] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [35] = {.entry = {.count = 1, .reusable = true}}, SHIFT(124),
  [37] = {.entry = {.count = 1, .reusable = true}}, SHIFT(117),
  [39] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__compound_statement_repeat1, 2), SHIFT_REPEAT(67),
  [42] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__compound_statement_repeat1, 2), SHIFT_REPEAT(105),
  [45] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__compound_statement_repeat1, 2), SHIFT_REPEAT(35),
  [48] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__compound_statement_repeat1, 2),
  [50] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__compound_statement_repeat1, 2), SHIFT_REPEAT(115),
  [53] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__compound_statement_repeat1, 2), SHIFT_REPEAT(107),
  [56] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__compound_statement_repeat1, 2), SHIFT_REPEAT(5),
  [59] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__compound_statement_repeat1, 2), SHIFT_REPEAT(36),
  [62] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__compound_statement_repeat1, 2), SHIFT_REPEAT(37),
  [65] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__compound_statement_repeat1, 2), SHIFT_REPEAT(37),
  [68] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__compound_statement_repeat1, 2), SHIFT_REPEAT(18),
  [71] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__compound_statement_repeat1, 2), SHIFT_REPEAT(21),
  [74] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__compound_statement_repeat1, 2), SHIFT_REPEAT(21),
  [77] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__compound_statement_repeat1, 2), SHIFT_REPEAT(124),
  [80] = {.entry = {.count = 1, .reusable = true}}, SHIFT(94),
  [82] = {.entry = {.count = 1, .reusable = true}}, SHIFT(93),
  [84] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__compound_statement_repeat1, 2),
  [86] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__expression, 1),
  [88] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [90] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__expression, 1),
  [92] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_binary_expression, 3),
  [94] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [96] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [98] = {.entry = {.count = 1, .reusable = false}}, SHIFT(46),
  [100] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [102] = {.entry = {.count = 1, .reusable = false}}, SHIFT(34),
  [104] = {.entry = {.count = 1, .reusable = false}}, SHIFT(42),
  [106] = {.entry = {.count = 1, .reusable = false}}, SHIFT(41),
  [108] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [110] = {.entry = {.count = 1, .reusable = false}}, SHIFT(40),
  [112] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__string_literal, 3),
  [114] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__string_literal, 3),
  [116] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_binary_expression, 3),
  [118] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parenthesized_expression, 3),
  [120] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_parenthesized_expression, 3),
  [122] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_funcall_expression, 4),
  [124] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_funcall_expression, 4),
  [126] = {.entry = {.count = 1, .reusable = false}}, SHIFT(38),
  [128] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_literal, 1),
  [130] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_literal, 1),
  [132] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_funcall_expression, 5),
  [134] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_funcall_expression, 5),
  [136] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_unary_expression, 2),
  [138] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_unary_expression, 2),
  [140] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_funcall_expression, 3),
  [142] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_funcall_expression, 3),
  [144] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [146] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [148] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [150] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__expression_statement, 1),
  [152] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [154] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [156] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_return_statement, 2),
  [158] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_assignment_statement, 3),
  [160] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_funcall_expression_repeat1, 2),
  [162] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [164] = {.entry = {.count = 1, .reusable = true}}, SHIFT(101),
  [166] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [168] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [170] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2),
  [172] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(105),
  [175] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1),
  [177] = {.entry = {.count = 1, .reusable = true}}, SHIFT(110),
  [179] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_declaration, 4),
  [181] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_definition, 6),
  [183] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_constant_definition, 5),
  [185] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable_definition, 5),
  [187] = {.entry = {.count = 1, .reusable = true}}, SHIFT(57),
  [189] = {.entry = {.count = 1, .reusable = true}}, SHIFT(128),
  [191] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable_definition, 4),
  [193] = {.entry = {.count = 1, .reusable = true}}, SHIFT(61),
  [195] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable_definition, 7),
  [197] = {.entry = {.count = 1, .reusable = true}}, SHIFT(58),
  [199] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable_definition, 6),
  [201] = {.entry = {.count = 1, .reusable = true}}, SHIFT(64),
  [203] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable_definition, 10),
  [205] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable_definition, 9),
  [207] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable_definition, 2),
  [209] = {.entry = {.count = 1, .reusable = true}}, SHIFT(60),
  [211] = {.entry = {.count = 1, .reusable = true}}, SHIFT(126),
  [213] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable_definition, 8),
  [215] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_variable_definition_repeat1, 2),
  [217] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_variable_definition_repeat1, 2), SHIFT_REPEAT(128),
  [220] = {.entry = {.count = 1, .reusable = true}}, SHIFT(65),
  [222] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable_definition, 3),
  [224] = {.entry = {.count = 1, .reusable = true}}, SHIFT(59),
  [226] = {.entry = {.count = 1, .reusable = true}}, SHIFT(111),
  [228] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_variable_definition_repeat1, 4),
  [230] = {.entry = {.count = 1, .reusable = true}}, SHIFT(109),
  [232] = {.entry = {.count = 1, .reusable = true}}, SHIFT(116),
  [234] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_while_statement, 5),
  [236] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_funcall_expression_repeat1, 2), SHIFT_REPEAT(39),
  [239] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__compound_statement, 3),
  [241] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__compound_statement, 2),
  [243] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
  [245] = {.entry = {.count = 1, .reusable = true}}, SHIFT(120),
  [247] = {.entry = {.count = 1, .reusable = true}}, SHIFT(63),
  [249] = {.entry = {.count = 1, .reusable = true}}, SHIFT(113),
  [251] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [253] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_if_statement, 7),
  [255] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_if_statement, 5),
  [257] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [259] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_parameter_list_repeat1, 2), SHIFT_REPEAT(63),
  [262] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_parameter_list_repeat1, 2),
  [264] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_do_while_statement, 6),
  [266] = {.entry = {.count = 1, .reusable = true}}, SHIFT(122),
  [268] = {.entry = {.count = 1, .reusable = true}}, SHIFT(66),
  [270] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [272] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_simple_type, 1),
  [274] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__parameter, 2),
  [276] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [278] = {.entry = {.count = 1, .reusable = true}}, SHIFT(77),
  [280] = {.entry = {.count = 1, .reusable = true}}, SHIFT(72),
  [282] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter_list, 2),
  [284] = {.entry = {.count = 1, .reusable = true}}, SHIFT(70),
  [286] = {.entry = {.count = 1, .reusable = true}}, SHIFT(103),
  [288] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter_list, 4),
  [290] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [292] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [294] = {.entry = {.count = 1, .reusable = true}}, SHIFT(73),
  [296] = {.entry = {.count = 1, .reusable = true}}, SHIFT(68),
  [298] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [300] = {.entry = {.count = 1, .reusable = true}}, SHIFT(106),
  [302] = {.entry = {.count = 1, .reusable = true}}, SHIFT(62),
  [304] = {.entry = {.count = 1, .reusable = true}}, SHIFT(87),
  [306] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter_list, 3),
  [308] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [310] = {.entry = {.count = 1, .reusable = false}}, SHIFT(114),
  [312] = {.entry = {.count = 1, .reusable = false}}, SHIFT_EXTRA(),
  [314] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [316] = {.entry = {.count = 1, .reusable = true}}, SHIFT(71),
  [318] = {.entry = {.count = 1, .reusable = true}}, SHIFT(118),
  [320] = {.entry = {.count = 1, .reusable = true}}, SHIFT(83),
  [322] = {.entry = {.count = 1, .reusable = true}}, SHIFT(69),
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
