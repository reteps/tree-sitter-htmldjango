#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#ifdef _MSC_VER
#pragma optimize("", off)
#elif defined(__clang__)
#pragma clang optimize off
#elif defined(__GNUC__)
#pragma GCC optimize ("O0")
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 116
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 135
#define ALIAS_COUNT 0
#define TOKEN_COUNT 110
#define EXTERNAL_TOKEN_COUNT 9
#define FIELD_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 4
#define PRODUCTION_ID_COUNT 1

enum {
  anon_sym_LT_BANG = 1,
  aux_sym_doctype_token1 = 2,
  anon_sym_GT = 3,
  sym__doctype = 4,
  anon_sym_LT = 5,
  anon_sym_SLASH_GT = 6,
  anon_sym_LT_SLASH = 7,
  anon_sym_EQ = 8,
  sym_attribute_name = 9,
  sym_attribute_value = 10,
  sym_entity = 11,
  anon_sym_SQUOTE = 12,
  aux_sym_quoted_attribute_value_token1 = 13,
  anon_sym_DQUOTE = 14,
  aux_sym_quoted_attribute_value_token2 = 15,
  aux_sym_text_token1 = 16,
  anon_sym_LBRACE_PERCENT = 17,
  anon_sym_PERCENT_RBRACE = 18,
  anon_sym_LBRACE_LBRACE = 19,
  anon_sym_RBRACE_RBRACE = 20,
  anon_sym_end_LBRACKobjectObject_RBRACK = 21,
  anon_sym_autoescape = 22,
  anon_sym_block = 23,
  anon_sym_comment = 24,
  anon_sym_csrf_DASHtoken = 25,
  anon_sym_cycle = 26,
  anon_sym_debug = 27,
  anon_sym_extends = 28,
  anon_sym_filter = 29,
  anon_sym_firstof = 30,
  anon_sym_for = 31,
  anon_sym_empty = 32,
  anon_sym_if = 33,
  anon_sym_in = 34,
  anon_sym_ifchanged = 35,
  anon_sym_include = 36,
  anon_sym_load = 37,
  anon_sym_lorem = 38,
  anon_sym_now = 39,
  anon_sym_regroup = 40,
  anon_sym_resetcycle = 41,
  anon_sym_spaceless = 42,
  anon_sym_templatetag = 43,
  anon_sym_url = 44,
  anon_sym_verbatim = 45,
  anon_sym_widthratio = 46,
  anon_sym_with = 47,
  anon_sym_add = 48,
  anon_sym_addslashes = 49,
  anon_sym_capfirst = 50,
  anon_sym_center = 51,
  anon_sym_cut = 52,
  anon_sym_date = 53,
  anon_sym_default = 54,
  anon_sym_default_if_none = 55,
  anon_sym_dictsort = 56,
  anon_sym_dictsortreversed = 57,
  anon_sym_divisibleby = 58,
  anon_sym_escape = 59,
  anon_sym_escapejs = 60,
  anon_sym_escapeseq = 61,
  anon_sym_filesizeformat = 62,
  anon_sym_first = 63,
  anon_sym_floatformat = 64,
  anon_sym_get_DASHdigit = 65,
  anon_sym_iriencode = 66,
  anon_sym_join = 67,
  anon_sym_json_DASHscript = 68,
  anon_sym_last = 69,
  anon_sym_length = 70,
  anon_sym_length_DASHis = 71,
  anon_sym_linebreaks = 72,
  anon_sym_linebreaksbr = 73,
  anon_sym_linenumbers = 74,
  anon_sym_ljust = 75,
  anon_sym_lower = 76,
  anon_sym_make_DASHlist = 77,
  anon_sym_phone2numeric = 78,
  anon_sym_pluralize = 79,
  anon_sym_pprint = 80,
  anon_sym_random = 81,
  anon_sym_rjust = 82,
  anon_sym_safe = 83,
  anon_sym_safeseq = 84,
  anon_sym_slice = 85,
  anon_sym_slugify = 86,
  anon_sym_stringformat = 87,
  anon_sym_striptags = 88,
  anon_sym_time = 89,
  anon_sym_timesince = 90,
  anon_sym_timeuntil = 91,
  anon_sym_title = 92,
  anon_sym_truncatechars = 93,
  anon_sym_truncatechars_DASHhtml = 94,
  anon_sym_truncatewords = 95,
  anon_sym_truncatewords_DASHhtml = 96,
  anon_sym_unordered_DASHlist = 97,
  anon_sym_upper = 98,
  anon_sym_wordcount = 99,
  anon_sym_wordwrap = 100,
  anon_sym_yesno = 101,
  sym__start_tag_name = 102,
  sym__script_start_tag_name = 103,
  sym__style_start_tag_name = 104,
  sym__end_tag_name = 105,
  sym_erroneous_end_tag_name = 106,
  sym__implicit_end_tag = 107,
  sym_raw_text = 108,
  sym_comment = 109,
  sym_document = 110,
  sym_html = 111,
  sym_doctype = 112,
  sym__node = 113,
  sym_element = 114,
  sym_script_element = 115,
  sym_style_element = 116,
  sym_start_tag = 117,
  sym_script_start_tag = 118,
  sym_style_start_tag = 119,
  sym_self_closing_tag = 120,
  sym_end_tag = 121,
  sym_erroneous_end_tag = 122,
  sym_attribute = 123,
  sym_quoted_attribute_value = 124,
  sym_text = 125,
  sym_directive = 126,
  sym_variable = 127,
  sym_keyword = 128,
  sym__keyword_list = 129,
  sym_identifier = 130,
  aux_sym_document_repeat1 = 131,
  aux_sym_element_repeat1 = 132,
  aux_sym_start_tag_repeat1 = 133,
  aux_sym_directive_repeat1 = 134,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [anon_sym_LT_BANG] = "<!",
  [aux_sym_doctype_token1] = "doctype_token1",
  [anon_sym_GT] = ">",
  [sym__doctype] = "doctype",
  [anon_sym_LT] = "<",
  [anon_sym_SLASH_GT] = "/>",
  [anon_sym_LT_SLASH] = "</",
  [anon_sym_EQ] = "=",
  [sym_attribute_name] = "attribute_name",
  [sym_attribute_value] = "attribute_value",
  [sym_entity] = "entity",
  [anon_sym_SQUOTE] = "'",
  [aux_sym_quoted_attribute_value_token1] = "attribute_value",
  [anon_sym_DQUOTE] = "\"",
  [aux_sym_quoted_attribute_value_token2] = "attribute_value",
  [aux_sym_text_token1] = "text_token1",
  [anon_sym_LBRACE_PERCENT] = "{%",
  [anon_sym_PERCENT_RBRACE] = "%}",
  [anon_sym_LBRACE_LBRACE] = "{{",
  [anon_sym_RBRACE_RBRACE] = "}}",
  [anon_sym_end_LBRACKobjectObject_RBRACK] = "end[object Object]",
  [anon_sym_autoescape] = "autoescape",
  [anon_sym_block] = "block",
  [anon_sym_comment] = "comment",
  [anon_sym_csrf_DASHtoken] = "csrf-token",
  [anon_sym_cycle] = "cycle",
  [anon_sym_debug] = "debug",
  [anon_sym_extends] = "extends",
  [anon_sym_filter] = "filter",
  [anon_sym_firstof] = "firstof",
  [anon_sym_for] = "for",
  [anon_sym_empty] = "empty",
  [anon_sym_if] = "if",
  [anon_sym_in] = "in",
  [anon_sym_ifchanged] = "ifchanged",
  [anon_sym_include] = "include",
  [anon_sym_load] = "load",
  [anon_sym_lorem] = "lorem",
  [anon_sym_now] = "now",
  [anon_sym_regroup] = "regroup",
  [anon_sym_resetcycle] = "resetcycle",
  [anon_sym_spaceless] = "spaceless",
  [anon_sym_templatetag] = "templatetag",
  [anon_sym_url] = "url",
  [anon_sym_verbatim] = "verbatim",
  [anon_sym_widthratio] = "widthratio",
  [anon_sym_with] = "with",
  [anon_sym_add] = "add",
  [anon_sym_addslashes] = "addslashes",
  [anon_sym_capfirst] = "capfirst",
  [anon_sym_center] = "center",
  [anon_sym_cut] = "cut",
  [anon_sym_date] = "date",
  [anon_sym_default] = "default",
  [anon_sym_default_if_none] = "default_if_none",
  [anon_sym_dictsort] = "dictsort",
  [anon_sym_dictsortreversed] = "dictsortreversed",
  [anon_sym_divisibleby] = "divisibleby",
  [anon_sym_escape] = "escape",
  [anon_sym_escapejs] = "escapejs",
  [anon_sym_escapeseq] = "escapeseq",
  [anon_sym_filesizeformat] = "filesizeformat",
  [anon_sym_first] = "first",
  [anon_sym_floatformat] = "floatformat",
  [anon_sym_get_DASHdigit] = "get-digit",
  [anon_sym_iriencode] = "iriencode",
  [anon_sym_join] = "join",
  [anon_sym_json_DASHscript] = "json-script",
  [anon_sym_last] = "last",
  [anon_sym_length] = "length",
  [anon_sym_length_DASHis] = "length-is",
  [anon_sym_linebreaks] = "linebreaks",
  [anon_sym_linebreaksbr] = "linebreaksbr",
  [anon_sym_linenumbers] = "linenumbers",
  [anon_sym_ljust] = "ljust",
  [anon_sym_lower] = "lower",
  [anon_sym_make_DASHlist] = "make-list",
  [anon_sym_phone2numeric] = "phone2numeric",
  [anon_sym_pluralize] = "pluralize",
  [anon_sym_pprint] = "pprint",
  [anon_sym_random] = "random",
  [anon_sym_rjust] = "rjust",
  [anon_sym_safe] = "safe",
  [anon_sym_safeseq] = "safeseq",
  [anon_sym_slice] = "slice",
  [anon_sym_slugify] = "slugify",
  [anon_sym_stringformat] = "stringformat",
  [anon_sym_striptags] = "striptags",
  [anon_sym_time] = "time",
  [anon_sym_timesince] = "timesince",
  [anon_sym_timeuntil] = "timeuntil",
  [anon_sym_title] = "title",
  [anon_sym_truncatechars] = "truncatechars",
  [anon_sym_truncatechars_DASHhtml] = "truncatechars-html",
  [anon_sym_truncatewords] = "truncatewords",
  [anon_sym_truncatewords_DASHhtml] = "truncatewords-html",
  [anon_sym_unordered_DASHlist] = "unordered-list",
  [anon_sym_upper] = "upper",
  [anon_sym_wordcount] = "wordcount",
  [anon_sym_wordwrap] = "wordwrap",
  [anon_sym_yesno] = "yesno",
  [sym__start_tag_name] = "tag_name",
  [sym__script_start_tag_name] = "tag_name",
  [sym__style_start_tag_name] = "tag_name",
  [sym__end_tag_name] = "tag_name",
  [sym_erroneous_end_tag_name] = "erroneous_end_tag_name",
  [sym__implicit_end_tag] = "_implicit_end_tag",
  [sym_raw_text] = "raw_text",
  [sym_comment] = "comment",
  [sym_document] = "document",
  [sym_html] = "html",
  [sym_doctype] = "doctype",
  [sym__node] = "_node",
  [sym_element] = "element",
  [sym_script_element] = "script_element",
  [sym_style_element] = "style_element",
  [sym_start_tag] = "start_tag",
  [sym_script_start_tag] = "start_tag",
  [sym_style_start_tag] = "start_tag",
  [sym_self_closing_tag] = "self_closing_tag",
  [sym_end_tag] = "end_tag",
  [sym_erroneous_end_tag] = "erroneous_end_tag",
  [sym_attribute] = "attribute",
  [sym_quoted_attribute_value] = "quoted_attribute_value",
  [sym_text] = "text",
  [sym_directive] = "directive",
  [sym_variable] = "variable",
  [sym_keyword] = "keyword",
  [sym__keyword_list] = "_keyword_list",
  [sym_identifier] = "identifier",
  [aux_sym_document_repeat1] = "document_repeat1",
  [aux_sym_element_repeat1] = "element_repeat1",
  [aux_sym_start_tag_repeat1] = "start_tag_repeat1",
  [aux_sym_directive_repeat1] = "directive_repeat1",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [anon_sym_LT_BANG] = anon_sym_LT_BANG,
  [aux_sym_doctype_token1] = aux_sym_doctype_token1,
  [anon_sym_GT] = anon_sym_GT,
  [sym__doctype] = sym__doctype,
  [anon_sym_LT] = anon_sym_LT,
  [anon_sym_SLASH_GT] = anon_sym_SLASH_GT,
  [anon_sym_LT_SLASH] = anon_sym_LT_SLASH,
  [anon_sym_EQ] = anon_sym_EQ,
  [sym_attribute_name] = sym_attribute_name,
  [sym_attribute_value] = sym_attribute_value,
  [sym_entity] = sym_entity,
  [anon_sym_SQUOTE] = anon_sym_SQUOTE,
  [aux_sym_quoted_attribute_value_token1] = sym_attribute_value,
  [anon_sym_DQUOTE] = anon_sym_DQUOTE,
  [aux_sym_quoted_attribute_value_token2] = sym_attribute_value,
  [aux_sym_text_token1] = aux_sym_text_token1,
  [anon_sym_LBRACE_PERCENT] = anon_sym_LBRACE_PERCENT,
  [anon_sym_PERCENT_RBRACE] = anon_sym_PERCENT_RBRACE,
  [anon_sym_LBRACE_LBRACE] = anon_sym_LBRACE_LBRACE,
  [anon_sym_RBRACE_RBRACE] = anon_sym_RBRACE_RBRACE,
  [anon_sym_end_LBRACKobjectObject_RBRACK] = anon_sym_end_LBRACKobjectObject_RBRACK,
  [anon_sym_autoescape] = anon_sym_autoescape,
  [anon_sym_block] = anon_sym_block,
  [anon_sym_comment] = anon_sym_comment,
  [anon_sym_csrf_DASHtoken] = anon_sym_csrf_DASHtoken,
  [anon_sym_cycle] = anon_sym_cycle,
  [anon_sym_debug] = anon_sym_debug,
  [anon_sym_extends] = anon_sym_extends,
  [anon_sym_filter] = anon_sym_filter,
  [anon_sym_firstof] = anon_sym_firstof,
  [anon_sym_for] = anon_sym_for,
  [anon_sym_empty] = anon_sym_empty,
  [anon_sym_if] = anon_sym_if,
  [anon_sym_in] = anon_sym_in,
  [anon_sym_ifchanged] = anon_sym_ifchanged,
  [anon_sym_include] = anon_sym_include,
  [anon_sym_load] = anon_sym_load,
  [anon_sym_lorem] = anon_sym_lorem,
  [anon_sym_now] = anon_sym_now,
  [anon_sym_regroup] = anon_sym_regroup,
  [anon_sym_resetcycle] = anon_sym_resetcycle,
  [anon_sym_spaceless] = anon_sym_spaceless,
  [anon_sym_templatetag] = anon_sym_templatetag,
  [anon_sym_url] = anon_sym_url,
  [anon_sym_verbatim] = anon_sym_verbatim,
  [anon_sym_widthratio] = anon_sym_widthratio,
  [anon_sym_with] = anon_sym_with,
  [anon_sym_add] = anon_sym_add,
  [anon_sym_addslashes] = anon_sym_addslashes,
  [anon_sym_capfirst] = anon_sym_capfirst,
  [anon_sym_center] = anon_sym_center,
  [anon_sym_cut] = anon_sym_cut,
  [anon_sym_date] = anon_sym_date,
  [anon_sym_default] = anon_sym_default,
  [anon_sym_default_if_none] = anon_sym_default_if_none,
  [anon_sym_dictsort] = anon_sym_dictsort,
  [anon_sym_dictsortreversed] = anon_sym_dictsortreversed,
  [anon_sym_divisibleby] = anon_sym_divisibleby,
  [anon_sym_escape] = anon_sym_escape,
  [anon_sym_escapejs] = anon_sym_escapejs,
  [anon_sym_escapeseq] = anon_sym_escapeseq,
  [anon_sym_filesizeformat] = anon_sym_filesizeformat,
  [anon_sym_first] = anon_sym_first,
  [anon_sym_floatformat] = anon_sym_floatformat,
  [anon_sym_get_DASHdigit] = anon_sym_get_DASHdigit,
  [anon_sym_iriencode] = anon_sym_iriencode,
  [anon_sym_join] = anon_sym_join,
  [anon_sym_json_DASHscript] = anon_sym_json_DASHscript,
  [anon_sym_last] = anon_sym_last,
  [anon_sym_length] = anon_sym_length,
  [anon_sym_length_DASHis] = anon_sym_length_DASHis,
  [anon_sym_linebreaks] = anon_sym_linebreaks,
  [anon_sym_linebreaksbr] = anon_sym_linebreaksbr,
  [anon_sym_linenumbers] = anon_sym_linenumbers,
  [anon_sym_ljust] = anon_sym_ljust,
  [anon_sym_lower] = anon_sym_lower,
  [anon_sym_make_DASHlist] = anon_sym_make_DASHlist,
  [anon_sym_phone2numeric] = anon_sym_phone2numeric,
  [anon_sym_pluralize] = anon_sym_pluralize,
  [anon_sym_pprint] = anon_sym_pprint,
  [anon_sym_random] = anon_sym_random,
  [anon_sym_rjust] = anon_sym_rjust,
  [anon_sym_safe] = anon_sym_safe,
  [anon_sym_safeseq] = anon_sym_safeseq,
  [anon_sym_slice] = anon_sym_slice,
  [anon_sym_slugify] = anon_sym_slugify,
  [anon_sym_stringformat] = anon_sym_stringformat,
  [anon_sym_striptags] = anon_sym_striptags,
  [anon_sym_time] = anon_sym_time,
  [anon_sym_timesince] = anon_sym_timesince,
  [anon_sym_timeuntil] = anon_sym_timeuntil,
  [anon_sym_title] = anon_sym_title,
  [anon_sym_truncatechars] = anon_sym_truncatechars,
  [anon_sym_truncatechars_DASHhtml] = anon_sym_truncatechars_DASHhtml,
  [anon_sym_truncatewords] = anon_sym_truncatewords,
  [anon_sym_truncatewords_DASHhtml] = anon_sym_truncatewords_DASHhtml,
  [anon_sym_unordered_DASHlist] = anon_sym_unordered_DASHlist,
  [anon_sym_upper] = anon_sym_upper,
  [anon_sym_wordcount] = anon_sym_wordcount,
  [anon_sym_wordwrap] = anon_sym_wordwrap,
  [anon_sym_yesno] = anon_sym_yesno,
  [sym__start_tag_name] = sym__start_tag_name,
  [sym__script_start_tag_name] = sym__start_tag_name,
  [sym__style_start_tag_name] = sym__start_tag_name,
  [sym__end_tag_name] = sym__start_tag_name,
  [sym_erroneous_end_tag_name] = sym_erroneous_end_tag_name,
  [sym__implicit_end_tag] = sym__implicit_end_tag,
  [sym_raw_text] = sym_raw_text,
  [sym_comment] = sym_comment,
  [sym_document] = sym_document,
  [sym_html] = sym_html,
  [sym_doctype] = sym_doctype,
  [sym__node] = sym__node,
  [sym_element] = sym_element,
  [sym_script_element] = sym_script_element,
  [sym_style_element] = sym_style_element,
  [sym_start_tag] = sym_start_tag,
  [sym_script_start_tag] = sym_start_tag,
  [sym_style_start_tag] = sym_start_tag,
  [sym_self_closing_tag] = sym_self_closing_tag,
  [sym_end_tag] = sym_end_tag,
  [sym_erroneous_end_tag] = sym_erroneous_end_tag,
  [sym_attribute] = sym_attribute,
  [sym_quoted_attribute_value] = sym_quoted_attribute_value,
  [sym_text] = sym_text,
  [sym_directive] = sym_directive,
  [sym_variable] = sym_variable,
  [sym_keyword] = sym_keyword,
  [sym__keyword_list] = sym__keyword_list,
  [sym_identifier] = sym_identifier,
  [aux_sym_document_repeat1] = aux_sym_document_repeat1,
  [aux_sym_element_repeat1] = aux_sym_element_repeat1,
  [aux_sym_start_tag_repeat1] = aux_sym_start_tag_repeat1,
  [aux_sym_directive_repeat1] = aux_sym_directive_repeat1,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [anon_sym_LT_BANG] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_doctype_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_GT] = {
    .visible = true,
    .named = false,
  },
  [sym__doctype] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_SLASH_GT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LT_SLASH] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_EQ] = {
    .visible = true,
    .named = false,
  },
  [sym_attribute_name] = {
    .visible = true,
    .named = true,
  },
  [sym_attribute_value] = {
    .visible = true,
    .named = true,
  },
  [sym_entity] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_SQUOTE] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_quoted_attribute_value_token1] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_DQUOTE] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_quoted_attribute_value_token2] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_text_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_LBRACE_PERCENT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PERCENT_RBRACE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LBRACE_LBRACE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RBRACE_RBRACE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_end_LBRACKobjectObject_RBRACK] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_autoescape] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_block] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_comment] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_csrf_DASHtoken] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_cycle] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_debug] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_extends] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_filter] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_firstof] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_for] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_empty] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_if] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_in] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_ifchanged] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_include] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_load] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_lorem] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_now] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_regroup] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_resetcycle] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_spaceless] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_templatetag] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_url] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_verbatim] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_widthratio] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_with] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_add] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_addslashes] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_capfirst] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_center] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_cut] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_date] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_default] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_default_if_none] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_dictsort] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_dictsortreversed] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_divisibleby] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_escape] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_escapejs] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_escapeseq] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_filesizeformat] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_first] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_floatformat] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_get_DASHdigit] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_iriencode] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_join] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_json_DASHscript] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_last] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_length] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_length_DASHis] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_linebreaks] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_linebreaksbr] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_linenumbers] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_ljust] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_lower] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_make_DASHlist] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_phone2numeric] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_pluralize] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_pprint] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_random] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_rjust] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_safe] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_safeseq] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_slice] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_slugify] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_stringformat] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_striptags] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_time] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_timesince] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_timeuntil] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_title] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_truncatechars] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_truncatechars_DASHhtml] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_truncatewords] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_truncatewords_DASHhtml] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_unordered_DASHlist] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_upper] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_wordcount] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_wordwrap] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_yesno] = {
    .visible = true,
    .named = false,
  },
  [sym__start_tag_name] = {
    .visible = true,
    .named = true,
  },
  [sym__script_start_tag_name] = {
    .visible = true,
    .named = true,
  },
  [sym__style_start_tag_name] = {
    .visible = true,
    .named = true,
  },
  [sym__end_tag_name] = {
    .visible = true,
    .named = true,
  },
  [sym_erroneous_end_tag_name] = {
    .visible = true,
    .named = true,
  },
  [sym__implicit_end_tag] = {
    .visible = false,
    .named = true,
  },
  [sym_raw_text] = {
    .visible = true,
    .named = true,
  },
  [sym_comment] = {
    .visible = true,
    .named = true,
  },
  [sym_document] = {
    .visible = true,
    .named = true,
  },
  [sym_html] = {
    .visible = true,
    .named = true,
  },
  [sym_doctype] = {
    .visible = true,
    .named = true,
  },
  [sym__node] = {
    .visible = false,
    .named = true,
  },
  [sym_element] = {
    .visible = true,
    .named = true,
  },
  [sym_script_element] = {
    .visible = true,
    .named = true,
  },
  [sym_style_element] = {
    .visible = true,
    .named = true,
  },
  [sym_start_tag] = {
    .visible = true,
    .named = true,
  },
  [sym_script_start_tag] = {
    .visible = true,
    .named = true,
  },
  [sym_style_start_tag] = {
    .visible = true,
    .named = true,
  },
  [sym_self_closing_tag] = {
    .visible = true,
    .named = true,
  },
  [sym_end_tag] = {
    .visible = true,
    .named = true,
  },
  [sym_erroneous_end_tag] = {
    .visible = true,
    .named = true,
  },
  [sym_attribute] = {
    .visible = true,
    .named = true,
  },
  [sym_quoted_attribute_value] = {
    .visible = true,
    .named = true,
  },
  [sym_text] = {
    .visible = true,
    .named = true,
  },
  [sym_directive] = {
    .visible = true,
    .named = true,
  },
  [sym_variable] = {
    .visible = true,
    .named = true,
  },
  [sym_keyword] = {
    .visible = true,
    .named = true,
  },
  [sym__keyword_list] = {
    .visible = false,
    .named = true,
  },
  [sym_identifier] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_document_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_element_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_start_tag_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_directive_repeat1] = {
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
  [3] = 2,
  [4] = 4,
  [5] = 4,
  [6] = 6,
  [7] = 7,
  [8] = 8,
  [9] = 9,
  [10] = 10,
  [11] = 10,
  [12] = 12,
  [13] = 9,
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
  [29] = 20,
  [30] = 30,
  [31] = 31,
  [32] = 31,
  [33] = 16,
  [34] = 30,
  [35] = 35,
  [36] = 25,
  [37] = 37,
  [38] = 27,
  [39] = 18,
  [40] = 40,
  [41] = 41,
  [42] = 42,
  [43] = 17,
  [44] = 44,
  [45] = 26,
  [46] = 24,
  [47] = 41,
  [48] = 23,
  [49] = 35,
  [50] = 22,
  [51] = 40,
  [52] = 21,
  [53] = 53,
  [54] = 54,
  [55] = 54,
  [56] = 56,
  [57] = 56,
  [58] = 58,
  [59] = 58,
  [60] = 60,
  [61] = 53,
  [62] = 62,
  [63] = 63,
  [64] = 64,
  [65] = 65,
  [66] = 66,
  [67] = 65,
  [68] = 66,
  [69] = 69,
  [70] = 70,
  [71] = 69,
  [72] = 72,
  [73] = 73,
  [74] = 72,
  [75] = 75,
  [76] = 76,
  [77] = 77,
  [78] = 78,
  [79] = 79,
  [80] = 80,
  [81] = 78,
  [82] = 79,
  [83] = 83,
  [84] = 84,
  [85] = 76,
  [86] = 84,
  [87] = 73,
  [88] = 75,
  [89] = 70,
  [90] = 77,
  [91] = 91,
  [92] = 92,
  [93] = 91,
  [94] = 94,
  [95] = 95,
  [96] = 96,
  [97] = 97,
  [98] = 95,
  [99] = 99,
  [100] = 100,
  [101] = 101,
  [102] = 102,
  [103] = 103,
  [104] = 104,
  [105] = 103,
  [106] = 97,
  [107] = 99,
  [108] = 108,
  [109] = 109,
  [110] = 96,
  [111] = 101,
  [112] = 104,
  [113] = 108,
  [114] = 109,
  [115] = 102,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(419);
      if (lookahead == '"') ADVANCE(474);
      if (lookahead == '%') ADVANCE(406);
      if (lookahead == '&') ADVANCE(4);
      if (lookahead == '\'') ADVANCE(471);
      if (lookahead == '/') ADVANCE(15);
      if (lookahead == '<') ADVANCE(425);
      if (lookahead == '=') ADVANCE(428);
      if (lookahead == '>') ADVANCE(423);
      if (lookahead == 'D') ADVANCE(410);
      if (lookahead == 'a') ADVANCE(74);
      if (lookahead == 'b') ADVANCE(207);
      if (lookahead == 'c') ADVANCE(21);
      if (lookahead == 'd') ADVANCE(26);
      if (lookahead == 'e') ADVANCE(223);
      if (lookahead == 'f') ADVANCE(171);
      if (lookahead == 'g') ADVANCE(112);
      if (lookahead == 'i') ADVANCE(143);
      if (lookahead == 'j') ADVANCE(261);
      if (lookahead == 'l') ADVANCE(22);
      if (lookahead == 'm') ADVANCE(23);
      if (lookahead == 'n') ADVANCE(258);
      if (lookahead == 'p') ADVANCE(164);
      if (lookahead == 'r') ADVANCE(28);
      if (lookahead == 's') ADVANCE(24);
      if (lookahead == 't') ADVANCE(108);
      if (lookahead == 'u') ADVANCE(245);
      if (lookahead == 'v') ADVANCE(114);
      if (lookahead == 'w') ADVANCE(172);
      if (lookahead == 'y') ADVANCE(109);
      if (lookahead == '{') ADVANCE(6);
      if (lookahead == '}') ADVANCE(407);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0)
      END_STATE();
    case 1:
      if (lookahead == ' ') ADVANCE(16);
      END_STATE();
    case 2:
      if (lookahead == '"') ADVANCE(474);
      if (lookahead == '\'') ADVANCE(471);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(2)
      if (lookahead != 0 &&
          (lookahead < '<' || '>' < lookahead)) ADVANCE(430);
      END_STATE();
    case 3:
      if (lookahead == '"') ADVANCE(474);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(475);
      if (lookahead != 0) ADVANCE(476);
      END_STATE();
    case 4:
      if (lookahead == '#') ADVANCE(413);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(470);
      END_STATE();
    case 5:
      if (lookahead == '%') ADVANCE(406);
      if (lookahead == 'a') ADVANCE(606);
      if (lookahead == 'b') ADVANCE(548);
      if (lookahead == 'c') ADVANCE(564);
      if (lookahead == 'd') ADVANCE(507);
      if (lookahead == 'e') ADVANCE(556);
      if (lookahead == 'f') ADVANCE(538);
      if (lookahead == 'i') ADVANCE(528);
      if (lookahead == 'l') ADVANCE(565);
      if (lookahead == 'n') ADVANCE(566);
      if (lookahead == 'r') ADVANCE(508);
      if (lookahead == 's') ADVANCE(574);
      if (lookahead == 't') ADVANCE(514);
      if (lookahead == 'u') ADVANCE(582);
      if (lookahead == 'v') ADVANCE(517);
      if (lookahead == 'w') ADVANCE(539);
      if (lookahead == '}') ADVANCE(407);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(5)
      if (lookahead != 0 &&
          lookahead != '&' &&
          lookahead != '<' &&
          lookahead != '>' &&
          lookahead != '{') ADVANCE(613);
      END_STATE();
    case 6:
      if (lookahead == '%') ADVANCE(614);
      if (lookahead == '{') ADVANCE(616);
      END_STATE();
    case 7:
      if (lookahead == '\'') ADVANCE(471);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(472);
      if (lookahead != 0) ADVANCE(473);
      END_STATE();
    case 8:
      if (lookahead == '-') ADVANCE(84);
      END_STATE();
    case 9:
      if (lookahead == '-') ADVANCE(331);
      END_STATE();
    case 10:
      if (lookahead == '-') ADVANCE(210);
      END_STATE();
    case 11:
      if (lookahead == '-') ADVANCE(381);
      END_STATE();
    case 12:
      if (lookahead == '-') ADVANCE(219);
      END_STATE();
    case 13:
      if (lookahead == '/') ADVANCE(15);
      if (lookahead == '=') ADVANCE(428);
      if (lookahead == '>') ADVANCE(423);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(13)
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\'' &&
          lookahead != '<') ADVANCE(429);
      END_STATE();
    case 14:
      if (lookahead == '2') ADVANCE(247);
      END_STATE();
    case 15:
      if (lookahead == '>') ADVANCE(426);
      END_STATE();
    case 16:
      if (lookahead == 'O') ADVANCE(55);
      END_STATE();
    case 17:
      if (lookahead == 'O') ADVANCE(492);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(415);
      if (lookahead != 0 &&
          lookahead != '%' &&
          lookahead != '&' &&
          lookahead != '<' &&
          lookahead != '>' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(613);
      END_STATE();
    case 18:
      if (lookahead == '[') ADVANCE(262);
      END_STATE();
    case 19:
      if (lookahead == ']') ADVANCE(618);
      END_STATE();
    case 20:
      if (lookahead == '_') ADVANCE(257);
      END_STATE();
    case 21:
      if (lookahead == 'a') ADVANCE(282);
      if (lookahead == 'e') ADVANCE(241);
      if (lookahead == 'o') ADVANCE(224);
      if (lookahead == 's') ADVANCE(298);
      if (lookahead == 'u') ADVANCE(346);
      if (lookahead == 'y') ADVANCE(59);
      END_STATE();
    case 22:
      if (lookahead == 'a') ADVANCE(332);
      if (lookahead == 'e') ADVANCE(235);
      if (lookahead == 'i') ADVANCE(244);
      if (lookahead == 'j') ADVANCE(395);
      if (lookahead == 'o') ADVANCE(25);
      END_STATE();
    case 23:
      if (lookahead == 'a') ADVANCE(199);
      END_STATE();
    case 24:
      if (lookahead == 'a') ADVANCE(149);
      if (lookahead == 'l') ADVANCE(176);
      if (lookahead == 'p') ADVANCE(44);
      if (lookahead == 't') ADVANCE(301);
      END_STATE();
    case 25:
      if (lookahead == 'a') ADVANCE(77);
      if (lookahead == 'r') ADVANCE(113);
      if (lookahead == 'w') ADVANCE(120);
      END_STATE();
    case 26:
      if (lookahead == 'a') ADVANCE(370);
      if (lookahead == 'e') ADVANCE(49);
      if (lookahead == 'i') ADVANCE(61);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(408);
      END_STATE();
    case 27:
      if (lookahead == 'a') ADVANCE(200);
      END_STATE();
    case 28:
      if (lookahead == 'a') ADVANCE(239);
      if (lookahead == 'e') ADVANCE(155);
      if (lookahead == 'j') ADVANCE(396);
      END_STATE();
    case 29:
      if (lookahead == 'a') ADVANCE(284);
      END_STATE();
    case 30:
      if (lookahead == 'a') ADVANCE(388);
      END_STATE();
    case 31:
      if (lookahead == 'a') ADVANCE(159);
      END_STATE();
    case 32:
      if (lookahead == 'a') ADVANCE(281);
      END_STATE();
    case 33:
      if (lookahead == 'a') ADVANCE(330);
      END_STATE();
    case 34:
      if (lookahead == 'a') ADVANCE(154);
      END_STATE();
    case 35:
      if (lookahead == 'a') ADVANCE(371);
      END_STATE();
    case 36:
      if (lookahead == 'a') ADVANCE(243);
      END_STATE();
    case 37:
      if (lookahead == 'a') ADVANCE(380);
      END_STATE();
    case 38:
      if (lookahead == 'a') ADVANCE(385);
      END_STATE();
    case 39:
      if (lookahead == 'a') ADVANCE(308);
      END_STATE();
    case 40:
      if (lookahead == 'a') ADVANCE(383);
      END_STATE();
    case 41:
      if (lookahead == 'a') ADVANCE(362);
      END_STATE();
    case 42:
      if (lookahead == 'a') ADVANCE(364);
      END_STATE();
    case 43:
      if (lookahead == 'a') ADVANCE(365);
      END_STATE();
    case 44:
      if (lookahead == 'a') ADVANCE(66);
      END_STATE();
    case 45:
      if (lookahead == 'a') ADVANCE(286);
      END_STATE();
    case 46:
      if (lookahead == 'a') ADVANCE(217);
      END_STATE();
    case 47:
      if (lookahead == 'a') ADVANCE(384);
      END_STATE();
    case 48:
      if (lookahead == 'b') ADVANCE(196);
      END_STATE();
    case 49:
      if (lookahead == 'b') ADVANCE(387);
      if (lookahead == 'f') ADVANCE(30);
      END_STATE();
    case 50:
      if (lookahead == 'b') ADVANCE(402);
      END_STATE();
    case 51:
      if (lookahead == 'b') ADVANCE(311);
      if (lookahead == 'n') ADVANCE(390);
      END_STATE();
    case 52:
      if (lookahead == 'b') ADVANCE(37);
      END_STATE();
    case 53:
      if (lookahead == 'b') ADVANCE(215);
      END_STATE();
    case 54:
      if (lookahead == 'b') ADVANCE(132);
      END_STATE();
    case 55:
      if (lookahead == 'b') ADVANCE(197);
      END_STATE();
    case 56:
      if (lookahead == 'c') ADVANCE(702);
      END_STATE();
    case 57:
      if (lookahead == 'c') ADVANCE(198);
      END_STATE();
    case 58:
      if (lookahead == 'c') ADVANCE(403);
      END_STATE();
    case 59:
      if (lookahead == 'c') ADVANCE(211);
      END_STATE();
    case 60:
      if (lookahead == 'c') ADVANCE(29);
      END_STATE();
    case 61:
      if (lookahead == 'c') ADVANCE(368);
      if (lookahead == 'v') ADVANCE(177);
      END_STATE();
    case 62:
      if (lookahead == 'c') ADVANCE(47);
      END_STATE();
    case 63:
      if (lookahead == 'c') ADVANCE(269);
      if (lookahead == 'w') ADVANCE(314);
      END_STATE();
    case 64:
      if (lookahead == 'c') ADVANCE(276);
      END_STATE();
    case 65:
      if (lookahead == 'c') ADVANCE(96);
      END_STATE();
    case 66:
      if (lookahead == 'c') ADVANCE(140);
      END_STATE();
    case 67:
      if (lookahead == 'c') ADVANCE(361);
      END_STATE();
    case 68:
      if (lookahead == 'c') ADVANCE(103);
      END_STATE();
    case 69:
      if (lookahead == 'c') ADVANCE(367);
      END_STATE();
    case 70:
      if (lookahead == 'c') ADVANCE(166);
      if (lookahead == 'w') ADVANCE(273);
      END_STATE();
    case 71:
      if (lookahead == 'c') ADVANCE(306);
      END_STATE();
    case 72:
      if (lookahead == 'c') ADVANCE(216);
      END_STATE();
    case 73:
      if (lookahead == 'c') ADVANCE(45);
      END_STATE();
    case 74:
      if (lookahead == 'd') ADVANCE(75);
      if (lookahead == 'u') ADVANCE(375);
      END_STATE();
    case 75:
      if (lookahead == 'd') ADVANCE(672);
      END_STATE();
    case 76:
      if (lookahead == 'd') ADVANCE(18);
      END_STATE();
    case 77:
      if (lookahead == 'd') ADVANCE(650);
      END_STATE();
    case 78:
      if (lookahead == 'd') ADVANCE(63);
      END_STATE();
    case 79:
      if (lookahead == 'd') ADVANCE(646);
      END_STATE();
    case 80:
      if (lookahead == 'd') ADVANCE(681);
      END_STATE();
    case 81:
      if (lookahead == 'd') ADVANCE(320);
      END_STATE();
    case 82:
      if (lookahead == 'd') ADVANCE(265);
      END_STATE();
    case 83:
      if (lookahead == 'd') ADVANCE(369);
      if (lookahead == 't') ADVANCE(162);
      END_STATE();
    case 84:
      if (lookahead == 'd') ADVANCE(192);
      END_STATE();
    case 85:
      if (lookahead == 'd') ADVANCE(329);
      END_STATE();
    case 86:
      if (lookahead == 'd') ADVANCE(100);
      END_STATE();
    case 87:
      if (lookahead == 'd') ADVANCE(101);
      END_STATE();
    case 88:
      if (lookahead == 'd') ADVANCE(138);
      END_STATE();
    case 89:
      if (lookahead == 'd') ADVANCE(12);
      END_STATE();
    case 90:
      if (lookahead == 'e') ADVANCE(677);
      END_STATE();
    case 91:
      if (lookahead == 'e') ADVANCE(51);
      END_STATE();
    case 92:
      if (lookahead == 'e') ADVANCE(707);
      END_STATE();
    case 93:
      if (lookahead == 'e') ADVANCE(713);
      END_STATE();
    case 94:
      if (lookahead == 'e') ADVANCE(628);
      END_STATE();
    case 95:
      if (lookahead == 'e') ADVANCE(14);
      END_STATE();
    case 96:
      if (lookahead == 'e') ADVANCE(709);
      END_STATE();
    case 97:
      if (lookahead == 'e') ADVANCE(716);
      END_STATE();
    case 98:
      if (lookahead == 'e') ADVANCE(683);
      END_STATE();
    case 99:
      if (lookahead == 'e') ADVANCE(289);
      END_STATE();
    case 100:
      if (lookahead == 'e') ADVANCE(648);
      END_STATE();
    case 101:
      if (lookahead == 'e') ADVANCE(690);
      END_STATE();
    case 102:
      if (lookahead == 'e') ADVANCE(703);
      END_STATE();
    case 103:
      if (lookahead == 'e') ADVANCE(714);
      END_STATE();
    case 104:
      if (lookahead == 'e') ADVANCE(620);
      END_STATE();
    case 105:
      if (lookahead == 'e') ADVANCE(398);
      END_STATE();
    case 106:
      if (lookahead == 'e') ADVANCE(658);
      END_STATE();
    case 107:
      if (lookahead == 'e') ADVANCE(679);
      END_STATE();
    case 108:
      if (lookahead == 'e') ADVANCE(225);
      if (lookahead == 'i') ADVANCE(229);
      if (lookahead == 'r') ADVANCE(392);
      END_STATE();
    case 109:
      if (lookahead == 'e') ADVANCE(333);
      END_STATE();
    case 110:
      if (lookahead == 'e') ADVANCE(70);
      END_STATE();
    case 111:
      if (lookahead == 'e') ADVANCE(290);
      END_STATE();
    case 112:
      if (lookahead == 'e') ADVANCE(347);
      END_STATE();
    case 113:
      if (lookahead == 'e') ADVANCE(220);
      END_STATE();
    case 114:
      if (lookahead == 'e') ADVANCE(292);
      END_STATE();
    case 115:
      if (lookahead == 'e') ADVANCE(10);
      END_STATE();
    case 116:
      if (lookahead == 'e') ADVANCE(345);
      END_STATE();
    case 117:
      if (lookahead == 'e') ADVANCE(50);
      END_STATE();
    case 118:
      if (lookahead == 'e') ADVANCE(67);
      END_STATE();
    case 119:
      if (lookahead == 'e') ADVANCE(246);
      END_STATE();
    case 120:
      if (lookahead == 'e') ADVANCE(293);
      END_STATE();
    case 121:
      if (lookahead == 'e') ADVANCE(79);
      END_STATE();
    case 122:
      if (lookahead == 'e') ADVANCE(242);
      END_STATE();
    case 123:
      if (lookahead == 'e') ADVANCE(294);
      END_STATE();
    case 124:
      if (lookahead == 'e') ADVANCE(337);
      END_STATE();
    case 125:
      if (lookahead == 'e') ADVANCE(89);
      END_STATE();
    case 126:
      if (lookahead == 'e') ADVANCE(80);
      END_STATE();
    case 127:
      if (lookahead == 'e') ADVANCE(295);
      END_STATE();
    case 128:
      if (lookahead == 'e') ADVANCE(296);
      END_STATE();
    case 129:
      if (lookahead == 'e') ADVANCE(374);
      END_STATE();
    case 130:
      if (lookahead == 'e') ADVANCE(237);
      END_STATE();
    case 131:
      if (lookahead == 'e') ADVANCE(325);
      END_STATE();
    case 132:
      if (lookahead == 'e') ADVANCE(307);
      END_STATE();
    case 133:
      if (lookahead == 'e') ADVANCE(310);
      END_STATE();
    case 134:
      if (lookahead == 'e') ADVANCE(378);
      END_STATE();
    case 135:
      if (lookahead == 'e') ADVANCE(27);
      END_STATE();
    case 136:
      if (lookahead == 'e') ADVANCE(335);
      if (lookahead == 't') ADVANCE(128);
      END_STATE();
    case 137:
      if (lookahead == 'e') ADVANCE(69);
      END_STATE();
    case 138:
      if (lookahead == 'e') ADVANCE(313);
      END_STATE();
    case 139:
      if (lookahead == 'e') ADVANCE(251);
      END_STATE();
    case 140:
      if (lookahead == 'e') ADVANCE(214);
      END_STATE();
    case 141:
      if (lookahead == 'e') ADVANCE(309);
      END_STATE();
    case 142:
      if (lookahead == 'e') ADVANCE(152);
      END_STATE();
    case 143:
      if (lookahead == 'f') ADVANCE(642);
      if (lookahead == 'n') ADVANCE(644);
      if (lookahead == 'r') ADVANCE(193);
      END_STATE();
    case 144:
      if (lookahead == 'f') ADVANCE(636);
      END_STATE();
    case 145:
      if (lookahead == 'f') ADVANCE(20);
      END_STATE();
    case 146:
      if (lookahead == 'f') ADVANCE(11);
      END_STATE();
    case 147:
      if (lookahead == 'f') ADVANCE(401);
      END_STATE();
    case 148:
      if (lookahead == 'f') ADVANCE(184);
      END_STATE();
    case 149:
      if (lookahead == 'f') ADVANCE(92);
      END_STATE();
    case 150:
      if (lookahead == 'f') ADVANCE(272);
      END_STATE();
    case 151:
      if (lookahead == 'f') ADVANCE(278);
      END_STATE();
    case 152:
      if (lookahead == 'f') ADVANCE(279);
      END_STATE();
    case 153:
      if (lookahead == 'g') ADVANCE(630);
      END_STATE();
    case 154:
      if (lookahead == 'g') ADVANCE(662);
      END_STATE();
    case 155:
      if (lookahead == 'g') ADVANCE(305);
      if (lookahead == 's') ADVANCE(129);
      END_STATE();
    case 156:
      if (lookahead == 'g') ADVANCE(179);
      END_STATE();
    case 157:
      if (lookahead == 'g') ADVANCE(372);
      END_STATE();
    case 158:
      if (lookahead == 'g') ADVANCE(188);
      END_STATE();
    case 159:
      if (lookahead == 'g') ADVANCE(324);
      END_STATE();
    case 160:
      if (lookahead == 'g') ADVANCE(121);
      END_STATE();
    case 161:
      if (lookahead == 'g') ADVANCE(151);
      END_STATE();
    case 162:
      if (lookahead == 'h') ADVANCE(670);
      END_STATE();
    case 163:
      if (lookahead == 'h') ADVANCE(694);
      END_STATE();
    case 164:
      if (lookahead == 'h') ADVANCE(275);
      if (lookahead == 'l') ADVANCE(391);
      if (lookahead == 'p') ADVANCE(299);
      END_STATE();
    case 165:
      if (lookahead == 'h') ADVANCE(36);
      END_STATE();
    case 166:
      if (lookahead == 'h') ADVANCE(39);
      END_STATE();
    case 167:
      if (lookahead == 'h') ADVANCE(316);
      END_STATE();
    case 168:
      if (lookahead == 'h') ADVANCE(131);
      END_STATE();
    case 169:
      if (lookahead == 'h') ADVANCE(377);
      END_STATE();
    case 170:
      if (lookahead == 'h') ADVANCE(379);
      END_STATE();
    case 171:
      if (lookahead == 'i') ADVANCE(202);
      if (lookahead == 'l') ADVANCE(264);
      if (lookahead == 'o') ADVANCE(291);
      END_STATE();
    case 172:
      if (lookahead == 'i') ADVANCE(83);
      if (lookahead == 'o') ADVANCE(300);
      END_STATE();
    case 173:
      if (lookahead == 'i') ADVANCE(240);
      END_STATE();
    case 174:
      if (lookahead == 'i') ADVANCE(404);
      END_STATE();
    case 175:
      if (lookahead == 'i') ADVANCE(53);
      END_STATE();
    case 176:
      if (lookahead == 'i') ADVANCE(65);
      if (lookahead == 'u') ADVANCE(156);
      END_STATE();
    case 177:
      if (lookahead == 'i') ADVANCE(334);
      END_STATE();
    case 178:
      if (lookahead == 'i') ADVANCE(236);
      END_STATE();
    case 179:
      if (lookahead == 'i') ADVANCE(147);
      END_STATE();
    case 180:
      if (lookahead == 'i') ADVANCE(222);
      END_STATE();
    case 181:
      if (lookahead == 'i') ADVANCE(145);
      END_STATE();
    case 182:
      if (lookahead == 'i') ADVANCE(204);
      END_STATE();
    case 183:
      if (lookahead == 'i') ADVANCE(56);
      END_STATE();
    case 184:
      if (lookahead == 'i') ADVANCE(317);
      END_STATE();
    case 185:
      if (lookahead == 'i') ADVANCE(322);
      END_STATE();
    case 186:
      if (lookahead == 'i') ADVANCE(256);
      END_STATE();
    case 187:
      if (lookahead == 'i') ADVANCE(260);
      END_STATE();
    case 188:
      if (lookahead == 'i') ADVANCE(358);
      END_STATE();
    case 189:
      if (lookahead == 'i') ADVANCE(250);
      END_STATE();
    case 190:
      if (lookahead == 'i') ADVANCE(405);
      END_STATE();
    case 191:
      if (lookahead == 'i') ADVANCE(285);
      END_STATE();
    case 192:
      if (lookahead == 'i') ADVANCE(158);
      END_STATE();
    case 193:
      if (lookahead == 'i') ADVANCE(122);
      END_STATE();
    case 194:
      if (lookahead == 'i') ADVANCE(341);
      END_STATE();
    case 195:
      if (lookahead == 'i') ADVANCE(342);
      END_STATE();
    case 196:
      if (lookahead == 'j') ADVANCE(118);
      END_STATE();
    case 197:
      if (lookahead == 'j') ADVANCE(137);
      END_STATE();
    case 198:
      if (lookahead == 'k') ADVANCE(622);
      END_STATE();
    case 199:
      if (lookahead == 'k') ADVANCE(115);
      END_STATE();
    case 200:
      if (lookahead == 'k') ADVANCE(326);
      END_STATE();
    case 201:
      if (lookahead == 'k') ADVANCE(130);
      END_STATE();
    case 202:
      if (lookahead == 'l') ADVANCE(136);
      if (lookahead == 'r') ADVANCE(336);
      END_STATE();
    case 203:
      if (lookahead == 'l') ADVANCE(664);
      END_STATE();
    case 204:
      if (lookahead == 'l') ADVANCE(715);
      END_STATE();
    case 205:
      if (lookahead == 'l') ADVANCE(718);
      END_STATE();
    case 206:
      if (lookahead == 'l') ADVANCE(720);
      END_STATE();
    case 207:
      if (lookahead == 'l') ADVANCE(263);
      END_STATE();
    case 208:
      if (lookahead == 'l') ADVANCE(393);
      END_STATE();
    case 209:
      if (lookahead == 'l') ADVANCE(33);
      END_STATE();
    case 210:
      if (lookahead == 'l') ADVANCE(194);
      END_STATE();
    case 211:
      if (lookahead == 'l') ADVANCE(94);
      END_STATE();
    case 212:
      if (lookahead == 'l') ADVANCE(97);
      END_STATE();
    case 213:
      if (lookahead == 'l') ADVANCE(355);
      END_STATE();
    case 214:
      if (lookahead == 'l') ADVANCE(124);
      END_STATE();
    case 215:
      if (lookahead == 'l') ADVANCE(117);
      END_STATE();
    case 216:
      if (lookahead == 'l') ADVANCE(106);
      END_STATE();
    case 217:
      if (lookahead == 'l') ADVANCE(190);
      END_STATE();
    case 218:
      if (lookahead == 'l') ADVANCE(38);
      END_STATE();
    case 219:
      if (lookahead == 'l') ADVANCE(195);
      END_STATE();
    case 220:
      if (lookahead == 'm') ADVANCE(652);
      END_STATE();
    case 221:
      if (lookahead == 'm') ADVANCE(705);
      END_STATE();
    case 222:
      if (lookahead == 'm') ADVANCE(666);
      END_STATE();
    case 223:
      if (lookahead == 'm') ADVANCE(283);
      if (lookahead == 'n') ADVANCE(76);
      if (lookahead == 's') ADVANCE(60);
      if (lookahead == 'x') ADVANCE(373);
      END_STATE();
    case 224:
      if (lookahead == 'm') ADVANCE(230);
      END_STATE();
    case 225:
      if (lookahead == 'm') ADVANCE(287);
      END_STATE();
    case 226:
      if (lookahead == 'm') ADVANCE(54);
      END_STATE();
    case 227:
      if (lookahead == 'm') ADVANCE(205);
      END_STATE();
    case 228:
      if (lookahead == 'm') ADVANCE(206);
      END_STATE();
    case 229:
      if (lookahead == 'm') ADVANCE(93);
      if (lookahead == 't') ADVANCE(212);
      END_STATE();
    case 230:
      if (lookahead == 'm') ADVANCE(139);
      END_STATE();
    case 231:
      if (lookahead == 'm') ADVANCE(41);
      END_STATE();
    case 232:
      if (lookahead == 'm') ADVANCE(42);
      END_STATE();
    case 233:
      if (lookahead == 'm') ADVANCE(43);
      END_STATE();
    case 234:
      if (lookahead == 'm') ADVANCE(141);
      END_STATE();
    case 235:
      if (lookahead == 'n') ADVANCE(157);
      END_STATE();
    case 236:
      if (lookahead == 'n') ADVANCE(691);
      END_STATE();
    case 237:
      if (lookahead == 'n') ADVANCE(626);
      END_STATE();
    case 238:
      if (lookahead == 'n') ADVANCE(9);
      END_STATE();
    case 239:
      if (lookahead == 'n') ADVANCE(82);
      END_STATE();
    case 240:
      if (lookahead == 'n') ADVANCE(161);
      if (lookahead == 'p') ADVANCE(376);
      END_STATE();
    case 241:
      if (lookahead == 'n') ADVANCE(386);
      END_STATE();
    case 242:
      if (lookahead == 'n') ADVANCE(64);
      END_STATE();
    case 243:
      if (lookahead == 'n') ADVANCE(160);
      END_STATE();
    case 244:
      if (lookahead == 'n') ADVANCE(91);
      END_STATE();
    case 245:
      if (lookahead == 'n') ADVANCE(267);
      if (lookahead == 'p') ADVANCE(288);
      if (lookahead == 'r') ADVANCE(203);
      END_STATE();
    case 246:
      if (lookahead == 'n') ADVANCE(81);
      END_STATE();
    case 247:
      if (lookahead == 'n') ADVANCE(394);
      END_STATE();
    case 248:
      if (lookahead == 'n') ADVANCE(259);
      END_STATE();
    case 249:
      if (lookahead == 'n') ADVANCE(95);
      END_STATE();
    case 250:
      if (lookahead == 'n') ADVANCE(353);
      END_STATE();
    case 251:
      if (lookahead == 'n') ADVANCE(354);
      END_STATE();
    case 252:
      if (lookahead == 'n') ADVANCE(382);
      END_STATE();
    case 253:
      if (lookahead == 'n') ADVANCE(360);
      END_STATE();
    case 254:
      if (lookahead == 'n') ADVANCE(107);
      END_STATE();
    case 255:
      if (lookahead == 'n') ADVANCE(62);
      END_STATE();
    case 256:
      if (lookahead == 'n') ADVANCE(68);
      END_STATE();
    case 257:
      if (lookahead == 'n') ADVANCE(277);
      END_STATE();
    case 258:
      if (lookahead == 'o') ADVANCE(399);
      END_STATE();
    case 259:
      if (lookahead == 'o') ADVANCE(725);
      END_STATE();
    case 260:
      if (lookahead == 'o') ADVANCE(668);
      END_STATE();
    case 261:
      if (lookahead == 'o') ADVANCE(178);
      if (lookahead == 's') ADVANCE(266);
      END_STATE();
    case 262:
      if (lookahead == 'o') ADVANCE(48);
      END_STATE();
    case 263:
      if (lookahead == 'o') ADVANCE(57);
      END_STATE();
    case 264:
      if (lookahead == 'o') ADVANCE(35);
      END_STATE();
    case 265:
      if (lookahead == 'o') ADVANCE(221);
      END_STATE();
    case 266:
      if (lookahead == 'o') ADVANCE(238);
      END_STATE();
    case 267:
      if (lookahead == 'o') ADVANCE(303);
      END_STATE();
    case 268:
      if (lookahead == 'o') ADVANCE(389);
      END_STATE();
    case 269:
      if (lookahead == 'o') ADVANCE(397);
      END_STATE();
    case 270:
      if (lookahead == 'o') ADVANCE(116);
      END_STATE();
    case 271:
      if (lookahead == 'o') ADVANCE(312);
      END_STATE();
    case 272:
      if (lookahead == 'o') ADVANCE(304);
      END_STATE();
    case 273:
      if (lookahead == 'o') ADVANCE(315);
      END_STATE();
    case 274:
      if (lookahead == 'o') ADVANCE(201);
      END_STATE();
    case 275:
      if (lookahead == 'o') ADVANCE(249);
      END_STATE();
    case 276:
      if (lookahead == 'o') ADVANCE(87);
      END_STATE();
    case 277:
      if (lookahead == 'o') ADVANCE(254);
      END_STATE();
    case 278:
      if (lookahead == 'o') ADVANCE(318);
      END_STATE();
    case 279:
      if (lookahead == 'o') ADVANCE(319);
      END_STATE();
    case 280:
      if (lookahead == 'p') ADVANCE(656);
      END_STATE();
    case 281:
      if (lookahead == 'p') ADVANCE(724);
      END_STATE();
    case 282:
      if (lookahead == 'p') ADVANCE(148);
      END_STATE();
    case 283:
      if (lookahead == 'p') ADVANCE(348);
      END_STATE();
    case 284:
      if (lookahead == 'p') ADVANCE(98);
      END_STATE();
    case 285:
      if (lookahead == 'p') ADVANCE(363);
      END_STATE();
    case 286:
      if (lookahead == 'p') ADVANCE(104);
      END_STATE();
    case 287:
      if (lookahead == 'p') ADVANCE(218);
      END_STATE();
    case 288:
      if (lookahead == 'p') ADVANCE(123);
      END_STATE();
    case 289:
      if (lookahead == 'q') ADVANCE(708);
      END_STATE();
    case 290:
      if (lookahead == 'q') ADVANCE(685);
      END_STATE();
    case 291:
      if (lookahead == 'r') ADVANCE(638);
      END_STATE();
    case 292:
      if (lookahead == 'r') ADVANCE(52);
      END_STATE();
    case 293:
      if (lookahead == 'r') ADVANCE(700);
      END_STATE();
    case 294:
      if (lookahead == 'r') ADVANCE(722);
      END_STATE();
    case 295:
      if (lookahead == 'r') ADVANCE(675);
      END_STATE();
    case 296:
      if (lookahead == 'r') ADVANCE(634);
      END_STATE();
    case 297:
      if (lookahead == 'r') ADVANCE(697);
      END_STATE();
    case 298:
      if (lookahead == 'r') ADVANCE(146);
      END_STATE();
    case 299:
      if (lookahead == 'r') ADVANCE(189);
      END_STATE();
    case 300:
      if (lookahead == 'r') ADVANCE(78);
      END_STATE();
    case 301:
      if (lookahead == 'r') ADVANCE(173);
      END_STATE();
    case 302:
      if (lookahead == 'r') ADVANCE(46);
      END_STATE();
    case 303:
      if (lookahead == 'r') ADVANCE(88);
      END_STATE();
    case 304:
      if (lookahead == 'r') ADVANCE(231);
      END_STATE();
    case 305:
      if (lookahead == 'r') ADVANCE(268);
      END_STATE();
    case 306:
      if (lookahead == 'r') ADVANCE(191);
      END_STATE();
    case 307:
      if (lookahead == 'r') ADVANCE(327);
      END_STATE();
    case 308:
      if (lookahead == 'r') ADVANCE(328);
      END_STATE();
    case 309:
      if (lookahead == 'r') ADVANCE(183);
      END_STATE();
    case 310:
      if (lookahead == 'r') ADVANCE(343);
      END_STATE();
    case 311:
      if (lookahead == 'r') ADVANCE(135);
      END_STATE();
    case 312:
      if (lookahead == 'r') ADVANCE(357);
      END_STATE();
    case 313:
      if (lookahead == 'r') ADVANCE(125);
      END_STATE();
    case 314:
      if (lookahead == 'r') ADVANCE(32);
      END_STATE();
    case 315:
      if (lookahead == 'r') ADVANCE(85);
      END_STATE();
    case 316:
      if (lookahead == 'r') ADVANCE(40);
      END_STATE();
    case 317:
      if (lookahead == 'r') ADVANCE(340);
      END_STATE();
    case 318:
      if (lookahead == 'r') ADVANCE(232);
      END_STATE();
    case 319:
      if (lookahead == 'r') ADVANCE(233);
      END_STATE();
    case 320:
      if (lookahead == 's') ADVANCE(632);
      END_STATE();
    case 321:
      if (lookahead == 's') ADVANCE(684);
      END_STATE();
    case 322:
      if (lookahead == 's') ADVANCE(695);
      END_STATE();
    case 323:
      if (lookahead == 's') ADVANCE(660);
      END_STATE();
    case 324:
      if (lookahead == 's') ADVANCE(712);
      END_STATE();
    case 325:
      if (lookahead == 's') ADVANCE(673);
      END_STATE();
    case 326:
      if (lookahead == 's') ADVANCE(696);
      END_STATE();
    case 327:
      if (lookahead == 's') ADVANCE(698);
      END_STATE();
    case 328:
      if (lookahead == 's') ADVANCE(717);
      END_STATE();
    case 329:
      if (lookahead == 's') ADVANCE(719);
      END_STATE();
    case 330:
      if (lookahead == 's') ADVANCE(168);
      END_STATE();
    case 331:
      if (lookahead == 's') ADVANCE(71);
      END_STATE();
    case 332:
      if (lookahead == 's') ADVANCE(349);
      END_STATE();
    case 333:
      if (lookahead == 's') ADVANCE(248);
      END_STATE();
    case 334:
      if (lookahead == 's') ADVANCE(175);
      END_STATE();
    case 335:
      if (lookahead == 's') ADVANCE(174);
      END_STATE();
    case 336:
      if (lookahead == 's') ADVANCE(350);
      END_STATE();
    case 337:
      if (lookahead == 's') ADVANCE(323);
      END_STATE();
    case 338:
      if (lookahead == 's') ADVANCE(351);
      END_STATE();
    case 339:
      if (lookahead == 's') ADVANCE(352);
      END_STATE();
    case 340:
      if (lookahead == 's') ADVANCE(356);
      END_STATE();
    case 341:
      if (lookahead == 's') ADVANCE(359);
      END_STATE();
    case 342:
      if (lookahead == 's') ADVANCE(366);
      END_STATE();
    case 343:
      if (lookahead == 's') ADVANCE(126);
      END_STATE();
    case 344:
      if (lookahead == 's') ADVANCE(271);
      END_STATE();
    case 345:
      if (lookahead == 's') ADVANCE(73);
      END_STATE();
    case 346:
      if (lookahead == 't') ADVANCE(676);
      END_STATE();
    case 347:
      if (lookahead == 't') ADVANCE(8);
      END_STATE();
    case 348:
      if (lookahead == 't') ADVANCE(400);
      END_STATE();
    case 349:
      if (lookahead == 't') ADVANCE(693);
      END_STATE();
    case 350:
      if (lookahead == 't') ADVANCE(687);
      END_STATE();
    case 351:
      if (lookahead == 't') ADVANCE(699);
      END_STATE();
    case 352:
      if (lookahead == 't') ADVANCE(706);
      END_STATE();
    case 353:
      if (lookahead == 't') ADVANCE(704);
      END_STATE();
    case 354:
      if (lookahead == 't') ADVANCE(624);
      END_STATE();
    case 355:
      if (lookahead == 't') ADVANCE(678);
      END_STATE();
    case 356:
      if (lookahead == 't') ADVANCE(674);
      END_STATE();
    case 357:
      if (lookahead == 't') ADVANCE(680);
      END_STATE();
    case 358:
      if (lookahead == 't') ADVANCE(689);
      END_STATE();
    case 359:
      if (lookahead == 't') ADVANCE(701);
      END_STATE();
    case 360:
      if (lookahead == 't') ADVANCE(723);
      END_STATE();
    case 361:
      if (lookahead == 't') ADVANCE(1);
      END_STATE();
    case 362:
      if (lookahead == 't') ADVANCE(688);
      END_STATE();
    case 363:
      if (lookahead == 't') ADVANCE(692);
      END_STATE();
    case 364:
      if (lookahead == 't') ADVANCE(711);
      END_STATE();
    case 365:
      if (lookahead == 't') ADVANCE(686);
      END_STATE();
    case 366:
      if (lookahead == 't') ADVANCE(721);
      END_STATE();
    case 367:
      if (lookahead == 't') ADVANCE(19);
      END_STATE();
    case 368:
      if (lookahead == 't') ADVANCE(344);
      END_STATE();
    case 369:
      if (lookahead == 't') ADVANCE(167);
      END_STATE();
    case 370:
      if (lookahead == 't') ADVANCE(90);
      END_STATE();
    case 371:
      if (lookahead == 't') ADVANCE(150);
      END_STATE();
    case 372:
      if (lookahead == 't') ADVANCE(163);
      END_STATE();
    case 373:
      if (lookahead == 't') ADVANCE(119);
      END_STATE();
    case 374:
      if (lookahead == 't') ADVANCE(58);
      END_STATE();
    case 375:
      if (lookahead == 't') ADVANCE(270);
      END_STATE();
    case 376:
      if (lookahead == 't') ADVANCE(31);
      END_STATE();
    case 377:
      if (lookahead == 't') ADVANCE(227);
      END_STATE();
    case 378:
      if (lookahead == 't') ADVANCE(34);
      END_STATE();
    case 379:
      if (lookahead == 't') ADVANCE(228);
      END_STATE();
    case 380:
      if (lookahead == 't') ADVANCE(180);
      END_STATE();
    case 381:
      if (lookahead == 't') ADVANCE(274);
      END_STATE();
    case 382:
      if (lookahead == 't') ADVANCE(182);
      END_STATE();
    case 383:
      if (lookahead == 't') ADVANCE(187);
      END_STATE();
    case 384:
      if (lookahead == 't') ADVANCE(110);
      END_STATE();
    case 385:
      if (lookahead == 't') ADVANCE(134);
      END_STATE();
    case 386:
      if (lookahead == 't') ADVANCE(127);
      END_STATE();
    case 387:
      if (lookahead == 'u') ADVANCE(153);
      END_STATE();
    case 388:
      if (lookahead == 'u') ADVANCE(213);
      END_STATE();
    case 389:
      if (lookahead == 'u') ADVANCE(280);
      END_STATE();
    case 390:
      if (lookahead == 'u') ADVANCE(226);
      END_STATE();
    case 391:
      if (lookahead == 'u') ADVANCE(302);
      END_STATE();
    case 392:
      if (lookahead == 'u') ADVANCE(255);
      END_STATE();
    case 393:
      if (lookahead == 'u') ADVANCE(86);
      END_STATE();
    case 394:
      if (lookahead == 'u') ADVANCE(234);
      END_STATE();
    case 395:
      if (lookahead == 'u') ADVANCE(338);
      END_STATE();
    case 396:
      if (lookahead == 'u') ADVANCE(339);
      END_STATE();
    case 397:
      if (lookahead == 'u') ADVANCE(253);
      END_STATE();
    case 398:
      if (lookahead == 'v') ADVANCE(133);
      END_STATE();
    case 399:
      if (lookahead == 'w') ADVANCE(654);
      END_STATE();
    case 400:
      if (lookahead == 'y') ADVANCE(640);
      END_STATE();
    case 401:
      if (lookahead == 'y') ADVANCE(710);
      END_STATE();
    case 402:
      if (lookahead == 'y') ADVANCE(682);
      END_STATE();
    case 403:
      if (lookahead == 'y') ADVANCE(72);
      END_STATE();
    case 404:
      if (lookahead == 'z') ADVANCE(142);
      END_STATE();
    case 405:
      if (lookahead == 'z') ADVANCE(102);
      END_STATE();
    case 406:
      if (lookahead == '}') ADVANCE(615);
      END_STATE();
    case 407:
      if (lookahead == '}') ADVANCE(617);
      END_STATE();
    case 408:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(412);
      END_STATE();
    case 409:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(424);
      END_STATE();
    case 410:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(408);
      END_STATE();
    case 411:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(409);
      END_STATE();
    case 412:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(414);
      END_STATE();
    case 413:
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(417);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(436);
      END_STATE();
    case 414:
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(411);
      END_STATE();
    case 415:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(415);
      if (lookahead != 0 &&
          lookahead != '%' &&
          lookahead != '&' &&
          lookahead != '<' &&
          lookahead != '>' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(613);
      END_STATE();
    case 416:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(421);
      if (lookahead != 0 &&
          lookahead != '>') ADVANCE(422);
      END_STATE();
    case 417:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(441);
      END_STATE();
    case 418:
      if (eof) ADVANCE(419);
      if (lookahead == '&') ADVANCE(4);
      if (lookahead == '<') ADVANCE(425);
      if (lookahead == '{') ADVANCE(6);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(418)
      if (lookahead != 0 &&
          lookahead != '%' &&
          lookahead != '>' &&
          lookahead != '}') ADVANCE(613);
      END_STATE();
    case 419:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 420:
      ACCEPT_TOKEN(anon_sym_LT_BANG);
      END_STATE();
    case 421:
      ACCEPT_TOKEN(aux_sym_doctype_token1);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(421);
      if (lookahead != 0 &&
          lookahead != '>') ADVANCE(422);
      END_STATE();
    case 422:
      ACCEPT_TOKEN(aux_sym_doctype_token1);
      if (lookahead != 0 &&
          lookahead != '>') ADVANCE(422);
      END_STATE();
    case 423:
      ACCEPT_TOKEN(anon_sym_GT);
      END_STATE();
    case 424:
      ACCEPT_TOKEN(sym__doctype);
      END_STATE();
    case 425:
      ACCEPT_TOKEN(anon_sym_LT);
      if (lookahead == '!') ADVANCE(420);
      if (lookahead == '/') ADVANCE(427);
      END_STATE();
    case 426:
      ACCEPT_TOKEN(anon_sym_SLASH_GT);
      END_STATE();
    case 427:
      ACCEPT_TOKEN(anon_sym_LT_SLASH);
      END_STATE();
    case 428:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 429:
      ACCEPT_TOKEN(sym_attribute_name);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '\'' &&
          lookahead != '/' &&
          (lookahead < '<' || '>' < lookahead)) ADVANCE(429);
      END_STATE();
    case 430:
      ACCEPT_TOKEN(sym_attribute_value);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '\'' &&
          (lookahead < '<' || '>' < lookahead)) ADVANCE(430);
      END_STATE();
    case 431:
      ACCEPT_TOKEN(sym_entity);
      END_STATE();
    case 432:
      ACCEPT_TOKEN(sym_entity);
      if (lookahead == ';') ADVANCE(431);
      END_STATE();
    case 433:
      ACCEPT_TOKEN(sym_entity);
      if (lookahead == ';') ADVANCE(431);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(432);
      END_STATE();
    case 434:
      ACCEPT_TOKEN(sym_entity);
      if (lookahead == ';') ADVANCE(431);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(433);
      END_STATE();
    case 435:
      ACCEPT_TOKEN(sym_entity);
      if (lookahead == ';') ADVANCE(431);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(434);
      END_STATE();
    case 436:
      ACCEPT_TOKEN(sym_entity);
      if (lookahead == ';') ADVANCE(431);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(435);
      END_STATE();
    case 437:
      ACCEPT_TOKEN(sym_entity);
      if (lookahead == ';') ADVANCE(431);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(432);
      END_STATE();
    case 438:
      ACCEPT_TOKEN(sym_entity);
      if (lookahead == ';') ADVANCE(431);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(437);
      END_STATE();
    case 439:
      ACCEPT_TOKEN(sym_entity);
      if (lookahead == ';') ADVANCE(431);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(438);
      END_STATE();
    case 440:
      ACCEPT_TOKEN(sym_entity);
      if (lookahead == ';') ADVANCE(431);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(439);
      END_STATE();
    case 441:
      ACCEPT_TOKEN(sym_entity);
      if (lookahead == ';') ADVANCE(431);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(440);
      END_STATE();
    case 442:
      ACCEPT_TOKEN(sym_entity);
      if (lookahead == ';') ADVANCE(431);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(432);
      END_STATE();
    case 443:
      ACCEPT_TOKEN(sym_entity);
      if (lookahead == ';') ADVANCE(431);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(442);
      END_STATE();
    case 444:
      ACCEPT_TOKEN(sym_entity);
      if (lookahead == ';') ADVANCE(431);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(443);
      END_STATE();
    case 445:
      ACCEPT_TOKEN(sym_entity);
      if (lookahead == ';') ADVANCE(431);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(444);
      END_STATE();
    case 446:
      ACCEPT_TOKEN(sym_entity);
      if (lookahead == ';') ADVANCE(431);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(445);
      END_STATE();
    case 447:
      ACCEPT_TOKEN(sym_entity);
      if (lookahead == ';') ADVANCE(431);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(446);
      END_STATE();
    case 448:
      ACCEPT_TOKEN(sym_entity);
      if (lookahead == ';') ADVANCE(431);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(447);
      END_STATE();
    case 449:
      ACCEPT_TOKEN(sym_entity);
      if (lookahead == ';') ADVANCE(431);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(448);
      END_STATE();
    case 450:
      ACCEPT_TOKEN(sym_entity);
      if (lookahead == ';') ADVANCE(431);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(449);
      END_STATE();
    case 451:
      ACCEPT_TOKEN(sym_entity);
      if (lookahead == ';') ADVANCE(431);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(450);
      END_STATE();
    case 452:
      ACCEPT_TOKEN(sym_entity);
      if (lookahead == ';') ADVANCE(431);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(451);
      END_STATE();
    case 453:
      ACCEPT_TOKEN(sym_entity);
      if (lookahead == ';') ADVANCE(431);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(452);
      END_STATE();
    case 454:
      ACCEPT_TOKEN(sym_entity);
      if (lookahead == ';') ADVANCE(431);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(453);
      END_STATE();
    case 455:
      ACCEPT_TOKEN(sym_entity);
      if (lookahead == ';') ADVANCE(431);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(454);
      END_STATE();
    case 456:
      ACCEPT_TOKEN(sym_entity);
      if (lookahead == ';') ADVANCE(431);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(455);
      END_STATE();
    case 457:
      ACCEPT_TOKEN(sym_entity);
      if (lookahead == ';') ADVANCE(431);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(456);
      END_STATE();
    case 458:
      ACCEPT_TOKEN(sym_entity);
      if (lookahead == ';') ADVANCE(431);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(457);
      END_STATE();
    case 459:
      ACCEPT_TOKEN(sym_entity);
      if (lookahead == ';') ADVANCE(431);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(458);
      END_STATE();
    case 460:
      ACCEPT_TOKEN(sym_entity);
      if (lookahead == ';') ADVANCE(431);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(459);
      END_STATE();
    case 461:
      ACCEPT_TOKEN(sym_entity);
      if (lookahead == ';') ADVANCE(431);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(460);
      END_STATE();
    case 462:
      ACCEPT_TOKEN(sym_entity);
      if (lookahead == ';') ADVANCE(431);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(461);
      END_STATE();
    case 463:
      ACCEPT_TOKEN(sym_entity);
      if (lookahead == ';') ADVANCE(431);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(462);
      END_STATE();
    case 464:
      ACCEPT_TOKEN(sym_entity);
      if (lookahead == ';') ADVANCE(431);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(463);
      END_STATE();
    case 465:
      ACCEPT_TOKEN(sym_entity);
      if (lookahead == ';') ADVANCE(431);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(464);
      END_STATE();
    case 466:
      ACCEPT_TOKEN(sym_entity);
      if (lookahead == ';') ADVANCE(431);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(465);
      END_STATE();
    case 467:
      ACCEPT_TOKEN(sym_entity);
      if (lookahead == ';') ADVANCE(431);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(466);
      END_STATE();
    case 468:
      ACCEPT_TOKEN(sym_entity);
      if (lookahead == ';') ADVANCE(431);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(467);
      END_STATE();
    case 469:
      ACCEPT_TOKEN(sym_entity);
      if (lookahead == ';') ADVANCE(431);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(468);
      END_STATE();
    case 470:
      ACCEPT_TOKEN(sym_entity);
      if (lookahead == ';') ADVANCE(431);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(469);
      END_STATE();
    case 471:
      ACCEPT_TOKEN(anon_sym_SQUOTE);
      END_STATE();
    case 472:
      ACCEPT_TOKEN(aux_sym_quoted_attribute_value_token1);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(472);
      if (lookahead != 0 &&
          lookahead != '\'') ADVANCE(473);
      END_STATE();
    case 473:
      ACCEPT_TOKEN(aux_sym_quoted_attribute_value_token1);
      if (lookahead != 0 &&
          lookahead != '\'') ADVANCE(473);
      END_STATE();
    case 474:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 475:
      ACCEPT_TOKEN(aux_sym_quoted_attribute_value_token2);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(475);
      if (lookahead != 0 &&
          lookahead != '"') ADVANCE(476);
      END_STATE();
    case 476:
      ACCEPT_TOKEN(aux_sym_quoted_attribute_value_token2);
      if (lookahead != 0 &&
          lookahead != '"') ADVANCE(476);
      END_STATE();
    case 477:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == ' ') ADVANCE(17);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(415);
      if (lookahead != 0 &&
          lookahead != '%' &&
          lookahead != '&' &&
          lookahead != '<' &&
          lookahead != '>' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(613);
      END_STATE();
    case 478:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == '-') ADVANCE(603);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(415);
      if (lookahead != 0 &&
          lookahead != '%' &&
          lookahead != '&' &&
          lookahead != '<' &&
          lookahead != '>' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(613);
      END_STATE();
    case 479:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == '[') ADVANCE(571);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(415);
      if (lookahead != 0 &&
          lookahead != '%' &&
          lookahead != '&' &&
          lookahead != '<' &&
          lookahead != '>' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(613);
      END_STATE();
    case 480:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == ']') ADVANCE(619);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(415);
      if (lookahead != 0 &&
          lookahead != '%' &&
          lookahead != '&' &&
          lookahead != '<' &&
          lookahead != '>' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(613);
      END_STATE();
    case 481:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 'a') ADVANCE(502);
      if (lookahead == 'r') ADVANCE(518);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(415);
      if (lookahead != 0 &&
          lookahead != '%' &&
          lookahead != '&' &&
          lookahead != '<' &&
          lookahead != '>' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(613);
      END_STATE();
    case 482:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 'a') ADVANCE(498);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(415);
      if (lookahead != 0 &&
          lookahead != '%' &&
          lookahead != '&' &&
          lookahead != '<' &&
          lookahead != '>' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(613);
      END_STATE();
    case 483:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 'a') ADVANCE(532);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(415);
      if (lookahead != 0 &&
          lookahead != '%' &&
          lookahead != '&' &&
          lookahead != '<' &&
          lookahead != '>' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(613);
      END_STATE();
    case 484:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 'a') ADVANCE(561);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(415);
      if (lookahead != 0 &&
          lookahead != '%' &&
          lookahead != '&' &&
          lookahead != '<' &&
          lookahead != '>' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(613);
      END_STATE();
    case 485:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 'a') ADVANCE(578);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(415);
      if (lookahead != 0 &&
          lookahead != '%' &&
          lookahead != '&' &&
          lookahead != '<' &&
          lookahead != '>' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(613);
      END_STATE();
    case 486:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 'a') ADVANCE(595);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(415);
      if (lookahead != 0 &&
          lookahead != '%' &&
          lookahead != '&' &&
          lookahead != '<' &&
          lookahead != '>' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(613);
      END_STATE();
    case 487:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 'a') ADVANCE(596);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(415);
      if (lookahead != 0 &&
          lookahead != '%' &&
          lookahead != '&' &&
          lookahead != '<' &&
          lookahead != '>' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(613);
      END_STATE();
    case 488:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 'a') ADVANCE(604);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(415);
      if (lookahead != 0 &&
          lookahead != '%' &&
          lookahead != '&' &&
          lookahead != '<' &&
          lookahead != '>' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(613);
      END_STATE();
    case 489:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 'b') ADVANCE(542);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(415);
      if (lookahead != 0 &&
          lookahead != '%' &&
          lookahead != '&' &&
          lookahead != '<' &&
          lookahead != '>' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(613);
      END_STATE();
    case 490:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 'b') ADVANCE(607);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(415);
      if (lookahead != 0 &&
          lookahead != '%' &&
          lookahead != '&' &&
          lookahead != '<' &&
          lookahead != '>' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(613);
      END_STATE();
    case 491:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 'b') ADVANCE(486);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(415);
      if (lookahead != 0 &&
          lookahead != '%' &&
          lookahead != '&' &&
          lookahead != '<' &&
          lookahead != '>' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(613);
      END_STATE();
    case 492:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 'b') ADVANCE(543);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(415);
      if (lookahead != 0 &&
          lookahead != '%' &&
          lookahead != '&' &&
          lookahead != '<' &&
          lookahead != '>' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(613);
      END_STATE();
    case 493:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 'c') ADVANCE(544);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(415);
      if (lookahead != 0 &&
          lookahead != '%' &&
          lookahead != '&' &&
          lookahead != '<' &&
          lookahead != '>' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(613);
      END_STATE();
    case 494:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 'c') ADVANCE(612);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(415);
      if (lookahead != 0 &&
          lookahead != '%' &&
          lookahead != '&' &&
          lookahead != '<' &&
          lookahead != '>' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(613);
      END_STATE();
    case 495:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 'c') ADVANCE(550);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(415);
      if (lookahead != 0 &&
          lookahead != '%' &&
          lookahead != '&' &&
          lookahead != '<' &&
          lookahead != '>' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(613);
      END_STATE();
    case 496:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 'c') ADVANCE(485);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(415);
      if (lookahead != 0 &&
          lookahead != '%' &&
          lookahead != '&' &&
          lookahead != '<' &&
          lookahead != '>' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(613);
      END_STATE();
    case 497:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 'c') ADVANCE(593);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(415);
      if (lookahead != 0 &&
          lookahead != '%' &&
          lookahead != '&' &&
          lookahead != '<' &&
          lookahead != '>' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(613);
      END_STATE();
    case 498:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 'c') ADVANCE(526);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(415);
      if (lookahead != 0 &&
          lookahead != '%' &&
          lookahead != '&' &&
          lookahead != '<' &&
          lookahead != '>' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(613);
      END_STATE();
    case 499:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 'c') ADVANCE(594);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(415);
      if (lookahead != 0 &&
          lookahead != '%' &&
          lookahead != '&' &&
          lookahead != '<' &&
          lookahead != '>' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(613);
      END_STATE();
    case 500:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 'c') ADVANCE(552);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(415);
      if (lookahead != 0 &&
          lookahead != '%' &&
          lookahead != '&' &&
          lookahead != '<' &&
          lookahead != '>' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(613);
      END_STATE();
    case 501:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 'd') ADVANCE(479);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(415);
      if (lookahead != 0 &&
          lookahead != '%' &&
          lookahead != '&' &&
          lookahead != '<' &&
          lookahead != '>' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(613);
      END_STATE();
    case 502:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 'd') ADVANCE(651);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(415);
      if (lookahead != 0 &&
          lookahead != '%' &&
          lookahead != '&' &&
          lookahead != '<' &&
          lookahead != '>' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(613);
      END_STATE();
    case 503:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 'd') ADVANCE(647);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(415);
      if (lookahead != 0 &&
          lookahead != '%' &&
          lookahead != '&' &&
          lookahead != '<' &&
          lookahead != '>' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(613);
      END_STATE();
    case 504:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 'd') ADVANCE(586);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(415);
      if (lookahead != 0 &&
          lookahead != '%' &&
          lookahead != '&' &&
          lookahead != '<' &&
          lookahead != '>' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(613);
      END_STATE();
    case 505:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 'd') ADVANCE(597);
      if (lookahead == 't') ADVANCE(535);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(415);
      if (lookahead != 0 &&
          lookahead != '%' &&
          lookahead != '&' &&
          lookahead != '<' &&
          lookahead != '>' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(613);
      END_STATE();
    case 506:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 'd') ADVANCE(511);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(415);
      if (lookahead != 0 &&
          lookahead != '%' &&
          lookahead != '&' &&
          lookahead != '<' &&
          lookahead != '>' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(613);
      END_STATE();
    case 507:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 'e') ADVANCE(490);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(415);
      if (lookahead != 0 &&
          lookahead != '%' &&
          lookahead != '&' &&
          lookahead != '<' &&
          lookahead != '>' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(613);
      END_STATE();
    case 508:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 'e') ADVANCE(533);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(415);
      if (lookahead != 0 &&
          lookahead != '%' &&
          lookahead != '&' &&
          lookahead != '<' &&
          lookahead != '>' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(613);
      END_STATE();
    case 509:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 'e') ADVANCE(562);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(415);
      if (lookahead != 0 &&
          lookahead != '%' &&
          lookahead != '&' &&
          lookahead != '<' &&
          lookahead != '>' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(613);
      END_STATE();
    case 510:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 'e') ADVANCE(629);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(415);
      if (lookahead != 0 &&
          lookahead != '%' &&
          lookahead != '&' &&
          lookahead != '<' &&
          lookahead != '>' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(613);
      END_STATE();
    case 511:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 'e') ADVANCE(649);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(415);
      if (lookahead != 0 &&
          lookahead != '%' &&
          lookahead != '&' &&
          lookahead != '<' &&
          lookahead != '>' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(613);
      END_STATE();
    case 512:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 'e') ADVANCE(621);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(415);
      if (lookahead != 0 &&
          lookahead != '%' &&
          lookahead != '&' &&
          lookahead != '<' &&
          lookahead != '>' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(613);
      END_STATE();
    case 513:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 'e') ADVANCE(659);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(415);
      if (lookahead != 0 &&
          lookahead != '%' &&
          lookahead != '&' &&
          lookahead != '<' &&
          lookahead != '>' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(613);
      END_STATE();
    case 514:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 'e') ADVANCE(557);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(415);
      if (lookahead != 0 &&
          lookahead != '%' &&
          lookahead != '&' &&
          lookahead != '<' &&
          lookahead != '>' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(613);
      END_STATE();
    case 515:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 'e') ADVANCE(588);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(415);
      if (lookahead != 0 &&
          lookahead != '%' &&
          lookahead != '&' &&
          lookahead != '<' &&
          lookahead != '>' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(613);
      END_STATE();
    case 516:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 'e') ADVANCE(563);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(415);
      if (lookahead != 0 &&
          lookahead != '%' &&
          lookahead != '&' &&
          lookahead != '<' &&
          lookahead != '>' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(613);
      END_STATE();
    case 517:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 'e') ADVANCE(583);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(415);
      if (lookahead != 0 &&
          lookahead != '%' &&
          lookahead != '&' &&
          lookahead != '<' &&
          lookahead != '>' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(613);
      END_STATE();
    case 518:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 'e') ADVANCE(554);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(415);
      if (lookahead != 0 &&
          lookahead != '%' &&
          lookahead != '&' &&
          lookahead != '<' &&
          lookahead != '>' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(613);
      END_STATE();
    case 519:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 'e') ADVANCE(589);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(415);
      if (lookahead != 0 &&
          lookahead != '%' &&
          lookahead != '&' &&
          lookahead != '<' &&
          lookahead != '>' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(613);
      END_STATE();
    case 520:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 'e') ADVANCE(560);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(415);
      if (lookahead != 0 &&
          lookahead != '%' &&
          lookahead != '&' &&
          lookahead != '<' &&
          lookahead != '>' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(613);
      END_STATE();
    case 521:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 'e') ADVANCE(599);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(415);
      if (lookahead != 0 &&
          lookahead != '%' &&
          lookahead != '&' &&
          lookahead != '<' &&
          lookahead != '>' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(613);
      END_STATE();
    case 522:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 'e') ADVANCE(503);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(415);
      if (lookahead != 0 &&
          lookahead != '%' &&
          lookahead != '&' &&
          lookahead != '<' &&
          lookahead != '>' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(613);
      END_STATE();
    case 523:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 'e') ADVANCE(581);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(415);
      if (lookahead != 0 &&
          lookahead != '%' &&
          lookahead != '&' &&
          lookahead != '<' &&
          lookahead != '>' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(613);
      END_STATE();
    case 524:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 'e') ADVANCE(497);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(415);
      if (lookahead != 0 &&
          lookahead != '%' &&
          lookahead != '&' &&
          lookahead != '<' &&
          lookahead != '>' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(613);
      END_STATE();
    case 525:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 'e') ADVANCE(601);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(415);
      if (lookahead != 0 &&
          lookahead != '%' &&
          lookahead != '&' &&
          lookahead != '<' &&
          lookahead != '>' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(613);
      END_STATE();
    case 526:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 'e') ADVANCE(551);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(415);
      if (lookahead != 0 &&
          lookahead != '%' &&
          lookahead != '&' &&
          lookahead != '<' &&
          lookahead != '>' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(613);
      END_STATE();
    case 527:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 'e') ADVANCE(499);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(415);
      if (lookahead != 0 &&
          lookahead != '%' &&
          lookahead != '&' &&
          lookahead != '<' &&
          lookahead != '>' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(613);
      END_STATE();
    case 528:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 'f') ADVANCE(643);
      if (lookahead == 'n') ADVANCE(645);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(415);
      if (lookahead != 0 &&
          lookahead != '%' &&
          lookahead != '&' &&
          lookahead != '<' &&
          lookahead != '>' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(613);
      END_STATE();
    case 529:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 'f') ADVANCE(478);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(415);
      if (lookahead != 0 &&
          lookahead != '%' &&
          lookahead != '&' &&
          lookahead != '<' &&
          lookahead != '>' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(613);
      END_STATE();
    case 530:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 'f') ADVANCE(637);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(415);
      if (lookahead != 0 &&
          lookahead != '%' &&
          lookahead != '&' &&
          lookahead != '<' &&
          lookahead != '>' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(613);
      END_STATE();
    case 531:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 'g') ADVANCE(631);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(415);
      if (lookahead != 0 &&
          lookahead != '%' &&
          lookahead != '&' &&
          lookahead != '<' &&
          lookahead != '>' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(613);
      END_STATE();
    case 532:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 'g') ADVANCE(663);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(415);
      if (lookahead != 0 &&
          lookahead != '%' &&
          lookahead != '&' &&
          lookahead != '<' &&
          lookahead != '>' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(613);
      END_STATE();
    case 533:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 'g') ADVANCE(584);
      if (lookahead == 's') ADVANCE(521);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(415);
      if (lookahead != 0 &&
          lookahead != '%' &&
          lookahead != '&' &&
          lookahead != '<' &&
          lookahead != '>' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(613);
      END_STATE();
    case 534:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 'g') ADVANCE(522);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(415);
      if (lookahead != 0 &&
          lookahead != '%' &&
          lookahead != '&' &&
          lookahead != '<' &&
          lookahead != '>' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(613);
      END_STATE();
    case 535:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 'h') ADVANCE(671);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(415);
      if (lookahead != 0 &&
          lookahead != '%' &&
          lookahead != '&' &&
          lookahead != '<' &&
          lookahead != '>' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(613);
      END_STATE();
    case 536:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 'h') ADVANCE(484);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(415);
      if (lookahead != 0 &&
          lookahead != '%' &&
          lookahead != '&' &&
          lookahead != '<' &&
          lookahead != '>' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(613);
      END_STATE();
    case 537:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 'h') ADVANCE(585);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(415);
      if (lookahead != 0 &&
          lookahead != '%' &&
          lookahead != '&' &&
          lookahead != '<' &&
          lookahead != '>' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(613);
      END_STATE();
    case 538:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 'i') ADVANCE(553);
      if (lookahead == 'o') ADVANCE(580);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(415);
      if (lookahead != 0 &&
          lookahead != '%' &&
          lookahead != '&' &&
          lookahead != '<' &&
          lookahead != '>' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(613);
      END_STATE();
    case 539:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 'i') ADVANCE(505);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(415);
      if (lookahead != 0 &&
          lookahead != '%' &&
          lookahead != '&' &&
          lookahead != '<' &&
          lookahead != '>' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(613);
      END_STATE();
    case 540:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 'i') ADVANCE(555);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(415);
      if (lookahead != 0 &&
          lookahead != '%' &&
          lookahead != '&' &&
          lookahead != '<' &&
          lookahead != '>' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(613);
      END_STATE();
    case 541:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 'i') ADVANCE(567);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(415);
      if (lookahead != 0 &&
          lookahead != '%' &&
          lookahead != '&' &&
          lookahead != '<' &&
          lookahead != '>' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(613);
      END_STATE();
    case 542:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 'j') ADVANCE(524);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(415);
      if (lookahead != 0 &&
          lookahead != '%' &&
          lookahead != '&' &&
          lookahead != '<' &&
          lookahead != '>' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(613);
      END_STATE();
    case 543:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 'j') ADVANCE(527);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(415);
      if (lookahead != 0 &&
          lookahead != '%' &&
          lookahead != '&' &&
          lookahead != '<' &&
          lookahead != '>' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(613);
      END_STATE();
    case 544:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 'k') ADVANCE(623);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(415);
      if (lookahead != 0 &&
          lookahead != '%' &&
          lookahead != '&' &&
          lookahead != '<' &&
          lookahead != '>' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(613);
      END_STATE();
    case 545:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 'k') ADVANCE(520);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(415);
      if (lookahead != 0 &&
          lookahead != '%' &&
          lookahead != '&' &&
          lookahead != '<' &&
          lookahead != '>' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(613);
      END_STATE();
    case 546:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 'l') ADVANCE(665);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(415);
      if (lookahead != 0 &&
          lookahead != '%' &&
          lookahead != '&' &&
          lookahead != '<' &&
          lookahead != '>' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(613);
      END_STATE();
    case 547:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 'l') ADVANCE(609);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(415);
      if (lookahead != 0 &&
          lookahead != '%' &&
          lookahead != '&' &&
          lookahead != '<' &&
          lookahead != '>' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(613);
      END_STATE();
    case 548:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 'l') ADVANCE(568);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(415);
      if (lookahead != 0 &&
          lookahead != '%' &&
          lookahead != '&' &&
          lookahead != '<' &&
          lookahead != '>' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(613);
      END_STATE();
    case 549:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 'l') ADVANCE(488);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(415);
      if (lookahead != 0 &&
          lookahead != '%' &&
          lookahead != '&' &&
          lookahead != '<' &&
          lookahead != '>' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(613);
      END_STATE();
    case 550:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 'l') ADVANCE(510);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(415);
      if (lookahead != 0 &&
          lookahead != '%' &&
          lookahead != '&' &&
          lookahead != '<' &&
          lookahead != '>' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(613);
      END_STATE();
    case 551:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 'l') ADVANCE(519);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(415);
      if (lookahead != 0 &&
          lookahead != '%' &&
          lookahead != '&' &&
          lookahead != '<' &&
          lookahead != '>' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(613);
      END_STATE();
    case 552:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 'l') ADVANCE(513);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(415);
      if (lookahead != 0 &&
          lookahead != '%' &&
          lookahead != '&' &&
          lookahead != '<' &&
          lookahead != '>' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(613);
      END_STATE();
    case 553:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 'l') ADVANCE(605);
      if (lookahead == 'r') ADVANCE(590);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(415);
      if (lookahead != 0 &&
          lookahead != '%' &&
          lookahead != '&' &&
          lookahead != '<' &&
          lookahead != '>' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(613);
      END_STATE();
    case 554:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 'm') ADVANCE(653);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(415);
      if (lookahead != 0 &&
          lookahead != '%' &&
          lookahead != '&' &&
          lookahead != '<' &&
          lookahead != '>' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(613);
      END_STATE();
    case 555:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 'm') ADVANCE(667);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(415);
      if (lookahead != 0 &&
          lookahead != '%' &&
          lookahead != '&' &&
          lookahead != '<' &&
          lookahead != '>' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(613);
      END_STATE();
    case 556:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 'm') ADVANCE(576);
      if (lookahead == 'n') ADVANCE(501);
      if (lookahead == 'x') ADVANCE(600);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(415);
      if (lookahead != 0 &&
          lookahead != '%' &&
          lookahead != '&' &&
          lookahead != '<' &&
          lookahead != '>' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(613);
      END_STATE();
    case 557:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 'm') ADVANCE(577);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(415);
      if (lookahead != 0 &&
          lookahead != '%' &&
          lookahead != '&' &&
          lookahead != '<' &&
          lookahead != '>' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(613);
      END_STATE();
    case 558:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 'm') ADVANCE(559);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(415);
      if (lookahead != 0 &&
          lookahead != '%' &&
          lookahead != '&' &&
          lookahead != '<' &&
          lookahead != '>' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(613);
      END_STATE();
    case 559:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 'm') ADVANCE(516);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(415);
      if (lookahead != 0 &&
          lookahead != '%' &&
          lookahead != '&' &&
          lookahead != '<' &&
          lookahead != '>' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(613);
      END_STATE();
    case 560:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 'n') ADVANCE(627);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(415);
      if (lookahead != 0 &&
          lookahead != '%' &&
          lookahead != '&' &&
          lookahead != '<' &&
          lookahead != '>' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(613);
      END_STATE();
    case 561:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 'n') ADVANCE(534);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(415);
      if (lookahead != 0 &&
          lookahead != '%' &&
          lookahead != '&' &&
          lookahead != '<' &&
          lookahead != '>' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(613);
      END_STATE();
    case 562:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 'n') ADVANCE(504);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(415);
      if (lookahead != 0 &&
          lookahead != '%' &&
          lookahead != '&' &&
          lookahead != '<' &&
          lookahead != '>' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(613);
      END_STATE();
    case 563:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 'n') ADVANCE(592);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(415);
      if (lookahead != 0 &&
          lookahead != '%' &&
          lookahead != '&' &&
          lookahead != '<' &&
          lookahead != '>' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(613);
      END_STATE();
    case 564:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 'o') ADVANCE(558);
      if (lookahead == 's') ADVANCE(579);
      if (lookahead == 'y') ADVANCE(495);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(415);
      if (lookahead != 0 &&
          lookahead != '%' &&
          lookahead != '&' &&
          lookahead != '<' &&
          lookahead != '>' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(613);
      END_STATE();
    case 565:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 'o') ADVANCE(481);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(415);
      if (lookahead != 0 &&
          lookahead != '%' &&
          lookahead != '&' &&
          lookahead != '<' &&
          lookahead != '>' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(613);
      END_STATE();
    case 566:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 'o') ADVANCE(610);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(415);
      if (lookahead != 0 &&
          lookahead != '%' &&
          lookahead != '&' &&
          lookahead != '<' &&
          lookahead != '>' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(613);
      END_STATE();
    case 567:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 'o') ADVANCE(669);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(415);
      if (lookahead != 0 &&
          lookahead != '%' &&
          lookahead != '&' &&
          lookahead != '<' &&
          lookahead != '>' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(613);
      END_STATE();
    case 568:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 'o') ADVANCE(493);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(415);
      if (lookahead != 0 &&
          lookahead != '%' &&
          lookahead != '&' &&
          lookahead != '<' &&
          lookahead != '>' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(613);
      END_STATE();
    case 569:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 'o') ADVANCE(530);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(415);
      if (lookahead != 0 &&
          lookahead != '%' &&
          lookahead != '&' &&
          lookahead != '<' &&
          lookahead != '>' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(613);
      END_STATE();
    case 570:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 'o') ADVANCE(545);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(415);
      if (lookahead != 0 &&
          lookahead != '%' &&
          lookahead != '&' &&
          lookahead != '<' &&
          lookahead != '>' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(613);
      END_STATE();
    case 571:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 'o') ADVANCE(489);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(415);
      if (lookahead != 0 &&
          lookahead != '%' &&
          lookahead != '&' &&
          lookahead != '<' &&
          lookahead != '>' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(613);
      END_STATE();
    case 572:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 'o') ADVANCE(608);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(415);
      if (lookahead != 0 &&
          lookahead != '%' &&
          lookahead != '&' &&
          lookahead != '<' &&
          lookahead != '>' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(613);
      END_STATE();
    case 573:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 'o') ADVANCE(515);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(415);
      if (lookahead != 0 &&
          lookahead != '%' &&
          lookahead != '&' &&
          lookahead != '<' &&
          lookahead != '>' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(613);
      END_STATE();
    case 574:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 'p') ADVANCE(482);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(415);
      if (lookahead != 0 &&
          lookahead != '%' &&
          lookahead != '&' &&
          lookahead != '<' &&
          lookahead != '>' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(613);
      END_STATE();
    case 575:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 'p') ADVANCE(657);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(415);
      if (lookahead != 0 &&
          lookahead != '%' &&
          lookahead != '&' &&
          lookahead != '<' &&
          lookahead != '>' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(613);
      END_STATE();
    case 576:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 'p') ADVANCE(591);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(415);
      if (lookahead != 0 &&
          lookahead != '%' &&
          lookahead != '&' &&
          lookahead != '<' &&
          lookahead != '>' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(613);
      END_STATE();
    case 577:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 'p') ADVANCE(549);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(415);
      if (lookahead != 0 &&
          lookahead != '%' &&
          lookahead != '&' &&
          lookahead != '<' &&
          lookahead != '>' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(613);
      END_STATE();
    case 578:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 'p') ADVANCE(512);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(415);
      if (lookahead != 0 &&
          lookahead != '%' &&
          lookahead != '&' &&
          lookahead != '<' &&
          lookahead != '>' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(613);
      END_STATE();
    case 579:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 'r') ADVANCE(529);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(415);
      if (lookahead != 0 &&
          lookahead != '%' &&
          lookahead != '&' &&
          lookahead != '<' &&
          lookahead != '>' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(613);
      END_STATE();
    case 580:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 'r') ADVANCE(639);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(415);
      if (lookahead != 0 &&
          lookahead != '%' &&
          lookahead != '&' &&
          lookahead != '<' &&
          lookahead != '>' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(613);
      END_STATE();
    case 581:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 'r') ADVANCE(635);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(415);
      if (lookahead != 0 &&
          lookahead != '%' &&
          lookahead != '&' &&
          lookahead != '<' &&
          lookahead != '>' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(613);
      END_STATE();
    case 582:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 'r') ADVANCE(546);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(415);
      if (lookahead != 0 &&
          lookahead != '%' &&
          lookahead != '&' &&
          lookahead != '<' &&
          lookahead != '>' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(613);
      END_STATE();
    case 583:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 'r') ADVANCE(491);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(415);
      if (lookahead != 0 &&
          lookahead != '%' &&
          lookahead != '&' &&
          lookahead != '<' &&
          lookahead != '>' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(613);
      END_STATE();
    case 584:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 'r') ADVANCE(572);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(415);
      if (lookahead != 0 &&
          lookahead != '%' &&
          lookahead != '&' &&
          lookahead != '<' &&
          lookahead != '>' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(613);
      END_STATE();
    case 585:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 'r') ADVANCE(487);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(415);
      if (lookahead != 0 &&
          lookahead != '%' &&
          lookahead != '&' &&
          lookahead != '<' &&
          lookahead != '>' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(613);
      END_STATE();
    case 586:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 's') ADVANCE(633);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(415);
      if (lookahead != 0 &&
          lookahead != '%' &&
          lookahead != '&' &&
          lookahead != '<' &&
          lookahead != '>' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(613);
      END_STATE();
    case 587:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 's') ADVANCE(661);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(415);
      if (lookahead != 0 &&
          lookahead != '%' &&
          lookahead != '&' &&
          lookahead != '<' &&
          lookahead != '>' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(613);
      END_STATE();
    case 588:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 's') ADVANCE(496);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(415);
      if (lookahead != 0 &&
          lookahead != '%' &&
          lookahead != '&' &&
          lookahead != '<' &&
          lookahead != '>' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(613);
      END_STATE();
    case 589:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 's') ADVANCE(587);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(415);
      if (lookahead != 0 &&
          lookahead != '%' &&
          lookahead != '&' &&
          lookahead != '<' &&
          lookahead != '>' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(613);
      END_STATE();
    case 590:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 's') ADVANCE(602);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(415);
      if (lookahead != 0 &&
          lookahead != '%' &&
          lookahead != '&' &&
          lookahead != '<' &&
          lookahead != '>' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(613);
      END_STATE();
    case 591:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 't') ADVANCE(611);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(415);
      if (lookahead != 0 &&
          lookahead != '%' &&
          lookahead != '&' &&
          lookahead != '<' &&
          lookahead != '>' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(613);
      END_STATE();
    case 592:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 't') ADVANCE(625);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(415);
      if (lookahead != 0 &&
          lookahead != '%' &&
          lookahead != '&' &&
          lookahead != '<' &&
          lookahead != '>' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(613);
      END_STATE();
    case 593:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 't') ADVANCE(477);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(415);
      if (lookahead != 0 &&
          lookahead != '%' &&
          lookahead != '&' &&
          lookahead != '<' &&
          lookahead != '>' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(613);
      END_STATE();
    case 594:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 't') ADVANCE(480);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(415);
      if (lookahead != 0 &&
          lookahead != '%' &&
          lookahead != '&' &&
          lookahead != '<' &&
          lookahead != '>' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(613);
      END_STATE();
    case 595:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 't') ADVANCE(540);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(415);
      if (lookahead != 0 &&
          lookahead != '%' &&
          lookahead != '&' &&
          lookahead != '<' &&
          lookahead != '>' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(613);
      END_STATE();
    case 596:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 't') ADVANCE(541);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(415);
      if (lookahead != 0 &&
          lookahead != '%' &&
          lookahead != '&' &&
          lookahead != '<' &&
          lookahead != '>' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(613);
      END_STATE();
    case 597:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 't') ADVANCE(537);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(415);
      if (lookahead != 0 &&
          lookahead != '%' &&
          lookahead != '&' &&
          lookahead != '<' &&
          lookahead != '>' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(613);
      END_STATE();
    case 598:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 't') ADVANCE(573);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(415);
      if (lookahead != 0 &&
          lookahead != '%' &&
          lookahead != '&' &&
          lookahead != '<' &&
          lookahead != '>' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(613);
      END_STATE();
    case 599:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 't') ADVANCE(494);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(415);
      if (lookahead != 0 &&
          lookahead != '%' &&
          lookahead != '&' &&
          lookahead != '<' &&
          lookahead != '>' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(613);
      END_STATE();
    case 600:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 't') ADVANCE(509);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(415);
      if (lookahead != 0 &&
          lookahead != '%' &&
          lookahead != '&' &&
          lookahead != '<' &&
          lookahead != '>' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(613);
      END_STATE();
    case 601:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 't') ADVANCE(483);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(415);
      if (lookahead != 0 &&
          lookahead != '%' &&
          lookahead != '&' &&
          lookahead != '<' &&
          lookahead != '>' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(613);
      END_STATE();
    case 602:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 't') ADVANCE(569);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(415);
      if (lookahead != 0 &&
          lookahead != '%' &&
          lookahead != '&' &&
          lookahead != '<' &&
          lookahead != '>' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(613);
      END_STATE();
    case 603:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 't') ADVANCE(570);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(415);
      if (lookahead != 0 &&
          lookahead != '%' &&
          lookahead != '&' &&
          lookahead != '<' &&
          lookahead != '>' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(613);
      END_STATE();
    case 604:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 't') ADVANCE(525);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(415);
      if (lookahead != 0 &&
          lookahead != '%' &&
          lookahead != '&' &&
          lookahead != '<' &&
          lookahead != '>' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(613);
      END_STATE();
    case 605:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 't') ADVANCE(523);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(415);
      if (lookahead != 0 &&
          lookahead != '%' &&
          lookahead != '&' &&
          lookahead != '<' &&
          lookahead != '>' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(613);
      END_STATE();
    case 606:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 'u') ADVANCE(598);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(415);
      if (lookahead != 0 &&
          lookahead != '%' &&
          lookahead != '&' &&
          lookahead != '<' &&
          lookahead != '>' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(613);
      END_STATE();
    case 607:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 'u') ADVANCE(531);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(415);
      if (lookahead != 0 &&
          lookahead != '%' &&
          lookahead != '&' &&
          lookahead != '<' &&
          lookahead != '>' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(613);
      END_STATE();
    case 608:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 'u') ADVANCE(575);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(415);
      if (lookahead != 0 &&
          lookahead != '%' &&
          lookahead != '&' &&
          lookahead != '<' &&
          lookahead != '>' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(613);
      END_STATE();
    case 609:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 'u') ADVANCE(506);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(415);
      if (lookahead != 0 &&
          lookahead != '%' &&
          lookahead != '&' &&
          lookahead != '<' &&
          lookahead != '>' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(613);
      END_STATE();
    case 610:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 'w') ADVANCE(655);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(415);
      if (lookahead != 0 &&
          lookahead != '%' &&
          lookahead != '&' &&
          lookahead != '<' &&
          lookahead != '>' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(613);
      END_STATE();
    case 611:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 'y') ADVANCE(641);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(415);
      if (lookahead != 0 &&
          lookahead != '%' &&
          lookahead != '&' &&
          lookahead != '<' &&
          lookahead != '>' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(613);
      END_STATE();
    case 612:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 'y') ADVANCE(500);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(415);
      if (lookahead != 0 &&
          lookahead != '%' &&
          lookahead != '&' &&
          lookahead != '<' &&
          lookahead != '>' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(613);
      END_STATE();
    case 613:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(415);
      if (lookahead != 0 &&
          lookahead != '%' &&
          lookahead != '&' &&
          lookahead != '<' &&
          lookahead != '>' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(613);
      END_STATE();
    case 614:
      ACCEPT_TOKEN(anon_sym_LBRACE_PERCENT);
      END_STATE();
    case 615:
      ACCEPT_TOKEN(anon_sym_PERCENT_RBRACE);
      END_STATE();
    case 616:
      ACCEPT_TOKEN(anon_sym_LBRACE_LBRACE);
      END_STATE();
    case 617:
      ACCEPT_TOKEN(anon_sym_RBRACE_RBRACE);
      END_STATE();
    case 618:
      ACCEPT_TOKEN(anon_sym_end_LBRACKobjectObject_RBRACK);
      END_STATE();
    case 619:
      ACCEPT_TOKEN(anon_sym_end_LBRACKobjectObject_RBRACK);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(415);
      if (lookahead != 0 &&
          lookahead != '%' &&
          lookahead != '&' &&
          lookahead != '<' &&
          lookahead != '>' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(613);
      END_STATE();
    case 620:
      ACCEPT_TOKEN(anon_sym_autoescape);
      END_STATE();
    case 621:
      ACCEPT_TOKEN(anon_sym_autoescape);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(415);
      if (lookahead != 0 &&
          lookahead != '%' &&
          lookahead != '&' &&
          lookahead != '<' &&
          lookahead != '>' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(613);
      END_STATE();
    case 622:
      ACCEPT_TOKEN(anon_sym_block);
      END_STATE();
    case 623:
      ACCEPT_TOKEN(anon_sym_block);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(415);
      if (lookahead != 0 &&
          lookahead != '%' &&
          lookahead != '&' &&
          lookahead != '<' &&
          lookahead != '>' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(613);
      END_STATE();
    case 624:
      ACCEPT_TOKEN(anon_sym_comment);
      END_STATE();
    case 625:
      ACCEPT_TOKEN(anon_sym_comment);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(415);
      if (lookahead != 0 &&
          lookahead != '%' &&
          lookahead != '&' &&
          lookahead != '<' &&
          lookahead != '>' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(613);
      END_STATE();
    case 626:
      ACCEPT_TOKEN(anon_sym_csrf_DASHtoken);
      END_STATE();
    case 627:
      ACCEPT_TOKEN(anon_sym_csrf_DASHtoken);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(415);
      if (lookahead != 0 &&
          lookahead != '%' &&
          lookahead != '&' &&
          lookahead != '<' &&
          lookahead != '>' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(613);
      END_STATE();
    case 628:
      ACCEPT_TOKEN(anon_sym_cycle);
      END_STATE();
    case 629:
      ACCEPT_TOKEN(anon_sym_cycle);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(415);
      if (lookahead != 0 &&
          lookahead != '%' &&
          lookahead != '&' &&
          lookahead != '<' &&
          lookahead != '>' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(613);
      END_STATE();
    case 630:
      ACCEPT_TOKEN(anon_sym_debug);
      END_STATE();
    case 631:
      ACCEPT_TOKEN(anon_sym_debug);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(415);
      if (lookahead != 0 &&
          lookahead != '%' &&
          lookahead != '&' &&
          lookahead != '<' &&
          lookahead != '>' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(613);
      END_STATE();
    case 632:
      ACCEPT_TOKEN(anon_sym_extends);
      END_STATE();
    case 633:
      ACCEPT_TOKEN(anon_sym_extends);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(415);
      if (lookahead != 0 &&
          lookahead != '%' &&
          lookahead != '&' &&
          lookahead != '<' &&
          lookahead != '>' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(613);
      END_STATE();
    case 634:
      ACCEPT_TOKEN(anon_sym_filter);
      END_STATE();
    case 635:
      ACCEPT_TOKEN(anon_sym_filter);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(415);
      if (lookahead != 0 &&
          lookahead != '%' &&
          lookahead != '&' &&
          lookahead != '<' &&
          lookahead != '>' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(613);
      END_STATE();
    case 636:
      ACCEPT_TOKEN(anon_sym_firstof);
      END_STATE();
    case 637:
      ACCEPT_TOKEN(anon_sym_firstof);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(415);
      if (lookahead != 0 &&
          lookahead != '%' &&
          lookahead != '&' &&
          lookahead != '<' &&
          lookahead != '>' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(613);
      END_STATE();
    case 638:
      ACCEPT_TOKEN(anon_sym_for);
      END_STATE();
    case 639:
      ACCEPT_TOKEN(anon_sym_for);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(415);
      if (lookahead != 0 &&
          lookahead != '%' &&
          lookahead != '&' &&
          lookahead != '<' &&
          lookahead != '>' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(613);
      END_STATE();
    case 640:
      ACCEPT_TOKEN(anon_sym_empty);
      END_STATE();
    case 641:
      ACCEPT_TOKEN(anon_sym_empty);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(415);
      if (lookahead != 0 &&
          lookahead != '%' &&
          lookahead != '&' &&
          lookahead != '<' &&
          lookahead != '>' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(613);
      END_STATE();
    case 642:
      ACCEPT_TOKEN(anon_sym_if);
      if (lookahead == 'c') ADVANCE(165);
      END_STATE();
    case 643:
      ACCEPT_TOKEN(anon_sym_if);
      if (lookahead == 'c') ADVANCE(536);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(415);
      if (lookahead != 0 &&
          lookahead != '%' &&
          lookahead != '&' &&
          lookahead != '<' &&
          lookahead != '>' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(613);
      END_STATE();
    case 644:
      ACCEPT_TOKEN(anon_sym_in);
      if (lookahead == 'c') ADVANCE(208);
      END_STATE();
    case 645:
      ACCEPT_TOKEN(anon_sym_in);
      if (lookahead == 'c') ADVANCE(547);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(415);
      if (lookahead != 0 &&
          lookahead != '%' &&
          lookahead != '&' &&
          lookahead != '<' &&
          lookahead != '>' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(613);
      END_STATE();
    case 646:
      ACCEPT_TOKEN(anon_sym_ifchanged);
      END_STATE();
    case 647:
      ACCEPT_TOKEN(anon_sym_ifchanged);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(415);
      if (lookahead != 0 &&
          lookahead != '%' &&
          lookahead != '&' &&
          lookahead != '<' &&
          lookahead != '>' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(613);
      END_STATE();
    case 648:
      ACCEPT_TOKEN(anon_sym_include);
      END_STATE();
    case 649:
      ACCEPT_TOKEN(anon_sym_include);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(415);
      if (lookahead != 0 &&
          lookahead != '%' &&
          lookahead != '&' &&
          lookahead != '<' &&
          lookahead != '>' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(613);
      END_STATE();
    case 650:
      ACCEPT_TOKEN(anon_sym_load);
      END_STATE();
    case 651:
      ACCEPT_TOKEN(anon_sym_load);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(415);
      if (lookahead != 0 &&
          lookahead != '%' &&
          lookahead != '&' &&
          lookahead != '<' &&
          lookahead != '>' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(613);
      END_STATE();
    case 652:
      ACCEPT_TOKEN(anon_sym_lorem);
      END_STATE();
    case 653:
      ACCEPT_TOKEN(anon_sym_lorem);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(415);
      if (lookahead != 0 &&
          lookahead != '%' &&
          lookahead != '&' &&
          lookahead != '<' &&
          lookahead != '>' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(613);
      END_STATE();
    case 654:
      ACCEPT_TOKEN(anon_sym_now);
      END_STATE();
    case 655:
      ACCEPT_TOKEN(anon_sym_now);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(415);
      if (lookahead != 0 &&
          lookahead != '%' &&
          lookahead != '&' &&
          lookahead != '<' &&
          lookahead != '>' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(613);
      END_STATE();
    case 656:
      ACCEPT_TOKEN(anon_sym_regroup);
      END_STATE();
    case 657:
      ACCEPT_TOKEN(anon_sym_regroup);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(415);
      if (lookahead != 0 &&
          lookahead != '%' &&
          lookahead != '&' &&
          lookahead != '<' &&
          lookahead != '>' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(613);
      END_STATE();
    case 658:
      ACCEPT_TOKEN(anon_sym_resetcycle);
      END_STATE();
    case 659:
      ACCEPT_TOKEN(anon_sym_resetcycle);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(415);
      if (lookahead != 0 &&
          lookahead != '%' &&
          lookahead != '&' &&
          lookahead != '<' &&
          lookahead != '>' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(613);
      END_STATE();
    case 660:
      ACCEPT_TOKEN(anon_sym_spaceless);
      END_STATE();
    case 661:
      ACCEPT_TOKEN(anon_sym_spaceless);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(415);
      if (lookahead != 0 &&
          lookahead != '%' &&
          lookahead != '&' &&
          lookahead != '<' &&
          lookahead != '>' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(613);
      END_STATE();
    case 662:
      ACCEPT_TOKEN(anon_sym_templatetag);
      END_STATE();
    case 663:
      ACCEPT_TOKEN(anon_sym_templatetag);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(415);
      if (lookahead != 0 &&
          lookahead != '%' &&
          lookahead != '&' &&
          lookahead != '<' &&
          lookahead != '>' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(613);
      END_STATE();
    case 664:
      ACCEPT_TOKEN(anon_sym_url);
      END_STATE();
    case 665:
      ACCEPT_TOKEN(anon_sym_url);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(415);
      if (lookahead != 0 &&
          lookahead != '%' &&
          lookahead != '&' &&
          lookahead != '<' &&
          lookahead != '>' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(613);
      END_STATE();
    case 666:
      ACCEPT_TOKEN(anon_sym_verbatim);
      END_STATE();
    case 667:
      ACCEPT_TOKEN(anon_sym_verbatim);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(415);
      if (lookahead != 0 &&
          lookahead != '%' &&
          lookahead != '&' &&
          lookahead != '<' &&
          lookahead != '>' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(613);
      END_STATE();
    case 668:
      ACCEPT_TOKEN(anon_sym_widthratio);
      END_STATE();
    case 669:
      ACCEPT_TOKEN(anon_sym_widthratio);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(415);
      if (lookahead != 0 &&
          lookahead != '%' &&
          lookahead != '&' &&
          lookahead != '<' &&
          lookahead != '>' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(613);
      END_STATE();
    case 670:
      ACCEPT_TOKEN(anon_sym_with);
      END_STATE();
    case 671:
      ACCEPT_TOKEN(anon_sym_with);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(415);
      if (lookahead != 0 &&
          lookahead != '%' &&
          lookahead != '&' &&
          lookahead != '<' &&
          lookahead != '>' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(613);
      END_STATE();
    case 672:
      ACCEPT_TOKEN(anon_sym_add);
      if (lookahead == 's') ADVANCE(209);
      END_STATE();
    case 673:
      ACCEPT_TOKEN(anon_sym_addslashes);
      END_STATE();
    case 674:
      ACCEPT_TOKEN(anon_sym_capfirst);
      END_STATE();
    case 675:
      ACCEPT_TOKEN(anon_sym_center);
      END_STATE();
    case 676:
      ACCEPT_TOKEN(anon_sym_cut);
      END_STATE();
    case 677:
      ACCEPT_TOKEN(anon_sym_date);
      END_STATE();
    case 678:
      ACCEPT_TOKEN(anon_sym_default);
      if (lookahead == '_') ADVANCE(181);
      END_STATE();
    case 679:
      ACCEPT_TOKEN(anon_sym_default_if_none);
      END_STATE();
    case 680:
      ACCEPT_TOKEN(anon_sym_dictsort);
      if (lookahead == 'r') ADVANCE(105);
      END_STATE();
    case 681:
      ACCEPT_TOKEN(anon_sym_dictsortreversed);
      END_STATE();
    case 682:
      ACCEPT_TOKEN(anon_sym_divisibleby);
      END_STATE();
    case 683:
      ACCEPT_TOKEN(anon_sym_escape);
      if (lookahead == 'j') ADVANCE(321);
      if (lookahead == 's') ADVANCE(111);
      END_STATE();
    case 684:
      ACCEPT_TOKEN(anon_sym_escapejs);
      END_STATE();
    case 685:
      ACCEPT_TOKEN(anon_sym_escapeseq);
      END_STATE();
    case 686:
      ACCEPT_TOKEN(anon_sym_filesizeformat);
      END_STATE();
    case 687:
      ACCEPT_TOKEN(anon_sym_first);
      if (lookahead == 'o') ADVANCE(144);
      END_STATE();
    case 688:
      ACCEPT_TOKEN(anon_sym_floatformat);
      END_STATE();
    case 689:
      ACCEPT_TOKEN(anon_sym_get_DASHdigit);
      END_STATE();
    case 690:
      ACCEPT_TOKEN(anon_sym_iriencode);
      END_STATE();
    case 691:
      ACCEPT_TOKEN(anon_sym_join);
      END_STATE();
    case 692:
      ACCEPT_TOKEN(anon_sym_json_DASHscript);
      END_STATE();
    case 693:
      ACCEPT_TOKEN(anon_sym_last);
      END_STATE();
    case 694:
      ACCEPT_TOKEN(anon_sym_length);
      if (lookahead == '-') ADVANCE(185);
      END_STATE();
    case 695:
      ACCEPT_TOKEN(anon_sym_length_DASHis);
      END_STATE();
    case 696:
      ACCEPT_TOKEN(anon_sym_linebreaks);
      if (lookahead == 'b') ADVANCE(297);
      END_STATE();
    case 697:
      ACCEPT_TOKEN(anon_sym_linebreaksbr);
      END_STATE();
    case 698:
      ACCEPT_TOKEN(anon_sym_linenumbers);
      END_STATE();
    case 699:
      ACCEPT_TOKEN(anon_sym_ljust);
      END_STATE();
    case 700:
      ACCEPT_TOKEN(anon_sym_lower);
      END_STATE();
    case 701:
      ACCEPT_TOKEN(anon_sym_make_DASHlist);
      END_STATE();
    case 702:
      ACCEPT_TOKEN(anon_sym_phone2numeric);
      END_STATE();
    case 703:
      ACCEPT_TOKEN(anon_sym_pluralize);
      END_STATE();
    case 704:
      ACCEPT_TOKEN(anon_sym_pprint);
      END_STATE();
    case 705:
      ACCEPT_TOKEN(anon_sym_random);
      END_STATE();
    case 706:
      ACCEPT_TOKEN(anon_sym_rjust);
      END_STATE();
    case 707:
      ACCEPT_TOKEN(anon_sym_safe);
      if (lookahead == 's') ADVANCE(99);
      END_STATE();
    case 708:
      ACCEPT_TOKEN(anon_sym_safeseq);
      END_STATE();
    case 709:
      ACCEPT_TOKEN(anon_sym_slice);
      END_STATE();
    case 710:
      ACCEPT_TOKEN(anon_sym_slugify);
      END_STATE();
    case 711:
      ACCEPT_TOKEN(anon_sym_stringformat);
      END_STATE();
    case 712:
      ACCEPT_TOKEN(anon_sym_striptags);
      END_STATE();
    case 713:
      ACCEPT_TOKEN(anon_sym_time);
      if (lookahead == 's') ADVANCE(186);
      if (lookahead == 'u') ADVANCE(252);
      END_STATE();
    case 714:
      ACCEPT_TOKEN(anon_sym_timesince);
      END_STATE();
    case 715:
      ACCEPT_TOKEN(anon_sym_timeuntil);
      END_STATE();
    case 716:
      ACCEPT_TOKEN(anon_sym_title);
      END_STATE();
    case 717:
      ACCEPT_TOKEN(anon_sym_truncatechars);
      if (lookahead == '-') ADVANCE(169);
      END_STATE();
    case 718:
      ACCEPT_TOKEN(anon_sym_truncatechars_DASHhtml);
      END_STATE();
    case 719:
      ACCEPT_TOKEN(anon_sym_truncatewords);
      if (lookahead == '-') ADVANCE(170);
      END_STATE();
    case 720:
      ACCEPT_TOKEN(anon_sym_truncatewords_DASHhtml);
      END_STATE();
    case 721:
      ACCEPT_TOKEN(anon_sym_unordered_DASHlist);
      END_STATE();
    case 722:
      ACCEPT_TOKEN(anon_sym_upper);
      END_STATE();
    case 723:
      ACCEPT_TOKEN(anon_sym_wordcount);
      END_STATE();
    case 724:
      ACCEPT_TOKEN(anon_sym_wordwrap);
      END_STATE();
    case 725:
      ACCEPT_TOKEN(anon_sym_yesno);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0, .external_lex_state = 1},
  [1] = {.lex_state = 418, .external_lex_state = 2},
  [2] = {.lex_state = 5, .external_lex_state = 2},
  [3] = {.lex_state = 5, .external_lex_state = 2},
  [4] = {.lex_state = 5, .external_lex_state = 2},
  [5] = {.lex_state = 5, .external_lex_state = 2},
  [6] = {.lex_state = 5, .external_lex_state = 2},
  [7] = {.lex_state = 5, .external_lex_state = 2},
  [8] = {.lex_state = 5, .external_lex_state = 2},
  [9] = {.lex_state = 418, .external_lex_state = 3},
  [10] = {.lex_state = 418, .external_lex_state = 3},
  [11] = {.lex_state = 418, .external_lex_state = 3},
  [12] = {.lex_state = 418, .external_lex_state = 2},
  [13] = {.lex_state = 418, .external_lex_state = 3},
  [14] = {.lex_state = 418, .external_lex_state = 2},
  [15] = {.lex_state = 418, .external_lex_state = 3},
  [16] = {.lex_state = 418, .external_lex_state = 2},
  [17] = {.lex_state = 418, .external_lex_state = 3},
  [18] = {.lex_state = 418, .external_lex_state = 2},
  [19] = {.lex_state = 418, .external_lex_state = 2},
  [20] = {.lex_state = 418, .external_lex_state = 3},
  [21] = {.lex_state = 418, .external_lex_state = 3},
  [22] = {.lex_state = 418, .external_lex_state = 3},
  [23] = {.lex_state = 418, .external_lex_state = 3},
  [24] = {.lex_state = 418, .external_lex_state = 3},
  [25] = {.lex_state = 418, .external_lex_state = 2},
  [26] = {.lex_state = 418, .external_lex_state = 3},
  [27] = {.lex_state = 418, .external_lex_state = 3},
  [28] = {.lex_state = 418, .external_lex_state = 3},
  [29] = {.lex_state = 418, .external_lex_state = 2},
  [30] = {.lex_state = 418, .external_lex_state = 3},
  [31] = {.lex_state = 418, .external_lex_state = 3},
  [32] = {.lex_state = 418, .external_lex_state = 2},
  [33] = {.lex_state = 418, .external_lex_state = 3},
  [34] = {.lex_state = 418, .external_lex_state = 2},
  [35] = {.lex_state = 418, .external_lex_state = 3},
  [36] = {.lex_state = 418, .external_lex_state = 3},
  [37] = {.lex_state = 418, .external_lex_state = 3},
  [38] = {.lex_state = 418, .external_lex_state = 2},
  [39] = {.lex_state = 418, .external_lex_state = 3},
  [40] = {.lex_state = 418, .external_lex_state = 3},
  [41] = {.lex_state = 418, .external_lex_state = 2},
  [42] = {.lex_state = 418, .external_lex_state = 2},
  [43] = {.lex_state = 418, .external_lex_state = 2},
  [44] = {.lex_state = 418, .external_lex_state = 3},
  [45] = {.lex_state = 418, .external_lex_state = 2},
  [46] = {.lex_state = 418, .external_lex_state = 2},
  [47] = {.lex_state = 418, .external_lex_state = 3},
  [48] = {.lex_state = 418, .external_lex_state = 2},
  [49] = {.lex_state = 418, .external_lex_state = 2},
  [50] = {.lex_state = 418, .external_lex_state = 2},
  [51] = {.lex_state = 418, .external_lex_state = 2},
  [52] = {.lex_state = 418, .external_lex_state = 2},
  [53] = {.lex_state = 13, .external_lex_state = 4},
  [54] = {.lex_state = 13, .external_lex_state = 4},
  [55] = {.lex_state = 13, .external_lex_state = 4},
  [56] = {.lex_state = 13, .external_lex_state = 4},
  [57] = {.lex_state = 13, .external_lex_state = 4},
  [58] = {.lex_state = 2, .external_lex_state = 2},
  [59] = {.lex_state = 2, .external_lex_state = 2},
  [60] = {.lex_state = 13, .external_lex_state = 2},
  [61] = {.lex_state = 13, .external_lex_state = 2},
  [62] = {.lex_state = 13, .external_lex_state = 2},
  [63] = {.lex_state = 13, .external_lex_state = 2},
  [64] = {.lex_state = 13, .external_lex_state = 2},
  [65] = {.lex_state = 13, .external_lex_state = 4},
  [66] = {.lex_state = 0, .external_lex_state = 5},
  [67] = {.lex_state = 13, .external_lex_state = 2},
  [68] = {.lex_state = 0, .external_lex_state = 5},
  [69] = {.lex_state = 0, .external_lex_state = 5},
  [70] = {.lex_state = 13, .external_lex_state = 4},
  [71] = {.lex_state = 0, .external_lex_state = 5},
  [72] = {.lex_state = 0, .external_lex_state = 6},
  [73] = {.lex_state = 13, .external_lex_state = 4},
  [74] = {.lex_state = 0, .external_lex_state = 6},
  [75] = {.lex_state = 13, .external_lex_state = 4},
  [76] = {.lex_state = 3, .external_lex_state = 2},
  [77] = {.lex_state = 0, .external_lex_state = 2},
  [78] = {.lex_state = 0, .external_lex_state = 7},
  [79] = {.lex_state = 7, .external_lex_state = 2},
  [80] = {.lex_state = 0, .external_lex_state = 5},
  [81] = {.lex_state = 0, .external_lex_state = 7},
  [82] = {.lex_state = 7, .external_lex_state = 2},
  [83] = {.lex_state = 0, .external_lex_state = 5},
  [84] = {.lex_state = 0, .external_lex_state = 2},
  [85] = {.lex_state = 3, .external_lex_state = 2},
  [86] = {.lex_state = 0, .external_lex_state = 2},
  [87] = {.lex_state = 13, .external_lex_state = 2},
  [88] = {.lex_state = 13, .external_lex_state = 2},
  [89] = {.lex_state = 13, .external_lex_state = 2},
  [90] = {.lex_state = 0, .external_lex_state = 2},
  [91] = {.lex_state = 418, .external_lex_state = 2},
  [92] = {.lex_state = 0, .external_lex_state = 5},
  [93] = {.lex_state = 418, .external_lex_state = 2},
  [94] = {.lex_state = 0, .external_lex_state = 5},
  [95] = {.lex_state = 0, .external_lex_state = 2},
  [96] = {.lex_state = 0, .external_lex_state = 8},
  [97] = {.lex_state = 0, .external_lex_state = 2},
  [98] = {.lex_state = 0, .external_lex_state = 2},
  [99] = {.lex_state = 0, .external_lex_state = 2},
  [100] = {.lex_state = 0, .external_lex_state = 2},
  [101] = {.lex_state = 0, .external_lex_state = 2},
  [102] = {.lex_state = 0, .external_lex_state = 2},
  [103] = {.lex_state = 0, .external_lex_state = 2},
  [104] = {.lex_state = 416, .external_lex_state = 2},
  [105] = {.lex_state = 0, .external_lex_state = 2},
  [106] = {.lex_state = 0, .external_lex_state = 2},
  [107] = {.lex_state = 0, .external_lex_state = 2},
  [108] = {.lex_state = 0, .external_lex_state = 2},
  [109] = {.lex_state = 0, .external_lex_state = 9},
  [110] = {.lex_state = 0, .external_lex_state = 8},
  [111] = {.lex_state = 0, .external_lex_state = 2},
  [112] = {.lex_state = 416, .external_lex_state = 2},
  [113] = {.lex_state = 0, .external_lex_state = 2},
  [114] = {.lex_state = 0, .external_lex_state = 9},
  [115] = {.lex_state = 0, .external_lex_state = 2},
};

enum {
  ts_external_token__start_tag_name = 0,
  ts_external_token__script_start_tag_name = 1,
  ts_external_token__style_start_tag_name = 2,
  ts_external_token__end_tag_name = 3,
  ts_external_token_erroneous_end_tag_name = 4,
  ts_external_token_SLASH_GT = 5,
  ts_external_token__implicit_end_tag = 6,
  ts_external_token_raw_text = 7,
  ts_external_token_comment = 8,
};

static const TSSymbol ts_external_scanner_symbol_map[EXTERNAL_TOKEN_COUNT] = {
  [ts_external_token__start_tag_name] = sym__start_tag_name,
  [ts_external_token__script_start_tag_name] = sym__script_start_tag_name,
  [ts_external_token__style_start_tag_name] = sym__style_start_tag_name,
  [ts_external_token__end_tag_name] = sym__end_tag_name,
  [ts_external_token_erroneous_end_tag_name] = sym_erroneous_end_tag_name,
  [ts_external_token_SLASH_GT] = anon_sym_SLASH_GT,
  [ts_external_token__implicit_end_tag] = sym__implicit_end_tag,
  [ts_external_token_raw_text] = sym_raw_text,
  [ts_external_token_comment] = sym_comment,
};

static const bool ts_external_scanner_states[10][EXTERNAL_TOKEN_COUNT] = {
  [1] = {
    [ts_external_token__start_tag_name] = true,
    [ts_external_token__script_start_tag_name] = true,
    [ts_external_token__style_start_tag_name] = true,
    [ts_external_token__end_tag_name] = true,
    [ts_external_token_erroneous_end_tag_name] = true,
    [ts_external_token_SLASH_GT] = true,
    [ts_external_token__implicit_end_tag] = true,
    [ts_external_token_raw_text] = true,
    [ts_external_token_comment] = true,
  },
  [2] = {
    [ts_external_token_comment] = true,
  },
  [3] = {
    [ts_external_token__implicit_end_tag] = true,
    [ts_external_token_comment] = true,
  },
  [4] = {
    [ts_external_token_SLASH_GT] = true,
    [ts_external_token_comment] = true,
  },
  [5] = {
    [ts_external_token_raw_text] = true,
    [ts_external_token_comment] = true,
  },
  [6] = {
    [ts_external_token__start_tag_name] = true,
    [ts_external_token__script_start_tag_name] = true,
    [ts_external_token__style_start_tag_name] = true,
    [ts_external_token_comment] = true,
  },
  [7] = {
    [ts_external_token__end_tag_name] = true,
    [ts_external_token_erroneous_end_tag_name] = true,
    [ts_external_token_comment] = true,
  },
  [8] = {
    [ts_external_token_erroneous_end_tag_name] = true,
    [ts_external_token_comment] = true,
  },
  [9] = {
    [ts_external_token__end_tag_name] = true,
    [ts_external_token_comment] = true,
  },
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [anon_sym_LT_BANG] = ACTIONS(1),
    [anon_sym_GT] = ACTIONS(1),
    [sym__doctype] = ACTIONS(1),
    [anon_sym_LT] = ACTIONS(1),
    [anon_sym_SLASH_GT] = ACTIONS(1),
    [anon_sym_LT_SLASH] = ACTIONS(1),
    [anon_sym_EQ] = ACTIONS(1),
    [sym_entity] = ACTIONS(1),
    [anon_sym_SQUOTE] = ACTIONS(1),
    [anon_sym_DQUOTE] = ACTIONS(1),
    [anon_sym_LBRACE_PERCENT] = ACTIONS(1),
    [anon_sym_PERCENT_RBRACE] = ACTIONS(1),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(1),
    [anon_sym_RBRACE_RBRACE] = ACTIONS(1),
    [anon_sym_end_LBRACKobjectObject_RBRACK] = ACTIONS(1),
    [anon_sym_autoescape] = ACTIONS(1),
    [anon_sym_block] = ACTIONS(1),
    [anon_sym_comment] = ACTIONS(1),
    [anon_sym_csrf_DASHtoken] = ACTIONS(1),
    [anon_sym_cycle] = ACTIONS(1),
    [anon_sym_debug] = ACTIONS(1),
    [anon_sym_extends] = ACTIONS(1),
    [anon_sym_filter] = ACTIONS(1),
    [anon_sym_firstof] = ACTIONS(1),
    [anon_sym_for] = ACTIONS(1),
    [anon_sym_empty] = ACTIONS(1),
    [anon_sym_if] = ACTIONS(1),
    [anon_sym_in] = ACTIONS(1),
    [anon_sym_ifchanged] = ACTIONS(1),
    [anon_sym_include] = ACTIONS(1),
    [anon_sym_load] = ACTIONS(1),
    [anon_sym_lorem] = ACTIONS(1),
    [anon_sym_now] = ACTIONS(1),
    [anon_sym_regroup] = ACTIONS(1),
    [anon_sym_resetcycle] = ACTIONS(1),
    [anon_sym_spaceless] = ACTIONS(1),
    [anon_sym_templatetag] = ACTIONS(1),
    [anon_sym_url] = ACTIONS(1),
    [anon_sym_verbatim] = ACTIONS(1),
    [anon_sym_widthratio] = ACTIONS(1),
    [anon_sym_with] = ACTIONS(1),
    [anon_sym_add] = ACTIONS(1),
    [anon_sym_addslashes] = ACTIONS(1),
    [anon_sym_capfirst] = ACTIONS(1),
    [anon_sym_center] = ACTIONS(1),
    [anon_sym_cut] = ACTIONS(1),
    [anon_sym_date] = ACTIONS(1),
    [anon_sym_default] = ACTIONS(1),
    [anon_sym_default_if_none] = ACTIONS(1),
    [anon_sym_dictsort] = ACTIONS(1),
    [anon_sym_dictsortreversed] = ACTIONS(1),
    [anon_sym_divisibleby] = ACTIONS(1),
    [anon_sym_escape] = ACTIONS(1),
    [anon_sym_escapejs] = ACTIONS(1),
    [anon_sym_escapeseq] = ACTIONS(1),
    [anon_sym_filesizeformat] = ACTIONS(1),
    [anon_sym_first] = ACTIONS(1),
    [anon_sym_floatformat] = ACTIONS(1),
    [anon_sym_get_DASHdigit] = ACTIONS(1),
    [anon_sym_iriencode] = ACTIONS(1),
    [anon_sym_join] = ACTIONS(1),
    [anon_sym_json_DASHscript] = ACTIONS(1),
    [anon_sym_last] = ACTIONS(1),
    [anon_sym_length] = ACTIONS(1),
    [anon_sym_length_DASHis] = ACTIONS(1),
    [anon_sym_linebreaks] = ACTIONS(1),
    [anon_sym_linebreaksbr] = ACTIONS(1),
    [anon_sym_linenumbers] = ACTIONS(1),
    [anon_sym_ljust] = ACTIONS(1),
    [anon_sym_lower] = ACTIONS(1),
    [anon_sym_make_DASHlist] = ACTIONS(1),
    [anon_sym_phone2numeric] = ACTIONS(1),
    [anon_sym_pluralize] = ACTIONS(1),
    [anon_sym_pprint] = ACTIONS(1),
    [anon_sym_random] = ACTIONS(1),
    [anon_sym_rjust] = ACTIONS(1),
    [anon_sym_safe] = ACTIONS(1),
    [anon_sym_safeseq] = ACTIONS(1),
    [anon_sym_slice] = ACTIONS(1),
    [anon_sym_slugify] = ACTIONS(1),
    [anon_sym_stringformat] = ACTIONS(1),
    [anon_sym_striptags] = ACTIONS(1),
    [anon_sym_time] = ACTIONS(1),
    [anon_sym_timesince] = ACTIONS(1),
    [anon_sym_timeuntil] = ACTIONS(1),
    [anon_sym_title] = ACTIONS(1),
    [anon_sym_truncatechars] = ACTIONS(1),
    [anon_sym_truncatechars_DASHhtml] = ACTIONS(1),
    [anon_sym_truncatewords] = ACTIONS(1),
    [anon_sym_truncatewords_DASHhtml] = ACTIONS(1),
    [anon_sym_unordered_DASHlist] = ACTIONS(1),
    [anon_sym_upper] = ACTIONS(1),
    [anon_sym_wordcount] = ACTIONS(1),
    [anon_sym_wordwrap] = ACTIONS(1),
    [anon_sym_yesno] = ACTIONS(1),
    [sym__start_tag_name] = ACTIONS(1),
    [sym__script_start_tag_name] = ACTIONS(1),
    [sym__style_start_tag_name] = ACTIONS(1),
    [sym__end_tag_name] = ACTIONS(1),
    [sym_erroneous_end_tag_name] = ACTIONS(1),
    [sym__implicit_end_tag] = ACTIONS(1),
    [sym_raw_text] = ACTIONS(1),
    [sym_comment] = ACTIONS(3),
  },
  [1] = {
    [sym_document] = STATE(100),
    [sym_html] = STATE(14),
    [sym_doctype] = STATE(42),
    [sym__node] = STATE(42),
    [sym_element] = STATE(42),
    [sym_script_element] = STATE(42),
    [sym_style_element] = STATE(42),
    [sym_start_tag] = STATE(11),
    [sym_script_start_tag] = STATE(71),
    [sym_style_start_tag] = STATE(66),
    [sym_self_closing_tag] = STATE(18),
    [sym_erroneous_end_tag] = STATE(42),
    [sym_text] = STATE(42),
    [sym_directive] = STATE(19),
    [sym_variable] = STATE(19),
    [aux_sym_document_repeat1] = STATE(14),
    [ts_builtin_sym_end] = ACTIONS(5),
    [anon_sym_LT_BANG] = ACTIONS(7),
    [anon_sym_LT] = ACTIONS(9),
    [anon_sym_LT_SLASH] = ACTIONS(11),
    [sym_entity] = ACTIONS(13),
    [aux_sym_text_token1] = ACTIONS(15),
    [anon_sym_LBRACE_PERCENT] = ACTIONS(17),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(19),
    [sym_comment] = ACTIONS(3),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(21), 1,
      aux_sym_text_token1,
    ACTIONS(23), 1,
      anon_sym_PERCENT_RBRACE,
    STATE(8), 1,
      sym__keyword_list,
    STATE(6), 3,
      sym_keyword,
      sym_identifier,
      aux_sym_directive_repeat1,
    ACTIONS(25), 27,
      anon_sym_end_LBRACKobjectObject_RBRACK,
      anon_sym_autoescape,
      anon_sym_block,
      anon_sym_comment,
      anon_sym_csrf_DASHtoken,
      anon_sym_cycle,
      anon_sym_debug,
      anon_sym_extends,
      anon_sym_filter,
      anon_sym_firstof,
      anon_sym_for,
      anon_sym_empty,
      anon_sym_if,
      anon_sym_in,
      anon_sym_ifchanged,
      anon_sym_include,
      anon_sym_load,
      anon_sym_lorem,
      anon_sym_now,
      anon_sym_regroup,
      anon_sym_resetcycle,
      anon_sym_spaceless,
      anon_sym_templatetag,
      anon_sym_url,
      anon_sym_verbatim,
      anon_sym_widthratio,
      anon_sym_with,
  [47] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(21), 1,
      aux_sym_text_token1,
    ACTIONS(27), 1,
      anon_sym_PERCENT_RBRACE,
    STATE(8), 1,
      sym__keyword_list,
    STATE(6), 3,
      sym_keyword,
      sym_identifier,
      aux_sym_directive_repeat1,
    ACTIONS(25), 27,
      anon_sym_end_LBRACKobjectObject_RBRACK,
      anon_sym_autoescape,
      anon_sym_block,
      anon_sym_comment,
      anon_sym_csrf_DASHtoken,
      anon_sym_cycle,
      anon_sym_debug,
      anon_sym_extends,
      anon_sym_filter,
      anon_sym_firstof,
      anon_sym_for,
      anon_sym_empty,
      anon_sym_if,
      anon_sym_in,
      anon_sym_ifchanged,
      anon_sym_include,
      anon_sym_load,
      anon_sym_lorem,
      anon_sym_now,
      anon_sym_regroup,
      anon_sym_resetcycle,
      anon_sym_spaceless,
      anon_sym_templatetag,
      anon_sym_url,
      anon_sym_verbatim,
      anon_sym_widthratio,
      anon_sym_with,
  [94] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(21), 1,
      aux_sym_text_token1,
    ACTIONS(29), 1,
      anon_sym_PERCENT_RBRACE,
    STATE(8), 1,
      sym__keyword_list,
    STATE(2), 3,
      sym_keyword,
      sym_identifier,
      aux_sym_directive_repeat1,
    ACTIONS(25), 27,
      anon_sym_end_LBRACKobjectObject_RBRACK,
      anon_sym_autoescape,
      anon_sym_block,
      anon_sym_comment,
      anon_sym_csrf_DASHtoken,
      anon_sym_cycle,
      anon_sym_debug,
      anon_sym_extends,
      anon_sym_filter,
      anon_sym_firstof,
      anon_sym_for,
      anon_sym_empty,
      anon_sym_if,
      anon_sym_in,
      anon_sym_ifchanged,
      anon_sym_include,
      anon_sym_load,
      anon_sym_lorem,
      anon_sym_now,
      anon_sym_regroup,
      anon_sym_resetcycle,
      anon_sym_spaceless,
      anon_sym_templatetag,
      anon_sym_url,
      anon_sym_verbatim,
      anon_sym_widthratio,
      anon_sym_with,
  [141] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(21), 1,
      aux_sym_text_token1,
    ACTIONS(31), 1,
      anon_sym_PERCENT_RBRACE,
    STATE(8), 1,
      sym__keyword_list,
    STATE(3), 3,
      sym_keyword,
      sym_identifier,
      aux_sym_directive_repeat1,
    ACTIONS(25), 27,
      anon_sym_end_LBRACKobjectObject_RBRACK,
      anon_sym_autoescape,
      anon_sym_block,
      anon_sym_comment,
      anon_sym_csrf_DASHtoken,
      anon_sym_cycle,
      anon_sym_debug,
      anon_sym_extends,
      anon_sym_filter,
      anon_sym_firstof,
      anon_sym_for,
      anon_sym_empty,
      anon_sym_if,
      anon_sym_in,
      anon_sym_ifchanged,
      anon_sym_include,
      anon_sym_load,
      anon_sym_lorem,
      anon_sym_now,
      anon_sym_regroup,
      anon_sym_resetcycle,
      anon_sym_spaceless,
      anon_sym_templatetag,
      anon_sym_url,
      anon_sym_verbatim,
      anon_sym_widthratio,
      anon_sym_with,
  [188] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(33), 1,
      aux_sym_text_token1,
    ACTIONS(36), 1,
      anon_sym_PERCENT_RBRACE,
    STATE(8), 1,
      sym__keyword_list,
    STATE(6), 3,
      sym_keyword,
      sym_identifier,
      aux_sym_directive_repeat1,
    ACTIONS(38), 27,
      anon_sym_end_LBRACKobjectObject_RBRACK,
      anon_sym_autoescape,
      anon_sym_block,
      anon_sym_comment,
      anon_sym_csrf_DASHtoken,
      anon_sym_cycle,
      anon_sym_debug,
      anon_sym_extends,
      anon_sym_filter,
      anon_sym_firstof,
      anon_sym_for,
      anon_sym_empty,
      anon_sym_if,
      anon_sym_in,
      anon_sym_ifchanged,
      anon_sym_include,
      anon_sym_load,
      anon_sym_lorem,
      anon_sym_now,
      anon_sym_regroup,
      anon_sym_resetcycle,
      anon_sym_spaceless,
      anon_sym_templatetag,
      anon_sym_url,
      anon_sym_verbatim,
      anon_sym_widthratio,
      anon_sym_with,
  [235] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(43), 2,
      anon_sym_PERCENT_RBRACE,
      anon_sym_RBRACE_RBRACE,
    ACTIONS(41), 28,
      aux_sym_text_token1,
      anon_sym_end_LBRACKobjectObject_RBRACK,
      anon_sym_autoescape,
      anon_sym_block,
      anon_sym_comment,
      anon_sym_csrf_DASHtoken,
      anon_sym_cycle,
      anon_sym_debug,
      anon_sym_extends,
      anon_sym_filter,
      anon_sym_firstof,
      anon_sym_for,
      anon_sym_empty,
      anon_sym_if,
      anon_sym_in,
      anon_sym_ifchanged,
      anon_sym_include,
      anon_sym_load,
      anon_sym_lorem,
      anon_sym_now,
      anon_sym_regroup,
      anon_sym_resetcycle,
      anon_sym_spaceless,
      anon_sym_templatetag,
      anon_sym_url,
      anon_sym_verbatim,
      anon_sym_widthratio,
      anon_sym_with,
  [273] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(47), 1,
      anon_sym_PERCENT_RBRACE,
    ACTIONS(45), 28,
      aux_sym_text_token1,
      anon_sym_end_LBRACKobjectObject_RBRACK,
      anon_sym_autoescape,
      anon_sym_block,
      anon_sym_comment,
      anon_sym_csrf_DASHtoken,
      anon_sym_cycle,
      anon_sym_debug,
      anon_sym_extends,
      anon_sym_filter,
      anon_sym_firstof,
      anon_sym_for,
      anon_sym_empty,
      anon_sym_if,
      anon_sym_in,
      anon_sym_ifchanged,
      anon_sym_include,
      anon_sym_load,
      anon_sym_lorem,
      anon_sym_now,
      anon_sym_regroup,
      anon_sym_resetcycle,
      anon_sym_spaceless,
      anon_sym_templatetag,
      anon_sym_url,
      anon_sym_verbatim,
      anon_sym_widthratio,
      anon_sym_with,
  [310] = 16,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(49), 1,
      anon_sym_LT_BANG,
    ACTIONS(51), 1,
      anon_sym_LT,
    ACTIONS(53), 1,
      anon_sym_LT_SLASH,
    ACTIONS(55), 1,
      sym_entity,
    ACTIONS(57), 1,
      aux_sym_text_token1,
    ACTIONS(59), 1,
      anon_sym_LBRACE_PERCENT,
    ACTIONS(61), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(63), 1,
      sym__implicit_end_tag,
    STATE(10), 1,
      sym_start_tag,
    STATE(22), 1,
      sym_end_tag,
    STATE(39), 1,
      sym_self_closing_tag,
    STATE(68), 1,
      sym_style_start_tag,
    STATE(69), 1,
      sym_script_start_tag,
    STATE(28), 2,
      sym_directive,
      sym_variable,
    STATE(15), 8,
      sym_doctype,
      sym__node,
      sym_element,
      sym_script_element,
      sym_style_element,
      sym_erroneous_end_tag,
      sym_text,
      aux_sym_element_repeat1,
  [367] = 16,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(49), 1,
      anon_sym_LT_BANG,
    ACTIONS(51), 1,
      anon_sym_LT,
    ACTIONS(53), 1,
      anon_sym_LT_SLASH,
    ACTIONS(57), 1,
      aux_sym_text_token1,
    ACTIONS(59), 1,
      anon_sym_LBRACE_PERCENT,
    ACTIONS(61), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(65), 1,
      sym_entity,
    ACTIONS(67), 1,
      sym__implicit_end_tag,
    STATE(10), 1,
      sym_start_tag,
    STATE(33), 1,
      sym_end_tag,
    STATE(39), 1,
      sym_self_closing_tag,
    STATE(68), 1,
      sym_style_start_tag,
    STATE(69), 1,
      sym_script_start_tag,
    STATE(28), 2,
      sym_directive,
      sym_variable,
    STATE(9), 8,
      sym_doctype,
      sym__node,
      sym_element,
      sym_script_element,
      sym_style_element,
      sym_erroneous_end_tag,
      sym_text,
      aux_sym_element_repeat1,
  [424] = 16,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(49), 1,
      anon_sym_LT_BANG,
    ACTIONS(51), 1,
      anon_sym_LT,
    ACTIONS(57), 1,
      aux_sym_text_token1,
    ACTIONS(59), 1,
      anon_sym_LBRACE_PERCENT,
    ACTIONS(61), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(69), 1,
      anon_sym_LT_SLASH,
    ACTIONS(71), 1,
      sym_entity,
    ACTIONS(73), 1,
      sym__implicit_end_tag,
    STATE(10), 1,
      sym_start_tag,
    STATE(16), 1,
      sym_end_tag,
    STATE(39), 1,
      sym_self_closing_tag,
    STATE(68), 1,
      sym_style_start_tag,
    STATE(69), 1,
      sym_script_start_tag,
    STATE(28), 2,
      sym_directive,
      sym_variable,
    STATE(13), 8,
      sym_doctype,
      sym__node,
      sym_element,
      sym_script_element,
      sym_style_element,
      sym_erroneous_end_tag,
      sym_text,
      aux_sym_element_repeat1,
  [481] = 16,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(75), 1,
      ts_builtin_sym_end,
    ACTIONS(77), 1,
      anon_sym_LT_BANG,
    ACTIONS(80), 1,
      anon_sym_LT,
    ACTIONS(83), 1,
      anon_sym_LT_SLASH,
    ACTIONS(86), 1,
      sym_entity,
    ACTIONS(89), 1,
      aux_sym_text_token1,
    ACTIONS(92), 1,
      anon_sym_LBRACE_PERCENT,
    ACTIONS(95), 1,
      anon_sym_LBRACE_LBRACE,
    STATE(11), 1,
      sym_start_tag,
    STATE(18), 1,
      sym_self_closing_tag,
    STATE(66), 1,
      sym_style_start_tag,
    STATE(71), 1,
      sym_script_start_tag,
    STATE(12), 2,
      sym_html,
      aux_sym_document_repeat1,
    STATE(19), 2,
      sym_directive,
      sym_variable,
    STATE(42), 7,
      sym_doctype,
      sym__node,
      sym_element,
      sym_script_element,
      sym_style_element,
      sym_erroneous_end_tag,
      sym_text,
  [538] = 16,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(49), 1,
      anon_sym_LT_BANG,
    ACTIONS(51), 1,
      anon_sym_LT,
    ACTIONS(55), 1,
      sym_entity,
    ACTIONS(57), 1,
      aux_sym_text_token1,
    ACTIONS(59), 1,
      anon_sym_LBRACE_PERCENT,
    ACTIONS(61), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(69), 1,
      anon_sym_LT_SLASH,
    ACTIONS(98), 1,
      sym__implicit_end_tag,
    STATE(10), 1,
      sym_start_tag,
    STATE(39), 1,
      sym_self_closing_tag,
    STATE(50), 1,
      sym_end_tag,
    STATE(68), 1,
      sym_style_start_tag,
    STATE(69), 1,
      sym_script_start_tag,
    STATE(28), 2,
      sym_directive,
      sym_variable,
    STATE(15), 8,
      sym_doctype,
      sym__node,
      sym_element,
      sym_script_element,
      sym_style_element,
      sym_erroneous_end_tag,
      sym_text,
      aux_sym_element_repeat1,
  [595] = 16,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(7), 1,
      anon_sym_LT_BANG,
    ACTIONS(9), 1,
      anon_sym_LT,
    ACTIONS(11), 1,
      anon_sym_LT_SLASH,
    ACTIONS(13), 1,
      sym_entity,
    ACTIONS(15), 1,
      aux_sym_text_token1,
    ACTIONS(17), 1,
      anon_sym_LBRACE_PERCENT,
    ACTIONS(19), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(100), 1,
      ts_builtin_sym_end,
    STATE(11), 1,
      sym_start_tag,
    STATE(18), 1,
      sym_self_closing_tag,
    STATE(66), 1,
      sym_style_start_tag,
    STATE(71), 1,
      sym_script_start_tag,
    STATE(12), 2,
      sym_html,
      aux_sym_document_repeat1,
    STATE(19), 2,
      sym_directive,
      sym_variable,
    STATE(42), 7,
      sym_doctype,
      sym__node,
      sym_element,
      sym_script_element,
      sym_style_element,
      sym_erroneous_end_tag,
      sym_text,
  [652] = 15,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(102), 1,
      anon_sym_LT_BANG,
    ACTIONS(105), 1,
      anon_sym_LT,
    ACTIONS(108), 1,
      anon_sym_LT_SLASH,
    ACTIONS(111), 1,
      sym_entity,
    ACTIONS(114), 1,
      aux_sym_text_token1,
    ACTIONS(117), 1,
      anon_sym_LBRACE_PERCENT,
    ACTIONS(120), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(123), 1,
      sym__implicit_end_tag,
    STATE(10), 1,
      sym_start_tag,
    STATE(39), 1,
      sym_self_closing_tag,
    STATE(68), 1,
      sym_style_start_tag,
    STATE(69), 1,
      sym_script_start_tag,
    STATE(28), 2,
      sym_directive,
      sym_variable,
    STATE(15), 8,
      sym_doctype,
      sym__node,
      sym_element,
      sym_script_element,
      sym_style_element,
      sym_erroneous_end_tag,
      sym_text,
      aux_sym_element_repeat1,
  [706] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(127), 1,
      anon_sym_LT,
    ACTIONS(125), 7,
      ts_builtin_sym_end,
      anon_sym_LT_BANG,
      anon_sym_LT_SLASH,
      sym_entity,
      aux_sym_text_token1,
      anon_sym_LBRACE_PERCENT,
      anon_sym_LBRACE_LBRACE,
  [722] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(131), 1,
      anon_sym_LT,
    ACTIONS(129), 7,
      sym__implicit_end_tag,
      anon_sym_LT_BANG,
      anon_sym_LT_SLASH,
      sym_entity,
      aux_sym_text_token1,
      anon_sym_LBRACE_PERCENT,
      anon_sym_LBRACE_LBRACE,
  [738] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(135), 1,
      anon_sym_LT,
    ACTIONS(133), 7,
      ts_builtin_sym_end,
      anon_sym_LT_BANG,
      anon_sym_LT_SLASH,
      sym_entity,
      aux_sym_text_token1,
      anon_sym_LBRACE_PERCENT,
      anon_sym_LBRACE_LBRACE,
  [754] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(139), 1,
      anon_sym_LT,
    ACTIONS(137), 7,
      ts_builtin_sym_end,
      anon_sym_LT_BANG,
      anon_sym_LT_SLASH,
      sym_entity,
      aux_sym_text_token1,
      anon_sym_LBRACE_PERCENT,
      anon_sym_LBRACE_LBRACE,
  [770] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(143), 1,
      anon_sym_LT,
    ACTIONS(141), 7,
      sym__implicit_end_tag,
      anon_sym_LT_BANG,
      anon_sym_LT_SLASH,
      sym_entity,
      aux_sym_text_token1,
      anon_sym_LBRACE_PERCENT,
      anon_sym_LBRACE_LBRACE,
  [786] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(147), 1,
      anon_sym_LT,
    ACTIONS(145), 7,
      sym__implicit_end_tag,
      anon_sym_LT_BANG,
      anon_sym_LT_SLASH,
      sym_entity,
      aux_sym_text_token1,
      anon_sym_LBRACE_PERCENT,
      anon_sym_LBRACE_LBRACE,
  [802] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(151), 1,
      anon_sym_LT,
    ACTIONS(149), 7,
      sym__implicit_end_tag,
      anon_sym_LT_BANG,
      anon_sym_LT_SLASH,
      sym_entity,
      aux_sym_text_token1,
      anon_sym_LBRACE_PERCENT,
      anon_sym_LBRACE_LBRACE,
  [818] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(155), 1,
      anon_sym_LT,
    ACTIONS(153), 7,
      sym__implicit_end_tag,
      anon_sym_LT_BANG,
      anon_sym_LT_SLASH,
      sym_entity,
      aux_sym_text_token1,
      anon_sym_LBRACE_PERCENT,
      anon_sym_LBRACE_LBRACE,
  [834] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(159), 1,
      anon_sym_LT,
    ACTIONS(157), 7,
      sym__implicit_end_tag,
      anon_sym_LT_BANG,
      anon_sym_LT_SLASH,
      sym_entity,
      aux_sym_text_token1,
      anon_sym_LBRACE_PERCENT,
      anon_sym_LBRACE_LBRACE,
  [850] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(163), 1,
      anon_sym_LT,
    ACTIONS(161), 7,
      ts_builtin_sym_end,
      anon_sym_LT_BANG,
      anon_sym_LT_SLASH,
      sym_entity,
      aux_sym_text_token1,
      anon_sym_LBRACE_PERCENT,
      anon_sym_LBRACE_LBRACE,
  [866] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(167), 1,
      anon_sym_LT,
    ACTIONS(165), 7,
      sym__implicit_end_tag,
      anon_sym_LT_BANG,
      anon_sym_LT_SLASH,
      sym_entity,
      aux_sym_text_token1,
      anon_sym_LBRACE_PERCENT,
      anon_sym_LBRACE_LBRACE,
  [882] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(171), 1,
      anon_sym_LT,
    ACTIONS(169), 7,
      sym__implicit_end_tag,
      anon_sym_LT_BANG,
      anon_sym_LT_SLASH,
      sym_entity,
      aux_sym_text_token1,
      anon_sym_LBRACE_PERCENT,
      anon_sym_LBRACE_LBRACE,
  [898] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(139), 1,
      anon_sym_LT,
    ACTIONS(137), 7,
      sym__implicit_end_tag,
      anon_sym_LT_BANG,
      anon_sym_LT_SLASH,
      sym_entity,
      aux_sym_text_token1,
      anon_sym_LBRACE_PERCENT,
      anon_sym_LBRACE_LBRACE,
  [914] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(143), 1,
      anon_sym_LT,
    ACTIONS(141), 7,
      ts_builtin_sym_end,
      anon_sym_LT_BANG,
      anon_sym_LT_SLASH,
      sym_entity,
      aux_sym_text_token1,
      anon_sym_LBRACE_PERCENT,
      anon_sym_LBRACE_LBRACE,
  [930] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(175), 1,
      anon_sym_LT,
    ACTIONS(173), 7,
      sym__implicit_end_tag,
      anon_sym_LT_BANG,
      anon_sym_LT_SLASH,
      sym_entity,
      aux_sym_text_token1,
      anon_sym_LBRACE_PERCENT,
      anon_sym_LBRACE_LBRACE,
  [946] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(179), 1,
      anon_sym_LT,
    ACTIONS(177), 7,
      sym__implicit_end_tag,
      anon_sym_LT_BANG,
      anon_sym_LT_SLASH,
      sym_entity,
      aux_sym_text_token1,
      anon_sym_LBRACE_PERCENT,
      anon_sym_LBRACE_LBRACE,
  [962] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(179), 1,
      anon_sym_LT,
    ACTIONS(177), 7,
      ts_builtin_sym_end,
      anon_sym_LT_BANG,
      anon_sym_LT_SLASH,
      sym_entity,
      aux_sym_text_token1,
      anon_sym_LBRACE_PERCENT,
      anon_sym_LBRACE_LBRACE,
  [978] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(127), 1,
      anon_sym_LT,
    ACTIONS(125), 7,
      sym__implicit_end_tag,
      anon_sym_LT_BANG,
      anon_sym_LT_SLASH,
      sym_entity,
      aux_sym_text_token1,
      anon_sym_LBRACE_PERCENT,
      anon_sym_LBRACE_LBRACE,
  [994] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(175), 1,
      anon_sym_LT,
    ACTIONS(173), 7,
      ts_builtin_sym_end,
      anon_sym_LT_BANG,
      anon_sym_LT_SLASH,
      sym_entity,
      aux_sym_text_token1,
      anon_sym_LBRACE_PERCENT,
      anon_sym_LBRACE_LBRACE,
  [1010] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(183), 1,
      anon_sym_LT,
    ACTIONS(181), 7,
      sym__implicit_end_tag,
      anon_sym_LT_BANG,
      anon_sym_LT_SLASH,
      sym_entity,
      aux_sym_text_token1,
      anon_sym_LBRACE_PERCENT,
      anon_sym_LBRACE_LBRACE,
  [1026] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(163), 1,
      anon_sym_LT,
    ACTIONS(161), 7,
      sym__implicit_end_tag,
      anon_sym_LT_BANG,
      anon_sym_LT_SLASH,
      sym_entity,
      aux_sym_text_token1,
      anon_sym_LBRACE_PERCENT,
      anon_sym_LBRACE_LBRACE,
  [1042] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(187), 1,
      anon_sym_LT,
    ACTIONS(185), 7,
      sym__implicit_end_tag,
      anon_sym_LT_BANG,
      anon_sym_LT_SLASH,
      sym_entity,
      aux_sym_text_token1,
      anon_sym_LBRACE_PERCENT,
      anon_sym_LBRACE_LBRACE,
  [1058] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(171), 1,
      anon_sym_LT,
    ACTIONS(169), 7,
      ts_builtin_sym_end,
      anon_sym_LT_BANG,
      anon_sym_LT_SLASH,
      sym_entity,
      aux_sym_text_token1,
      anon_sym_LBRACE_PERCENT,
      anon_sym_LBRACE_LBRACE,
  [1074] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(135), 1,
      anon_sym_LT,
    ACTIONS(133), 7,
      sym__implicit_end_tag,
      anon_sym_LT_BANG,
      anon_sym_LT_SLASH,
      sym_entity,
      aux_sym_text_token1,
      anon_sym_LBRACE_PERCENT,
      anon_sym_LBRACE_LBRACE,
  [1090] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(139), 1,
      anon_sym_LT,
    ACTIONS(137), 7,
      sym__implicit_end_tag,
      anon_sym_LT_BANG,
      anon_sym_LT_SLASH,
      sym_entity,
      aux_sym_text_token1,
      anon_sym_LBRACE_PERCENT,
      anon_sym_LBRACE_LBRACE,
  [1106] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(191), 1,
      anon_sym_LT,
    ACTIONS(189), 7,
      ts_builtin_sym_end,
      anon_sym_LT_BANG,
      anon_sym_LT_SLASH,
      sym_entity,
      aux_sym_text_token1,
      anon_sym_LBRACE_PERCENT,
      anon_sym_LBRACE_LBRACE,
  [1122] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(195), 1,
      anon_sym_LT,
    ACTIONS(193), 7,
      ts_builtin_sym_end,
      anon_sym_LT_BANG,
      anon_sym_LT_SLASH,
      sym_entity,
      aux_sym_text_token1,
      anon_sym_LBRACE_PERCENT,
      anon_sym_LBRACE_LBRACE,
  [1138] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(131), 1,
      anon_sym_LT,
    ACTIONS(129), 7,
      ts_builtin_sym_end,
      anon_sym_LT_BANG,
      anon_sym_LT_SLASH,
      sym_entity,
      aux_sym_text_token1,
      anon_sym_LBRACE_PERCENT,
      anon_sym_LBRACE_LBRACE,
  [1154] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(199), 1,
      anon_sym_LT,
    ACTIONS(197), 7,
      sym__implicit_end_tag,
      anon_sym_LT_BANG,
      anon_sym_LT_SLASH,
      sym_entity,
      aux_sym_text_token1,
      anon_sym_LBRACE_PERCENT,
      anon_sym_LBRACE_LBRACE,
  [1170] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(167), 1,
      anon_sym_LT,
    ACTIONS(165), 7,
      ts_builtin_sym_end,
      anon_sym_LT_BANG,
      anon_sym_LT_SLASH,
      sym_entity,
      aux_sym_text_token1,
      anon_sym_LBRACE_PERCENT,
      anon_sym_LBRACE_LBRACE,
  [1186] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(159), 1,
      anon_sym_LT,
    ACTIONS(157), 7,
      ts_builtin_sym_end,
      anon_sym_LT_BANG,
      anon_sym_LT_SLASH,
      sym_entity,
      aux_sym_text_token1,
      anon_sym_LBRACE_PERCENT,
      anon_sym_LBRACE_LBRACE,
  [1202] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(191), 1,
      anon_sym_LT,
    ACTIONS(189), 7,
      sym__implicit_end_tag,
      anon_sym_LT_BANG,
      anon_sym_LT_SLASH,
      sym_entity,
      aux_sym_text_token1,
      anon_sym_LBRACE_PERCENT,
      anon_sym_LBRACE_LBRACE,
  [1218] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(155), 1,
      anon_sym_LT,
    ACTIONS(153), 7,
      ts_builtin_sym_end,
      anon_sym_LT_BANG,
      anon_sym_LT_SLASH,
      sym_entity,
      aux_sym_text_token1,
      anon_sym_LBRACE_PERCENT,
      anon_sym_LBRACE_LBRACE,
  [1234] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(183), 1,
      anon_sym_LT,
    ACTIONS(181), 7,
      ts_builtin_sym_end,
      anon_sym_LT_BANG,
      anon_sym_LT_SLASH,
      sym_entity,
      aux_sym_text_token1,
      anon_sym_LBRACE_PERCENT,
      anon_sym_LBRACE_LBRACE,
  [1250] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(151), 1,
      anon_sym_LT,
    ACTIONS(149), 7,
      ts_builtin_sym_end,
      anon_sym_LT_BANG,
      anon_sym_LT_SLASH,
      sym_entity,
      aux_sym_text_token1,
      anon_sym_LBRACE_PERCENT,
      anon_sym_LBRACE_LBRACE,
  [1266] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(139), 1,
      anon_sym_LT,
    ACTIONS(137), 7,
      ts_builtin_sym_end,
      anon_sym_LT_BANG,
      anon_sym_LT_SLASH,
      sym_entity,
      aux_sym_text_token1,
      anon_sym_LBRACE_PERCENT,
      anon_sym_LBRACE_LBRACE,
  [1282] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(147), 1,
      anon_sym_LT,
    ACTIONS(145), 7,
      ts_builtin_sym_end,
      anon_sym_LT_BANG,
      anon_sym_LT_SLASH,
      sym_entity,
      aux_sym_text_token1,
      anon_sym_LBRACE_PERCENT,
      anon_sym_LBRACE_LBRACE,
  [1298] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(203), 1,
      sym_attribute_name,
    ACTIONS(201), 2,
      anon_sym_GT,
      anon_sym_SLASH_GT,
    STATE(53), 2,
      sym_attribute,
      aux_sym_start_tag_repeat1,
  [1313] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(206), 1,
      anon_sym_GT,
    ACTIONS(208), 1,
      anon_sym_SLASH_GT,
    ACTIONS(210), 1,
      sym_attribute_name,
    STATE(53), 2,
      sym_attribute,
      aux_sym_start_tag_repeat1,
  [1330] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(206), 1,
      anon_sym_GT,
    ACTIONS(210), 1,
      sym_attribute_name,
    ACTIONS(212), 1,
      anon_sym_SLASH_GT,
    STATE(53), 2,
      sym_attribute,
      aux_sym_start_tag_repeat1,
  [1347] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(210), 1,
      sym_attribute_name,
    ACTIONS(214), 1,
      anon_sym_GT,
    ACTIONS(216), 1,
      anon_sym_SLASH_GT,
    STATE(55), 2,
      sym_attribute,
      aux_sym_start_tag_repeat1,
  [1364] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(210), 1,
      sym_attribute_name,
    ACTIONS(214), 1,
      anon_sym_GT,
    ACTIONS(218), 1,
      anon_sym_SLASH_GT,
    STATE(54), 2,
      sym_attribute,
      aux_sym_start_tag_repeat1,
  [1381] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(220), 1,
      sym_attribute_value,
    ACTIONS(222), 1,
      anon_sym_SQUOTE,
    ACTIONS(224), 1,
      anon_sym_DQUOTE,
    STATE(73), 1,
      sym_quoted_attribute_value,
  [1397] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(226), 1,
      sym_attribute_value,
    ACTIONS(228), 1,
      anon_sym_SQUOTE,
    ACTIONS(230), 1,
      anon_sym_DQUOTE,
    STATE(87), 1,
      sym_quoted_attribute_value,
  [1413] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(232), 1,
      anon_sym_GT,
    ACTIONS(234), 1,
      sym_attribute_name,
    STATE(61), 2,
      sym_attribute,
      aux_sym_start_tag_repeat1,
  [1427] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(201), 1,
      anon_sym_GT,
    ACTIONS(236), 1,
      sym_attribute_name,
    STATE(61), 2,
      sym_attribute,
      aux_sym_start_tag_repeat1,
  [1441] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(234), 1,
      sym_attribute_name,
    ACTIONS(239), 1,
      anon_sym_GT,
    STATE(61), 2,
      sym_attribute,
      aux_sym_start_tag_repeat1,
  [1455] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(234), 1,
      sym_attribute_name,
    ACTIONS(241), 1,
      anon_sym_GT,
    STATE(62), 2,
      sym_attribute,
      aux_sym_start_tag_repeat1,
  [1469] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(234), 1,
      sym_attribute_name,
    ACTIONS(243), 1,
      anon_sym_GT,
    STATE(60), 2,
      sym_attribute,
      aux_sym_start_tag_repeat1,
  [1483] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(247), 1,
      anon_sym_EQ,
    ACTIONS(245), 3,
      anon_sym_GT,
      anon_sym_SLASH_GT,
      sym_attribute_name,
  [1495] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(249), 1,
      anon_sym_LT_SLASH,
    ACTIONS(251), 1,
      sym_raw_text,
    STATE(34), 1,
      sym_end_tag,
  [1508] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(253), 1,
      anon_sym_EQ,
    ACTIONS(245), 2,
      anon_sym_GT,
      sym_attribute_name,
  [1519] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(255), 1,
      anon_sym_LT_SLASH,
    ACTIONS(257), 1,
      sym_raw_text,
    STATE(30), 1,
      sym_end_tag,
  [1532] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(255), 1,
      anon_sym_LT_SLASH,
    ACTIONS(259), 1,
      sym_raw_text,
    STATE(31), 1,
      sym_end_tag,
  [1545] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(261), 3,
      anon_sym_GT,
      anon_sym_SLASH_GT,
      sym_attribute_name,
  [1554] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(249), 1,
      anon_sym_LT_SLASH,
    ACTIONS(263), 1,
      sym_raw_text,
    STATE(32), 1,
      sym_end_tag,
  [1567] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(265), 1,
      sym__start_tag_name,
    ACTIONS(267), 1,
      sym__script_start_tag_name,
    ACTIONS(269), 1,
      sym__style_start_tag_name,
  [1580] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(271), 3,
      anon_sym_GT,
      anon_sym_SLASH_GT,
      sym_attribute_name,
  [1589] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(267), 1,
      sym__script_start_tag_name,
    ACTIONS(269), 1,
      sym__style_start_tag_name,
    ACTIONS(273), 1,
      sym__start_tag_name,
  [1602] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(275), 3,
      anon_sym_GT,
      anon_sym_SLASH_GT,
      sym_attribute_name,
  [1611] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(277), 1,
      anon_sym_DQUOTE,
    ACTIONS(279), 1,
      aux_sym_quoted_attribute_value_token2,
  [1621] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(249), 1,
      anon_sym_LT_SLASH,
    STATE(52), 1,
      sym_end_tag,
  [1631] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(281), 1,
      sym__end_tag_name,
    ACTIONS(283), 1,
      sym_erroneous_end_tag_name,
  [1641] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(285), 1,
      anon_sym_SQUOTE,
    ACTIONS(287), 1,
      aux_sym_quoted_attribute_value_token1,
  [1651] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(289), 2,
      sym_raw_text,
      anon_sym_LT_SLASH,
  [1659] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(283), 1,
      sym_erroneous_end_tag_name,
    ACTIONS(291), 1,
      sym__end_tag_name,
  [1669] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(277), 1,
      anon_sym_SQUOTE,
    ACTIONS(293), 1,
      aux_sym_quoted_attribute_value_token1,
  [1679] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(295), 2,
      sym_raw_text,
      anon_sym_LT_SLASH,
  [1687] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(255), 1,
      anon_sym_LT_SLASH,
    STATE(20), 1,
      sym_end_tag,
  [1697] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(285), 1,
      anon_sym_DQUOTE,
    ACTIONS(297), 1,
      aux_sym_quoted_attribute_value_token2,
  [1707] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(249), 1,
      anon_sym_LT_SLASH,
    STATE(29), 1,
      sym_end_tag,
  [1717] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(271), 2,
      anon_sym_GT,
      sym_attribute_name,
  [1725] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(275), 2,
      anon_sym_GT,
      sym_attribute_name,
  [1733] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(261), 2,
      anon_sym_GT,
      sym_attribute_name,
  [1741] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(255), 1,
      anon_sym_LT_SLASH,
    STATE(21), 1,
      sym_end_tag,
  [1751] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(299), 1,
      aux_sym_text_token1,
    STATE(106), 1,
      sym_identifier,
  [1761] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(301), 2,
      sym_raw_text,
      anon_sym_LT_SLASH,
  [1769] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(299), 1,
      aux_sym_text_token1,
    STATE(97), 1,
      sym_identifier,
  [1779] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(303), 2,
      sym_raw_text,
      anon_sym_LT_SLASH,
  [1787] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(305), 1,
      anon_sym_GT,
  [1794] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(307), 1,
      sym_erroneous_end_tag_name,
  [1801] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(309), 1,
      anon_sym_RBRACE_RBRACE,
  [1808] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(311), 1,
      anon_sym_GT,
  [1815] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(313), 1,
      anon_sym_SQUOTE,
  [1822] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(315), 1,
      ts_builtin_sym_end,
  [1829] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(317), 1,
      anon_sym_GT,
  [1836] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(319), 1,
      sym__doctype,
  [1843] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(321), 1,
      anon_sym_GT,
  [1850] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(323), 1,
      aux_sym_doctype_token1,
  [1857] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(325), 1,
      anon_sym_GT,
  [1864] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(327), 1,
      anon_sym_RBRACE_RBRACE,
  [1871] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(329), 1,
      anon_sym_SQUOTE,
  [1878] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(329), 1,
      anon_sym_DQUOTE,
  [1885] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(281), 1,
      sym__end_tag_name,
  [1892] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(283), 1,
      sym_erroneous_end_tag_name,
  [1899] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(331), 1,
      anon_sym_GT,
  [1906] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(333), 1,
      aux_sym_doctype_token1,
  [1913] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(313), 1,
      anon_sym_DQUOTE,
  [1920] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(291), 1,
      sym__end_tag_name,
  [1927] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(335), 1,
      sym__doctype,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 47,
  [SMALL_STATE(4)] = 94,
  [SMALL_STATE(5)] = 141,
  [SMALL_STATE(6)] = 188,
  [SMALL_STATE(7)] = 235,
  [SMALL_STATE(8)] = 273,
  [SMALL_STATE(9)] = 310,
  [SMALL_STATE(10)] = 367,
  [SMALL_STATE(11)] = 424,
  [SMALL_STATE(12)] = 481,
  [SMALL_STATE(13)] = 538,
  [SMALL_STATE(14)] = 595,
  [SMALL_STATE(15)] = 652,
  [SMALL_STATE(16)] = 706,
  [SMALL_STATE(17)] = 722,
  [SMALL_STATE(18)] = 738,
  [SMALL_STATE(19)] = 754,
  [SMALL_STATE(20)] = 770,
  [SMALL_STATE(21)] = 786,
  [SMALL_STATE(22)] = 802,
  [SMALL_STATE(23)] = 818,
  [SMALL_STATE(24)] = 834,
  [SMALL_STATE(25)] = 850,
  [SMALL_STATE(26)] = 866,
  [SMALL_STATE(27)] = 882,
  [SMALL_STATE(28)] = 898,
  [SMALL_STATE(29)] = 914,
  [SMALL_STATE(30)] = 930,
  [SMALL_STATE(31)] = 946,
  [SMALL_STATE(32)] = 962,
  [SMALL_STATE(33)] = 978,
  [SMALL_STATE(34)] = 994,
  [SMALL_STATE(35)] = 1010,
  [SMALL_STATE(36)] = 1026,
  [SMALL_STATE(37)] = 1042,
  [SMALL_STATE(38)] = 1058,
  [SMALL_STATE(39)] = 1074,
  [SMALL_STATE(40)] = 1090,
  [SMALL_STATE(41)] = 1106,
  [SMALL_STATE(42)] = 1122,
  [SMALL_STATE(43)] = 1138,
  [SMALL_STATE(44)] = 1154,
  [SMALL_STATE(45)] = 1170,
  [SMALL_STATE(46)] = 1186,
  [SMALL_STATE(47)] = 1202,
  [SMALL_STATE(48)] = 1218,
  [SMALL_STATE(49)] = 1234,
  [SMALL_STATE(50)] = 1250,
  [SMALL_STATE(51)] = 1266,
  [SMALL_STATE(52)] = 1282,
  [SMALL_STATE(53)] = 1298,
  [SMALL_STATE(54)] = 1313,
  [SMALL_STATE(55)] = 1330,
  [SMALL_STATE(56)] = 1347,
  [SMALL_STATE(57)] = 1364,
  [SMALL_STATE(58)] = 1381,
  [SMALL_STATE(59)] = 1397,
  [SMALL_STATE(60)] = 1413,
  [SMALL_STATE(61)] = 1427,
  [SMALL_STATE(62)] = 1441,
  [SMALL_STATE(63)] = 1455,
  [SMALL_STATE(64)] = 1469,
  [SMALL_STATE(65)] = 1483,
  [SMALL_STATE(66)] = 1495,
  [SMALL_STATE(67)] = 1508,
  [SMALL_STATE(68)] = 1519,
  [SMALL_STATE(69)] = 1532,
  [SMALL_STATE(70)] = 1545,
  [SMALL_STATE(71)] = 1554,
  [SMALL_STATE(72)] = 1567,
  [SMALL_STATE(73)] = 1580,
  [SMALL_STATE(74)] = 1589,
  [SMALL_STATE(75)] = 1602,
  [SMALL_STATE(76)] = 1611,
  [SMALL_STATE(77)] = 1621,
  [SMALL_STATE(78)] = 1631,
  [SMALL_STATE(79)] = 1641,
  [SMALL_STATE(80)] = 1651,
  [SMALL_STATE(81)] = 1659,
  [SMALL_STATE(82)] = 1669,
  [SMALL_STATE(83)] = 1679,
  [SMALL_STATE(84)] = 1687,
  [SMALL_STATE(85)] = 1697,
  [SMALL_STATE(86)] = 1707,
  [SMALL_STATE(87)] = 1717,
  [SMALL_STATE(88)] = 1725,
  [SMALL_STATE(89)] = 1733,
  [SMALL_STATE(90)] = 1741,
  [SMALL_STATE(91)] = 1751,
  [SMALL_STATE(92)] = 1761,
  [SMALL_STATE(93)] = 1769,
  [SMALL_STATE(94)] = 1779,
  [SMALL_STATE(95)] = 1787,
  [SMALL_STATE(96)] = 1794,
  [SMALL_STATE(97)] = 1801,
  [SMALL_STATE(98)] = 1808,
  [SMALL_STATE(99)] = 1815,
  [SMALL_STATE(100)] = 1822,
  [SMALL_STATE(101)] = 1829,
  [SMALL_STATE(102)] = 1836,
  [SMALL_STATE(103)] = 1843,
  [SMALL_STATE(104)] = 1850,
  [SMALL_STATE(105)] = 1857,
  [SMALL_STATE(106)] = 1864,
  [SMALL_STATE(107)] = 1871,
  [SMALL_STATE(108)] = 1878,
  [SMALL_STATE(109)] = 1885,
  [SMALL_STATE(110)] = 1892,
  [SMALL_STATE(111)] = 1899,
  [SMALL_STATE(112)] = 1906,
  [SMALL_STATE(113)] = 1913,
  [SMALL_STATE(114)] = 1920,
  [SMALL_STATE(115)] = 1927,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT_EXTRA(),
  [5] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_document, 0),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(102),
  [9] = {.entry = {.count = 1, .reusable = false}}, SHIFT(74),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(96),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(91),
  [21] = {.entry = {.count = 1, .reusable = false}}, SHIFT(7),
  [23] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [25] = {.entry = {.count = 1, .reusable = false}}, SHIFT(8),
  [27] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [29] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [31] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [33] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_directive_repeat1, 2), SHIFT_REPEAT(7),
  [36] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_directive_repeat1, 2),
  [38] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_directive_repeat1, 2), SHIFT_REPEAT(8),
  [41] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_identifier, 1),
  [43] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_identifier, 1),
  [45] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_keyword, 1),
  [47] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_keyword, 1),
  [49] = {.entry = {.count = 1, .reusable = true}}, SHIFT(115),
  [51] = {.entry = {.count = 1, .reusable = false}}, SHIFT(72),
  [53] = {.entry = {.count = 1, .reusable = true}}, SHIFT(81),
  [55] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [57] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [59] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [61] = {.entry = {.count = 1, .reusable = true}}, SHIFT(93),
  [63] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [65] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [67] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [69] = {.entry = {.count = 1, .reusable = true}}, SHIFT(78),
  [71] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [73] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [75] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2),
  [77] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(102),
  [80] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(74),
  [83] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(96),
  [86] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(42),
  [89] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(51),
  [92] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(4),
  [95] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(91),
  [98] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [100] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_document, 1),
  [102] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_element_repeat1, 2), SHIFT_REPEAT(115),
  [105] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_element_repeat1, 2), SHIFT_REPEAT(72),
  [108] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_element_repeat1, 2), SHIFT_REPEAT(110),
  [111] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_element_repeat1, 2), SHIFT_REPEAT(15),
  [114] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_element_repeat1, 2), SHIFT_REPEAT(40),
  [117] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_element_repeat1, 2), SHIFT_REPEAT(5),
  [120] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_element_repeat1, 2), SHIFT_REPEAT(93),
  [123] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_element_repeat1, 2),
  [125] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_element, 2),
  [127] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_element, 2),
  [129] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_self_closing_tag, 4),
  [131] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_self_closing_tag, 4),
  [133] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_element, 1),
  [135] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_element, 1),
  [137] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_text, 1),
  [139] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_text, 1),
  [141] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_style_element, 3),
  [143] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_style_element, 3),
  [145] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_script_element, 3),
  [147] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_script_element, 3),
  [149] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_element, 3),
  [151] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_element, 3),
  [153] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable, 3),
  [155] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_variable, 3),
  [157] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_directive, 3),
  [159] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_directive, 3),
  [161] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_directive, 2),
  [163] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_directive, 2),
  [165] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_erroneous_end_tag, 3),
  [167] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_erroneous_end_tag, 3),
  [169] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_self_closing_tag, 3),
  [171] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_self_closing_tag, 3),
  [173] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_style_element, 2),
  [175] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_style_element, 2),
  [177] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_script_element, 2),
  [179] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_script_element, 2),
  [181] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_doctype, 4),
  [183] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_doctype, 4),
  [185] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_start_tag, 3),
  [187] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_start_tag, 3),
  [189] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_end_tag, 3),
  [191] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_end_tag, 3),
  [193] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_html, 1),
  [195] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_html, 1),
  [197] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_start_tag, 4),
  [199] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_start_tag, 4),
  [201] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_start_tag_repeat1, 2),
  [203] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_start_tag_repeat1, 2), SHIFT_REPEAT(65),
  [206] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [208] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [210] = {.entry = {.count = 1, .reusable = true}}, SHIFT(65),
  [212] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [214] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [216] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [218] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [220] = {.entry = {.count = 1, .reusable = true}}, SHIFT(73),
  [222] = {.entry = {.count = 1, .reusable = true}}, SHIFT(82),
  [224] = {.entry = {.count = 1, .reusable = true}}, SHIFT(76),
  [226] = {.entry = {.count = 1, .reusable = true}}, SHIFT(87),
  [228] = {.entry = {.count = 1, .reusable = true}}, SHIFT(79),
  [230] = {.entry = {.count = 1, .reusable = true}}, SHIFT(85),
  [232] = {.entry = {.count = 1, .reusable = true}}, SHIFT(94),
  [234] = {.entry = {.count = 1, .reusable = true}}, SHIFT(67),
  [236] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_start_tag_repeat1, 2), SHIFT_REPEAT(67),
  [239] = {.entry = {.count = 1, .reusable = true}}, SHIFT(83),
  [241] = {.entry = {.count = 1, .reusable = true}}, SHIFT(92),
  [243] = {.entry = {.count = 1, .reusable = true}}, SHIFT(80),
  [245] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_attribute, 1),
  [247] = {.entry = {.count = 1, .reusable = true}}, SHIFT(58),
  [249] = {.entry = {.count = 1, .reusable = true}}, SHIFT(109),
  [251] = {.entry = {.count = 1, .reusable = true}}, SHIFT(86),
  [253] = {.entry = {.count = 1, .reusable = true}}, SHIFT(59),
  [255] = {.entry = {.count = 1, .reusable = true}}, SHIFT(114),
  [257] = {.entry = {.count = 1, .reusable = true}}, SHIFT(84),
  [259] = {.entry = {.count = 1, .reusable = true}}, SHIFT(90),
  [261] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_quoted_attribute_value, 3),
  [263] = {.entry = {.count = 1, .reusable = true}}, SHIFT(77),
  [265] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
  [267] = {.entry = {.count = 1, .reusable = true}}, SHIFT(63),
  [269] = {.entry = {.count = 1, .reusable = true}}, SHIFT(64),
  [271] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_attribute, 3),
  [273] = {.entry = {.count = 1, .reusable = true}}, SHIFT(57),
  [275] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_quoted_attribute_value, 2),
  [277] = {.entry = {.count = 1, .reusable = false}}, SHIFT(75),
  [279] = {.entry = {.count = 1, .reusable = true}}, SHIFT(113),
  [281] = {.entry = {.count = 1, .reusable = true}}, SHIFT(105),
  [283] = {.entry = {.count = 1, .reusable = true}}, SHIFT(98),
  [285] = {.entry = {.count = 1, .reusable = false}}, SHIFT(88),
  [287] = {.entry = {.count = 1, .reusable = true}}, SHIFT(107),
  [289] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_style_start_tag, 3),
  [291] = {.entry = {.count = 1, .reusable = true}}, SHIFT(103),
  [293] = {.entry = {.count = 1, .reusable = true}}, SHIFT(99),
  [295] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_script_start_tag, 4),
  [297] = {.entry = {.count = 1, .reusable = true}}, SHIFT(108),
  [299] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [301] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_script_start_tag, 3),
  [303] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_style_start_tag, 4),
  [305] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [307] = {.entry = {.count = 1, .reusable = true}}, SHIFT(95),
  [309] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [311] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [313] = {.entry = {.count = 1, .reusable = true}}, SHIFT(70),
  [315] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [317] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [319] = {.entry = {.count = 1, .reusable = true}}, SHIFT(104),
  [321] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [323] = {.entry = {.count = 1, .reusable = true}}, SHIFT(111),
  [325] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [327] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [329] = {.entry = {.count = 1, .reusable = true}}, SHIFT(89),
  [331] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [333] = {.entry = {.count = 1, .reusable = true}}, SHIFT(101),
  [335] = {.entry = {.count = 1, .reusable = true}}, SHIFT(112),
};

#ifdef __cplusplus
extern "C" {
#endif
void *tree_sitter_html_external_scanner_create(void);
void tree_sitter_html_external_scanner_destroy(void *);
bool tree_sitter_html_external_scanner_scan(void *, TSLexer *, const bool *);
unsigned tree_sitter_html_external_scanner_serialize(void *, char *);
void tree_sitter_html_external_scanner_deserialize(void *, const char *, unsigned);

#ifdef _WIN32
#define extern __declspec(dllexport)
#endif

extern const TSLanguage *tree_sitter_html(void) {
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
    .external_scanner = {
      &ts_external_scanner_states[0][0],
      ts_external_scanner_symbol_map,
      tree_sitter_html_external_scanner_create,
      tree_sitter_html_external_scanner_destroy,
      tree_sitter_html_external_scanner_scan,
      tree_sitter_html_external_scanner_serialize,
      tree_sitter_html_external_scanner_deserialize,
    },
    .primary_state_ids = ts_primary_state_ids,
  };
  return &language;
}
#ifdef __cplusplus
}
#endif
