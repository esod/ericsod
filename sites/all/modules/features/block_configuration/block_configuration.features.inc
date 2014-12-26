<?php
/**
 * @file
 * block_configuration.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function block_configuration_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "environment_indicator" && $api == "default_environment_indicator_environments") {
    return array("version" => "1");
  }
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}
