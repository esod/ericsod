<?php 

/*
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
/*
 * Removes input formatting options and description from the comment form
 */
function simplecorp_form_comment_form_alter(&$form, &$form_state) {

  $form['comment_body']['#after_build'][] = 'simplecorp_customize_comment_form';

}

function simplecorp_customize_comment_form(&$form) {
  $form[LANGUAGE_NONE][0]['format']['#access'] = FALSE;
  // Hide guideliness
	//$form[LANGUAGE_NONE][0]['format']['guidelines']['#access'] = FALSE;
  // Hide Filter Tips
  //$form[LANGUAGE_NONE][0]['format']['help']['#access'] = FALSE;

  return $form;
}

/*
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

/*
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


/*
 * Preprocess function for node.tpl.php.
 */
function simplecorp_preprocess_node(&$variables) {
	$node = $variables['node'];
	$variables['submitted_day'] = format_date($node->created, 'custom', 'j');
	$variables['submitted_month'] = format_date($node->created, 'custom', 'F');
	$variables['submitted_year'] = format_date($node->created, 'custom', 'Y');
}


/*
 * Preprocess function for comment.tpl.php.
 */
function simplecorp_preprocess_comment(&$variables) {
	$comment = $variables['comment'];
	$variables['submitted_day_c'] = format_date($comment->created, 'custom', 'jS');
	$variables['submitted_month_c'] = format_date($comment->created, 'custom', 'F');
	$variables['submitted_year_c'] = format_date($comment->created, 'custom', 'Y');
}

/*
 * Override or insert variables into the page template.
 */
function simplecorp_preprocess_page(&$vars) {
  
  if (isset($vars['main_menu'])) {
    $vars['main_menu'] = theme('links__system_main_menu', array(
      'links' => $vars['main_menu'],
      'attributes' => array(
        'class' => array('links', 'main-menu', 'clearfix'),
      ),
      'heading' => array(
        'text' => t('Main menu'),
        'level' => 'h2',
        'class' => array('element-invisible'),
      ),
    ));  
  }
  else {
    $vars['primary_nav'] = FALSE;
  }
    
  if (isset($vars['secondary_menu'])) {
    $vars['secondary_nav'] = theme('links__system_secondary_menu', array(
      'links' => $vars['secondary_menu'],
      'attributes' => array(
        'class' => array('links', 'clearfix', 'secondary-menu'),
      ),
      'heading' => array(
        'text' => t('Secondary menu'),
        'level' => 'h2',
        'class' => array('element-invisible'),
      )
    ));
  }
  else {
    $vars['secondary_nav'] = FALSE;
  }

  if (module_exists('i18n_menu')) {
    $vars['main_menu_tree'] = i18n_menu_translated_tree(variable_get('menu_main_links_source', 'main-menu'));
  }
  else {
    $vars['main_menu_tree'] = menu_tree(variable_get('menu_main_links_source', 'main-menu'));
  }
}

/*
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

  /*
   * Add styles for theme color schemes.
   */
  if (!(theme_get_setting('theme_color','simplecorp') == 'default')) {
    $theme_color = theme_get_setting('theme_color','simplecorp');
    drupal_add_css(drupal_get_path('theme', 'simplecorp') . '/css/color-schemes/' . $theme_color . '/' . $theme_color . '-styles.css', array('group' => CSS_THEME, 'weight' => 120));
    drupal_add_css(drupal_get_path('theme', 'simplecorp') . '/css/color-schemes/' . $theme_color . '/' . $theme_color . '-media.css', array('group' => CSS_THEME, 'weight' => 121));
  }
  
  
  /*
   * Add columns.css
   */
  if (theme_get_setting('columns_enable','simplecorp')) {
    drupal_add_css(drupal_get_path('theme', 'simplecorp') . '/css/shortcodes/columns.css', array('group' => CSS_THEME, 'weight' => 116));
  }
  
  
  /*
   * Add lists.css
   */
  if (theme_get_setting('lists_enable','simplecorp')):
    drupal_add_css(drupal_get_path('theme', 'simplecorp') . '/css/shortcodes/lists.css', array('group' => CSS_THEME, 'weight' => 117));
  endif;
  
  
  /*
   * Add boxes.css
   */
  if (theme_get_setting('boxes_enable','simplecorp')) {
    drupal_add_css(drupal_get_path('theme', 'simplecorp') . '/css/shortcodes/boxes.css', array('group' => CSS_THEME, 'weight' => 118));
  }
}

/**
 * Custom template files for user login and registration pages
 */

function simplecorp_theme() {
  $items = array();

  $items['user_login'] = array(
    'render element' => 'form',
    'path' => drupal_get_path('theme', 'simplecorp') . '/templates',
    'template' => 'user-login',
  );
  $items['user_register_form'] = array(
    'render element' => 'form',
    'path' => drupal_get_path('theme', 'simplecorp') . '/templates',
    'template' => 'user-register-form',
  );

  return $items;
}