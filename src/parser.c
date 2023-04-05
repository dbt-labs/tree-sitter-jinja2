#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 13
#define STATE_COUNT 122
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 46
#define ALIAS_COUNT 0
#define TOKEN_COUNT 26
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 7
#define MAX_ALIAS_SEQUENCE_LENGTH 5
#define PRODUCTION_ID_COUNT 6

enum {
  anon_sym_LBRACE_LBRACE = 1,
  anon_sym_RBRACE_RBRACE = 2,
  anon_sym_LBRACE_PERCENT = 3,
  aux_sym_jinja_expression_token1 = 4,
  anon_sym_LBRACE_POUND = 5,
  aux_sym__jinja_comment_token1 = 6,
  anon_sym_DOT = 7,
  anon_sym_LPAREN = 8,
  anon_sym_COMMA = 9,
  anon_sym_RPAREN = 10,
  anon_sym_SQUOTE = 11,
  aux_sym_lit_string_token1 = 12,
  anon_sym_DQUOTE = 13,
  aux_sym_lit_string_token2 = 14,
  anon_sym_True = 15,
  anon_sym_False = 16,
  anon_sym_LBRACK = 17,
  anon_sym_RBRACK = 18,
  anon_sym_LBRACE = 19,
  anon_sym_RBRACE = 20,
  anon_sym_COLON = 21,
  sym__identifier = 22,
  anon_sym_EQ = 23,
  sym__text = 24,
  sym_integer = 25,
  sym_source_file = 26,
  sym__jinja_value = 27,
  sym_jinja_expression = 28,
  sym__jinja_comment = 29,
  sym__expr = 30,
  sym_scoped_fn_call = 31,
  sym__scoped_fn_call = 32,
  sym_fn_call = 33,
  sym_argument_list = 34,
  sym_lit_string = 35,
  sym_bool = 36,
  sym_list = 37,
  sym_dict = 38,
  sym_pair = 39,
  sym_identifier = 40,
  sym_kwarg = 41,
  aux_sym_source_file_repeat1 = 42,
  aux_sym_argument_list_repeat1 = 43,
  aux_sym_list_repeat1 = 44,
  aux_sym_dict_repeat1 = 45,
};

