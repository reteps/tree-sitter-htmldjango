/**
 * @file HTML grammar for tree-sitter
 * @author Max Brunsfeld
 * @license MIT
 */

/* eslint-disable arrow-parens */
/* eslint-disable camelcase */
/* eslint-disable-next-line spaced-comment */
/// <reference types="tree-sitter-cli/dsl" />
// @ts-check

module.exports = grammar({
  name: 'html',

  extras: $ => [
    $.comment,
    /\s+/,
  ],

  externals: $ => [
    $._start_tag_name,
    $._script_start_tag_name,
    $._style_start_tag_name,
    $._end_tag_name,
    $.erroneous_end_tag_name,
    '/>',
    $._implicit_end_tag,
    $.raw_text,
    $.comment,
  ],

  rules: {
    document: $ => repeat(
      choice(
        $.directive,
        $.variable,
        $.html,
      )
    ),

    html: $ => $._node,

    doctype: $ => seq(
      '<!',
      alias($._doctype, 'doctype'),
      /[^>]+/,
      '>',
    ),

    _doctype: _ => /[Dd][Oo][Cc][Tt][Yy][Pp][Ee]/,

    _node: $ => choice(
      $.doctype,
      $.entity,
      $.text,
      $.element,
      $.script_element,
      $.style_element,
      $.erroneous_end_tag,
    ),

    element: $ => choice(
      seq(
        $.start_tag,
        repeat($._node),
        choice($.end_tag, $._implicit_end_tag),
      ),
      $.self_closing_tag,
    ),

    script_element: $ => seq(
      alias($.script_start_tag, $.start_tag),
      optional($.raw_text),
      $.end_tag,
    ),

    style_element: $ => seq(
      alias($.style_start_tag, $.start_tag),
      optional($.raw_text),
      $.end_tag,
    ),

    start_tag: $ => seq(
      '<',
      alias($._start_tag_name, $.tag_name),
      repeat($.attribute),
      '>',
    ),

    script_start_tag: $ => seq(
      '<',
      alias($._script_start_tag_name, $.tag_name),
      repeat($.attribute),
      '>',
    ),

    style_start_tag: $ => seq(
      '<',
      alias($._style_start_tag_name, $.tag_name),
      repeat($.attribute),
      '>',
    ),

    self_closing_tag: $ => seq(
      '<',
      alias($._start_tag_name, $.tag_name),
      repeat($.attribute),
      '/>',
    ),

    end_tag: $ => seq(
      '</',
      alias($._end_tag_name, $.tag_name),
      '>',
    ),

    erroneous_end_tag: $ => seq(
      '</',
      $.erroneous_end_tag_name,
      '>',
    ),

    attribute: $ => seq(
      $.attribute_name,
      optional(seq(
        '=',
        choice(
          $.attribute_value,
          $.quoted_attribute_value,
        ),
      )),
    ),

    attribute_name: _ => /[^<>"'/=\s]+/,

    attribute_value: _ => /[^<>"'=\s]+/,

    // An entity can be named, numeric (decimal), or numeric (hexacecimal). The
    // longest entity name is 29 characters long, and the HTML spec says that
    // no more will ever be added.
    entity: _ => /&(#([xX][0-9a-fA-F]{1,6}|[0-9]{1,5})|[A-Za-z]{1,30});?/,

    quoted_attribute_value: $ => choice(
      seq('\'', optional(alias(/[^']+/, $.attribute_value)), '\''),
      seq('"', optional(alias(/[^"]+/, $.attribute_value)), '"'),
    ),

    text: _ => /[^<>{}%&\s]([^<>{}%&]*[^<>{}%&\s])?/,

    directive: $ => seq(
      '{%',
      repeat(
        choice(
          $.keyword,
          $.identifier
        )
      ),
      '%}'
    ),
    variable: $ => seq(
      '{{',
      $.identifier,
      '}}'
    ),
    keyword: $ => choice(
      $._keyword_list,
      'end' + $._keyword_list
    ),
    _keyword_list: $ => choice(
      'autoescape',
      'block',
      'comment',
      'csrf-token',
      'cycle',
      'debug',
      'extends',
      'filter',
      'firstof',
      'for',
      'empty',
      'if',
      'in',
      'ifchanged',
      'include',
      'load',
      'lorem',
      'now',
      'regroup',
      'resetcycle',
      'spaceless',
      'templatetag',
      'url',
      'verbatim',
      'widthratio',
      'with'
    ),
    _filter_list: $ => choice(
      'add',
      'addslashes',
      'capfirst',
      'center',
      'cut',
      'date',
      'default',
      'default_if_none',
      'dictsort',
      'dictsortreversed',
      'divisibleby',
      'escape',
      'escapejs',
      'escapeseq',
      'filesizeformat',
      'first',
      'floatformat',
      'force-escape',
      'get-digit',
      'iriencode',
      'join',
      'json-script',
      'last',
      'length',
      'length-is',
      'linebreaks',
      'linebreaksbr',
      'linenumbers',
      'ljust',
      'lower',
      'make-list',
      'phone2numeric',
      'pluralize',
      'pprint',
      'random',
      'rjust',
      'safe',
      'safeseq',
      'slice',
      'slugify',
      'stringformat',
      'striptags',
      'time',
      'timesince',
      'timeuntil',
      'title',
      'truncatechars',
      'truncatechars-html',
      'truncatewords',
      'truncatewords-html',
      'unordered-list',
      'upper',
      'urlencode',
      'urlize',
      'urlizetrunc',
      'wordcount',
      'wordwrap',
      'yesno'
    ),

    identifier: $ => /[a-z]+/,
  },
});
