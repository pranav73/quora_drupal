<?php
/**
 * @file
 * quora_panel_feature.features.menu_custom.inc
 */

/**
 * Implements hook_menu_default_menu_custom().
 */
function quora_panel_feature_menu_default_menu_custom() {
  $menus = array();

  // Exported menu: main-menu.
  $menus['main-menu'] = array(
    'menu_name' => 'main-menu',
    'title' => 'Main menu',
    'description' => 'The <em>Main</em> menu is used on many sites to show the major sections of the site, often in a top navigation bar.',
  );
  // Exported menu: management.
  $menus['management'] = array(
    'menu_name' => 'management',
    'title' => 'Management',
    'description' => 'The <em>Management</em> menu contains links for administrative tasks.',
  );
  // Exported menu: menu-feeds.
  $menus['menu-feeds'] = array(
    'menu_name' => 'menu-feeds',
    'title' => 'Feeds',
    'description' => '',
  );
  // Exported menu: menu-improve-your-feeds.
  $menus['menu-improve-your-feeds'] = array(
    'menu_name' => 'menu-improve-your-feeds',
    'title' => 'Improve your feeds',
    'description' => '',
  );
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
  t('Feeds');
  t('Improve your feeds');
  t('Main menu');
  t('Management');
  t('Quora');
  t('Quora_footer');
  t('The <em>Main</em> menu is used on many sites to show the major sections of the site, often in a top navigation bar.');
  t('The <em>Management</em> menu contains links for administrative tasks.');
  t('quora_footer2');

  return $menus;
}
