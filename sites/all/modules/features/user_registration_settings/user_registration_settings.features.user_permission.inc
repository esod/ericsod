<?php
/**
 * @file
 * user_registration_settings.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function user_registration_settings_user_default_permissions() {
  $permissions = array();

  // Exported permission: 'administer honeypot'.
  $permissions['administer honeypot'] = array(
    'name' => 'administer honeypot',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'honeypot',
  );

  // Exported permission: 'administer tabtamer'.
  $permissions['administer tabtamer'] = array(
    'name' => 'administer tabtamer',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'tabtamer',
  );

  // Exported permission: 'bypass honeypot protection'.
  $permissions['bypass honeypot protection'] = array(
    'name' => 'bypass honeypot protection',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'honeypot',
  );

  // Exported permission: 'protected from spambot scans'.
  $permissions['protected from spambot scans'] = array(
    'name' => 'protected from spambot scans',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'spambot',
  );

  return $permissions;
}
