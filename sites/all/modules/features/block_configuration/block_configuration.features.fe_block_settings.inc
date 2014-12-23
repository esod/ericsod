<?php
/**
 * @file
 * block_configuration.features.fe_block_settings.inc
 */

/**
 * Implements hook_default_fe_block_settings().
 */
function block_configuration_default_fe_block_settings() {
  $export = array();

  $export['version'] = '2.0';

  $export['custom_footer-footer_first'] = array(
    'cache' => 1,
    'custom' => 0,
    'delta' => 'footer_first',
    'module' => 'custom_footer',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'bartik' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'bartik',
        'weight' => 0,
      ),
      'esod_bootstrap_theme' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'esod_bootstrap_theme',
        'weight' => 0,
      ),
      'seven' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'seven',
        'weight' => 0,
      ),
    ),
    'title' => 'Recent Blog Posts',
    'visibility' => 0,
  );

  $export['custom_footer-footer_fourth'] = array(
    'cache' => 1,
    'custom' => 0,
    'delta' => 'footer_fourth',
    'module' => 'custom_footer',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'bartik' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'bartik',
        'weight' => 0,
      ),
      'esod_bootstrap_theme' => array(
        'region' => 'footer',
        'status' => 1,
        'theme' => 'esod_bootstrap_theme',
        'weight' => 0,
      ),
      'seven' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'seven',
        'weight' => 0,
      ),
    ),
    'title' => 'Contact Info',
    'visibility' => 0,
  );

  $export['custom_footer-footer_second'] = array(
    'cache' => 1,
    'custom' => 0,
    'delta' => 'footer_second',
    'module' => 'custom_footer',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'bartik' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'bartik',
        'weight' => 0,
      ),
      'esod_bootstrap_theme' => array(
        'region' => 'footer',
        'status' => 1,
        'theme' => 'esod_bootstrap_theme',
        'weight' => 0,
      ),
      'seven' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'seven',
        'weight' => 0,
      ),
    ),
    'title' => 'Tweets Update',
    'visibility' => 0,
  );

  $export['custom_footer-footer_third'] = array(
    'cache' => 1,
    'custom' => 0,
    'delta' => 'footer_third',
    'module' => 'custom_footer',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'bartik' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'bartik',
        'weight' => 0,
      ),
      'esod_bootstrap_theme' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'esod_bootstrap_theme',
        'weight' => 0,
      ),
      'seven' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'seven',
        'weight' => 0,
      ),
    ),
    'title' => 'Blogroll',
    'visibility' => 0,
  );

  $export['header_social_links-header_social_links'] = array(
    'cache' => 1,
    'custom' => 0,
    'delta' => 'header_social_links',
    'module' => 'header_social_links',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'bartik' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'bartik',
        'weight' => 0,
      ),
      'esod_bootstrap_theme' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'esod_bootstrap_theme',
        'weight' => 0,
      ),
      'seven' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'seven',
        'weight' => 0,
      ),
    ),
    'title' => '',
    'visibility' => 0,
  );

  $export['miscellaneous_blocks-inner_page_image'] = array(
    'cache' => 1,
    'custom' => 0,
    'delta' => 'inner_page_image',
    'module' => 'miscellaneous_blocks',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'bartik' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'bartik',
        'weight' => 0,
      ),
      'esod_bootstrap_theme' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'esod_bootstrap_theme',
        'weight' => 0,
      ),
      'seven' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'seven',
        'weight' => 0,
      ),
    ),
    'title' => '',
    'visibility' => 0,
  );

  $export['miscellaneous_blocks-inner_page_image_blog_entries'] = array(
    'cache' => 1,
    'custom' => 0,
    'delta' => 'inner_page_image_blog_entries',
    'module' => 'miscellaneous_blocks',
    'node_types' => array(
      0 => 'blog',
    ),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'bartik' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'bartik',
        'weight' => 0,
      ),
      'esod_bootstrap_theme' => array(
        'region' => 'navigation',
        'status' => 1,
        'theme' => 'esod_bootstrap_theme',
        'weight' => 0,
      ),
      'seven' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'seven',
        'weight' => 0,
      ),
    ),
    'title' => '',
    'visibility' => 0,
  );

  return $export;
}
