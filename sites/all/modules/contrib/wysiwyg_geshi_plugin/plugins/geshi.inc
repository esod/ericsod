<?php
// $Id$

/**
 * @file
 * Geshi-plugin for wysiwyg module.
 */

function wysiwyg_geshi_plugin_geshi_plugin() {
  $plugins['geshi'] = array(
    'title' => t('Geshi'),
    'vendor url' => 'http://drupal.qpart.ru/',
    'icon file' => 'geshi.gif',
    'icon title' => t('Geshi plugin'),
    'settings' => array(),
  );
  return $plugins;
}