static const char *ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [anon_sym_LBRACE_LBRACE] = "{{",
  [anon_sym_RBRACE_RBRACE] = "}}",
  [anon_sym_LBRACE_PERCENT] = "{%",
  [aux_sym_jinja_expression_token1] = "jinja_expression_token1",
  [anon_sym_LBRACE_POUND] = "{#",
  [aux_sym__jinja_comment_token1] = "_jinja_comment_token1",
  [anon_sym_DOT] = ".",
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
  [sym_source_file] = "source_file",
  [sym__jinja_value] = "_jinja_value",
  [sym_jinja_expression] = "jinja_expression",
  [sym__jinja_comment] = "_jinja_comment",
  [sym__expr] = "_expr",
  [sym_scoped_fn_call] = "scoped_fn_call",
  [sym__scoped_fn_call] = "_scoped_fn_call",
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
  [anon_sym_DOT] = anon_sym_DOT,
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
  [sym_source_file] = sym_source_file,
  [sym__jinja_value] = sym__jinja_value,
  [sym_jinja_expression] = sym_jinja_expression,
  [sym__jinja_comment] = sym__jinja_comment,
  [sym__expr] = sym__expr,
  [sym_scoped_fn_call] = sym_scoped_fn_call,
  [sym__scoped_fn_call] = sym__scoped_fn_call,
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
  [anon_sym_DOT] = {
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
  [sym_scoped_fn_call] = {
    .visible = true,
    .named = true,
  },
  [sym__scoped_fn_call] = {
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
  field_fn_call = 2,
  field_fn_name = 3,
  field_fn_scope_name = 4,
  field_key = 5,
  field_scoped_fn_call = 6,
  field_value = 7,
};

static const char *ts_field_names[] = {
  [0] = NULL,
  [field_argument_list] = "argument_list",
  [field_fn_call] = "fn_call",
  [field_fn_name] = "fn_name",
  [field_fn_scope_name] = "fn_scope_name",
  [field_key] = "key",
  [field_scoped_fn_call] = "scoped_fn_call",
  [field_value] = "value",
};

static const TSFieldMapSlice ts_field_map_slices[PRODUCTION_ID_COUNT] = {
  [1] = {.index = 0, .length = 2},
  [2] = {.index = 2, .length = 4},
  [3] = {.index = 6, .length = 1},
  [4] = {.index = 7, .length = 4},
  [5] = {.index = 11, .length = 2},
};

static const TSFieldMapEntry ts_field_map_entries[] = {
  [0] =
    {field_argument_list, 1},
    {field_fn_name, 0},
  [2] =
    {field_fn_call, 0},
    {field_fn_call, 2, .inherited = true},
    {field_scoped_fn_call, 2},
    {field_scoped_fn_call, 2, .inherited = true},
  [6] =
    {field_fn_call, 0},
  [7] =
    {field_fn_call, 2, .inherited = true},
    {field_fn_scope_name, 0},
    {field_scoped_fn_call, 2},
    {field_scoped_fn_call, 2, .inherited = true},
  [11] =
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
      if (eof) ADVANCE(14);
      if (lookahead == '"') ADVANCE(30);
      if (lookahead == '\'') ADVANCE(26);
      if (lookahead == '(') ADVANCE(23);
      if (lookahead == ')') ADVANCE(25);
      if (lookahead == ',') ADVANCE(24);
      if (lookahead == '.') ADVANCE(22);
      if (lookahead == ':') ADVANCE(41);
      if (lookahead == '=') ADVANCE(50);
      if (lookahead == 'F') ADVANCE(42);
      if (lookahead == 'T') ADVANCE(46);
      if (lookahead == '[') ADVANCE(36);
      if (lookahead == ']') ADVANCE(37);
      if (lookahead == '{') ADVANCE(39);
      if (lookahead == '}') ADVANCE(40);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(53);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(49);
      END_STATE();
    case 1:
      if (lookahead == '"') ADVANCE(30);
      if (lookahead == '\'') ADVANCE(26);
      if (lookahead == ')') ADVANCE(25);
      if (lookahead == ',') ADVANCE(24);
      if (lookahead == '.') ADVANCE(22);
      if (lookahead == ':') ADVANCE(41);
      if (lookahead == 'F') ADVANCE(42);
      if (lookahead == 'T') ADVANCE(46);
      if (lookahead == '[') ADVANCE(36);
      if (lookahead == ']') ADVANCE(37);
      if (lookahead == '{') ADVANCE(38);
      if (lookahead == '}') ADVANCE(9);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(1)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(53);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(49);
      END_STATE();
    case 2:
      if (lookahead == '#') ADVANCE(19);
      if (lookahead == '%') ADVANCE(17);
      if (lookahead == '{') ADVANCE(15);
      if (lookahead != 0) ADVANCE(52);
      END_STATE();
    case 3:
      if (lookahead == '#') ADVANCE(6);
      if (lookahead == '}') ADVANCE(21);
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
      if (lookahead == '}') ADVANCE(20);
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
      if (lookahead == '}') ADVANCE(16);
      END_STATE();
    case 10:
      if (lookahead == '}') ADVANCE(18);
      if (lookahead != 0) ADVANCE(8);
      END_STATE();
    case 11:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(11)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(49);
      END_STATE();
    case 12:
      if (lookahead != 0 &&
          lookahead != '#' &&
          lookahead != '%' &&
          lookahead != '{') ADVANCE(52);
      END_STATE();
    case 13:
      if (eof) ADVANCE(14);
      if (lookahead == '{') ADVANCE(2);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(51);
      if (lookahead != 0) ADVANCE(52);
      END_STATE();
    case 14:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 15:
      ACCEPT_TOKEN(anon_sym_LBRACE_LBRACE);
      END_STATE();
    case 16:
      ACCEPT_TOKEN(anon_sym_RBRACE_RBRACE);
      END_STATE();
    case 17:
      ACCEPT_TOKEN(anon_sym_LBRACE_PERCENT);
      END_STATE();
    case 18:
      ACCEPT_TOKEN(aux_sym_jinja_expression_token1);
      END_STATE();
    case 19:
      ACCEPT_TOKEN(anon_sym_LBRACE_POUND);
      END_STATE();
    case 20:
      ACCEPT_TOKEN(aux_sym__jinja_comment_token1);
      END_STATE();
    case 21:
      ACCEPT_TOKEN(aux_sym__jinja_comment_token1);
      if (lookahead == '#') ADVANCE(6);
      if (lookahead != 0) ADVANCE(5);
      END_STATE();
    case 22:
      ACCEPT_TOKEN(anon_sym_DOT);
      END_STATE();
    case 23:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 24:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 25:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 26:
      ACCEPT_TOKEN(anon_sym_SQUOTE);
      END_STATE();
    case 27:
      ACCEPT_TOKEN(aux_sym_lit_string_token1);
      if (lookahead == '\\') ADVANCE(29);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(27);
      if (lookahead != 0 &&
          lookahead != '\'') ADVANCE(28);
      END_STATE();
    case 28:
      ACCEPT_TOKEN(aux_sym_lit_string_token1);
      if (lookahead == '\\') ADVANCE(29);
      if (lookahead != 0 &&
          lookahead != '\'') ADVANCE(28);
      END_STATE();
    case 29:
      ACCEPT_TOKEN(aux_sym_lit_string_token1);
      if (lookahead != 0 &&
          lookahead != '\\') ADVANCE(28);
      if (lookahead == '\\') ADVANCE(29);
      END_STATE();
    case 30:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 31:
      ACCEPT_TOKEN(aux_sym_lit_string_token2);
      if (lookahead == '\\') ADVANCE(33);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(31);
      if (lookahead != 0 &&
          lookahead != '"') ADVANCE(32);
      END_STATE();
    case 32:
      ACCEPT_TOKEN(aux_sym_lit_string_token2);
      if (lookahead == '\\') ADVANCE(33);
      if (lookahead != 0 &&
          lookahead != '"') ADVANCE(32);
      END_STATE();
    case 33:
      ACCEPT_TOKEN(aux_sym_lit_string_token2);
      if (lookahead != 0 &&
          lookahead != '\\') ADVANCE(32);
      if (lookahead == '\\') ADVANCE(33);
      END_STATE();
    case 34:
      ACCEPT_TOKEN(anon_sym_True);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(49);
      END_STATE();
    case 35:
      ACCEPT_TOKEN(anon_sym_False);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(49);
      END_STATE();
    case 36:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 37:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 38:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 39:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      if (lookahead == '#') ADVANCE(19);
      if (lookahead == '%') ADVANCE(17);
      if (lookahead == '{') ADVANCE(15);
      END_STATE();
    case 40:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 41:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 42:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'a') ADVANCE(45);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(49);
      END_STATE();
    case 43:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'e') ADVANCE(34);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(49);
      END_STATE();
    case 44:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'e') ADVANCE(35);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(49);
      END_STATE();
    case 45:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'l') ADVANCE(47);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(49);
      END_STATE();
    case 46:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'r') ADVANCE(48);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(49);
      END_STATE();
    case 47:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 's') ADVANCE(44);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(49);
      END_STATE();
    case 48:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'u') ADVANCE(43);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(49);
      END_STATE();
    case 49:
      ACCEPT_TOKEN(sym__identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(49);
      END_STATE();
    case 50:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 51:
      ACCEPT_TOKEN(sym__text);
      if (lookahead == '{') ADVANCE(2);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(51);
      if (lookahead != 0) ADVANCE(52);
      END_STATE();
    case 52:
      ACCEPT_TOKEN(sym__text);
      if (lookahead == '{') ADVANCE(12);
      if (lookahead != 0) ADVANCE(52);
      END_STATE();
    case 53:
      ACCEPT_TOKEN(sym_integer);
      if (lookahead == '_') ADVANCE(54);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(53);
      END_STATE();
    case 54:
      ACCEPT_TOKEN(sym_integer);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(53);
      END_STATE();
    default:
      return false;
  }
}

static TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 13},
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
  [19] = {.lex_state = 13},
  [20] = {.lex_state = 13},
  [21] = {.lex_state = 0},
  [22] = {.lex_state = 0},
  [23] = {.lex_state = 1},
  [24] = {.lex_state = 1},
  [25] = {.lex_state = 0},
  [26] = {.lex_state = 13},
  [27] = {.lex_state = 0},
  [28] = {.lex_state = 1},
  [29] = {.lex_state = 13},
  [30] = {.lex_state = 13},
  [31] = {.lex_state = 1},
  [32] = {.lex_state = 1},
  [33] = {.lex_state = 1},
  [34] = {.lex_state = 1},
  [35] = {.lex_state = 0},
  [36] = {.lex_state = 0},
  [37] = {.lex_state = 1},
  [38] = {.lex_state = 11},
  [39] = {.lex_state = 11},
  [40] = {.lex_state = 1},
  [41] = {.lex_state = 1},
  [42] = {.lex_state = 11},
  [43] = {.lex_state = 1},
  [44] = {.lex_state = 11},
  [45] = {.lex_state = 1},
  [46] = {.lex_state = 1},
  [47] = {.lex_state = 1},
  [48] = {.lex_state = 11},
  [49] = {.lex_state = 1},
  [50] = {.lex_state = 0},
  [51] = {.lex_state = 1},
  [52] = {.lex_state = 0},
  [53] = {.lex_state = 1},
  [54] = {.lex_state = 11},
  [55] = {.lex_state = 1},
  [56] = {.lex_state = 1},
  [57] = {.lex_state = 1},
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
  [95] = {.lex_state = 0},
  [96] = {.lex_state = 0},
  [97] = {.lex_state = 0},
  [98] = {.lex_state = 0},
  [99] = {.lex_state = 0},
  [100] = {.lex_state = 0},
  [101] = {.lex_state = 0},
  [102] = {.lex_state = 0},
  [103] = {.lex_state = 0},
  [104] = {.lex_state = 0},
  [105] = {.lex_state = 0},
  [106] = {.lex_state = 1},
  [107] = {.lex_state = 0},
  [108] = {.lex_state = 7},
  [109] = {.lex_state = 0},
  [110] = {.lex_state = 0},
  [111] = {.lex_state = 0},
  [112] = {.lex_state = 0},
  [113] = {.lex_state = 0},
  [114] = {.lex_state = 31},
  [115] = {.lex_state = 27},
  [116] = {.lex_state = 0},
  [117] = {.lex_state = 0},
  [118] = {.lex_state = 0},
  [119] = {.lex_state = 4},
  [120] = {.lex_state = 27},
  [121] = {.lex_state = 31},
};

static uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(1),
    [anon_sym_LBRACE_PERCENT] = ACTIONS(1),
    [anon_sym_LBRACE_POUND] = ACTIONS(1),
    [anon_sym_DOT] = ACTIONS(1),
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
  },
  [1] = {
    [sym_source_file] = STATE(117),
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

static uint16_t ts_small_parse_table[] = {
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
    STATE(32), 1,
      sym_fn_call,
    STATE(52), 1,
      sym_identifier,
    ACTIONS(21), 2,
      anon_sym_True,
      anon_sym_False,
    STATE(66), 7,
      sym__expr,
      sym_scoped_fn_call,
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
    ACTIONS(31), 1,
      anon_sym_COMMA,
    ACTIONS(33), 1,
      anon_sym_RPAREN,
    ACTIONS(35), 1,
      sym_integer,
    STATE(32), 1,
      sym_fn_call,
    STATE(52), 1,
      sym_identifier,
    ACTIONS(21), 2,
      anon_sym_True,
      anon_sym_False,
    STATE(67), 7,
      sym__expr,
      sym_scoped_fn_call,
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
    ACTIONS(37), 1,
      anon_sym_COMMA,
    ACTIONS(39), 1,
      anon_sym_RBRACK,
    ACTIONS(41), 1,
      sym_integer,
    STATE(32), 1,
      sym_fn_call,
    STATE(75), 1,
      sym_identifier,
    ACTIONS(21), 2,
      anon_sym_True,
      anon_sym_False,
    STATE(68), 6,
      sym__expr,
      sym_scoped_fn_call,
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
    ACTIONS(43), 1,
      anon_sym_RPAREN,
    ACTIONS(45), 1,
      sym_integer,
    STATE(32), 1,
      sym_fn_call,
    STATE(52), 1,
      sym_identifier,
    ACTIONS(21), 2,
      anon_sym_True,
      anon_sym_False,
    STATE(101), 7,
      sym__expr,
      sym_scoped_fn_call,
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
    ACTIONS(45), 1,
      sym_integer,
    ACTIONS(47), 1,
      anon_sym_RPAREN,
    STATE(32), 1,
      sym_fn_call,
    STATE(52), 1,
      sym_identifier,
    ACTIONS(21), 2,
      anon_sym_True,
      anon_sym_False,
    STATE(101), 7,
      sym__expr,
      sym_scoped_fn_call,
      sym_lit_string,
      sym_bool,
      sym_list,
      sym_dict,
      sym_kwarg,
  [213] = 11,
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
    ACTIONS(45), 1,
      sym_integer,
    ACTIONS(49), 1,
      anon_sym_RPAREN,
    STATE(32), 1,
      sym_fn_call,
    STATE(52), 1,
      sym_identifier,
    ACTIONS(21), 2,
      anon_sym_True,
      anon_sym_False,
    STATE(101), 7,
      sym__expr,
      sym_scoped_fn_call,
      sym_lit_string,
      sym_bool,
      sym_list,
      sym_dict,
      sym_kwarg,
  [254] = 11,
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
    ACTIONS(45), 1,
      sym_integer,
    ACTIONS(51), 1,
      anon_sym_RPAREN,
    STATE(32), 1,
      sym_fn_call,
    STATE(52), 1,
      sym_identifier,
    ACTIONS(21), 2,
      anon_sym_True,
      anon_sym_False,
    STATE(101), 7,
      sym__expr,
      sym_scoped_fn_call,
      sym_lit_string,
      sym_bool,
      sym_list,
      sym_dict,
      sym_kwarg,
  [295] = 12,
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
      anon_sym_COMMA,
    ACTIONS(55), 1,
      anon_sym_RBRACK,
    ACTIONS(57), 1,
      sym_integer,
    STATE(32), 1,
      sym_fn_call,
    STATE(75), 1,
      sym_identifier,
    ACTIONS(21), 2,
      anon_sym_True,
      anon_sym_False,
    STATE(73), 6,
      sym__expr,
      sym_scoped_fn_call,
      sym_lit_string,
      sym_bool,
      sym_list,
      sym_dict,
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
    ACTIONS(59), 1,
      anon_sym_RBRACK,
    ACTIONS(61), 1,
      sym_integer,
    STATE(32), 1,
      sym_fn_call,
    STATE(75), 1,
      sym_identifier,
    ACTIONS(21), 2,
      anon_sym_True,
      anon_sym_False,
    STATE(95), 6,
      sym__expr,
      sym_scoped_fn_call,
      sym_lit_string,
      sym_bool,
      sym_list,
      sym_dict,
  [378] = 10,
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
    ACTIONS(45), 1,
      sym_integer,
    STATE(32), 1,
      sym_fn_call,
    STATE(52), 1,
      sym_identifier,
    ACTIONS(21), 2,
      anon_sym_True,
      anon_sym_False,
    STATE(101), 7,
      sym__expr,
      sym_scoped_fn_call,
      sym_lit_string,
      sym_bool,
      sym_list,
      sym_dict,
      sym_kwarg,
  [416] = 11,
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
    ACTIONS(61), 1,
      sym_integer,
    ACTIONS(63), 1,
      anon_sym_RBRACK,
    STATE(32), 1,
      sym_fn_call,
    STATE(75), 1,
      sym_identifier,
    ACTIONS(21), 2,
      anon_sym_True,
      anon_sym_False,
    STATE(95), 6,
      sym__expr,
      sym_scoped_fn_call,
      sym_lit_string,
      sym_bool,
      sym_list,
      sym_dict,
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
    ACTIONS(61), 1,
      sym_integer,
    ACTIONS(65), 1,
      anon_sym_RBRACK,
    STATE(32), 1,
      sym_fn_call,
    STATE(75), 1,
      sym_identifier,
    ACTIONS(21), 2,
      anon_sym_True,
      anon_sym_False,
    STATE(95), 6,
      sym__expr,
      sym_scoped_fn_call,
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
    ACTIONS(61), 1,
      sym_integer,
    ACTIONS(67), 1,
      anon_sym_RBRACK,
    STATE(32), 1,
      sym_fn_call,
    STATE(75), 1,
      sym_identifier,
    ACTIONS(21), 2,
      anon_sym_True,
      anon_sym_False,
    STATE(95), 6,
      sym__expr,
      sym_scoped_fn_call,
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
    ACTIONS(61), 1,
      sym_integer,
    STATE(32), 1,
      sym_fn_call,
    STATE(75), 1,
      sym_identifier,
    ACTIONS(21), 2,
      anon_sym_True,
      anon_sym_False,
    STATE(95), 6,
      sym__expr,
      sym_scoped_fn_call,
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
    ACTIONS(69), 1,
      sym_integer,
    STATE(32), 1,
      sym_fn_call,
    STATE(75), 1,
      sym_identifier,
    ACTIONS(21), 2,
      anon_sym_True,
      anon_sym_False,
    STATE(106), 6,
      sym__expr,
      sym_scoped_fn_call,
      sym_lit_string,
      sym_bool,
      sym_list,
      sym_dict,
  [610] = 10,
    ACTIONS(27), 1,
      sym__identifier,
    ACTIONS(71), 1,
      anon_sym_SQUOTE,
    ACTIONS(73), 1,
      anon_sym_DQUOTE,
    ACTIONS(77), 1,
      anon_sym_LBRACK,
    ACTIONS(79), 1,
      anon_sym_LBRACE,
    ACTIONS(81), 1,
      sym_integer,
    STATE(74), 1,
      sym_identifier,
    STATE(76), 1,
      sym_fn_call,
    ACTIONS(75), 2,
      anon_sym_True,
      anon_sym_False,
    STATE(99), 6,
      sym__expr,
      sym_scoped_fn_call,
      sym_lit_string,
      sym_bool,
      sym_list,
      sym_dict,
  [647] = 10,
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
    ACTIONS(83), 1,
      sym_integer,
    STATE(32), 1,
      sym_fn_call,
    STATE(75), 1,
      sym_identifier,
    ACTIONS(21), 2,
      anon_sym_True,
      anon_sym_False,
    STATE(102), 6,
      sym__expr,
      sym_scoped_fn_call,
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
    ACTIONS(85), 1,
      ts_builtin_sym_end,
    ACTIONS(87), 1,
      sym__text,
    STATE(20), 4,
      sym__jinja_value,
      sym_jinja_expression,
      sym__jinja_comment,
      aux_sym_source_file_repeat1,
  [706] = 6,
    ACTIONS(89), 1,
      ts_builtin_sym_end,
    ACTIONS(91), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(94), 1,
      anon_sym_LBRACE_PERCENT,
    ACTIONS(97), 1,
      anon_sym_LBRACE_POUND,
    ACTIONS(100), 1,
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
    ACTIONS(103), 1,
      anon_sym_COMMA,
    ACTIONS(105), 1,
      anon_sym_RBRACE,
    STATE(78), 1,
      sym_pair,
    STATE(118), 1,
      sym_lit_string,
  [747] = 6,
    ACTIONS(17), 1,
      anon_sym_SQUOTE,
    ACTIONS(19), 1,
      anon_sym_DQUOTE,
    ACTIONS(107), 1,
      anon_sym_COMMA,
    ACTIONS(109), 1,
      anon_sym_RBRACE,
    STATE(72), 1,
      sym_pair,
    STATE(118), 1,
      sym_lit_string,
  [766] = 1,
    ACTIONS(111), 5,
      anon_sym_RBRACE_RBRACE,
      anon_sym_DOT,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
  [774] = 1,
    ACTIONS(113), 5,
      anon_sym_RBRACE_RBRACE,
      anon_sym_DOT,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
  [782] = 5,
    ACTIONS(17), 1,
      anon_sym_SQUOTE,
    ACTIONS(19), 1,
      anon_sym_DQUOTE,
    ACTIONS(115), 1,
      anon_sym_RBRACE,
    STATE(100), 1,
      sym_pair,
    STATE(118), 1,
      sym_lit_string,
  [798] = 2,
    ACTIONS(117), 2,
      ts_builtin_sym_end,
      sym__text,
    ACTIONS(119), 3,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LBRACE_PERCENT,
      anon_sym_LBRACE_POUND,
  [808] = 5,
    ACTIONS(17), 1,
      anon_sym_SQUOTE,
    ACTIONS(19), 1,
      anon_sym_DQUOTE,
    ACTIONS(121), 1,
      anon_sym_RBRACE,
    STATE(100), 1,
      sym_pair,
    STATE(118), 1,
      sym_lit_string,
  [824] = 1,
    ACTIONS(123), 5,
      anon_sym_RBRACE_RBRACE,
      anon_sym_DOT,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
  [832] = 2,
    ACTIONS(125), 2,
      ts_builtin_sym_end,
      sym__text,
    ACTIONS(127), 3,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LBRACE_PERCENT,
      anon_sym_LBRACE_POUND,
  [842] = 2,
    ACTIONS(129), 2,
      ts_builtin_sym_end,
      sym__text,
    ACTIONS(131), 3,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LBRACE_PERCENT,
      anon_sym_LBRACE_POUND,
  [852] = 2,
    ACTIONS(135), 1,
      anon_sym_DOT,
    ACTIONS(133), 4,
      anon_sym_RBRACE_RBRACE,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
  [862] = 2,
    ACTIONS(139), 1,
      anon_sym_DOT,
    ACTIONS(137), 4,
      anon_sym_RBRACE_RBRACE,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
  [872] = 1,
    ACTIONS(141), 5,
      anon_sym_RBRACE_RBRACE,
      anon_sym_DOT,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
  [880] = 1,
    ACTIONS(143), 5,
      anon_sym_RBRACE_RBRACE,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
      anon_sym_COLON,
  [888] = 5,
    ACTIONS(17), 1,
      anon_sym_SQUOTE,
    ACTIONS(19), 1,
      anon_sym_DQUOTE,
    ACTIONS(145), 1,
      anon_sym_RBRACE,
    STATE(100), 1,
      sym_pair,
    STATE(118), 1,
      sym_lit_string,
  [904] = 5,
    ACTIONS(17), 1,
      anon_sym_SQUOTE,
    ACTIONS(19), 1,
      anon_sym_DQUOTE,
    ACTIONS(147), 1,
      anon_sym_RBRACE,
    STATE(100), 1,
      sym_pair,
    STATE(118), 1,
      sym_lit_string,
  [920] = 1,
    ACTIONS(149), 5,
      anon_sym_RBRACE_RBRACE,
      anon_sym_DOT,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
  [928] = 4,
    ACTIONS(151), 1,
      sym__identifier,
    STATE(31), 1,
      sym_fn_call,
    STATE(47), 1,
      sym__scoped_fn_call,
    STATE(94), 1,
      sym_identifier,
  [941] = 4,
    ACTIONS(151), 1,
      sym__identifier,
    STATE(31), 1,
      sym_fn_call,
    STATE(46), 1,
      sym__scoped_fn_call,
    STATE(94), 1,
      sym_identifier,
  [954] = 1,
    ACTIONS(153), 4,
      anon_sym_RBRACE_RBRACE,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
  [961] = 1,
    ACTIONS(155), 4,
      anon_sym_RBRACE_RBRACE,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
  [968] = 4,
    ACTIONS(151), 1,
      sym__identifier,
    STATE(31), 1,
      sym_fn_call,
    STATE(49), 1,
      sym__scoped_fn_call,
    STATE(94), 1,
      sym_identifier,
  [981] = 1,
    ACTIONS(157), 4,
      anon_sym_RBRACE_RBRACE,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
  [988] = 4,
    ACTIONS(151), 1,
      sym__identifier,
    STATE(80), 1,
      sym_fn_call,
    STATE(84), 1,
      sym_identifier,
    STATE(93), 1,
      sym__scoped_fn_call,
  [1001] = 1,
    ACTIONS(159), 4,
      anon_sym_RBRACE_RBRACE,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
  [1008] = 1,
    ACTIONS(161), 4,
      anon_sym_RBRACE_RBRACE,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
  [1015] = 1,
    ACTIONS(163), 4,
      anon_sym_RBRACE_RBRACE,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
  [1022] = 4,
    ACTIONS(151), 1,
      sym__identifier,
    STATE(80), 1,
      sym_fn_call,
    STATE(84), 1,
      sym_identifier,
    STATE(92), 1,
      sym__scoped_fn_call,
  [1035] = 1,
    ACTIONS(165), 4,
      anon_sym_RBRACE_RBRACE,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
  [1042] = 4,
    ACTIONS(17), 1,
      anon_sym_SQUOTE,
    ACTIONS(19), 1,
      anon_sym_DQUOTE,
    STATE(100), 1,
      sym_pair,
    STATE(118), 1,
      sym_lit_string,
  [1055] = 1,
    ACTIONS(167), 4,
      anon_sym_RBRACE_RBRACE,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
  [1062] = 4,
    ACTIONS(169), 1,
      anon_sym_DOT,
    ACTIONS(171), 1,
      anon_sym_LPAREN,
    ACTIONS(173), 1,
      anon_sym_EQ,
    STATE(33), 1,
      sym_argument_list,
  [1075] = 1,
    ACTIONS(175), 4,
      anon_sym_RBRACE_RBRACE,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
  [1082] = 4,
    ACTIONS(151), 1,
      sym__identifier,
    STATE(80), 1,
      sym_fn_call,
    STATE(84), 1,
      sym_identifier,
    STATE(85), 1,
      sym__scoped_fn_call,
  [1095] = 1,
    ACTIONS(177), 4,
      anon_sym_RBRACE_RBRACE,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
  [1102] = 1,
    ACTIONS(179), 4,
      anon_sym_RBRACE_RBRACE,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
  [1109] = 1,
    ACTIONS(181), 4,
      anon_sym_RBRACE_RBRACE,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
  [1116] = 3,
    ACTIONS(43), 1,
      anon_sym_RPAREN,
    ACTIONS(183), 1,
      anon_sym_COMMA,
    STATE(59), 1,
      aux_sym_argument_list_repeat1,
  [1126] = 3,
    ACTIONS(185), 1,
      anon_sym_COMMA,
    ACTIONS(188), 1,
      anon_sym_RPAREN,
    STATE(59), 1,
      aux_sym_argument_list_repeat1,
  [1136] = 3,
    ACTIONS(49), 1,
      anon_sym_RPAREN,
    ACTIONS(190), 1,
      anon_sym_COMMA,
    STATE(59), 1,
      aux_sym_argument_list_repeat1,
  [1146] = 1,
    ACTIONS(113), 3,
      anon_sym_DOT,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [1152] = 1,
    ACTIONS(192), 3,
      anon_sym_DOT,
      anon_sym_LPAREN,
      anon_sym_EQ,
  [1158] = 3,
    ACTIONS(63), 1,
      anon_sym_RBRACK,
    ACTIONS(194), 1,
      anon_sym_COMMA,
    STATE(64), 1,
      aux_sym_list_repeat1,
  [1168] = 3,
    ACTIONS(196), 1,
      anon_sym_COMMA,
    ACTIONS(199), 1,
      anon_sym_RBRACK,
    STATE(64), 1,
      aux_sym_list_repeat1,
  [1178] = 3,
    ACTIONS(115), 1,
      anon_sym_RBRACE,
    ACTIONS(201), 1,
      anon_sym_COMMA,
    STATE(71), 1,
      aux_sym_dict_repeat1,
  [1188] = 3,
    ACTIONS(203), 1,
      anon_sym_COMMA,
    ACTIONS(205), 1,
      anon_sym_RPAREN,
    STATE(58), 1,
      aux_sym_argument_list_repeat1,
  [1198] = 3,
    ACTIONS(207), 1,
      anon_sym_COMMA,
    ACTIONS(209), 1,
      anon_sym_RPAREN,
    STATE(60), 1,
      aux_sym_argument_list_repeat1,
  [1208] = 3,
    ACTIONS(211), 1,
      anon_sym_COMMA,
    ACTIONS(213), 1,
      anon_sym_RBRACK,
    STATE(70), 1,
      aux_sym_list_repeat1,
  [1218] = 3,
    ACTIONS(121), 1,
      anon_sym_RBRACE,
    ACTIONS(215), 1,
      anon_sym_COMMA,
    STATE(71), 1,
      aux_sym_dict_repeat1,
  [1228] = 3,
    ACTIONS(65), 1,
      anon_sym_RBRACK,
    ACTIONS(217), 1,
      anon_sym_COMMA,
    STATE(64), 1,
      aux_sym_list_repeat1,
  [1238] = 3,
    ACTIONS(219), 1,
      anon_sym_COMMA,
    ACTIONS(222), 1,
      anon_sym_RBRACE,
    STATE(71), 1,
      aux_sym_dict_repeat1,
  [1248] = 3,
    ACTIONS(224), 1,
      anon_sym_COMMA,
    ACTIONS(226), 1,
      anon_sym_RBRACE,
    STATE(65), 1,
      aux_sym_dict_repeat1,
  [1258] = 3,
    ACTIONS(228), 1,
      anon_sym_COMMA,
    ACTIONS(230), 1,
      anon_sym_RBRACK,
    STATE(63), 1,
      aux_sym_list_repeat1,
  [1268] = 3,
    ACTIONS(232), 1,
      anon_sym_DOT,
    ACTIONS(234), 1,
      anon_sym_LPAREN,
    STATE(79), 1,
      sym_argument_list,
  [1278] = 3,
    ACTIONS(169), 1,
      anon_sym_DOT,
    ACTIONS(171), 1,
      anon_sym_LPAREN,
    STATE(33), 1,
      sym_argument_list,
  [1288] = 2,
    ACTIONS(236), 1,
      anon_sym_DOT,
    ACTIONS(137), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [1296] = 1,
    ACTIONS(111), 3,
      anon_sym_DOT,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [1302] = 3,
    ACTIONS(238), 1,
      anon_sym_COMMA,
    ACTIONS(240), 1,
      anon_sym_RBRACE,
    STATE(69), 1,
      aux_sym_dict_repeat1,
  [1312] = 1,
    ACTIONS(141), 3,
      anon_sym_DOT,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [1318] = 2,
    ACTIONS(242), 1,
      anon_sym_DOT,
    ACTIONS(133), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [1326] = 1,
    ACTIONS(123), 3,
      anon_sym_DOT,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [1332] = 1,
    ACTIONS(149), 3,
      anon_sym_DOT,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [1338] = 1,
    ACTIONS(153), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [1343] = 2,
    ACTIONS(234), 1,
      anon_sym_LPAREN,
    STATE(79), 1,
      sym_argument_list,
  [1350] = 1,
    ACTIONS(165), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [1355] = 1,
    ACTIONS(157), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [1360] = 1,
    ACTIONS(175), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [1365] = 1,
    ACTIONS(181), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [1370] = 1,
    ACTIONS(159), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [1375] = 1,
    ACTIONS(177), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [1380] = 1,
    ACTIONS(167), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [1385] = 1,
    ACTIONS(161), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [1390] = 1,
    ACTIONS(163), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [1395] = 2,
    ACTIONS(171), 1,
      anon_sym_LPAREN,
    STATE(33), 1,
      sym_argument_list,
  [1402] = 1,
    ACTIONS(199), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [1407] = 1,
    ACTIONS(155), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [1412] = 1,
    ACTIONS(179), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [1417] = 1,
    ACTIONS(143), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [1422] = 1,
    ACTIONS(244), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [1427] = 1,
    ACTIONS(222), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [1432] = 1,
    ACTIONS(188), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [1437] = 1,
    ACTIONS(246), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [1442] = 1,
    ACTIONS(213), 1,
      anon_sym_RBRACK,
  [1446] = 1,
    ACTIONS(226), 1,
      anon_sym_RBRACE,
  [1450] = 1,
    ACTIONS(248), 1,
      anon_sym_DQUOTE,
  [1454] = 1,
    ACTIONS(250), 1,
      anon_sym_RBRACE_RBRACE,
  [1458] = 1,
    ACTIONS(240), 1,
      anon_sym_RBRACE,
  [1462] = 1,
    ACTIONS(252), 1,
      aux_sym_jinja_expression_token1,
  [1466] = 1,
    ACTIONS(230), 1,
      anon_sym_RBRACK,
  [1470] = 1,
    ACTIONS(254), 1,
      anon_sym_DQUOTE,
  [1474] = 1,
    ACTIONS(254), 1,
      anon_sym_SQUOTE,
  [1478] = 1,
    ACTIONS(209), 1,
      anon_sym_RPAREN,
  [1482] = 1,
    ACTIONS(248), 1,
      anon_sym_SQUOTE,
  [1486] = 1,
    ACTIONS(256), 1,
      aux_sym_lit_string_token2,
  [1490] = 1,
    ACTIONS(258), 1,
      aux_sym_lit_string_token1,
  [1494] = 1,
    ACTIONS(205), 1,
      anon_sym_RPAREN,
  [1498] = 1,
    ACTIONS(260), 1,
      ts_builtin_sym_end,
  [1502] = 1,
    ACTIONS(262), 1,
      anon_sym_COLON,
  [1506] = 1,
    ACTIONS(264), 1,
      aux_sym__jinja_comment_token1,
  [1510] = 1,
    ACTIONS(266), 1,
      aux_sym_lit_string_token1,
  [1514] = 1,
    ACTIONS(268), 1,
      aux_sym_lit_string_token2,
};

static uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 44,
  [SMALL_STATE(4)] = 88,
  [SMALL_STATE(5)] = 131,
  [SMALL_STATE(6)] = 172,
  [SMALL_STATE(7)] = 213,
  [SMALL_STATE(8)] = 254,
  [SMALL_STATE(9)] = 295,
  [SMALL_STATE(10)] = 338,
  [SMALL_STATE(11)] = 378,
  [SMALL_STATE(12)] = 416,
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
  [SMALL_STATE(24)] = 774,
  [SMALL_STATE(25)] = 782,
  [SMALL_STATE(26)] = 798,
  [SMALL_STATE(27)] = 808,
  [SMALL_STATE(28)] = 824,
  [SMALL_STATE(29)] = 832,
  [SMALL_STATE(30)] = 842,
  [SMALL_STATE(31)] = 852,
  [SMALL_STATE(32)] = 862,
  [SMALL_STATE(33)] = 872,
  [SMALL_STATE(34)] = 880,
  [SMALL_STATE(35)] = 888,
  [SMALL_STATE(36)] = 904,
  [SMALL_STATE(37)] = 920,
  [SMALL_STATE(38)] = 928,
  [SMALL_STATE(39)] = 941,
  [SMALL_STATE(40)] = 954,
  [SMALL_STATE(41)] = 961,
  [SMALL_STATE(42)] = 968,
  [SMALL_STATE(43)] = 981,
  [SMALL_STATE(44)] = 988,
  [SMALL_STATE(45)] = 1001,
  [SMALL_STATE(46)] = 1008,
  [SMALL_STATE(47)] = 1015,
  [SMALL_STATE(48)] = 1022,
  [SMALL_STATE(49)] = 1035,
  [SMALL_STATE(50)] = 1042,
  [SMALL_STATE(51)] = 1055,
  [SMALL_STATE(52)] = 1062,
  [SMALL_STATE(53)] = 1075,
  [SMALL_STATE(54)] = 1082,
  [SMALL_STATE(55)] = 1095,
  [SMALL_STATE(56)] = 1102,
  [SMALL_STATE(57)] = 1109,
  [SMALL_STATE(58)] = 1116,
  [SMALL_STATE(59)] = 1126,
  [SMALL_STATE(60)] = 1136,
  [SMALL_STATE(61)] = 1146,
  [SMALL_STATE(62)] = 1152,
  [SMALL_STATE(63)] = 1158,
  [SMALL_STATE(64)] = 1168,
  [SMALL_STATE(65)] = 1178,
  [SMALL_STATE(66)] = 1188,
  [SMALL_STATE(67)] = 1198,
  [SMALL_STATE(68)] = 1208,
  [SMALL_STATE(69)] = 1218,
  [SMALL_STATE(70)] = 1228,
  [SMALL_STATE(71)] = 1238,
  [SMALL_STATE(72)] = 1248,
  [SMALL_STATE(73)] = 1258,
  [SMALL_STATE(74)] = 1268,
  [SMALL_STATE(75)] = 1278,
  [SMALL_STATE(76)] = 1288,
  [SMALL_STATE(77)] = 1296,
  [SMALL_STATE(78)] = 1302,
  [SMALL_STATE(79)] = 1312,
  [SMALL_STATE(80)] = 1318,
  [SMALL_STATE(81)] = 1326,
  [SMALL_STATE(82)] = 1332,
  [SMALL_STATE(83)] = 1338,
  [SMALL_STATE(84)] = 1343,
  [SMALL_STATE(85)] = 1350,
  [SMALL_STATE(86)] = 1355,
  [SMALL_STATE(87)] = 1360,
  [SMALL_STATE(88)] = 1365,
  [SMALL_STATE(89)] = 1370,
  [SMALL_STATE(90)] = 1375,
  [SMALL_STATE(91)] = 1380,
  [SMALL_STATE(92)] = 1385,
  [SMALL_STATE(93)] = 1390,
  [SMALL_STATE(94)] = 1395,
  [SMALL_STATE(95)] = 1402,
  [SMALL_STATE(96)] = 1407,
  [SMALL_STATE(97)] = 1412,
  [SMALL_STATE(98)] = 1417,
  [SMALL_STATE(99)] = 1422,
  [SMALL_STATE(100)] = 1427,
  [SMALL_STATE(101)] = 1432,
  [SMALL_STATE(102)] = 1437,
  [SMALL_STATE(103)] = 1442,
  [SMALL_STATE(104)] = 1446,
  [SMALL_STATE(105)] = 1450,
  [SMALL_STATE(106)] = 1454,
  [SMALL_STATE(107)] = 1458,
  [SMALL_STATE(108)] = 1462,
  [SMALL_STATE(109)] = 1466,
  [SMALL_STATE(110)] = 1470,
  [SMALL_STATE(111)] = 1474,
  [SMALL_STATE(112)] = 1478,
  [SMALL_STATE(113)] = 1482,
  [SMALL_STATE(114)] = 1486,
  [SMALL_STATE(115)] = 1490,
  [SMALL_STATE(116)] = 1494,
  [SMALL_STATE(117)] = 1498,
  [SMALL_STATE(118)] = 1502,
  [SMALL_STATE(119)] = 1506,
  [SMALL_STATE(120)] = 1510,
  [SMALL_STATE(121)] = 1514,
};

static TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0),
  [5] = {.entry = {.count = 1, .reusable = false}}, SHIFT(16),
  [7] = {.entry = {.count = 1, .reusable = false}}, SHIFT(108),
  [9] = {.entry = {.count = 1, .reusable = false}}, SHIFT(119),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(116),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(115),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(114),
  [21] = {.entry = {.count = 1, .reusable = false}}, SHIFT(56),
  [23] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [25] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [27] = {.entry = {.count = 1, .reusable = false}}, SHIFT(62),
  [29] = {.entry = {.count = 1, .reusable = true}}, SHIFT(66),
  [31] = {.entry = {.count = 1, .reusable = true}}, SHIFT(112),
  [33] = {.entry = {.count = 1, .reusable = true}}, SHIFT(81),
  [35] = {.entry = {.count = 1, .reusable = true}}, SHIFT(67),
  [37] = {.entry = {.count = 1, .reusable = true}}, SHIFT(103),
  [39] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [41] = {.entry = {.count = 1, .reusable = true}}, SHIFT(68),
  [43] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [45] = {.entry = {.count = 1, .reusable = true}}, SHIFT(101),
  [47] = {.entry = {.count = 1, .reusable = true}}, SHIFT(77),
  [49] = {.entry = {.count = 1, .reusable = true}}, SHIFT(61),
  [51] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [53] = {.entry = {.count = 1, .reusable = true}}, SHIFT(109),
  [55] = {.entry = {.count = 1, .reusable = true}}, SHIFT(96),
  [57] = {.entry = {.count = 1, .reusable = true}}, SHIFT(73),
  [59] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [61] = {.entry = {.count = 1, .reusable = true}}, SHIFT(95),
  [63] = {.entry = {.count = 1, .reusable = true}}, SHIFT(87),
  [65] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [67] = {.entry = {.count = 1, .reusable = true}}, SHIFT(90),
  [69] = {.entry = {.count = 1, .reusable = true}}, SHIFT(106),
  [71] = {.entry = {.count = 1, .reusable = true}}, SHIFT(120),
  [73] = {.entry = {.count = 1, .reusable = true}}, SHIFT(121),
  [75] = {.entry = {.count = 1, .reusable = false}}, SHIFT(97),
  [77] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [79] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [81] = {.entry = {.count = 1, .reusable = true}}, SHIFT(99),
  [83] = {.entry = {.count = 1, .reusable = true}}, SHIFT(102),
  [85] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1),
  [87] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [89] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2),
  [91] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(16),
  [94] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(108),
  [97] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(119),
  [100] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(20),
  [103] = {.entry = {.count = 1, .reusable = true}}, SHIFT(107),
  [105] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [107] = {.entry = {.count = 1, .reusable = true}}, SHIFT(104),
  [109] = {.entry = {.count = 1, .reusable = true}}, SHIFT(83),
  [111] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_argument_list, 5),
  [113] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_argument_list, 4),
  [115] = {.entry = {.count = 1, .reusable = true}}, SHIFT(88),
  [117] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_jinja_expression, 2),
  [119] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_jinja_expression, 2),
  [121] = {.entry = {.count = 1, .reusable = true}}, SHIFT(57),
  [123] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_argument_list, 2),
  [125] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__jinja_comment, 2),
  [127] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__jinja_comment, 2),
  [129] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__jinja_value, 3),
  [131] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__jinja_value, 3),
  [133] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__scoped_fn_call, 1, .production_id = 3),
  [135] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [137] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__expr, 1),
  [139] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [141] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_fn_call, 2, .production_id = 1),
  [143] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_lit_string, 3),
  [145] = {.entry = {.count = 1, .reusable = true}}, SHIFT(91),
  [147] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [149] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_argument_list, 3),
  [151] = {.entry = {.count = 1, .reusable = true}}, SHIFT(62),
  [153] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_dict, 2),
  [155] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_list, 2),
  [157] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_list, 3),
  [159] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_dict, 3),
  [161] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__scoped_fn_call, 3, .production_id = 2),
  [163] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_scoped_fn_call, 3, .production_id = 2),
  [165] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_scoped_fn_call, 3, .production_id = 4),
  [167] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_dict, 5),
  [169] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [171] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [173] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [175] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_list, 4),
  [177] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_list, 5),
  [179] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_bool, 1),
  [181] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_dict, 4),
  [183] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [185] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_argument_list_repeat1, 2), SHIFT_REPEAT(11),
  [188] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_argument_list_repeat1, 2),
  [190] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [192] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_identifier, 1),
  [194] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [196] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_list_repeat1, 2), SHIFT_REPEAT(15),
  [199] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_list_repeat1, 2),
  [201] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [203] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [205] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [207] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [209] = {.entry = {.count = 1, .reusable = true}}, SHIFT(82),
  [211] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [213] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [215] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [217] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [219] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_dict_repeat1, 2), SHIFT_REPEAT(50),
  [222] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_dict_repeat1, 2),
  [224] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [226] = {.entry = {.count = 1, .reusable = true}}, SHIFT(89),
  [228] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [230] = {.entry = {.count = 1, .reusable = true}}, SHIFT(86),
  [232] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
  [234] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [236] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [238] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [240] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [242] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [244] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pair, 3, .production_id = 5),
  [246] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_kwarg, 3, .production_id = 5),
  [248] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [250] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [252] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [254] = {.entry = {.count = 1, .reusable = true}}, SHIFT(98),
  [256] = {.entry = {.count = 1, .reusable = true}}, SHIFT(105),
  [258] = {.entry = {.count = 1, .reusable = true}}, SHIFT(113),
  [260] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [262] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [264] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [266] = {.entry = {.count = 1, .reusable = true}}, SHIFT(111),
  [268] = {.entry = {.count = 1, .reusable = true}}, SHIFT(110),
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
