<?php
/**
 * @file
 * quora_panel_feature.rules_defaults.inc
 */

/**
 * Implements hook_default_rules_configuration().
 */
function quora_panel_feature_default_rules_configuration() {
  $items = array();
  $items['rules_home_page'] = entity_import('rules_config', '{ "rules_home_page" : {
      "LABEL" : "Home_page",
      "PLUGIN" : "reaction rule",
      "OWNER" : "rules",
      "REQUIRES" : [ "rules" ],
      "ON" : { "user_login" : [] },
      "DO" : [ { "redirect" : { "url" : "home_page" } } ]
    }
  }');
  return $items;
}
