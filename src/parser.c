#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 105
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 44
#define ALIAS_COUNT 0
#define TOKEN_COUNT 26
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 4
#define MAX_ALIAS_SEQUENCE_LENGTH 5
#define PRODUCTION_ID_COUNT 3

enum {
  anon_sym_LBRACE_LBRACE = 1,
  anon_sym_RBRACE_RBRACE = 2,
  anon_sym_LBRACE_PERCENT = 3,
  aux_sym_jinja_expression_token1 = 4,
  anon_sym_LBRACE_POUND = 5,
  aux_sym__jinja_comment_token1 = 6,
  anon_sym_LPAREN = 7,
  anon_sym_COMMA = 8,
  anon_sym_RPAREN = 9,
  anon_sym_SQUOTE = 10,
  aux_sym_lit_string_token1 = 11,
  anon_sym_DQUOTE = 12,
  aux_sym_lit_string_token2 = 13,
  anon_sym_True = 14,
  anon_sym_False = 15,
  anon_sym_LBRACK = 16,
  anon_sym_RBRACK = 17,
  anon_sym_LBRACE = 18,
  anon_sym_RBRACE = 19,
  anon_sym_COLON = 20,
  sym__identifier = 21,
  anon_sym_EQ = 22,
  sym__text = 23,
  sym_integer = 24,
  sym_float = 25,
  sym_source_file = 26,
  sym__jinja_value = 27,
  sym_jinja_expression = 28,
  sym__jinja_comment = 29,
  sym__expr = 30,
  sym_fn_call = 31,
  sym_argument_list = 32,
  sym_lit_string = 33,
  sym_bool = 34,
  sym_list = 35,
  sym_dict = 36,
  sym_pair = 37,
  sym_identifier = 38,
  sym_kwarg = 39,
  aux_sym_source_file_repeat1 = 40,
  aux_sym_argument_list_repeat1 = 41,
  aux_sym_list_repeat1 = 42,
  aux_sym_dict_repeat1 = 43,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [anon_sym_LBRACE_LBRACE] = "{{",
  [anon_sym_RBRACE_RBRACE] = "}}",
  [anon_sym_LBRACE_PERCENT] = "{%",
  [aux_sym_jinja_expression_token1] = "jinja_expression_token1",
  [anon_sym_LBRACE_POUND] = "{#",
  [aux_sym__jinja_comment_token1] = "_jinja_comment_token1",
  [anon_sym_LPAREN] = "(",
  [anon_sym_COMMA] = ",",
  [anon_sym_RPAREN] = ")",
  [anon_sym_SQUOTE] = "'",
  [aux_sym_lit_string_token1] = "lit_string_token1",
  [anon_sym_DQUOTE] = "\"",
  [aux_sym_lit_string_token2] = "lit_string_token2",
  [anon_sym_True] = "True",
  [anon_sym_False] = "False",
  [anon_sym_LBRACK] = "[",
  [anon_sym_RBRACK] = "]",
  [anon_sym_LBRACE] = "{",
  [anon_sym_RBRACE] = "}",
  [anon_sym_COLON] = ":",
  [sym__identifier] = "_identifier",
  [anon_sym_EQ] = "=",
  [sym__text] = "_text",
  [sym_integer] = "integer",
  [sym_float] = "float",
  [sym_source_file] = "source_file",
  [sym__jinja_value] = "_jinja_value",
  [sym_jinja_expression] = "jinja_expression",
  [sym__jinja_comment] = "_jinja_comment",
  [sym__expr] = "_expr",
  [sym_fn_call] = "fn_call",
  [sym_argument_list] = "argument_list",
  [sym_lit_string] = "lit_string",
  [sym_bool] = "bool",
  [sym_list] = "list",
  [sym_dict] = "dict",
  [sym_pair] = "pair",
  [sym_identifier] = "identifier",
  [sym_kwarg] = "kwarg",
  [aux_sym_source_file_repeat1] = "source_file_repeat1",
  [aux_sym_argument_list_repeat1] = "argument_list_repeat1",
  [aux_sym_list_repeat1] = "list_repeat1",
  [aux_sym_dict_repeat1] = "dict_repeat1",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [anon_sym_LBRACE_LBRACE] = anon_sym_LBRACE_LBRACE,
  [anon_sym_RBRACE_RBRACE] = anon_sym_RBRACE_RBRACE,
  [anon_sym_LBRACE_PERCENT] = anon_sym_LBRACE_PERCENT,
  [aux_sym_jinja_expression_token1] = aux_sym_jinja_expression_token1,
  [anon_sym_LBRACE_POUND] = anon_sym_LBRACE_POUND,
  [aux_sym__jinja_comment_token1] = aux_sym__jinja_comment_token1,
  [anon_sym_LPAREN] = anon_sym_LPAREN,
  [anon_sym_COMMA] = anon_sym_COMMA,
  [anon_sym_RPAREN] = anon_sym_RPAREN,
  [anon_sym_SQUOTE] = anon_sym_SQUOTE,
  [aux_sym_lit_string_token1] = aux_sym_lit_string_token1,
  [anon_sym_DQUOTE] = anon_sym_DQUOTE,
  [aux_sym_lit_string_token2] = aux_sym_lit_string_token2,
  [anon_sym_True] = anon_sym_True,
  [anon_sym_False] = anon_sym_False,
  [anon_sym_LBRACK] = anon_sym_LBRACK,
  [anon_sym_RBRACK] = anon_sym_RBRACK,
  [anon_sym_LBRACE] = anon_sym_LBRACE,
  [anon_sym_RBRACE] = anon_sym_RBRACE,
  [anon_sym_COLON] = anon_sym_COLON,
  [sym__identifier] = sym__identifier,
  [anon_sym_EQ] = anon_sym_EQ,
  [sym__text] = sym__text,
  [sym_integer] = sym_integer,
  [sym_float] = sym_float,
  [sym_source_file] = sym_source_file,
  [sym__jinja_value] = sym__jinja_value,
  [sym_jinja_expression] = sym_jinja_expression,
  [sym__jinja_comment] = sym__jinja_comment,
  [sym__expr] = sym__expr,
  [sym_fn_call] = sym_fn_call,
  [sym_argument_list] = sym_argument_list,
  [sym_lit_string] = sym_lit_string,
  [sym_bool] = sym_bool,
  [sym_list] = sym_list,
  [sym_dict] = sym_dict,
  [sym_pair] = sym_pair,
  [sym_identifier] = sym_identifier,
  [sym_kwarg] = sym_kwarg,
  [aux_sym_source_file_repeat1] = aux_sym_source_file_repeat1,
  [aux_sym_argument_list_repeat1] = aux_sym_argument_list_repeat1,
  [aux_sym_list_repeat1] = aux_sym_list_repeat1,
  [aux_sym_dict_repeat1] = aux_sym_dict_repeat1,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [anon_sym_LBRACE_LBRACE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RBRACE_RBRACE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LBRACE_PERCENT] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_jinja_expression_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_LBRACE_POUND] = {
    .visible = true,
    .named = false,
  },
  [aux_sym__jinja_comment_token1] = {
    .visible = false,
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
  [anon_sym_SQUOTE] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_lit_string_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_DQUOTE] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_lit_string_token2] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_True] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_False] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LBRACK] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RBRACK] = {
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
  [anon_sym_COLON] = {
    .visible = true,
    .named = false,
  },
  [sym__identifier] = {
    .visible = false,
    .named = true,
  },
  [anon_sym_EQ] = {
    .visible = true,
    .named = false,
  },
  [sym__text] = {
    .visible = false,
    .named = true,
  },
  [sym_integer] = {
    .visible = true,
    .named = true,
  },
  [sym_float] = {
    .visible = true,
    .named = true,
  },
  [sym_source_file] = {
    .visible = true,
    .named = true,
  },
  [sym__jinja_value] = {
    .visible = false,
    .named = true,
  },
  [sym_jinja_expression] = {
    .visible = true,
    .named = true,
  },
  [sym__jinja_comment] = {
    .visible = false,
    .named = true,
  },
  [sym__expr] = {
    .visible = false,
    .named = true,
  },
  [sym_fn_call] = {
    .visible = true,
    .named = true,
  },
  [sym_argument_list] = {
    .visible = true,
    .named = true,
  },
  [sym_lit_string] = {
    .visible = true,
    .named = true,
  },
  [sym_bool] = {
    .visible = true,
    .named = true,
  },
  [sym_list] = {
    .visible = true,
    .named = true,
  },
  [sym_dict] = {
    .visible = true,
    .named = true,
  },
  [sym_pair] = {
    .visible = true,
    .named = true,
  },
  [sym_identifier] = {
    .visible = true,
    .named = true,
  },
  [sym_kwarg] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_source_file_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_argument_list_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_list_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_dict_repeat1] = {
    .visible = false,
    .named = false,
  },
};

