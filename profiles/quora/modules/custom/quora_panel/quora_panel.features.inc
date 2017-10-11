<?php
/**
 * @file
 * quora_panel.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function quora_panel_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "captcha" && $api == "captcha") {
    return array("version" => "1");
  }
  if ($module == "page_manager" && $api == "pages_default") {
    return array("version" => "1");
  }
}
