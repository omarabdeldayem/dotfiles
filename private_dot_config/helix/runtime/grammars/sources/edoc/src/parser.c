#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 13
#define STATE_COUNT 262
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 81
#define ALIAS_COUNT 4
#define TOKEN_COUNT 44
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 1
#define MAX_ALIAS_SEQUENCE_LENGTH 6
#define PRODUCTION_ID_COUNT 7

enum {
  anon_sym_ATauthor = 1,
  anon_sym_EQ_EQ = 2,
  anon_sym_EQ_EQ_EQ = 3,
  anon_sym_EQ_EQ_EQ_EQ = 4,
  anon_sym_LBRACE = 5,
  aux_sym_macro_token1 = 6,
  anon_sym_RBRACE = 7,
  anon_sym_TODO_COLON = 8,
  aux_sym_tag_token1 = 9,
  aux_sym_argument_token1 = 10,
  anon_sym_ATlink = 11,
  anon_sym_DOT = 12,
  anon_sym_SLASH = 13,
  anon_sym_COLON = 14,
  anon_sym_LPAREN = 15,
  anon_sym_RPAREN = 16,
  sym_arity = 17,
  anon_sym_LTem_GT = 18,
  anon_sym_LT_SLASHem_GT = 19,
  anon_sym_LTstrong_GT = 20,
  anon_sym_LT_SLASHstrong_GT = 21,
  anon_sym_LT = 22,
  aux_sym_xhtml_tag_token1 = 23,
  anon_sym_GT = 24,
  anon_sym_AT_LBRACE = 25,
  anon_sym_AT_RBRACE = 26,
  anon_sym_AT_AT = 27,
  sym_quote_escape = 28,
  anon_sym_BQUOTE = 29,
  aux_sym__inline_quote_token1 = 30,
  anon_sym_SQUOTE = 31,
  anon_sym_BQUOTE_BQUOTE = 32,
  aux_sym__double_inline_quote_token1 = 33,
  anon_sym_SQUOTE_SQUOTE = 34,
  anon_sym_BQUOTE_BQUOTE_BQUOTE = 35,
  anon_sym_SQUOTE_SQUOTE_SQUOTE = 36,
  sym_language_identifier = 37,
  aux_sym_quote_content_token1 = 38,
  sym__terminator = 39,
  sym__word = 40,
  sym__unquoted_atom = 41,
  sym__escape_sequence = 42,
  sym__quoted_content = 43,
  sym_source = 44,
  sym__line = 45,
  sym__tag_line = 46,
  sym__author_line = 47,
  aux_sym__text_line = 48,
  sym_section = 49,
  sym_macro = 50,
  sym_tag = 51,
  sym_argument = 52,
  sym__link_macro = 53,
  sym__link_expression = 54,
  sym_module = 55,
  sym_function = 56,
  sym_type = 57,
  sym__xhtml_tag = 58,
  sym_em_xhtml_tag = 59,
  sym_strong_xhtml_tag = 60,
  sym_xhtml_tag = 61,
  sym_xhtml_tag_content = 62,
  sym_macro_escape = 63,
  sym_inline_quote = 64,
  sym__inline_quote = 65,
  sym__double_inline_quote = 66,
  sym__triple_inline_quote = 67,
  sym_block_quote = 68,
  sym_quote_content = 69,
  sym__atom = 70,
  sym__quoted_atom = 71,
  aux_sym_source_repeat1 = 72,
  aux_sym_source_repeat2 = 73,
  aux_sym__author_line_repeat1 = 74,
  aux_sym_argument_repeat1 = 75,
  aux_sym_xhtml_tag_repeat1 = 76,
  aux_sym_xhtml_tag_content_repeat1 = 77,
  aux_sym__double_inline_quote_repeat1 = 78,
  aux_sym_quote_content_repeat1 = 79,
  aux_sym__quoted_atom_repeat1 = 80,
  alias_sym_description = 81,
  alias_sym_email_address = 82,
  alias_sym_quote_marker = 83,
  alias_sym_section_content = 84,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [anon_sym_ATauthor] = "tag",
  [anon_sym_EQ_EQ] = "section_marker",
  [anon_sym_EQ_EQ_EQ] = "section_marker",
  [anon_sym_EQ_EQ_EQ_EQ] = "section_marker",
  [anon_sym_LBRACE] = "{",
  [aux_sym_macro_token1] = "macro_token1",
  [anon_sym_RBRACE] = "}",
  [anon_sym_TODO_COLON] = "TODO:",
  [aux_sym_tag_token1] = "tag_token1",
  [aux_sym_argument_token1] = "argument_token1",
  [anon_sym_ATlink] = "tag",
  [anon_sym_DOT] = ".",
  [anon_sym_SLASH] = "/",
  [anon_sym_COLON] = ":",
  [anon_sym_LPAREN] = "(",
  [anon_sym_RPAREN] = ")",
  [sym_arity] = "arity",
  [anon_sym_LTem_GT] = "open_xhtml_tag",
  [anon_sym_LT_SLASHem_GT] = "close_xhtml_tag",
  [anon_sym_LTstrong_GT] = "open_xhtml_tag",
  [anon_sym_LT_SLASHstrong_GT] = "close_xhtml_tag",
  [anon_sym_LT] = "<",
  [aux_sym_xhtml_tag_token1] = "xhtml_tag_token1",
  [anon_sym_GT] = ">",
  [anon_sym_AT_LBRACE] = "@{",
  [anon_sym_AT_RBRACE] = "@}",
  [anon_sym_AT_AT] = "@@",
  [sym_quote_escape] = "quote_escape",
  [anon_sym_BQUOTE] = "`",
  [aux_sym__inline_quote_token1] = "_inline_quote_token1",
  [anon_sym_SQUOTE] = "'",
  [anon_sym_BQUOTE_BQUOTE] = "``",
  [aux_sym__double_inline_quote_token1] = "_double_inline_quote_token1",
  [anon_sym_SQUOTE_SQUOTE] = "''",
  [anon_sym_BQUOTE_BQUOTE_BQUOTE] = "```",
  [anon_sym_SQUOTE_SQUOTE_SQUOTE] = "'''",
  [sym_language_identifier] = "language_identifier",
  [aux_sym_quote_content_token1] = "quote_content_token1",
  [sym__terminator] = "_terminator",
  [sym__word] = "_word",
  [sym__unquoted_atom] = "_unquoted_atom",
  [sym__escape_sequence] = "_escape_sequence",
  [sym__quoted_content] = "_quoted_content",
  [sym_source] = "source",
  [sym__line] = "_line",
  [sym__tag_line] = "_tag_line",
  [sym__author_line] = "_author_line",
  [aux_sym__text_line] = "_text_line",
  [sym_section] = "section",
  [sym_macro] = "macro",
  [sym_tag] = "tag",
  [sym_argument] = "argument",
  [sym__link_macro] = "_link_macro",
  [sym__link_expression] = "expression",
  [sym_module] = "module",
  [sym_function] = "function",
  [sym_type] = "type",
  [sym__xhtml_tag] = "_xhtml_tag",
  [sym_em_xhtml_tag] = "em_xhtml_tag",
  [sym_strong_xhtml_tag] = "strong_xhtml_tag",
  [sym_xhtml_tag] = "xhtml_tag",
  [sym_xhtml_tag_content] = "xhtml_tag_content",
  [sym_macro_escape] = "macro_escape",
  [sym_inline_quote] = "inline_quote",
  [sym__inline_quote] = "_inline_quote",
  [sym__double_inline_quote] = "_double_inline_quote",
  [sym__triple_inline_quote] = "_triple_inline_quote",
  [sym_block_quote] = "block_quote",
  [sym_quote_content] = "quote_content",
  [sym__atom] = "_atom",
  [sym__quoted_atom] = "_quoted_atom",
  [aux_sym_source_repeat1] = "source_repeat1",
  [aux_sym_source_repeat2] = "source_repeat2",
  [aux_sym__author_line_repeat1] = "_author_line_repeat1",
  [aux_sym_argument_repeat1] = "argument_repeat1",
  [aux_sym_xhtml_tag_repeat1] = "xhtml_tag_repeat1",
  [aux_sym_xhtml_tag_content_repeat1] = "xhtml_tag_content_repeat1",
  [aux_sym__double_inline_quote_repeat1] = "_double_inline_quote_repeat1",
  [aux_sym_quote_content_repeat1] = "quote_content_repeat1",
  [aux_sym__quoted_atom_repeat1] = "_quoted_atom_repeat1",
  [alias_sym_description] = "description",
  [alias_sym_email_address] = "email_address",
  [alias_sym_quote_marker] = "quote_marker",
  [alias_sym_section_content] = "section_content",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [anon_sym_ATauthor] = sym_tag,
  [anon_sym_EQ_EQ] = anon_sym_EQ_EQ,
  [anon_sym_EQ_EQ_EQ] = anon_sym_EQ_EQ,
  [anon_sym_EQ_EQ_EQ_EQ] = anon_sym_EQ_EQ,
  [anon_sym_LBRACE] = anon_sym_LBRACE,
  [aux_sym_macro_token1] = aux_sym_macro_token1,
  [anon_sym_RBRACE] = anon_sym_RBRACE,
  [anon_sym_TODO_COLON] = anon_sym_TODO_COLON,
  [aux_sym_tag_token1] = aux_sym_tag_token1,
  [aux_sym_argument_token1] = aux_sym_argument_token1,
  [anon_sym_ATlink] = sym_tag,
  [anon_sym_DOT] = anon_sym_DOT,
  [anon_sym_SLASH] = anon_sym_SLASH,
  [anon_sym_COLON] = anon_sym_COLON,
  [anon_sym_LPAREN] = anon_sym_LPAREN,
  [anon_sym_RPAREN] = anon_sym_RPAREN,
  [sym_arity] = sym_arity,
  [anon_sym_LTem_GT] = anon_sym_LTem_GT,
  [anon_sym_LT_SLASHem_GT] = anon_sym_LT_SLASHem_GT,
  [anon_sym_LTstrong_GT] = anon_sym_LTem_GT,
  [anon_sym_LT_SLASHstrong_GT] = anon_sym_LT_SLASHem_GT,
  [anon_sym_LT] = anon_sym_LT,
  [aux_sym_xhtml_tag_token1] = aux_sym_xhtml_tag_token1,
  [anon_sym_GT] = anon_sym_GT,
  [anon_sym_AT_LBRACE] = anon_sym_AT_LBRACE,
  [anon_sym_AT_RBRACE] = anon_sym_AT_RBRACE,
  [anon_sym_AT_AT] = anon_sym_AT_AT,
  [sym_quote_escape] = sym_quote_escape,
  [anon_sym_BQUOTE] = anon_sym_BQUOTE,
  [aux_sym__inline_quote_token1] = aux_sym__inline_quote_token1,
  [anon_sym_SQUOTE] = anon_sym_SQUOTE,
  [anon_sym_BQUOTE_BQUOTE] = anon_sym_BQUOTE_BQUOTE,
  [aux_sym__double_inline_quote_token1] = aux_sym__double_inline_quote_token1,
  [anon_sym_SQUOTE_SQUOTE] = anon_sym_SQUOTE_SQUOTE,
  [anon_sym_BQUOTE_BQUOTE_BQUOTE] = anon_sym_BQUOTE_BQUOTE_BQUOTE,
  [anon_sym_SQUOTE_SQUOTE_SQUOTE] = anon_sym_SQUOTE_SQUOTE_SQUOTE,
  [sym_language_identifier] = sym_language_identifier,
  [aux_sym_quote_content_token1] = aux_sym_quote_content_token1,
  [sym__terminator] = sym__terminator,
  [sym__word] = sym__word,
  [sym__unquoted_atom] = sym__unquoted_atom,
  [sym__escape_sequence] = sym__escape_sequence,
  [sym__quoted_content] = sym__quoted_content,
  [sym_source] = sym_source,
  [sym__line] = sym__line,
  [sym__tag_line] = sym__tag_line,
  [sym__author_line] = sym__author_line,
  [aux_sym__text_line] = aux_sym__text_line,
  [sym_section] = sym_section,
  [sym_macro] = sym_macro,
  [sym_tag] = sym_tag,
  [sym_argument] = sym_argument,
  [sym__link_macro] = sym__link_macro,
  [sym__link_expression] = sym__link_expression,
  [sym_module] = sym_module,
  [sym_function] = sym_function,
  [sym_type] = sym_type,
  [sym__xhtml_tag] = sym__xhtml_tag,
  [sym_em_xhtml_tag] = sym_em_xhtml_tag,
  [sym_strong_xhtml_tag] = sym_strong_xhtml_tag,
  [sym_xhtml_tag] = sym_xhtml_tag,
  [sym_xhtml_tag_content] = sym_xhtml_tag_content,
  [sym_macro_escape] = sym_macro_escape,
  [sym_inline_quote] = sym_inline_quote,
  [sym__inline_quote] = sym__inline_quote,
  [sym__double_inline_quote] = sym__double_inline_quote,
  [sym__triple_inline_quote] = sym__triple_inline_quote,
  [sym_block_quote] = sym_block_quote,
  [sym_quote_content] = sym_quote_content,
  [sym__atom] = sym__atom,
  [sym__quoted_atom] = sym__quoted_atom,
  [aux_sym_source_repeat1] = aux_sym_source_repeat1,
  [aux_sym_source_repeat2] = aux_sym_source_repeat2,
  [aux_sym__author_line_repeat1] = aux_sym__author_line_repeat1,
  [aux_sym_argument_repeat1] = aux_sym_argument_repeat1,
  [aux_sym_xhtml_tag_repeat1] = aux_sym_xhtml_tag_repeat1,
  [aux_sym_xhtml_tag_content_repeat1] = aux_sym_xhtml_tag_content_repeat1,
  [aux_sym__double_inline_quote_repeat1] = aux_sym__double_inline_quote_repeat1,
  [aux_sym_quote_content_repeat1] = aux_sym_quote_content_repeat1,
  [aux_sym__quoted_atom_repeat1] = aux_sym__quoted_atom_repeat1,
  [alias_sym_description] = alias_sym_description,
  [alias_sym_email_address] = alias_sym_email_address,
  [alias_sym_quote_marker] = alias_sym_quote_marker,
  [alias_sym_section_content] = alias_sym_section_content,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [anon_sym_ATauthor] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_EQ_EQ] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_EQ_EQ_EQ] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_EQ_EQ_EQ_EQ] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_LBRACE] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_macro_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_RBRACE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_TODO_COLON] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_tag_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_argument_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_ATlink] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_DOT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_SLASH] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COLON] = {
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
  [sym_arity] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_LTem_GT] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_LT_SLASHem_GT] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_LTstrong_GT] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_LT_SLASHstrong_GT] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_LT] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_xhtml_tag_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_GT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_AT_LBRACE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_AT_RBRACE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_AT_AT] = {
    .visible = true,
    .named = false,
  },
  [sym_quote_escape] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_BQUOTE] = {
    .visible = true,
    .named = false,
  },
  [aux_sym__inline_quote_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_SQUOTE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_BQUOTE_BQUOTE] = {
    .visible = true,
    .named = false,
  },
  [aux_sym__double_inline_quote_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_SQUOTE_SQUOTE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_BQUOTE_BQUOTE_BQUOTE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_SQUOTE_SQUOTE_SQUOTE] = {
    .visible = true,
    .named = false,
  },
  [sym_language_identifier] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_quote_content_token1] = {
    .visible = false,
    .named = false,
  },
  [sym__terminator] = {
    .visible = false,
    .named = true,
  },
  [sym__word] = {
    .visible = false,
    .named = true,
  },
  [sym__unquoted_atom] = {
    .visible = false,
    .named = true,
  },
  [sym__escape_sequence] = {
    .visible = false,
    .named = true,
  },
  [sym__quoted_content] = {
    .visible = false,
    .named = true,
  },
  [sym_source] = {
    .visible = true,
    .named = true,
  },
  [sym__line] = {
    .visible = false,
    .named = true,
  },
  [sym__tag_line] = {
    .visible = false,
    .named = true,
  },
  [sym__author_line] = {
    .visible = false,
    .named = true,
  },
  [aux_sym__text_line] = {
    .visible = false,
    .named = false,
  },
  [sym_section] = {
    .visible = true,
    .named = true,
  },
  [sym_macro] = {
    .visible = true,
    .named = true,
  },
  [sym_tag] = {
    .visible = true,
    .named = true,
  },
  [sym_argument] = {
    .visible = true,
    .named = true,
  },
  [sym__link_macro] = {
    .visible = false,
    .named = true,
  },
  [sym__link_expression] = {
    .visible = true,
    .named = true,
  },
  [sym_module] = {
    .visible = true,
    .named = true,
  },
  [sym_function] = {
    .visible = true,
    .named = true,
  },
  [sym_type] = {
    .visible = true,
    .named = true,
  },
  [sym__xhtml_tag] = {
    .visible = false,
    .named = true,
  },
  [sym_em_xhtml_tag] = {
    .visible = true,
    .named = true,
  },
  [sym_strong_xhtml_tag] = {
    .visible = true,
    .named = true,
  },
  [sym_xhtml_tag] = {
    .visible = true,
    .named = true,
  },
  [sym_xhtml_tag_content] = {
    .visible = true,
    .named = true,
  },
  [sym_macro_escape] = {
    .visible = true,
    .named = true,
  },
  [sym_inline_quote] = {
    .visible = true,
    .named = true,
  },
  [sym__inline_quote] = {
    .visible = false,
    .named = true,
  },
  [sym__double_inline_quote] = {
    .visible = false,
    .named = true,
  },
  [sym__triple_inline_quote] = {
    .visible = false,
    .named = true,
  },
  [sym_block_quote] = {
    .visible = true,
    .named = true,
  },
  [sym_quote_content] = {
    .visible = true,
    .named = true,
  },
  [sym__atom] = {
    .visible = false,
    .named = true,
  },
  [sym__quoted_atom] = {
    .visible = false,
    .named = true,
  },
  [aux_sym_source_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_source_repeat2] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__author_line_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_argument_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_xhtml_tag_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_xhtml_tag_content_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__double_inline_quote_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_quote_content_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__quoted_atom_repeat1] = {
    .visible = false,
    .named = false,
  },
  [alias_sym_description] = {
    .visible = true,
    .named = true,
  },
  [alias_sym_email_address] = {
    .visible = true,
    .named = true,
  },
  [alias_sym_quote_marker] = {
    .visible = true,
    .named = true,
  },
  [alias_sym_section_content] = {
    .visible = true,
    .named = true,
  },
};

enum {
  field_language = 1,
};

static const char * const ts_field_names[] = {
  [0] = NULL,
  [field_language] = "language",
};

static const TSFieldMapSlice ts_field_map_slices[PRODUCTION_ID_COUNT] = {
  [5] = {.index = 0, .length = 1},
};

static const TSFieldMapEntry ts_field_map_entries[] = {
  [0] =
    {field_language, 1},
};

static const TSSymbol ts_alias_sequences[PRODUCTION_ID_COUNT][MAX_ALIAS_SEQUENCE_LENGTH] = {
  [0] = {0},
  [1] = {
    [1] = alias_sym_email_address,
  },
  [2] = {
    [2] = alias_sym_email_address,
  },
  [3] = {
    [1] = alias_sym_section_content,
  },
  [4] = {
    [0] = alias_sym_quote_marker,
    [2] = alias_sym_quote_marker,
  },
  [5] = {
    [0] = alias_sym_quote_marker,
    [3] = alias_sym_quote_marker,
  },
  [6] = {
    [4] = alias_sym_description,
  },
};

