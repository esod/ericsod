<?php
/**
 * @file
 * user_registration_settings.strongarm.inc
 */

/**
 * Implements hook_strongarm().
 */
function user_registration_settings_strongarm() {
  $export = array();

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'honeypot_element_name';
  $strongarm->value = 'url';
  $export['honeypot_element_name'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'honeypot_form_article_node_form';
  $strongarm->value = 0;
  $export['honeypot_form_article_node_form'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'honeypot_form_blog_post_node_form';
  $strongarm->value = 0;
  $export['honeypot_form_blog_post_node_form'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'honeypot_form_comment_node_article_form';
  $strongarm->value = 0;
  $export['honeypot_form_comment_node_article_form'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'honeypot_form_comment_node_blog_post_form';
  $strongarm->value = 0;
  $export['honeypot_form_comment_node_blog_post_form'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'honeypot_form_comment_node_page_form';
  $strongarm->value = 0;
  $export['honeypot_form_comment_node_page_form'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'honeypot_form_comment_node_webform_form';
  $strongarm->value = 0;
  $export['honeypot_form_comment_node_webform_form'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'honeypot_form_page_node_form';
  $strongarm->value = 0;
  $export['honeypot_form_page_node_form'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'honeypot_form_user_pass';
  $strongarm->value = 0;
  $export['honeypot_form_user_pass'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'honeypot_form_user_register_form';
  $strongarm->value = 0;
  $export['honeypot_form_user_register_form'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'honeypot_form_webforms';
  $strongarm->value = 0;
  $export['honeypot_form_webforms'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'honeypot_form_webform_node_form';
  $strongarm->value = 0;
  $export['honeypot_form_webform_node_form'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'honeypot_log';
  $strongarm->value = 0;
  $export['honeypot_log'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'honeypot_protect_all_forms';
  $strongarm->value = 0;
  $export['honeypot_protect_all_forms'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'honeypot_time_limit';
  $strongarm->value = '0';
  $export['honeypot_time_limit'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'spambot_blacklisted_delay';
  $strongarm->value = '0';
  $export['spambot_blacklisted_delay'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'spambot_blocked_message_email';
  $strongarm->value = 'Your email address is blacklisted.';
  $export['spambot_blocked_message_email'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'spambot_blocked_message_ip';
  $strongarm->value = 'Your email address is blacklisted.';
  $export['spambot_blocked_message_ip'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'spambot_blocked_message_username';
  $strongarm->value = 'Your email address is blacklisted.';
  $export['spambot_blocked_message_username'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'spambot_check_blocked_accounts';
  $strongarm->value = 0;
  $export['spambot_check_blocked_accounts'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'spambot_criteria_email';
  $strongarm->value = '1';
  $export['spambot_criteria_email'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'spambot_criteria_ip';
  $strongarm->value = '20';
  $export['spambot_criteria_ip'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'spambot_criteria_username';
  $strongarm->value = '0';
  $export['spambot_criteria_username'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'spambot_cron_user_limit';
  $strongarm->value = '0';
  $export['spambot_cron_user_limit'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'spambot_last_checked_uid';
  $strongarm->value = '0';
  $export['spambot_last_checked_uid'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'spambot_sfs_api_key';
  $strongarm->value = '';
  $export['spambot_sfs_api_key'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'spambot_spam_account_action';
  $strongarm->value = '0';
  $export['spambot_spam_account_action'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'spambot_user_register_protect';
  $strongarm->value = 1;
  $export['spambot_user_register_protect'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'tabtamer_tab_settings';
  $strongarm->value = array(
    'node/%/webform' => array(
      'weight' => '1',
      'action' => 'enabled',
      'tabtamer_original_path' => 'node/%webform_menu/webform',
      'tabtamer_title' => '',
    ),
    'node/%/webform-results' => array(
      'weight' => '2',
      'action' => 'enabled',
      'tabtamer_original_path' => 'node/%webform_menu/webform-results',
      'tabtamer_title' => '',
    ),
    'node/%/revisions' => array(
      'weight' => '2',
      'action' => 'enabled',
      'tabtamer_original_path' => 'node/%node/revisions',
      'tabtamer_title' => '',
    ),
    'node/%/view' => array(
      'weight' => '-10',
      'action' => 'enabled',
      'tabtamer_original_path' => 'node/%node/view',
      'tabtamer_title' => '',
    ),
    'node/%/edit' => array(
      'weight' => '0',
      'action' => 'enabled',
      'tabtamer_original_path' => 'node/%node/edit',
      'tabtamer_title' => '',
    ),
    'node/%/delete' => array(
      'weight' => '1',
      'action' => 'enabled',
      'tabtamer_original_path' => 'node/%node/delete',
      'tabtamer_title' => '',
    ),
    'node/%/webform/components' => array(
      'weight' => '0',
      'action' => 'enabled',
      'tabtamer_original_path' => 'node/%webform_menu/webform/components',
      'tabtamer_title' => '',
    ),
    'node/%/webform/configure' => array(
      'weight' => '2',
      'action' => 'enabled',
      'tabtamer_original_path' => 'node/%webform_menu/webform/configure',
      'tabtamer_title' => '',
    ),
    'node/%/webform/emails' => array(
      'weight' => '1',
      'action' => 'enabled',
      'tabtamer_original_path' => 'node/%webform_menu/webform/emails',
      'tabtamer_title' => '',
    ),
    'node/%/webform/components/%' => array(
      'weight' => '0',
      'action' => 'enabled',
      'tabtamer_original_path' => 'node/%webform_menu/webform/components/%webform_menu_component',
      'tabtamer_title' => '',
    ),
    'node/%/webform/components/%/clone' => array(
      'weight' => '0',
      'action' => 'enabled',
      'tabtamer_original_path' => 'node/%webform_menu/webform/components/%webform_menu_component/clone',
      'tabtamer_title' => '',
    ),
    'node/%/webform/components/%/delete' => array(
      'weight' => '0',
      'action' => 'enabled',
      'tabtamer_original_path' => 'node/%webform_menu/webform/components/%webform_menu_component/delete',
      'tabtamer_title' => '',
    ),
    'node/%/webform/emails/%' => array(
      'weight' => '0',
      'action' => 'enabled',
      'tabtamer_original_path' => 'node/%webform_menu/webform/emails/%webform_menu_email',
      'tabtamer_title' => '',
    ),
    'node/%/webform/emails/%/delete' => array(
      'weight' => '0',
      'action' => 'enabled',
      'tabtamer_original_path' => 'node/%webform_menu/webform/emails/%webform_menu_email/delete',
      'tabtamer_title' => '',
    ),
    'node/%/webform-results/submissions' => array(
      'weight' => '4',
      'action' => 'enabled',
      'tabtamer_original_path' => 'node/%webform_menu/webform-results/submissions',
      'tabtamer_title' => '',
    ),
    'node/%/webform-results/analysis' => array(
      'weight' => '5',
      'action' => 'enabled',
      'tabtamer_original_path' => 'node/%webform_menu/webform-results/analysis',
      'tabtamer_title' => '',
    ),
    'node/%/webform-results/table' => array(
      'weight' => '6',
      'action' => 'enabled',
      'tabtamer_original_path' => 'node/%webform_menu/webform-results/table',
      'tabtamer_title' => '',
    ),
    'node/%/webform-results/download' => array(
      'weight' => '7',
      'action' => 'enabled',
      'tabtamer_original_path' => 'node/%webform_menu/webform-results/download',
      'tabtamer_title' => '',
    ),
    'node/%/webform-results/clear' => array(
      'weight' => '8',
      'action' => 'enabled',
      'tabtamer_original_path' => 'node/%webform_menu/webform-results/clear',
      'tabtamer_title' => '',
    ),
    'node/%/submission/%/view' => array(
      'weight' => '0',
      'action' => 'enabled',
      'tabtamer_original_path' => 'node/%webform_menu/submission/%webform_menu_submission/view',
      'tabtamer_title' => '',
    ),
    'node/%/submission/%/edit' => array(
      'weight' => '1',
      'action' => 'enabled',
      'tabtamer_original_path' => 'node/%webform_menu/submission/%webform_menu_submission/edit',
      'tabtamer_title' => '',
    ),
    'node/%/submission/%/delete' => array(
      'weight' => '2',
      'action' => 'enabled',
      'tabtamer_original_path' => 'node/%webform_menu/submission/%webform_menu_submission/delete',
      'tabtamer_title' => '',
    ),
    'comment/%/view' => array(
      'weight' => '-10',
      'action' => 'enabled',
      'tabtamer_original_path' => 'comment/%/view',
      'tabtamer_title' => '',
    ),
    'comment/%/edit' => array(
      'weight' => '0',
      'action' => 'enabled',
      'tabtamer_original_path' => 'comment/%comment/edit',
      'tabtamer_title' => '',
    ),
    'comment/%/delete' => array(
      'weight' => '2',
      'action' => 'enabled',
      'tabtamer_original_path' => 'comment/%/delete',
      'tabtamer_title' => '',
    ),
    'media/%/view' => array(
      'weight' => '-10',
      'action' => 'enabled',
      'tabtamer_original_path' => 'media/%file/view',
      'tabtamer_title' => '',
    ),
    'media/%/edit' => array(
      'weight' => '0',
      'action' => 'enabled',
      'tabtamer_original_path' => 'media/%file/edit',
      'tabtamer_title' => '',
    ),
    'media/%/delete' => array(
      'weight' => '1',
      'action' => 'enabled',
      'tabtamer_original_path' => 'media/%file/delete',
      'tabtamer_title' => '',
    ),
    'search/node' => array(
      'weight' => '-10',
      'action' => 'enabled',
      'tabtamer_original_path' => 'search/node',
      'tabtamer_title' => '',
    ),
    'search/user' => array(
      'weight' => '0',
      'action' => 'enabled',
      'tabtamer_original_path' => 'search/user',
      'tabtamer_title' => '',
    ),
    'search/node/%' => array(
      'weight' => '0',
      'action' => 'enabled',
      'tabtamer_original_path' => 'search/node/%menu_tail',
      'tabtamer_title' => '',
    ),
    'search/user/%' => array(
      'weight' => '0',
      'action' => 'enabled',
      'tabtamer_original_path' => 'search/user/%menu_tail',
      'tabtamer_title' => '',
    ),
    'user/%/spambot' => array(
      'weight' => '0',
      'action' => 'enabled',
      'tabtamer_original_path' => 'user/%user/spambot',
      'tabtamer_title' => '',
    ),
    'user/%/view' => array(
      'weight' => '-10',
      'action' => 'enabled',
      'tabtamer_original_path' => 'user/%user/view',
      'tabtamer_title' => '',
    ),
    'user/%/edit' => array(
      'weight' => '0',
      'action' => 'enabled',
      'tabtamer_original_path' => 'user/%user/edit',
      'tabtamer_title' => '',
    ),
    'user/%/edit/account' => array(
      'weight' => '0',
      'action' => 'enabled',
      'tabtamer_original_path' => 'user/%user_category/edit/account',
      'tabtamer_title' => '',
    ),
    'user/login' => array(
      'weight' => '0',
      'action' => 'hidden',
      'tabtamer_original_path' => 'user/login',
      'tabtamer_title' => '',
    ),
    'user/register' => array(
      'weight' => '0',
      'action' => 'hidden',
      'tabtamer_original_path' => 'user/register',
      'tabtamer_title' => '',
    ),
    'user/password' => array(
      'weight' => '0',
      'action' => 'hidden',
      'tabtamer_original_path' => 'user/password',
      'tabtamer_title' => '',
    ),
    'taxonomy/term/%/view' => array(
      'weight' => '0',
      'action' => 'enabled',
      'tabtamer_original_path' => 'taxonomy/term/%taxonomy_term/view',
      'tabtamer_title' => '',
    ),
    'taxonomy/term/%/edit' => array(
      'weight' => '10',
      'action' => 'enabled',
      'tabtamer_original_path' => 'taxonomy/term/%taxonomy_term/edit',
      'tabtamer_title' => '',
    ),
  );
  $export['tabtamer_tab_settings'] = $strongarm;

  return $export;
}
