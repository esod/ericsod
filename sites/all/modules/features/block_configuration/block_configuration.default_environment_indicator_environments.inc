<?php
/**
 * @file
 * block_configuration.default_environment_indicator_environments.inc
 */

/**
 * Implements hook_default_environment_indicator_environment().
 */
function block_configuration_default_environment_indicator_environment() {
  $export = array();

  $environment = new stdClass();
  $environment->disabled = FALSE; /* Edit this to true to make a default environment disabled initially */
  $environment->api_version = 1;
  $environment->machine = 'dev';
  $environment->name = 'dev';
  $environment->regexurl = 'dev-ericsod.gotpantheon.com';
  $environment->settings = array(
    'color' => '#c74b1f',
    'text_color' => '#ffffff',
    'weight' => '99',
    'position' => 'top',
    'fixed' => 0,
  );
  $export['dev'] = $environment;

  $environment = new stdClass();
  $environment->disabled = FALSE; /* Edit this to true to make a default environment disabled initially */
  $environment->api_version = 1;
  $environment->machine = 'live';
  $environment->name = 'live';
  $environment->regexurl = 'live-ericsod.gotpantheon.com';
  $environment->settings = array(
    'color' => '#2231a1',
    'text_color' => '#ffffff',
    'weight' => '99',
    'position' => 'top',
    'fixed' => 0,
  );
  $export['live'] = $environment;

  $environment = new stdClass();
  $environment->disabled = FALSE; /* Edit this to true to make a default environment disabled initially */
  $environment->api_version = 1;
  $environment->machine = 'live_www';
  $environment->name = 'live_www';
  $environment->regexurl = 'www.ericsod.com';
  $environment->settings = array(
    'color' => '#2231a1',
    'text_color' => '#ffffff',
    'weight' => '99',
    'position' => 'top',
    'fixed' => 0,
  );
  $export['live_www'] = $environment;

  $environment = new stdClass();
  $environment->disabled = FALSE; /* Edit this to true to make a default environment disabled initially */
  $environment->api_version = 1;
  $environment->machine = 'local';
  $environment->name = 'local';
  $environment->regexurl = 'ericsod.local';
  $environment->settings = array(
    'color' => '#0c6f3c',
    'text_color' => '#ffffff',
    'weight' => '99',
    'position' => 'top',
    'fixed' => 0,
  );
  $export['local'] = $environment;

  $environment = new stdClass();
  $environment->disabled = FALSE; /* Edit this to true to make a default environment disabled initially */
  $environment->api_version = 1;
  $environment->machine = 'test';
  $environment->name = 'test';
  $environment->regexurl = 'test-ericsod.gotpantheon.com';
  $environment->settings = array(
    'color' => '#dd5193',
    'text_color' => '#ffffff',
    'weight' => '99',
    'position' => 'top',
    'fixed' => 0,
  );
  $export['test'] = $environment;

  $environment = new stdClass();
  $environment->disabled = FALSE; /* Edit this to true to make a default environment disabled initially */
  $environment->api_version = 1;
  $environment->machine = 'www';
  $environment->name = 'www';
  $environment->regexurl = 'ericsod.com';
  $environment->settings = array(
    'color' => '#2231a1',
    'text_color' => '#ffffff',
    'weight' => '99',
    'position' => 'top',
    'fixed' => 0,
  );
  $export['www'] = $environment;

  return $export;
}
