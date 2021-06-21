#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 13
#define STATE_COUNT 104
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 42
#define ALIAS_COUNT 0
#define TOKEN_COUNT 24
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
  sym_source_file = 24,
  sym__jinja_value = 25,
  sym_jinja_expression = 26,
  sym__jinja_comment = 27,
  sym__expr = 28,
  sym_fn_call = 29,
  sym_argument_list = 30,
  sym_lit_string = 31,
  sym_bool = 32,
  sym_list = 33,
  sym_dict = 34,
  sym_pair = 35,
  sym_identifier = 36,
  sym_kwarg = 37,
  aux_sym_source_file_repeat1 = 38,
  aux_sym_argument_list_repeat1 = 39,
  aux_sym_list_repeat1 = 40,
  aux_sym_dict_repeat1 = 41,
};

static const char *ts_symbol_names[] = {
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

static TSSymbol ts_symbol_map[] = {
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

static const char *ts_field_names[] = {
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

static TSSymbol ts_alias_sequences[PRODUCTION_ID_COUNT][MAX_ALIAS_SEQUENCE_LENGTH] = {
  [0] = {0},
};

static uint16_t ts_non_terminal_alias_map[] = {
  0,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(13);
      if (lookahead == '"') ADVANCE(28);
      if (lookahead == '\'') ADVANCE(24);
      if (lookahead == '(') ADVANCE(21);
      if (lookahead == ')') ADVANCE(23);
      if (lookahead == ',') ADVANCE(22);
      if (lookahead == ':') ADVANCE(39);
      if (lookahead == '=') ADVANCE(48);
      if (lookahead == 'F') ADVANCE(40);
      if (lookahead == 'T') ADVANCE(44);
      if (lookahead == '[') ADVANCE(34);
      if (lookahead == ']') ADVANCE(35);
      if (lookahead == '{') ADVANCE(37);
      if (lookahead == '}') ADVANCE(38);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(47);
      END_STATE();
    case 1:
      if (lookahead == '"') ADVANCE(28);
      if (lookahead == '\'') ADVANCE(24);
      if (lookahead == ')') ADVANCE(23);
      if (lookahead == ',') ADVANCE(22);
      if (lookahead == ':') ADVANCE(39);
      if (lookahead == 'F') ADVANCE(40);
      if (lookahead == 'T') ADVANCE(44);
      if (lookahead == '[') ADVANCE(34);
      if (lookahead == ']') ADVANCE(35);
      if (lookahead == '{') ADVANCE(36);
      if (lookahead == '}') ADVANCE(9);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(1)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(47);
      END_STATE();
    case 2:
      if (lookahead == '#') ADVANCE(18);
      if (lookahead == '%') ADVANCE(16);
      if (lookahead == '{') ADVANCE(14);
      if (lookahead != 0) ADVANCE(50);
      END_STATE();
    case 3:
      if (lookahead == '#') ADVANCE(6);
      if (lookahead == '}') ADVANCE(20);
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
      if (lookahead == '}') ADVANCE(19);
      if (lookahead != 0) ADVANCE(5);
      END_STATE();
    case 7:
      if (lookahead == '%') ADVANCE(10);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(7);
      if (lookahead != 0) ADVANCE(8);
      END_STATE();
    case 8:
      if (lookahead == '%') ADVANCE(10);
      if (lookahead != 0) ADVANCE(8);
      END_STATE();
    case 9:
      if (lookahead == '}') ADVANCE(15);
      END_STATE();
    case 10:
      if (lookahead == '}') ADVANCE(17);
      if (lookahead != 0) ADVANCE(8);
      END_STATE();
    case 11:
      if (lookahead != 0 &&
          lookahead != '#' &&
          lookahead != '%' &&
          lookahead != '{') ADVANCE(50);
      END_STATE();
    case 12:
      if (eof) ADVANCE(13);
      if (lookahead == '{') ADVANCE(2);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(49);
      if (lookahead != 0) ADVANCE(50);
      END_STATE();
    case 13:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 14:
      ACCEPT_TOKEN(anon_sym_LBRACE_LBRACE);
      END_STATE();
    case 15:
      ACCEPT_TOKEN(anon_sym_RBRACE_RBRACE);
      END_STATE();
    case 16:
      ACCEPT_TOKEN(anon_sym_LBRACE_PERCENT);
      END_STATE();
    case 17:
      ACCEPT_TOKEN(aux_sym_jinja_expression_token1);
      END_STATE();
    case 18:
      ACCEPT_TOKEN(anon_sym_LBRACE_POUND);
      END_STATE();
    case 19:
      ACCEPT_TOKEN(aux_sym__jinja_comment_token1);
      END_STATE();
    case 20:
      ACCEPT_TOKEN(aux_sym__jinja_comment_token1);
      if (lookahead == '#') ADVANCE(6);
      if (lookahead != 0) ADVANCE(5);
      END_STATE();
    case 21:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 22:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 23:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 24:
      ACCEPT_TOKEN(anon_sym_SQUOTE);
      END_STATE();
    case 25:
      ACCEPT_TOKEN(aux_sym_lit_string_token1);
      if (lookahead == '\\') ADVANCE(27);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(25);
      if (lookahead != 0 &&
          lookahead != '\'') ADVANCE(26);
      END_STATE();
    case 26:
      ACCEPT_TOKEN(aux_sym_lit_string_token1);
      if (lookahead == '\\') ADVANCE(27);
      if (lookahead != 0 &&
          lookahead != '\'') ADVANCE(26);
      END_STATE();
    case 27:
      ACCEPT_TOKEN(aux_sym_lit_string_token1);
      if (lookahead != 0 &&
          lookahead != '\\') ADVANCE(26);
      if (lookahead == '\\') ADVANCE(27);
      END_STATE();
    case 28:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 29:
      ACCEPT_TOKEN(aux_sym_lit_string_token2);
      if (lookahead == '\\') ADVANCE(31);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(29);
      if (lookahead != 0 &&
          lookahead != '"') ADVANCE(30);
      END_STATE();
    case 30:
      ACCEPT_TOKEN(aux_sym_lit_string_token2);
      if (lookahead == '\\') ADVANCE(31);
      if (lookahead != 0 &&
          lookahead != '"') ADVANCE(30);
      END_STATE();
    case 31:
      ACCEPT_TOKEN(aux_sym_lit_string_token2);
      if (lookahead != 0 &&
          lookahead != '\\') ADVANCE(30);
      if (lookahead == '\\') ADVANCE(31);
      END_STATE();
    case 32:
      ACCEPT_TOKEN(anon_sym_True);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(47);
      END_STATE();
    case 33:
      ACCEPT_TOKEN(anon_sym_False);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(47);
      END_STATE();
    case 34:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 35:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 36:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 37:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      if (lookahead == '#') ADVANCE(18);
      if (lookahead == '%') ADVANCE(16);
      if (lookahead == '{') ADVANCE(14);
      END_STATE();
    case 38:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 39:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 40:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'a') ADVANCE(43);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(47);
      END_STATE();
    case 41:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'e') ADVANCE(32);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(47);
      END_STATE();
    case 42:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'e') ADVANCE(33);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(47);
      END_STATE();
    case 43:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'l') ADVANCE(45);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(47);
      END_STATE();
    case 44:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'r') ADVANCE(46);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(47);
      END_STATE();
    case 45:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 's') ADVANCE(42);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(47);
      END_STATE();
    case 46:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'u') ADVANCE(41);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(47);
      END_STATE();
    case 47:
      ACCEPT_TOKEN(sym__identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(47);
      END_STATE();
    case 48:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 49:
      ACCEPT_TOKEN(sym__text);
      if (lookahead == '{') ADVANCE(2);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(49);
      if (lookahead != 0) ADVANCE(50);
      END_STATE();
    case 50:
      ACCEPT_TOKEN(sym__text);
      if (lookahead == '{') ADVANCE(11);
      if (lookahead != 0) ADVANCE(50);
      END_STATE();
    default:
      return false;
  }
}

static TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 12},
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
  [19] = {.lex_state = 12},
  [20] = {.lex_state = 12},
  [21] = {.lex_state = 0},
  [22] = {.lex_state = 0},
  [23] = {.lex_state = 12},
  [24] = {.lex_state = 0},
  [25] = {.lex_state = 0},
  [26] = {.lex_state = 0},
  [27] = {.lex_state = 12},
  [28] = {.lex_state = 0},
  [29] = {.lex_state = 12},
  [30] = {.lex_state = 1},
  [31] = {.lex_state = 1},
  [32] = {.lex_state = 1},
  [33] = {.lex_state = 1},
  [34] = {.lex_state = 1},
  [35] = {.lex_state = 1},
  [36] = {.lex_state = 1},
  [37] = {.lex_state = 1},
  [38] = {.lex_state = 1},
  [39] = {.lex_state = 1},
  [40] = {.lex_state = 0},
  [41] = {.lex_state = 1},
  [42] = {.lex_state = 1},
  [43] = {.lex_state = 1},
  [44] = {.lex_state = 1},
  [45] = {.lex_state = 1},
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
  [82] = {.lex_state = 0},
  [83] = {.lex_state = 0},
  [84] = {.lex_state = 0},
  [85] = {.lex_state = 0},
  [86] = {.lex_state = 0},
  [87] = {.lex_state = 0},
  [88] = {.lex_state = 0},
  [89] = {.lex_state = 0},
  [90] = {.lex_state = 0},
  [91] = {.lex_state = 1},
  [92] = {.lex_state = 0},
  [93] = {.lex_state = 0},
  [94] = {.lex_state = 0},
  [95] = {.lex_state = 0},
  [96] = {.lex_state = 7},
  [97] = {.lex_state = 29},
  [98] = {.lex_state = 25},
  [99] = {.lex_state = 0},
  [100] = {.lex_state = 0},
  [101] = {.lex_state = 4},
  [102] = {.lex_state = 25},
  [103] = {.lex_state = 29},
};

static uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
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
  },
  [1] = {
    [sym_source_file] = STATE(99),
    [sym__jinja_value] = STATE(20),
    [sym_jinja_expression] = STATE(20),
    [sym__jinja_comment] = STATE(20),
    [aux_sym_source_file_repeat1] = STATE(20),
    [ts_builtin_sym_end] = ACTIONS(3),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(5),
    [anon_sym_LBRACE_PERCENT] = ACTIONS(7),
    [anon_sym_LBRACE_POUND] = ACTIONS(9),
    [sym__text] = ACTIONS(11),
  },
};

static uint16_t ts_small_parse_table[] = {
  [0] = 10,
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
    STATE(54), 1,
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
  [38] = 10,
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
      anon_sym_COMMA,
    ACTIONS(31), 1,
      anon_sym_RPAREN,
    STATE(54), 1,
      sym_identifier,
    ACTIONS(21), 2,
      anon_sym_True,
      anon_sym_False,
    STATE(50), 7,
      sym__expr,
      sym_fn_call,
      sym_lit_string,
      sym_bool,
      sym_list,
      sym_dict,
      sym_kwarg,
  [76] = 10,
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
      anon_sym_RBRACK,
    STATE(82), 1,
      sym_identifier,
    ACTIONS(21), 2,
      anon_sym_True,
      anon_sym_False,
    STATE(61), 6,
      sym__expr,
      sym_fn_call,
      sym_lit_string,
      sym_bool,
      sym_list,
      sym_dict,
  [113] = 9,
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
    ACTIONS(37), 1,
      anon_sym_RPAREN,
    STATE(54), 1,
      sym_identifier,
    ACTIONS(21), 2,
      anon_sym_True,
      anon_sym_False,
    STATE(83), 7,
      sym__expr,
      sym_fn_call,
      sym_lit_string,
      sym_bool,
      sym_list,
      sym_dict,
      sym_kwarg,
  [148] = 9,
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
    ACTIONS(39), 1,
      anon_sym_RPAREN,
    STATE(54), 1,
      sym_identifier,
    ACTIONS(21), 2,
      anon_sym_True,
      anon_sym_False,
    STATE(83), 7,
      sym__expr,
      sym_fn_call,
      sym_lit_string,
      sym_bool,
      sym_list,
      sym_dict,
      sym_kwarg,
  [183] = 9,
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
      anon_sym_RPAREN,
    STATE(54), 1,
      sym_identifier,
    ACTIONS(21), 2,
      anon_sym_True,
      anon_sym_False,
    STATE(83), 7,
      sym__expr,
      sym_fn_call,
      sym_lit_string,
      sym_bool,
      sym_list,
      sym_dict,
      sym_kwarg,
  [218] = 10,
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
    ACTIONS(43), 1,
      anon_sym_COMMA,
    ACTIONS(45), 1,
      anon_sym_RBRACK,
    STATE(82), 1,
      sym_identifier,
    ACTIONS(21), 2,
      anon_sym_True,
      anon_sym_False,
    STATE(60), 6,
      sym__expr,
      sym_fn_call,
      sym_lit_string,
      sym_bool,
      sym_list,
      sym_dict,
  [255] = 9,
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
    ACTIONS(47), 1,
      anon_sym_RPAREN,
    STATE(54), 1,
      sym_identifier,
    ACTIONS(21), 2,
      anon_sym_True,
      anon_sym_False,
    STATE(83), 7,
      sym__expr,
      sym_fn_call,
      sym_lit_string,
      sym_bool,
      sym_list,
      sym_dict,
      sym_kwarg,
  [290] = 9,
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
      anon_sym_RBRACK,
    STATE(82), 1,
      sym_identifier,
    ACTIONS(21), 2,
      anon_sym_True,
      anon_sym_False,
    STATE(75), 6,
      sym__expr,
      sym_fn_call,
      sym_lit_string,
      sym_bool,
      sym_list,
      sym_dict,
  [324] = 9,
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
      anon_sym_RBRACK,
    STATE(82), 1,
      sym_identifier,
    ACTIONS(21), 2,
      anon_sym_True,
      anon_sym_False,
    STATE(75), 6,
      sym__expr,
      sym_fn_call,
      sym_lit_string,
      sym_bool,
      sym_list,
      sym_dict,
  [358] = 9,
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
    ACTIONS(53), 1,
      anon_sym_RBRACK,
    STATE(82), 1,
      sym_identifier,
    ACTIONS(21), 2,
      anon_sym_True,
      anon_sym_False,
    STATE(75), 6,
      sym__expr,
      sym_fn_call,
      sym_lit_string,
      sym_bool,
      sym_list,
      sym_dict,
  [392] = 9,
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
    ACTIONS(55), 1,
      anon_sym_RBRACK,
    STATE(82), 1,
      sym_identifier,
    ACTIONS(21), 2,
      anon_sym_True,
      anon_sym_False,
    STATE(75), 6,
      sym__expr,
      sym_fn_call,
      sym_lit_string,
      sym_bool,
      sym_list,
      sym_dict,
  [426] = 8,
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
    STATE(54), 1,
      sym_identifier,
    ACTIONS(21), 2,
      anon_sym_True,
      anon_sym_False,
    STATE(83), 7,
      sym__expr,
      sym_fn_call,
      sym_lit_string,
      sym_bool,
      sym_list,
      sym_dict,
      sym_kwarg,
  [458] = 8,
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
    STATE(82), 1,
      sym_identifier,
    ACTIONS(21), 2,
      anon_sym_True,
      anon_sym_False,
    STATE(75), 6,
      sym__expr,
      sym_fn_call,
      sym_lit_string,
      sym_bool,
      sym_list,
      sym_dict,
  [489] = 8,
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
    STATE(82), 1,
      sym_identifier,
    ACTIONS(21), 2,
      anon_sym_True,
      anon_sym_False,
    STATE(91), 6,
      sym__expr,
      sym_fn_call,
      sym_lit_string,
      sym_bool,
      sym_list,
      sym_dict,
  [520] = 8,
    ACTIONS(27), 1,
      sym__identifier,
    ACTIONS(57), 1,
      anon_sym_SQUOTE,
    ACTIONS(59), 1,
      anon_sym_DQUOTE,
    ACTIONS(63), 1,
      anon_sym_LBRACK,
    ACTIONS(65), 1,
      anon_sym_LBRACE,
    STATE(63), 1,
      sym_identifier,
    ACTIONS(61), 2,
      anon_sym_True,
      anon_sym_False,
    STATE(84), 6,
      sym__expr,
      sym_fn_call,
      sym_lit_string,
      sym_bool,
      sym_list,
      sym_dict,
  [551] = 8,
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
    STATE(82), 1,
      sym_identifier,
    ACTIONS(21), 2,
      anon_sym_True,
      anon_sym_False,
    STATE(64), 6,
      sym__expr,
      sym_fn_call,
      sym_lit_string,
      sym_bool,
      sym_list,
      sym_dict,
  [582] = 6,
    ACTIONS(67), 1,
      ts_builtin_sym_end,
    ACTIONS(69), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(72), 1,
      anon_sym_LBRACE_PERCENT,
    ACTIONS(75), 1,
      anon_sym_LBRACE_POUND,
    ACTIONS(78), 1,
      sym__text,
    STATE(19), 4,
      sym__jinja_value,
      sym_jinja_expression,
      sym__jinja_comment,
      aux_sym_source_file_repeat1,
  [604] = 6,
    ACTIONS(5), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(7), 1,
      anon_sym_LBRACE_PERCENT,
    ACTIONS(9), 1,
      anon_sym_LBRACE_POUND,
    ACTIONS(81), 1,
      ts_builtin_sym_end,
    ACTIONS(83), 1,
      sym__text,
    STATE(19), 4,
      sym__jinja_value,
      sym_jinja_expression,
      sym__jinja_comment,
      aux_sym_source_file_repeat1,
  [626] = 6,
    ACTIONS(17), 1,
      anon_sym_SQUOTE,
    ACTIONS(19), 1,
      anon_sym_DQUOTE,
    ACTIONS(85), 1,
      anon_sym_COMMA,
    ACTIONS(87), 1,
      anon_sym_RBRACE,
    STATE(46), 1,
      sym_pair,
    STATE(92), 1,
      sym_lit_string,
  [645] = 6,
    ACTIONS(17), 1,
      anon_sym_SQUOTE,
    ACTIONS(19), 1,
      anon_sym_DQUOTE,
    ACTIONS(89), 1,
      anon_sym_COMMA,
    ACTIONS(91), 1,
      anon_sym_RBRACE,
    STATE(59), 1,
      sym_pair,
    STATE(92), 1,
      sym_lit_string,
  [664] = 2,
    ACTIONS(93), 2,
      ts_builtin_sym_end,
      sym__text,
    ACTIONS(95), 3,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LBRACE_PERCENT,
      anon_sym_LBRACE_POUND,
  [674] = 5,
    ACTIONS(17), 1,
      anon_sym_SQUOTE,
    ACTIONS(19), 1,
      anon_sym_DQUOTE,
    ACTIONS(97), 1,
      anon_sym_RBRACE,
    STATE(65), 1,
      sym_pair,
    STATE(92), 1,
      sym_lit_string,
  [690] = 5,
    ACTIONS(17), 1,
      anon_sym_SQUOTE,
    ACTIONS(19), 1,
      anon_sym_DQUOTE,
    ACTIONS(99), 1,
      anon_sym_RBRACE,
    STATE(65), 1,
      sym_pair,
    STATE(92), 1,
      sym_lit_string,
  [706] = 5,
    ACTIONS(17), 1,
      anon_sym_SQUOTE,
    ACTIONS(19), 1,
      anon_sym_DQUOTE,
    ACTIONS(101), 1,
      anon_sym_RBRACE,
    STATE(65), 1,
      sym_pair,
    STATE(92), 1,
      sym_lit_string,
  [722] = 2,
    ACTIONS(103), 2,
      ts_builtin_sym_end,
      sym__text,
    ACTIONS(105), 3,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LBRACE_PERCENT,
      anon_sym_LBRACE_POUND,
  [732] = 5,
    ACTIONS(17), 1,
      anon_sym_SQUOTE,
    ACTIONS(19), 1,
      anon_sym_DQUOTE,
    ACTIONS(107), 1,
      anon_sym_RBRACE,
    STATE(65), 1,
      sym_pair,
    STATE(92), 1,
      sym_lit_string,
  [748] = 2,
    ACTIONS(109), 2,
      ts_builtin_sym_end,
      sym__text,
    ACTIONS(111), 3,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LBRACE_PERCENT,
      anon_sym_LBRACE_POUND,
  [758] = 1,
    ACTIONS(113), 5,
      anon_sym_RBRACE_RBRACE,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
      anon_sym_COLON,
  [766] = 1,
    ACTIONS(115), 4,
      anon_sym_RBRACE_RBRACE,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
  [773] = 1,
    ACTIONS(117), 4,
      anon_sym_RBRACE_RBRACE,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
  [780] = 1,
    ACTIONS(119), 4,
      anon_sym_RBRACE_RBRACE,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
  [787] = 1,
    ACTIONS(121), 4,
      anon_sym_RBRACE_RBRACE,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
  [794] = 1,
    ACTIONS(123), 4,
      anon_sym_RBRACE_RBRACE,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
  [801] = 1,
    ACTIONS(125), 4,
      anon_sym_RBRACE_RBRACE,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
  [808] = 1,
    ACTIONS(127), 4,
      anon_sym_RBRACE_RBRACE,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
  [815] = 1,
    ACTIONS(129), 4,
      anon_sym_RBRACE_RBRACE,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
  [822] = 1,
    ACTIONS(131), 4,
      anon_sym_RBRACE_RBRACE,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
  [829] = 4,
    ACTIONS(17), 1,
      anon_sym_SQUOTE,
    ACTIONS(19), 1,
      anon_sym_DQUOTE,
    STATE(65), 1,
      sym_pair,
    STATE(92), 1,
      sym_lit_string,
  [842] = 1,
    ACTIONS(133), 4,
      anon_sym_RBRACE_RBRACE,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
  [849] = 1,
    ACTIONS(135), 4,
      anon_sym_RBRACE_RBRACE,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
  [856] = 1,
    ACTIONS(137), 4,
      anon_sym_RBRACE_RBRACE,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
  [863] = 1,
    ACTIONS(139), 4,
      anon_sym_RBRACE_RBRACE,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
  [870] = 1,
    ACTIONS(141), 4,
      anon_sym_RBRACE_RBRACE,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
  [877] = 3,
    ACTIONS(143), 1,
      anon_sym_COMMA,
    ACTIONS(145), 1,
      anon_sym_RBRACE,
    STATE(57), 1,
      aux_sym_dict_repeat1,
  [887] = 3,
    ACTIONS(147), 1,
      anon_sym_COMMA,
    ACTIONS(150), 1,
      anon_sym_RPAREN,
    STATE(47), 1,
      aux_sym_argument_list_repeat1,
  [897] = 3,
    ACTIONS(152), 1,
      anon_sym_COMMA,
    ACTIONS(155), 1,
      anon_sym_RBRACK,
    STATE(48), 1,
      aux_sym_list_repeat1,
  [907] = 3,
    ACTIONS(39), 1,
      anon_sym_RPAREN,
    ACTIONS(157), 1,
      anon_sym_COMMA,
    STATE(47), 1,
      aux_sym_argument_list_repeat1,
  [917] = 3,
    ACTIONS(159), 1,
      anon_sym_COMMA,
    ACTIONS(161), 1,
      anon_sym_RPAREN,
    STATE(49), 1,
      aux_sym_argument_list_repeat1,
  [927] = 3,
    ACTIONS(163), 1,
      anon_sym_COMMA,
    ACTIONS(166), 1,
      anon_sym_RBRACE,
    STATE(51), 1,
      aux_sym_dict_repeat1,
  [937] = 3,
    ACTIONS(97), 1,
      anon_sym_RBRACE,
    ACTIONS(168), 1,
      anon_sym_COMMA,
    STATE(51), 1,
      aux_sym_dict_repeat1,
  [947] = 3,
    ACTIONS(47), 1,
      anon_sym_RPAREN,
    ACTIONS(170), 1,
      anon_sym_COMMA,
    STATE(47), 1,
      aux_sym_argument_list_repeat1,
  [957] = 3,
    ACTIONS(172), 1,
      anon_sym_LPAREN,
    ACTIONS(174), 1,
      anon_sym_EQ,
    STATE(36), 1,
      sym_argument_list,
  [967] = 3,
    ACTIONS(176), 1,
      anon_sym_COMMA,
    ACTIONS(178), 1,
      anon_sym_RPAREN,
    STATE(53), 1,
      aux_sym_argument_list_repeat1,
  [977] = 3,
    ACTIONS(51), 1,
      anon_sym_RBRACK,
    ACTIONS(180), 1,
      anon_sym_COMMA,
    STATE(48), 1,
      aux_sym_list_repeat1,
  [987] = 3,
    ACTIONS(107), 1,
      anon_sym_RBRACE,
    ACTIONS(182), 1,
      anon_sym_COMMA,
    STATE(51), 1,
      aux_sym_dict_repeat1,
  [997] = 3,
    ACTIONS(53), 1,
      anon_sym_RBRACK,
    ACTIONS(184), 1,
      anon_sym_COMMA,
    STATE(48), 1,
      aux_sym_list_repeat1,
  [1007] = 3,
    ACTIONS(186), 1,
      anon_sym_COMMA,
    ACTIONS(188), 1,
      anon_sym_RBRACE,
    STATE(52), 1,
      aux_sym_dict_repeat1,
  [1017] = 3,
    ACTIONS(190), 1,
      anon_sym_COMMA,
    ACTIONS(192), 1,
      anon_sym_RBRACK,
    STATE(56), 1,
      aux_sym_list_repeat1,
  [1027] = 3,
    ACTIONS(194), 1,
      anon_sym_COMMA,
    ACTIONS(196), 1,
      anon_sym_RBRACK,
    STATE(58), 1,
      aux_sym_list_repeat1,
  [1037] = 1,
    ACTIONS(137), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [1042] = 2,
    ACTIONS(198), 1,
      anon_sym_LPAREN,
    STATE(69), 1,
      sym_argument_list,
  [1049] = 1,
    ACTIONS(200), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [1054] = 1,
    ACTIONS(166), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [1059] = 1,
    ACTIONS(133), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [1064] = 1,
    ACTIONS(127), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [1069] = 1,
    ACTIONS(139), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [1074] = 1,
    ACTIONS(125), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [1079] = 1,
    ACTIONS(113), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [1084] = 1,
    ACTIONS(117), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [1089] = 1,
    ACTIONS(121), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [1094] = 1,
    ACTIONS(131), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [1099] = 1,
    ACTIONS(135), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [1104] = 1,
    ACTIONS(155), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [1109] = 1,
    ACTIONS(141), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [1114] = 1,
    ACTIONS(129), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [1119] = 1,
    ACTIONS(119), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [1124] = 1,
    ACTIONS(123), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [1129] = 1,
    ACTIONS(115), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [1134] = 1,
    ACTIONS(202), 2,
      anon_sym_LPAREN,
      anon_sym_EQ,
  [1139] = 2,
    ACTIONS(172), 1,
      anon_sym_LPAREN,
    STATE(36), 1,
      sym_argument_list,
  [1146] = 1,
    ACTIONS(150), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [1151] = 1,
    ACTIONS(204), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [1156] = 1,
    ACTIONS(206), 1,
      anon_sym_DQUOTE,
  [1160] = 1,
    ACTIONS(192), 1,
      anon_sym_RBRACK,
  [1164] = 1,
    ACTIONS(206), 1,
      anon_sym_SQUOTE,
  [1168] = 1,
    ACTIONS(188), 1,
      anon_sym_RBRACE,
  [1172] = 1,
    ACTIONS(145), 1,
      anon_sym_RBRACE,
  [1176] = 1,
    ACTIONS(208), 1,
      anon_sym_SQUOTE,
  [1180] = 1,
    ACTIONS(210), 1,
      anon_sym_RBRACE_RBRACE,
  [1184] = 1,
    ACTIONS(212), 1,
      anon_sym_COLON,
  [1188] = 1,
    ACTIONS(208), 1,
      anon_sym_DQUOTE,
  [1192] = 1,
    ACTIONS(178), 1,
      anon_sym_RPAREN,
  [1196] = 1,
    ACTIONS(161), 1,
      anon_sym_RPAREN,
  [1200] = 1,
    ACTIONS(214), 1,
      aux_sym_jinja_expression_token1,
  [1204] = 1,
    ACTIONS(216), 1,
      aux_sym_lit_string_token2,
  [1208] = 1,
    ACTIONS(218), 1,
      aux_sym_lit_string_token1,
  [1212] = 1,
    ACTIONS(220), 1,
      ts_builtin_sym_end,
  [1216] = 1,
    ACTIONS(196), 1,
      anon_sym_RBRACK,
  [1220] = 1,
    ACTIONS(222), 1,
      aux_sym__jinja_comment_token1,
  [1224] = 1,
    ACTIONS(224), 1,
      aux_sym_lit_string_token1,
  [1228] = 1,
    ACTIONS(226), 1,
      aux_sym_lit_string_token2,
};

static uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 38,
  [SMALL_STATE(4)] = 76,
  [SMALL_STATE(5)] = 113,
  [SMALL_STATE(6)] = 148,
  [SMALL_STATE(7)] = 183,
  [SMALL_STATE(8)] = 218,
  [SMALL_STATE(9)] = 255,
  [SMALL_STATE(10)] = 290,
  [SMALL_STATE(11)] = 324,
  [SMALL_STATE(12)] = 358,
  [SMALL_STATE(13)] = 392,
  [SMALL_STATE(14)] = 426,
  [SMALL_STATE(15)] = 458,
  [SMALL_STATE(16)] = 489,
  [SMALL_STATE(17)] = 520,
  [SMALL_STATE(18)] = 551,
  [SMALL_STATE(19)] = 582,
  [SMALL_STATE(20)] = 604,
  [SMALL_STATE(21)] = 626,
  [SMALL_STATE(22)] = 645,
  [SMALL_STATE(23)] = 664,
  [SMALL_STATE(24)] = 674,
  [SMALL_STATE(25)] = 690,
  [SMALL_STATE(26)] = 706,
  [SMALL_STATE(27)] = 722,
  [SMALL_STATE(28)] = 732,
  [SMALL_STATE(29)] = 748,
  [SMALL_STATE(30)] = 758,
  [SMALL_STATE(31)] = 766,
  [SMALL_STATE(32)] = 773,
  [SMALL_STATE(33)] = 780,
  [SMALL_STATE(34)] = 787,
  [SMALL_STATE(35)] = 794,
  [SMALL_STATE(36)] = 801,
  [SMALL_STATE(37)] = 808,
  [SMALL_STATE(38)] = 815,
  [SMALL_STATE(39)] = 822,
  [SMALL_STATE(40)] = 829,
  [SMALL_STATE(41)] = 842,
  [SMALL_STATE(42)] = 849,
  [SMALL_STATE(43)] = 856,
  [SMALL_STATE(44)] = 863,
  [SMALL_STATE(45)] = 870,
  [SMALL_STATE(46)] = 877,
  [SMALL_STATE(47)] = 887,
  [SMALL_STATE(48)] = 897,
  [SMALL_STATE(49)] = 907,
  [SMALL_STATE(50)] = 917,
  [SMALL_STATE(51)] = 927,
  [SMALL_STATE(52)] = 937,
  [SMALL_STATE(53)] = 947,
  [SMALL_STATE(54)] = 957,
  [SMALL_STATE(55)] = 967,
  [SMALL_STATE(56)] = 977,
  [SMALL_STATE(57)] = 987,
  [SMALL_STATE(58)] = 997,
  [SMALL_STATE(59)] = 1007,
  [SMALL_STATE(60)] = 1017,
  [SMALL_STATE(61)] = 1027,
  [SMALL_STATE(62)] = 1037,
  [SMALL_STATE(63)] = 1042,
  [SMALL_STATE(64)] = 1049,
  [SMALL_STATE(65)] = 1054,
  [SMALL_STATE(66)] = 1059,
  [SMALL_STATE(67)] = 1064,
  [SMALL_STATE(68)] = 1069,
  [SMALL_STATE(69)] = 1074,
  [SMALL_STATE(70)] = 1079,
  [SMALL_STATE(71)] = 1084,
  [SMALL_STATE(72)] = 1089,
  [SMALL_STATE(73)] = 1094,
  [SMALL_STATE(74)] = 1099,
  [SMALL_STATE(75)] = 1104,
  [SMALL_STATE(76)] = 1109,
  [SMALL_STATE(77)] = 1114,
  [SMALL_STATE(78)] = 1119,
  [SMALL_STATE(79)] = 1124,
  [SMALL_STATE(80)] = 1129,
  [SMALL_STATE(81)] = 1134,
  [SMALL_STATE(82)] = 1139,
  [SMALL_STATE(83)] = 1146,
  [SMALL_STATE(84)] = 1151,
  [SMALL_STATE(85)] = 1156,
  [SMALL_STATE(86)] = 1160,
  [SMALL_STATE(87)] = 1164,
  [SMALL_STATE(88)] = 1168,
  [SMALL_STATE(89)] = 1172,
  [SMALL_STATE(90)] = 1176,
  [SMALL_STATE(91)] = 1180,
  [SMALL_STATE(92)] = 1184,
  [SMALL_STATE(93)] = 1188,
  [SMALL_STATE(94)] = 1192,
  [SMALL_STATE(95)] = 1196,
  [SMALL_STATE(96)] = 1200,
  [SMALL_STATE(97)] = 1204,
  [SMALL_STATE(98)] = 1208,
  [SMALL_STATE(99)] = 1212,
  [SMALL_STATE(100)] = 1216,
  [SMALL_STATE(101)] = 1220,
  [SMALL_STATE(102)] = 1224,
  [SMALL_STATE(103)] = 1228,
};

static TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0),
  [5] = {.entry = {.count = 1, .reusable = false}}, SHIFT(16),
  [7] = {.entry = {.count = 1, .reusable = false}}, SHIFT(96),
  [9] = {.entry = {.count = 1, .reusable = false}}, SHIFT(101),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(94),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(98),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(97),
  [21] = {.entry = {.count = 1, .reusable = false}}, SHIFT(41),
  [23] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [25] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [27] = {.entry = {.count = 1, .reusable = false}}, SHIFT(81),
  [29] = {.entry = {.count = 1, .reusable = true}}, SHIFT(95),
  [31] = {.entry = {.count = 1, .reusable = true}}, SHIFT(73),
  [33] = {.entry = {.count = 1, .reusable = true}}, SHIFT(100),
  [35] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [37] = {.entry = {.count = 1, .reusable = true}}, SHIFT(80),
  [39] = {.entry = {.count = 1, .reusable = true}}, SHIFT(79),
  [41] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [43] = {.entry = {.count = 1, .reusable = true}}, SHIFT(86),
  [45] = {.entry = {.count = 1, .reusable = true}}, SHIFT(67),
  [47] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [49] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [51] = {.entry = {.count = 1, .reusable = true}}, SHIFT(74),
  [53] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [55] = {.entry = {.count = 1, .reusable = true}}, SHIFT(77),
  [57] = {.entry = {.count = 1, .reusable = true}}, SHIFT(102),
  [59] = {.entry = {.count = 1, .reusable = true}}, SHIFT(103),
  [61] = {.entry = {.count = 1, .reusable = false}}, SHIFT(66),
  [63] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [65] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [67] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2),
  [69] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(16),
  [72] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(96),
  [75] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(101),
  [78] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(19),
  [81] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1),
  [83] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [85] = {.entry = {.count = 1, .reusable = true}}, SHIFT(89),
  [87] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [89] = {.entry = {.count = 1, .reusable = true}}, SHIFT(88),
  [91] = {.entry = {.count = 1, .reusable = true}}, SHIFT(68),
  [93] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__jinja_comment, 2),
  [95] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__jinja_comment, 2),
  [97] = {.entry = {.count = 1, .reusable = true}}, SHIFT(62),
  [99] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [101] = {.entry = {.count = 1, .reusable = true}}, SHIFT(78),
  [103] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__jinja_value, 3),
  [105] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__jinja_value, 3),
  [107] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [109] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_jinja_expression, 2),
  [111] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_jinja_expression, 2),
  [113] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_lit_string, 3),
  [115] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_argument_list, 5),
  [117] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_list, 3),
  [119] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_dict, 5),
  [121] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_dict, 3),
  [123] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_argument_list, 4),
  [125] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_fn_call, 2, .production_id = 1),
  [127] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_list, 2),
  [129] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_list, 5),
  [131] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_argument_list, 2),
  [133] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_bool, 1),
  [135] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_list, 4),
  [137] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_dict, 4),
  [139] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_dict, 2),
  [141] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_argument_list, 3),
  [143] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [145] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [147] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_argument_list_repeat1, 2), SHIFT_REPEAT(14),
  [150] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_argument_list_repeat1, 2),
  [152] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_list_repeat1, 2), SHIFT_REPEAT(15),
  [155] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_list_repeat1, 2),
  [157] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [159] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [161] = {.entry = {.count = 1, .reusable = true}}, SHIFT(76),
  [163] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_dict_repeat1, 2), SHIFT_REPEAT(40),
  [166] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_dict_repeat1, 2),
  [168] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [170] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [172] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [174] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [176] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [178] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [180] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [182] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [184] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [186] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [188] = {.entry = {.count = 1, .reusable = true}}, SHIFT(72),
  [190] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [192] = {.entry = {.count = 1, .reusable = true}}, SHIFT(71),
  [194] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [196] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [198] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [200] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_kwarg, 3, .production_id = 2),
  [202] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_identifier, 1),
  [204] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pair, 3, .production_id = 2),
  [206] = {.entry = {.count = 1, .reusable = true}}, SHIFT(70),
  [208] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [210] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [212] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [214] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [216] = {.entry = {.count = 1, .reusable = true}}, SHIFT(93),
  [218] = {.entry = {.count = 1, .reusable = true}}, SHIFT(90),
  [220] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [222] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [224] = {.entry = {.count = 1, .reusable = true}}, SHIFT(87),
  [226] = {.entry = {.count = 1, .reusable = true}}, SHIFT(85),
};

#ifdef __cplusplus
extern "C" {
#endif
#ifdef _WIN32
#define extern __declspec(dllexport)
#endif

extern const TSLanguage *tree_sitter_jinja2(void) {
  static TSLanguage language = {
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
    .parse_table = (const uint16_t *)ts_parse_table,
    .small_parse_table = (const uint16_t *)ts_small_parse_table,
    .small_parse_table_map = (const uint32_t *)ts_small_parse_table_map,
    .parse_actions = ts_parse_actions,
    .symbol_names = ts_symbol_names,
    .field_names = ts_field_names,
    .field_map_slices = (const TSFieldMapSlice *)ts_field_map_slices,
    .field_map_entries = (const TSFieldMapEntry *)ts_field_map_entries,
    .symbol_metadata = ts_symbol_metadata,
    .public_symbol_map = ts_symbol_map,
    .alias_map = ts_non_terminal_alias_map,
    .alias_sequences = (const TSSymbol *)ts_alias_sequences,
    .lex_modes = ts_lex_modes,
    .lex_fn = ts_lex,
  };
  return &language;
}
#ifdef __cplusplus
}
#endif
