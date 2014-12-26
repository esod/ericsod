<?php
/**
 * @file
 * environment_indicator_configuration.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function environment_indicator_configuration_user_default_permissions() {
  $permissions = array();

  // Exported permission: 'access environment indicator'.
  $permissions['access environment indicator'] = array(
    'name' => 'access environment indicator',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'environment_indicator',
  );

  // Exported permission: 'access environment indicator dev'.
  $permissions['access environment indicator dev'] = array(
    'name' => 'access environment indicator dev',
    'roles' => array(),
    'module' => 'environment_indicator',
  );

  // Exported permission: 'access environment indicator live'.
  $permissions['access environment indicator live'] = array(
    'name' => 'access environment indicator live',
    'roles' => array(),
    'module' => 'environment_indicator',
  );

  // Exported permission: 'access environment indicator live_www'.
  $permissions['access environment indicator live_www'] = array(
    'name' => 'access environment indicator live_www',
    'roles' => array(),
    'module' => 'environment_indicator',
  );

  // Exported permission: 'access environment indicator local'.
  $permissions['access environment indicator local'] = array(
    'name' => 'access environment indicator local',
    'roles' => array(),
    'module' => 'environment_indicator',
  );

  // Exported permission: 'access environment indicator overwritten_environment'.
  $permissions['access environment indicator overwritten_environment'] = array(
    'name' => 'access environment indicator overwritten_environment',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'environment_indicator',
  );

  // Exported permission: 'access environment indicator test'.
  $permissions['access environment indicator test'] = array(
    'name' => 'access environment indicator test',
    'roles' => array(),
    'module' => 'environment_indicator',
  );

  // Exported permission: 'access environment indicator www'.
  $permissions['access environment indicator www'] = array(
    'name' => 'access environment indicator www',
    'roles' => array(),
    'module' => 'environment_indicator',
  );

  // Exported permission: 'administer environment indicator settings'.
  $permissions['administer environment indicator settings'] = array(
    'name' => 'administer environment indicator settings',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'environment_indicator',
  );

  return $permissions;
}
