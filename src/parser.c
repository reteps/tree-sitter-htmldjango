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
#define STATE_COUNT 115
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 135
#define ALIAS_COUNT 0
#define TOKEN_COUNT 111
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
  sym_identifier = 102,
  sym__start_tag_name = 103,
  sym__script_start_tag_name = 104,
  sym__style_start_tag_name = 105,
  sym__end_tag_name = 106,
  sym_erroneous_end_tag_name = 107,
  sym__implicit_end_tag = 108,
  sym_raw_text = 109,
  sym_comment = 110,
  sym_document = 111,
  sym_html = 112,
  sym_doctype = 113,
  sym__node = 114,
  sym_element = 115,
  sym_script_element = 116,
  sym_style_element = 117,
  sym_start_tag = 118,
  sym_script_start_tag = 119,
  sym_style_start_tag = 120,
  sym_self_closing_tag = 121,
  sym_end_tag = 122,
  sym_erroneous_end_tag = 123,
  sym_attribute = 124,
  sym_quoted_attribute_value = 125,
  sym_text = 126,
  sym_directive = 127,
  sym_variable = 128,
  sym_keyword = 129,
  sym__keyword_list = 130,
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
  [sym_identifier] = "identifier",
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
  [sym_identifier] = sym_identifier,
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
  [sym_identifier] = {
    .visible = true,
    .named = true,
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
  [3] = 3,
  [4] = 3,
  [5] = 5,
  [6] = 2,
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
  [25] = 19,
  [26] = 24,
  [27] = 27,
  [28] = 23,
  [29] = 29,
  [30] = 30,
  [31] = 31,
  [32] = 32,
  [33] = 22,
  [34] = 34,
  [35] = 21,
  [36] = 27,
  [37] = 37,
  [38] = 18,
  [39] = 39,
  [40] = 40,
  [41] = 16,
  [42] = 34,
  [43] = 43,
  [44] = 44,
  [45] = 17,
  [46] = 31,
  [47] = 32,
  [48] = 15,
  [49] = 39,
  [50] = 44,
  [51] = 40,
  [52] = 52,
  [53] = 53,
  [54] = 52,
  [55] = 55,
  [56] = 55,
  [57] = 57,
  [58] = 53,
  [59] = 59,
  [60] = 60,
  [61] = 57,
  [62] = 62,
  [63] = 63,
  [64] = 64,
  [65] = 65,
  [66] = 66,
  [67] = 67,
  [68] = 68,
  [69] = 69,
  [70] = 70,
  [71] = 66,
  [72] = 70,
  [73] = 60,
  [74] = 67,
  [75] = 75,
  [76] = 76,
  [77] = 77,
  [78] = 75,
  [79] = 79,
  [80] = 80,
  [81] = 81,
  [82] = 79,
  [83] = 77,
  [84] = 76,
  [85] = 85,
  [86] = 65,
  [87] = 68,
  [88] = 69,
  [89] = 89,
  [90] = 90,
  [91] = 89,
  [92] = 92,
  [93] = 93,
  [94] = 94,
  [95] = 95,
  [96] = 93,
  [97] = 97,
  [98] = 98,
  [99] = 99,
  [100] = 98,
  [101] = 101,
  [102] = 101,
  [103] = 103,
  [104] = 104,
  [105] = 105,
  [106] = 97,
  [107] = 94,
  [108] = 92,
  [109] = 95,
  [110] = 99,
  [111] = 111,
  [112] = 111,
  [113] = 103,
  [114] = 104,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(419);
      if (lookahead == '"') ADVANCE(474);
      if (lookahead == '%') ADVANCE(405);
      if (lookahead == '&') ADVANCE(4);
      if (lookahead == '\'') ADVANCE(471);
      if (lookahead == '/') ADVANCE(15);
      if (lookahead == '<') ADVANCE(425);
      if (lookahead == '=') ADVANCE(428);
      if (lookahead == '>') ADVANCE(423);
      if (lookahead == 'D') ADVANCE(409);
      if (lookahead == 'a') ADVANCE(73);
      if (lookahead == 'b') ADVANCE(206);
      if (lookahead == 'c') ADVANCE(20);
      if (lookahead == 'd') ADVANCE(25);
      if (lookahead == 'e') ADVANCE(222);
      if (lookahead == 'f') ADVANCE(170);
      if (lookahead == 'g') ADVANCE(111);
      if (lookahead == 'i') ADVANCE(142);
      if (lookahead == 'j') ADVANCE(260);
      if (lookahead == 'l') ADVANCE(21);
      if (lookahead == 'm') ADVANCE(22);
      if (lookahead == 'n') ADVANCE(257);
      if (lookahead == 'p') ADVANCE(163);
      if (lookahead == 'r') ADVANCE(27);
      if (lookahead == 's') ADVANCE(23);
      if (lookahead == 't') ADVANCE(107);
      if (lookahead == 'u') ADVANCE(244);
      if (lookahead == 'v') ADVANCE(113);
      if (lookahead == 'w') ADVANCE(171);
      if (lookahead == 'y') ADVANCE(108);
      if (lookahead == '{') ADVANCE(6);
      if (lookahead == '}') ADVANCE(406);
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
      if (lookahead == '#') ADVANCE(412);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(470);
      END_STATE();
    case 5:
      if (lookahead == '%') ADVANCE(405);
      if (lookahead == 'a') ADVANCE(699);
      if (lookahead == 'b') ADVANCE(647);
      if (lookahead == 'c') ADVANCE(662);
      if (lookahead == 'd') ADVANCE(612);
      if (lookahead == 'e') ADVANCE(655);
      if (lookahead == 'f') ADVANCE(640);
      if (lookahead == 'i') ADVANCE(630);
      if (lookahead == 'l') ADVANCE(663);
      if (lookahead == 'n') ADVANCE(664);
      if (lookahead == 'r') ADVANCE(613);
      if (lookahead == 's') ADVANCE(670);
      if (lookahead == 't') ADVANCE(619);
      if (lookahead == 'u') ADVANCE(678);
      if (lookahead == 'v') ADVANCE(622);
      if (lookahead == 'w') ADVANCE(641);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(5)
      if (('g' <= lookahead && lookahead <= 'z')) ADVANCE(706);
      END_STATE();
    case 6:
      if (lookahead == '%') ADVANCE(478);
      if (lookahead == '{') ADVANCE(480);
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
      if (lookahead == '-') ADVANCE(83);
      END_STATE();
    case 9:
      if (lookahead == '-') ADVANCE(330);
      END_STATE();
    case 10:
      if (lookahead == '-') ADVANCE(209);
      END_STATE();
    case 11:
      if (lookahead == '-') ADVANCE(380);
      END_STATE();
    case 12:
      if (lookahead == '-') ADVANCE(218);
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
      if (lookahead == '2') ADVANCE(246);
      END_STATE();
    case 15:
      if (lookahead == '>') ADVANCE(426);
      END_STATE();
    case 16:
      if (lookahead == 'O') ADVANCE(54);
      END_STATE();
    case 17:
      if (lookahead == '[') ADVANCE(261);
      END_STATE();
    case 18:
      if (lookahead == ']') ADVANCE(482);
      END_STATE();
    case 19:
      if (lookahead == '_') ADVANCE(256);
      END_STATE();
    case 20:
      if (lookahead == 'a') ADVANCE(281);
      if (lookahead == 'e') ADVANCE(240);
      if (lookahead == 'o') ADVANCE(223);
      if (lookahead == 's') ADVANCE(297);
      if (lookahead == 'u') ADVANCE(345);
      if (lookahead == 'y') ADVANCE(58);
      END_STATE();
    case 21:
      if (lookahead == 'a') ADVANCE(331);
      if (lookahead == 'e') ADVANCE(234);
      if (lookahead == 'i') ADVANCE(243);
      if (lookahead == 'j') ADVANCE(394);
      if (lookahead == 'o') ADVANCE(24);
      END_STATE();
    case 22:
      if (lookahead == 'a') ADVANCE(198);
      END_STATE();
    case 23:
      if (lookahead == 'a') ADVANCE(148);
      if (lookahead == 'l') ADVANCE(175);
      if (lookahead == 'p') ADVANCE(43);
      if (lookahead == 't') ADVANCE(300);
      END_STATE();
    case 24:
      if (lookahead == 'a') ADVANCE(76);
      if (lookahead == 'r') ADVANCE(112);
      if (lookahead == 'w') ADVANCE(119);
      END_STATE();
    case 25:
      if (lookahead == 'a') ADVANCE(369);
      if (lookahead == 'e') ADVANCE(48);
      if (lookahead == 'i') ADVANCE(60);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(407);
      END_STATE();
    case 26:
      if (lookahead == 'a') ADVANCE(199);
      END_STATE();
    case 27:
      if (lookahead == 'a') ADVANCE(238);
      if (lookahead == 'e') ADVANCE(154);
      if (lookahead == 'j') ADVANCE(395);
      END_STATE();
    case 28:
      if (lookahead == 'a') ADVANCE(283);
      END_STATE();
    case 29:
      if (lookahead == 'a') ADVANCE(387);
      END_STATE();
    case 30:
      if (lookahead == 'a') ADVANCE(158);
      END_STATE();
    case 31:
      if (lookahead == 'a') ADVANCE(280);
      END_STATE();
    case 32:
      if (lookahead == 'a') ADVANCE(329);
      END_STATE();
    case 33:
      if (lookahead == 'a') ADVANCE(153);
      END_STATE();
    case 34:
      if (lookahead == 'a') ADVANCE(370);
      END_STATE();
    case 35:
      if (lookahead == 'a') ADVANCE(242);
      END_STATE();
    case 36:
      if (lookahead == 'a') ADVANCE(379);
      END_STATE();
    case 37:
      if (lookahead == 'a') ADVANCE(384);
      END_STATE();
    case 38:
      if (lookahead == 'a') ADVANCE(307);
      END_STATE();
    case 39:
      if (lookahead == 'a') ADVANCE(382);
      END_STATE();
    case 40:
      if (lookahead == 'a') ADVANCE(361);
      END_STATE();
    case 41:
      if (lookahead == 'a') ADVANCE(363);
      END_STATE();
    case 42:
      if (lookahead == 'a') ADVANCE(364);
      END_STATE();
    case 43:
      if (lookahead == 'a') ADVANCE(65);
      END_STATE();
    case 44:
      if (lookahead == 'a') ADVANCE(285);
      END_STATE();
    case 45:
      if (lookahead == 'a') ADVANCE(216);
      END_STATE();
    case 46:
      if (lookahead == 'a') ADVANCE(383);
      END_STATE();
    case 47:
      if (lookahead == 'b') ADVANCE(195);
      END_STATE();
    case 48:
      if (lookahead == 'b') ADVANCE(386);
      if (lookahead == 'f') ADVANCE(29);
      END_STATE();
    case 49:
      if (lookahead == 'b') ADVANCE(401);
      END_STATE();
    case 50:
      if (lookahead == 'b') ADVANCE(310);
      if (lookahead == 'n') ADVANCE(389);
      END_STATE();
    case 51:
      if (lookahead == 'b') ADVANCE(36);
      END_STATE();
    case 52:
      if (lookahead == 'b') ADVANCE(214);
      END_STATE();
    case 53:
      if (lookahead == 'b') ADVANCE(131);
      END_STATE();
    case 54:
      if (lookahead == 'b') ADVANCE(196);
      END_STATE();
    case 55:
      if (lookahead == 'c') ADVANCE(564);
      END_STATE();
    case 56:
      if (lookahead == 'c') ADVANCE(197);
      END_STATE();
    case 57:
      if (lookahead == 'c') ADVANCE(402);
      END_STATE();
    case 58:
      if (lookahead == 'c') ADVANCE(210);
      END_STATE();
    case 59:
      if (lookahead == 'c') ADVANCE(28);
      END_STATE();
    case 60:
      if (lookahead == 'c') ADVANCE(367);
      if (lookahead == 'v') ADVANCE(176);
      END_STATE();
    case 61:
      if (lookahead == 'c') ADVANCE(46);
      END_STATE();
    case 62:
      if (lookahead == 'c') ADVANCE(268);
      if (lookahead == 'w') ADVANCE(313);
      END_STATE();
    case 63:
      if (lookahead == 'c') ADVANCE(275);
      END_STATE();
    case 64:
      if (lookahead == 'c') ADVANCE(95);
      END_STATE();
    case 65:
      if (lookahead == 'c') ADVANCE(139);
      END_STATE();
    case 66:
      if (lookahead == 'c') ADVANCE(360);
      END_STATE();
    case 67:
      if (lookahead == 'c') ADVANCE(102);
      END_STATE();
    case 68:
      if (lookahead == 'c') ADVANCE(366);
      END_STATE();
    case 69:
      if (lookahead == 'c') ADVANCE(165);
      if (lookahead == 'w') ADVANCE(272);
      END_STATE();
    case 70:
      if (lookahead == 'c') ADVANCE(305);
      END_STATE();
    case 71:
      if (lookahead == 'c') ADVANCE(215);
      END_STATE();
    case 72:
      if (lookahead == 'c') ADVANCE(44);
      END_STATE();
    case 73:
      if (lookahead == 'd') ADVANCE(74);
      if (lookahead == 'u') ADVANCE(374);
      END_STATE();
    case 74:
      if (lookahead == 'd') ADVANCE(534);
      END_STATE();
    case 75:
      if (lookahead == 'd') ADVANCE(17);
      END_STATE();
    case 76:
      if (lookahead == 'd') ADVANCE(512);
      END_STATE();
    case 77:
      if (lookahead == 'd') ADVANCE(62);
      END_STATE();
    case 78:
      if (lookahead == 'd') ADVANCE(508);
      END_STATE();
    case 79:
      if (lookahead == 'd') ADVANCE(543);
      END_STATE();
    case 80:
      if (lookahead == 'd') ADVANCE(319);
      END_STATE();
    case 81:
      if (lookahead == 'd') ADVANCE(264);
      END_STATE();
    case 82:
      if (lookahead == 'd') ADVANCE(368);
      if (lookahead == 't') ADVANCE(161);
      END_STATE();
    case 83:
      if (lookahead == 'd') ADVANCE(191);
      END_STATE();
    case 84:
      if (lookahead == 'd') ADVANCE(328);
      END_STATE();
    case 85:
      if (lookahead == 'd') ADVANCE(99);
      END_STATE();
    case 86:
      if (lookahead == 'd') ADVANCE(100);
      END_STATE();
    case 87:
      if (lookahead == 'd') ADVANCE(137);
      END_STATE();
    case 88:
      if (lookahead == 'd') ADVANCE(12);
      END_STATE();
    case 89:
      if (lookahead == 'e') ADVANCE(539);
      END_STATE();
    case 90:
      if (lookahead == 'e') ADVANCE(50);
      END_STATE();
    case 91:
      if (lookahead == 'e') ADVANCE(569);
      END_STATE();
    case 92:
      if (lookahead == 'e') ADVANCE(575);
      END_STATE();
    case 93:
      if (lookahead == 'e') ADVANCE(490);
      END_STATE();
    case 94:
      if (lookahead == 'e') ADVANCE(14);
      END_STATE();
    case 95:
      if (lookahead == 'e') ADVANCE(571);
      END_STATE();
    case 96:
      if (lookahead == 'e') ADVANCE(578);
      END_STATE();
    case 97:
      if (lookahead == 'e') ADVANCE(545);
      END_STATE();
    case 98:
      if (lookahead == 'e') ADVANCE(288);
      END_STATE();
    case 99:
      if (lookahead == 'e') ADVANCE(510);
      END_STATE();
    case 100:
      if (lookahead == 'e') ADVANCE(552);
      END_STATE();
    case 101:
      if (lookahead == 'e') ADVANCE(565);
      END_STATE();
    case 102:
      if (lookahead == 'e') ADVANCE(576);
      END_STATE();
    case 103:
      if (lookahead == 'e') ADVANCE(483);
      END_STATE();
    case 104:
      if (lookahead == 'e') ADVANCE(397);
      END_STATE();
    case 105:
      if (lookahead == 'e') ADVANCE(520);
      END_STATE();
    case 106:
      if (lookahead == 'e') ADVANCE(541);
      END_STATE();
    case 107:
      if (lookahead == 'e') ADVANCE(224);
      if (lookahead == 'i') ADVANCE(228);
      if (lookahead == 'r') ADVANCE(391);
      END_STATE();
    case 108:
      if (lookahead == 'e') ADVANCE(332);
      END_STATE();
    case 109:
      if (lookahead == 'e') ADVANCE(69);
      END_STATE();
    case 110:
      if (lookahead == 'e') ADVANCE(289);
      END_STATE();
    case 111:
      if (lookahead == 'e') ADVANCE(346);
      END_STATE();
    case 112:
      if (lookahead == 'e') ADVANCE(219);
      END_STATE();
    case 113:
      if (lookahead == 'e') ADVANCE(291);
      END_STATE();
    case 114:
      if (lookahead == 'e') ADVANCE(10);
      END_STATE();
    case 115:
      if (lookahead == 'e') ADVANCE(344);
      END_STATE();
    case 116:
      if (lookahead == 'e') ADVANCE(49);
      END_STATE();
    case 117:
      if (lookahead == 'e') ADVANCE(66);
      END_STATE();
    case 118:
      if (lookahead == 'e') ADVANCE(245);
      END_STATE();
    case 119:
      if (lookahead == 'e') ADVANCE(292);
      END_STATE();
    case 120:
      if (lookahead == 'e') ADVANCE(78);
      END_STATE();
    case 121:
      if (lookahead == 'e') ADVANCE(241);
      END_STATE();
    case 122:
      if (lookahead == 'e') ADVANCE(293);
      END_STATE();
    case 123:
      if (lookahead == 'e') ADVANCE(336);
      END_STATE();
    case 124:
      if (lookahead == 'e') ADVANCE(88);
      END_STATE();
    case 125:
      if (lookahead == 'e') ADVANCE(79);
      END_STATE();
    case 126:
      if (lookahead == 'e') ADVANCE(294);
      END_STATE();
    case 127:
      if (lookahead == 'e') ADVANCE(295);
      END_STATE();
    case 128:
      if (lookahead == 'e') ADVANCE(373);
      END_STATE();
    case 129:
      if (lookahead == 'e') ADVANCE(236);
      END_STATE();
    case 130:
      if (lookahead == 'e') ADVANCE(324);
      END_STATE();
    case 131:
      if (lookahead == 'e') ADVANCE(306);
      END_STATE();
    case 132:
      if (lookahead == 'e') ADVANCE(309);
      END_STATE();
    case 133:
      if (lookahead == 'e') ADVANCE(377);
      END_STATE();
    case 134:
      if (lookahead == 'e') ADVANCE(26);
      END_STATE();
    case 135:
      if (lookahead == 'e') ADVANCE(334);
      if (lookahead == 't') ADVANCE(127);
      END_STATE();
    case 136:
      if (lookahead == 'e') ADVANCE(68);
      END_STATE();
    case 137:
      if (lookahead == 'e') ADVANCE(312);
      END_STATE();
    case 138:
      if (lookahead == 'e') ADVANCE(250);
      END_STATE();
    case 139:
      if (lookahead == 'e') ADVANCE(213);
      END_STATE();
    case 140:
      if (lookahead == 'e') ADVANCE(308);
      END_STATE();
    case 141:
      if (lookahead == 'e') ADVANCE(151);
      END_STATE();
    case 142:
      if (lookahead == 'f') ADVANCE(504);
      if (lookahead == 'n') ADVANCE(506);
      if (lookahead == 'r') ADVANCE(192);
      END_STATE();
    case 143:
      if (lookahead == 'f') ADVANCE(498);
      END_STATE();
    case 144:
      if (lookahead == 'f') ADVANCE(19);
      END_STATE();
    case 145:
      if (lookahead == 'f') ADVANCE(11);
      END_STATE();
    case 146:
      if (lookahead == 'f') ADVANCE(400);
      END_STATE();
    case 147:
      if (lookahead == 'f') ADVANCE(183);
      END_STATE();
    case 148:
      if (lookahead == 'f') ADVANCE(91);
      END_STATE();
    case 149:
      if (lookahead == 'f') ADVANCE(271);
      END_STATE();
    case 150:
      if (lookahead == 'f') ADVANCE(277);
      END_STATE();
    case 151:
      if (lookahead == 'f') ADVANCE(278);
      END_STATE();
    case 152:
      if (lookahead == 'g') ADVANCE(492);
      END_STATE();
    case 153:
      if (lookahead == 'g') ADVANCE(524);
      END_STATE();
    case 154:
      if (lookahead == 'g') ADVANCE(304);
      if (lookahead == 's') ADVANCE(128);
      END_STATE();
    case 155:
      if (lookahead == 'g') ADVANCE(178);
      END_STATE();
    case 156:
      if (lookahead == 'g') ADVANCE(371);
      END_STATE();
    case 157:
      if (lookahead == 'g') ADVANCE(187);
      END_STATE();
    case 158:
      if (lookahead == 'g') ADVANCE(323);
      END_STATE();
    case 159:
      if (lookahead == 'g') ADVANCE(120);
      END_STATE();
    case 160:
      if (lookahead == 'g') ADVANCE(150);
      END_STATE();
    case 161:
      if (lookahead == 'h') ADVANCE(532);
      END_STATE();
    case 162:
      if (lookahead == 'h') ADVANCE(556);
      END_STATE();
    case 163:
      if (lookahead == 'h') ADVANCE(274);
      if (lookahead == 'l') ADVANCE(390);
      if (lookahead == 'p') ADVANCE(298);
      END_STATE();
    case 164:
      if (lookahead == 'h') ADVANCE(35);
      END_STATE();
    case 165:
      if (lookahead == 'h') ADVANCE(38);
      END_STATE();
    case 166:
      if (lookahead == 'h') ADVANCE(315);
      END_STATE();
    case 167:
      if (lookahead == 'h') ADVANCE(130);
      END_STATE();
    case 168:
      if (lookahead == 'h') ADVANCE(376);
      END_STATE();
    case 169:
      if (lookahead == 'h') ADVANCE(378);
      END_STATE();
    case 170:
      if (lookahead == 'i') ADVANCE(201);
      if (lookahead == 'l') ADVANCE(263);
      if (lookahead == 'o') ADVANCE(290);
      END_STATE();
    case 171:
      if (lookahead == 'i') ADVANCE(82);
      if (lookahead == 'o') ADVANCE(299);
      END_STATE();
    case 172:
      if (lookahead == 'i') ADVANCE(239);
      END_STATE();
    case 173:
      if (lookahead == 'i') ADVANCE(403);
      END_STATE();
    case 174:
      if (lookahead == 'i') ADVANCE(52);
      END_STATE();
    case 175:
      if (lookahead == 'i') ADVANCE(64);
      if (lookahead == 'u') ADVANCE(155);
      END_STATE();
    case 176:
      if (lookahead == 'i') ADVANCE(333);
      END_STATE();
    case 177:
      if (lookahead == 'i') ADVANCE(235);
      END_STATE();
    case 178:
      if (lookahead == 'i') ADVANCE(146);
      END_STATE();
    case 179:
      if (lookahead == 'i') ADVANCE(221);
      END_STATE();
    case 180:
      if (lookahead == 'i') ADVANCE(144);
      END_STATE();
    case 181:
      if (lookahead == 'i') ADVANCE(203);
      END_STATE();
    case 182:
      if (lookahead == 'i') ADVANCE(55);
      END_STATE();
    case 183:
      if (lookahead == 'i') ADVANCE(316);
      END_STATE();
    case 184:
      if (lookahead == 'i') ADVANCE(321);
      END_STATE();
    case 185:
      if (lookahead == 'i') ADVANCE(255);
      END_STATE();
    case 186:
      if (lookahead == 'i') ADVANCE(259);
      END_STATE();
    case 187:
      if (lookahead == 'i') ADVANCE(357);
      END_STATE();
    case 188:
      if (lookahead == 'i') ADVANCE(249);
      END_STATE();
    case 189:
      if (lookahead == 'i') ADVANCE(404);
      END_STATE();
    case 190:
      if (lookahead == 'i') ADVANCE(284);
      END_STATE();
    case 191:
      if (lookahead == 'i') ADVANCE(157);
      END_STATE();
    case 192:
      if (lookahead == 'i') ADVANCE(121);
      END_STATE();
    case 193:
      if (lookahead == 'i') ADVANCE(340);
      END_STATE();
    case 194:
      if (lookahead == 'i') ADVANCE(341);
      END_STATE();
    case 195:
      if (lookahead == 'j') ADVANCE(117);
      END_STATE();
    case 196:
      if (lookahead == 'j') ADVANCE(136);
      END_STATE();
    case 197:
      if (lookahead == 'k') ADVANCE(485);
      END_STATE();
    case 198:
      if (lookahead == 'k') ADVANCE(114);
      END_STATE();
    case 199:
      if (lookahead == 'k') ADVANCE(325);
      END_STATE();
    case 200:
      if (lookahead == 'k') ADVANCE(129);
      END_STATE();
    case 201:
      if (lookahead == 'l') ADVANCE(135);
      if (lookahead == 'r') ADVANCE(335);
      END_STATE();
    case 202:
      if (lookahead == 'l') ADVANCE(526);
      END_STATE();
    case 203:
      if (lookahead == 'l') ADVANCE(577);
      END_STATE();
    case 204:
      if (lookahead == 'l') ADVANCE(580);
      END_STATE();
    case 205:
      if (lookahead == 'l') ADVANCE(582);
      END_STATE();
    case 206:
      if (lookahead == 'l') ADVANCE(262);
      END_STATE();
    case 207:
      if (lookahead == 'l') ADVANCE(392);
      END_STATE();
    case 208:
      if (lookahead == 'l') ADVANCE(32);
      END_STATE();
    case 209:
      if (lookahead == 'l') ADVANCE(193);
      END_STATE();
    case 210:
      if (lookahead == 'l') ADVANCE(93);
      END_STATE();
    case 211:
      if (lookahead == 'l') ADVANCE(96);
      END_STATE();
    case 212:
      if (lookahead == 'l') ADVANCE(354);
      END_STATE();
    case 213:
      if (lookahead == 'l') ADVANCE(123);
      END_STATE();
    case 214:
      if (lookahead == 'l') ADVANCE(116);
      END_STATE();
    case 215:
      if (lookahead == 'l') ADVANCE(105);
      END_STATE();
    case 216:
      if (lookahead == 'l') ADVANCE(189);
      END_STATE();
    case 217:
      if (lookahead == 'l') ADVANCE(37);
      END_STATE();
    case 218:
      if (lookahead == 'l') ADVANCE(194);
      END_STATE();
    case 219:
      if (lookahead == 'm') ADVANCE(514);
      END_STATE();
    case 220:
      if (lookahead == 'm') ADVANCE(567);
      END_STATE();
    case 221:
      if (lookahead == 'm') ADVANCE(528);
      END_STATE();
    case 222:
      if (lookahead == 'm') ADVANCE(282);
      if (lookahead == 'n') ADVANCE(75);
      if (lookahead == 's') ADVANCE(59);
      if (lookahead == 'x') ADVANCE(372);
      END_STATE();
    case 223:
      if (lookahead == 'm') ADVANCE(229);
      END_STATE();
    case 224:
      if (lookahead == 'm') ADVANCE(286);
      END_STATE();
    case 225:
      if (lookahead == 'm') ADVANCE(53);
      END_STATE();
    case 226:
      if (lookahead == 'm') ADVANCE(204);
      END_STATE();
    case 227:
      if (lookahead == 'm') ADVANCE(205);
      END_STATE();
    case 228:
      if (lookahead == 'm') ADVANCE(92);
      if (lookahead == 't') ADVANCE(211);
      END_STATE();
    case 229:
      if (lookahead == 'm') ADVANCE(138);
      END_STATE();
    case 230:
      if (lookahead == 'm') ADVANCE(40);
      END_STATE();
    case 231:
      if (lookahead == 'm') ADVANCE(41);
      END_STATE();
    case 232:
      if (lookahead == 'm') ADVANCE(42);
      END_STATE();
    case 233:
      if (lookahead == 'm') ADVANCE(140);
      END_STATE();
    case 234:
      if (lookahead == 'n') ADVANCE(156);
      END_STATE();
    case 235:
      if (lookahead == 'n') ADVANCE(553);
      END_STATE();
    case 236:
      if (lookahead == 'n') ADVANCE(489);
      END_STATE();
    case 237:
      if (lookahead == 'n') ADVANCE(9);
      END_STATE();
    case 238:
      if (lookahead == 'n') ADVANCE(81);
      END_STATE();
    case 239:
      if (lookahead == 'n') ADVANCE(160);
      if (lookahead == 'p') ADVANCE(375);
      END_STATE();
    case 240:
      if (lookahead == 'n') ADVANCE(385);
      END_STATE();
    case 241:
      if (lookahead == 'n') ADVANCE(63);
      END_STATE();
    case 242:
      if (lookahead == 'n') ADVANCE(159);
      END_STATE();
    case 243:
      if (lookahead == 'n') ADVANCE(90);
      END_STATE();
    case 244:
      if (lookahead == 'n') ADVANCE(266);
      if (lookahead == 'p') ADVANCE(287);
      if (lookahead == 'r') ADVANCE(202);
      END_STATE();
    case 245:
      if (lookahead == 'n') ADVANCE(80);
      END_STATE();
    case 246:
      if (lookahead == 'n') ADVANCE(393);
      END_STATE();
    case 247:
      if (lookahead == 'n') ADVANCE(258);
      END_STATE();
    case 248:
      if (lookahead == 'n') ADVANCE(94);
      END_STATE();
    case 249:
      if (lookahead == 'n') ADVANCE(352);
      END_STATE();
    case 250:
      if (lookahead == 'n') ADVANCE(353);
      END_STATE();
    case 251:
      if (lookahead == 'n') ADVANCE(381);
      END_STATE();
    case 252:
      if (lookahead == 'n') ADVANCE(359);
      END_STATE();
    case 253:
      if (lookahead == 'n') ADVANCE(106);
      END_STATE();
    case 254:
      if (lookahead == 'n') ADVANCE(61);
      END_STATE();
    case 255:
      if (lookahead == 'n') ADVANCE(67);
      END_STATE();
    case 256:
      if (lookahead == 'n') ADVANCE(276);
      END_STATE();
    case 257:
      if (lookahead == 'o') ADVANCE(398);
      END_STATE();
    case 258:
      if (lookahead == 'o') ADVANCE(587);
      END_STATE();
    case 259:
      if (lookahead == 'o') ADVANCE(530);
      END_STATE();
    case 260:
      if (lookahead == 'o') ADVANCE(177);
      if (lookahead == 's') ADVANCE(265);
      END_STATE();
    case 261:
      if (lookahead == 'o') ADVANCE(47);
      END_STATE();
    case 262:
      if (lookahead == 'o') ADVANCE(56);
      END_STATE();
    case 263:
      if (lookahead == 'o') ADVANCE(34);
      END_STATE();
    case 264:
      if (lookahead == 'o') ADVANCE(220);
      END_STATE();
    case 265:
      if (lookahead == 'o') ADVANCE(237);
      END_STATE();
    case 266:
      if (lookahead == 'o') ADVANCE(302);
      END_STATE();
    case 267:
      if (lookahead == 'o') ADVANCE(388);
      END_STATE();
    case 268:
      if (lookahead == 'o') ADVANCE(396);
      END_STATE();
    case 269:
      if (lookahead == 'o') ADVANCE(115);
      END_STATE();
    case 270:
      if (lookahead == 'o') ADVANCE(311);
      END_STATE();
    case 271:
      if (lookahead == 'o') ADVANCE(303);
      END_STATE();
    case 272:
      if (lookahead == 'o') ADVANCE(314);
      END_STATE();
    case 273:
      if (lookahead == 'o') ADVANCE(200);
      END_STATE();
    case 274:
      if (lookahead == 'o') ADVANCE(248);
      END_STATE();
    case 275:
      if (lookahead == 'o') ADVANCE(86);
      END_STATE();
    case 276:
      if (lookahead == 'o') ADVANCE(253);
      END_STATE();
    case 277:
      if (lookahead == 'o') ADVANCE(317);
      END_STATE();
    case 278:
      if (lookahead == 'o') ADVANCE(318);
      END_STATE();
    case 279:
      if (lookahead == 'p') ADVANCE(518);
      END_STATE();
    case 280:
      if (lookahead == 'p') ADVANCE(586);
      END_STATE();
    case 281:
      if (lookahead == 'p') ADVANCE(147);
      END_STATE();
    case 282:
      if (lookahead == 'p') ADVANCE(347);
      END_STATE();
    case 283:
      if (lookahead == 'p') ADVANCE(97);
      END_STATE();
    case 284:
      if (lookahead == 'p') ADVANCE(362);
      END_STATE();
    case 285:
      if (lookahead == 'p') ADVANCE(103);
      END_STATE();
    case 286:
      if (lookahead == 'p') ADVANCE(217);
      END_STATE();
    case 287:
      if (lookahead == 'p') ADVANCE(122);
      END_STATE();
    case 288:
      if (lookahead == 'q') ADVANCE(570);
      END_STATE();
    case 289:
      if (lookahead == 'q') ADVANCE(547);
      END_STATE();
    case 290:
      if (lookahead == 'r') ADVANCE(500);
      END_STATE();
    case 291:
      if (lookahead == 'r') ADVANCE(51);
      END_STATE();
    case 292:
      if (lookahead == 'r') ADVANCE(562);
      END_STATE();
    case 293:
      if (lookahead == 'r') ADVANCE(584);
      END_STATE();
    case 294:
      if (lookahead == 'r') ADVANCE(537);
      END_STATE();
    case 295:
      if (lookahead == 'r') ADVANCE(496);
      END_STATE();
    case 296:
      if (lookahead == 'r') ADVANCE(559);
      END_STATE();
    case 297:
      if (lookahead == 'r') ADVANCE(145);
      END_STATE();
    case 298:
      if (lookahead == 'r') ADVANCE(188);
      END_STATE();
    case 299:
      if (lookahead == 'r') ADVANCE(77);
      END_STATE();
    case 300:
      if (lookahead == 'r') ADVANCE(172);
      END_STATE();
    case 301:
      if (lookahead == 'r') ADVANCE(45);
      END_STATE();
    case 302:
      if (lookahead == 'r') ADVANCE(87);
      END_STATE();
    case 303:
      if (lookahead == 'r') ADVANCE(230);
      END_STATE();
    case 304:
      if (lookahead == 'r') ADVANCE(267);
      END_STATE();
    case 305:
      if (lookahead == 'r') ADVANCE(190);
      END_STATE();
    case 306:
      if (lookahead == 'r') ADVANCE(326);
      END_STATE();
    case 307:
      if (lookahead == 'r') ADVANCE(327);
      END_STATE();
    case 308:
      if (lookahead == 'r') ADVANCE(182);
      END_STATE();
    case 309:
      if (lookahead == 'r') ADVANCE(342);
      END_STATE();
    case 310:
      if (lookahead == 'r') ADVANCE(134);
      END_STATE();
    case 311:
      if (lookahead == 'r') ADVANCE(356);
      END_STATE();
    case 312:
      if (lookahead == 'r') ADVANCE(124);
      END_STATE();
    case 313:
      if (lookahead == 'r') ADVANCE(31);
      END_STATE();
    case 314:
      if (lookahead == 'r') ADVANCE(84);
      END_STATE();
    case 315:
      if (lookahead == 'r') ADVANCE(39);
      END_STATE();
    case 316:
      if (lookahead == 'r') ADVANCE(339);
      END_STATE();
    case 317:
      if (lookahead == 'r') ADVANCE(231);
      END_STATE();
    case 318:
      if (lookahead == 'r') ADVANCE(232);
      END_STATE();
    case 319:
      if (lookahead == 's') ADVANCE(494);
      END_STATE();
    case 320:
      if (lookahead == 's') ADVANCE(546);
      END_STATE();
    case 321:
      if (lookahead == 's') ADVANCE(557);
      END_STATE();
    case 322:
      if (lookahead == 's') ADVANCE(522);
      END_STATE();
    case 323:
      if (lookahead == 's') ADVANCE(574);
      END_STATE();
    case 324:
      if (lookahead == 's') ADVANCE(535);
      END_STATE();
    case 325:
      if (lookahead == 's') ADVANCE(558);
      END_STATE();
    case 326:
      if (lookahead == 's') ADVANCE(560);
      END_STATE();
    case 327:
      if (lookahead == 's') ADVANCE(579);
      END_STATE();
    case 328:
      if (lookahead == 's') ADVANCE(581);
      END_STATE();
    case 329:
      if (lookahead == 's') ADVANCE(167);
      END_STATE();
    case 330:
      if (lookahead == 's') ADVANCE(70);
      END_STATE();
    case 331:
      if (lookahead == 's') ADVANCE(348);
      END_STATE();
    case 332:
      if (lookahead == 's') ADVANCE(247);
      END_STATE();
    case 333:
      if (lookahead == 's') ADVANCE(174);
      END_STATE();
    case 334:
      if (lookahead == 's') ADVANCE(173);
      END_STATE();
    case 335:
      if (lookahead == 's') ADVANCE(349);
      END_STATE();
    case 336:
      if (lookahead == 's') ADVANCE(322);
      END_STATE();
    case 337:
      if (lookahead == 's') ADVANCE(350);
      END_STATE();
    case 338:
      if (lookahead == 's') ADVANCE(351);
      END_STATE();
    case 339:
      if (lookahead == 's') ADVANCE(355);
      END_STATE();
    case 340:
      if (lookahead == 's') ADVANCE(358);
      END_STATE();
    case 341:
      if (lookahead == 's') ADVANCE(365);
      END_STATE();
    case 342:
      if (lookahead == 's') ADVANCE(125);
      END_STATE();
    case 343:
      if (lookahead == 's') ADVANCE(270);
      END_STATE();
    case 344:
      if (lookahead == 's') ADVANCE(72);
      END_STATE();
    case 345:
      if (lookahead == 't') ADVANCE(538);
      END_STATE();
    case 346:
      if (lookahead == 't') ADVANCE(8);
      END_STATE();
    case 347:
      if (lookahead == 't') ADVANCE(399);
      END_STATE();
    case 348:
      if (lookahead == 't') ADVANCE(555);
      END_STATE();
    case 349:
      if (lookahead == 't') ADVANCE(549);
      END_STATE();
    case 350:
      if (lookahead == 't') ADVANCE(561);
      END_STATE();
    case 351:
      if (lookahead == 't') ADVANCE(568);
      END_STATE();
    case 352:
      if (lookahead == 't') ADVANCE(566);
      END_STATE();
    case 353:
      if (lookahead == 't') ADVANCE(487);
      END_STATE();
    case 354:
      if (lookahead == 't') ADVANCE(540);
      END_STATE();
    case 355:
      if (lookahead == 't') ADVANCE(536);
      END_STATE();
    case 356:
      if (lookahead == 't') ADVANCE(542);
      END_STATE();
    case 357:
      if (lookahead == 't') ADVANCE(551);
      END_STATE();
    case 358:
      if (lookahead == 't') ADVANCE(563);
      END_STATE();
    case 359:
      if (lookahead == 't') ADVANCE(585);
      END_STATE();
    case 360:
      if (lookahead == 't') ADVANCE(1);
      END_STATE();
    case 361:
      if (lookahead == 't') ADVANCE(550);
      END_STATE();
    case 362:
      if (lookahead == 't') ADVANCE(554);
      END_STATE();
    case 363:
      if (lookahead == 't') ADVANCE(573);
      END_STATE();
    case 364:
      if (lookahead == 't') ADVANCE(548);
      END_STATE();
    case 365:
      if (lookahead == 't') ADVANCE(583);
      END_STATE();
    case 366:
      if (lookahead == 't') ADVANCE(18);
      END_STATE();
    case 367:
      if (lookahead == 't') ADVANCE(343);
      END_STATE();
    case 368:
      if (lookahead == 't') ADVANCE(166);
      END_STATE();
    case 369:
      if (lookahead == 't') ADVANCE(89);
      END_STATE();
    case 370:
      if (lookahead == 't') ADVANCE(149);
      END_STATE();
    case 371:
      if (lookahead == 't') ADVANCE(162);
      END_STATE();
    case 372:
      if (lookahead == 't') ADVANCE(118);
      END_STATE();
    case 373:
      if (lookahead == 't') ADVANCE(57);
      END_STATE();
    case 374:
      if (lookahead == 't') ADVANCE(269);
      END_STATE();
    case 375:
      if (lookahead == 't') ADVANCE(30);
      END_STATE();
    case 376:
      if (lookahead == 't') ADVANCE(226);
      END_STATE();
    case 377:
      if (lookahead == 't') ADVANCE(33);
      END_STATE();
    case 378:
      if (lookahead == 't') ADVANCE(227);
      END_STATE();
    case 379:
      if (lookahead == 't') ADVANCE(179);
      END_STATE();
    case 380:
      if (lookahead == 't') ADVANCE(273);
      END_STATE();
    case 381:
      if (lookahead == 't') ADVANCE(181);
      END_STATE();
    case 382:
      if (lookahead == 't') ADVANCE(186);
      END_STATE();
    case 383:
      if (lookahead == 't') ADVANCE(109);
      END_STATE();
    case 384:
      if (lookahead == 't') ADVANCE(133);
      END_STATE();
    case 385:
      if (lookahead == 't') ADVANCE(126);
      END_STATE();
    case 386:
      if (lookahead == 'u') ADVANCE(152);
      END_STATE();
    case 387:
      if (lookahead == 'u') ADVANCE(212);
      END_STATE();
    case 388:
      if (lookahead == 'u') ADVANCE(279);
      END_STATE();
    case 389:
      if (lookahead == 'u') ADVANCE(225);
      END_STATE();
    case 390:
      if (lookahead == 'u') ADVANCE(301);
      END_STATE();
    case 391:
      if (lookahead == 'u') ADVANCE(254);
      END_STATE();
    case 392:
      if (lookahead == 'u') ADVANCE(85);
      END_STATE();
    case 393:
      if (lookahead == 'u') ADVANCE(233);
      END_STATE();
    case 394:
      if (lookahead == 'u') ADVANCE(337);
      END_STATE();
    case 395:
      if (lookahead == 'u') ADVANCE(338);
      END_STATE();
    case 396:
      if (lookahead == 'u') ADVANCE(252);
      END_STATE();
    case 397:
      if (lookahead == 'v') ADVANCE(132);
      END_STATE();
    case 398:
      if (lookahead == 'w') ADVANCE(516);
      END_STATE();
    case 399:
      if (lookahead == 'y') ADVANCE(502);
      END_STATE();
    case 400:
      if (lookahead == 'y') ADVANCE(572);
      END_STATE();
    case 401:
      if (lookahead == 'y') ADVANCE(544);
      END_STATE();
    case 402:
      if (lookahead == 'y') ADVANCE(71);
      END_STATE();
    case 403:
      if (lookahead == 'z') ADVANCE(141);
      END_STATE();
    case 404:
      if (lookahead == 'z') ADVANCE(101);
      END_STATE();
    case 405:
      if (lookahead == '}') ADVANCE(479);
      END_STATE();
    case 406:
      if (lookahead == '}') ADVANCE(481);
      END_STATE();
    case 407:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(411);
      END_STATE();
    case 408:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(424);
      END_STATE();
    case 409:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(407);
      END_STATE();
    case 410:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(408);
      END_STATE();
    case 411:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(413);
      END_STATE();
    case 412:
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(417);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(436);
      END_STATE();
    case 413:
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(410);
      END_STATE();
    case 414:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(414);
      if (lookahead != 0 &&
          lookahead != '%' &&
          lookahead != '&' &&
          lookahead != '<' &&
          lookahead != '>' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(477);
      END_STATE();
    case 415:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(415)
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(706);
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
          lookahead != '}') ADVANCE(477);
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
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(414);
      if (lookahead != 0 &&
          lookahead != '%' &&
          lookahead != '&' &&
          lookahead != '<' &&
          lookahead != '>' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(477);
      END_STATE();
    case 478:
      ACCEPT_TOKEN(anon_sym_LBRACE_PERCENT);
      END_STATE();
    case 479:
      ACCEPT_TOKEN(anon_sym_PERCENT_RBRACE);
      END_STATE();
    case 480:
      ACCEPT_TOKEN(anon_sym_LBRACE_LBRACE);
      END_STATE();
    case 481:
      ACCEPT_TOKEN(anon_sym_RBRACE_RBRACE);
      END_STATE();
    case 482:
      ACCEPT_TOKEN(anon_sym_end_LBRACKobjectObject_RBRACK);
      END_STATE();
    case 483:
      ACCEPT_TOKEN(anon_sym_autoescape);
      END_STATE();
    case 484:
      ACCEPT_TOKEN(anon_sym_autoescape);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(706);
      END_STATE();
    case 485:
      ACCEPT_TOKEN(anon_sym_block);
      END_STATE();
    case 486:
      ACCEPT_TOKEN(anon_sym_block);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(706);
      END_STATE();
    case 487:
      ACCEPT_TOKEN(anon_sym_comment);
      END_STATE();
    case 488:
      ACCEPT_TOKEN(anon_sym_comment);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(706);
      END_STATE();
    case 489:
      ACCEPT_TOKEN(anon_sym_csrf_DASHtoken);
      END_STATE();
    case 490:
      ACCEPT_TOKEN(anon_sym_cycle);
      END_STATE();
    case 491:
      ACCEPT_TOKEN(anon_sym_cycle);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(706);
      END_STATE();
    case 492:
      ACCEPT_TOKEN(anon_sym_debug);
      END_STATE();
    case 493:
      ACCEPT_TOKEN(anon_sym_debug);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(706);
      END_STATE();
    case 494:
      ACCEPT_TOKEN(anon_sym_extends);
      END_STATE();
    case 495:
      ACCEPT_TOKEN(anon_sym_extends);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(706);
      END_STATE();
    case 496:
      ACCEPT_TOKEN(anon_sym_filter);
      END_STATE();
    case 497:
      ACCEPT_TOKEN(anon_sym_filter);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(706);
      END_STATE();
    case 498:
      ACCEPT_TOKEN(anon_sym_firstof);
      END_STATE();
    case 499:
      ACCEPT_TOKEN(anon_sym_firstof);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(706);
      END_STATE();
    case 500:
      ACCEPT_TOKEN(anon_sym_for);
      END_STATE();
    case 501:
      ACCEPT_TOKEN(anon_sym_for);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(706);
      END_STATE();
    case 502:
      ACCEPT_TOKEN(anon_sym_empty);
      END_STATE();
    case 503:
      ACCEPT_TOKEN(anon_sym_empty);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(706);
      END_STATE();
    case 504:
      ACCEPT_TOKEN(anon_sym_if);
      if (lookahead == 'c') ADVANCE(164);
      END_STATE();
    case 505:
      ACCEPT_TOKEN(anon_sym_if);
      if (lookahead == 'c') ADVANCE(638);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(706);
      END_STATE();
    case 506:
      ACCEPT_TOKEN(anon_sym_in);
      if (lookahead == 'c') ADVANCE(207);
      END_STATE();
    case 507:
      ACCEPT_TOKEN(anon_sym_in);
      if (lookahead == 'c') ADVANCE(646);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(706);
      END_STATE();
    case 508:
      ACCEPT_TOKEN(anon_sym_ifchanged);
      END_STATE();
    case 509:
      ACCEPT_TOKEN(anon_sym_ifchanged);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(706);
      END_STATE();
    case 510:
      ACCEPT_TOKEN(anon_sym_include);
      END_STATE();
    case 511:
      ACCEPT_TOKEN(anon_sym_include);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(706);
      END_STATE();
    case 512:
      ACCEPT_TOKEN(anon_sym_load);
      END_STATE();
    case 513:
      ACCEPT_TOKEN(anon_sym_load);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(706);
      END_STATE();
    case 514:
      ACCEPT_TOKEN(anon_sym_lorem);
      END_STATE();
    case 515:
      ACCEPT_TOKEN(anon_sym_lorem);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(706);
      END_STATE();
    case 516:
      ACCEPT_TOKEN(anon_sym_now);
      END_STATE();
    case 517:
      ACCEPT_TOKEN(anon_sym_now);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(706);
      END_STATE();
    case 518:
      ACCEPT_TOKEN(anon_sym_regroup);
      END_STATE();
    case 519:
      ACCEPT_TOKEN(anon_sym_regroup);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(706);
      END_STATE();
    case 520:
      ACCEPT_TOKEN(anon_sym_resetcycle);
      END_STATE();
    case 521:
      ACCEPT_TOKEN(anon_sym_resetcycle);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(706);
      END_STATE();
    case 522:
      ACCEPT_TOKEN(anon_sym_spaceless);
      END_STATE();
    case 523:
      ACCEPT_TOKEN(anon_sym_spaceless);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(706);
      END_STATE();
    case 524:
      ACCEPT_TOKEN(anon_sym_templatetag);
      END_STATE();
    case 525:
      ACCEPT_TOKEN(anon_sym_templatetag);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(706);
      END_STATE();
    case 526:
      ACCEPT_TOKEN(anon_sym_url);
      END_STATE();
    case 527:
      ACCEPT_TOKEN(anon_sym_url);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(706);
      END_STATE();
    case 528:
      ACCEPT_TOKEN(anon_sym_verbatim);
      END_STATE();
    case 529:
      ACCEPT_TOKEN(anon_sym_verbatim);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(706);
      END_STATE();
    case 530:
      ACCEPT_TOKEN(anon_sym_widthratio);
      END_STATE();
    case 531:
      ACCEPT_TOKEN(anon_sym_widthratio);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(706);
      END_STATE();
    case 532:
      ACCEPT_TOKEN(anon_sym_with);
      END_STATE();
    case 533:
      ACCEPT_TOKEN(anon_sym_with);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(706);
      END_STATE();
    case 534:
      ACCEPT_TOKEN(anon_sym_add);
      if (lookahead == 's') ADVANCE(208);
      END_STATE();
    case 535:
      ACCEPT_TOKEN(anon_sym_addslashes);
      END_STATE();
    case 536:
      ACCEPT_TOKEN(anon_sym_capfirst);
      END_STATE();
    case 537:
      ACCEPT_TOKEN(anon_sym_center);
      END_STATE();
    case 538:
      ACCEPT_TOKEN(anon_sym_cut);
      END_STATE();
    case 539:
      ACCEPT_TOKEN(anon_sym_date);
      END_STATE();
    case 540:
      ACCEPT_TOKEN(anon_sym_default);
      if (lookahead == '_') ADVANCE(180);
      END_STATE();
    case 541:
      ACCEPT_TOKEN(anon_sym_default_if_none);
      END_STATE();
    case 542:
      ACCEPT_TOKEN(anon_sym_dictsort);
      if (lookahead == 'r') ADVANCE(104);
      END_STATE();
    case 543:
      ACCEPT_TOKEN(anon_sym_dictsortreversed);
      END_STATE();
    case 544:
      ACCEPT_TOKEN(anon_sym_divisibleby);
      END_STATE();
    case 545:
      ACCEPT_TOKEN(anon_sym_escape);
      if (lookahead == 'j') ADVANCE(320);
      if (lookahead == 's') ADVANCE(110);
      END_STATE();
    case 546:
      ACCEPT_TOKEN(anon_sym_escapejs);
      END_STATE();
    case 547:
      ACCEPT_TOKEN(anon_sym_escapeseq);
      END_STATE();
    case 548:
      ACCEPT_TOKEN(anon_sym_filesizeformat);
      END_STATE();
    case 549:
      ACCEPT_TOKEN(anon_sym_first);
      if (lookahead == 'o') ADVANCE(143);
      END_STATE();
    case 550:
      ACCEPT_TOKEN(anon_sym_floatformat);
      END_STATE();
    case 551:
      ACCEPT_TOKEN(anon_sym_get_DASHdigit);
      END_STATE();
    case 552:
      ACCEPT_TOKEN(anon_sym_iriencode);
      END_STATE();
    case 553:
      ACCEPT_TOKEN(anon_sym_join);
      END_STATE();
    case 554:
      ACCEPT_TOKEN(anon_sym_json_DASHscript);
      END_STATE();
    case 555:
      ACCEPT_TOKEN(anon_sym_last);
      END_STATE();
    case 556:
      ACCEPT_TOKEN(anon_sym_length);
      if (lookahead == '-') ADVANCE(184);
      END_STATE();
    case 557:
      ACCEPT_TOKEN(anon_sym_length_DASHis);
      END_STATE();
    case 558:
      ACCEPT_TOKEN(anon_sym_linebreaks);
      if (lookahead == 'b') ADVANCE(296);
      END_STATE();
    case 559:
      ACCEPT_TOKEN(anon_sym_linebreaksbr);
      END_STATE();
    case 560:
      ACCEPT_TOKEN(anon_sym_linenumbers);
      END_STATE();
    case 561:
      ACCEPT_TOKEN(anon_sym_ljust);
      END_STATE();
    case 562:
      ACCEPT_TOKEN(anon_sym_lower);
      END_STATE();
    case 563:
      ACCEPT_TOKEN(anon_sym_make_DASHlist);
      END_STATE();
    case 564:
      ACCEPT_TOKEN(anon_sym_phone2numeric);
      END_STATE();
    case 565:
      ACCEPT_TOKEN(anon_sym_pluralize);
      END_STATE();
    case 566:
      ACCEPT_TOKEN(anon_sym_pprint);
      END_STATE();
    case 567:
      ACCEPT_TOKEN(anon_sym_random);
      END_STATE();
    case 568:
      ACCEPT_TOKEN(anon_sym_rjust);
      END_STATE();
    case 569:
      ACCEPT_TOKEN(anon_sym_safe);
      if (lookahead == 's') ADVANCE(98);
      END_STATE();
    case 570:
      ACCEPT_TOKEN(anon_sym_safeseq);
      END_STATE();
    case 571:
      ACCEPT_TOKEN(anon_sym_slice);
      END_STATE();
    case 572:
      ACCEPT_TOKEN(anon_sym_slugify);
      END_STATE();
    case 573:
      ACCEPT_TOKEN(anon_sym_stringformat);
      END_STATE();
    case 574:
      ACCEPT_TOKEN(anon_sym_striptags);
      END_STATE();
    case 575:
      ACCEPT_TOKEN(anon_sym_time);
      if (lookahead == 's') ADVANCE(185);
      if (lookahead == 'u') ADVANCE(251);
      END_STATE();
    case 576:
      ACCEPT_TOKEN(anon_sym_timesince);
      END_STATE();
    case 577:
      ACCEPT_TOKEN(anon_sym_timeuntil);
      END_STATE();
    case 578:
      ACCEPT_TOKEN(anon_sym_title);
      END_STATE();
    case 579:
      ACCEPT_TOKEN(anon_sym_truncatechars);
      if (lookahead == '-') ADVANCE(168);
      END_STATE();
    case 580:
      ACCEPT_TOKEN(anon_sym_truncatechars_DASHhtml);
      END_STATE();
    case 581:
      ACCEPT_TOKEN(anon_sym_truncatewords);
      if (lookahead == '-') ADVANCE(169);
      END_STATE();
    case 582:
      ACCEPT_TOKEN(anon_sym_truncatewords_DASHhtml);
      END_STATE();
    case 583:
      ACCEPT_TOKEN(anon_sym_unordered_DASHlist);
      END_STATE();
    case 584:
      ACCEPT_TOKEN(anon_sym_upper);
      END_STATE();
    case 585:
      ACCEPT_TOKEN(anon_sym_wordcount);
      END_STATE();
    case 586:
      ACCEPT_TOKEN(anon_sym_wordwrap);
      END_STATE();
    case 587:
      ACCEPT_TOKEN(anon_sym_yesno);
      END_STATE();
    case 588:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '-') ADVANCE(380);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(706);
      END_STATE();
    case 589:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '[') ADVANCE(261);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(706);
      END_STATE();
    case 590:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(607);
      if (lookahead == 'r') ADVANCE(623);
      if (('b' <= lookahead && lookahead <= 'z')) ADVANCE(706);
      END_STATE();
    case 591:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(604);
      if (('b' <= lookahead && lookahead <= 'z')) ADVANCE(706);
      END_STATE();
    case 592:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(634);
      if (('b' <= lookahead && lookahead <= 'z')) ADVANCE(706);
      END_STATE();
    case 593:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(659);
      if (('b' <= lookahead && lookahead <= 'z')) ADVANCE(706);
      END_STATE();
    case 594:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(674);
      if (('b' <= lookahead && lookahead <= 'z')) ADVANCE(706);
      END_STATE();
    case 595:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(689);
      if (('b' <= lookahead && lookahead <= 'z')) ADVANCE(706);
      END_STATE();
    case 596:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(690);
      if (('b' <= lookahead && lookahead <= 'z')) ADVANCE(706);
      END_STATE();
    case 597:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(697);
      if (('b' <= lookahead && lookahead <= 'z')) ADVANCE(706);
      END_STATE();
    case 598:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'b') ADVANCE(700);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(706);
      END_STATE();
    case 599:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'b') ADVANCE(595);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(706);
      END_STATE();
    case 600:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'c') ADVANCE(644);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(706);
      END_STATE();
    case 601:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'c') ADVANCE(705);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(706);
      END_STATE();
    case 602:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'c') ADVANCE(649);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(706);
      END_STATE();
    case 603:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'c') ADVANCE(594);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(706);
      END_STATE();
    case 604:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'c') ADVANCE(629);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(706);
      END_STATE();
    case 605:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'c') ADVANCE(651);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(706);
      END_STATE();
    case 606:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'd') ADVANCE(589);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(706);
      END_STATE();
    case 607:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'd') ADVANCE(513);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(706);
      END_STATE();
    case 608:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'd') ADVANCE(509);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(706);
      END_STATE();
    case 609:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'd') ADVANCE(682);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(706);
      END_STATE();
    case 610:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'd') ADVANCE(691);
      if (lookahead == 't') ADVANCE(637);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(706);
      END_STATE();
    case 611:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'd') ADVANCE(616);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(706);
      END_STATE();
    case 612:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(598);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(706);
      END_STATE();
    case 613:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(635);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(706);
      END_STATE();
    case 614:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(660);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(706);
      END_STATE();
    case 615:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(491);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(706);
      END_STATE();
    case 616:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(511);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(706);
      END_STATE();
    case 617:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(484);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(706);
      END_STATE();
    case 618:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(521);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(706);
      END_STATE();
    case 619:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(656);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(706);
      END_STATE();
    case 620:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(684);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(706);
      END_STATE();
    case 621:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(661);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(706);
      END_STATE();
    case 622:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(679);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(706);
      END_STATE();
    case 623:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(653);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(706);
      END_STATE();
    case 624:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(685);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(706);
      END_STATE();
    case 625:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(693);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(706);
      END_STATE();
    case 626:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(608);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(706);
      END_STATE();
    case 627:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(677);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(706);
      END_STATE();
    case 628:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(696);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(706);
      END_STATE();
    case 629:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(650);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(706);
      END_STATE();
    case 630:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'f') ADVANCE(505);
      if (lookahead == 'n') ADVANCE(507);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(706);
      END_STATE();
    case 631:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'f') ADVANCE(588);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(706);
      END_STATE();
    case 632:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'f') ADVANCE(499);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(706);
      END_STATE();
    case 633:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'g') ADVANCE(493);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(706);
      END_STATE();
    case 634:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'g') ADVANCE(525);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(706);
      END_STATE();
    case 635:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'g') ADVANCE(680);
      if (lookahead == 's') ADVANCE(625);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(706);
      END_STATE();
    case 636:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'g') ADVANCE(626);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(706);
      END_STATE();
    case 637:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'h') ADVANCE(533);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(706);
      END_STATE();
    case 638:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'h') ADVANCE(593);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(706);
      END_STATE();
    case 639:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'h') ADVANCE(681);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(706);
      END_STATE();
    case 640:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(652);
      if (lookahead == 'o') ADVANCE(676);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(706);
      END_STATE();
    case 641:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(610);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(706);
      END_STATE();
    case 642:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(654);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(706);
      END_STATE();
    case 643:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(665);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(706);
      END_STATE();
    case 644:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'k') ADVANCE(486);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(706);
      END_STATE();
    case 645:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(527);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(706);
      END_STATE();
    case 646:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(702);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(706);
      END_STATE();
    case 647:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(666);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(706);
      END_STATE();
    case 648:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(597);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(706);
      END_STATE();
    case 649:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(615);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(706);
      END_STATE();
    case 650:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(624);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(706);
      END_STATE();
    case 651:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(618);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(706);
      END_STATE();
    case 652:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(698);
      if (lookahead == 'r') ADVANCE(686);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(706);
      END_STATE();
    case 653:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'm') ADVANCE(515);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(706);
      END_STATE();
    case 654:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'm') ADVANCE(529);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(706);
      END_STATE();
    case 655:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'm') ADVANCE(672);
      if (lookahead == 'n') ADVANCE(606);
      if (lookahead == 'x') ADVANCE(694);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(706);
      END_STATE();
    case 656:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'm') ADVANCE(673);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(706);
      END_STATE();
    case 657:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'm') ADVANCE(658);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(706);
      END_STATE();
    case 658:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'm') ADVANCE(621);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(706);
      END_STATE();
    case 659:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(636);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(706);
      END_STATE();
    case 660:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(609);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(706);
      END_STATE();
    case 661:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(688);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(706);
      END_STATE();
    case 662:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(657);
      if (lookahead == 's') ADVANCE(675);
      if (lookahead == 'y') ADVANCE(602);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(706);
      END_STATE();
    case 663:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(590);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(706);
      END_STATE();
    case 664:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(703);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(706);
      END_STATE();
    case 665:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(531);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(706);
      END_STATE();
    case 666:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(600);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(706);
      END_STATE();
    case 667:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(632);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(706);
      END_STATE();
    case 668:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(701);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(706);
      END_STATE();
    case 669:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(620);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(706);
      END_STATE();
    case 670:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'p') ADVANCE(591);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(706);
      END_STATE();
    case 671:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'p') ADVANCE(519);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(706);
      END_STATE();
    case 672:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'p') ADVANCE(687);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(706);
      END_STATE();
    case 673:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'p') ADVANCE(648);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(706);
      END_STATE();
    case 674:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'p') ADVANCE(617);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(706);
      END_STATE();
    case 675:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(631);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(706);
      END_STATE();
    case 676:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(501);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(706);
      END_STATE();
    case 677:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(497);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(706);
      END_STATE();
    case 678:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(645);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(706);
      END_STATE();
    case 679:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(599);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(706);
      END_STATE();
    case 680:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(668);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(706);
      END_STATE();
    case 681:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(596);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(706);
      END_STATE();
    case 682:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 's') ADVANCE(495);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(706);
      END_STATE();
    case 683:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 's') ADVANCE(523);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(706);
      END_STATE();
    case 684:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 's') ADVANCE(603);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(706);
      END_STATE();
    case 685:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 's') ADVANCE(683);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(706);
      END_STATE();
    case 686:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 's') ADVANCE(695);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(706);
      END_STATE();
    case 687:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(704);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(706);
      END_STATE();
    case 688:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(488);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(706);
      END_STATE();
    case 689:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(642);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(706);
      END_STATE();
    case 690:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(643);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(706);
      END_STATE();
    case 691:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(639);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(706);
      END_STATE();
    case 692:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(669);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(706);
      END_STATE();
    case 693:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(601);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(706);
      END_STATE();
    case 694:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(614);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(706);
      END_STATE();
    case 695:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(667);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(706);
      END_STATE();
    case 696:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(592);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(706);
      END_STATE();
    case 697:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(628);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(706);
      END_STATE();
    case 698:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(627);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(706);
      END_STATE();
    case 699:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'u') ADVANCE(692);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(706);
      END_STATE();
    case 700:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'u') ADVANCE(633);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(706);
      END_STATE();
    case 701:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'u') ADVANCE(671);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(706);
      END_STATE();
    case 702:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'u') ADVANCE(611);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(706);
      END_STATE();
    case 703:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'w') ADVANCE(517);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(706);
      END_STATE();
    case 704:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'y') ADVANCE(503);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(706);
      END_STATE();
    case 705:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'y') ADVANCE(605);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(706);
      END_STATE();
    case 706:
      ACCEPT_TOKEN(sym_identifier);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(706);
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
  [8] = {.lex_state = 418, .external_lex_state = 2},
  [9] = {.lex_state = 418, .external_lex_state = 3},
  [10] = {.lex_state = 418, .external_lex_state = 3},
  [11] = {.lex_state = 418, .external_lex_state = 3},
  [12] = {.lex_state = 418, .external_lex_state = 2},
  [13] = {.lex_state = 418, .external_lex_state = 3},
  [14] = {.lex_state = 418, .external_lex_state = 3},
  [15] = {.lex_state = 418, .external_lex_state = 2},
  [16] = {.lex_state = 418, .external_lex_state = 2},
  [17] = {.lex_state = 418, .external_lex_state = 3},
  [18] = {.lex_state = 418, .external_lex_state = 3},
  [19] = {.lex_state = 418, .external_lex_state = 2},
  [20] = {.lex_state = 418, .external_lex_state = 2},
  [21] = {.lex_state = 418, .external_lex_state = 3},
  [22] = {.lex_state = 418, .external_lex_state = 3},
  [23] = {.lex_state = 418, .external_lex_state = 3},
  [24] = {.lex_state = 418, .external_lex_state = 3},
  [25] = {.lex_state = 418, .external_lex_state = 3},
  [26] = {.lex_state = 418, .external_lex_state = 2},
  [27] = {.lex_state = 418, .external_lex_state = 3},
  [28] = {.lex_state = 418, .external_lex_state = 2},
  [29] = {.lex_state = 418, .external_lex_state = 2},
  [30] = {.lex_state = 418, .external_lex_state = 3},
  [31] = {.lex_state = 418, .external_lex_state = 3},
  [32] = {.lex_state = 418, .external_lex_state = 3},
  [33] = {.lex_state = 418, .external_lex_state = 2},
  [34] = {.lex_state = 418, .external_lex_state = 2},
  [35] = {.lex_state = 418, .external_lex_state = 2},
  [36] = {.lex_state = 418, .external_lex_state = 2},
  [37] = {.lex_state = 418, .external_lex_state = 3},
  [38] = {.lex_state = 418, .external_lex_state = 2},
  [39] = {.lex_state = 418, .external_lex_state = 3},
  [40] = {.lex_state = 418, .external_lex_state = 3},
  [41] = {.lex_state = 418, .external_lex_state = 3},
  [42] = {.lex_state = 418, .external_lex_state = 3},
  [43] = {.lex_state = 418, .external_lex_state = 3},
  [44] = {.lex_state = 418, .external_lex_state = 2},
  [45] = {.lex_state = 418, .external_lex_state = 2},
  [46] = {.lex_state = 418, .external_lex_state = 2},
  [47] = {.lex_state = 418, .external_lex_state = 2},
  [48] = {.lex_state = 418, .external_lex_state = 3},
  [49] = {.lex_state = 418, .external_lex_state = 2},
  [50] = {.lex_state = 418, .external_lex_state = 3},
  [51] = {.lex_state = 418, .external_lex_state = 2},
  [52] = {.lex_state = 13, .external_lex_state = 4},
  [53] = {.lex_state = 13, .external_lex_state = 4},
  [54] = {.lex_state = 13, .external_lex_state = 4},
  [55] = {.lex_state = 13, .external_lex_state = 4},
  [56] = {.lex_state = 13, .external_lex_state = 4},
  [57] = {.lex_state = 2, .external_lex_state = 2},
  [58] = {.lex_state = 13, .external_lex_state = 2},
  [59] = {.lex_state = 13, .external_lex_state = 2},
  [60] = {.lex_state = 13, .external_lex_state = 4},
  [61] = {.lex_state = 2, .external_lex_state = 2},
  [62] = {.lex_state = 13, .external_lex_state = 2},
  [63] = {.lex_state = 13, .external_lex_state = 2},
  [64] = {.lex_state = 13, .external_lex_state = 2},
  [65] = {.lex_state = 13, .external_lex_state = 4},
  [66] = {.lex_state = 0, .external_lex_state = 5},
  [67] = {.lex_state = 0, .external_lex_state = 5},
  [68] = {.lex_state = 13, .external_lex_state = 4},
  [69] = {.lex_state = 13, .external_lex_state = 4},
  [70] = {.lex_state = 0, .external_lex_state = 6},
  [71] = {.lex_state = 0, .external_lex_state = 5},
  [72] = {.lex_state = 0, .external_lex_state = 6},
  [73] = {.lex_state = 13, .external_lex_state = 2},
  [74] = {.lex_state = 0, .external_lex_state = 5},
  [75] = {.lex_state = 3, .external_lex_state = 2},
  [76] = {.lex_state = 0, .external_lex_state = 2},
  [77] = {.lex_state = 0, .external_lex_state = 7},
  [78] = {.lex_state = 3, .external_lex_state = 2},
  [79] = {.lex_state = 7, .external_lex_state = 2},
  [80] = {.lex_state = 0, .external_lex_state = 5},
  [81] = {.lex_state = 0, .external_lex_state = 5},
  [82] = {.lex_state = 7, .external_lex_state = 2},
  [83] = {.lex_state = 0, .external_lex_state = 7},
  [84] = {.lex_state = 0, .external_lex_state = 2},
  [85] = {.lex_state = 0, .external_lex_state = 5},
  [86] = {.lex_state = 13, .external_lex_state = 2},
  [87] = {.lex_state = 13, .external_lex_state = 2},
  [88] = {.lex_state = 13, .external_lex_state = 2},
  [89] = {.lex_state = 0, .external_lex_state = 2},
  [90] = {.lex_state = 0, .external_lex_state = 5},
  [91] = {.lex_state = 0, .external_lex_state = 2},
  [92] = {.lex_state = 0, .external_lex_state = 2},
  [93] = {.lex_state = 0, .external_lex_state = 2},
  [94] = {.lex_state = 0, .external_lex_state = 2},
  [95] = {.lex_state = 0, .external_lex_state = 8},
  [96] = {.lex_state = 0, .external_lex_state = 2},
  [97] = {.lex_state = 0, .external_lex_state = 2},
  [98] = {.lex_state = 0, .external_lex_state = 2},
  [99] = {.lex_state = 415, .external_lex_state = 2},
  [100] = {.lex_state = 0, .external_lex_state = 2},
  [101] = {.lex_state = 0, .external_lex_state = 2},
  [102] = {.lex_state = 0, .external_lex_state = 2},
  [103] = {.lex_state = 0, .external_lex_state = 9},
  [104] = {.lex_state = 0, .external_lex_state = 2},
  [105] = {.lex_state = 0, .external_lex_state = 2},
  [106] = {.lex_state = 0, .external_lex_state = 2},
  [107] = {.lex_state = 0, .external_lex_state = 2},
  [108] = {.lex_state = 0, .external_lex_state = 2},
  [109] = {.lex_state = 0, .external_lex_state = 8},
  [110] = {.lex_state = 415, .external_lex_state = 2},
  [111] = {.lex_state = 416, .external_lex_state = 2},
  [112] = {.lex_state = 416, .external_lex_state = 2},
  [113] = {.lex_state = 0, .external_lex_state = 9},
  [114] = {.lex_state = 0, .external_lex_state = 2},
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
    [sym_document] = STATE(105),
    [sym_html] = STATE(8),
    [sym_doctype] = STATE(29),
    [sym__node] = STATE(29),
    [sym_element] = STATE(29),
    [sym_script_element] = STATE(29),
    [sym_style_element] = STATE(29),
    [sym_start_tag] = STATE(11),
    [sym_script_start_tag] = STATE(71),
    [sym_style_start_tag] = STATE(74),
    [sym_self_closing_tag] = STATE(19),
    [sym_erroneous_end_tag] = STATE(29),
    [sym_text] = STATE(29),
    [sym_directive] = STATE(20),
    [sym_variable] = STATE(20),
    [aux_sym_document_repeat1] = STATE(8),
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
  [0] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(21), 1,
      anon_sym_PERCENT_RBRACE,
    ACTIONS(27), 1,
      sym_identifier,
    STATE(7), 1,
      sym__keyword_list,
    ACTIONS(23), 2,
      anon_sym_end_LBRACKobjectObject_RBRACK,
      anon_sym_csrf_DASHtoken,
    STATE(5), 2,
      sym_keyword,
      aux_sym_directive_repeat1,
    ACTIONS(25), 25,
      anon_sym_autoescape,
      anon_sym_block,
      anon_sym_comment,
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
  [48] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(29), 1,
      anon_sym_PERCENT_RBRACE,
    ACTIONS(31), 1,
      sym_identifier,
    STATE(7), 1,
      sym__keyword_list,
    ACTIONS(23), 2,
      anon_sym_end_LBRACKobjectObject_RBRACK,
      anon_sym_csrf_DASHtoken,
    STATE(2), 2,
      sym_keyword,
      aux_sym_directive_repeat1,
    ACTIONS(25), 25,
      anon_sym_autoescape,
      anon_sym_block,
      anon_sym_comment,
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
  [96] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(33), 1,
      anon_sym_PERCENT_RBRACE,
    ACTIONS(35), 1,
      sym_identifier,
    STATE(7), 1,
      sym__keyword_list,
    ACTIONS(23), 2,
      anon_sym_end_LBRACKobjectObject_RBRACK,
      anon_sym_csrf_DASHtoken,
    STATE(6), 2,
      sym_keyword,
      aux_sym_directive_repeat1,
    ACTIONS(25), 25,
      anon_sym_autoescape,
      anon_sym_block,
      anon_sym_comment,
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
  [144] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(37), 1,
      anon_sym_PERCENT_RBRACE,
    ACTIONS(45), 1,
      sym_identifier,
    STATE(7), 1,
      sym__keyword_list,
    ACTIONS(39), 2,
      anon_sym_end_LBRACKobjectObject_RBRACK,
      anon_sym_csrf_DASHtoken,
    STATE(5), 2,
      sym_keyword,
      aux_sym_directive_repeat1,
    ACTIONS(42), 25,
      anon_sym_autoescape,
      anon_sym_block,
      anon_sym_comment,
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
  [192] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(27), 1,
      sym_identifier,
    ACTIONS(48), 1,
      anon_sym_PERCENT_RBRACE,
    STATE(7), 1,
      sym__keyword_list,
    ACTIONS(23), 2,
      anon_sym_end_LBRACKobjectObject_RBRACK,
      anon_sym_csrf_DASHtoken,
    STATE(5), 2,
      sym_keyword,
      aux_sym_directive_repeat1,
    ACTIONS(25), 25,
      anon_sym_autoescape,
      anon_sym_block,
      anon_sym_comment,
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
  [240] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(50), 3,
      anon_sym_PERCENT_RBRACE,
      anon_sym_end_LBRACKobjectObject_RBRACK,
      anon_sym_csrf_DASHtoken,
    ACTIONS(52), 26,
      anon_sym_autoescape,
      anon_sym_block,
      anon_sym_comment,
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
      sym_identifier,
  [277] = 16,
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
    ACTIONS(54), 1,
      ts_builtin_sym_end,
    STATE(11), 1,
      sym_start_tag,
    STATE(19), 1,
      sym_self_closing_tag,
    STATE(71), 1,
      sym_script_start_tag,
    STATE(74), 1,
      sym_style_start_tag,
    STATE(12), 2,
      sym_html,
      aux_sym_document_repeat1,
    STATE(20), 2,
      sym_directive,
      sym_variable,
    STATE(29), 7,
      sym_doctype,
      sym__node,
      sym_element,
      sym_script_element,
      sym_style_element,
      sym_erroneous_end_tag,
      sym_text,
  [334] = 16,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(56), 1,
      anon_sym_LT_BANG,
    ACTIONS(58), 1,
      anon_sym_LT,
    ACTIONS(60), 1,
      anon_sym_LT_SLASH,
    ACTIONS(62), 1,
      sym_entity,
    ACTIONS(64), 1,
      aux_sym_text_token1,
    ACTIONS(66), 1,
      anon_sym_LBRACE_PERCENT,
    ACTIONS(68), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(70), 1,
      sym__implicit_end_tag,
    STATE(10), 1,
      sym_start_tag,
    STATE(25), 1,
      sym_self_closing_tag,
    STATE(39), 1,
      sym_end_tag,
    STATE(66), 1,
      sym_script_start_tag,
    STATE(67), 1,
      sym_style_start_tag,
    STATE(30), 2,
      sym_directive,
      sym_variable,
    STATE(14), 8,
      sym_doctype,
      sym__node,
      sym_element,
      sym_script_element,
      sym_style_element,
      sym_erroneous_end_tag,
      sym_text,
      aux_sym_element_repeat1,
  [391] = 16,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(56), 1,
      anon_sym_LT_BANG,
    ACTIONS(58), 1,
      anon_sym_LT,
    ACTIONS(60), 1,
      anon_sym_LT_SLASH,
    ACTIONS(64), 1,
      aux_sym_text_token1,
    ACTIONS(66), 1,
      anon_sym_LBRACE_PERCENT,
    ACTIONS(68), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(72), 1,
      sym_entity,
    ACTIONS(74), 1,
      sym__implicit_end_tag,
    STATE(10), 1,
      sym_start_tag,
    STATE(23), 1,
      sym_end_tag,
    STATE(25), 1,
      sym_self_closing_tag,
    STATE(66), 1,
      sym_script_start_tag,
    STATE(67), 1,
      sym_style_start_tag,
    STATE(30), 2,
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
  [448] = 16,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(56), 1,
      anon_sym_LT_BANG,
    ACTIONS(58), 1,
      anon_sym_LT,
    ACTIONS(64), 1,
      aux_sym_text_token1,
    ACTIONS(66), 1,
      anon_sym_LBRACE_PERCENT,
    ACTIONS(68), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(76), 1,
      anon_sym_LT_SLASH,
    ACTIONS(78), 1,
      sym_entity,
    ACTIONS(80), 1,
      sym__implicit_end_tag,
    STATE(10), 1,
      sym_start_tag,
    STATE(25), 1,
      sym_self_closing_tag,
    STATE(28), 1,
      sym_end_tag,
    STATE(66), 1,
      sym_script_start_tag,
    STATE(67), 1,
      sym_style_start_tag,
    STATE(30), 2,
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
  [505] = 16,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(82), 1,
      ts_builtin_sym_end,
    ACTIONS(84), 1,
      anon_sym_LT_BANG,
    ACTIONS(87), 1,
      anon_sym_LT,
    ACTIONS(90), 1,
      anon_sym_LT_SLASH,
    ACTIONS(93), 1,
      sym_entity,
    ACTIONS(96), 1,
      aux_sym_text_token1,
    ACTIONS(99), 1,
      anon_sym_LBRACE_PERCENT,
    ACTIONS(102), 1,
      anon_sym_LBRACE_LBRACE,
    STATE(11), 1,
      sym_start_tag,
    STATE(19), 1,
      sym_self_closing_tag,
    STATE(71), 1,
      sym_script_start_tag,
    STATE(74), 1,
      sym_style_start_tag,
    STATE(12), 2,
      sym_html,
      aux_sym_document_repeat1,
    STATE(20), 2,
      sym_directive,
      sym_variable,
    STATE(29), 7,
      sym_doctype,
      sym__node,
      sym_element,
      sym_script_element,
      sym_style_element,
      sym_erroneous_end_tag,
      sym_text,
  [562] = 16,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(56), 1,
      anon_sym_LT_BANG,
    ACTIONS(58), 1,
      anon_sym_LT,
    ACTIONS(62), 1,
      sym_entity,
    ACTIONS(64), 1,
      aux_sym_text_token1,
    ACTIONS(66), 1,
      anon_sym_LBRACE_PERCENT,
    ACTIONS(68), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(76), 1,
      anon_sym_LT_SLASH,
    ACTIONS(105), 1,
      sym__implicit_end_tag,
    STATE(10), 1,
      sym_start_tag,
    STATE(25), 1,
      sym_self_closing_tag,
    STATE(49), 1,
      sym_end_tag,
    STATE(66), 1,
      sym_script_start_tag,
    STATE(67), 1,
      sym_style_start_tag,
    STATE(30), 2,
      sym_directive,
      sym_variable,
    STATE(14), 8,
      sym_doctype,
      sym__node,
      sym_element,
      sym_script_element,
      sym_style_element,
      sym_erroneous_end_tag,
      sym_text,
      aux_sym_element_repeat1,
  [619] = 15,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(107), 1,
      anon_sym_LT_BANG,
    ACTIONS(110), 1,
      anon_sym_LT,
    ACTIONS(113), 1,
      anon_sym_LT_SLASH,
    ACTIONS(116), 1,
      sym_entity,
    ACTIONS(119), 1,
      aux_sym_text_token1,
    ACTIONS(122), 1,
      anon_sym_LBRACE_PERCENT,
    ACTIONS(125), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(128), 1,
      sym__implicit_end_tag,
    STATE(10), 1,
      sym_start_tag,
    STATE(25), 1,
      sym_self_closing_tag,
    STATE(66), 1,
      sym_script_start_tag,
    STATE(67), 1,
      sym_style_start_tag,
    STATE(30), 2,
      sym_directive,
      sym_variable,
    STATE(14), 8,
      sym_doctype,
      sym__node,
      sym_element,
      sym_script_element,
      sym_style_element,
      sym_erroneous_end_tag,
      sym_text,
      aux_sym_element_repeat1,
  [673] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(132), 1,
      anon_sym_LT,
    ACTIONS(130), 7,
      ts_builtin_sym_end,
      anon_sym_LT_BANG,
      anon_sym_LT_SLASH,
      sym_entity,
      aux_sym_text_token1,
      anon_sym_LBRACE_PERCENT,
      anon_sym_LBRACE_LBRACE,
  [689] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(136), 1,
      anon_sym_LT,
    ACTIONS(134), 7,
      ts_builtin_sym_end,
      anon_sym_LT_BANG,
      anon_sym_LT_SLASH,
      sym_entity,
      aux_sym_text_token1,
      anon_sym_LBRACE_PERCENT,
      anon_sym_LBRACE_LBRACE,
  [705] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(140), 1,
      anon_sym_LT,
    ACTIONS(138), 7,
      sym__implicit_end_tag,
      anon_sym_LT_BANG,
      anon_sym_LT_SLASH,
      sym_entity,
      aux_sym_text_token1,
      anon_sym_LBRACE_PERCENT,
      anon_sym_LBRACE_LBRACE,
  [721] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(144), 1,
      anon_sym_LT,
    ACTIONS(142), 7,
      sym__implicit_end_tag,
      anon_sym_LT_BANG,
      anon_sym_LT_SLASH,
      sym_entity,
      aux_sym_text_token1,
      anon_sym_LBRACE_PERCENT,
      anon_sym_LBRACE_LBRACE,
  [737] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(148), 1,
      anon_sym_LT,
    ACTIONS(146), 7,
      ts_builtin_sym_end,
      anon_sym_LT_BANG,
      anon_sym_LT_SLASH,
      sym_entity,
      aux_sym_text_token1,
      anon_sym_LBRACE_PERCENT,
      anon_sym_LBRACE_LBRACE,
  [753] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(152), 1,
      anon_sym_LT,
    ACTIONS(150), 7,
      ts_builtin_sym_end,
      anon_sym_LT_BANG,
      anon_sym_LT_SLASH,
      sym_entity,
      aux_sym_text_token1,
      anon_sym_LBRACE_PERCENT,
      anon_sym_LBRACE_LBRACE,
  [769] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(156), 1,
      anon_sym_LT,
    ACTIONS(154), 7,
      sym__implicit_end_tag,
      anon_sym_LT_BANG,
      anon_sym_LT_SLASH,
      sym_entity,
      aux_sym_text_token1,
      anon_sym_LBRACE_PERCENT,
      anon_sym_LBRACE_LBRACE,
  [785] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(160), 1,
      anon_sym_LT,
    ACTIONS(158), 7,
      sym__implicit_end_tag,
      anon_sym_LT_BANG,
      anon_sym_LT_SLASH,
      sym_entity,
      aux_sym_text_token1,
      anon_sym_LBRACE_PERCENT,
      anon_sym_LBRACE_LBRACE,
  [801] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(164), 1,
      anon_sym_LT,
    ACTIONS(162), 7,
      sym__implicit_end_tag,
      anon_sym_LT_BANG,
      anon_sym_LT_SLASH,
      sym_entity,
      aux_sym_text_token1,
      anon_sym_LBRACE_PERCENT,
      anon_sym_LBRACE_LBRACE,
  [817] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(168), 1,
      anon_sym_LT,
    ACTIONS(166), 7,
      sym__implicit_end_tag,
      anon_sym_LT_BANG,
      anon_sym_LT_SLASH,
      sym_entity,
      aux_sym_text_token1,
      anon_sym_LBRACE_PERCENT,
      anon_sym_LBRACE_LBRACE,
  [833] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(148), 1,
      anon_sym_LT,
    ACTIONS(146), 7,
      sym__implicit_end_tag,
      anon_sym_LT_BANG,
      anon_sym_LT_SLASH,
      sym_entity,
      aux_sym_text_token1,
      anon_sym_LBRACE_PERCENT,
      anon_sym_LBRACE_LBRACE,
  [849] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(168), 1,
      anon_sym_LT,
    ACTIONS(166), 7,
      ts_builtin_sym_end,
      anon_sym_LT_BANG,
      anon_sym_LT_SLASH,
      sym_entity,
      aux_sym_text_token1,
      anon_sym_LBRACE_PERCENT,
      anon_sym_LBRACE_LBRACE,
  [865] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(152), 1,
      anon_sym_LT,
    ACTIONS(150), 7,
      sym__implicit_end_tag,
      anon_sym_LT_BANG,
      anon_sym_LT_SLASH,
      sym_entity,
      aux_sym_text_token1,
      anon_sym_LBRACE_PERCENT,
      anon_sym_LBRACE_LBRACE,
  [881] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(164), 1,
      anon_sym_LT,
    ACTIONS(162), 7,
      ts_builtin_sym_end,
      anon_sym_LT_BANG,
      anon_sym_LT_SLASH,
      sym_entity,
      aux_sym_text_token1,
      anon_sym_LBRACE_PERCENT,
      anon_sym_LBRACE_LBRACE,
  [897] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(172), 1,
      anon_sym_LT,
    ACTIONS(170), 7,
      ts_builtin_sym_end,
      anon_sym_LT_BANG,
      anon_sym_LT_SLASH,
      sym_entity,
      aux_sym_text_token1,
      anon_sym_LBRACE_PERCENT,
      anon_sym_LBRACE_LBRACE,
  [913] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(152), 1,
      anon_sym_LT,
    ACTIONS(150), 7,
      sym__implicit_end_tag,
      anon_sym_LT_BANG,
      anon_sym_LT_SLASH,
      sym_entity,
      aux_sym_text_token1,
      anon_sym_LBRACE_PERCENT,
      anon_sym_LBRACE_LBRACE,
  [929] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(176), 1,
      anon_sym_LT,
    ACTIONS(174), 7,
      sym__implicit_end_tag,
      anon_sym_LT_BANG,
      anon_sym_LT_SLASH,
      sym_entity,
      aux_sym_text_token1,
      anon_sym_LBRACE_PERCENT,
      anon_sym_LBRACE_LBRACE,
  [945] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(180), 1,
      anon_sym_LT,
    ACTIONS(178), 7,
      sym__implicit_end_tag,
      anon_sym_LT_BANG,
      anon_sym_LT_SLASH,
      sym_entity,
      aux_sym_text_token1,
      anon_sym_LBRACE_PERCENT,
      anon_sym_LBRACE_LBRACE,
  [961] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(160), 1,
      anon_sym_LT,
    ACTIONS(158), 7,
      ts_builtin_sym_end,
      anon_sym_LT_BANG,
      anon_sym_LT_SLASH,
      sym_entity,
      aux_sym_text_token1,
      anon_sym_LBRACE_PERCENT,
      anon_sym_LBRACE_LBRACE,
  [977] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(184), 1,
      anon_sym_LT,
    ACTIONS(182), 7,
      ts_builtin_sym_end,
      anon_sym_LT_BANG,
      anon_sym_LT_SLASH,
      sym_entity,
      aux_sym_text_token1,
      anon_sym_LBRACE_PERCENT,
      anon_sym_LBRACE_LBRACE,
  [993] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(156), 1,
      anon_sym_LT,
    ACTIONS(154), 7,
      ts_builtin_sym_end,
      anon_sym_LT_BANG,
      anon_sym_LT_SLASH,
      sym_entity,
      aux_sym_text_token1,
      anon_sym_LBRACE_PERCENT,
      anon_sym_LBRACE_LBRACE,
  [1009] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(152), 1,
      anon_sym_LT,
    ACTIONS(150), 7,
      ts_builtin_sym_end,
      anon_sym_LT_BANG,
      anon_sym_LT_SLASH,
      sym_entity,
      aux_sym_text_token1,
      anon_sym_LBRACE_PERCENT,
      anon_sym_LBRACE_LBRACE,
  [1025] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(188), 1,
      anon_sym_LT,
    ACTIONS(186), 7,
      sym__implicit_end_tag,
      anon_sym_LT_BANG,
      anon_sym_LT_SLASH,
      sym_entity,
      aux_sym_text_token1,
      anon_sym_LBRACE_PERCENT,
      anon_sym_LBRACE_LBRACE,
  [1041] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(144), 1,
      anon_sym_LT,
    ACTIONS(142), 7,
      ts_builtin_sym_end,
      anon_sym_LT_BANG,
      anon_sym_LT_SLASH,
      sym_entity,
      aux_sym_text_token1,
      anon_sym_LBRACE_PERCENT,
      anon_sym_LBRACE_LBRACE,
  [1057] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(192), 1,
      anon_sym_LT,
    ACTIONS(190), 7,
      sym__implicit_end_tag,
      anon_sym_LT_BANG,
      anon_sym_LT_SLASH,
      sym_entity,
      aux_sym_text_token1,
      anon_sym_LBRACE_PERCENT,
      anon_sym_LBRACE_LBRACE,
  [1073] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(196), 1,
      anon_sym_LT,
    ACTIONS(194), 7,
      sym__implicit_end_tag,
      anon_sym_LT_BANG,
      anon_sym_LT_SLASH,
      sym_entity,
      aux_sym_text_token1,
      anon_sym_LBRACE_PERCENT,
      anon_sym_LBRACE_LBRACE,
  [1089] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(136), 1,
      anon_sym_LT,
    ACTIONS(134), 7,
      sym__implicit_end_tag,
      anon_sym_LT_BANG,
      anon_sym_LT_SLASH,
      sym_entity,
      aux_sym_text_token1,
      anon_sym_LBRACE_PERCENT,
      anon_sym_LBRACE_LBRACE,
  [1105] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(184), 1,
      anon_sym_LT,
    ACTIONS(182), 7,
      sym__implicit_end_tag,
      anon_sym_LT_BANG,
      anon_sym_LT_SLASH,
      sym_entity,
      aux_sym_text_token1,
      anon_sym_LBRACE_PERCENT,
      anon_sym_LBRACE_LBRACE,
  [1121] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(200), 1,
      anon_sym_LT,
    ACTIONS(198), 7,
      sym__implicit_end_tag,
      anon_sym_LT_BANG,
      anon_sym_LT_SLASH,
      sym_entity,
      aux_sym_text_token1,
      anon_sym_LBRACE_PERCENT,
      anon_sym_LBRACE_LBRACE,
  [1137] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(204), 1,
      anon_sym_LT,
    ACTIONS(202), 7,
      ts_builtin_sym_end,
      anon_sym_LT_BANG,
      anon_sym_LT_SLASH,
      sym_entity,
      aux_sym_text_token1,
      anon_sym_LBRACE_PERCENT,
      anon_sym_LBRACE_LBRACE,
  [1153] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(140), 1,
      anon_sym_LT,
    ACTIONS(138), 7,
      ts_builtin_sym_end,
      anon_sym_LT_BANG,
      anon_sym_LT_SLASH,
      sym_entity,
      aux_sym_text_token1,
      anon_sym_LBRACE_PERCENT,
      anon_sym_LBRACE_LBRACE,
  [1169] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(176), 1,
      anon_sym_LT,
    ACTIONS(174), 7,
      ts_builtin_sym_end,
      anon_sym_LT_BANG,
      anon_sym_LT_SLASH,
      sym_entity,
      aux_sym_text_token1,
      anon_sym_LBRACE_PERCENT,
      anon_sym_LBRACE_LBRACE,
  [1185] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(180), 1,
      anon_sym_LT,
    ACTIONS(178), 7,
      ts_builtin_sym_end,
      anon_sym_LT_BANG,
      anon_sym_LT_SLASH,
      sym_entity,
      aux_sym_text_token1,
      anon_sym_LBRACE_PERCENT,
      anon_sym_LBRACE_LBRACE,
  [1201] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(132), 1,
      anon_sym_LT,
    ACTIONS(130), 7,
      sym__implicit_end_tag,
      anon_sym_LT_BANG,
      anon_sym_LT_SLASH,
      sym_entity,
      aux_sym_text_token1,
      anon_sym_LBRACE_PERCENT,
      anon_sym_LBRACE_LBRACE,
  [1217] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(192), 1,
      anon_sym_LT,
    ACTIONS(190), 7,
      ts_builtin_sym_end,
      anon_sym_LT_BANG,
      anon_sym_LT_SLASH,
      sym_entity,
      aux_sym_text_token1,
      anon_sym_LBRACE_PERCENT,
      anon_sym_LBRACE_LBRACE,
  [1233] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(204), 1,
      anon_sym_LT,
    ACTIONS(202), 7,
      sym__implicit_end_tag,
      anon_sym_LT_BANG,
      anon_sym_LT_SLASH,
      sym_entity,
      aux_sym_text_token1,
      anon_sym_LBRACE_PERCENT,
      anon_sym_LBRACE_LBRACE,
  [1249] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(196), 1,
      anon_sym_LT,
    ACTIONS(194), 7,
      ts_builtin_sym_end,
      anon_sym_LT_BANG,
      anon_sym_LT_SLASH,
      sym_entity,
      aux_sym_text_token1,
      anon_sym_LBRACE_PERCENT,
      anon_sym_LBRACE_LBRACE,
  [1265] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(206), 1,
      anon_sym_GT,
    ACTIONS(208), 1,
      anon_sym_SLASH_GT,
    ACTIONS(210), 1,
      sym_attribute_name,
    STATE(55), 2,
      sym_attribute,
      aux_sym_start_tag_repeat1,
  [1282] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(214), 1,
      sym_attribute_name,
    ACTIONS(212), 2,
      anon_sym_GT,
      anon_sym_SLASH_GT,
    STATE(53), 2,
      sym_attribute,
      aux_sym_start_tag_repeat1,
  [1297] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(206), 1,
      anon_sym_GT,
    ACTIONS(210), 1,
      sym_attribute_name,
    ACTIONS(217), 1,
      anon_sym_SLASH_GT,
    STATE(56), 2,
      sym_attribute,
      aux_sym_start_tag_repeat1,
  [1314] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(210), 1,
      sym_attribute_name,
    ACTIONS(219), 1,
      anon_sym_GT,
    ACTIONS(221), 1,
      anon_sym_SLASH_GT,
    STATE(53), 2,
      sym_attribute,
      aux_sym_start_tag_repeat1,
  [1331] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(210), 1,
      sym_attribute_name,
    ACTIONS(219), 1,
      anon_sym_GT,
    ACTIONS(223), 1,
      anon_sym_SLASH_GT,
    STATE(53), 2,
      sym_attribute,
      aux_sym_start_tag_repeat1,
  [1348] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(225), 1,
      sym_attribute_value,
    ACTIONS(227), 1,
      anon_sym_SQUOTE,
    ACTIONS(229), 1,
      anon_sym_DQUOTE,
    STATE(86), 1,
      sym_quoted_attribute_value,
  [1364] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(212), 1,
      anon_sym_GT,
    ACTIONS(231), 1,
      sym_attribute_name,
    STATE(58), 2,
      sym_attribute,
      aux_sym_start_tag_repeat1,
  [1378] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(234), 1,
      anon_sym_GT,
    ACTIONS(236), 1,
      sym_attribute_name,
    STATE(58), 2,
      sym_attribute,
      aux_sym_start_tag_repeat1,
  [1392] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(240), 1,
      anon_sym_EQ,
    ACTIONS(238), 3,
      anon_sym_GT,
      anon_sym_SLASH_GT,
      sym_attribute_name,
  [1404] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(242), 1,
      sym_attribute_value,
    ACTIONS(244), 1,
      anon_sym_SQUOTE,
    ACTIONS(246), 1,
      anon_sym_DQUOTE,
    STATE(65), 1,
      sym_quoted_attribute_value,
  [1420] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(236), 1,
      sym_attribute_name,
    ACTIONS(248), 1,
      anon_sym_GT,
    STATE(64), 2,
      sym_attribute,
      aux_sym_start_tag_repeat1,
  [1434] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(236), 1,
      sym_attribute_name,
    ACTIONS(250), 1,
      anon_sym_GT,
    STATE(59), 2,
      sym_attribute,
      aux_sym_start_tag_repeat1,
  [1448] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(236), 1,
      sym_attribute_name,
    ACTIONS(252), 1,
      anon_sym_GT,
    STATE(58), 2,
      sym_attribute,
      aux_sym_start_tag_repeat1,
  [1462] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(254), 3,
      anon_sym_GT,
      anon_sym_SLASH_GT,
      sym_attribute_name,
  [1471] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(256), 1,
      anon_sym_LT_SLASH,
    ACTIONS(258), 1,
      sym_raw_text,
    STATE(22), 1,
      sym_end_tag,
  [1484] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(256), 1,
      anon_sym_LT_SLASH,
    ACTIONS(260), 1,
      sym_raw_text,
    STATE(21), 1,
      sym_end_tag,
  [1497] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(262), 3,
      anon_sym_GT,
      anon_sym_SLASH_GT,
      sym_attribute_name,
  [1506] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(264), 3,
      anon_sym_GT,
      anon_sym_SLASH_GT,
      sym_attribute_name,
  [1515] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(266), 1,
      sym__start_tag_name,
    ACTIONS(268), 1,
      sym__script_start_tag_name,
    ACTIONS(270), 1,
      sym__style_start_tag_name,
  [1528] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(272), 1,
      anon_sym_LT_SLASH,
    ACTIONS(274), 1,
      sym_raw_text,
    STATE(33), 1,
      sym_end_tag,
  [1541] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(268), 1,
      sym__script_start_tag_name,
    ACTIONS(270), 1,
      sym__style_start_tag_name,
    ACTIONS(276), 1,
      sym__start_tag_name,
  [1554] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(278), 1,
      anon_sym_EQ,
    ACTIONS(238), 2,
      anon_sym_GT,
      sym_attribute_name,
  [1565] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(272), 1,
      anon_sym_LT_SLASH,
    ACTIONS(280), 1,
      sym_raw_text,
    STATE(35), 1,
      sym_end_tag,
  [1578] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(282), 1,
      anon_sym_DQUOTE,
    ACTIONS(284), 1,
      aux_sym_quoted_attribute_value_token2,
  [1588] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(272), 1,
      anon_sym_LT_SLASH,
    STATE(34), 1,
      sym_end_tag,
  [1598] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(286), 1,
      sym__end_tag_name,
    ACTIONS(288), 1,
      sym_erroneous_end_tag_name,
  [1608] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(290), 1,
      anon_sym_DQUOTE,
    ACTIONS(292), 1,
      aux_sym_quoted_attribute_value_token2,
  [1618] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(282), 1,
      anon_sym_SQUOTE,
    ACTIONS(294), 1,
      aux_sym_quoted_attribute_value_token1,
  [1628] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(296), 2,
      sym_raw_text,
      anon_sym_LT_SLASH,
  [1636] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(298), 2,
      sym_raw_text,
      anon_sym_LT_SLASH,
  [1644] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(290), 1,
      anon_sym_SQUOTE,
    ACTIONS(300), 1,
      aux_sym_quoted_attribute_value_token1,
  [1654] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(288), 1,
      sym_erroneous_end_tag_name,
    ACTIONS(302), 1,
      sym__end_tag_name,
  [1664] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(256), 1,
      anon_sym_LT_SLASH,
    STATE(42), 1,
      sym_end_tag,
  [1674] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(304), 2,
      sym_raw_text,
      anon_sym_LT_SLASH,
  [1682] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(254), 2,
      anon_sym_GT,
      sym_attribute_name,
  [1690] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(262), 2,
      anon_sym_GT,
      sym_attribute_name,
  [1698] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(264), 2,
      anon_sym_GT,
      sym_attribute_name,
  [1706] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(256), 1,
      anon_sym_LT_SLASH,
    STATE(40), 1,
      sym_end_tag,
  [1716] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(306), 2,
      sym_raw_text,
      anon_sym_LT_SLASH,
  [1724] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(272), 1,
      anon_sym_LT_SLASH,
    STATE(51), 1,
      sym_end_tag,
  [1734] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(308), 1,
      anon_sym_GT,
  [1741] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(310), 1,
      anon_sym_RBRACE_RBRACE,
  [1748] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(312), 1,
      anon_sym_DQUOTE,
  [1755] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(314), 1,
      sym_erroneous_end_tag_name,
  [1762] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(316), 1,
      anon_sym_RBRACE_RBRACE,
  [1769] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(312), 1,
      anon_sym_SQUOTE,
  [1776] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(318), 1,
      anon_sym_GT,
  [1783] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(320), 1,
      sym_identifier,
  [1790] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(322), 1,
      anon_sym_GT,
  [1797] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(324), 1,
      anon_sym_GT,
  [1804] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(326), 1,
      anon_sym_GT,
  [1811] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(302), 1,
      sym__end_tag_name,
  [1818] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(328), 1,
      sym__doctype,
  [1825] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(330), 1,
      ts_builtin_sym_end,
  [1832] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(332), 1,
      anon_sym_SQUOTE,
  [1839] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(332), 1,
      anon_sym_DQUOTE,
  [1846] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(334), 1,
      anon_sym_GT,
  [1853] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(288), 1,
      sym_erroneous_end_tag_name,
  [1860] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(336), 1,
      sym_identifier,
  [1867] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(338), 1,
      aux_sym_doctype_token1,
  [1874] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(340), 1,
      aux_sym_doctype_token1,
  [1881] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(286), 1,
      sym__end_tag_name,
  [1888] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(342), 1,
      sym__doctype,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 48,
  [SMALL_STATE(4)] = 96,
  [SMALL_STATE(5)] = 144,
  [SMALL_STATE(6)] = 192,
  [SMALL_STATE(7)] = 240,
  [SMALL_STATE(8)] = 277,
  [SMALL_STATE(9)] = 334,
  [SMALL_STATE(10)] = 391,
  [SMALL_STATE(11)] = 448,
  [SMALL_STATE(12)] = 505,
  [SMALL_STATE(13)] = 562,
  [SMALL_STATE(14)] = 619,
  [SMALL_STATE(15)] = 673,
  [SMALL_STATE(16)] = 689,
  [SMALL_STATE(17)] = 705,
  [SMALL_STATE(18)] = 721,
  [SMALL_STATE(19)] = 737,
  [SMALL_STATE(20)] = 753,
  [SMALL_STATE(21)] = 769,
  [SMALL_STATE(22)] = 785,
  [SMALL_STATE(23)] = 801,
  [SMALL_STATE(24)] = 817,
  [SMALL_STATE(25)] = 833,
  [SMALL_STATE(26)] = 849,
  [SMALL_STATE(27)] = 865,
  [SMALL_STATE(28)] = 881,
  [SMALL_STATE(29)] = 897,
  [SMALL_STATE(30)] = 913,
  [SMALL_STATE(31)] = 929,
  [SMALL_STATE(32)] = 945,
  [SMALL_STATE(33)] = 961,
  [SMALL_STATE(34)] = 977,
  [SMALL_STATE(35)] = 993,
  [SMALL_STATE(36)] = 1009,
  [SMALL_STATE(37)] = 1025,
  [SMALL_STATE(38)] = 1041,
  [SMALL_STATE(39)] = 1057,
  [SMALL_STATE(40)] = 1073,
  [SMALL_STATE(41)] = 1089,
  [SMALL_STATE(42)] = 1105,
  [SMALL_STATE(43)] = 1121,
  [SMALL_STATE(44)] = 1137,
  [SMALL_STATE(45)] = 1153,
  [SMALL_STATE(46)] = 1169,
  [SMALL_STATE(47)] = 1185,
  [SMALL_STATE(48)] = 1201,
  [SMALL_STATE(49)] = 1217,
  [SMALL_STATE(50)] = 1233,
  [SMALL_STATE(51)] = 1249,
  [SMALL_STATE(52)] = 1265,
  [SMALL_STATE(53)] = 1282,
  [SMALL_STATE(54)] = 1297,
  [SMALL_STATE(55)] = 1314,
  [SMALL_STATE(56)] = 1331,
  [SMALL_STATE(57)] = 1348,
  [SMALL_STATE(58)] = 1364,
  [SMALL_STATE(59)] = 1378,
  [SMALL_STATE(60)] = 1392,
  [SMALL_STATE(61)] = 1404,
  [SMALL_STATE(62)] = 1420,
  [SMALL_STATE(63)] = 1434,
  [SMALL_STATE(64)] = 1448,
  [SMALL_STATE(65)] = 1462,
  [SMALL_STATE(66)] = 1471,
  [SMALL_STATE(67)] = 1484,
  [SMALL_STATE(68)] = 1497,
  [SMALL_STATE(69)] = 1506,
  [SMALL_STATE(70)] = 1515,
  [SMALL_STATE(71)] = 1528,
  [SMALL_STATE(72)] = 1541,
  [SMALL_STATE(73)] = 1554,
  [SMALL_STATE(74)] = 1565,
  [SMALL_STATE(75)] = 1578,
  [SMALL_STATE(76)] = 1588,
  [SMALL_STATE(77)] = 1598,
  [SMALL_STATE(78)] = 1608,
  [SMALL_STATE(79)] = 1618,
  [SMALL_STATE(80)] = 1628,
  [SMALL_STATE(81)] = 1636,
  [SMALL_STATE(82)] = 1644,
  [SMALL_STATE(83)] = 1654,
  [SMALL_STATE(84)] = 1664,
  [SMALL_STATE(85)] = 1674,
  [SMALL_STATE(86)] = 1682,
  [SMALL_STATE(87)] = 1690,
  [SMALL_STATE(88)] = 1698,
  [SMALL_STATE(89)] = 1706,
  [SMALL_STATE(90)] = 1716,
  [SMALL_STATE(91)] = 1724,
  [SMALL_STATE(92)] = 1734,
  [SMALL_STATE(93)] = 1741,
  [SMALL_STATE(94)] = 1748,
  [SMALL_STATE(95)] = 1755,
  [SMALL_STATE(96)] = 1762,
  [SMALL_STATE(97)] = 1769,
  [SMALL_STATE(98)] = 1776,
  [SMALL_STATE(99)] = 1783,
  [SMALL_STATE(100)] = 1790,
  [SMALL_STATE(101)] = 1797,
  [SMALL_STATE(102)] = 1804,
  [SMALL_STATE(103)] = 1811,
  [SMALL_STATE(104)] = 1818,
  [SMALL_STATE(105)] = 1825,
  [SMALL_STATE(106)] = 1832,
  [SMALL_STATE(107)] = 1839,
  [SMALL_STATE(108)] = 1846,
  [SMALL_STATE(109)] = 1853,
  [SMALL_STATE(110)] = 1860,
  [SMALL_STATE(111)] = 1867,
  [SMALL_STATE(112)] = 1874,
  [SMALL_STATE(113)] = 1881,
  [SMALL_STATE(114)] = 1888,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT_EXTRA(),
  [5] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_document, 0),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(104),
  [9] = {.entry = {.count = 1, .reusable = false}}, SHIFT(70),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(95),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(99),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [23] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [25] = {.entry = {.count = 1, .reusable = false}}, SHIFT(7),
  [27] = {.entry = {.count = 1, .reusable = false}}, SHIFT(5),
  [29] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [31] = {.entry = {.count = 1, .reusable = false}}, SHIFT(2),
  [33] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [35] = {.entry = {.count = 1, .reusable = false}}, SHIFT(6),
  [37] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_directive_repeat1, 2),
  [39] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_directive_repeat1, 2), SHIFT_REPEAT(7),
  [42] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_directive_repeat1, 2), SHIFT_REPEAT(7),
  [45] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_directive_repeat1, 2), SHIFT_REPEAT(5),
  [48] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [50] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_keyword, 1),
  [52] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_keyword, 1),
  [54] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_document, 1),
  [56] = {.entry = {.count = 1, .reusable = true}}, SHIFT(114),
  [58] = {.entry = {.count = 1, .reusable = false}}, SHIFT(72),
  [60] = {.entry = {.count = 1, .reusable = true}}, SHIFT(77),
  [62] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [64] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [66] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [68] = {.entry = {.count = 1, .reusable = true}}, SHIFT(110),
  [70] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [72] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [74] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [76] = {.entry = {.count = 1, .reusable = true}}, SHIFT(83),
  [78] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [80] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [82] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2),
  [84] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(104),
  [87] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(70),
  [90] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(95),
  [93] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(29),
  [96] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(36),
  [99] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(4),
  [102] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(99),
  [105] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [107] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_element_repeat1, 2), SHIFT_REPEAT(114),
  [110] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_element_repeat1, 2), SHIFT_REPEAT(72),
  [113] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_element_repeat1, 2), SHIFT_REPEAT(109),
  [116] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_element_repeat1, 2), SHIFT_REPEAT(14),
  [119] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_element_repeat1, 2), SHIFT_REPEAT(27),
  [122] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_element_repeat1, 2), SHIFT_REPEAT(3),
  [125] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_element_repeat1, 2), SHIFT_REPEAT(110),
  [128] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_element_repeat1, 2),
  [130] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_self_closing_tag, 4),
  [132] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_self_closing_tag, 4),
  [134] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_end_tag, 3),
  [136] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_end_tag, 3),
  [138] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_erroneous_end_tag, 3),
  [140] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_erroneous_end_tag, 3),
  [142] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_self_closing_tag, 3),
  [144] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_self_closing_tag, 3),
  [146] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_element, 1),
  [148] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_element, 1),
  [150] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_text, 1),
  [152] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_text, 1),
  [154] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_style_element, 2),
  [156] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_style_element, 2),
  [158] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_script_element, 2),
  [160] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_script_element, 2),
  [162] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_element, 2),
  [164] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_element, 2),
  [166] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_directive, 2),
  [168] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_directive, 2),
  [170] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_html, 1),
  [172] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_html, 1),
  [174] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_directive, 3),
  [176] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_directive, 3),
  [178] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable, 3),
  [180] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_variable, 3),
  [182] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_style_element, 3),
  [184] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_style_element, 3),
  [186] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_start_tag, 3),
  [188] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_start_tag, 3),
  [190] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_element, 3),
  [192] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_element, 3),
  [194] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_script_element, 3),
  [196] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_script_element, 3),
  [198] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_start_tag, 4),
  [200] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_start_tag, 4),
  [202] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_doctype, 4),
  [204] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_doctype, 4),
  [206] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [208] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [210] = {.entry = {.count = 1, .reusable = true}}, SHIFT(60),
  [212] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_start_tag_repeat1, 2),
  [214] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_start_tag_repeat1, 2), SHIFT_REPEAT(60),
  [217] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [219] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [221] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [223] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [225] = {.entry = {.count = 1, .reusable = true}}, SHIFT(86),
  [227] = {.entry = {.count = 1, .reusable = true}}, SHIFT(82),
  [229] = {.entry = {.count = 1, .reusable = true}}, SHIFT(78),
  [231] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_start_tag_repeat1, 2), SHIFT_REPEAT(73),
  [234] = {.entry = {.count = 1, .reusable = true}}, SHIFT(81),
  [236] = {.entry = {.count = 1, .reusable = true}}, SHIFT(73),
  [238] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_attribute, 1),
  [240] = {.entry = {.count = 1, .reusable = true}}, SHIFT(61),
  [242] = {.entry = {.count = 1, .reusable = true}}, SHIFT(65),
  [244] = {.entry = {.count = 1, .reusable = true}}, SHIFT(79),
  [246] = {.entry = {.count = 1, .reusable = true}}, SHIFT(75),
  [248] = {.entry = {.count = 1, .reusable = true}}, SHIFT(85),
  [250] = {.entry = {.count = 1, .reusable = true}}, SHIFT(90),
  [252] = {.entry = {.count = 1, .reusable = true}}, SHIFT(80),
  [254] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_attribute, 3),
  [256] = {.entry = {.count = 1, .reusable = true}}, SHIFT(113),
  [258] = {.entry = {.count = 1, .reusable = true}}, SHIFT(89),
  [260] = {.entry = {.count = 1, .reusable = true}}, SHIFT(84),
  [262] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_quoted_attribute_value, 2),
  [264] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_quoted_attribute_value, 3),
  [266] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
  [268] = {.entry = {.count = 1, .reusable = true}}, SHIFT(63),
  [270] = {.entry = {.count = 1, .reusable = true}}, SHIFT(62),
  [272] = {.entry = {.count = 1, .reusable = true}}, SHIFT(103),
  [274] = {.entry = {.count = 1, .reusable = true}}, SHIFT(91),
  [276] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [278] = {.entry = {.count = 1, .reusable = true}}, SHIFT(57),
  [280] = {.entry = {.count = 1, .reusable = true}}, SHIFT(76),
  [282] = {.entry = {.count = 1, .reusable = false}}, SHIFT(68),
  [284] = {.entry = {.count = 1, .reusable = true}}, SHIFT(94),
  [286] = {.entry = {.count = 1, .reusable = true}}, SHIFT(102),
  [288] = {.entry = {.count = 1, .reusable = true}}, SHIFT(92),
  [290] = {.entry = {.count = 1, .reusable = false}}, SHIFT(87),
  [292] = {.entry = {.count = 1, .reusable = true}}, SHIFT(107),
  [294] = {.entry = {.count = 1, .reusable = true}}, SHIFT(97),
  [296] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_style_start_tag, 4),
  [298] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_script_start_tag, 4),
  [300] = {.entry = {.count = 1, .reusable = true}}, SHIFT(106),
  [302] = {.entry = {.count = 1, .reusable = true}}, SHIFT(101),
  [304] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_style_start_tag, 3),
  [306] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_script_start_tag, 3),
  [308] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [310] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [312] = {.entry = {.count = 1, .reusable = true}}, SHIFT(69),
  [314] = {.entry = {.count = 1, .reusable = true}}, SHIFT(108),
  [316] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [318] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [320] = {.entry = {.count = 1, .reusable = true}}, SHIFT(93),
  [322] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [324] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [326] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [328] = {.entry = {.count = 1, .reusable = true}}, SHIFT(112),
  [330] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [332] = {.entry = {.count = 1, .reusable = true}}, SHIFT(88),
  [334] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [336] = {.entry = {.count = 1, .reusable = true}}, SHIFT(96),
  [338] = {.entry = {.count = 1, .reusable = true}}, SHIFT(100),
  [340] = {.entry = {.count = 1, .reusable = true}}, SHIFT(98),
  [342] = {.entry = {.count = 1, .reusable = true}}, SHIFT(111),
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
