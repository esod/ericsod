<?php
/**
 * @file
 * media_social_media_mollom.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function media_social_media_mollom_user_default_permissions() {
  $permissions = array();

  // Exported permission: 'access epostcard'.
  $permissions['access epostcard'] = array(
    'name' => 'access epostcard',
    'roles' => array(
      'administrator' => 'administrator',
      'anonymous user' => 'anonymous user',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'forward',
  );

  // Exported permission: 'access forward'.
  $permissions['access forward'] = array(
    'name' => 'access forward',
    'roles' => array(
      'administrator' => 'administrator',
      'anonymous user' => 'anonymous user',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'forward',
  );

  // Exported permission: 'access mollom statistics'.
  $permissions['access mollom statistics'] = array(
    'name' => 'access mollom statistics',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'mollom',
  );

  // Exported permission: 'add media from remote sources'.
  $permissions['add media from remote sources'] = array(
    'name' => 'add media from remote sources',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'media_internet',
  );

  // Exported permission: 'administer forward'.
  $permissions['administer forward'] = array(
    'name' => 'administer forward',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'forward',
  );

  // Exported permission: 'administer media'.
  $permissions['administer media'] = array(
    'name' => 'administer media',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'media',
  );

  // Exported permission: 'administer mollom'.
  $permissions['administer mollom'] = array(
    'name' => 'administer mollom',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'mollom',
  );

  // Exported permission: 'bypass mollom protection'.
  $permissions['bypass mollom protection'] = array(
    'name' => 'bypass mollom protection',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'mollom',
  );

  // Exported permission: 'edit media'.
  $permissions['edit media'] = array(
    'name' => 'edit media',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'media',
  );

  // Exported permission: 'import media'.
  $permissions['import media'] = array(
    'name' => 'import media',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'media',
  );

  // Exported permission: 'override email address'.
  $permissions['override email address'] = array(
    'name' => 'override email address',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'forward',
  );

  // Exported permission: 'override flood control'.
  $permissions['override flood control'] = array(
    'name' => 'override flood control',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'forward',
  );

  // Exported permission: 'view media'.
  $permissions['view media'] = array(
    'name' => 'view media',
    'roles' => array(
      'administrator' => 'administrator',
      'anonymous user' => 'anonymous user',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'media',
  );

  return $permissions;
}
