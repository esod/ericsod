<?php

/**
 * @file
 * template.php
 */
/**
 * Preprocess page functions
 *
 * @param $vars
 */
function esod_bootstrap_theme_preprocess_page(&$vars) {
  if (drupal_is_front_page()) {
    unset($vars['page']['content']['system_main']['default_message']); //will remove message "no front page content is created"
    drupal_set_title(''); //removes welcome message (page title)
  }
}

/**
 * Preprocess node functions
 *
 * @param $vars
 */
function esod_bootstrap_theme_preprocess_node(&$vars) {
  if (variable_get('node_submitted_' . $vars['node']->type, TRUE)) {
    $date = format_date($vars['node']->created, 'date_type');
    $vars['submitted'] = t('Submitted on !datetime', array('!datetime' => $date));
  }
}
