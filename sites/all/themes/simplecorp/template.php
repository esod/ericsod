<?php 

/**
 * Return a themed breadcrumb trail.
 *
 * @param $breadcrumb
 *   An array containing the breadcrumb links.
 * @return
 *   A string containing the breadcrumb output.
 */
function simplecorp_breadcrumb($variables){
	$breadcrumb = $variables['breadcrumb'];
	$breadcrumb_separator=theme_get_setting('breadcrumb_separator','simplecorp');

	if (!empty($breadcrumb)) {
	$breadcrumb[] = drupal_get_title();
	return '<div id="breadcrumb">' . implode(' <span class="breadcrumb-separator">' . $breadcrumb_separator . ' </span>' , $breadcrumb) . '</div>';
	}

}

/**
 * Add files for custom buttons.
 */
if (!(theme_get_setting('button_color','simplecorp') == '')):
	drupal_add_css(drupal_get_path('theme', 'simplecorp') . '/css/shortcodes/buttons.css');
endif;

function simplecorp_button($variables) {
	$button_color = theme_get_setting('button_color','simplecorp');
	if($button_color == '') {
		$button_classes = '';
	} else {
		$button_classes = ' button small round ';
	}	
	$element = $variables['element'];
	$element['#attributes']['type'] = 'submit';
	element_set_attributes($element, array('id', 'name', 'value'));

	$element['#attributes']['class'][] = 'form-' . $element['#button_type'] . $button_classes . $button_color;
	if (!empty($element['#attributes']['disabled'])) {
	$element['#attributes']['class'][] = 'form-button-disabled';
	}

	return '<input' . drupal_attributes($element['#attributes']) . ' />';
}

/**
 * Page alter.
 */
function simplecorp_page_alter($page) {
	if (theme_get_setting('responsive_meta','simplecorp')):
		$mobileoptimized = array(
      '#type' => 'html_tag',
      '#tag' => 'meta',
      '#attributes' => array(
        'name' =>  'MobileOptimized',
        'content' =>  'width'
      )
		);

		$handheldfriendly = array(
      '#type' => 'html_tag',
      '#tag' => 'meta',
      '#attributes' => array(
        'name' =>  'HandheldFriendly',
        'content' =>  'true'
      )
		);

		$viewport = array(
      '#type' => 'html_tag',
      '#tag' => 'meta',
      '#attributes' => array(
        'name' =>  'viewport',
        'content' =>  'width=device-width, initial-scale=1'
      )
		);

		drupal_add_html_head($mobileoptimized, 'MobileOptimized');
		drupal_add_html_head($handheldfriendly, 'HandheldFriendly');
		drupal_add_html_head($viewport, 'viewport');
	endif;
}


/**
 * Preprocess function for node.tpl.php.
 */
function simplecorp_preprocess_node(&$variables) {
	$node = $variables['node'];
	$variables['submitted_day'] = format_date($node->created, 'custom', 'j');
	$variables['submitted_month'] = format_date($node->created, 'custom', 'F');
	$variables['submitted_year'] = format_date($node->created, 'custom', 'Y');
}


/**
 * Preprocess function for comment.tpl.php.
 */
function simplecorp_preprocess_comment(&$variables) {
	$comment = $variables['comment'];
	$variables['submitted_day_c'] = format_date($comment->created, 'custom', 'jS');
	$variables['submitted_month_c'] = format_date($comment->created, 'custom', 'F');
	$variables['submitted_year_c'] = format_date($comment->created, 'custom', 'Y');
}


/**
 * Implements hook_preprocess_html().
 */
function simplecorp_preprocess_html(&$vars) {
	$vars['rdf'] = new stdClass;

	if (module_exists('rdf')) {
	$vars['doctype'] = '<!DOCTYPE html PUBLIC "-//W3C//DTD HTML+RDFa 1.1//EN">' . "\n";
	$vars['rdf']->version = ' version="HTML+RDFa 1.1"';
	$vars['rdf']->namespaces = $vars['rdf_namespaces'];
	$vars['rdf']->profile = ' profile="' . $vars['grddl_profile'] . '"';
	}
	else {
	$vars['doctype'] = '<!DOCTYPE html>' . "\n";
	$vars['rdf']->version = '';
	$vars['rdf']->namespaces = '';
	$vars['rdf']->profile = '';
	}

  /**
   * Add styles for theme color schemes.
   */
  if (!(theme_get_setting('theme_color','simplecorp') == 'default')) {
    $theme_color = theme_get_setting('theme_color','simplecorp');
    drupal_add_css(drupal_get_path('theme', 'simplecorp') . '/css/color-schemes/' . $theme_color . '/' . $theme_color . '-styles.css', array('group' => CSS_THEME, 'weight' => 120));
  }
  
  
  /**
   * Add columns.css
   */
  if (theme_get_setting('columns_enable','simplecorp')) {
    drupal_add_css(drupal_get_path('theme', 'simplecorp') . '/css/shortcodes/columns.css', array('group' => CSS_THEME, 'weight' => 116));
  }
  
  
  /**
   * Add lists.css
   */
  if (theme_get_setting('lists_enable','simplecorp')):
    drupal_add_css(drupal_get_path('theme', 'simplecorp') . '/css/shortcodes/lists.css', array('group' => CSS_THEME, 'weight' => 117));
  endif;
  
  
  /**
   * Add boxes.css
   */
  if (theme_get_setting('boxes_enable','simplecorp')) {
    drupal_add_css(drupal_get_path('theme', 'simplecorp') . '/css/shortcodes/boxes.css', array('group' => CSS_THEME, 'weight' => 118));
  }
}

?>