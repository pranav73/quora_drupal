<?php
/**
 * @file
 * panel_quora.features.menu_custom.inc
 */

/**
 * Implements hook_menu_default_menu_custom().
 */
function panel_quora_menu_default_menu_custom() {
  $menus = array();

  // Exported menu: menu-quora.
  $menus['menu-quora'] = array(
    'menu_name' => 'menu-quora',
    'title' => 'Quora',
    'description' => '',
  );
  // Exported menu: menu-quora-footer.
  $menus['menu-quora-footer'] = array(
    'menu_name' => 'menu-quora-footer',
    'title' => 'Quora_footer',
    'description' => '',
  );
  // Exported menu: menu-quora-footer2.
  $menus['menu-quora-footer2'] = array(
    'menu_name' => 'menu-quora-footer2',
    'title' => 'quora_footer2',
    'description' => '',
  );
  // Translatables
  // Included for use with string extractors like potx.
  t('Quora');
  t('Quora_footer');
  t('quora_footer2');

  return $menus;
}
