<?php
/**
 * @file
 * hk_translations.features.language.inc
 */

/**
 * Implements hook_locale_default_languages().
 */
function hk_translations_locale_default_languages() {
  $languages = array();

  // Exported language: de.
  $languages['de'] = array(
    'language' => 'de',
    'name' => 'DE',
    'native' => 'DE',
    'direction' => 0,
    'enabled' => 1,
    'plurals' => 2,
    'formula' => '($n!=1)',
    'domain' => 'hk.dev.drupalforgood.eu',
    'prefix' => '',
    'weight' => -10,
  );
  // Exported language: en.
  $languages['en'] = array(
    'language' => 'en',
    'name' => 'EN',
    'native' => 'EN',
    'direction' => 0,
    'enabled' => 1,
    'plurals' => 0,
    'formula' => '',
    'domain' => 'en.hk.dev.drupalforgood.eu',
    'prefix' => '',
    'weight' => -9,
  );
  // Exported language: zh-hans.
  $languages['zh-hans'] = array(
    'language' => 'zh-hans',
    'name' => 'Chinese, Simplified',
    'native' => '中',
    'direction' => 0,
    'enabled' => 1,
    'plurals' => 2,
    'formula' => '($n!=1)',
    'domain' => '',
    'prefix' => 'zh',
    'weight' => -8,
  );
  return $languages;
}
