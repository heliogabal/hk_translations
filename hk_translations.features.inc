<?php
/**
 * @file
 * hk_translations.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function hk_translations_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_default_tmgmt_translator().
 */
function hk_translations_default_tmgmt_translator() {
  $items = array();
  $items['download'] = entity_import('tmgmt_translator', '{
    "name" : "download",
    "label" : "Download",
    "description" : "\\u00dcbersetzungen als Datei exportieren, die nach \\u00dcbersetzung wieder importiert werden k\\u00f6nnen.",
    "weight" : "0",
    "plugin" : "file",
    "settings" : {
      "auto_accept" : 1,
      "export_format" : "xlf",
      "xliff_processing" : 1,
      "allow_override" : 1,
      "scheme" : "public",
      "remote_languages_mappings" : { "de" : "de", "en" : "en", "zh-hans" : "zh-hans" }
    }
  }');
  $items['local'] = entity_import('tmgmt_translator', '{
    "name" : "local",
    "label" : "Local Translator (auto created)",
    "description" : "Allows local users to process translation jobs.",
    "weight" : "0",
    "plugin" : "local",
    "settings" : { "auto_accept" : 0, "allow_all" : 1 }
  }');
  $items['microsoft'] = entity_import('tmgmt_translator', '{
    "name" : "microsoft",
    "label" : "Microsoft translator (auto created)",
    "description" : "Microsoft Translator service.",
    "weight" : "0",
    "plugin" : "microsoft",
    "settings" : {
      "auto_accept" : 0,
      "clientid" : "HK-translate",
      "clientsecret" : "RLUZSlks\\/bksMgyM\\/4yA9Po9VcoPQ56+OKgGelLc1Ds=",
      "api" : "",
      "remote_languages_mappings" : { "de" : "de", "en" : "en", "zh-hans" : "zh-hans" }
    }
  }');
  return $items;
}
