<?php
/**
 * @file
 * wysiwyg_settings.features.filter.inc
 */

/**
 * Implements hook_filter_default_formats().
 */
function wysiwyg_settings_filter_default_formats() {
  $formats = array();

  // Exported format: Filtered HTML.
  $formats['filtered_html'] = array(
    'format' => 'filtered_html',
    'name' => 'Filtered HTML',
    'cache' => 1,
    'status' => 1,
    'weight' => -9,
    'filters' => array(
      'filter_url' => array(
        'weight' => 0,
        'status' => 1,
        'settings' => array(
          'filter_url_length' => 72,
        ),
      ),
      'filter_html' => array(
        'weight' => 1,
        'status' => 1,
        'settings' => array(
          'allowed_html' => '<a> <em> <strong> <cite> <blockquote> <code> <ul> <ol> <li> <dl> <dt> <dd>',
          'filter_html_help' => 1,
          'filter_html_nofollow' => 0,
        ),
      ),
      'filter_autop' => array(
        'weight' => 2,
        'status' => 1,
        'settings' => array(),
      ),
      'filter_htmlcorrector' => array(
        'weight' => 10,
        'status' => 1,
        'settings' => array(),
      ),
    ),
  );

  // Exported format: Full HTML.
  $formats['full_html'] = array(
    'format' => 'full_html',
    'name' => 'Full HTML',
    'cache' => 1,
    'status' => 1,
    'weight' => -10,
    'filters' => array(
      'wysiwyg' => array(
        'weight' => -50,
        'status' => 1,
        'settings' => array(
          'valid_elements' => 'table[width|cellpadding|cellspacing|border|summary],
colgroup,col,
tr[align|valign|rowspan],
td[align|valign|width|colspan],
th[align|valign|width],tbody,thead,tfoot,
a[!href|target<_blank|title|align<center?justify?left?right|style|width|height|border|class|id],
div[align<center?justify?left?right|style|width|height|border|class|id],
p[align<center?justify?left?right|style|width|height|border|class|id],
span,em,br,strong,cite,code,blockquote,ul,ol,li,dl,dt,dd,
h1,h2,h3,h4,h5,h6',
          'allow_comments' => 1,
          'nofollow_policy' => 'whitelist',
          'nofollow_domains' => array(
            0 => 'live-ericsod.gotpantheon.com',
          ),
          'style_color' => array(
            'color' => 'color',
            'background' => 'background',
            'background-color' => 'background-color',
            'background-image' => 'background-image',
            'background-repeat' => 'background-repeat',
            'background-attachment' => 'background-attachment',
            'background-position' => 'background-position',
          ),
          'style_font' => array(
            'font' => 'font',
            'font-family' => 'font-family',
            'font-size' => 'font-size',
            'font-size-adjust' => 'font-size-adjust',
            'font-stretch' => 'font-stretch',
            'font-style' => 'font-style',
            'font-variant' => 'font-variant',
            'font-weight' => 'font-weight',
          ),
          'style_text' => array(
            'text-align' => 'text-align',
            'text-decoration' => 'text-decoration',
            'text-indent' => 'text-indent',
            'text-transform' => 'text-transform',
            'letter-spacing' => 'letter-spacing',
            'word-spacing' => 'word-spacing',
            'white-space' => 'white-space',
            'direction' => 'direction',
            'unicode-bidi' => 'unicode-bidi',
          ),
          'style_box' => array(
            'margin' => 'margin',
            'margin-top' => 'margin-top',
            'margin-right' => 'margin-right',
            'margin-bottom' => 'margin-bottom',
            'margin-left' => 'margin-left',
            'padding' => 'padding',
            'padding-top' => 'padding-top',
            'padding-right' => 'padding-right',
            'padding-bottom' => 'padding-bottom',
            'padding-left' => 'padding-left',
          ),
          'style_border-1' => array(
            'border' => 'border',
            'border-top' => 'border-top',
            'border-right' => 'border-right',
            'border-bottom' => 'border-bottom',
            'border-left' => 'border-left',
            'border-width' => 'border-width',
            'border-top-width' => 'border-top-width',
            'border-right-width' => 'border-right-width',
            'border-bottom-width' => 'border-bottom-width',
            'border-left-width' => 'border-left-width',
          ),
          'style_border-2' => array(
            'border-color' => 'border-color',
            'border-top-color' => 'border-top-color',
            'border-right-color' => 'border-right-color',
            'border-bottom-color' => 'border-bottom-color',
            'border-left-color' => 'border-left-color',
            'border-style' => 'border-style',
            'border-top-style' => 'border-top-style',
            'border-right-style' => 'border-right-style',
            'border-bottom-style' => 'border-bottom-style',
            'border-left-style' => 'border-left-style',
          ),
          'style_dimension' => array(
            'height' => 'height',
            'line-height' => 'line-height',
            'max-height' => 'max-height',
            'max-width' => 'max-width',
            'min-height' => 'min-height',
            'min-width' => 'min-width',
            'width' => 'width',
          ),
          'style_positioning' => array(
            'bottom' => 'bottom',
            'clip' => 'clip',
            'left' => 'left',
            'overflow' => 'overflow',
            'right' => 'right',
            'top' => 'top',
            'vertical-align' => 'vertical-align',
            'z-index' => 'z-index',
          ),
          'style_layout' => array(
            'clear' => 'clear',
            'display' => 'display',
            'float' => 'float',
            'position' => 'position',
            'visibility' => 'visibility',
          ),
          'style_list' => array(
            'list-style' => 'list-style',
            'list-style-image' => 'list-style-image',
            'list-style-position' => 'list-style-position',
            'list-style-type' => 'list-style-type',
          ),
          'style_table' => array(
            'border-collapse' => 'border-collapse',
            'border-spacing' => 'border-spacing',
            'caption-side' => 'caption-side',
            'empty-cells' => 'empty-cells',
            'table-layout' => 'table-layout',
          ),
          'style_user' => array(
            'cursor' => 'cursor',
            'outline' => 'outline',
            'outline-width' => 'outline-width',
            'outline-style' => 'outline-style',
            'outline-color' => 'outline-color',
            'zoom' => 'zoom',
          ),
          'rule_valid_classes' => array(
            0 => 'es*',
          ),
          'rule_valid_ids' => array(
            0 => 'es*',
          ),
          'rule_style_urls' => array(
            0 => '/*',
          ),
        ),
      ),
      'filter_url' => array(
        'weight' => -49,
        'status' => 1,
        'settings' => array(
          'filter_url_length' => 72,
        ),
      ),
      'media_filter' => array(
        'weight' => -48,
        'status' => 1,
        'settings' => array(),
      ),
      'invisimail_encode_html_entities' => array(
        'weight' => -46,
        'status' => 1,
        'settings' => array(
          'encoder' => 'html_entities',
          'chunk' => 0,
          'link' => 0,
        ),
      ),
      'filter_htmlcorrector' => array(
        'weight' => -45,
        'status' => 1,
        'settings' => array(),
      ),
      'codefilter' => array(
        'weight' => -44,
        'status' => 1,
        'settings' => array(),
      ),
    ),
  );

  // Exported format: Plain text.
  $formats['plain_text'] = array(
    'format' => 'plain_text',
    'name' => 'Plain text',
    'cache' => 1,
    'status' => 1,
    'weight' => -8,
    'filters' => array(
      'filter_html_escape' => array(
        'weight' => 0,
        'status' => 1,
        'settings' => array(),
      ),
      'filter_url' => array(
        'weight' => 1,
        'status' => 1,
        'settings' => array(
          'filter_url_length' => 72,
        ),
      ),
      'filter_autop' => array(
        'weight' => 2,
        'status' => 1,
        'settings' => array(),
      ),
    ),
  );

  return $formats;
}