static const uint16_t ts_non_terminal_alias_map[] = {
  aux_sym__text_line, 2,
    aux_sym__text_line,
    alias_sym_section_content,
  sym_argument, 2,
    sym_argument,
    alias_sym_description,
  sym_xhtml_tag, 2,
    sym_xhtml_tag,
    alias_sym_email_address,
  0,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(67);
      if (lookahead == '\n') ADVANCE(135);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '\'') ADVANCE(118);
      if (lookahead == '(') ADVANCE(95);
      if (lookahead == ')') ADVANCE(96);
      if (lookahead == '.') ADVANCE(92);
      if (lookahead == '/') ADVANCE(93);
      if (lookahead == ':') ADVANCE(94);
      if (lookahead == '<') ADVANCE(104);
      if (lookahead == '=') ADVANCE(29);
      if (lookahead == '>') ADVANCE(110);
      if (lookahead == '@') ADVANCE(35);
      if (lookahead == 'T') ADVANCE(11);
      if (lookahead == '\\') ADVANCE(40);
      if (lookahead == '`') ADVANCE(115);
      if (lookahead == '{') ADVANCE(74);
      if (lookahead == '}') ADVANCE(77);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(97);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(160);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(13);
      if ((224 <= lookahead && lookahead <= 246) ||
          (248 <= lookahead && lookahead <= 255)) ADVANCE(161);
      if ((1 <= lookahead && lookahead <= '\t') ||
          (17 <= lookahead && lookahead <= ' ') ||
          (128 <= lookahead && lookahead <= 160)) SKIP(0)
      END_STATE();
    case 1:
      if (lookahead == '\n') ADVANCE(135);
      END_STATE();
    case 2:
      if (lookahead == '\n') ADVANCE(135);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '<') ADVANCE(107);
      if (lookahead == '=') ADVANCE(148);
      if (lookahead == '@') ADVANCE(158);
      if (lookahead == 'T') ADVANCE(156);
      if (lookahead == '`') ADVANCE(115);
      if (lookahead == '{') ADVANCE(74);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(2)
      if ((1 <= lookahead && lookahead <= 8) ||
          (17 <= lookahead && lookahead <= 31) ||
          (128 <= lookahead && lookahead <= 160)) ADVANCE(136);
      if (lookahead != 0) ADVANCE(159);
      END_STATE();
    case 3:
      if (lookahead == '\n') ADVANCE(135);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '<') ADVANCE(107);
      if (lookahead == '`') ADVANCE(115);
      if (lookahead == '{') ADVANCE(74);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(3)
      if ((1 <= lookahead && lookahead <= 8) ||
          (17 <= lookahead && lookahead <= 31) ||
          (128 <= lookahead && lookahead <= 160)) ADVANCE(137);
      if (lookahead != 0) ADVANCE(159);
      END_STATE();
    case 4:
      if (lookahead == '\n') ADVANCE(135);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '<') ADVANCE(103);
      if (lookahead == '`') ADVANCE(115);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(4)
      if ((1 <= lookahead && lookahead <= 8) ||
          (17 <= lookahead && lookahead <= 31) ||
          (128 <= lookahead && lookahead <= 160)) ADVANCE(138);
      if (lookahead != 0 &&
          lookahead != '{') ADVANCE(159);
      END_STATE();
    case 5:
      if (lookahead == '\n') ADVANCE(135);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '<') ADVANCE(103);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(5)
      if ((1 <= lookahead && lookahead <= 8) ||
          (17 <= lookahead && lookahead <= 31) ||
          (128 <= lookahead && lookahead <= 160)) ADVANCE(139);
      if (lookahead != 0 &&
          lookahead != '`' &&
          lookahead != '{') ADVANCE(159);
      END_STATE();
    case 6:
      if (lookahead == '\n') ADVANCE(135);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '<') ADVANCE(105);
      if (lookahead == '`') ADVANCE(115);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(6)
      if ((1 <= lookahead && lookahead <= 8) ||
          (17 <= lookahead && lookahead <= 31) ||
          (128 <= lookahead && lookahead <= 160)) ADVANCE(140);
      if (lookahead != 0 &&
          lookahead != '{') ADVANCE(159);
      END_STATE();
    case 7:
      if (lookahead == '\n') ADVANCE(135);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '<') ADVANCE(106);
      if (lookahead == '`') ADVANCE(115);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(7)
      if ((1 <= lookahead && lookahead <= 8) ||
          (17 <= lookahead && lookahead <= 31) ||
          (128 <= lookahead && lookahead <= 160)) ADVANCE(141);
      if (lookahead != 0 &&
          lookahead != '{') ADVANCE(159);
      END_STATE();
    case 8:
      if (lookahead == '\n') ADVANCE(130);
      END_STATE();
    case 9:
      if (lookahead == '\n') ADVANCE(130);
      if (lookahead == '\r') ADVANCE(8);
      if (lookahead == ':') ADVANCE(78);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(13);
      END_STATE();
    case 10:
      if (lookahead == '\n') ADVANCE(130);
      if (lookahead == '\r') ADVANCE(8);
      if (lookahead == 'D') ADVANCE(12);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(13);
      END_STATE();
    case 11:
      if (lookahead == '\n') ADVANCE(130);
      if (lookahead == '\r') ADVANCE(8);
      if (lookahead == 'O') ADVANCE(10);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(13);
      END_STATE();
    case 12:
      if (lookahead == '\n') ADVANCE(130);
      if (lookahead == '\r') ADVANCE(8);
      if (lookahead == 'O') ADVANCE(9);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(13);
      END_STATE();
    case 13:
      if (lookahead == '\n') ADVANCE(130);
      if (lookahead == '\r') ADVANCE(8);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(13);
      END_STATE();
    case 14:
      if (lookahead == '"') ADVANCE(167);
      if (lookahead == '\'') ADVANCE(118);
      if (lookahead == '\\') ADVANCE(169);
      if ((1 <= lookahead && lookahead <= '\t') ||
          (17 <= lookahead && lookahead <= ' ') ||
          (128 <= lookahead && lookahead <= 160)) ADVANCE(168);
      if (lookahead != 0) ADVANCE(170);
      END_STATE();
    case 15:
      if (lookahead == '\'') ADVANCE(118);
      if (lookahead == '@') ADVANCE(46);
      if (lookahead == 'T') ADVANCE(38);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(98);
      if (('a' <= lookahead && lookahead <= 'z') ||
          (224 <= lookahead && lookahead <= 246) ||
          (248 <= lookahead && lookahead <= 255)) ADVANCE(161);
      if ((1 <= lookahead && lookahead <= '\t') ||
          (17 <= lookahead && lookahead <= ' ') ||
          (128 <= lookahead && lookahead <= 160)) SKIP(15)
      END_STATE();
    case 16:
      if (lookahead == '\'') ADVANCE(124);
      if (lookahead == '\n' ||
          lookahead == '\r') ADVANCE(131);
      if ((1 <= lookahead && lookahead <= '\t') ||
          (17 <= lookahead && lookahead <= ' ') ||
          (128 <= lookahead && lookahead <= 160)) ADVANCE(122);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(121);
      if (lookahead != 0) ADVANCE(120);
      END_STATE();
    case 17:
      if (lookahead == '\'') ADVANCE(124);
      if ((1 <= lookahead && lookahead <= '\t') ||
          (17 <= lookahead && lookahead <= ' ') ||
          (128 <= lookahead && lookahead <= 160)) ADVANCE(123);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(120);
      END_STATE();
    case 18:
      if (lookahead == '\'') ADVANCE(19);
      END_STATE();
    case 19:
      if (lookahead == '\'') ADVANCE(129);
      END_STATE();
    case 20:
      if (lookahead == '\'') ADVANCE(132);
      if ((1 <= lookahead && lookahead <= '\t') ||
          (17 <= lookahead && lookahead <= ' ') ||
          (128 <= lookahead && lookahead <= 160)) ADVANCE(133);
      if (lookahead != 0) ADVANCE(131);
      END_STATE();
    case 21:
      if (lookahead == '\'') ADVANCE(125);
      if ((1 <= lookahead && lookahead <= '\t') ||
          (17 <= lookahead && lookahead <= ' ') ||
          (128 <= lookahead && lookahead <= 160)) ADVANCE(126);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(120);
      END_STATE();
    case 22:
      if (lookahead == '\'') ADVANCE(18);
      if ((1 <= lookahead && lookahead <= '\t') ||
          (17 <= lookahead && lookahead <= ' ') ||
          (128 <= lookahead && lookahead <= 160)) SKIP(22)
      END_STATE();
    case 23:
      if (lookahead == ':') ADVANCE(78);
      END_STATE();
    case 24:
      if (lookahead == '<') ADVANCE(107);
      if (lookahead == '=') ADVANCE(148);
      if (lookahead == '@') ADVANCE(158);
      if (lookahead == 'T') ADVANCE(156);
      if (lookahead == '`') ADVANCE(115);
      if (lookahead == '{') ADVANCE(74);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(24)
      if ((1 <= lookahead && lookahead <= 8) ||
          (17 <= lookahead && lookahead <= 31) ||
          (128 <= lookahead && lookahead <= 160)) ADVANCE(143);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(159);
      END_STATE();
    case 25:
      if (lookahead == '<') ADVANCE(107);
      if (lookahead == '=') ADVANCE(154);
      if (lookahead == '`') ADVANCE(115);
      if (lookahead == '{') ADVANCE(74);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(25)
      if ((1 <= lookahead && lookahead <= 8) ||
          (17 <= lookahead && lookahead <= 31) ||
          (128 <= lookahead && lookahead <= 160)) ADVANCE(144);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(159);
      END_STATE();
    case 26:
      if (lookahead == '<') ADVANCE(107);
      if (lookahead == '=') ADVANCE(151);
      if (lookahead == '`') ADVANCE(115);
      if (lookahead == '{') ADVANCE(74);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(26)
      if ((1 <= lookahead && lookahead <= 8) ||
          (17 <= lookahead && lookahead <= 31) ||
          (128 <= lookahead && lookahead <= 160)) ADVANCE(145);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(159);
      END_STATE();
    case 27:
      if (lookahead == '<') ADVANCE(107);
      if (lookahead == '=') ADVANCE(153);
      if (lookahead == '`') ADVANCE(115);
      if (lookahead == '{') ADVANCE(74);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(27)
      if ((1 <= lookahead && lookahead <= 8) ||
          (17 <= lookahead && lookahead <= 31) ||
          (128 <= lookahead && lookahead <= 160)) ADVANCE(146);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(159);
      END_STATE();
    case 28:
      if (lookahead == '<') ADVANCE(107);
      if (lookahead == '`') ADVANCE(115);
      if (lookahead == '{') ADVANCE(74);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(28)
      if ((1 <= lookahead && lookahead <= 8) ||
          (17 <= lookahead && lookahead <= 31) ||
          (128 <= lookahead && lookahead <= 160)) ADVANCE(147);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(159);
      END_STATE();
    case 29:
      if (lookahead == '=') ADVANCE(70);
      END_STATE();
    case 30:
      if (lookahead == '>') ADVANCE(110);
      if ((1 <= lookahead && lookahead <= '\t') ||
          (17 <= lookahead && lookahead <= ' ') ||
          (128 <= lookahead && lookahead <= 160)) ADVANCE(109);
      if (lookahead != 0) ADVANCE(108);
      END_STATE();
    case 31:
      if (lookahead == '>') ADVANCE(99);
      END_STATE();
    case 32:
      if (lookahead == '>') ADVANCE(100);
      END_STATE();
    case 33:
      if (lookahead == '>') ADVANCE(101);
      END_STATE();
    case 34:
      if (lookahead == '>') ADVANCE(102);
      END_STATE();
    case 35:
      if (lookahead == '@') ADVANCE(113);
      if (lookahead == 'a') ADVANCE(86);
      if (lookahead == 'l') ADVANCE(80);
      if (lookahead == '{') ADVANCE(111);
      if (lookahead == '}') ADVANCE(112);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(87);
      END_STATE();
    case 36:
      if (lookahead == '@') ADVANCE(89);
      if (lookahead == '}') ADVANCE(77);
      if ((1 <= lookahead && lookahead <= '\t') ||
          (17 <= lookahead && lookahead <= ' ') ||
          (128 <= lookahead && lookahead <= 160)) ADVANCE(90);
      if (lookahead != 0) ADVANCE(88);
      END_STATE();
    case 37:
      if (lookahead == 'D') ADVANCE(39);
      END_STATE();
    case 38:
      if (lookahead == 'O') ADVANCE(37);
      END_STATE();
    case 39:
      if (lookahead == 'O') ADVANCE(23);
      END_STATE();
    case 40:
      if (lookahead == '^') ADVANCE(166);
      if (lookahead == 'x') ADVANCE(163);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(165);
      if ((' ' <= lookahead && lookahead <= 127)) ADVANCE(162);
      END_STATE();
    case 41:
      if (lookahead == '`') ADVANCE(159);
      END_STATE();
    case 42:
      if (lookahead == 'e') ADVANCE(48);
      END_STATE();
    case 43:
      if (lookahead == 'e') ADVANCE(48);
      if (lookahead == 's') ADVANCE(57);
      END_STATE();
    case 44:
      if (lookahead == 'g') ADVANCE(33);
      END_STATE();
    case 45:
      if (lookahead == 'g') ADVANCE(34);
      END_STATE();
    case 46:
      if (lookahead == 'l') ADVANCE(80);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(87);
      END_STATE();
    case 47:
      if (lookahead == 'm') ADVANCE(31);
      END_STATE();
    case 48:
      if (lookahead == 'm') ADVANCE(32);
      END_STATE();
    case 49:
      if (lookahead == 'n') ADVANCE(44);
      END_STATE();
    case 50:
      if (lookahead == 'n') ADVANCE(45);
      END_STATE();
    case 51:
      if (lookahead == 'o') ADVANCE(49);
      END_STATE();
    case 52:
      if (lookahead == 'o') ADVANCE(50);
      END_STATE();
    case 53:
      if (lookahead == 'r') ADVANCE(51);
      END_STATE();
    case 54:
      if (lookahead == 'r') ADVANCE(52);
      END_STATE();
    case 55:
      if (lookahead == 's') ADVANCE(57);
      END_STATE();
    case 56:
      if (lookahead == 't') ADVANCE(53);
      END_STATE();
    case 57:
      if (lookahead == 't') ADVANCE(54);
      END_STATE();
    case 58:
      if (lookahead == '{') ADVANCE(41);
      END_STATE();
    case 59:
      if (lookahead == '}') ADVANCE(77);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(75);
      if (lookahead == '\n' ||
          lookahead == '\r') ADVANCE(76);
      if ((1 <= lookahead && lookahead <= 8) ||
          (17 <= lookahead && lookahead <= 31) ||
          (128 <= lookahead && lookahead <= 160)) SKIP(59)
      END_STATE();
    case 60:
      if (lookahead == '}') ADVANCE(162);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(60);
      END_STATE();
    case 61:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(162);
      END_STATE();
    case 62:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(60);
      END_STATE();
    case 63:
      if ((1 <= lookahead && lookahead <= '\t') ||
          (17 <= lookahead && lookahead <= ' ') ||
          (128 <= lookahead && lookahead <= 160)) ADVANCE(116);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '\'') ADVANCE(117);
      END_STATE();
    case 64:
      if (lookahead != 0 &&
          (lookahead < 1 || '\t' < lookahead) &&
          (lookahead < 17 || ' ' < lookahead) &&
          (lookahead < 128 || 160 < lookahead)) ADVANCE(131);
      if ((1 <= lookahead && lookahead <= '\t') ||
          (17 <= lookahead && lookahead <= ' ') ||
          (128 <= lookahead && lookahead <= 160)) ADVANCE(134);
      END_STATE();
    case 65:
      if (eof) ADVANCE(67);
      if (lookahead == '\n') ADVANCE(135);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '<') ADVANCE(107);
      if (lookahead == '=') ADVANCE(148);
      if (lookahead == '@') ADVANCE(158);
      if (lookahead == 'T') ADVANCE(156);
      if (lookahead == '`') ADVANCE(115);
      if (lookahead == '{') ADVANCE(74);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(65)
      if ((1 <= lookahead && lookahead <= 8) ||
          (17 <= lookahead && lookahead <= 31) ||
          (128 <= lookahead && lookahead <= 160)) ADVANCE(136);
      if (lookahead != 0) ADVANCE(159);
      END_STATE();
    case 66:
      if (eof) ADVANCE(67);
      if (lookahead == '<') ADVANCE(107);
      if (lookahead == '=') ADVANCE(148);
      if (lookahead == '@') ADVANCE(158);
      if (lookahead == 'T') ADVANCE(156);
      if (lookahead == '`') ADVANCE(115);
      if (lookahead == '{') ADVANCE(74);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(66)
      if ((1 <= lookahead && lookahead <= 8) ||
          (17 <= lookahead && lookahead <= 31) ||
          (128 <= lookahead && lookahead <= 160)) ADVANCE(143);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(159);
      END_STATE();
    case 67:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 68:
      ACCEPT_TOKEN(anon_sym_ATauthor);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(87);
      END_STATE();
    case 69:
      ACCEPT_TOKEN(anon_sym_EQ_EQ);
      END_STATE();
    case 70:
      ACCEPT_TOKEN(anon_sym_EQ_EQ);
      if (lookahead == '=') ADVANCE(72);
      END_STATE();
    case 71:
      ACCEPT_TOKEN(anon_sym_EQ_EQ_EQ);
      END_STATE();
    case 72:
      ACCEPT_TOKEN(anon_sym_EQ_EQ_EQ);
      if (lookahead == '=') ADVANCE(73);
      END_STATE();
    case 73:
      ACCEPT_TOKEN(anon_sym_EQ_EQ_EQ_EQ);
      END_STATE();
    case 74:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 75:
      ACCEPT_TOKEN(aux_sym_macro_token1);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(75);
      if (lookahead == '\n' ||
          lookahead == '\r') ADVANCE(76);
      END_STATE();
    case 76:
      ACCEPT_TOKEN(aux_sym_macro_token1);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(76);
      END_STATE();
    case 77:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 78:
      ACCEPT_TOKEN(anon_sym_TODO_COLON);
      END_STATE();
    case 79:
      ACCEPT_TOKEN(aux_sym_tag_token1);
      if (lookahead == 'h') ADVANCE(83);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(87);
      END_STATE();
    case 80:
      ACCEPT_TOKEN(aux_sym_tag_token1);
      if (lookahead == 'i') ADVANCE(82);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(87);
      END_STATE();
    case 81:
      ACCEPT_TOKEN(aux_sym_tag_token1);
      if (lookahead == 'k') ADVANCE(91);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(87);
      END_STATE();
    case 82:
      ACCEPT_TOKEN(aux_sym_tag_token1);
      if (lookahead == 'n') ADVANCE(81);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(87);
      END_STATE();
    case 83:
      ACCEPT_TOKEN(aux_sym_tag_token1);
      if (lookahead == 'o') ADVANCE(84);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(87);
      END_STATE();
    case 84:
      ACCEPT_TOKEN(aux_sym_tag_token1);
      if (lookahead == 'r') ADVANCE(68);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(87);
      END_STATE();
    case 85:
      ACCEPT_TOKEN(aux_sym_tag_token1);
      if (lookahead == 't') ADVANCE(79);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(87);
      END_STATE();
    case 86:
      ACCEPT_TOKEN(aux_sym_tag_token1);
      if (lookahead == 'u') ADVANCE(85);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(87);
      END_STATE();
    case 87:
      ACCEPT_TOKEN(aux_sym_tag_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(87);
      END_STATE();
    case 88:
      ACCEPT_TOKEN(aux_sym_argument_token1);
      END_STATE();
    case 89:
      ACCEPT_TOKEN(aux_sym_argument_token1);
      if (lookahead == '@') ADVANCE(113);
      if (lookahead == '{') ADVANCE(111);
      if (lookahead == '}') ADVANCE(112);
      END_STATE();
    case 90:
      ACCEPT_TOKEN(aux_sym_argument_token1);
      if (lookahead == '@') ADVANCE(89);
      if ((1 <= lookahead && lookahead <= '\t') ||
          (17 <= lookahead && lookahead <= ' ') ||
          (128 <= lookahead && lookahead <= 160)) ADVANCE(90);
      if (lookahead != 0 &&
          lookahead != '}') ADVANCE(88);
      END_STATE();
    case 91:
      ACCEPT_TOKEN(anon_sym_ATlink);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(87);
      END_STATE();
    case 92:
      ACCEPT_TOKEN(anon_sym_DOT);
      END_STATE();
    case 93:
      ACCEPT_TOKEN(anon_sym_SLASH);
      END_STATE();
    case 94:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 95:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 96:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 97:
      ACCEPT_TOKEN(sym_arity);
      if (lookahead == '\n') ADVANCE(130);
      if (lookahead == '\r') ADVANCE(8);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(97);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(13);
      END_STATE();
    case 98:
      ACCEPT_TOKEN(sym_arity);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(98);
      END_STATE();
    case 99:
      ACCEPT_TOKEN(anon_sym_LTem_GT);
      END_STATE();
    case 100:
      ACCEPT_TOKEN(anon_sym_LT_SLASHem_GT);
      END_STATE();
    case 101:
      ACCEPT_TOKEN(anon_sym_LTstrong_GT);
      END_STATE();
    case 102:
      ACCEPT_TOKEN(anon_sym_LT_SLASHstrong_GT);
      END_STATE();
    case 103:
      ACCEPT_TOKEN(anon_sym_LT);
      END_STATE();
    case 104:
      ACCEPT_TOKEN(anon_sym_LT);
      if (lookahead == '/') ADVANCE(43);
      if (lookahead == 'e') ADVANCE(47);
      if (lookahead == 's') ADVANCE(56);
      END_STATE();
    case 105:
      ACCEPT_TOKEN(anon_sym_LT);
      if (lookahead == '/') ADVANCE(55);
      END_STATE();
    case 106:
      ACCEPT_TOKEN(anon_sym_LT);
      if (lookahead == '/') ADVANCE(42);
      END_STATE();
    case 107:
      ACCEPT_TOKEN(anon_sym_LT);
      if (lookahead == 'e') ADVANCE(47);
      if (lookahead == 's') ADVANCE(56);
      END_STATE();
    case 108:
      ACCEPT_TOKEN(aux_sym_xhtml_tag_token1);
      END_STATE();
    case 109:
      ACCEPT_TOKEN(aux_sym_xhtml_tag_token1);
      if ((1 <= lookahead && lookahead <= '\t') ||
          (17 <= lookahead && lookahead <= ' ') ||
          (128 <= lookahead && lookahead <= 160)) ADVANCE(109);
      if (lookahead != 0 &&
          lookahead != '>') ADVANCE(108);
      END_STATE();
    case 110:
      ACCEPT_TOKEN(anon_sym_GT);
      END_STATE();
    case 111:
      ACCEPT_TOKEN(anon_sym_AT_LBRACE);
      END_STATE();
    case 112:
      ACCEPT_TOKEN(anon_sym_AT_RBRACE);
      END_STATE();
    case 113:
      ACCEPT_TOKEN(anon_sym_AT_AT);
      END_STATE();
    case 114:
      ACCEPT_TOKEN(sym_quote_escape);
      END_STATE();
    case 115:
      ACCEPT_TOKEN(anon_sym_BQUOTE);
      if (lookahead == '\'') ADVANCE(114);
      if (lookahead == '`') ADVANCE(119);
      END_STATE();
    case 116:
      ACCEPT_TOKEN(aux_sym__inline_quote_token1);
      if ((1 <= lookahead && lookahead <= '\t') ||
          (17 <= lookahead && lookahead <= ' ') ||
          (128 <= lookahead && lookahead <= 160)) ADVANCE(116);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '\'') ADVANCE(117);
      END_STATE();
    case 117:
      ACCEPT_TOKEN(aux_sym__inline_quote_token1);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '\'') ADVANCE(117);
      END_STATE();
    case 118:
      ACCEPT_TOKEN(anon_sym_SQUOTE);
      END_STATE();
    case 119:
      ACCEPT_TOKEN(anon_sym_BQUOTE_BQUOTE);
      if (lookahead == '`') ADVANCE(128);
      END_STATE();
    case 120:
      ACCEPT_TOKEN(aux_sym__double_inline_quote_token1);
      END_STATE();
    case 121:
      ACCEPT_TOKEN(aux_sym__double_inline_quote_token1);
      if (lookahead == '\n') ADVANCE(130);
      if (lookahead == '\r') ADVANCE(8);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(13);
      END_STATE();
    case 122:
      ACCEPT_TOKEN(aux_sym__double_inline_quote_token1);
      if (lookahead == '\'') ADVANCE(124);
      if ((1 <= lookahead && lookahead <= '\t') ||
          (17 <= lookahead && lookahead <= ' ') ||
          (128 <= lookahead && lookahead <= 160)) ADVANCE(122);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(121);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(120);
      END_STATE();
    case 123:
      ACCEPT_TOKEN(aux_sym__double_inline_quote_token1);
      if (lookahead == '\'') ADVANCE(124);
      if ((1 <= lookahead && lookahead <= '\t') ||
          (17 <= lookahead && lookahead <= ' ') ||
          (128 <= lookahead && lookahead <= 160)) ADVANCE(123);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(120);
      END_STATE();
    case 124:
      ACCEPT_TOKEN(aux_sym__double_inline_quote_token1);
      if (lookahead == '\'') ADVANCE(19);
      END_STATE();
    case 125:
      ACCEPT_TOKEN(aux_sym__double_inline_quote_token1);
      if (lookahead == '\'') ADVANCE(127);
      END_STATE();
    case 126:
      ACCEPT_TOKEN(aux_sym__double_inline_quote_token1);
      if (lookahead == '\'') ADVANCE(125);
      if ((1 <= lookahead && lookahead <= '\t') ||
          (17 <= lookahead && lookahead <= ' ') ||
          (128 <= lookahead && lookahead <= 160)) ADVANCE(126);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(120);
      END_STATE();
    case 127:
      ACCEPT_TOKEN(anon_sym_SQUOTE_SQUOTE);
      END_STATE();
    case 128:
      ACCEPT_TOKEN(anon_sym_BQUOTE_BQUOTE_BQUOTE);
      END_STATE();
    case 129:
      ACCEPT_TOKEN(anon_sym_SQUOTE_SQUOTE_SQUOTE);
      END_STATE();
    case 130:
      ACCEPT_TOKEN(sym_language_identifier);
      END_STATE();
    case 131:
      ACCEPT_TOKEN(aux_sym_quote_content_token1);
      END_STATE();
    case 132:
      ACCEPT_TOKEN(aux_sym_quote_content_token1);
      if (lookahead == '\'') ADVANCE(19);
      END_STATE();
    case 133:
      ACCEPT_TOKEN(aux_sym_quote_content_token1);
      if (lookahead == '\'') ADVANCE(132);
      if ((1 <= lookahead && lookahead <= '\t') ||
          (17 <= lookahead && lookahead <= ' ') ||
          (128 <= lookahead && lookahead <= 160)) ADVANCE(133);
      if (lookahead != 0) ADVANCE(131);
      END_STATE();
    case 134:
      ACCEPT_TOKEN(aux_sym_quote_content_token1);
      if (lookahead != 0 &&
          (lookahead < 1 || '\t' < lookahead) &&
          (lookahead < 17 || ' ' < lookahead) &&
          (lookahead < 128 || 160 < lookahead)) ADVANCE(131);
      if ((1 <= lookahead && lookahead <= '\t') ||
          (17 <= lookahead && lookahead <= ' ') ||
          (128 <= lookahead && lookahead <= 160)) ADVANCE(134);
      END_STATE();
    case 135:
      ACCEPT_TOKEN(sym__terminator);
      END_STATE();
    case 136:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == '\n') ADVANCE(135);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '<') ADVANCE(107);
      if (lookahead == '=') ADVANCE(148);
      if (lookahead == '@') ADVANCE(158);
      if (lookahead == 'T') ADVANCE(156);
      if (lookahead == '`') ADVANCE(115);
      if (lookahead == '{') ADVANCE(74);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(2)
      if ((1 <= lookahead && lookahead <= 8) ||
          (17 <= lookahead && lookahead <= 31) ||
          (128 <= lookahead && lookahead <= 160)) ADVANCE(136);
      if (lookahead != 0) ADVANCE(159);
      END_STATE();
    case 137:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == '\n') ADVANCE(135);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '<') ADVANCE(107);
      if (lookahead == '`') ADVANCE(115);
      if (lookahead == '{') ADVANCE(74);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(3)
      if ((1 <= lookahead && lookahead <= 8) ||
          (17 <= lookahead && lookahead <= 31) ||
          (128 <= lookahead && lookahead <= 160)) ADVANCE(137);
      if (lookahead != 0) ADVANCE(159);
      END_STATE();
    case 138:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == '\n') ADVANCE(135);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '<') ADVANCE(103);
      if (lookahead == '`') ADVANCE(115);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(4)
      if ((1 <= lookahead && lookahead <= 8) ||
          (17 <= lookahead && lookahead <= 31) ||
          (128 <= lookahead && lookahead <= 160)) ADVANCE(138);
      if (lookahead != 0 &&
          lookahead != '{') ADVANCE(159);
      END_STATE();
    case 139:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == '\n') ADVANCE(135);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '<') ADVANCE(103);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(5)
      if ((1 <= lookahead && lookahead <= 8) ||
          (17 <= lookahead && lookahead <= 31) ||
          (128 <= lookahead && lookahead <= 160)) ADVANCE(139);
      if (lookahead != 0 &&
          lookahead != '`' &&
          lookahead != '{') ADVANCE(159);
      END_STATE();
    case 140:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == '\n') ADVANCE(135);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '<') ADVANCE(105);
      if (lookahead == '`') ADVANCE(115);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(6)
      if ((1 <= lookahead && lookahead <= 8) ||
          (17 <= lookahead && lookahead <= 31) ||
          (128 <= lookahead && lookahead <= 160)) ADVANCE(140);
      if (lookahead != 0 &&
          lookahead != '{') ADVANCE(159);
      END_STATE();
    case 141:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == '\n') ADVANCE(135);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '<') ADVANCE(106);
      if (lookahead == '`') ADVANCE(115);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(7)
      if ((1 <= lookahead && lookahead <= 8) ||
          (17 <= lookahead && lookahead <= 31) ||
          (128 <= lookahead && lookahead <= 160)) ADVANCE(141);
      if (lookahead != 0 &&
          lookahead != '{') ADVANCE(159);
      END_STATE();
    case 142:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == ':') ADVANCE(78);
      if (lookahead == '<') ADVANCE(58);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '`' &&
          lookahead != '{') ADVANCE(159);
      END_STATE();
    case 143:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == '<') ADVANCE(107);
      if (lookahead == '=') ADVANCE(148);
      if (lookahead == '@') ADVANCE(158);
      if (lookahead == 'T') ADVANCE(156);
      if (lookahead == '`') ADVANCE(115);
      if (lookahead == '{') ADVANCE(74);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(24)
      if ((1 <= lookahead && lookahead <= 8) ||
          (17 <= lookahead && lookahead <= 31) ||
          (128 <= lookahead && lookahead <= 160)) ADVANCE(143);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(159);
      END_STATE();
    case 144:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == '<') ADVANCE(107);
      if (lookahead == '=') ADVANCE(154);
      if (lookahead == '`') ADVANCE(115);
      if (lookahead == '{') ADVANCE(74);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(25)
      if ((1 <= lookahead && lookahead <= 8) ||
          (17 <= lookahead && lookahead <= 31) ||
          (128 <= lookahead && lookahead <= 160)) ADVANCE(144);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(159);
      END_STATE();
    case 145:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == '<') ADVANCE(107);
      if (lookahead == '=') ADVANCE(151);
      if (lookahead == '`') ADVANCE(115);
      if (lookahead == '{') ADVANCE(74);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(26)
      if ((1 <= lookahead && lookahead <= 8) ||
          (17 <= lookahead && lookahead <= 31) ||
          (128 <= lookahead && lookahead <= 160)) ADVANCE(145);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(159);
      END_STATE();
    case 146:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == '<') ADVANCE(107);
      if (lookahead == '=') ADVANCE(153);
      if (lookahead == '`') ADVANCE(115);
      if (lookahead == '{') ADVANCE(74);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(27)
      if ((1 <= lookahead && lookahead <= 8) ||
          (17 <= lookahead && lookahead <= 31) ||
          (128 <= lookahead && lookahead <= 160)) ADVANCE(146);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(159);
      END_STATE();
    case 147:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == '<') ADVANCE(107);
      if (lookahead == '`') ADVANCE(115);
      if (lookahead == '{') ADVANCE(74);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(28)
      if ((1 <= lookahead && lookahead <= 8) ||
          (17 <= lookahead && lookahead <= 31) ||
          (128 <= lookahead && lookahead <= 160)) ADVANCE(147);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(159);
      END_STATE();
    case 148:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == '<') ADVANCE(58);
      if (lookahead == '=') ADVANCE(70);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '`' &&
          lookahead != '{') ADVANCE(159);
      END_STATE();
    case 149:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == '<') ADVANCE(58);
      if (lookahead == '=') ADVANCE(73);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '`' &&
          lookahead != '{') ADVANCE(159);
      END_STATE();
    case 150:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == '<') ADVANCE(58);
      if (lookahead == '=') ADVANCE(71);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '`' &&
          lookahead != '{') ADVANCE(159);
      END_STATE();
    case 151:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == '<') ADVANCE(58);
      if (lookahead == '=') ADVANCE(69);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '`' &&
          lookahead != '{') ADVANCE(159);
      END_STATE();
    case 152:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == '<') ADVANCE(58);
      if (lookahead == '=') ADVANCE(149);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '`' &&
          lookahead != '{') ADVANCE(159);
      END_STATE();
    case 153:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == '<') ADVANCE(58);
      if (lookahead == '=') ADVANCE(150);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '`' &&
          lookahead != '{') ADVANCE(159);
      END_STATE();
    case 154:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == '<') ADVANCE(58);
      if (lookahead == '=') ADVANCE(152);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '`' &&
          lookahead != '{') ADVANCE(159);
      END_STATE();
    case 155:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == '<') ADVANCE(58);
      if (lookahead == 'D') ADVANCE(157);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '`' &&
          lookahead != '{') ADVANCE(159);
      END_STATE();
    case 156:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == '<') ADVANCE(58);
      if (lookahead == 'O') ADVANCE(155);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '`' &&
          lookahead != '{') ADVANCE(159);
      END_STATE();
    case 157:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == '<') ADVANCE(58);
      if (lookahead == 'O') ADVANCE(142);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '`' &&
          lookahead != '{') ADVANCE(159);
      END_STATE();
    case 158:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == '<') ADVANCE(58);
      if (lookahead == 'a') ADVANCE(86);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(87);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          (lookahead < '`' || '{' < lookahead)) ADVANCE(159);
      END_STATE();
    case 159:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == '<') ADVANCE(58);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '`' &&
          lookahead != '{') ADVANCE(159);
      END_STATE();
    case 160:
      ACCEPT_TOKEN(sym__unquoted_atom);
      if (lookahead == '\n') ADVANCE(130);
      if (lookahead == '\r') ADVANCE(8);
      if (lookahead == '-') ADVANCE(13);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(160);
      if (lookahead == '@' ||
          (192 <= lookahead && lookahead <= 255)) ADVANCE(161);
      END_STATE();
    case 161:
      ACCEPT_TOKEN(sym__unquoted_atom);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (192 <= lookahead && lookahead <= 255)) ADVANCE(161);
      END_STATE();
    case 162:
      ACCEPT_TOKEN(sym__escape_sequence);
      END_STATE();
    case 163:
      ACCEPT_TOKEN(sym__escape_sequence);
      if (lookahead == '{') ADVANCE(62);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(61);
      END_STATE();
    case 164:
      ACCEPT_TOKEN(sym__escape_sequence);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(162);
      END_STATE();
    case 165:
      ACCEPT_TOKEN(sym__escape_sequence);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(164);
      END_STATE();
    case 166:
      ACCEPT_TOKEN(sym__escape_sequence);
      if (('A' <= lookahead && lookahead <= '_') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(162);
      END_STATE();
    case 167:
      ACCEPT_TOKEN(sym__quoted_content);
      END_STATE();
    case 168:
      ACCEPT_TOKEN(sym__quoted_content);
      if (lookahead == '"') ADVANCE(167);
      if (lookahead == '\'') ADVANCE(118);
      if (lookahead == '\\') ADVANCE(169);
      if ((1 <= lookahead && lookahead <= '\t') ||
          (17 <= lookahead && lookahead <= ' ') ||
          (128 <= lookahead && lookahead <= 160)) ADVANCE(168);
      if (lookahead != 0) ADVANCE(170);
      END_STATE();
    case 169:
      ACCEPT_TOKEN(sym__quoted_content);
      if (lookahead == '^') ADVANCE(166);
      if (lookahead == 'x') ADVANCE(163);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(165);
      if ((' ' <= lookahead && lookahead <= 127)) ADVANCE(162);
      END_STATE();
    case 170:
      ACCEPT_TOKEN(sym__quoted_content);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(170);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 65},
  [2] = {.lex_state = 65},
  [3] = {.lex_state = 66},
  [4] = {.lex_state = 66},
  [5] = {.lex_state = 66},
  [6] = {.lex_state = 3},
  [7] = {.lex_state = 25},
  [8] = {.lex_state = 27},
  [9] = {.lex_state = 26},
  [10] = {.lex_state = 27},
  [11] = {.lex_state = 26},
  [12] = {.lex_state = 25},
  [13] = {.lex_state = 3},
  [14] = {.lex_state = 3},
  [15] = {.lex_state = 3},
  [16] = {.lex_state = 28},
  [17] = {.lex_state = 28},
  [18] = {.lex_state = 28},
  [19] = {.lex_state = 65},
  [20] = {.lex_state = 65},
  [21] = {.lex_state = 4},
  [22] = {.lex_state = 4},
  [23] = {.lex_state = 4},
  [24] = {.lex_state = 6},
  [25] = {.lex_state = 4},
  [26] = {.lex_state = 4},
  [27] = {.lex_state = 4},
  [28] = {.lex_state = 4},
  [29] = {.lex_state = 7},
  [30] = {.lex_state = 6},
  [31] = {.lex_state = 4},
  [32] = {.lex_state = 7},
  [33] = {.lex_state = 26},
  [34] = {.lex_state = 26},
  [35] = {.lex_state = 25},
  [36] = {.lex_state = 3},
  [37] = {.lex_state = 3},
  [38] = {.lex_state = 25},
  [39] = {.lex_state = 25},
  [40] = {.lex_state = 25},
  [41] = {.lex_state = 25},
  [42] = {.lex_state = 25},
  [43] = {.lex_state = 25},
  [44] = {.lex_state = 25},
  [45] = {.lex_state = 3},
  [46] = {.lex_state = 25},
  [47] = {.lex_state = 25},
  [48] = {.lex_state = 3},
  [49] = {.lex_state = 27},
  [50] = {.lex_state = 3},
  [51] = {.lex_state = 25},
  [52] = {.lex_state = 25},
  [53] = {.lex_state = 25},
  [54] = {.lex_state = 25},
  [55] = {.lex_state = 3},
  [56] = {.lex_state = 25},
  [57] = {.lex_state = 27},
  [58] = {.lex_state = 25},
  [59] = {.lex_state = 25},
  [60] = {.lex_state = 25},
  [61] = {.lex_state = 27},
  [62] = {.lex_state = 27},
  [63] = {.lex_state = 27},
  [64] = {.lex_state = 27},
  [65] = {.lex_state = 3},
  [66] = {.lex_state = 3},
  [67] = {.lex_state = 3},
  [68] = {.lex_state = 3},
  [69] = {.lex_state = 27},
  [70] = {.lex_state = 3},
  [71] = {.lex_state = 3},
  [72] = {.lex_state = 27},
  [73] = {.lex_state = 27},
  [74] = {.lex_state = 3},
  [75] = {.lex_state = 3},
  [76] = {.lex_state = 27},
  [77] = {.lex_state = 27},
  [78] = {.lex_state = 27},
  [79] = {.lex_state = 3},
  [80] = {.lex_state = 27},
  [81] = {.lex_state = 27},
  [82] = {.lex_state = 27},
  [83] = {.lex_state = 26},
  [84] = {.lex_state = 27},
  [85] = {.lex_state = 3},
  [86] = {.lex_state = 27},
  [87] = {.lex_state = 3},
  [88] = {.lex_state = 27},
  [89] = {.lex_state = 26},
  [90] = {.lex_state = 26},
  [91] = {.lex_state = 26},
  [92] = {.lex_state = 26},
  [93] = {.lex_state = 26},
  [94] = {.lex_state = 26},
  [95] = {.lex_state = 3},
  [96] = {.lex_state = 26},
  [97] = {.lex_state = 3},
  [98] = {.lex_state = 26},
  [99] = {.lex_state = 26},
  [100] = {.lex_state = 26},
  [101] = {.lex_state = 26},
  [102] = {.lex_state = 26},
  [103] = {.lex_state = 26},
  [104] = {.lex_state = 26},
  [105] = {.lex_state = 26},
  [106] = {.lex_state = 6},
  [107] = {.lex_state = 15},
  [108] = {.lex_state = 7},
  [109] = {.lex_state = 7},
  [110] = {.lex_state = 15},
  [111] = {.lex_state = 7},
  [112] = {.lex_state = 7},
  [113] = {.lex_state = 6},
  [114] = {.lex_state = 6},
  [115] = {.lex_state = 6},
  [116] = {.lex_state = 6},
  [117] = {.lex_state = 6},
  [118] = {.lex_state = 6},
  [119] = {.lex_state = 7},
  [120] = {.lex_state = 15},
  [121] = {.lex_state = 7},
  [122] = {.lex_state = 15},
  [123] = {.lex_state = 7},
  [124] = {.lex_state = 7},
  [125] = {.lex_state = 6},
  [126] = {.lex_state = 36},
  [127] = {.lex_state = 36},
  [128] = {.lex_state = 16},
  [129] = {.lex_state = 36},
  [130] = {.lex_state = 36},
  [131] = {.lex_state = 36},
  [132] = {.lex_state = 36},
  [133] = {.lex_state = 36},
  [134] = {.lex_state = 16},
  [135] = {.lex_state = 36},
  [136] = {.lex_state = 36},
  [137] = {.lex_state = 36},
  [138] = {.lex_state = 16},
  [139] = {.lex_state = 16},
  [140] = {.lex_state = 15},
  [141] = {.lex_state = 0},
  [142] = {.lex_state = 0},
  [143] = {.lex_state = 5},
  [144] = {.lex_state = 5},
  [145] = {.lex_state = 36},
  [146] = {.lex_state = 0},
  [147] = {.lex_state = 14},
  [148] = {.lex_state = 15},
  [149] = {.lex_state = 5},
  [150] = {.lex_state = 15},
  [151] = {.lex_state = 15},
  [152] = {.lex_state = 14},
  [153] = {.lex_state = 14},
  [154] = {.lex_state = 15},
  [155] = {.lex_state = 64},
  [156] = {.lex_state = 30},
  [157] = {.lex_state = 64},
  [158] = {.lex_state = 30},
  [159] = {.lex_state = 17},
  [160] = {.lex_state = 30},
  [161] = {.lex_state = 21},
  [162] = {.lex_state = 64},
  [163] = {.lex_state = 17},
  [164] = {.lex_state = 20},
  [165] = {.lex_state = 17},
  [166] = {.lex_state = 30},
  [167] = {.lex_state = 0},
  [168] = {.lex_state = 30},
  [169] = {.lex_state = 21},
  [170] = {.lex_state = 21},
  [171] = {.lex_state = 20},
  [172] = {.lex_state = 30},
  [173] = {.lex_state = 30},
  [174] = {.lex_state = 21},
  [175] = {.lex_state = 17},
  [176] = {.lex_state = 30},
  [177] = {.lex_state = 21},
  [178] = {.lex_state = 64},
  [179] = {.lex_state = 30},
  [180] = {.lex_state = 17},
  [181] = {.lex_state = 30},
  [182] = {.lex_state = 21},
  [183] = {.lex_state = 17},
  [184] = {.lex_state = 17},
  [185] = {.lex_state = 21},
  [186] = {.lex_state = 21},
  [187] = {.lex_state = 30},
  [188] = {.lex_state = 21},
  [189] = {.lex_state = 30},
  [190] = {.lex_state = 21},
  [191] = {.lex_state = 17},
  [192] = {.lex_state = 30},
  [193] = {.lex_state = 30},
  [194] = {.lex_state = 21},
  [195] = {.lex_state = 21},
  [196] = {.lex_state = 17},
  [197] = {.lex_state = 30},
  [198] = {.lex_state = 21},
  [199] = {.lex_state = 59},
  [200] = {.lex_state = 0},
  [201] = {.lex_state = 0},
  [202] = {.lex_state = 59},
  [203] = {.lex_state = 0},
  [204] = {.lex_state = 59},
  [205] = {.lex_state = 0},
  [206] = {.lex_state = 59},
  [207] = {.lex_state = 0},
  [208] = {.lex_state = 0},
  [209] = {.lex_state = 0},
  [210] = {.lex_state = 0},
  [211] = {.lex_state = 59},
  [212] = {.lex_state = 0},
  [213] = {.lex_state = 0},
  [214] = {.lex_state = 0},
  [215] = {.lex_state = 22},
  [216] = {.lex_state = 22},
  [217] = {.lex_state = 0},
  [218] = {.lex_state = 0},
  [219] = {.lex_state = 22},
  [220] = {.lex_state = 0},
  [221] = {.lex_state = 0},
  [222] = {.lex_state = 22},
  [223] = {.lex_state = 0},
  [224] = {.lex_state = 0},
  [225] = {.lex_state = 0},
  [226] = {.lex_state = 22},
  [227] = {.lex_state = 0},
  [228] = {.lex_state = 0},
  [229] = {.lex_state = 22},
  [230] = {.lex_state = 0},
  [231] = {.lex_state = 0},
  [232] = {.lex_state = 0},
  [233] = {.lex_state = 0},
  [234] = {.lex_state = 0},
  [235] = {.lex_state = 0},
  [236] = {.lex_state = 0},
  [237] = {.lex_state = 0},
  [238] = {.lex_state = 63},
  [239] = {.lex_state = 63},
  [240] = {.lex_state = 0},
  [241] = {.lex_state = 0},
  [242] = {.lex_state = 15},
  [243] = {.lex_state = 0},
  [244] = {.lex_state = 0},
  [245] = {.lex_state = 0},
  [246] = {.lex_state = 0},
  [247] = {.lex_state = 63},
  [248] = {.lex_state = 0},
  [249] = {.lex_state = 15},
  [250] = {.lex_state = 22},
  [251] = {.lex_state = 0},
  [252] = {.lex_state = 0},
  [253] = {.lex_state = 0},
  [254] = {.lex_state = 0},
  [255] = {.lex_state = 63},
  [256] = {.lex_state = 22},
  [257] = {.lex_state = 0},
  [258] = {.lex_state = 0},
  [259] = {.lex_state = 0},
  [260] = {.lex_state = 63},
  [261] = {.lex_state = 63},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [anon_sym_ATauthor] = ACTIONS(1),
    [anon_sym_EQ_EQ] = ACTIONS(1),
    [anon_sym_EQ_EQ_EQ] = ACTIONS(1),
    [anon_sym_EQ_EQ_EQ_EQ] = ACTIONS(1),
    [anon_sym_LBRACE] = ACTIONS(1),
    [anon_sym_RBRACE] = ACTIONS(1),
    [anon_sym_TODO_COLON] = ACTIONS(1),
    [aux_sym_tag_token1] = ACTIONS(1),
    [anon_sym_ATlink] = ACTIONS(1),
    [anon_sym_DOT] = ACTIONS(1),
    [anon_sym_SLASH] = ACTIONS(1),
    [anon_sym_COLON] = ACTIONS(1),
    [anon_sym_LPAREN] = ACTIONS(1),
    [anon_sym_RPAREN] = ACTIONS(1),
    [sym_arity] = ACTIONS(1),
    [anon_sym_LTem_GT] = ACTIONS(1),
    [anon_sym_LT_SLASHem_GT] = ACTIONS(1),
    [anon_sym_LTstrong_GT] = ACTIONS(1),
    [anon_sym_LT_SLASHstrong_GT] = ACTIONS(1),
    [anon_sym_LT] = ACTIONS(1),
    [anon_sym_GT] = ACTIONS(1),
    [anon_sym_AT_LBRACE] = ACTIONS(1),
    [anon_sym_AT_RBRACE] = ACTIONS(1),
    [anon_sym_AT_AT] = ACTIONS(1),
    [sym_quote_escape] = ACTIONS(1),
    [anon_sym_BQUOTE] = ACTIONS(1),
    [anon_sym_SQUOTE] = ACTIONS(1),
    [anon_sym_BQUOTE_BQUOTE] = ACTIONS(1),
    [anon_sym_BQUOTE_BQUOTE_BQUOTE] = ACTIONS(1),
    [sym_language_identifier] = ACTIONS(1),
    [sym__terminator] = ACTIONS(1),
    [sym__unquoted_atom] = ACTIONS(1),
    [sym__escape_sequence] = ACTIONS(1),
  },
  [1] = {
    [sym_source] = STATE(244),
    [sym__line] = STATE(203),
    [sym__tag_line] = STATE(203),
    [sym__author_line] = STATE(203),
    [aux_sym__text_line] = STATE(14),
    [sym_section] = STATE(203),
    [sym_macro] = STATE(85),
    [sym_tag] = STATE(15),
    [sym__link_macro] = STATE(36),
    [sym__xhtml_tag] = STATE(85),
    [sym_em_xhtml_tag] = STATE(85),
    [sym_strong_xhtml_tag] = STATE(85),
    [sym_xhtml_tag] = STATE(85),
    [sym_inline_quote] = STATE(85),
    [sym__inline_quote] = STATE(37),
    [sym__double_inline_quote] = STATE(37),
    [sym__triple_inline_quote] = STATE(37),
    [sym_block_quote] = STATE(85),
    [aux_sym_source_repeat1] = STATE(2),
    [aux_sym_source_repeat2] = STATE(5),
    [ts_builtin_sym_end] = ACTIONS(3),
    [anon_sym_ATauthor] = ACTIONS(5),
    [anon_sym_EQ_EQ] = ACTIONS(7),
    [anon_sym_EQ_EQ_EQ] = ACTIONS(9),
    [anon_sym_EQ_EQ_EQ_EQ] = ACTIONS(11),
    [anon_sym_LBRACE] = ACTIONS(13),
    [anon_sym_TODO_COLON] = ACTIONS(15),
    [aux_sym_tag_token1] = ACTIONS(15),
    [anon_sym_LTem_GT] = ACTIONS(17),
    [anon_sym_LTstrong_GT] = ACTIONS(19),
    [anon_sym_LT] = ACTIONS(21),
    [sym_quote_escape] = ACTIONS(23),
    [anon_sym_BQUOTE] = ACTIONS(25),
    [anon_sym_BQUOTE_BQUOTE] = ACTIONS(27),
    [anon_sym_BQUOTE_BQUOTE_BQUOTE] = ACTIONS(29),
    [sym__terminator] = ACTIONS(31),
    [sym__word] = ACTIONS(23),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 23,
    ACTIONS(5), 1,
      anon_sym_ATauthor,
    ACTIONS(7), 1,
      anon_sym_EQ_EQ,
    ACTIONS(9), 1,
      anon_sym_EQ_EQ_EQ,
    ACTIONS(11), 1,
      anon_sym_EQ_EQ_EQ_EQ,
    ACTIONS(13), 1,
      anon_sym_LBRACE,
    ACTIONS(17), 1,
      anon_sym_LTem_GT,
    ACTIONS(19), 1,
      anon_sym_LTstrong_GT,
    ACTIONS(21), 1,
      anon_sym_LT,
    ACTIONS(25), 1,
      anon_sym_BQUOTE,
    ACTIONS(27), 1,
      anon_sym_BQUOTE_BQUOTE,
    ACTIONS(29), 1,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
    ACTIONS(33), 1,
      ts_builtin_sym_end,
    ACTIONS(35), 1,
      sym__terminator,
    STATE(4), 1,
      aux_sym_source_repeat2,
    STATE(14), 1,
      aux_sym__text_line,
    STATE(15), 1,
      sym_tag,
    STATE(20), 1,
      aux_sym_source_repeat1,
    STATE(36), 1,
      sym__link_macro,
    ACTIONS(15), 2,
      anon_sym_TODO_COLON,
      aux_sym_tag_token1,
    ACTIONS(23), 2,
      sym_quote_escape,
      sym__word,
    STATE(37), 3,
      sym__inline_quote,
      sym__double_inline_quote,
      sym__triple_inline_quote,
    STATE(203), 4,
      sym__line,
      sym__tag_line,
      sym__author_line,
      sym_section,
    STATE(85), 7,
      sym_macro,
      sym__xhtml_tag,
      sym_em_xhtml_tag,
      sym_strong_xhtml_tag,
      sym_xhtml_tag,
      sym_inline_quote,
      sym_block_quote,
  [83] = 21,
    ACTIONS(37), 1,
      ts_builtin_sym_end,
    ACTIONS(39), 1,
      anon_sym_ATauthor,
    ACTIONS(42), 1,
      anon_sym_EQ_EQ,
    ACTIONS(45), 1,
      anon_sym_EQ_EQ_EQ,
    ACTIONS(48), 1,
      anon_sym_EQ_EQ_EQ_EQ,
    ACTIONS(51), 1,
      anon_sym_LBRACE,
    ACTIONS(57), 1,
      anon_sym_LTem_GT,
    ACTIONS(60), 1,
      anon_sym_LTstrong_GT,
    ACTIONS(63), 1,
      anon_sym_LT,
    ACTIONS(69), 1,
      anon_sym_BQUOTE,
    ACTIONS(72), 1,
      anon_sym_BQUOTE_BQUOTE,
    ACTIONS(75), 1,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
    STATE(3), 1,
      aux_sym_source_repeat2,
    STATE(14), 1,
      aux_sym__text_line,
    STATE(15), 1,
      sym_tag,
    STATE(36), 1,
      sym__link_macro,
    ACTIONS(54), 2,
      anon_sym_TODO_COLON,
      aux_sym_tag_token1,
    ACTIONS(66), 2,
      sym_quote_escape,
      sym__word,
    STATE(37), 3,
      sym__inline_quote,
      sym__double_inline_quote,
      sym__triple_inline_quote,
    STATE(203), 4,
      sym__line,
      sym__tag_line,
      sym__author_line,
      sym_section,
    STATE(85), 7,
      sym_macro,
      sym__xhtml_tag,
      sym_em_xhtml_tag,
      sym_strong_xhtml_tag,
      sym_xhtml_tag,
      sym_inline_quote,
      sym_block_quote,
  [160] = 21,
    ACTIONS(5), 1,
      anon_sym_ATauthor,
    ACTIONS(7), 1,
      anon_sym_EQ_EQ,
    ACTIONS(9), 1,
      anon_sym_EQ_EQ_EQ,
    ACTIONS(11), 1,
      anon_sym_EQ_EQ_EQ_EQ,
    ACTIONS(13), 1,
      anon_sym_LBRACE,
    ACTIONS(17), 1,
      anon_sym_LTem_GT,
    ACTIONS(19), 1,
      anon_sym_LTstrong_GT,
    ACTIONS(21), 1,
      anon_sym_LT,
    ACTIONS(25), 1,
      anon_sym_BQUOTE,
    ACTIONS(27), 1,
      anon_sym_BQUOTE_BQUOTE,
    ACTIONS(29), 1,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
    ACTIONS(78), 1,
      ts_builtin_sym_end,
    STATE(3), 1,
      aux_sym_source_repeat2,
    STATE(14), 1,
      aux_sym__text_line,
    STATE(15), 1,
      sym_tag,
    STATE(36), 1,
      sym__link_macro,
    ACTIONS(15), 2,
      anon_sym_TODO_COLON,
      aux_sym_tag_token1,
    ACTIONS(23), 2,
      sym_quote_escape,
      sym__word,
    STATE(37), 3,
      sym__inline_quote,
      sym__double_inline_quote,
      sym__triple_inline_quote,
    STATE(203), 4,
      sym__line,
      sym__tag_line,
      sym__author_line,
      sym_section,
    STATE(85), 7,
      sym_macro,
      sym__xhtml_tag,
      sym_em_xhtml_tag,
      sym_strong_xhtml_tag,
      sym_xhtml_tag,
      sym_inline_quote,
      sym_block_quote,
  [237] = 21,
    ACTIONS(5), 1,
      anon_sym_ATauthor,
    ACTIONS(7), 1,
      anon_sym_EQ_EQ,
    ACTIONS(9), 1,
      anon_sym_EQ_EQ_EQ,
    ACTIONS(11), 1,
      anon_sym_EQ_EQ_EQ_EQ,
    ACTIONS(13), 1,
      anon_sym_LBRACE,
    ACTIONS(17), 1,
      anon_sym_LTem_GT,
    ACTIONS(19), 1,
      anon_sym_LTstrong_GT,
    ACTIONS(21), 1,
      anon_sym_LT,
    ACTIONS(25), 1,
      anon_sym_BQUOTE,
    ACTIONS(27), 1,
      anon_sym_BQUOTE_BQUOTE,
    ACTIONS(29), 1,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
    ACTIONS(33), 1,
      ts_builtin_sym_end,
    STATE(3), 1,
      aux_sym_source_repeat2,
    STATE(14), 1,
      aux_sym__text_line,
    STATE(15), 1,
      sym_tag,
    STATE(36), 1,
      sym__link_macro,
    ACTIONS(15), 2,
      anon_sym_TODO_COLON,
      aux_sym_tag_token1,
    ACTIONS(23), 2,
      sym_quote_escape,
      sym__word,
    STATE(37), 3,
      sym__inline_quote,
      sym__double_inline_quote,
      sym__triple_inline_quote,
    STATE(203), 4,
      sym__line,
      sym__tag_line,
      sym__author_line,
      sym_section,
    STATE(85), 7,
      sym_macro,
      sym__xhtml_tag,
      sym_em_xhtml_tag,
      sym_strong_xhtml_tag,
      sym_xhtml_tag,
      sym_inline_quote,
      sym_block_quote,
  [314] = 13,
    ACTIONS(80), 1,
      anon_sym_LBRACE,
    ACTIONS(83), 1,
      anon_sym_LTem_GT,
    ACTIONS(86), 1,
      anon_sym_LTstrong_GT,
    ACTIONS(89), 1,
      anon_sym_LT,
    ACTIONS(95), 1,
      anon_sym_BQUOTE,
    ACTIONS(98), 1,
      anon_sym_BQUOTE_BQUOTE,
    ACTIONS(101), 1,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
    ACTIONS(104), 1,
      sym__terminator,
    STATE(6), 1,
      aux_sym__text_line,
    STATE(36), 1,
      sym__link_macro,
    ACTIONS(92), 2,
      sym_quote_escape,
      sym__word,
    STATE(37), 3,
      sym__inline_quote,
      sym__double_inline_quote,
      sym__triple_inline_quote,
    STATE(85), 7,
      sym_macro,
      sym__xhtml_tag,
      sym_em_xhtml_tag,
      sym_strong_xhtml_tag,
      sym_xhtml_tag,
      sym_inline_quote,
      sym_block_quote,
  [363] = 13,
    ACTIONS(106), 1,
      anon_sym_EQ_EQ_EQ_EQ,
    ACTIONS(108), 1,
      anon_sym_LBRACE,
    ACTIONS(110), 1,
      anon_sym_LTem_GT,
    ACTIONS(112), 1,
      anon_sym_LTstrong_GT,
    ACTIONS(114), 1,
      anon_sym_LT,
    ACTIONS(118), 1,
      anon_sym_BQUOTE,
    ACTIONS(120), 1,
      anon_sym_BQUOTE_BQUOTE,
    ACTIONS(122), 1,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
    STATE(12), 1,
      aux_sym__text_line,
    STATE(59), 1,
      sym__link_macro,
    ACTIONS(116), 2,
      sym_quote_escape,
      sym__word,
    STATE(58), 3,
      sym__inline_quote,
      sym__double_inline_quote,
      sym__triple_inline_quote,
    STATE(60), 7,
      sym_macro,
      sym__xhtml_tag,
      sym_em_xhtml_tag,
      sym_strong_xhtml_tag,
      sym_xhtml_tag,
      sym_inline_quote,
      sym_block_quote,
  [412] = 13,
    ACTIONS(106), 1,
      anon_sym_EQ_EQ_EQ,
    ACTIONS(124), 1,
      anon_sym_LBRACE,
    ACTIONS(126), 1,
      anon_sym_LTem_GT,
    ACTIONS(128), 1,
      anon_sym_LTstrong_GT,
    ACTIONS(130), 1,
      anon_sym_LT,
    ACTIONS(134), 1,
      anon_sym_BQUOTE,
    ACTIONS(136), 1,
      anon_sym_BQUOTE_BQUOTE,
    ACTIONS(138), 1,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
    STATE(10), 1,
      aux_sym__text_line,
    STATE(86), 1,
      sym__link_macro,
    ACTIONS(132), 2,
      sym_quote_escape,
      sym__word,
    STATE(84), 3,
      sym__inline_quote,
      sym__double_inline_quote,
      sym__triple_inline_quote,
    STATE(88), 7,
      sym_macro,
      sym__xhtml_tag,
      sym_em_xhtml_tag,
      sym_strong_xhtml_tag,
      sym_xhtml_tag,
      sym_inline_quote,
      sym_block_quote,
  [461] = 13,
    ACTIONS(106), 1,
      anon_sym_EQ_EQ,
    ACTIONS(140), 1,
      anon_sym_LBRACE,
    ACTIONS(142), 1,
      anon_sym_LTem_GT,
    ACTIONS(144), 1,
      anon_sym_LTstrong_GT,
    ACTIONS(146), 1,
      anon_sym_LT,
    ACTIONS(150), 1,
      anon_sym_BQUOTE,
    ACTIONS(152), 1,
      anon_sym_BQUOTE_BQUOTE,
    ACTIONS(154), 1,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
    STATE(11), 1,
      aux_sym__text_line,
    STATE(100), 1,
      sym__link_macro,
    ACTIONS(148), 2,
      sym_quote_escape,
      sym__word,
    STATE(101), 3,
      sym__inline_quote,
      sym__double_inline_quote,
      sym__triple_inline_quote,
    STATE(99), 7,
      sym_macro,
      sym__xhtml_tag,
      sym_em_xhtml_tag,
      sym_strong_xhtml_tag,
      sym_xhtml_tag,
      sym_inline_quote,
      sym_block_quote,
  [510] = 13,
    ACTIONS(104), 1,
      anon_sym_EQ_EQ_EQ,
    ACTIONS(156), 1,
      anon_sym_LBRACE,
    ACTIONS(159), 1,
      anon_sym_LTem_GT,
    ACTIONS(162), 1,
      anon_sym_LTstrong_GT,
    ACTIONS(165), 1,
      anon_sym_LT,
    ACTIONS(171), 1,
      anon_sym_BQUOTE,
    ACTIONS(174), 1,
      anon_sym_BQUOTE_BQUOTE,
    ACTIONS(177), 1,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
    STATE(10), 1,
      aux_sym__text_line,
    STATE(86), 1,
      sym__link_macro,
    ACTIONS(168), 2,
      sym_quote_escape,
      sym__word,
    STATE(84), 3,
      sym__inline_quote,
      sym__double_inline_quote,
      sym__triple_inline_quote,
    STATE(88), 7,
      sym_macro,
      sym__xhtml_tag,
      sym_em_xhtml_tag,
      sym_strong_xhtml_tag,
      sym_xhtml_tag,
      sym_inline_quote,
      sym_block_quote,
  [559] = 13,
    ACTIONS(104), 1,
      anon_sym_EQ_EQ,
    ACTIONS(180), 1,
      anon_sym_LBRACE,
    ACTIONS(183), 1,
      anon_sym_LTem_GT,
    ACTIONS(186), 1,
      anon_sym_LTstrong_GT,
    ACTIONS(189), 1,
      anon_sym_LT,
    ACTIONS(195), 1,
      anon_sym_BQUOTE,
    ACTIONS(198), 1,
      anon_sym_BQUOTE_BQUOTE,
    ACTIONS(201), 1,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
    STATE(11), 1,
      aux_sym__text_line,
    STATE(100), 1,
      sym__link_macro,
    ACTIONS(192), 2,
      sym_quote_escape,
      sym__word,
    STATE(101), 3,
      sym__inline_quote,
      sym__double_inline_quote,
      sym__triple_inline_quote,
    STATE(99), 7,
      sym_macro,
      sym__xhtml_tag,
      sym_em_xhtml_tag,
      sym_strong_xhtml_tag,
      sym_xhtml_tag,
      sym_inline_quote,
      sym_block_quote,
  [608] = 13,
    ACTIONS(104), 1,
      anon_sym_EQ_EQ_EQ_EQ,
    ACTIONS(204), 1,
      anon_sym_LBRACE,
    ACTIONS(207), 1,
      anon_sym_LTem_GT,
    ACTIONS(210), 1,
      anon_sym_LTstrong_GT,
    ACTIONS(213), 1,
      anon_sym_LT,
    ACTIONS(219), 1,
      anon_sym_BQUOTE,
    ACTIONS(222), 1,
      anon_sym_BQUOTE_BQUOTE,
    ACTIONS(225), 1,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
    STATE(12), 1,
      aux_sym__text_line,
    STATE(59), 1,
      sym__link_macro,
    ACTIONS(216), 2,
      sym_quote_escape,
      sym__word,
    STATE(58), 3,
      sym__inline_quote,
      sym__double_inline_quote,
      sym__triple_inline_quote,
    STATE(60), 7,
      sym_macro,
      sym__xhtml_tag,
      sym_em_xhtml_tag,
      sym_strong_xhtml_tag,
      sym_xhtml_tag,
      sym_inline_quote,
      sym_block_quote,
  [657] = 13,
    ACTIONS(13), 1,
      anon_sym_LBRACE,
    ACTIONS(17), 1,
      anon_sym_LTem_GT,
    ACTIONS(19), 1,
      anon_sym_LTstrong_GT,
    ACTIONS(21), 1,
      anon_sym_LT,
    ACTIONS(25), 1,
      anon_sym_BQUOTE,
    ACTIONS(27), 1,
      anon_sym_BQUOTE_BQUOTE,
    ACTIONS(29), 1,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
    ACTIONS(228), 1,
      sym__terminator,
    STATE(6), 1,
      aux_sym__text_line,
    STATE(36), 1,
      sym__link_macro,
    ACTIONS(23), 2,
      sym_quote_escape,
      sym__word,
    STATE(37), 3,
      sym__inline_quote,
      sym__double_inline_quote,
      sym__triple_inline_quote,
    STATE(85), 7,
      sym_macro,
      sym__xhtml_tag,
      sym_em_xhtml_tag,
      sym_strong_xhtml_tag,
      sym_xhtml_tag,
      sym_inline_quote,
      sym_block_quote,
  [706] = 13,
    ACTIONS(13), 1,
      anon_sym_LBRACE,
    ACTIONS(17), 1,
      anon_sym_LTem_GT,
    ACTIONS(19), 1,
      anon_sym_LTstrong_GT,
    ACTIONS(21), 1,
      anon_sym_LT,
    ACTIONS(25), 1,
      anon_sym_BQUOTE,
    ACTIONS(27), 1,
      anon_sym_BQUOTE_BQUOTE,
    ACTIONS(29), 1,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
    ACTIONS(230), 1,
      sym__terminator,
    STATE(6), 1,
      aux_sym__text_line,
    STATE(36), 1,
      sym__link_macro,
    ACTIONS(23), 2,
      sym_quote_escape,
      sym__word,
    STATE(37), 3,
      sym__inline_quote,
      sym__double_inline_quote,
      sym__triple_inline_quote,
    STATE(85), 7,
      sym_macro,
      sym__xhtml_tag,
      sym_em_xhtml_tag,
      sym_strong_xhtml_tag,
      sym_xhtml_tag,
      sym_inline_quote,
      sym_block_quote,
  [755] = 13,
    ACTIONS(13), 1,
      anon_sym_LBRACE,
    ACTIONS(17), 1,
      anon_sym_LTem_GT,
    ACTIONS(19), 1,
      anon_sym_LTstrong_GT,
    ACTIONS(21), 1,
      anon_sym_LT,
    ACTIONS(25), 1,
      anon_sym_BQUOTE,
    ACTIONS(27), 1,
      anon_sym_BQUOTE_BQUOTE,
    ACTIONS(29), 1,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
    ACTIONS(232), 1,
      sym__terminator,
    STATE(13), 1,
      aux_sym__text_line,
    STATE(36), 1,
      sym__link_macro,
    ACTIONS(23), 2,
      sym_quote_escape,
      sym__word,
    STATE(37), 3,
      sym__inline_quote,
      sym__double_inline_quote,
      sym__triple_inline_quote,
    STATE(85), 7,
      sym_macro,
      sym__xhtml_tag,
      sym_em_xhtml_tag,
      sym_strong_xhtml_tag,
      sym_xhtml_tag,
      sym_inline_quote,
      sym_block_quote,
  [804] = 12,
    ACTIONS(108), 1,
      anon_sym_LBRACE,
    ACTIONS(110), 1,
      anon_sym_LTem_GT,
    ACTIONS(112), 1,
      anon_sym_LTstrong_GT,
    ACTIONS(114), 1,
      anon_sym_LT,
    ACTIONS(118), 1,
      anon_sym_BQUOTE,
    ACTIONS(120), 1,
      anon_sym_BQUOTE_BQUOTE,
    ACTIONS(122), 1,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
    STATE(7), 1,
      aux_sym__text_line,
    STATE(59), 1,
      sym__link_macro,
    ACTIONS(116), 2,
      sym_quote_escape,
      sym__word,
    STATE(58), 3,
      sym__inline_quote,
      sym__double_inline_quote,
      sym__triple_inline_quote,
    STATE(60), 7,
      sym_macro,
      sym__xhtml_tag,
      sym_em_xhtml_tag,
      sym_strong_xhtml_tag,
      sym_xhtml_tag,
      sym_inline_quote,
      sym_block_quote,
  [850] = 12,
    ACTIONS(124), 1,
      anon_sym_LBRACE,
    ACTIONS(126), 1,
      anon_sym_LTem_GT,
    ACTIONS(128), 1,
      anon_sym_LTstrong_GT,
    ACTIONS(130), 1,
      anon_sym_LT,
    ACTIONS(134), 1,
      anon_sym_BQUOTE,
    ACTIONS(136), 1,
      anon_sym_BQUOTE_BQUOTE,
    ACTIONS(138), 1,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
    STATE(8), 1,
      aux_sym__text_line,
    STATE(86), 1,
      sym__link_macro,
    ACTIONS(132), 2,
      sym_quote_escape,
      sym__word,
    STATE(84), 3,
      sym__inline_quote,
      sym__double_inline_quote,
      sym__triple_inline_quote,
    STATE(88), 7,
      sym_macro,
      sym__xhtml_tag,
      sym_em_xhtml_tag,
      sym_strong_xhtml_tag,
      sym_xhtml_tag,
      sym_inline_quote,
      sym_block_quote,
  [896] = 12,
    ACTIONS(140), 1,
      anon_sym_LBRACE,
    ACTIONS(142), 1,
      anon_sym_LTem_GT,
    ACTIONS(144), 1,
      anon_sym_LTstrong_GT,
    ACTIONS(146), 1,
      anon_sym_LT,
    ACTIONS(150), 1,
      anon_sym_BQUOTE,
    ACTIONS(152), 1,
      anon_sym_BQUOTE_BQUOTE,
    ACTIONS(154), 1,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
    STATE(9), 1,
      aux_sym__text_line,
    STATE(100), 1,
      sym__link_macro,
    ACTIONS(148), 2,
      sym_quote_escape,
      sym__word,
    STATE(101), 3,
      sym__inline_quote,
      sym__double_inline_quote,
      sym__triple_inline_quote,
    STATE(99), 7,
      sym_macro,
      sym__xhtml_tag,
      sym_em_xhtml_tag,
      sym_strong_xhtml_tag,
      sym_xhtml_tag,
      sym_inline_quote,
      sym_block_quote,
  [942] = 4,
    ACTIONS(35), 1,
      sym__terminator,
    ACTIONS(37), 1,
      ts_builtin_sym_end,
    STATE(20), 1,
      aux_sym_source_repeat1,
    ACTIONS(234), 15,
      anon_sym_ATauthor,
      anon_sym_EQ_EQ,
      anon_sym_EQ_EQ_EQ,
      anon_sym_EQ_EQ_EQ_EQ,
      anon_sym_LBRACE,
      anon_sym_TODO_COLON,
      aux_sym_tag_token1,
      anon_sym_LTem_GT,
      anon_sym_LTstrong_GT,
      anon_sym_LT,
      sym_quote_escape,
      anon_sym_BQUOTE,
      anon_sym_BQUOTE_BQUOTE,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
      sym__word,
  [969] = 4,
    ACTIONS(236), 1,
      ts_builtin_sym_end,
    ACTIONS(240), 1,
      sym__terminator,
    STATE(20), 1,
      aux_sym_source_repeat1,
    ACTIONS(238), 15,
      anon_sym_ATauthor,
      anon_sym_EQ_EQ,
      anon_sym_EQ_EQ_EQ,
      anon_sym_EQ_EQ_EQ_EQ,
      anon_sym_LBRACE,
      anon_sym_TODO_COLON,
      aux_sym_tag_token1,
      anon_sym_LTem_GT,
      anon_sym_LTstrong_GT,
      anon_sym_LT,
      sym_quote_escape,
      anon_sym_BQUOTE,
      anon_sym_BQUOTE_BQUOTE,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
      sym__word,
  [996] = 8,
    ACTIONS(243), 1,
      anon_sym_LT,
    ACTIONS(247), 1,
      anon_sym_BQUOTE,
    ACTIONS(249), 1,
      anon_sym_BQUOTE_BQUOTE,
    ACTIONS(251), 1,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
    STATE(259), 1,
      sym_xhtml_tag_content,
    ACTIONS(245), 3,
      sym_quote_escape,
      sym__terminator,
      sym__word,
    STATE(32), 3,
      sym_xhtml_tag,
      sym_inline_quote,
      aux_sym_xhtml_tag_content_repeat1,
    STATE(111), 3,
      sym__inline_quote,
      sym__double_inline_quote,
      sym__triple_inline_quote,
  [1027] = 8,
    ACTIONS(253), 1,
      anon_sym_LT,
    ACTIONS(257), 1,
      anon_sym_BQUOTE,
    ACTIONS(259), 1,
      anon_sym_BQUOTE_BQUOTE,
    ACTIONS(261), 1,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
    STATE(235), 1,
      sym_xhtml_tag_content,
    ACTIONS(255), 3,
      sym_quote_escape,
      sym__terminator,
      sym__word,
    STATE(24), 3,
      sym_xhtml_tag,
      sym_inline_quote,
      aux_sym_xhtml_tag_content_repeat1,
    STATE(106), 3,
      sym__inline_quote,
      sym__double_inline_quote,
      sym__triple_inline_quote,
  [1058] = 8,
    ACTIONS(243), 1,
      anon_sym_LT,
    ACTIONS(247), 1,
      anon_sym_BQUOTE,
    ACTIONS(249), 1,
      anon_sym_BQUOTE_BQUOTE,
    ACTIONS(251), 1,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
    STATE(230), 1,
      sym_xhtml_tag_content,
    ACTIONS(245), 3,
      sym_quote_escape,
      sym__terminator,
      sym__word,
    STATE(32), 3,
      sym_xhtml_tag,
      sym_inline_quote,
      aux_sym_xhtml_tag_content_repeat1,
    STATE(111), 3,
      sym__inline_quote,
      sym__double_inline_quote,
      sym__triple_inline_quote,
  [1089] = 8,
    ACTIONS(253), 1,
      anon_sym_LT,
    ACTIONS(257), 1,
      anon_sym_BQUOTE,
    ACTIONS(259), 1,
      anon_sym_BQUOTE_BQUOTE,
    ACTIONS(261), 1,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
    ACTIONS(263), 1,
      anon_sym_LT_SLASHstrong_GT,
    ACTIONS(265), 3,
      sym_quote_escape,
      sym__terminator,
      sym__word,
    STATE(30), 3,
      sym_xhtml_tag,
      sym_inline_quote,
      aux_sym_xhtml_tag_content_repeat1,
    STATE(106), 3,
      sym__inline_quote,
      sym__double_inline_quote,
      sym__triple_inline_quote,
  [1120] = 8,
    ACTIONS(253), 1,
      anon_sym_LT,
    ACTIONS(257), 1,
      anon_sym_BQUOTE,
    ACTIONS(259), 1,
      anon_sym_BQUOTE_BQUOTE,
    ACTIONS(261), 1,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
    STATE(224), 1,
      sym_xhtml_tag_content,
    ACTIONS(255), 3,
      sym_quote_escape,
      sym__terminator,
      sym__word,
    STATE(24), 3,
      sym_xhtml_tag,
      sym_inline_quote,
      aux_sym_xhtml_tag_content_repeat1,
    STATE(106), 3,
      sym__inline_quote,
      sym__double_inline_quote,
      sym__triple_inline_quote,
  [1151] = 8,
    ACTIONS(243), 1,
      anon_sym_LT,
    ACTIONS(247), 1,
      anon_sym_BQUOTE,
    ACTIONS(249), 1,
      anon_sym_BQUOTE_BQUOTE,
    ACTIONS(251), 1,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
    STATE(233), 1,
      sym_xhtml_tag_content,
    ACTIONS(245), 3,
      sym_quote_escape,
      sym__terminator,
      sym__word,
    STATE(32), 3,
      sym_xhtml_tag,
      sym_inline_quote,
      aux_sym_xhtml_tag_content_repeat1,
    STATE(111), 3,
      sym__inline_quote,
      sym__double_inline_quote,
      sym__triple_inline_quote,
  [1182] = 8,
    ACTIONS(253), 1,
      anon_sym_LT,
    ACTIONS(257), 1,
      anon_sym_BQUOTE,
    ACTIONS(259), 1,
      anon_sym_BQUOTE_BQUOTE,
    ACTIONS(261), 1,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
    STATE(258), 1,
      sym_xhtml_tag_content,
    ACTIONS(255), 3,
      sym_quote_escape,
      sym__terminator,
      sym__word,
    STATE(24), 3,
      sym_xhtml_tag,
      sym_inline_quote,
      aux_sym_xhtml_tag_content_repeat1,
    STATE(106), 3,
      sym__inline_quote,
      sym__double_inline_quote,
      sym__triple_inline_quote,
  [1213] = 8,
    ACTIONS(253), 1,
      anon_sym_LT,
    ACTIONS(257), 1,
      anon_sym_BQUOTE,
    ACTIONS(259), 1,
      anon_sym_BQUOTE_BQUOTE,
    ACTIONS(261), 1,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
    STATE(213), 1,
      sym_xhtml_tag_content,
    ACTIONS(255), 3,
      sym_quote_escape,
      sym__terminator,
      sym__word,
    STATE(24), 3,
      sym_xhtml_tag,
      sym_inline_quote,
      aux_sym_xhtml_tag_content_repeat1,
    STATE(106), 3,
      sym__inline_quote,
      sym__double_inline_quote,
      sym__triple_inline_quote,
  [1244] = 8,
    ACTIONS(267), 1,
      anon_sym_LT_SLASHem_GT,
    ACTIONS(269), 1,
      anon_sym_LT,
    ACTIONS(275), 1,
      anon_sym_BQUOTE,
    ACTIONS(278), 1,
      anon_sym_BQUOTE_BQUOTE,
    ACTIONS(281), 1,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
    ACTIONS(272), 3,
      sym_quote_escape,
      sym__terminator,
      sym__word,
    STATE(29), 3,
      sym_xhtml_tag,
      sym_inline_quote,
      aux_sym_xhtml_tag_content_repeat1,
    STATE(111), 3,
      sym__inline_quote,
      sym__double_inline_quote,
      sym__triple_inline_quote,
  [1275] = 8,
    ACTIONS(267), 1,
      anon_sym_LT_SLASHstrong_GT,
    ACTIONS(284), 1,
      anon_sym_LT,
    ACTIONS(290), 1,
      anon_sym_BQUOTE,
    ACTIONS(293), 1,
      anon_sym_BQUOTE_BQUOTE,
    ACTIONS(296), 1,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
    ACTIONS(287), 3,
      sym_quote_escape,
      sym__terminator,
      sym__word,
    STATE(30), 3,
      sym_xhtml_tag,
      sym_inline_quote,
      aux_sym_xhtml_tag_content_repeat1,
    STATE(106), 3,
      sym__inline_quote,
      sym__double_inline_quote,
      sym__triple_inline_quote,
  [1306] = 8,
    ACTIONS(243), 1,
      anon_sym_LT,
    ACTIONS(247), 1,
      anon_sym_BQUOTE,
    ACTIONS(249), 1,
      anon_sym_BQUOTE_BQUOTE,
    ACTIONS(251), 1,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
    STATE(234), 1,
      sym_xhtml_tag_content,
    ACTIONS(245), 3,
      sym_quote_escape,
      sym__terminator,
      sym__word,
    STATE(32), 3,
      sym_xhtml_tag,
      sym_inline_quote,
      aux_sym_xhtml_tag_content_repeat1,
    STATE(111), 3,
      sym__inline_quote,
      sym__double_inline_quote,
      sym__triple_inline_quote,
  [1337] = 8,
    ACTIONS(243), 1,
      anon_sym_LT,
    ACTIONS(247), 1,
      anon_sym_BQUOTE,
    ACTIONS(249), 1,
      anon_sym_BQUOTE_BQUOTE,
    ACTIONS(251), 1,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
    ACTIONS(263), 1,
      anon_sym_LT_SLASHem_GT,
    ACTIONS(299), 3,
      sym_quote_escape,
      sym__terminator,
      sym__word,
    STATE(29), 3,
      sym_xhtml_tag,
      sym_inline_quote,
      aux_sym_xhtml_tag_content_repeat1,
    STATE(111), 3,
      sym__inline_quote,
      sym__double_inline_quote,
      sym__triple_inline_quote,
  [1368] = 1,
    ACTIONS(301), 10,
      anon_sym_EQ_EQ,
      anon_sym_LBRACE,
      anon_sym_LTem_GT,
      anon_sym_LTstrong_GT,
      anon_sym_LT,
      sym_quote_escape,
      anon_sym_BQUOTE,
      anon_sym_BQUOTE_BQUOTE,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
      sym__word,
  [1381] = 1,
    ACTIONS(303), 10,
      anon_sym_EQ_EQ,
      anon_sym_LBRACE,
      anon_sym_LTem_GT,
      anon_sym_LTstrong_GT,
      anon_sym_LT,
      sym_quote_escape,
      anon_sym_BQUOTE,
      anon_sym_BQUOTE_BQUOTE,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
      sym__word,
  [1394] = 1,
    ACTIONS(301), 10,
      anon_sym_EQ_EQ_EQ_EQ,
      anon_sym_LBRACE,
      anon_sym_LTem_GT,
      anon_sym_LTstrong_GT,
      anon_sym_LT,
      sym_quote_escape,
      anon_sym_BQUOTE,
      anon_sym_BQUOTE_BQUOTE,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
      sym__word,
  [1407] = 1,
    ACTIONS(305), 10,
      anon_sym_LBRACE,
      anon_sym_LTem_GT,
      anon_sym_LTstrong_GT,
      anon_sym_LT,
      sym_quote_escape,
      anon_sym_BQUOTE,
      anon_sym_BQUOTE_BQUOTE,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
      sym__terminator,
      sym__word,
  [1420] = 1,
    ACTIONS(307), 10,
      anon_sym_LBRACE,
      anon_sym_LTem_GT,
      anon_sym_LTstrong_GT,
      anon_sym_LT,
      sym_quote_escape,
      anon_sym_BQUOTE,
      anon_sym_BQUOTE_BQUOTE,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
      sym__terminator,
      sym__word,
  [1433] = 1,
    ACTIONS(309), 10,
      anon_sym_EQ_EQ_EQ_EQ,
      anon_sym_LBRACE,
      anon_sym_LTem_GT,
      anon_sym_LTstrong_GT,
      anon_sym_LT,
      sym_quote_escape,
      anon_sym_BQUOTE,
      anon_sym_BQUOTE_BQUOTE,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
      sym__word,
  [1446] = 1,
    ACTIONS(311), 10,
      anon_sym_EQ_EQ_EQ_EQ,
      anon_sym_LBRACE,
      anon_sym_LTem_GT,
      anon_sym_LTstrong_GT,
      anon_sym_LT,
      sym_quote_escape,
      anon_sym_BQUOTE,
      anon_sym_BQUOTE_BQUOTE,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
      sym__word,
  [1459] = 1,
    ACTIONS(313), 10,
      anon_sym_EQ_EQ_EQ_EQ,
      anon_sym_LBRACE,
      anon_sym_LTem_GT,
      anon_sym_LTstrong_GT,
      anon_sym_LT,
      sym_quote_escape,
      anon_sym_BQUOTE,
      anon_sym_BQUOTE_BQUOTE,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
      sym__word,
  [1472] = 1,
    ACTIONS(315), 10,
      anon_sym_EQ_EQ_EQ_EQ,
      anon_sym_LBRACE,
      anon_sym_LTem_GT,
      anon_sym_LTstrong_GT,
      anon_sym_LT,
      sym_quote_escape,
      anon_sym_BQUOTE,
      anon_sym_BQUOTE_BQUOTE,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
      sym__word,
  [1485] = 1,
    ACTIONS(317), 10,
      anon_sym_EQ_EQ_EQ_EQ,
      anon_sym_LBRACE,
      anon_sym_LTem_GT,
      anon_sym_LTstrong_GT,
      anon_sym_LT,
      sym_quote_escape,
      anon_sym_BQUOTE,
      anon_sym_BQUOTE_BQUOTE,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
      sym__word,
  [1498] = 1,
    ACTIONS(319), 10,
      anon_sym_EQ_EQ_EQ_EQ,
      anon_sym_LBRACE,
      anon_sym_LTem_GT,
      anon_sym_LTstrong_GT,
      anon_sym_LT,
      sym_quote_escape,
      anon_sym_BQUOTE,
      anon_sym_BQUOTE_BQUOTE,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
      sym__word,
  [1511] = 1,
    ACTIONS(321), 10,
      anon_sym_EQ_EQ_EQ_EQ,
      anon_sym_LBRACE,
      anon_sym_LTem_GT,
      anon_sym_LTstrong_GT,
      anon_sym_LT,
      sym_quote_escape,
      anon_sym_BQUOTE,
      anon_sym_BQUOTE_BQUOTE,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
      sym__word,
  [1524] = 1,
    ACTIONS(309), 10,
      anon_sym_LBRACE,
      anon_sym_LTem_GT,
      anon_sym_LTstrong_GT,
      anon_sym_LT,
      sym_quote_escape,
      anon_sym_BQUOTE,
      anon_sym_BQUOTE_BQUOTE,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
      sym__terminator,
      sym__word,
  [1537] = 1,
    ACTIONS(323), 10,
      anon_sym_EQ_EQ_EQ_EQ,
      anon_sym_LBRACE,
      anon_sym_LTem_GT,
      anon_sym_LTstrong_GT,
      anon_sym_LT,
      sym_quote_escape,
      anon_sym_BQUOTE,
      anon_sym_BQUOTE_BQUOTE,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
      sym__word,
  [1550] = 1,
    ACTIONS(325), 10,
      anon_sym_EQ_EQ_EQ_EQ,
      anon_sym_LBRACE,
      anon_sym_LTem_GT,
      anon_sym_LTstrong_GT,
      anon_sym_LT,
      sym_quote_escape,
      anon_sym_BQUOTE,
      anon_sym_BQUOTE_BQUOTE,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
      sym__word,
  [1563] = 1,
    ACTIONS(327), 10,
      anon_sym_LBRACE,
      anon_sym_LTem_GT,
      anon_sym_LTstrong_GT,
      anon_sym_LT,
      sym_quote_escape,
      anon_sym_BQUOTE,
      anon_sym_BQUOTE_BQUOTE,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
      sym__terminator,
      sym__word,
  [1576] = 1,
    ACTIONS(301), 10,
      anon_sym_EQ_EQ_EQ,
      anon_sym_LBRACE,
      anon_sym_LTem_GT,
      anon_sym_LTstrong_GT,
      anon_sym_LT,
      sym_quote_escape,
      anon_sym_BQUOTE,
      anon_sym_BQUOTE_BQUOTE,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
      sym__word,
  [1589] = 1,
    ACTIONS(329), 10,
      anon_sym_LBRACE,
      anon_sym_LTem_GT,
      anon_sym_LTstrong_GT,
      anon_sym_LT,
      sym_quote_escape,
      anon_sym_BQUOTE,
      anon_sym_BQUOTE_BQUOTE,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
      sym__terminator,
      sym__word,
  [1602] = 1,
    ACTIONS(303), 10,
      anon_sym_EQ_EQ_EQ_EQ,
      anon_sym_LBRACE,
      anon_sym_LTem_GT,
      anon_sym_LTstrong_GT,
      anon_sym_LT,
      sym_quote_escape,
      anon_sym_BQUOTE,
      anon_sym_BQUOTE_BQUOTE,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
      sym__word,
  [1615] = 1,
    ACTIONS(331), 10,
      anon_sym_EQ_EQ_EQ_EQ,
      anon_sym_LBRACE,
      anon_sym_LTem_GT,
      anon_sym_LTstrong_GT,
      anon_sym_LT,
      sym_quote_escape,
      anon_sym_BQUOTE,
      anon_sym_BQUOTE_BQUOTE,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
      sym__word,
  [1628] = 1,
    ACTIONS(333), 10,
      anon_sym_EQ_EQ_EQ_EQ,
      anon_sym_LBRACE,
      anon_sym_LTem_GT,
      anon_sym_LTstrong_GT,
      anon_sym_LT,
      sym_quote_escape,
      anon_sym_BQUOTE,
      anon_sym_BQUOTE_BQUOTE,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
      sym__word,
  [1641] = 1,
    ACTIONS(329), 10,
      anon_sym_EQ_EQ_EQ_EQ,
      anon_sym_LBRACE,
      anon_sym_LTem_GT,
      anon_sym_LTstrong_GT,
      anon_sym_LT,
      sym_quote_escape,
      anon_sym_BQUOTE,
      anon_sym_BQUOTE_BQUOTE,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
      sym__word,
  [1654] = 1,
    ACTIONS(335), 10,
      anon_sym_LBRACE,
      anon_sym_LTem_GT,
      anon_sym_LTstrong_GT,
      anon_sym_LT,
      sym_quote_escape,
      anon_sym_BQUOTE,
      anon_sym_BQUOTE_BQUOTE,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
      sym__terminator,
      sym__word,
  [1667] = 1,
    ACTIONS(327), 10,
      anon_sym_EQ_EQ_EQ_EQ,
      anon_sym_LBRACE,
      anon_sym_LTem_GT,
      anon_sym_LTstrong_GT,
      anon_sym_LT,
      sym_quote_escape,
      anon_sym_BQUOTE,
      anon_sym_BQUOTE_BQUOTE,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
      sym__word,
  [1680] = 1,
    ACTIONS(309), 10,
      anon_sym_EQ_EQ_EQ,
      anon_sym_LBRACE,
      anon_sym_LTem_GT,
      anon_sym_LTstrong_GT,
      anon_sym_LT,
      sym_quote_escape,
      anon_sym_BQUOTE,
      anon_sym_BQUOTE_BQUOTE,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
      sym__word,
  [1693] = 1,
    ACTIONS(307), 10,
      anon_sym_EQ_EQ_EQ_EQ,
      anon_sym_LBRACE,
      anon_sym_LTem_GT,
      anon_sym_LTstrong_GT,
      anon_sym_LT,
      sym_quote_escape,
      anon_sym_BQUOTE,
      anon_sym_BQUOTE_BQUOTE,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
      sym__word,
  [1706] = 1,
    ACTIONS(305), 10,
      anon_sym_EQ_EQ_EQ_EQ,
      anon_sym_LBRACE,
      anon_sym_LTem_GT,
      anon_sym_LTstrong_GT,
      anon_sym_LT,
      sym_quote_escape,
      anon_sym_BQUOTE,
      anon_sym_BQUOTE_BQUOTE,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
      sym__word,
  [1719] = 1,
    ACTIONS(337), 10,
      anon_sym_EQ_EQ_EQ_EQ,
      anon_sym_LBRACE,
      anon_sym_LTem_GT,
      anon_sym_LTstrong_GT,
      anon_sym_LT,
      sym_quote_escape,
      anon_sym_BQUOTE,
      anon_sym_BQUOTE_BQUOTE,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
      sym__word,
  [1732] = 1,
    ACTIONS(311), 10,
      anon_sym_EQ_EQ_EQ,
      anon_sym_LBRACE,
      anon_sym_LTem_GT,
      anon_sym_LTstrong_GT,
      anon_sym_LT,
      sym_quote_escape,
      anon_sym_BQUOTE,
      anon_sym_BQUOTE_BQUOTE,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
      sym__word,
  [1745] = 1,
    ACTIONS(313), 10,
      anon_sym_EQ_EQ_EQ,
      anon_sym_LBRACE,
      anon_sym_LTem_GT,
      anon_sym_LTstrong_GT,
      anon_sym_LT,
      sym_quote_escape,
      anon_sym_BQUOTE,
      anon_sym_BQUOTE_BQUOTE,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
      sym__word,
  [1758] = 1,
    ACTIONS(315), 10,
      anon_sym_EQ_EQ_EQ,
      anon_sym_LBRACE,
      anon_sym_LTem_GT,
      anon_sym_LTstrong_GT,
      anon_sym_LT,
      sym_quote_escape,
      anon_sym_BQUOTE,
      anon_sym_BQUOTE_BQUOTE,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
      sym__word,
  [1771] = 1,
    ACTIONS(317), 10,
      anon_sym_EQ_EQ_EQ,
      anon_sym_LBRACE,
      anon_sym_LTem_GT,
      anon_sym_LTstrong_GT,
      anon_sym_LT,
      sym_quote_escape,
      anon_sym_BQUOTE,
      anon_sym_BQUOTE_BQUOTE,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
      sym__word,
  [1784] = 1,
    ACTIONS(333), 10,
      anon_sym_LBRACE,
      anon_sym_LTem_GT,
      anon_sym_LTstrong_GT,
      anon_sym_LT,
      sym_quote_escape,
      anon_sym_BQUOTE,
      anon_sym_BQUOTE_BQUOTE,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
      sym__terminator,
      sym__word,
  [1797] = 1,
    ACTIONS(331), 10,
      anon_sym_LBRACE,
      anon_sym_LTem_GT,
      anon_sym_LTstrong_GT,
      anon_sym_LT,
      sym_quote_escape,
      anon_sym_BQUOTE,
      anon_sym_BQUOTE_BQUOTE,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
      sym__terminator,
      sym__word,
  [1810] = 1,
    ACTIONS(303), 10,
      anon_sym_LBRACE,
      anon_sym_LTem_GT,
      anon_sym_LTstrong_GT,
      anon_sym_LT,
      sym_quote_escape,
      anon_sym_BQUOTE,
      anon_sym_BQUOTE_BQUOTE,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
      sym__terminator,
      sym__word,
  [1823] = 1,
    ACTIONS(301), 10,
      anon_sym_LBRACE,
      anon_sym_LTem_GT,
      anon_sym_LTstrong_GT,
      anon_sym_LT,
      sym_quote_escape,
      anon_sym_BQUOTE,
      anon_sym_BQUOTE_BQUOTE,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
      sym__terminator,
      sym__word,
  [1836] = 1,
    ACTIONS(319), 10,
      anon_sym_EQ_EQ_EQ,
      anon_sym_LBRACE,
      anon_sym_LTem_GT,
      anon_sym_LTstrong_GT,
      anon_sym_LT,
      sym_quote_escape,
      anon_sym_BQUOTE,
      anon_sym_BQUOTE_BQUOTE,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
      sym__word,
  [1849] = 1,
    ACTIONS(325), 10,
      anon_sym_LBRACE,
      anon_sym_LTem_GT,
      anon_sym_LTstrong_GT,
      anon_sym_LT,
      sym_quote_escape,
      anon_sym_BQUOTE,
      anon_sym_BQUOTE_BQUOTE,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
      sym__terminator,
      sym__word,
  [1862] = 1,
    ACTIONS(323), 10,
      anon_sym_LBRACE,
      anon_sym_LTem_GT,
      anon_sym_LTstrong_GT,
      anon_sym_LT,
      sym_quote_escape,
      anon_sym_BQUOTE,
      anon_sym_BQUOTE_BQUOTE,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
      sym__terminator,
      sym__word,
  [1875] = 1,
    ACTIONS(321), 10,
      anon_sym_EQ_EQ_EQ,
      anon_sym_LBRACE,
      anon_sym_LTem_GT,
      anon_sym_LTstrong_GT,
      anon_sym_LT,
      sym_quote_escape,
      anon_sym_BQUOTE,
      anon_sym_BQUOTE_BQUOTE,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
      sym__word,
  [1888] = 1,
    ACTIONS(323), 10,
      anon_sym_EQ_EQ_EQ,
      anon_sym_LBRACE,
      anon_sym_LTem_GT,
      anon_sym_LTstrong_GT,
      anon_sym_LT,
      sym_quote_escape,
      anon_sym_BQUOTE,
      anon_sym_BQUOTE_BQUOTE,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
      sym__word,
  [1901] = 1,
    ACTIONS(321), 10,
      anon_sym_LBRACE,
      anon_sym_LTem_GT,
      anon_sym_LTstrong_GT,
      anon_sym_LT,
      sym_quote_escape,
      anon_sym_BQUOTE,
      anon_sym_BQUOTE_BQUOTE,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
      sym__terminator,
      sym__word,
  [1914] = 1,
    ACTIONS(319), 10,
      anon_sym_LBRACE,
      anon_sym_LTem_GT,
      anon_sym_LTstrong_GT,
      anon_sym_LT,
      sym_quote_escape,
      anon_sym_BQUOTE,
      anon_sym_BQUOTE_BQUOTE,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
      sym__terminator,
      sym__word,
  [1927] = 1,
    ACTIONS(325), 10,
      anon_sym_EQ_EQ_EQ,
      anon_sym_LBRACE,
      anon_sym_LTem_GT,
      anon_sym_LTstrong_GT,
      anon_sym_LT,
      sym_quote_escape,
      anon_sym_BQUOTE,
      anon_sym_BQUOTE_BQUOTE,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
      sym__word,
  [1940] = 1,
    ACTIONS(303), 10,
      anon_sym_EQ_EQ_EQ,
      anon_sym_LBRACE,
      anon_sym_LTem_GT,
      anon_sym_LTstrong_GT,
      anon_sym_LT,
      sym_quote_escape,
      anon_sym_BQUOTE,
      anon_sym_BQUOTE_BQUOTE,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
      sym__word,
  [1953] = 1,
    ACTIONS(331), 10,
      anon_sym_EQ_EQ_EQ,
      anon_sym_LBRACE,
      anon_sym_LTem_GT,
      anon_sym_LTstrong_GT,
      anon_sym_LT,
      sym_quote_escape,
      anon_sym_BQUOTE,
      anon_sym_BQUOTE_BQUOTE,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
      sym__word,
  [1966] = 1,
    ACTIONS(317), 10,
      anon_sym_LBRACE,
      anon_sym_LTem_GT,
      anon_sym_LTstrong_GT,
      anon_sym_LT,
      sym_quote_escape,
      anon_sym_BQUOTE,
      anon_sym_BQUOTE_BQUOTE,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
      sym__terminator,
      sym__word,
  [1979] = 1,
    ACTIONS(333), 10,
      anon_sym_EQ_EQ_EQ,
      anon_sym_LBRACE,
      anon_sym_LTem_GT,
      anon_sym_LTstrong_GT,
      anon_sym_LT,
      sym_quote_escape,
      anon_sym_BQUOTE,
      anon_sym_BQUOTE_BQUOTE,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
      sym__word,
  [1992] = 1,
    ACTIONS(329), 10,
      anon_sym_EQ_EQ_EQ,
      anon_sym_LBRACE,
      anon_sym_LTem_GT,
      anon_sym_LTstrong_GT,
      anon_sym_LT,
      sym_quote_escape,
      anon_sym_BQUOTE,
      anon_sym_BQUOTE_BQUOTE,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
      sym__word,
  [2005] = 1,
    ACTIONS(327), 10,
      anon_sym_EQ_EQ_EQ,
      anon_sym_LBRACE,
      anon_sym_LTem_GT,
      anon_sym_LTstrong_GT,
      anon_sym_LT,
      sym_quote_escape,
      anon_sym_BQUOTE,
      anon_sym_BQUOTE_BQUOTE,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
      sym__word,
  [2018] = 1,
    ACTIONS(309), 10,
      anon_sym_EQ_EQ,
      anon_sym_LBRACE,
      anon_sym_LTem_GT,
      anon_sym_LTstrong_GT,
      anon_sym_LT,
      sym_quote_escape,
      anon_sym_BQUOTE,
      anon_sym_BQUOTE_BQUOTE,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
      sym__word,
  [2031] = 1,
    ACTIONS(307), 10,
      anon_sym_EQ_EQ_EQ,
      anon_sym_LBRACE,
      anon_sym_LTem_GT,
      anon_sym_LTstrong_GT,
      anon_sym_LT,
      sym_quote_escape,
      anon_sym_BQUOTE,
      anon_sym_BQUOTE_BQUOTE,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
      sym__word,
  [2044] = 1,
    ACTIONS(337), 10,
      anon_sym_LBRACE,
      anon_sym_LTem_GT,
      anon_sym_LTstrong_GT,
      anon_sym_LT,
      sym_quote_escape,
      anon_sym_BQUOTE,
      anon_sym_BQUOTE_BQUOTE,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
      sym__terminator,
      sym__word,
  [2057] = 1,
    ACTIONS(305), 10,
      anon_sym_EQ_EQ_EQ,
      anon_sym_LBRACE,
      anon_sym_LTem_GT,
      anon_sym_LTstrong_GT,
      anon_sym_LT,
      sym_quote_escape,
      anon_sym_BQUOTE,
      anon_sym_BQUOTE_BQUOTE,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
      sym__word,
  [2070] = 1,
    ACTIONS(315), 10,
      anon_sym_LBRACE,
      anon_sym_LTem_GT,
      anon_sym_LTstrong_GT,
      anon_sym_LT,
      sym_quote_escape,
      anon_sym_BQUOTE,
      anon_sym_BQUOTE_BQUOTE,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
      sym__terminator,
      sym__word,
  [2083] = 1,
    ACTIONS(337), 10,
      anon_sym_EQ_EQ_EQ,
      anon_sym_LBRACE,
      anon_sym_LTem_GT,
      anon_sym_LTstrong_GT,
      anon_sym_LT,
      sym_quote_escape,
      anon_sym_BQUOTE,
      anon_sym_BQUOTE_BQUOTE,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
      sym__word,
  [2096] = 1,
    ACTIONS(311), 10,
      anon_sym_EQ_EQ,
      anon_sym_LBRACE,
      anon_sym_LTem_GT,
      anon_sym_LTstrong_GT,
      anon_sym_LT,
      sym_quote_escape,
      anon_sym_BQUOTE,
      anon_sym_BQUOTE_BQUOTE,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
      sym__word,
  [2109] = 1,
    ACTIONS(313), 10,
      anon_sym_EQ_EQ,
      anon_sym_LBRACE,
      anon_sym_LTem_GT,
      anon_sym_LTstrong_GT,
      anon_sym_LT,
      sym_quote_escape,
      anon_sym_BQUOTE,
      anon_sym_BQUOTE_BQUOTE,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
      sym__word,
  [2122] = 1,
    ACTIONS(315), 10,
      anon_sym_EQ_EQ,
      anon_sym_LBRACE,
      anon_sym_LTem_GT,
      anon_sym_LTstrong_GT,
      anon_sym_LT,
      sym_quote_escape,
      anon_sym_BQUOTE,
      anon_sym_BQUOTE_BQUOTE,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
      sym__word,
  [2135] = 1,
    ACTIONS(317), 10,
      anon_sym_EQ_EQ,
      anon_sym_LBRACE,
      anon_sym_LTem_GT,
      anon_sym_LTstrong_GT,
      anon_sym_LT,
      sym_quote_escape,
      anon_sym_BQUOTE,
      anon_sym_BQUOTE_BQUOTE,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
      sym__word,
  [2148] = 1,
    ACTIONS(319), 10,
      anon_sym_EQ_EQ,
      anon_sym_LBRACE,
      anon_sym_LTem_GT,
      anon_sym_LTstrong_GT,
      anon_sym_LT,
      sym_quote_escape,
      anon_sym_BQUOTE,
      anon_sym_BQUOTE_BQUOTE,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
      sym__word,
  [2161] = 1,
    ACTIONS(321), 10,
      anon_sym_EQ_EQ,
      anon_sym_LBRACE,
      anon_sym_LTem_GT,
      anon_sym_LTstrong_GT,
      anon_sym_LT,
      sym_quote_escape,
      anon_sym_BQUOTE,
      anon_sym_BQUOTE_BQUOTE,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
      sym__word,
  [2174] = 1,
    ACTIONS(313), 10,
      anon_sym_LBRACE,
      anon_sym_LTem_GT,
      anon_sym_LTstrong_GT,
      anon_sym_LT,
      sym_quote_escape,
      anon_sym_BQUOTE,
      anon_sym_BQUOTE_BQUOTE,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
      sym__terminator,
      sym__word,
  [2187] = 1,
    ACTIONS(323), 10,
      anon_sym_EQ_EQ,
      anon_sym_LBRACE,
      anon_sym_LTem_GT,
      anon_sym_LTstrong_GT,
      anon_sym_LT,
      sym_quote_escape,
      anon_sym_BQUOTE,
      anon_sym_BQUOTE_BQUOTE,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
      sym__word,
  [2200] = 1,
    ACTIONS(311), 10,
      anon_sym_LBRACE,
      anon_sym_LTem_GT,
      anon_sym_LTstrong_GT,
      anon_sym_LT,
      sym_quote_escape,
      anon_sym_BQUOTE,
      anon_sym_BQUOTE_BQUOTE,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
      sym__terminator,
      sym__word,
  [2213] = 1,
    ACTIONS(325), 10,
      anon_sym_EQ_EQ,
      anon_sym_LBRACE,
      anon_sym_LTem_GT,
      anon_sym_LTstrong_GT,
      anon_sym_LT,
      sym_quote_escape,
      anon_sym_BQUOTE,
      anon_sym_BQUOTE_BQUOTE,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
      sym__word,
  [2226] = 1,
    ACTIONS(337), 10,
      anon_sym_EQ_EQ,
      anon_sym_LBRACE,
      anon_sym_LTem_GT,
      anon_sym_LTstrong_GT,
      anon_sym_LT,
      sym_quote_escape,
      anon_sym_BQUOTE,
      anon_sym_BQUOTE_BQUOTE,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
      sym__word,
  [2239] = 1,
    ACTIONS(305), 10,
      anon_sym_EQ_EQ,
      anon_sym_LBRACE,
      anon_sym_LTem_GT,
      anon_sym_LTstrong_GT,
      anon_sym_LT,
      sym_quote_escape,
      anon_sym_BQUOTE,
      anon_sym_BQUOTE_BQUOTE,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
      sym__word,
  [2252] = 1,
    ACTIONS(307), 10,
      anon_sym_EQ_EQ,
      anon_sym_LBRACE,
      anon_sym_LTem_GT,
      anon_sym_LTstrong_GT,
      anon_sym_LT,
      sym_quote_escape,
      anon_sym_BQUOTE,
      anon_sym_BQUOTE_BQUOTE,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
      sym__word,
  [2265] = 1,
    ACTIONS(327), 10,
      anon_sym_EQ_EQ,
      anon_sym_LBRACE,
      anon_sym_LTem_GT,
      anon_sym_LTstrong_GT,
      anon_sym_LT,
      sym_quote_escape,
      anon_sym_BQUOTE,
      anon_sym_BQUOTE_BQUOTE,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
      sym__word,
  [2278] = 1,
    ACTIONS(329), 10,
      anon_sym_EQ_EQ,
      anon_sym_LBRACE,
      anon_sym_LTem_GT,
      anon_sym_LTstrong_GT,
      anon_sym_LT,
      sym_quote_escape,
      anon_sym_BQUOTE,
      anon_sym_BQUOTE_BQUOTE,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
      sym__word,
  [2291] = 1,
    ACTIONS(333), 10,
      anon_sym_EQ_EQ,
      anon_sym_LBRACE,
      anon_sym_LTem_GT,
      anon_sym_LTstrong_GT,
      anon_sym_LT,
      sym_quote_escape,
      anon_sym_BQUOTE,
      anon_sym_BQUOTE_BQUOTE,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
      sym__word,
  [2304] = 1,
    ACTIONS(331), 10,
      anon_sym_EQ_EQ,
      anon_sym_LBRACE,
      anon_sym_LTem_GT,
      anon_sym_LTstrong_GT,
      anon_sym_LT,
      sym_quote_escape,
      anon_sym_BQUOTE,
      anon_sym_BQUOTE_BQUOTE,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
      sym__word,
  [2317] = 1,
    ACTIONS(307), 8,
      anon_sym_LT_SLASHstrong_GT,
      anon_sym_LT,
      sym_quote_escape,
      anon_sym_BQUOTE,
      anon_sym_BQUOTE_BQUOTE,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
      sym__terminator,
      sym__word,
  [2328] = 7,
    ACTIONS(339), 1,
      anon_sym_SQUOTE,
    ACTIONS(341), 1,
      sym__unquoted_atom,
    STATE(167), 1,
      sym_module,
    STATE(201), 1,
      sym__link_expression,
    STATE(251), 1,
      sym_type,
    STATE(252), 1,
      sym_function,
    STATE(142), 2,
      sym__atom,
      sym__quoted_atom,
  [2351] = 1,
    ACTIONS(323), 8,
      anon_sym_LT_SLASHem_GT,
      anon_sym_LT,
      sym_quote_escape,
      anon_sym_BQUOTE,
      anon_sym_BQUOTE_BQUOTE,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
      sym__terminator,
      sym__word,
  [2362] = 1,
    ACTIONS(319), 8,
      anon_sym_LT_SLASHem_GT,
      anon_sym_LT,
      sym_quote_escape,
      anon_sym_BQUOTE,
      anon_sym_BQUOTE_BQUOTE,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
      sym__terminator,
      sym__word,
  [2373] = 7,
    ACTIONS(339), 1,
      anon_sym_SQUOTE,
    ACTIONS(341), 1,
      sym__unquoted_atom,
    STATE(167), 1,
      sym_module,
    STATE(205), 1,
      sym__link_expression,
    STATE(251), 1,
      sym_type,
    STATE(252), 1,
      sym_function,
    STATE(142), 2,
      sym__atom,
      sym__quoted_atom,
  [2396] = 1,
    ACTIONS(307), 8,
      anon_sym_LT_SLASHem_GT,
      anon_sym_LT,
      sym_quote_escape,
      anon_sym_BQUOTE,
      anon_sym_BQUOTE_BQUOTE,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
      sym__terminator,
      sym__word,
  [2407] = 1,
    ACTIONS(309), 8,
      anon_sym_LT_SLASHem_GT,
      anon_sym_LT,
      sym_quote_escape,
      anon_sym_BQUOTE,
      anon_sym_BQUOTE_BQUOTE,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
      sym__terminator,
      sym__word,
  [2418] = 1,
    ACTIONS(301), 8,
      anon_sym_LT_SLASHstrong_GT,
      anon_sym_LT,
      sym_quote_escape,
      anon_sym_BQUOTE,
      anon_sym_BQUOTE_BQUOTE,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
      sym__terminator,
      sym__word,
  [2429] = 1,
    ACTIONS(309), 8,
      anon_sym_LT_SLASHstrong_GT,
      anon_sym_LT,
      sym_quote_escape,
      anon_sym_BQUOTE,
      anon_sym_BQUOTE_BQUOTE,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
      sym__terminator,
      sym__word,
  [2440] = 1,
    ACTIONS(327), 8,
      anon_sym_LT_SLASHstrong_GT,
      anon_sym_LT,
      sym_quote_escape,
      anon_sym_BQUOTE,
      anon_sym_BQUOTE_BQUOTE,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
      sym__terminator,
      sym__word,
  [2451] = 1,
    ACTIONS(319), 8,
      anon_sym_LT_SLASHstrong_GT,
      anon_sym_LT,
      sym_quote_escape,
      anon_sym_BQUOTE,
      anon_sym_BQUOTE_BQUOTE,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
      sym__terminator,
      sym__word,
  [2462] = 1,
    ACTIONS(323), 8,
      anon_sym_LT_SLASHstrong_GT,
      anon_sym_LT,
      sym_quote_escape,
      anon_sym_BQUOTE,
      anon_sym_BQUOTE_BQUOTE,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
      sym__terminator,
      sym__word,
  [2473] = 1,
    ACTIONS(329), 8,
      anon_sym_LT_SLASHstrong_GT,
      anon_sym_LT,
      sym_quote_escape,
      anon_sym_BQUOTE,
      anon_sym_BQUOTE_BQUOTE,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
      sym__terminator,
      sym__word,
  [2484] = 1,
    ACTIONS(301), 8,
      anon_sym_LT_SLASHem_GT,
      anon_sym_LT,
      sym_quote_escape,
      anon_sym_BQUOTE,
      anon_sym_BQUOTE_BQUOTE,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
      sym__terminator,
      sym__word,
  [2495] = 7,
    ACTIONS(339), 1,
      anon_sym_SQUOTE,
    ACTIONS(341), 1,
      sym__unquoted_atom,
    STATE(167), 1,
      sym_module,
    STATE(210), 1,
      sym__link_expression,
    STATE(251), 1,
      sym_type,
    STATE(252), 1,
      sym_function,
    STATE(142), 2,
      sym__atom,
      sym__quoted_atom,
  [2518] = 1,
    ACTIONS(325), 8,
      anon_sym_LT_SLASHem_GT,
      anon_sym_LT,
      sym_quote_escape,
      anon_sym_BQUOTE,
      anon_sym_BQUOTE_BQUOTE,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
      sym__terminator,
      sym__word,
  [2529] = 7,
    ACTIONS(339), 1,
      anon_sym_SQUOTE,
    ACTIONS(341), 1,
      sym__unquoted_atom,
    STATE(167), 1,
      sym_module,
    STATE(200), 1,
      sym__link_expression,
    STATE(251), 1,
      sym_type,
    STATE(252), 1,
      sym_function,
    STATE(142), 2,
      sym__atom,
      sym__quoted_atom,
  [2552] = 1,
    ACTIONS(329), 8,
      anon_sym_LT_SLASHem_GT,
      anon_sym_LT,
      sym_quote_escape,
      anon_sym_BQUOTE,
      anon_sym_BQUOTE_BQUOTE,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
      sym__terminator,
      sym__word,
  [2563] = 1,
    ACTIONS(327), 8,
      anon_sym_LT_SLASHem_GT,
      anon_sym_LT,
      sym_quote_escape,
      anon_sym_BQUOTE,
      anon_sym_BQUOTE_BQUOTE,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
      sym__terminator,
      sym__word,
  [2574] = 1,
    ACTIONS(325), 8,
      anon_sym_LT_SLASHstrong_GT,
      anon_sym_LT,
      sym_quote_escape,
      anon_sym_BQUOTE,
      anon_sym_BQUOTE_BQUOTE,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
      sym__terminator,
      sym__word,
  [2585] = 4,
    ACTIONS(343), 1,
      anon_sym_RBRACE,
    ACTIONS(345), 1,
      aux_sym_argument_token1,
    STATE(126), 2,
      sym_macro_escape,
      aux_sym_argument_repeat1,
    ACTIONS(348), 3,
      anon_sym_AT_LBRACE,
      anon_sym_AT_RBRACE,
      anon_sym_AT_AT,
  [2601] = 4,
    ACTIONS(351), 1,
      aux_sym_argument_token1,
    STATE(245), 1,
      sym_argument,
    STATE(130), 2,
      sym_macro_escape,
      aux_sym_argument_repeat1,
    ACTIONS(353), 3,
      anon_sym_AT_LBRACE,
      anon_sym_AT_RBRACE,
      anon_sym_AT_AT,
  [2617] = 7,
    ACTIONS(355), 1,
      aux_sym__double_inline_quote_token1,
    ACTIONS(357), 1,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
    ACTIONS(359), 1,
      sym_language_identifier,
    ACTIONS(361), 1,
      aux_sym_quote_content_token1,
    STATE(164), 1,
      aux_sym_quote_content_repeat1,
    STATE(196), 1,
      aux_sym__double_inline_quote_repeat1,
    STATE(216), 1,
      sym_quote_content,
  [2639] = 4,
    ACTIONS(351), 1,
      aux_sym_argument_token1,
    STATE(221), 1,
      sym_argument,
    STATE(130), 2,
      sym_macro_escape,
      aux_sym_argument_repeat1,
    ACTIONS(353), 3,
      anon_sym_AT_LBRACE,
      anon_sym_AT_RBRACE,
      anon_sym_AT_AT,
  [2655] = 4,
    ACTIONS(363), 1,
      anon_sym_RBRACE,
    ACTIONS(365), 1,
      aux_sym_argument_token1,
    STATE(126), 2,
      sym_macro_escape,
      aux_sym_argument_repeat1,
    ACTIONS(353), 3,
      anon_sym_AT_LBRACE,
      anon_sym_AT_RBRACE,
      anon_sym_AT_AT,
  [2671] = 4,
    ACTIONS(351), 1,
      aux_sym_argument_token1,
    STATE(220), 1,
      sym_argument,
    STATE(130), 2,
      sym_macro_escape,
      aux_sym_argument_repeat1,
    ACTIONS(353), 3,
      anon_sym_AT_LBRACE,
      anon_sym_AT_RBRACE,
      anon_sym_AT_AT,
  [2687] = 4,
    ACTIONS(351), 1,
      aux_sym_argument_token1,
    STATE(223), 1,
      sym_argument,
    STATE(130), 2,
      sym_macro_escape,
      aux_sym_argument_repeat1,
    ACTIONS(353), 3,
      anon_sym_AT_LBRACE,
      anon_sym_AT_RBRACE,
      anon_sym_AT_AT,
  [2703] = 4,
    ACTIONS(351), 1,
      aux_sym_argument_token1,
    STATE(218), 1,
      sym_argument,
    STATE(130), 2,
      sym_macro_escape,
      aux_sym_argument_repeat1,
    ACTIONS(353), 3,
      anon_sym_AT_LBRACE,
      anon_sym_AT_RBRACE,
      anon_sym_AT_AT,
  [2719] = 7,
    ACTIONS(361), 1,
      aux_sym_quote_content_token1,
    ACTIONS(367), 1,
      aux_sym__double_inline_quote_token1,
    ACTIONS(369), 1,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
    ACTIONS(371), 1,
      sym_language_identifier,
    STATE(163), 1,
      aux_sym__double_inline_quote_repeat1,
    STATE(164), 1,
      aux_sym_quote_content_repeat1,
    STATE(256), 1,
      sym_quote_content,
  [2741] = 4,
    ACTIONS(351), 1,
      aux_sym_argument_token1,
    STATE(246), 1,
      sym_argument,
    STATE(130), 2,
      sym_macro_escape,
      aux_sym_argument_repeat1,
    ACTIONS(353), 3,
      anon_sym_AT_LBRACE,
      anon_sym_AT_RBRACE,
      anon_sym_AT_AT,
  [2757] = 4,
    ACTIONS(351), 1,
      aux_sym_argument_token1,
    STATE(227), 1,
      sym_argument,
    STATE(130), 2,
      sym_macro_escape,
      aux_sym_argument_repeat1,
    ACTIONS(353), 3,
      anon_sym_AT_LBRACE,
      anon_sym_AT_RBRACE,
      anon_sym_AT_AT,
  [2773] = 4,
    ACTIONS(351), 1,
      aux_sym_argument_token1,
    STATE(228), 1,
      sym_argument,
    STATE(130), 2,
      sym_macro_escape,
      aux_sym_argument_repeat1,
    ACTIONS(353), 3,
      anon_sym_AT_LBRACE,
      anon_sym_AT_RBRACE,
      anon_sym_AT_AT,
  [2789] = 7,
    ACTIONS(361), 1,
      aux_sym_quote_content_token1,
    ACTIONS(373), 1,
      aux_sym__double_inline_quote_token1,
    ACTIONS(375), 1,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
    ACTIONS(377), 1,
      sym_language_identifier,
    STATE(164), 1,
      aux_sym_quote_content_repeat1,
    STATE(183), 1,
      aux_sym__double_inline_quote_repeat1,
    STATE(229), 1,
      sym_quote_content,
  [2811] = 7,
    ACTIONS(361), 1,
      aux_sym_quote_content_token1,
    ACTIONS(379), 1,
      aux_sym__double_inline_quote_token1,
    ACTIONS(381), 1,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
    ACTIONS(383), 1,
      sym_language_identifier,
    STATE(164), 1,
      aux_sym_quote_content_repeat1,
    STATE(191), 1,
      aux_sym__double_inline_quote_repeat1,
    STATE(222), 1,
      sym_quote_content,
  [2833] = 5,
    ACTIONS(339), 1,
      anon_sym_SQUOTE,
    ACTIONS(385), 1,
      sym__unquoted_atom,
    STATE(212), 1,
      sym_function,
    STATE(243), 1,
      sym_type,
    STATE(208), 2,
      sym__atom,
      sym__quoted_atom,
  [2850] = 1,
    ACTIONS(387), 5,
      anon_sym_RBRACE,
      anon_sym_DOT,
      anon_sym_SLASH,
      anon_sym_COLON,
      anon_sym_LPAREN,
  [2858] = 3,
    ACTIONS(391), 1,
      anon_sym_SLASH,
    ACTIONS(393), 1,
      anon_sym_LPAREN,
    ACTIONS(389), 3,
      anon_sym_RBRACE,
      anon_sym_DOT,
      anon_sym_COLON,
  [2870] = 5,
    ACTIONS(395), 1,
      anon_sym_LT,
    ACTIONS(397), 1,
      sym__terminator,
    ACTIONS(399), 1,
      sym__word,
    STATE(149), 1,
      aux_sym__author_line_repeat1,
    STATE(254), 1,
      sym_xhtml_tag,
  [2886] = 5,
    ACTIONS(395), 1,
      anon_sym_LT,
    ACTIONS(401), 1,
      sym__terminator,
    ACTIONS(403), 1,
      sym__word,
    STATE(143), 1,
      aux_sym__author_line_repeat1,
    STATE(236), 1,
      sym_xhtml_tag,
  [2902] = 1,
    ACTIONS(405), 5,
      anon_sym_RBRACE,
      aux_sym_argument_token1,
      anon_sym_AT_LBRACE,
      anon_sym_AT_RBRACE,
      anon_sym_AT_AT,
  [2910] = 1,
    ACTIONS(407), 5,
      anon_sym_RBRACE,
      anon_sym_DOT,
      anon_sym_SLASH,
      anon_sym_COLON,
      anon_sym_LPAREN,
  [2918] = 3,
    ACTIONS(409), 1,
      anon_sym_SQUOTE,
    STATE(152), 1,
      aux_sym__quoted_atom_repeat1,
    ACTIONS(411), 2,
      sym__escape_sequence,
      sym__quoted_content,
  [2929] = 4,
    ACTIONS(413), 1,
      anon_sym_TODO_COLON,
    ACTIONS(415), 1,
      aux_sym_tag_token1,
    ACTIONS(417), 1,
      anon_sym_ATlink,
    STATE(199), 1,
      sym_tag,
  [2942] = 3,
    ACTIONS(421), 1,
      sym__word,
    STATE(149), 1,
      aux_sym__author_line_repeat1,
    ACTIONS(419), 2,
      anon_sym_LT,
      sym__terminator,
  [2953] = 4,
    ACTIONS(413), 1,
      anon_sym_TODO_COLON,
    ACTIONS(415), 1,
      aux_sym_tag_token1,
    ACTIONS(424), 1,
      anon_sym_ATlink,
    STATE(206), 1,
      sym_tag,
  [2966] = 4,
    ACTIONS(413), 1,
      anon_sym_TODO_COLON,
    ACTIONS(415), 1,
      aux_sym_tag_token1,
    ACTIONS(426), 1,
      anon_sym_ATlink,
    STATE(204), 1,
      sym_tag,
  [2979] = 3,
    ACTIONS(428), 1,
      anon_sym_SQUOTE,
    STATE(153), 1,
      aux_sym__quoted_atom_repeat1,
    ACTIONS(430), 2,
      sym__escape_sequence,
      sym__quoted_content,
  [2990] = 3,
    ACTIONS(432), 1,
      anon_sym_SQUOTE,
    STATE(153), 1,
      aux_sym__quoted_atom_repeat1,
    ACTIONS(434), 2,
      sym__escape_sequence,
      sym__quoted_content,
  [3001] = 4,
    ACTIONS(413), 1,
      anon_sym_TODO_COLON,
    ACTIONS(415), 1,
      aux_sym_tag_token1,
    ACTIONS(437), 1,
      anon_sym_ATlink,
    STATE(202), 1,
      sym_tag,
  [3014] = 3,
    ACTIONS(439), 1,
      aux_sym_quote_content_token1,
    STATE(164), 1,
      aux_sym_quote_content_repeat1,
    STATE(226), 1,
      sym_quote_content,
  [3024] = 3,
    ACTIONS(441), 1,
      aux_sym_xhtml_tag_token1,
    ACTIONS(443), 1,
      anon_sym_GT,
    STATE(189), 1,
      aux_sym_xhtml_tag_repeat1,
  [3034] = 3,
    ACTIONS(439), 1,
      aux_sym_quote_content_token1,
    STATE(164), 1,
      aux_sym_quote_content_repeat1,
    STATE(219), 1,
      sym_quote_content,
  [3044] = 3,
    ACTIONS(445), 1,
      aux_sym_xhtml_tag_token1,
    ACTIONS(447), 1,
      anon_sym_GT,
    STATE(168), 1,
      aux_sym_xhtml_tag_repeat1,
  [3054] = 3,
    ACTIONS(449), 1,
      aux_sym__double_inline_quote_token1,
    ACTIONS(451), 1,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
    STATE(184), 1,
      aux_sym__double_inline_quote_repeat1,
  [3064] = 3,
    ACTIONS(453), 1,
      aux_sym_xhtml_tag_token1,
    ACTIONS(455), 1,
      anon_sym_GT,
    STATE(166), 1,
      aux_sym_xhtml_tag_repeat1,
  [3074] = 3,
    ACTIONS(457), 1,
      aux_sym__double_inline_quote_token1,
    ACTIONS(459), 1,
      anon_sym_SQUOTE_SQUOTE,
    STATE(169), 1,
      aux_sym__double_inline_quote_repeat1,
  [3084] = 3,
    ACTIONS(439), 1,
      aux_sym_quote_content_token1,
    STATE(164), 1,
      aux_sym_quote_content_repeat1,
    STATE(250), 1,
      sym_quote_content,
  [3094] = 3,
    ACTIONS(461), 1,
      aux_sym__double_inline_quote_token1,
    ACTIONS(463), 1,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
    STATE(175), 1,
      aux_sym__double_inline_quote_repeat1,
  [3104] = 3,
    ACTIONS(465), 1,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
    ACTIONS(467), 1,
      aux_sym_quote_content_token1,
    STATE(171), 1,
      aux_sym_quote_content_repeat1,
  [3114] = 3,
    ACTIONS(461), 1,
      aux_sym__double_inline_quote_token1,
    ACTIONS(469), 1,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
    STATE(175), 1,
      aux_sym__double_inline_quote_repeat1,
  [3124] = 3,
    ACTIONS(445), 1,
      aux_sym_xhtml_tag_token1,
    ACTIONS(471), 1,
      anon_sym_GT,
    STATE(168), 1,
      aux_sym_xhtml_tag_repeat1,
  [3134] = 2,
    ACTIONS(475), 1,
      anon_sym_COLON,
    ACTIONS(473), 2,
      anon_sym_RBRACE,
      anon_sym_DOT,
  [3142] = 3,
    ACTIONS(477), 1,
      aux_sym_xhtml_tag_token1,
    ACTIONS(480), 1,
      anon_sym_GT,
    STATE(168), 1,
      aux_sym_xhtml_tag_repeat1,
  [3152] = 3,
    ACTIONS(482), 1,
      aux_sym__double_inline_quote_token1,
    ACTIONS(485), 1,
      anon_sym_SQUOTE_SQUOTE,
    STATE(169), 1,
      aux_sym__double_inline_quote_repeat1,
  [3162] = 3,
    ACTIONS(457), 1,
      aux_sym__double_inline_quote_token1,
    ACTIONS(487), 1,
      anon_sym_SQUOTE_SQUOTE,
    STATE(169), 1,
      aux_sym__double_inline_quote_repeat1,
  [3172] = 3,
    ACTIONS(489), 1,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
    ACTIONS(491), 1,
      aux_sym_quote_content_token1,
    STATE(171), 1,
      aux_sym_quote_content_repeat1,
  [3182] = 3,
    ACTIONS(494), 1,
      aux_sym_xhtml_tag_token1,
    ACTIONS(496), 1,
      anon_sym_GT,
    STATE(158), 1,
      aux_sym_xhtml_tag_repeat1,
  [3192] = 3,
    ACTIONS(445), 1,
      aux_sym_xhtml_tag_token1,
    ACTIONS(498), 1,
      anon_sym_GT,
    STATE(168), 1,
      aux_sym_xhtml_tag_repeat1,
  [3202] = 3,
    ACTIONS(500), 1,
      aux_sym__double_inline_quote_token1,
    ACTIONS(502), 1,
      anon_sym_SQUOTE_SQUOTE,
    STATE(170), 1,
      aux_sym__double_inline_quote_repeat1,
  [3212] = 3,
    ACTIONS(485), 1,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
    ACTIONS(504), 1,
      aux_sym__double_inline_quote_token1,
    STATE(175), 1,
      aux_sym__double_inline_quote_repeat1,
  [3222] = 3,
    ACTIONS(507), 1,
      aux_sym_xhtml_tag_token1,
    ACTIONS(509), 1,
      anon_sym_GT,
    STATE(181), 1,
      aux_sym_xhtml_tag_repeat1,
  [3232] = 3,
    ACTIONS(511), 1,
      aux_sym__double_inline_quote_token1,
    ACTIONS(513), 1,
      anon_sym_SQUOTE_SQUOTE,
    STATE(182), 1,
      aux_sym__double_inline_quote_repeat1,
  [3242] = 3,
    ACTIONS(439), 1,
      aux_sym_quote_content_token1,
    STATE(164), 1,
      aux_sym_quote_content_repeat1,
    STATE(215), 1,
      sym_quote_content,
  [3252] = 3,
    ACTIONS(515), 1,
      aux_sym_xhtml_tag_token1,
    ACTIONS(517), 1,
      anon_sym_GT,
    STATE(173), 1,
      aux_sym_xhtml_tag_repeat1,
  [3262] = 3,
    ACTIONS(519), 1,
      aux_sym__double_inline_quote_token1,
    ACTIONS(521), 1,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
    STATE(165), 1,
      aux_sym__double_inline_quote_repeat1,
  [3272] = 3,
    ACTIONS(445), 1,
      aux_sym_xhtml_tag_token1,
    ACTIONS(523), 1,
      anon_sym_GT,
    STATE(168), 1,
      aux_sym_xhtml_tag_repeat1,
  [3282] = 3,
    ACTIONS(457), 1,
      aux_sym__double_inline_quote_token1,
    ACTIONS(525), 1,
      anon_sym_SQUOTE_SQUOTE,
    STATE(169), 1,
      aux_sym__double_inline_quote_repeat1,
  [3292] = 3,
    ACTIONS(461), 1,
      aux_sym__double_inline_quote_token1,
    ACTIONS(527), 1,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
    STATE(175), 1,
      aux_sym__double_inline_quote_repeat1,
  [3302] = 3,
    ACTIONS(461), 1,
      aux_sym__double_inline_quote_token1,
    ACTIONS(529), 1,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
    STATE(175), 1,
      aux_sym__double_inline_quote_repeat1,
  [3312] = 3,
    ACTIONS(457), 1,
      aux_sym__double_inline_quote_token1,
    ACTIONS(531), 1,
      anon_sym_SQUOTE_SQUOTE,
    STATE(169), 1,
      aux_sym__double_inline_quote_repeat1,
  [3322] = 3,
    ACTIONS(533), 1,
      aux_sym__double_inline_quote_token1,
    ACTIONS(535), 1,
      anon_sym_SQUOTE_SQUOTE,
    STATE(190), 1,
      aux_sym__double_inline_quote_repeat1,
  [3332] = 3,
    ACTIONS(445), 1,
      aux_sym_xhtml_tag_token1,
    ACTIONS(537), 1,
      anon_sym_GT,
    STATE(168), 1,
      aux_sym_xhtml_tag_repeat1,
  [3342] = 3,
    ACTIONS(539), 1,
      aux_sym__double_inline_quote_token1,
    ACTIONS(541), 1,
      anon_sym_SQUOTE_SQUOTE,
    STATE(185), 1,
      aux_sym__double_inline_quote_repeat1,
  [3352] = 3,
    ACTIONS(445), 1,
      aux_sym_xhtml_tag_token1,
    ACTIONS(543), 1,
      anon_sym_GT,
    STATE(168), 1,
      aux_sym_xhtml_tag_repeat1,
  [3362] = 3,
    ACTIONS(457), 1,
      aux_sym__double_inline_quote_token1,
    ACTIONS(545), 1,
      anon_sym_SQUOTE_SQUOTE,
    STATE(169), 1,
      aux_sym__double_inline_quote_repeat1,
  [3372] = 3,
    ACTIONS(461), 1,
      aux_sym__double_inline_quote_token1,
    ACTIONS(547), 1,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
    STATE(175), 1,
      aux_sym__double_inline_quote_repeat1,
  [3382] = 3,
    ACTIONS(549), 1,
      aux_sym_xhtml_tag_token1,
    ACTIONS(551), 1,
      anon_sym_GT,
    STATE(187), 1,
      aux_sym_xhtml_tag_repeat1,
  [3392] = 3,
    ACTIONS(553), 1,
      aux_sym_xhtml_tag_token1,
    ACTIONS(555), 1,
      anon_sym_GT,
    STATE(197), 1,
      aux_sym_xhtml_tag_repeat1,
  [3402] = 3,
    ACTIONS(557), 1,
      aux_sym__double_inline_quote_token1,
    ACTIONS(559), 1,
      anon_sym_SQUOTE_SQUOTE,
    STATE(198), 1,
      aux_sym__double_inline_quote_repeat1,
  [3412] = 3,
    ACTIONS(561), 1,
      aux_sym__double_inline_quote_token1,
    ACTIONS(563), 1,
      anon_sym_SQUOTE_SQUOTE,
    STATE(161), 1,
      aux_sym__double_inline_quote_repeat1,
  [3422] = 3,
    ACTIONS(461), 1,
      aux_sym__double_inline_quote_token1,
    ACTIONS(565), 1,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
    STATE(175), 1,
      aux_sym__double_inline_quote_repeat1,
  [3432] = 3,
    ACTIONS(445), 1,
      aux_sym_xhtml_tag_token1,
    ACTIONS(567), 1,
      anon_sym_GT,
    STATE(168), 1,
      aux_sym_xhtml_tag_repeat1,
  [3442] = 3,
    ACTIONS(457), 1,
      aux_sym__double_inline_quote_token1,
    ACTIONS(569), 1,
      anon_sym_SQUOTE_SQUOTE,
    STATE(169), 1,
      aux_sym__double_inline_quote_repeat1,
  [3452] = 2,
    ACTIONS(571), 1,
      aux_sym_macro_token1,
    ACTIONS(573), 1,
      anon_sym_RBRACE,
  [3459] = 2,
    ACTIONS(575), 1,
      anon_sym_RBRACE,
    ACTIONS(577), 1,
      anon_sym_DOT,
  [3466] = 2,
    ACTIONS(579), 1,
      anon_sym_RBRACE,
    ACTIONS(581), 1,
      anon_sym_DOT,
  [3473] = 2,
    ACTIONS(583), 1,
      aux_sym_macro_token1,
    ACTIONS(585), 1,
      anon_sym_RBRACE,
  [3480] = 2,
    ACTIONS(587), 1,
      sym__terminator,
    STATE(19), 1,
      aux_sym_source_repeat1,
  [3487] = 2,
    ACTIONS(589), 1,
      aux_sym_macro_token1,
    ACTIONS(591), 1,
      anon_sym_RBRACE,
  [3494] = 2,
    ACTIONS(593), 1,
      anon_sym_RBRACE,
    ACTIONS(595), 1,
      anon_sym_DOT,
  [3501] = 2,
    ACTIONS(597), 1,
      aux_sym_macro_token1,
    ACTIONS(599), 1,
      anon_sym_RBRACE,
  [3508] = 1,
    ACTIONS(601), 2,
      anon_sym_RBRACE,
      anon_sym_DOT,
  [3513] = 2,
    ACTIONS(391), 1,
      anon_sym_SLASH,
    ACTIONS(393), 1,
      anon_sym_LPAREN,
  [3520] = 1,
    ACTIONS(603), 2,
      anon_sym_RBRACE,
      anon_sym_DOT,
  [3525] = 2,
    ACTIONS(605), 1,
      anon_sym_RBRACE,
    ACTIONS(607), 1,
      anon_sym_DOT,
  [3532] = 2,
    ACTIONS(335), 1,
      anon_sym_RBRACE,
    ACTIONS(609), 1,
      aux_sym_macro_token1,
  [3539] = 1,
    ACTIONS(611), 1,
      anon_sym_SLASH,
  [3543] = 1,
    ACTIONS(613), 1,
      anon_sym_LT_SLASHstrong_GT,
  [3547] = 1,
    ACTIONS(615), 1,
      anon_sym_SQUOTE,
  [3551] = 1,
    ACTIONS(617), 1,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
  [3555] = 1,
    ACTIONS(619), 1,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
  [3559] = 1,
    ACTIONS(621), 1,
      anon_sym_SQUOTE,
  [3563] = 1,
    ACTIONS(623), 1,
      anon_sym_RBRACE,
  [3567] = 1,
    ACTIONS(625), 1,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
  [3571] = 1,
    ACTIONS(627), 1,
      anon_sym_RBRACE,
  [3575] = 1,
    ACTIONS(629), 1,
      anon_sym_RBRACE,
  [3579] = 1,
    ACTIONS(631), 1,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
  [3583] = 1,
    ACTIONS(633), 1,
      anon_sym_RBRACE,
  [3587] = 1,
    ACTIONS(635), 1,
      anon_sym_LT_SLASHstrong_GT,
  [3591] = 1,
    ACTIONS(637), 1,
      anon_sym_SQUOTE,
  [3595] = 1,
    ACTIONS(639), 1,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
  [3599] = 1,
    ACTIONS(641), 1,
      anon_sym_RBRACE,
  [3603] = 1,
    ACTIONS(643), 1,
      anon_sym_RBRACE,
  [3607] = 1,
    ACTIONS(645), 1,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
  [3611] = 1,
    ACTIONS(647), 1,
      anon_sym_LT_SLASHem_GT,
  [3615] = 1,
    ACTIONS(649), 1,
      anon_sym_SQUOTE,
  [3619] = 1,
    ACTIONS(651), 1,
      anon_sym_SQUOTE,
  [3623] = 1,
    ACTIONS(653), 1,
      anon_sym_LT_SLASHem_GT,
  [3627] = 1,
    ACTIONS(655), 1,
      anon_sym_LT_SLASHem_GT,
  [3631] = 1,
    ACTIONS(657), 1,
      anon_sym_LT_SLASHstrong_GT,
  [3635] = 1,
    ACTIONS(659), 1,
      sym__terminator,
  [3639] = 1,
    ACTIONS(661), 1,
      sym__terminator,
  [3643] = 1,
    ACTIONS(663), 1,
      aux_sym__inline_quote_token1,
  [3647] = 1,
    ACTIONS(665), 1,
      aux_sym__inline_quote_token1,
  [3651] = 1,
    ACTIONS(667), 1,
      sym__terminator,
  [3655] = 1,
    ACTIONS(669), 1,
      anon_sym_RPAREN,
  [3659] = 1,
    ACTIONS(669), 1,
      sym_arity,
  [3663] = 1,
    ACTIONS(671), 1,
      anon_sym_LPAREN,
  [3667] = 1,
    ACTIONS(673), 1,
      ts_builtin_sym_end,
  [3671] = 1,
    ACTIONS(675), 1,
      anon_sym_RBRACE,
  [3675] = 1,
    ACTIONS(677), 1,
      anon_sym_RBRACE,
  [3679] = 1,
    ACTIONS(679), 1,
      aux_sym__inline_quote_token1,
  [3683] = 1,
    ACTIONS(681), 1,
      anon_sym_RPAREN,
  [3687] = 1,
    ACTIONS(681), 1,
      sym_arity,
  [3691] = 1,
    ACTIONS(683), 1,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
  [3695] = 1,
    ACTIONS(685), 1,
      anon_sym_LPAREN,
  [3699] = 1,
    ACTIONS(687), 1,
      anon_sym_SLASH,
  [3703] = 1,
    ACTIONS(689), 1,
      sym__terminator,
  [3707] = 1,
    ACTIONS(691), 1,
      sym__terminator,
  [3711] = 1,
    ACTIONS(693), 1,
      aux_sym__inline_quote_token1,
  [3715] = 1,
    ACTIONS(695), 1,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
  [3719] = 1,
    ACTIONS(697), 1,
      anon_sym_SQUOTE,
  [3723] = 1,
    ACTIONS(699), 1,
      anon_sym_LT_SLASHstrong_GT,
  [3727] = 1,
    ACTIONS(701), 1,
      anon_sym_LT_SLASHem_GT,
  [3731] = 1,
    ACTIONS(703), 1,
      aux_sym__inline_quote_token1,
  [3735] = 1,
    ACTIONS(705), 1,
      aux_sym__inline_quote_token1,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 83,
  [SMALL_STATE(4)] = 160,
  [SMALL_STATE(5)] = 237,
  [SMALL_STATE(6)] = 314,
  [SMALL_STATE(7)] = 363,
  [SMALL_STATE(8)] = 412,
  [SMALL_STATE(9)] = 461,
  [SMALL_STATE(10)] = 510,
  [SMALL_STATE(11)] = 559,
  [SMALL_STATE(12)] = 608,
  [SMALL_STATE(13)] = 657,
  [SMALL_STATE(14)] = 706,
  [SMALL_STATE(15)] = 755,
  [SMALL_STATE(16)] = 804,
  [SMALL_STATE(17)] = 850,
  [SMALL_STATE(18)] = 896,
  [SMALL_STATE(19)] = 942,
  [SMALL_STATE(20)] = 969,
  [SMALL_STATE(21)] = 996,
  [SMALL_STATE(22)] = 1027,
  [SMALL_STATE(23)] = 1058,
  [SMALL_STATE(24)] = 1089,
  [SMALL_STATE(25)] = 1120,
  [SMALL_STATE(26)] = 1151,
  [SMALL_STATE(27)] = 1182,
  [SMALL_STATE(28)] = 1213,
  [SMALL_STATE(29)] = 1244,
  [SMALL_STATE(30)] = 1275,
  [SMALL_STATE(31)] = 1306,
  [SMALL_STATE(32)] = 1337,
  [SMALL_STATE(33)] = 1368,
  [SMALL_STATE(34)] = 1381,
  [SMALL_STATE(35)] = 1394,
  [SMALL_STATE(36)] = 1407,
  [SMALL_STATE(37)] = 1420,
  [SMALL_STATE(38)] = 1433,
  [SMALL_STATE(39)] = 1446,
  [SMALL_STATE(40)] = 1459,
  [SMALL_STATE(41)] = 1472,
  [SMALL_STATE(42)] = 1485,
  [SMALL_STATE(43)] = 1498,
  [SMALL_STATE(44)] = 1511,
  [SMALL_STATE(45)] = 1524,
  [SMALL_STATE(46)] = 1537,
  [SMALL_STATE(47)] = 1550,
  [SMALL_STATE(48)] = 1563,
  [SMALL_STATE(49)] = 1576,
  [SMALL_STATE(50)] = 1589,
  [SMALL_STATE(51)] = 1602,
  [SMALL_STATE(52)] = 1615,
  [SMALL_STATE(53)] = 1628,
  [SMALL_STATE(54)] = 1641,
  [SMALL_STATE(55)] = 1654,
  [SMALL_STATE(56)] = 1667,
  [SMALL_STATE(57)] = 1680,
  [SMALL_STATE(58)] = 1693,
  [SMALL_STATE(59)] = 1706,
  [SMALL_STATE(60)] = 1719,
  [SMALL_STATE(61)] = 1732,
  [SMALL_STATE(62)] = 1745,
  [SMALL_STATE(63)] = 1758,
  [SMALL_STATE(64)] = 1771,
  [SMALL_STATE(65)] = 1784,
  [SMALL_STATE(66)] = 1797,
  [SMALL_STATE(67)] = 1810,
  [SMALL_STATE(68)] = 1823,
  [SMALL_STATE(69)] = 1836,
  [SMALL_STATE(70)] = 1849,
  [SMALL_STATE(71)] = 1862,
  [SMALL_STATE(72)] = 1875,
  [SMALL_STATE(73)] = 1888,
  [SMALL_STATE(74)] = 1901,
  [SMALL_STATE(75)] = 1914,
  [SMALL_STATE(76)] = 1927,
  [SMALL_STATE(77)] = 1940,
  [SMALL_STATE(78)] = 1953,
  [SMALL_STATE(79)] = 1966,
  [SMALL_STATE(80)] = 1979,
  [SMALL_STATE(81)] = 1992,
  [SMALL_STATE(82)] = 2005,
  [SMALL_STATE(83)] = 2018,
  [SMALL_STATE(84)] = 2031,
  [SMALL_STATE(85)] = 2044,
  [SMALL_STATE(86)] = 2057,
  [SMALL_STATE(87)] = 2070,
  [SMALL_STATE(88)] = 2083,
  [SMALL_STATE(89)] = 2096,
  [SMALL_STATE(90)] = 2109,
  [SMALL_STATE(91)] = 2122,
  [SMALL_STATE(92)] = 2135,
  [SMALL_STATE(93)] = 2148,
  [SMALL_STATE(94)] = 2161,
  [SMALL_STATE(95)] = 2174,
  [SMALL_STATE(96)] = 2187,
  [SMALL_STATE(97)] = 2200,
  [SMALL_STATE(98)] = 2213,
  [SMALL_STATE(99)] = 2226,
  [SMALL_STATE(100)] = 2239,
  [SMALL_STATE(101)] = 2252,
  [SMALL_STATE(102)] = 2265,
  [SMALL_STATE(103)] = 2278,
  [SMALL_STATE(104)] = 2291,
  [SMALL_STATE(105)] = 2304,
  [SMALL_STATE(106)] = 2317,
  [SMALL_STATE(107)] = 2328,
  [SMALL_STATE(108)] = 2351,
  [SMALL_STATE(109)] = 2362,
  [SMALL_STATE(110)] = 2373,
  [SMALL_STATE(111)] = 2396,
  [SMALL_STATE(112)] = 2407,
  [SMALL_STATE(113)] = 2418,
  [SMALL_STATE(114)] = 2429,
  [SMALL_STATE(115)] = 2440,
  [SMALL_STATE(116)] = 2451,
  [SMALL_STATE(117)] = 2462,
  [SMALL_STATE(118)] = 2473,
  [SMALL_STATE(119)] = 2484,
  [SMALL_STATE(120)] = 2495,
  [SMALL_STATE(121)] = 2518,
  [SMALL_STATE(122)] = 2529,
  [SMALL_STATE(123)] = 2552,
  [SMALL_STATE(124)] = 2563,
  [SMALL_STATE(125)] = 2574,
  [SMALL_STATE(126)] = 2585,
  [SMALL_STATE(127)] = 2601,
  [SMALL_STATE(128)] = 2617,
  [SMALL_STATE(129)] = 2639,
  [SMALL_STATE(130)] = 2655,
  [SMALL_STATE(131)] = 2671,
  [SMALL_STATE(132)] = 2687,
  [SMALL_STATE(133)] = 2703,
  [SMALL_STATE(134)] = 2719,
  [SMALL_STATE(135)] = 2741,
  [SMALL_STATE(136)] = 2757,
  [SMALL_STATE(137)] = 2773,
  [SMALL_STATE(138)] = 2789,
  [SMALL_STATE(139)] = 2811,
  [SMALL_STATE(140)] = 2833,
  [SMALL_STATE(141)] = 2850,
  [SMALL_STATE(142)] = 2858,
  [SMALL_STATE(143)] = 2870,
  [SMALL_STATE(144)] = 2886,
  [SMALL_STATE(145)] = 2902,
  [SMALL_STATE(146)] = 2910,
  [SMALL_STATE(147)] = 2918,
  [SMALL_STATE(148)] = 2929,
  [SMALL_STATE(149)] = 2942,
  [SMALL_STATE(150)] = 2953,
  [SMALL_STATE(151)] = 2966,
  [SMALL_STATE(152)] = 2979,
  [SMALL_STATE(153)] = 2990,
  [SMALL_STATE(154)] = 3001,
  [SMALL_STATE(155)] = 3014,
  [SMALL_STATE(156)] = 3024,
  [SMALL_STATE(157)] = 3034,
  [SMALL_STATE(158)] = 3044,
  [SMALL_STATE(159)] = 3054,
  [SMALL_STATE(160)] = 3064,
  [SMALL_STATE(161)] = 3074,
  [SMALL_STATE(162)] = 3084,
  [SMALL_STATE(163)] = 3094,
  [SMALL_STATE(164)] = 3104,
  [SMALL_STATE(165)] = 3114,
  [SMALL_STATE(166)] = 3124,
  [SMALL_STATE(167)] = 3134,
  [SMALL_STATE(168)] = 3142,
  [SMALL_STATE(169)] = 3152,
  [SMALL_STATE(170)] = 3162,
  [SMALL_STATE(171)] = 3172,
  [SMALL_STATE(172)] = 3182,
  [SMALL_STATE(173)] = 3192,
  [SMALL_STATE(174)] = 3202,
  [SMALL_STATE(175)] = 3212,
  [SMALL_STATE(176)] = 3222,
  [SMALL_STATE(177)] = 3232,
  [SMALL_STATE(178)] = 3242,
  [SMALL_STATE(179)] = 3252,
  [SMALL_STATE(180)] = 3262,
  [SMALL_STATE(181)] = 3272,
  [SMALL_STATE(182)] = 3282,
  [SMALL_STATE(183)] = 3292,
  [SMALL_STATE(184)] = 3302,
  [SMALL_STATE(185)] = 3312,
  [SMALL_STATE(186)] = 3322,
  [SMALL_STATE(187)] = 3332,
  [SMALL_STATE(188)] = 3342,
  [SMALL_STATE(189)] = 3352,
  [SMALL_STATE(190)] = 3362,
  [SMALL_STATE(191)] = 3372,
  [SMALL_STATE(192)] = 3382,
  [SMALL_STATE(193)] = 3392,
  [SMALL_STATE(194)] = 3402,
  [SMALL_STATE(195)] = 3412,
  [SMALL_STATE(196)] = 3422,
  [SMALL_STATE(197)] = 3432,
  [SMALL_STATE(198)] = 3442,
  [SMALL_STATE(199)] = 3452,
  [SMALL_STATE(200)] = 3459,
  [SMALL_STATE(201)] = 3466,
  [SMALL_STATE(202)] = 3473,
  [SMALL_STATE(203)] = 3480,
  [SMALL_STATE(204)] = 3487,
  [SMALL_STATE(205)] = 3494,
  [SMALL_STATE(206)] = 3501,
  [SMALL_STATE(207)] = 3508,
  [SMALL_STATE(208)] = 3513,
  [SMALL_STATE(209)] = 3520,
  [SMALL_STATE(210)] = 3525,
  [SMALL_STATE(211)] = 3532,
  [SMALL_STATE(212)] = 3539,
  [SMALL_STATE(213)] = 3543,
  [SMALL_STATE(214)] = 3547,
  [SMALL_STATE(215)] = 3551,
  [SMALL_STATE(216)] = 3555,
  [SMALL_STATE(217)] = 3559,
  [SMALL_STATE(218)] = 3563,
  [SMALL_STATE(219)] = 3567,
  [SMALL_STATE(220)] = 3571,
  [SMALL_STATE(221)] = 3575,
  [SMALL_STATE(222)] = 3579,
  [SMALL_STATE(223)] = 3583,
  [SMALL_STATE(224)] = 3587,
  [SMALL_STATE(225)] = 3591,
  [SMALL_STATE(226)] = 3595,
  [SMALL_STATE(227)] = 3599,
  [SMALL_STATE(228)] = 3603,
  [SMALL_STATE(229)] = 3607,
  [SMALL_STATE(230)] = 3611,
  [SMALL_STATE(231)] = 3615,
  [SMALL_STATE(232)] = 3619,
  [SMALL_STATE(233)] = 3623,
  [SMALL_STATE(234)] = 3627,
  [SMALL_STATE(235)] = 3631,
  [SMALL_STATE(236)] = 3635,
  [SMALL_STATE(237)] = 3639,
  [SMALL_STATE(238)] = 3643,
  [SMALL_STATE(239)] = 3647,
  [SMALL_STATE(240)] = 3651,
  [SMALL_STATE(241)] = 3655,
  [SMALL_STATE(242)] = 3659,
  [SMALL_STATE(243)] = 3663,
  [SMALL_STATE(244)] = 3667,
  [SMALL_STATE(245)] = 3671,
  [SMALL_STATE(246)] = 3675,
  [SMALL_STATE(247)] = 3679,
  [SMALL_STATE(248)] = 3683,
  [SMALL_STATE(249)] = 3687,
  [SMALL_STATE(250)] = 3691,
  [SMALL_STATE(251)] = 3695,
  [SMALL_STATE(252)] = 3699,
  [SMALL_STATE(253)] = 3703,
  [SMALL_STATE(254)] = 3707,
  [SMALL_STATE(255)] = 3711,
  [SMALL_STATE(256)] = 3715,
  [SMALL_STATE(257)] = 3719,
  [SMALL_STATE(258)] = 3723,
  [SMALL_STATE(259)] = 3727,
  [SMALL_STATE(260)] = 3731,
  [SMALL_STATE(261)] = 3735,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source, 0),
  [5] = {.entry = {.count = 1, .reusable = false}}, SHIFT(144),
  [7] = {.entry = {.count = 1, .reusable = false}}, SHIFT(18),
  [9] = {.entry = {.count = 1, .reusable = false}}, SHIFT(17),
  [11] = {.entry = {.count = 1, .reusable = false}}, SHIFT(16),
  [13] = {.entry = {.count = 1, .reusable = false}}, SHIFT(151),
  [15] = {.entry = {.count = 1, .reusable = false}}, SHIFT(55),
  [17] = {.entry = {.count = 1, .reusable = false}}, SHIFT(21),
  [19] = {.entry = {.count = 1, .reusable = false}}, SHIFT(27),
  [21] = {.entry = {.count = 1, .reusable = false}}, SHIFT(172),
  [23] = {.entry = {.count = 1, .reusable = false}}, SHIFT(85),
  [25] = {.entry = {.count = 1, .reusable = false}}, SHIFT(238),
  [27] = {.entry = {.count = 1, .reusable = false}}, SHIFT(195),
  [29] = {.entry = {.count = 1, .reusable = false}}, SHIFT(134),
  [31] = {.entry = {.count = 1, .reusable = false}}, SHIFT(2),
  [33] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source, 1),
  [35] = {.entry = {.count = 1, .reusable = false}}, SHIFT(20),
  [37] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_repeat2, 2),
  [39] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_repeat2, 2), SHIFT_REPEAT(144),
  [42] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_repeat2, 2), SHIFT_REPEAT(18),
  [45] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_repeat2, 2), SHIFT_REPEAT(17),
  [48] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_repeat2, 2), SHIFT_REPEAT(16),
  [51] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_repeat2, 2), SHIFT_REPEAT(151),
  [54] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_repeat2, 2), SHIFT_REPEAT(55),
  [57] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_repeat2, 2), SHIFT_REPEAT(21),
  [60] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_repeat2, 2), SHIFT_REPEAT(27),
  [63] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_repeat2, 2), SHIFT_REPEAT(172),
  [66] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_repeat2, 2), SHIFT_REPEAT(85),
  [69] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_repeat2, 2), SHIFT_REPEAT(238),
  [72] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_repeat2, 2), SHIFT_REPEAT(195),
  [75] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_repeat2, 2), SHIFT_REPEAT(134),
  [78] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source, 2),
  [80] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__text_line, 2), SHIFT_REPEAT(151),
  [83] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__text_line, 2), SHIFT_REPEAT(21),
  [86] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__text_line, 2), SHIFT_REPEAT(27),
  [89] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__text_line, 2), SHIFT_REPEAT(172),
  [92] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__text_line, 2), SHIFT_REPEAT(85),
  [95] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__text_line, 2), SHIFT_REPEAT(238),
  [98] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__text_line, 2), SHIFT_REPEAT(195),
  [101] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__text_line, 2), SHIFT_REPEAT(134),
  [104] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__text_line, 2),
  [106] = {.entry = {.count = 1, .reusable = false}}, SHIFT(253),
  [108] = {.entry = {.count = 1, .reusable = false}}, SHIFT(148),
  [110] = {.entry = {.count = 1, .reusable = false}}, SHIFT(31),
  [112] = {.entry = {.count = 1, .reusable = false}}, SHIFT(22),
  [114] = {.entry = {.count = 1, .reusable = false}}, SHIFT(192),
  [116] = {.entry = {.count = 1, .reusable = false}}, SHIFT(60),
  [118] = {.entry = {.count = 1, .reusable = false}}, SHIFT(255),
  [120] = {.entry = {.count = 1, .reusable = false}}, SHIFT(194),
  [122] = {.entry = {.count = 1, .reusable = false}}, SHIFT(128),
  [124] = {.entry = {.count = 1, .reusable = false}}, SHIFT(154),
  [126] = {.entry = {.count = 1, .reusable = false}}, SHIFT(26),
  [128] = {.entry = {.count = 1, .reusable = false}}, SHIFT(28),
  [130] = {.entry = {.count = 1, .reusable = false}}, SHIFT(193),
  [132] = {.entry = {.count = 1, .reusable = false}}, SHIFT(88),
  [134] = {.entry = {.count = 1, .reusable = false}}, SHIFT(247),
  [136] = {.entry = {.count = 1, .reusable = false}}, SHIFT(186),
  [138] = {.entry = {.count = 1, .reusable = false}}, SHIFT(139),
  [140] = {.entry = {.count = 1, .reusable = false}}, SHIFT(150),
  [142] = {.entry = {.count = 1, .reusable = false}}, SHIFT(23),
  [144] = {.entry = {.count = 1, .reusable = false}}, SHIFT(25),
  [146] = {.entry = {.count = 1, .reusable = false}}, SHIFT(156),
  [148] = {.entry = {.count = 1, .reusable = false}}, SHIFT(99),
  [150] = {.entry = {.count = 1, .reusable = false}}, SHIFT(239),
  [152] = {.entry = {.count = 1, .reusable = false}}, SHIFT(177),
  [154] = {.entry = {.count = 1, .reusable = false}}, SHIFT(138),
  [156] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__text_line, 2), SHIFT_REPEAT(154),
  [159] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__text_line, 2), SHIFT_REPEAT(26),
  [162] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__text_line, 2), SHIFT_REPEAT(28),
  [165] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__text_line, 2), SHIFT_REPEAT(193),
  [168] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__text_line, 2), SHIFT_REPEAT(88),
  [171] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__text_line, 2), SHIFT_REPEAT(247),
  [174] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__text_line, 2), SHIFT_REPEAT(186),
  [177] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__text_line, 2), SHIFT_REPEAT(139),
  [180] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__text_line, 2), SHIFT_REPEAT(150),
  [183] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__text_line, 2), SHIFT_REPEAT(23),
  [186] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__text_line, 2), SHIFT_REPEAT(25),
  [189] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__text_line, 2), SHIFT_REPEAT(156),
  [192] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__text_line, 2), SHIFT_REPEAT(99),
  [195] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__text_line, 2), SHIFT_REPEAT(239),
  [198] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__text_line, 2), SHIFT_REPEAT(177),
  [201] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__text_line, 2), SHIFT_REPEAT(138),
  [204] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__text_line, 2), SHIFT_REPEAT(148),
  [207] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__text_line, 2), SHIFT_REPEAT(31),
  [210] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__text_line, 2), SHIFT_REPEAT(22),
  [213] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__text_line, 2), SHIFT_REPEAT(192),
  [216] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__text_line, 2), SHIFT_REPEAT(60),
  [219] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__text_line, 2), SHIFT_REPEAT(255),
  [222] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__text_line, 2), SHIFT_REPEAT(194),
  [225] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__text_line, 2), SHIFT_REPEAT(128),
  [228] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__tag_line, 2),
  [230] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__line, 1),
  [232] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__tag_line, 1),
  [234] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_source_repeat2, 2),
  [236] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_repeat1, 2),
  [238] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_source_repeat1, 2),
  [240] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_repeat1, 2), SHIFT_REPEAT(20),
  [243] = {.entry = {.count = 1, .reusable = false}}, SHIFT(179),
  [245] = {.entry = {.count = 1, .reusable = false}}, SHIFT(32),
  [247] = {.entry = {.count = 1, .reusable = false}}, SHIFT(260),
  [249] = {.entry = {.count = 1, .reusable = false}}, SHIFT(188),
  [251] = {.entry = {.count = 1, .reusable = false}}, SHIFT(159),
  [253] = {.entry = {.count = 1, .reusable = false}}, SHIFT(160),
  [255] = {.entry = {.count = 1, .reusable = false}}, SHIFT(24),
  [257] = {.entry = {.count = 1, .reusable = false}}, SHIFT(261),
  [259] = {.entry = {.count = 1, .reusable = false}}, SHIFT(174),
  [261] = {.entry = {.count = 1, .reusable = false}}, SHIFT(180),
  [263] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_xhtml_tag_content, 1),
  [265] = {.entry = {.count = 1, .reusable = false}}, SHIFT(30),
  [267] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_xhtml_tag_content_repeat1, 2),
  [269] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_xhtml_tag_content_repeat1, 2), SHIFT_REPEAT(179),
  [272] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_xhtml_tag_content_repeat1, 2), SHIFT_REPEAT(29),
  [275] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_xhtml_tag_content_repeat1, 2), SHIFT_REPEAT(260),
  [278] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_xhtml_tag_content_repeat1, 2), SHIFT_REPEAT(188),
  [281] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_xhtml_tag_content_repeat1, 2), SHIFT_REPEAT(159),
  [284] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_xhtml_tag_content_repeat1, 2), SHIFT_REPEAT(160),
  [287] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_xhtml_tag_content_repeat1, 2), SHIFT_REPEAT(30),
  [290] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_xhtml_tag_content_repeat1, 2), SHIFT_REPEAT(261),
  [293] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_xhtml_tag_content_repeat1, 2), SHIFT_REPEAT(174),
  [296] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_xhtml_tag_content_repeat1, 2), SHIFT_REPEAT(180),
  [299] = {.entry = {.count = 1, .reusable = false}}, SHIFT(29),
  [301] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_xhtml_tag, 3),
  [303] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_strong_xhtml_tag, 3),
  [305] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_macro, 1),
  [307] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_inline_quote, 1),
  [309] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_xhtml_tag, 2),
  [311] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__link_macro, 6, .production_id = 6),
  [313] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_macro, 5),
  [315] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_block_quote, 4, .production_id = 5),
  [317] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__link_macro, 4),
  [319] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__triple_inline_quote, 3),
  [321] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_block_quote, 3, .production_id = 4),
  [323] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__double_inline_quote, 3),
  [325] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__inline_quote, 3),
  [327] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__double_inline_quote, 2),
  [329] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__triple_inline_quote, 2),
  [331] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_em_xhtml_tag, 3),
  [333] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_macro, 3),
  [335] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_tag, 1),
  [337] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__text_line, 1),
  [339] = {.entry = {.count = 1, .reusable = true}}, SHIFT(147),
  [341] = {.entry = {.count = 1, .reusable = true}}, SHIFT(142),
  [343] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_argument_repeat1, 2),
  [345] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_argument_repeat1, 2), SHIFT_REPEAT(126),
  [348] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_argument_repeat1, 2), SHIFT_REPEAT(145),
  [351] = {.entry = {.count = 1, .reusable = false}}, SHIFT(130),
  [353] = {.entry = {.count = 1, .reusable = false}}, SHIFT(145),
  [355] = {.entry = {.count = 1, .reusable = false}}, SHIFT(196),
  [357] = {.entry = {.count = 1, .reusable = false}}, SHIFT(54),
  [359] = {.entry = {.count = 1, .reusable = false}}, SHIFT(157),
  [361] = {.entry = {.count = 1, .reusable = false}}, SHIFT(164),
  [363] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_argument, 1),
  [365] = {.entry = {.count = 1, .reusable = false}}, SHIFT(126),
  [367] = {.entry = {.count = 1, .reusable = false}}, SHIFT(163),
  [369] = {.entry = {.count = 1, .reusable = false}}, SHIFT(50),
  [371] = {.entry = {.count = 1, .reusable = false}}, SHIFT(162),
  [373] = {.entry = {.count = 1, .reusable = false}}, SHIFT(183),
  [375] = {.entry = {.count = 1, .reusable = false}}, SHIFT(103),
  [377] = {.entry = {.count = 1, .reusable = false}}, SHIFT(178),
  [379] = {.entry = {.count = 1, .reusable = false}}, SHIFT(191),
  [381] = {.entry = {.count = 1, .reusable = false}}, SHIFT(81),
  [383] = {.entry = {.count = 1, .reusable = false}}, SHIFT(155),
  [385] = {.entry = {.count = 1, .reusable = true}}, SHIFT(208),
  [387] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__quoted_atom, 2),
  [389] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_module, 1),
  [391] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function, 1),
  [393] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type, 1),
  [395] = {.entry = {.count = 1, .reusable = false}}, SHIFT(176),
  [397] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__author_line, 2),
  [399] = {.entry = {.count = 1, .reusable = false}}, SHIFT(149),
  [401] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__author_line, 1),
  [403] = {.entry = {.count = 1, .reusable = false}}, SHIFT(143),
  [405] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_macro_escape, 1),
  [407] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__quoted_atom, 3),
  [409] = {.entry = {.count = 1, .reusable = false}}, SHIFT(141),
  [411] = {.entry = {.count = 1, .reusable = false}}, SHIFT(152),
  [413] = {.entry = {.count = 1, .reusable = true}}, SHIFT(211),
  [415] = {.entry = {.count = 1, .reusable = false}}, SHIFT(211),
  [417] = {.entry = {.count = 1, .reusable = false}}, SHIFT(122),
  [419] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__author_line_repeat1, 2),
  [421] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__author_line_repeat1, 2), SHIFT_REPEAT(149),
  [424] = {.entry = {.count = 1, .reusable = false}}, SHIFT(110),
  [426] = {.entry = {.count = 1, .reusable = false}}, SHIFT(120),
  [428] = {.entry = {.count = 1, .reusable = false}}, SHIFT(146),
  [430] = {.entry = {.count = 1, .reusable = false}}, SHIFT(153),
  [432] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__quoted_atom_repeat1, 2),
  [434] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__quoted_atom_repeat1, 2), SHIFT_REPEAT(153),
  [437] = {.entry = {.count = 1, .reusable = false}}, SHIFT(107),
  [439] = {.entry = {.count = 1, .reusable = true}}, SHIFT(164),
  [441] = {.entry = {.count = 1, .reusable = true}}, SHIFT(189),
  [443] = {.entry = {.count = 1, .reusable = false}}, SHIFT(83),
  [445] = {.entry = {.count = 1, .reusable = true}}, SHIFT(168),
  [447] = {.entry = {.count = 1, .reusable = false}}, SHIFT(68),
  [449] = {.entry = {.count = 1, .reusable = false}}, SHIFT(184),
  [451] = {.entry = {.count = 1, .reusable = false}}, SHIFT(123),
  [453] = {.entry = {.count = 1, .reusable = true}}, SHIFT(166),
  [455] = {.entry = {.count = 1, .reusable = false}}, SHIFT(114),
  [457] = {.entry = {.count = 1, .reusable = false}}, SHIFT(169),
  [459] = {.entry = {.count = 1, .reusable = false}}, SHIFT(71),
  [461] = {.entry = {.count = 1, .reusable = false}}, SHIFT(175),
  [463] = {.entry = {.count = 1, .reusable = false}}, SHIFT(75),
  [465] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_quote_content, 1),
  [467] = {.entry = {.count = 1, .reusable = false}}, SHIFT(171),
  [469] = {.entry = {.count = 1, .reusable = false}}, SHIFT(116),
  [471] = {.entry = {.count = 1, .reusable = false}}, SHIFT(113),
  [473] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__link_expression, 1),
  [475] = {.entry = {.count = 1, .reusable = true}}, SHIFT(140),
  [477] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_xhtml_tag_repeat1, 2), SHIFT_REPEAT(168),
  [480] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_xhtml_tag_repeat1, 2),
  [482] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__double_inline_quote_repeat1, 2), SHIFT_REPEAT(169),
  [485] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__double_inline_quote_repeat1, 2),
  [487] = {.entry = {.count = 1, .reusable = false}}, SHIFT(117),
  [489] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_quote_content_repeat1, 2),
  [491] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_quote_content_repeat1, 2), SHIFT_REPEAT(171),
  [494] = {.entry = {.count = 1, .reusable = true}}, SHIFT(158),
  [496] = {.entry = {.count = 1, .reusable = false}}, SHIFT(45),
  [498] = {.entry = {.count = 1, .reusable = false}}, SHIFT(119),
  [500] = {.entry = {.count = 1, .reusable = false}}, SHIFT(170),
  [502] = {.entry = {.count = 1, .reusable = false}}, SHIFT(115),
  [504] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__double_inline_quote_repeat1, 2), SHIFT_REPEAT(175),
  [507] = {.entry = {.count = 1, .reusable = true}}, SHIFT(181),
  [509] = {.entry = {.count = 1, .reusable = false}}, SHIFT(240),
  [511] = {.entry = {.count = 1, .reusable = false}}, SHIFT(182),
  [513] = {.entry = {.count = 1, .reusable = false}}, SHIFT(102),
  [515] = {.entry = {.count = 1, .reusable = true}}, SHIFT(173),
  [517] = {.entry = {.count = 1, .reusable = false}}, SHIFT(112),
  [519] = {.entry = {.count = 1, .reusable = false}}, SHIFT(165),
  [521] = {.entry = {.count = 1, .reusable = false}}, SHIFT(118),
  [523] = {.entry = {.count = 1, .reusable = false}}, SHIFT(237),
  [525] = {.entry = {.count = 1, .reusable = false}}, SHIFT(96),
  [527] = {.entry = {.count = 1, .reusable = false}}, SHIFT(93),
  [529] = {.entry = {.count = 1, .reusable = false}}, SHIFT(109),
  [531] = {.entry = {.count = 1, .reusable = false}}, SHIFT(108),
  [533] = {.entry = {.count = 1, .reusable = false}}, SHIFT(190),
  [535] = {.entry = {.count = 1, .reusable = false}}, SHIFT(82),
  [537] = {.entry = {.count = 1, .reusable = false}}, SHIFT(35),
  [539] = {.entry = {.count = 1, .reusable = false}}, SHIFT(185),
  [541] = {.entry = {.count = 1, .reusable = false}}, SHIFT(124),
  [543] = {.entry = {.count = 1, .reusable = false}}, SHIFT(33),
  [545] = {.entry = {.count = 1, .reusable = false}}, SHIFT(73),
  [547] = {.entry = {.count = 1, .reusable = false}}, SHIFT(69),
  [549] = {.entry = {.count = 1, .reusable = true}}, SHIFT(187),
  [551] = {.entry = {.count = 1, .reusable = false}}, SHIFT(38),
  [553] = {.entry = {.count = 1, .reusable = true}}, SHIFT(197),
  [555] = {.entry = {.count = 1, .reusable = false}}, SHIFT(57),
  [557] = {.entry = {.count = 1, .reusable = false}}, SHIFT(198),
  [559] = {.entry = {.count = 1, .reusable = false}}, SHIFT(56),
  [561] = {.entry = {.count = 1, .reusable = false}}, SHIFT(161),
  [563] = {.entry = {.count = 1, .reusable = false}}, SHIFT(48),
  [565] = {.entry = {.count = 1, .reusable = false}}, SHIFT(43),
  [567] = {.entry = {.count = 1, .reusable = false}}, SHIFT(49),
  [569] = {.entry = {.count = 1, .reusable = false}}, SHIFT(46),
  [571] = {.entry = {.count = 1, .reusable = true}}, SHIFT(131),
  [573] = {.entry = {.count = 1, .reusable = false}}, SHIFT(53),
  [575] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [577] = {.entry = {.count = 1, .reusable = true}}, SHIFT(129),
  [579] = {.entry = {.count = 1, .reusable = true}}, SHIFT(64),
  [581] = {.entry = {.count = 1, .reusable = true}}, SHIFT(137),
  [583] = {.entry = {.count = 1, .reusable = true}}, SHIFT(136),
  [585] = {.entry = {.count = 1, .reusable = false}}, SHIFT(80),
  [587] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [589] = {.entry = {.count = 1, .reusable = true}}, SHIFT(135),
  [591] = {.entry = {.count = 1, .reusable = false}}, SHIFT(65),
  [593] = {.entry = {.count = 1, .reusable = true}}, SHIFT(92),
  [595] = {.entry = {.count = 1, .reusable = true}}, SHIFT(132),
  [597] = {.entry = {.count = 1, .reusable = true}}, SHIFT(133),
  [599] = {.entry = {.count = 1, .reusable = false}}, SHIFT(104),
  [601] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__link_expression, 3),
  [603] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__link_expression, 5),
  [605] = {.entry = {.count = 1, .reusable = true}}, SHIFT(79),
  [607] = {.entry = {.count = 1, .reusable = true}}, SHIFT(127),
  [609] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tag, 1),
  [611] = {.entry = {.count = 1, .reusable = true}}, SHIFT(242),
  [613] = {.entry = {.count = 1, .reusable = true}}, SHIFT(77),
  [615] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [617] = {.entry = {.count = 1, .reusable = true}}, SHIFT(91),
  [619] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [621] = {.entry = {.count = 1, .reusable = true}}, SHIFT(76),
  [623] = {.entry = {.count = 1, .reusable = true}}, SHIFT(90),
  [625] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [627] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [629] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [631] = {.entry = {.count = 1, .reusable = true}}, SHIFT(72),
  [633] = {.entry = {.count = 1, .reusable = true}}, SHIFT(89),
  [635] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [637] = {.entry = {.count = 1, .reusable = true}}, SHIFT(121),
  [639] = {.entry = {.count = 1, .reusable = true}}, SHIFT(63),
  [641] = {.entry = {.count = 1, .reusable = true}}, SHIFT(62),
  [643] = {.entry = {.count = 1, .reusable = true}}, SHIFT(61),
  [645] = {.entry = {.count = 1, .reusable = true}}, SHIFT(94),
  [647] = {.entry = {.count = 1, .reusable = true}}, SHIFT(105),
  [649] = {.entry = {.count = 1, .reusable = true}}, SHIFT(125),
  [651] = {.entry = {.count = 1, .reusable = true}}, SHIFT(98),
  [653] = {.entry = {.count = 1, .reusable = true}}, SHIFT(78),
  [655] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [657] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [659] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__author_line, 2, .production_id = 1),
  [661] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_xhtml_tag, 3),
  [663] = {.entry = {.count = 1, .reusable = true}}, SHIFT(257),
  [665] = {.entry = {.count = 1, .reusable = true}}, SHIFT(232),
  [667] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_xhtml_tag, 2),
  [669] = {.entry = {.count = 1, .reusable = true}}, SHIFT(209),
  [671] = {.entry = {.count = 1, .reusable = true}}, SHIFT(241),
  [673] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [675] = {.entry = {.count = 1, .reusable = true}}, SHIFT(97),
  [677] = {.entry = {.count = 1, .reusable = true}}, SHIFT(95),
  [679] = {.entry = {.count = 1, .reusable = true}}, SHIFT(217),
  [681] = {.entry = {.count = 1, .reusable = true}}, SHIFT(207),
  [683] = {.entry = {.count = 1, .reusable = true}}, SHIFT(87),
  [685] = {.entry = {.count = 1, .reusable = true}}, SHIFT(248),
  [687] = {.entry = {.count = 1, .reusable = true}}, SHIFT(249),
  [689] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_section, 3, .production_id = 3),
  [691] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__author_line, 3, .production_id = 2),
  [693] = {.entry = {.count = 1, .reusable = true}}, SHIFT(214),
  [695] = {.entry = {.count = 1, .reusable = true}}, SHIFT(74),
  [697] = {.entry = {.count = 1, .reusable = true}}, SHIFT(70),
  [699] = {.entry = {.count = 1, .reusable = true}}, SHIFT(67),
  [701] = {.entry = {.count = 1, .reusable = true}}, SHIFT(66),
  [703] = {.entry = {.count = 1, .reusable = true}}, SHIFT(225),
  [705] = {.entry = {.count = 1, .reusable = true}}, SHIFT(231),
};

#ifdef __cplusplus
extern "C" {
#endif
#ifdef _WIN32
#define extern __declspec(dllexport)
#endif

extern const TSLanguage *tree_sitter_edoc(void) {
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
  };
  return &language;
}
#ifdef __cplusplus
}
#endif