enum {
  field_argument_list = 1,
  field_fn_name = 2,
  field_key = 3,
  field_value = 4,
};

static const char * const ts_field_names[] = {
  [0] = NULL,
  [field_argument_list] = "argument_list",
  [field_fn_name] = "fn_name",
  [field_key] = "key",
  [field_value] = "value",
};

static const TSFieldMapSlice ts_field_map_slices[PRODUCTION_ID_COUNT] = {
  [1] = {.index = 0, .length = 2},
  [2] = {.index = 2, .length = 2},
};

static const TSFieldMapEntry ts_field_map_entries[] = {
  [0] =
    {field_argument_list, 1},
    {field_fn_name, 0},
  [2] =
    {field_key, 0},
    {field_value, 2},
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
  [3] = 2,
  [4] = 4,
  [5] = 5,
  [6] = 6,
  [7] = 4,
  [8] = 6,
  [9] = 5,
  [10] = 10,
  [11] = 10,
  [12] = 12,
  [13] = 13,
  [14] = 13,
  [15] = 15,
  [16] = 16,
  [17] = 17,
  [18] = 18,
  [19] = 19,
  [20] = 20,
  [21] = 21,
  [22] = 21,
  [23] = 23,
  [24] = 24,
  [25] = 25,
  [26] = 26,
  [27] = 27,
  [28] = 28,
  [29] = 25,
  [30] = 30,
  [31] = 31,
  [32] = 32,
  [33] = 28,
  [34] = 34,
  [35] = 23,
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
  [51] = 24,
  [52] = 52,
  [53] = 53,
  [54] = 53,
  [55] = 55,
  [56] = 56,
  [57] = 57,
  [58] = 55,
  [59] = 59,
  [60] = 50,
  [61] = 57,
  [62] = 62,
  [63] = 63,
  [64] = 59,
  [65] = 63,
  [66] = 47,
  [67] = 67,
  [68] = 68,
  [69] = 37,
  [70] = 43,
  [71] = 49,
  [72] = 30,
  [73] = 46,
  [74] = 36,
  [75] = 39,
  [76] = 42,
  [77] = 77,
  [78] = 48,
  [79] = 45,
  [80] = 40,
  [81] = 38,
  [82] = 41,
  [83] = 83,
  [84] = 84,
  [85] = 44,
  [86] = 86,
  [87] = 87,
  [88] = 88,
  [89] = 89,
  [90] = 90,
  [91] = 90,
  [92] = 86,
  [93] = 89,
  [94] = 94,
  [95] = 95,
  [96] = 95,
  [97] = 87,
  [98] = 98,
  [99] = 99,
  [100] = 100,
  [101] = 101,
  [102] = 102,
  [103] = 99,
  [104] = 98,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(20);
      if (lookahead == '"') ADVANCE(35);
      if (lookahead == '\'') ADVANCE(31);
      if (lookahead == '(') ADVANCE(28);
      if (lookahead == ')') ADVANCE(30);
      if (lookahead == ',') ADVANCE(29);
      if (lookahead == '.') ADVANCE(15);
      if (lookahead == ':') ADVANCE(46);
      if (lookahead == '=') ADVANCE(57);
      if (lookahead == 'F') ADVANCE(48);
      if (lookahead == 'T') ADVANCE(52);
      if (lookahead == '[') ADVANCE(41);
      if (lookahead == ']') ADVANCE(42);
      if (lookahead == '_') ADVANCE(55);
      if (lookahead == '{') ADVANCE(44);
      if (lookahead == '}') ADVANCE(45);
      if (('+' <= lookahead && lookahead <= '-')) ADVANCE(9);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(60);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(56);
      END_STATE();
    case 1:
      if (lookahead == '"') ADVANCE(35);
      if (lookahead == '\'') ADVANCE(31);
      if (lookahead == '(') ADVANCE(28);
      if (lookahead == ')') ADVANCE(30);
      if (lookahead == ',') ADVANCE(29);
      if (lookahead == '.') ADVANCE(15);
      if (lookahead == ':') ADVANCE(46);
      if (lookahead == '=') ADVANCE(57);
      if (lookahead == 'F') ADVANCE(48);
      if (lookahead == 'T') ADVANCE(52);
      if (lookahead == '[') ADVANCE(41);
      if (lookahead == ']') ADVANCE(42);
      if (lookahead == '_') ADVANCE(55);
      if (lookahead == '{') ADVANCE(43);
      if (lookahead == '}') ADVANCE(12);
      if (('+' <= lookahead && lookahead <= '-')) ADVANCE(9);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(1)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(60);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(56);
      END_STATE();
    case 2:
      if (lookahead == '#') ADVANCE(25);
      if (lookahead == '%') ADVANCE(23);
      if (lookahead == '{') ADVANCE(21);
      if (lookahead != 0) ADVANCE(59);
      END_STATE();
    case 3:
      if (lookahead == '#') ADVANCE(6);
      if (lookahead == '}') ADVANCE(27);
      if (lookahead != 0) ADVANCE(5);
      END_STATE();
    case 4:
      if (lookahead == '#') ADVANCE(6);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(4);
      if (lookahead != 0) ADVANCE(5);
      END_STATE();
    case 5:
      if (lookahead == '#') ADVANCE(6);
      if (lookahead != 0) ADVANCE(5);
      END_STATE();
    case 6:
      if (lookahead == '#') ADVANCE(3);
      if (lookahead == '}') ADVANCE(26);
      if (lookahead != 0) ADVANCE(5);
      END_STATE();
    case 7:
      if (lookahead == '%') ADVANCE(13);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(7);
      if (lookahead != 0) ADVANCE(8);
      END_STATE();
    case 8:
      if (lookahead == '%') ADVANCE(13);
      if (lookahead != 0) ADVANCE(8);
      END_STATE();
    case 9:
      if (lookahead == '.') ADVANCE(15);
      if (lookahead == '_') ADVANCE(16);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(61);
      END_STATE();
    case 10:
      if (lookahead == '.') ADVANCE(65);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(14);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(60);
      END_STATE();
    case 11:
      if (lookahead == '.') ADVANCE(65);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(61);
      END_STATE();
    case 12:
      if (lookahead == '}') ADVANCE(22);
      END_STATE();
    case 13:
      if (lookahead == '}') ADVANCE(24);
      if (lookahead != 0) ADVANCE(8);
      END_STATE();
    case 14:
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(17);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(64);
      END_STATE();
    case 15:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(63);
      END_STATE();
    case 16:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(62);
      END_STATE();
    case 17:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(64);
      END_STATE();
    case 18:
      if (lookahead != 0 &&
          lookahead != '#' &&
          lookahead != '%' &&
          lookahead != '{') ADVANCE(59);
      END_STATE();
    case 19:
      if (eof) ADVANCE(20);
      if (lookahead == '{') ADVANCE(2);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(58);
      if (lookahead != 0) ADVANCE(59);
      END_STATE();
    case 20:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 21:
      ACCEPT_TOKEN(anon_sym_LBRACE_LBRACE);
      END_STATE();
    case 22:
      ACCEPT_TOKEN(anon_sym_RBRACE_RBRACE);
      END_STATE();
    case 23:
      ACCEPT_TOKEN(anon_sym_LBRACE_PERCENT);
      END_STATE();
    case 24:
      ACCEPT_TOKEN(aux_sym_jinja_expression_token1);
      END_STATE();
    case 25:
      ACCEPT_TOKEN(anon_sym_LBRACE_POUND);
      END_STATE();
    case 26:
      ACCEPT_TOKEN(aux_sym__jinja_comment_token1);
      END_STATE();
    case 27:
      ACCEPT_TOKEN(aux_sym__jinja_comment_token1);
      if (lookahead == '#') ADVANCE(6);
      if (lookahead != 0) ADVANCE(5);
      END_STATE();
    case 28:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 29:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 30:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 31:
      ACCEPT_TOKEN(anon_sym_SQUOTE);
      END_STATE();
    case 32:
      ACCEPT_TOKEN(aux_sym_lit_string_token1);
      if (lookahead == '\\') ADVANCE(34);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(32);
      if (lookahead != 0 &&
          lookahead != '\'') ADVANCE(33);
      END_STATE();
    case 33:
      ACCEPT_TOKEN(aux_sym_lit_string_token1);
      if (lookahead == '\\') ADVANCE(34);
      if (lookahead != 0 &&
          lookahead != '\'') ADVANCE(33);
      END_STATE();
    case 34:
      ACCEPT_TOKEN(aux_sym_lit_string_token1);
      if (lookahead != 0 &&
          lookahead != '\\') ADVANCE(33);
      if (lookahead == '\\') ADVANCE(34);
      END_STATE();
    case 35:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 36:
      ACCEPT_TOKEN(aux_sym_lit_string_token2);
      if (lookahead == '\\') ADVANCE(38);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(36);
      if (lookahead != 0 &&
          lookahead != '"') ADVANCE(37);
      END_STATE();
    case 37:
      ACCEPT_TOKEN(aux_sym_lit_string_token2);
      if (lookahead == '\\') ADVANCE(38);
      if (lookahead != 0 &&
          lookahead != '"') ADVANCE(37);
      END_STATE();
    case 38:
      ACCEPT_TOKEN(aux_sym_lit_string_token2);
      if (lookahead != 0 &&
          lookahead != '\\') ADVANCE(37);
      if (lookahead == '\\') ADVANCE(38);
      END_STATE();
    case 39:
      ACCEPT_TOKEN(anon_sym_True);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(56);
      END_STATE();
    case 40:
      ACCEPT_TOKEN(anon_sym_False);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(56);
      END_STATE();
    case 41:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 42:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 43:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 44:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      if (lookahead == '#') ADVANCE(25);
      if (lookahead == '%') ADVANCE(23);
      if (lookahead == '{') ADVANCE(21);
      END_STATE();
    case 45:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 46:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 47:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == '_') ADVANCE(55);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(47);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(56);
      END_STATE();
    case 48:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'a') ADVANCE(51);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(56);
      END_STATE();
    case 49:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'e') ADVANCE(39);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(56);
      END_STATE();
    case 50:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'e') ADVANCE(40);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(56);
      END_STATE();
    case 51:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'l') ADVANCE(53);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(56);
      END_STATE();
    case 52:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'r') ADVANCE(54);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(56);
      END_STATE();
    case 53:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 's') ADVANCE(50);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(56);
      END_STATE();
    case 54:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'u') ADVANCE(49);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(56);
      END_STATE();
    case 55:
      ACCEPT_TOKEN(sym__identifier);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(47);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(56);
      END_STATE();
    case 56:
      ACCEPT_TOKEN(sym__identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(56);
      END_STATE();
    case 57:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 58:
      ACCEPT_TOKEN(sym__text);
      if (lookahead == '{') ADVANCE(2);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(58);
      if (lookahead != 0) ADVANCE(59);
      END_STATE();
    case 59:
      ACCEPT_TOKEN(sym__text);
      if (lookahead == '{') ADVANCE(18);
      if (lookahead != 0) ADVANCE(59);
      END_STATE();
    case 60:
      ACCEPT_TOKEN(sym_integer);
      if (lookahead == '.') ADVANCE(65);
      if (lookahead == '_') ADVANCE(10);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(14);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(60);
      END_STATE();
    case 61:
      ACCEPT_TOKEN(sym_integer);
      if (lookahead == '.') ADVANCE(65);
      if (lookahead == '_') ADVANCE(11);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(61);
      END_STATE();
    case 62:
      ACCEPT_TOKEN(sym_integer);
      if (lookahead == '_') ADVANCE(16);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(62);
      END_STATE();
    case 63:
      ACCEPT_TOKEN(sym_float);
      if (lookahead == '_') ADVANCE(65);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(14);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(63);
      END_STATE();
    case 64:
      ACCEPT_TOKEN(sym_float);
      if (lookahead == '_') ADVANCE(66);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(64);
      END_STATE();
    case 65:
      ACCEPT_TOKEN(sym_float);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(14);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(63);
      END_STATE();
    case 66:
      ACCEPT_TOKEN(sym_float);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(64);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 19},
  [2] = {.lex_state = 1},
  [3] = {.lex_state = 1},
  [4] = {.lex_state = 1},
  [5] = {.lex_state = 1},
  [6] = {.lex_state = 1},
  [7] = {.lex_state = 1},
  [8] = {.lex_state = 1},
  [9] = {.lex_state = 1},
  [10] = {.lex_state = 1},
  [11] = {.lex_state = 1},
  [12] = {.lex_state = 1},
  [13] = {.lex_state = 1},
  [14] = {.lex_state = 1},
  [15] = {.lex_state = 1},
  [16] = {.lex_state = 1},
  [17] = {.lex_state = 1},
  [18] = {.lex_state = 1},
  [19] = {.lex_state = 19},
  [20] = {.lex_state = 19},
  [21] = {.lex_state = 0},
  [22] = {.lex_state = 0},
  [23] = {.lex_state = 1},
  [24] = {.lex_state = 1},
  [25] = {.lex_state = 0},
  [26] = {.lex_state = 19},
  [27] = {.lex_state = 19},
  [28] = {.lex_state = 0},
  [29] = {.lex_state = 0},
  [30] = {.lex_state = 1},
  [31] = {.lex_state = 19},
  [32] = {.lex_state = 0},
  [33] = {.lex_state = 0},
  [34] = {.lex_state = 0},
  [35] = {.lex_state = 0},
  [36] = {.lex_state = 1},
  [37] = {.lex_state = 1},
  [38] = {.lex_state = 1},
  [39] = {.lex_state = 1},
  [40] = {.lex_state = 1},
  [41] = {.lex_state = 1},
  [42] = {.lex_state = 1},
  [43] = {.lex_state = 1},
  [44] = {.lex_state = 1},
  [45] = {.lex_state = 1},
  [46] = {.lex_state = 1},
  [47] = {.lex_state = 1},
  [48] = {.lex_state = 1},
  [49] = {.lex_state = 1},
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
  [94] = {.lex_state = 1},
  [95] = {.lex_state = 0},
  [96] = {.lex_state = 0},
  [97] = {.lex_state = 0},
  [98] = {.lex_state = 36},
  [99] = {.lex_state = 32},
  [100] = {.lex_state = 0},
  [101] = {.lex_state = 7},
  [102] = {.lex_state = 4},
  [103] = {.lex_state = 32},
  [104] = {.lex_state = 36},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(1),
    [anon_sym_LBRACE_PERCENT] = ACTIONS(1),
    [anon_sym_LBRACE_POUND] = ACTIONS(1),
    [anon_sym_LPAREN] = ACTIONS(1),
    [anon_sym_COMMA] = ACTIONS(1),
    [anon_sym_RPAREN] = ACTIONS(1),
    [anon_sym_SQUOTE] = ACTIONS(1),
    [anon_sym_DQUOTE] = ACTIONS(1),
    [anon_sym_True] = ACTIONS(1),
    [anon_sym_False] = ACTIONS(1),
    [anon_sym_LBRACK] = ACTIONS(1),
    [anon_sym_RBRACK] = ACTIONS(1),
    [anon_sym_LBRACE] = ACTIONS(1),
    [anon_sym_RBRACE] = ACTIONS(1),
    [anon_sym_COLON] = ACTIONS(1),
    [sym__identifier] = ACTIONS(1),
    [anon_sym_EQ] = ACTIONS(1),
    [sym_integer] = ACTIONS(1),
    [sym_float] = ACTIONS(1),
  },
  [1] = {
    [sym_source_file] = STATE(100),
    [sym__jinja_value] = STATE(19),
    [sym_jinja_expression] = STATE(19),
    [sym__jinja_comment] = STATE(19),
    [aux_sym_source_file_repeat1] = STATE(19),
    [ts_builtin_sym_end] = ACTIONS(3),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(5),
    [anon_sym_LBRACE_PERCENT] = ACTIONS(7),
    [anon_sym_LBRACE_POUND] = ACTIONS(9),
    [sym__text] = ACTIONS(11),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 12,
    ACTIONS(13), 1,
      anon_sym_COMMA,
    ACTIONS(15), 1,
      anon_sym_RPAREN,
    ACTIONS(17), 1,
      anon_sym_SQUOTE,
    ACTIONS(19), 1,
      anon_sym_DQUOTE,
    ACTIONS(23), 1,
      anon_sym_LBRACK,
    ACTIONS(25), 1,
      anon_sym_LBRACE,
    ACTIONS(27), 1,
      sym__identifier,
    ACTIONS(29), 1,
      sym_integer,
    ACTIONS(31), 1,
      sym_float,
    STATE(32), 1,
      sym_identifier,
    ACTIONS(21), 2,
      anon_sym_True,
      anon_sym_False,
    STATE(58), 7,
      sym__expr,
      sym_fn_call,
      sym_lit_string,
      sym_bool,
      sym_list,
      sym_dict,
      sym_kwarg,
  [44] = 12,
    ACTIONS(17), 1,
      anon_sym_SQUOTE,
    ACTIONS(19), 1,
      anon_sym_DQUOTE,
    ACTIONS(23), 1,
      anon_sym_LBRACK,
    ACTIONS(25), 1,
      anon_sym_LBRACE,
    ACTIONS(27), 1,
      sym__identifier,
    ACTIONS(33), 1,
      anon_sym_COMMA,
    ACTIONS(35), 1,
      anon_sym_RPAREN,
    ACTIONS(37), 1,
      sym_integer,
    ACTIONS(39), 1,
      sym_float,
    STATE(32), 1,
      sym_identifier,
    ACTIONS(21), 2,
      anon_sym_True,
      anon_sym_False,
    STATE(55), 7,
      sym__expr,
      sym_fn_call,
      sym_lit_string,
      sym_bool,
      sym_list,
      sym_dict,
      sym_kwarg,
  [88] = 12,
    ACTIONS(17), 1,
      anon_sym_SQUOTE,
    ACTIONS(19), 1,
      anon_sym_DQUOTE,
    ACTIONS(23), 1,
      anon_sym_LBRACK,
    ACTIONS(25), 1,
      anon_sym_LBRACE,
    ACTIONS(27), 1,
      sym__identifier,
    ACTIONS(41), 1,
      anon_sym_COMMA,
    ACTIONS(43), 1,
      anon_sym_RBRACK,
    ACTIONS(45), 1,
      sym_integer,
    ACTIONS(47), 1,
      sym_float,
    STATE(23), 1,
      sym_identifier,
    ACTIONS(21), 2,
      anon_sym_True,
      anon_sym_False,
    STATE(63), 6,
      sym__expr,
      sym_fn_call,
      sym_lit_string,
      sym_bool,
      sym_list,
      sym_dict,
  [131] = 11,
    ACTIONS(17), 1,
      anon_sym_SQUOTE,
    ACTIONS(19), 1,
      anon_sym_DQUOTE,
    ACTIONS(23), 1,
      anon_sym_LBRACK,
    ACTIONS(25), 1,
      anon_sym_LBRACE,
    ACTIONS(27), 1,
      sym__identifier,
    ACTIONS(49), 1,
      anon_sym_RPAREN,
    ACTIONS(51), 1,
      sym_integer,
    ACTIONS(53), 1,
      sym_float,
    STATE(32), 1,
      sym_identifier,
    ACTIONS(21), 2,
      anon_sym_True,
      anon_sym_False,
    STATE(84), 7,
      sym__expr,
      sym_fn_call,
      sym_lit_string,
      sym_bool,
      sym_list,
      sym_dict,
      sym_kwarg,
  [172] = 11,
    ACTIONS(17), 1,
      anon_sym_SQUOTE,
    ACTIONS(19), 1,
      anon_sym_DQUOTE,
    ACTIONS(23), 1,
      anon_sym_LBRACK,
    ACTIONS(25), 1,
      anon_sym_LBRACE,
    ACTIONS(27), 1,
      sym__identifier,
    ACTIONS(51), 1,
      sym_integer,
    ACTIONS(53), 1,
      sym_float,
    ACTIONS(55), 1,
      anon_sym_RPAREN,
    STATE(32), 1,
      sym_identifier,
    ACTIONS(21), 2,
      anon_sym_True,
      anon_sym_False,
    STATE(84), 7,
      sym__expr,
      sym_fn_call,
      sym_lit_string,
      sym_bool,
      sym_list,
      sym_dict,
      sym_kwarg,
  [213] = 12,
    ACTIONS(17), 1,
      anon_sym_SQUOTE,
    ACTIONS(19), 1,
      anon_sym_DQUOTE,
    ACTIONS(23), 1,
      anon_sym_LBRACK,
    ACTIONS(25), 1,
      anon_sym_LBRACE,
    ACTIONS(27), 1,
      sym__identifier,
    ACTIONS(57), 1,
      anon_sym_COMMA,
    ACTIONS(59), 1,
      anon_sym_RBRACK,
    ACTIONS(61), 1,
      sym_integer,
    ACTIONS(63), 1,
      sym_float,
    STATE(23), 1,
      sym_identifier,
    ACTIONS(21), 2,
      anon_sym_True,
      anon_sym_False,
    STATE(65), 6,
      sym__expr,
      sym_fn_call,
      sym_lit_string,
      sym_bool,
      sym_list,
      sym_dict,
  [256] = 11,
    ACTIONS(17), 1,
      anon_sym_SQUOTE,
    ACTIONS(19), 1,
      anon_sym_DQUOTE,
    ACTIONS(23), 1,
      anon_sym_LBRACK,
    ACTIONS(25), 1,
      anon_sym_LBRACE,
    ACTIONS(27), 1,
      sym__identifier,
    ACTIONS(51), 1,
      sym_integer,
    ACTIONS(53), 1,
      sym_float,
    ACTIONS(65), 1,
      anon_sym_RPAREN,
    STATE(32), 1,
      sym_identifier,
    ACTIONS(21), 2,
      anon_sym_True,
      anon_sym_False,
    STATE(84), 7,
      sym__expr,
      sym_fn_call,
      sym_lit_string,
      sym_bool,
      sym_list,
      sym_dict,
      sym_kwarg,
  [297] = 11,
    ACTIONS(17), 1,
      anon_sym_SQUOTE,
    ACTIONS(19), 1,
      anon_sym_DQUOTE,
    ACTIONS(23), 1,
      anon_sym_LBRACK,
    ACTIONS(25), 1,
      anon_sym_LBRACE,
    ACTIONS(27), 1,
      sym__identifier,
    ACTIONS(51), 1,
      sym_integer,
    ACTIONS(53), 1,
      sym_float,
    ACTIONS(67), 1,
      anon_sym_RPAREN,
    STATE(32), 1,
      sym_identifier,
    ACTIONS(21), 2,
      anon_sym_True,
      anon_sym_False,
    STATE(84), 7,
      sym__expr,
      sym_fn_call,
      sym_lit_string,
      sym_bool,
      sym_list,
      sym_dict,
      sym_kwarg,
  [338] = 11,
    ACTIONS(17), 1,
      anon_sym_SQUOTE,
    ACTIONS(19), 1,
      anon_sym_DQUOTE,
    ACTIONS(23), 1,
      anon_sym_LBRACK,
    ACTIONS(25), 1,
      anon_sym_LBRACE,
    ACTIONS(27), 1,
      sym__identifier,
    ACTIONS(69), 1,
      anon_sym_RBRACK,
    ACTIONS(71), 1,
      sym_integer,
    ACTIONS(73), 1,
      sym_float,
    STATE(23), 1,
      sym_identifier,
    ACTIONS(21), 2,
      anon_sym_True,
      anon_sym_False,
    STATE(83), 6,
      sym__expr,
      sym_fn_call,
      sym_lit_string,
      sym_bool,
      sym_list,
      sym_dict,
  [378] = 11,
    ACTIONS(17), 1,
      anon_sym_SQUOTE,
    ACTIONS(19), 1,
      anon_sym_DQUOTE,
    ACTIONS(23), 1,
      anon_sym_LBRACK,
    ACTIONS(25), 1,
      anon_sym_LBRACE,
    ACTIONS(27), 1,
      sym__identifier,
    ACTIONS(71), 1,
      sym_integer,
    ACTIONS(73), 1,
      sym_float,
    ACTIONS(75), 1,
      anon_sym_RBRACK,
    STATE(23), 1,
      sym_identifier,
    ACTIONS(21), 2,
      anon_sym_True,
      anon_sym_False,
    STATE(83), 6,
      sym__expr,
      sym_fn_call,
      sym_lit_string,
      sym_bool,
      sym_list,
      sym_dict,
  [418] = 10,
    ACTIONS(17), 1,
      anon_sym_SQUOTE,
    ACTIONS(19), 1,
      anon_sym_DQUOTE,
    ACTIONS(23), 1,
      anon_sym_LBRACK,
    ACTIONS(25), 1,
      anon_sym_LBRACE,
    ACTIONS(27), 1,
      sym__identifier,
    ACTIONS(51), 1,
      sym_integer,
    ACTIONS(53), 1,
      sym_float,
    STATE(32), 1,
      sym_identifier,
    ACTIONS(21), 2,
      anon_sym_True,
      anon_sym_False,
    STATE(84), 7,
      sym__expr,
      sym_fn_call,
      sym_lit_string,
      sym_bool,
      sym_list,
      sym_dict,
      sym_kwarg,
  [456] = 11,
    ACTIONS(17), 1,
      anon_sym_SQUOTE,
    ACTIONS(19), 1,
      anon_sym_DQUOTE,
    ACTIONS(23), 1,
      anon_sym_LBRACK,
    ACTIONS(25), 1,
      anon_sym_LBRACE,
    ACTIONS(27), 1,
      sym__identifier,
    ACTIONS(71), 1,
      sym_integer,
    ACTIONS(73), 1,
      sym_float,
    ACTIONS(77), 1,
      anon_sym_RBRACK,
    STATE(23), 1,
      sym_identifier,
    ACTIONS(21), 2,
      anon_sym_True,
      anon_sym_False,
    STATE(83), 6,
      sym__expr,
      sym_fn_call,
      sym_lit_string,
      sym_bool,
      sym_list,
      sym_dict,
  [496] = 11,
    ACTIONS(17), 1,
      anon_sym_SQUOTE,
    ACTIONS(19), 1,
      anon_sym_DQUOTE,
    ACTIONS(23), 1,
      anon_sym_LBRACK,
    ACTIONS(25), 1,
      anon_sym_LBRACE,
    ACTIONS(27), 1,
      sym__identifier,
    ACTIONS(71), 1,
      sym_integer,
    ACTIONS(73), 1,
      sym_float,
    ACTIONS(79), 1,
      anon_sym_RBRACK,
    STATE(23), 1,
      sym_identifier,
    ACTIONS(21), 2,
      anon_sym_True,
      anon_sym_False,
    STATE(83), 6,
      sym__expr,
      sym_fn_call,
      sym_lit_string,
      sym_bool,
      sym_list,
      sym_dict,
  [536] = 10,
    ACTIONS(17), 1,
      anon_sym_SQUOTE,
    ACTIONS(19), 1,
      anon_sym_DQUOTE,
    ACTIONS(23), 1,
      anon_sym_LBRACK,
    ACTIONS(25), 1,
      anon_sym_LBRACE,
    ACTIONS(27), 1,
      sym__identifier,
    ACTIONS(81), 1,
      sym_integer,
    ACTIONS(83), 1,
      sym_float,
    STATE(23), 1,
      sym_identifier,
    ACTIONS(21), 2,
      anon_sym_True,
      anon_sym_False,
    STATE(94), 6,
      sym__expr,
      sym_fn_call,
      sym_lit_string,
      sym_bool,
      sym_list,
      sym_dict,
  [573] = 10,
    ACTIONS(17), 1,
      anon_sym_SQUOTE,
    ACTIONS(19), 1,
      anon_sym_DQUOTE,
    ACTIONS(23), 1,
      anon_sym_LBRACK,
    ACTIONS(25), 1,
      anon_sym_LBRACE,
    ACTIONS(27), 1,
      sym__identifier,
    ACTIONS(85), 1,
      sym_integer,
    ACTIONS(87), 1,
      sym_float,
    STATE(23), 1,
      sym_identifier,
    ACTIONS(21), 2,
      anon_sym_True,
      anon_sym_False,
    STATE(67), 6,
      sym__expr,
      sym_fn_call,
      sym_lit_string,
      sym_bool,
      sym_list,
      sym_dict,
  [610] = 10,
    ACTIONS(17), 1,
      anon_sym_SQUOTE,
    ACTIONS(19), 1,
      anon_sym_DQUOTE,
    ACTIONS(23), 1,
      anon_sym_LBRACK,
    ACTIONS(25), 1,
      anon_sym_LBRACE,
    ACTIONS(27), 1,
      sym__identifier,
    ACTIONS(71), 1,
      sym_integer,
    ACTIONS(73), 1,
      sym_float,
    STATE(23), 1,
      sym_identifier,
    ACTIONS(21), 2,
      anon_sym_True,
      anon_sym_False,
    STATE(83), 6,
      sym__expr,
      sym_fn_call,
      sym_lit_string,
      sym_bool,
      sym_list,
      sym_dict,
  [647] = 10,
    ACTIONS(89), 1,
      anon_sym_SQUOTE,
    ACTIONS(91), 1,
      anon_sym_DQUOTE,
    ACTIONS(95), 1,
      anon_sym_LBRACK,
    ACTIONS(97), 1,
      anon_sym_LBRACE,
    ACTIONS(99), 1,
      sym__identifier,
    ACTIONS(101), 1,
      sym_integer,
    ACTIONS(103), 1,
      sym_float,
    STATE(35), 1,
      sym_identifier,
    ACTIONS(93), 2,
      anon_sym_True,
      anon_sym_False,
    STATE(68), 6,
      sym__expr,
      sym_fn_call,
      sym_lit_string,
      sym_bool,
      sym_list,
      sym_dict,
  [684] = 6,
    ACTIONS(5), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(7), 1,
      anon_sym_LBRACE_PERCENT,
    ACTIONS(9), 1,
      anon_sym_LBRACE_POUND,
    ACTIONS(105), 1,
      ts_builtin_sym_end,
    ACTIONS(107), 1,
      sym__text,
    STATE(20), 4,
      sym__jinja_value,
      sym_jinja_expression,
      sym__jinja_comment,
      aux_sym_source_file_repeat1,
  [706] = 6,
    ACTIONS(109), 1,
      ts_builtin_sym_end,
    ACTIONS(111), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(114), 1,
      anon_sym_LBRACE_PERCENT,
    ACTIONS(117), 1,
      anon_sym_LBRACE_POUND,
    ACTIONS(120), 1,
      sym__text,
    STATE(20), 4,
      sym__jinja_value,
      sym_jinja_expression,
      sym__jinja_comment,
      aux_sym_source_file_repeat1,
  [728] = 6,
    ACTIONS(17), 1,
      anon_sym_SQUOTE,
    ACTIONS(19), 1,
      anon_sym_DQUOTE,
    ACTIONS(123), 1,
      anon_sym_COMMA,
    ACTIONS(125), 1,
      anon_sym_RBRACE,
    STATE(60), 1,
      sym_pair,
    STATE(88), 1,
      sym_lit_string,
  [747] = 6,
    ACTIONS(17), 1,
      anon_sym_SQUOTE,
    ACTIONS(19), 1,
      anon_sym_DQUOTE,
    ACTIONS(127), 1,
      anon_sym_COMMA,
    ACTIONS(129), 1,
      anon_sym_RBRACE,
    STATE(50), 1,
      sym_pair,
    STATE(88), 1,
      sym_lit_string,
  [766] = 3,
    ACTIONS(133), 1,
      anon_sym_LPAREN,
    STATE(49), 1,
      sym_argument_list,
    ACTIONS(131), 4,
      anon_sym_RBRACE_RBRACE,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
  [779] = 1,
    ACTIONS(135), 6,
      anon_sym_RBRACE_RBRACE,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
      anon_sym_EQ,
  [788] = 5,
    ACTIONS(17), 1,
      anon_sym_SQUOTE,
    ACTIONS(19), 1,
      anon_sym_DQUOTE,
    ACTIONS(137), 1,
      anon_sym_RBRACE,
    STATE(77), 1,
      sym_pair,
    STATE(88), 1,
      sym_lit_string,
  [804] = 2,
    ACTIONS(139), 2,
      ts_builtin_sym_end,
      sym__text,
    ACTIONS(141), 3,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LBRACE_PERCENT,
      anon_sym_LBRACE_POUND,
  [814] = 2,
    ACTIONS(143), 2,
      ts_builtin_sym_end,
      sym__text,
    ACTIONS(145), 3,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LBRACE_PERCENT,
      anon_sym_LBRACE_POUND,
  [824] = 5,
    ACTIONS(17), 1,
      anon_sym_SQUOTE,
    ACTIONS(19), 1,
      anon_sym_DQUOTE,
    ACTIONS(147), 1,
      anon_sym_RBRACE,
    STATE(77), 1,
      sym_pair,
    STATE(88), 1,
      sym_lit_string,
  [840] = 5,
    ACTIONS(17), 1,
      anon_sym_SQUOTE,
    ACTIONS(19), 1,
      anon_sym_DQUOTE,
    ACTIONS(149), 1,
      anon_sym_RBRACE,
    STATE(77), 1,
      sym_pair,
    STATE(88), 1,
      sym_lit_string,
  [856] = 1,
    ACTIONS(151), 5,
      anon_sym_RBRACE_RBRACE,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
      anon_sym_COLON,
  [864] = 2,
    ACTIONS(153), 2,
      ts_builtin_sym_end,
      sym__text,
    ACTIONS(155), 3,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LBRACE_PERCENT,
      anon_sym_LBRACE_POUND,
  [874] = 4,
    ACTIONS(133), 1,
      anon_sym_LPAREN,
    ACTIONS(157), 1,
      anon_sym_EQ,
    STATE(49), 1,
      sym_argument_list,
    ACTIONS(131), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [888] = 5,
    ACTIONS(17), 1,
      anon_sym_SQUOTE,
    ACTIONS(19), 1,
      anon_sym_DQUOTE,
    ACTIONS(159), 1,
      anon_sym_RBRACE,
    STATE(77), 1,
      sym_pair,
    STATE(88), 1,
      sym_lit_string,
  [904] = 4,
    ACTIONS(17), 1,
      anon_sym_SQUOTE,
    ACTIONS(19), 1,
      anon_sym_DQUOTE,
    STATE(77), 1,
      sym_pair,
    STATE(88), 1,
      sym_lit_string,
  [917] = 3,
    ACTIONS(161), 1,
      anon_sym_LPAREN,
    STATE(71), 1,
      sym_argument_list,
    ACTIONS(131), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [928] = 1,
    ACTIONS(163), 4,
      anon_sym_RBRACE_RBRACE,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
  [935] = 1,
    ACTIONS(165), 4,
      anon_sym_RBRACE_RBRACE,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
  [942] = 1,
    ACTIONS(167), 4,
      anon_sym_RBRACE_RBRACE,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
  [949] = 1,
    ACTIONS(169), 4,
      anon_sym_RBRACE_RBRACE,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
  [956] = 1,
    ACTIONS(171), 4,
      anon_sym_RBRACE_RBRACE,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
  [963] = 1,
    ACTIONS(173), 4,
      anon_sym_RBRACE_RBRACE,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
  [970] = 1,
    ACTIONS(175), 4,
      anon_sym_RBRACE_RBRACE,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
  [977] = 1,
    ACTIONS(177), 4,
      anon_sym_RBRACE_RBRACE,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
  [984] = 1,
    ACTIONS(179), 4,
      anon_sym_RBRACE_RBRACE,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
  [991] = 1,
    ACTIONS(181), 4,
      anon_sym_RBRACE_RBRACE,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
  [998] = 1,
    ACTIONS(183), 4,
      anon_sym_RBRACE_RBRACE,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
  [1005] = 1,
    ACTIONS(185), 4,
      anon_sym_RBRACE_RBRACE,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
  [1012] = 1,
    ACTIONS(187), 4,
      anon_sym_RBRACE_RBRACE,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
  [1019] = 1,
    ACTIONS(189), 4,
      anon_sym_RBRACE_RBRACE,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
  [1026] = 3,
    ACTIONS(191), 1,
      anon_sym_COMMA,
    ACTIONS(193), 1,
      anon_sym_RBRACE,
    STATE(61), 1,
      aux_sym_dict_repeat1,
  [1036] = 1,
    ACTIONS(135), 3,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [1042] = 3,
    ACTIONS(195), 1,
      anon_sym_COMMA,
    ACTIONS(198), 1,
      anon_sym_RBRACE,
    STATE(52), 1,
      aux_sym_dict_repeat1,
  [1052] = 3,
    ACTIONS(65), 1,
      anon_sym_RPAREN,
    ACTIONS(200), 1,
      anon_sym_COMMA,
    STATE(62), 1,
      aux_sym_argument_list_repeat1,
  [1062] = 3,
    ACTIONS(55), 1,
      anon_sym_RPAREN,
    ACTIONS(202), 1,
      anon_sym_COMMA,
    STATE(62), 1,
      aux_sym_argument_list_repeat1,
  [1072] = 3,
    ACTIONS(204), 1,
      anon_sym_COMMA,
    ACTIONS(206), 1,
      anon_sym_RPAREN,
    STATE(54), 1,
      aux_sym_argument_list_repeat1,
  [1082] = 3,
    ACTIONS(208), 1,
      anon_sym_COMMA,
    ACTIONS(211), 1,
      anon_sym_RBRACK,
    STATE(56), 1,
      aux_sym_list_repeat1,
  [1092] = 3,
    ACTIONS(149), 1,
      anon_sym_RBRACE,
    ACTIONS(213), 1,
      anon_sym_COMMA,
    STATE(52), 1,
      aux_sym_dict_repeat1,
  [1102] = 3,
    ACTIONS(215), 1,
      anon_sym_COMMA,
    ACTIONS(217), 1,
      anon_sym_RPAREN,
    STATE(53), 1,
      aux_sym_argument_list_repeat1,
  [1112] = 3,
    ACTIONS(77), 1,
      anon_sym_RBRACK,
    ACTIONS(219), 1,
      anon_sym_COMMA,
    STATE(56), 1,
      aux_sym_list_repeat1,
  [1122] = 3,
    ACTIONS(221), 1,
      anon_sym_COMMA,
    ACTIONS(223), 1,
      anon_sym_RBRACE,
    STATE(57), 1,
      aux_sym_dict_repeat1,
  [1132] = 3,
    ACTIONS(137), 1,
      anon_sym_RBRACE,
    ACTIONS(225), 1,
      anon_sym_COMMA,
    STATE(52), 1,
      aux_sym_dict_repeat1,
  [1142] = 3,
    ACTIONS(227), 1,
      anon_sym_COMMA,
    ACTIONS(230), 1,
      anon_sym_RPAREN,
    STATE(62), 1,
      aux_sym_argument_list_repeat1,
  [1152] = 3,
    ACTIONS(232), 1,
      anon_sym_COMMA,
    ACTIONS(234), 1,
      anon_sym_RBRACK,
    STATE(59), 1,
      aux_sym_list_repeat1,
  [1162] = 3,
    ACTIONS(79), 1,
      anon_sym_RBRACK,
    ACTIONS(236), 1,
      anon_sym_COMMA,
    STATE(56), 1,
      aux_sym_list_repeat1,
  [1172] = 3,
    ACTIONS(238), 1,
      anon_sym_COMMA,
    ACTIONS(240), 1,
      anon_sym_RBRACK,
    STATE(64), 1,
      aux_sym_list_repeat1,
  [1182] = 1,
    ACTIONS(185), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [1187] = 1,
    ACTIONS(242), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [1192] = 1,
    ACTIONS(244), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [1197] = 1,
    ACTIONS(165), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [1202] = 1,
    ACTIONS(177), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [1207] = 1,
    ACTIONS(189), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [1212] = 1,
    ACTIONS(151), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [1217] = 1,
    ACTIONS(183), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [1222] = 1,
    ACTIONS(163), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [1227] = 1,
    ACTIONS(169), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [1232] = 1,
    ACTIONS(175), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [1237] = 1,
    ACTIONS(198), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [1242] = 1,
    ACTIONS(187), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [1247] = 1,
    ACTIONS(181), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [1252] = 1,
    ACTIONS(171), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [1257] = 1,
    ACTIONS(167), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [1262] = 1,
    ACTIONS(173), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [1267] = 1,
    ACTIONS(211), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [1272] = 1,
    ACTIONS(230), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [1277] = 1,
    ACTIONS(179), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [1282] = 1,
    ACTIONS(246), 1,
      anon_sym_SQUOTE,
  [1286] = 1,
    ACTIONS(234), 1,
      anon_sym_RBRACK,
  [1290] = 1,
    ACTIONS(248), 1,
      anon_sym_COLON,
  [1294] = 1,
    ACTIONS(223), 1,
      anon_sym_RBRACE,
  [1298] = 1,
    ACTIONS(246), 1,
      anon_sym_DQUOTE,
  [1302] = 1,
    ACTIONS(250), 1,
      anon_sym_DQUOTE,
  [1306] = 1,
    ACTIONS(250), 1,
      anon_sym_SQUOTE,
  [1310] = 1,
    ACTIONS(193), 1,
      anon_sym_RBRACE,
  [1314] = 1,
    ACTIONS(252), 1,
      anon_sym_RBRACE_RBRACE,
  [1318] = 1,
    ACTIONS(217), 1,
      anon_sym_RPAREN,
  [1322] = 1,
    ACTIONS(206), 1,
      anon_sym_RPAREN,
  [1326] = 1,
    ACTIONS(240), 1,
      anon_sym_RBRACK,
  [1330] = 1,
    ACTIONS(254), 1,
      aux_sym_lit_string_token2,
  [1334] = 1,
    ACTIONS(256), 1,
      aux_sym_lit_string_token1,
  [1338] = 1,
    ACTIONS(258), 1,
      ts_builtin_sym_end,
  [1342] = 1,
    ACTIONS(260), 1,
      aux_sym_jinja_expression_token1,
  [1346] = 1,
    ACTIONS(262), 1,
      aux_sym__jinja_comment_token1,
  [1350] = 1,
    ACTIONS(264), 1,
      aux_sym_lit_string_token1,
  [1354] = 1,
    ACTIONS(266), 1,
      aux_sym_lit_string_token2,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 44,
  [SMALL_STATE(4)] = 88,
  [SMALL_STATE(5)] = 131,
  [SMALL_STATE(6)] = 172,
  [SMALL_STATE(7)] = 213,
  [SMALL_STATE(8)] = 256,
  [SMALL_STATE(9)] = 297,
  [SMALL_STATE(10)] = 338,
  [SMALL_STATE(11)] = 378,
  [SMALL_STATE(12)] = 418,
  [SMALL_STATE(13)] = 456,
  [SMALL_STATE(14)] = 496,
  [SMALL_STATE(15)] = 536,
  [SMALL_STATE(16)] = 573,
  [SMALL_STATE(17)] = 610,
  [SMALL_STATE(18)] = 647,
  [SMALL_STATE(19)] = 684,
  [SMALL_STATE(20)] = 706,
  [SMALL_STATE(21)] = 728,
  [SMALL_STATE(22)] = 747,
  [SMALL_STATE(23)] = 766,
  [SMALL_STATE(24)] = 779,
  [SMALL_STATE(25)] = 788,
  [SMALL_STATE(26)] = 804,
  [SMALL_STATE(27)] = 814,
  [SMALL_STATE(28)] = 824,
  [SMALL_STATE(29)] = 840,
  [SMALL_STATE(30)] = 856,
  [SMALL_STATE(31)] = 864,
  [SMALL_STATE(32)] = 874,
  [SMALL_STATE(33)] = 888,
  [SMALL_STATE(34)] = 904,
  [SMALL_STATE(35)] = 917,
  [SMALL_STATE(36)] = 928,
  [SMALL_STATE(37)] = 935,
  [SMALL_STATE(38)] = 942,
  [SMALL_STATE(39)] = 949,
  [SMALL_STATE(40)] = 956,
  [SMALL_STATE(41)] = 963,
  [SMALL_STATE(42)] = 970,
  [SMALL_STATE(43)] = 977,
  [SMALL_STATE(44)] = 984,
  [SMALL_STATE(45)] = 991,
  [SMALL_STATE(46)] = 998,
  [SMALL_STATE(47)] = 1005,
  [SMALL_STATE(48)] = 1012,
  [SMALL_STATE(49)] = 1019,
  [SMALL_STATE(50)] = 1026,
  [SMALL_STATE(51)] = 1036,
  [SMALL_STATE(52)] = 1042,
  [SMALL_STATE(53)] = 1052,
  [SMALL_STATE(54)] = 1062,
  [SMALL_STATE(55)] = 1072,
  [SMALL_STATE(56)] = 1082,
  [SMALL_STATE(57)] = 1092,
  [SMALL_STATE(58)] = 1102,
  [SMALL_STATE(59)] = 1112,
  [SMALL_STATE(60)] = 1122,
  [SMALL_STATE(61)] = 1132,
  [SMALL_STATE(62)] = 1142,
  [SMALL_STATE(63)] = 1152,
  [SMALL_STATE(64)] = 1162,
  [SMALL_STATE(65)] = 1172,
  [SMALL_STATE(66)] = 1182,
  [SMALL_STATE(67)] = 1187,
  [SMALL_STATE(68)] = 1192,
  [SMALL_STATE(69)] = 1197,
  [SMALL_STATE(70)] = 1202,
  [SMALL_STATE(71)] = 1207,
  [SMALL_STATE(72)] = 1212,
  [SMALL_STATE(73)] = 1217,
  [SMALL_STATE(74)] = 1222,
  [SMALL_STATE(75)] = 1227,
  [SMALL_STATE(76)] = 1232,
  [SMALL_STATE(77)] = 1237,
  [SMALL_STATE(78)] = 1242,
  [SMALL_STATE(79)] = 1247,
  [SMALL_STATE(80)] = 1252,
  [SMALL_STATE(81)] = 1257,
  [SMALL_STATE(82)] = 1262,
  [SMALL_STATE(83)] = 1267,
  [SMALL_STATE(84)] = 1272,
  [SMALL_STATE(85)] = 1277,
  [SMALL_STATE(86)] = 1282,
  [SMALL_STATE(87)] = 1286,
  [SMALL_STATE(88)] = 1290,
  [SMALL_STATE(89)] = 1294,
  [SMALL_STATE(90)] = 1298,
  [SMALL_STATE(91)] = 1302,
  [SMALL_STATE(92)] = 1306,
  [SMALL_STATE(93)] = 1310,
  [SMALL_STATE(94)] = 1314,
  [SMALL_STATE(95)] = 1318,
  [SMALL_STATE(96)] = 1322,
  [SMALL_STATE(97)] = 1326,
  [SMALL_STATE(98)] = 1330,
  [SMALL_STATE(99)] = 1334,
  [SMALL_STATE(100)] = 1338,
  [SMALL_STATE(101)] = 1342,
  [SMALL_STATE(102)] = 1346,
  [SMALL_STATE(103)] = 1350,
  [SMALL_STATE(104)] = 1354,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0),
  [5] = {.entry = {.count = 1, .reusable = false}}, SHIFT(15),
  [7] = {.entry = {.count = 1, .reusable = false}}, SHIFT(101),
  [9] = {.entry = {.count = 1, .reusable = false}}, SHIFT(102),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(95),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(99),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(98),
  [21] = {.entry = {.count = 1, .reusable = false}}, SHIFT(44),
  [23] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [25] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [27] = {.entry = {.count = 1, .reusable = false}}, SHIFT(24),
  [29] = {.entry = {.count = 1, .reusable = false}}, SHIFT(58),
  [31] = {.entry = {.count = 1, .reusable = true}}, SHIFT(58),
  [33] = {.entry = {.count = 1, .reusable = true}}, SHIFT(96),
  [35] = {.entry = {.count = 1, .reusable = true}}, SHIFT(75),
  [37] = {.entry = {.count = 1, .reusable = false}}, SHIFT(55),
  [39] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [41] = {.entry = {.count = 1, .reusable = true}}, SHIFT(87),
  [43] = {.entry = {.count = 1, .reusable = true}}, SHIFT(69),
  [45] = {.entry = {.count = 1, .reusable = false}}, SHIFT(63),
  [47] = {.entry = {.count = 1, .reusable = true}}, SHIFT(63),
  [49] = {.entry = {.count = 1, .reusable = true}}, SHIFT(82),
  [51] = {.entry = {.count = 1, .reusable = false}}, SHIFT(84),
  [53] = {.entry = {.count = 1, .reusable = true}}, SHIFT(84),
  [55] = {.entry = {.count = 1, .reusable = true}}, SHIFT(81),
  [57] = {.entry = {.count = 1, .reusable = true}}, SHIFT(97),
  [59] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [61] = {.entry = {.count = 1, .reusable = false}}, SHIFT(65),
  [63] = {.entry = {.count = 1, .reusable = true}}, SHIFT(65),
  [65] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [67] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [69] = {.entry = {.count = 1, .reusable = true}}, SHIFT(79),
  [71] = {.entry = {.count = 1, .reusable = false}}, SHIFT(83),
  [73] = {.entry = {.count = 1, .reusable = true}}, SHIFT(83),
  [75] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [77] = {.entry = {.count = 1, .reusable = true}}, SHIFT(76),
  [79] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [81] = {.entry = {.count = 1, .reusable = false}}, SHIFT(94),
  [83] = {.entry = {.count = 1, .reusable = true}}, SHIFT(94),
  [85] = {.entry = {.count = 1, .reusable = false}}, SHIFT(67),
  [87] = {.entry = {.count = 1, .reusable = true}}, SHIFT(67),
  [89] = {.entry = {.count = 1, .reusable = true}}, SHIFT(103),
  [91] = {.entry = {.count = 1, .reusable = true}}, SHIFT(104),
  [93] = {.entry = {.count = 1, .reusable = false}}, SHIFT(85),
  [95] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [97] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [99] = {.entry = {.count = 1, .reusable = false}}, SHIFT(51),
  [101] = {.entry = {.count = 1, .reusable = false}}, SHIFT(68),
  [103] = {.entry = {.count = 1, .reusable = true}}, SHIFT(68),
  [105] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1),
  [107] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [109] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2),
  [111] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(15),
  [114] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(101),
  [117] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(102),
  [120] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(20),
  [123] = {.entry = {.count = 1, .reusable = true}}, SHIFT(89),
  [125] = {.entry = {.count = 1, .reusable = true}}, SHIFT(70),
  [127] = {.entry = {.count = 1, .reusable = true}}, SHIFT(93),
  [129] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [131] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__expr, 1),
  [133] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [135] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_identifier, 1),
  [137] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [139] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__jinja_comment, 2),
  [141] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__jinja_comment, 2),
  [143] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__jinja_value, 3),
  [145] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__jinja_value, 3),
  [147] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [149] = {.entry = {.count = 1, .reusable = true}}, SHIFT(66),
  [151] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_lit_string, 3),
  [153] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_jinja_expression, 2),
  [155] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_jinja_expression, 2),
  [157] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [159] = {.entry = {.count = 1, .reusable = true}}, SHIFT(80),
  [161] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [163] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_dict, 3),
  [165] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_list, 2),
  [167] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_argument_list, 4),
  [169] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_argument_list, 2),
  [171] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_dict, 5),
  [173] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_argument_list, 5),
  [175] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_list, 4),
  [177] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_dict, 2),
  [179] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_bool, 1),
  [181] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_list, 5),
  [183] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_list, 3),
  [185] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_dict, 4),
  [187] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_argument_list, 3),
  [189] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_fn_call, 2, .production_id = 1),
  [191] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [193] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [195] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_dict_repeat1, 2), SHIFT_REPEAT(34),
  [198] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_dict_repeat1, 2),
  [200] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [202] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [204] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [206] = {.entry = {.count = 1, .reusable = true}}, SHIFT(78),
  [208] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_list_repeat1, 2), SHIFT_REPEAT(17),
  [211] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_list_repeat1, 2),
  [213] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [215] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [217] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [219] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [221] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [223] = {.entry = {.count = 1, .reusable = true}}, SHIFT(74),
  [225] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [227] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_argument_list_repeat1, 2), SHIFT_REPEAT(12),
  [230] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_argument_list_repeat1, 2),
  [232] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [234] = {.entry = {.count = 1, .reusable = true}}, SHIFT(73),
  [236] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [238] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [240] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [242] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_kwarg, 3, .production_id = 2),
  [244] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pair, 3, .production_id = 2),
  [246] = {.entry = {.count = 1, .reusable = true}}, SHIFT(72),
  [248] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [250] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [252] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [254] = {.entry = {.count = 1, .reusable = true}}, SHIFT(91),
  [256] = {.entry = {.count = 1, .reusable = true}}, SHIFT(92),
  [258] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [260] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [262] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [264] = {.entry = {.count = 1, .reusable = true}}, SHIFT(86),
  [266] = {.entry = {.count = 1, .reusable = true}}, SHIFT(90),
};

#ifdef __cplusplus
extern "C" {
#endif
#ifdef _WIN32
#define extern __declspec(dllexport)
#endif

extern const TSLanguage *tree_sitter_jinja2(void) {
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
    .field_names = ts_field_names,
    .field_map_slices = ts_field_map_slices,
    .field_map_entries = ts_field_map_entries,
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
