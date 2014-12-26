<?php
/**
 * @file
 * block_configuration.strongarm.inc
 */

/**
 * Implements hook_strongarm().
 */
function block_configuration_strongarm() {
  $export = array();

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'default_environment_indicator_environment';
  $strongarm->value = array(
    'default_environment' => TRUE,
  );
  $export['default_environment_indicator_environment'] = $strongarm;

  return $export;
}
