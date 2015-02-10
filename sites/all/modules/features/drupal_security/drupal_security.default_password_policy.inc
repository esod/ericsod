<?php
/**
 * @file
 * drupal_security.default_password_policy.inc
 */

/**
 * Implements hook_default_password_policy().
 */
function drupal_security_default_password_policy() {
  $export = array();

  $password_policy = new stdClass();
  $password_policy->disabled = FALSE; /* Edit this to true to make a default password_policy disabled initially */
  $password_policy->api_version = 1;
  $password_policy->name = 'default profile';
  $password_policy->description = '';
  $password_policy->enabled = FALSE;
  $password_policy->policy = array();
  $password_policy->created = 0;
  $password_policy->expiration = 180;
  $password_policy->warning = '15,5,1';
  $password_policy->weight = FALSE;
  $export['default profile'] = $password_policy;

  return $export;
}
