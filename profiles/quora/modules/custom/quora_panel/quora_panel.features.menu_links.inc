<?php
/**
 * @file
 * quora_panel.features.menu_links.inc
 */

/**
 * Implements hook_menu_default_menu_links().
 */
function quora_panel_menu_default_menu_links() {
  $menu_links = array();

  // Exported menu link: main-menu_answer:<front>.
  $menu_links['main-menu_answer:<front>'] = array(
    'menu_name' => 'main-menu',
    'link_path' => '<front>',
    'router_path' => '',
    'link_title' => 'Answer',
    'options' => array(
      'attributes' => array(
        'class' => array(
          0 => 'fa',
          1 => 'fa-pencil-square-o',
        ),
        'style' => 'color:gray;font-size:20px;',
      ),
      'item_attributes' => array(
        'id' => '',
        'class' => '',
        'style' => '',
      ),
      'identifier' => 'main-menu_answer:<front>',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 1,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -48,
    'customized' => 1,
  );
  // Exported menu link: main-menu_home:home_page.
  $menu_links['main-menu_home:home_page'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'home_page',
    'router_path' => 'home_page',
    'link_title' => 'Home',
    'options' => array(
      'content' => array(
        'image' => 2,
      ),
      'attributes' => array(
        'class' => array(
          0 => 'fa',
          1 => 'fa-file-text',
        ),
        'style' => 'color:maroon;font-size:20px;',
      ),
      'item_attributes' => array(
        'id' => '',
        'class' => '',
        'style' => '',
      ),
      'identifier' => 'main-menu_home:home_page',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -49,
    'customized' => 1,
  );
  // Exported menu link: main-menu_log-out:user/logout.
  $menu_links['main-menu_log-out:user/logout'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'user/logout',
    'router_path' => 'user/logout',
    'link_title' => 'Log out',
    'options' => array(
      'attributes' => array(
        'style' => 'color:gray;font-size:15px;',
      ),
      'item_attributes' => array(
        'id' => '',
        'class' => '',
        'style' => '',
      ),
      'identifier' => 'main-menu_log-out:user/logout',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -50,
    'customized' => 1,
    'parent_identifier' => 'main-menu_-:<front>',
  );
  // Exported menu link: main-menu_notifications:<front>.
  $menu_links['main-menu_notifications:<front>'] = array(
    'menu_name' => 'main-menu',
    'link_path' => '<front>',
    'router_path' => '',
    'link_title' => 'Notifications',
    'options' => array(
      'attributes' => array(
        'class' => array(
          0 => 'fa',
          1 => 'fa-bell',
        ),
        'style' => 'color:gray;font-size:20px;',
      ),
      'item_attributes' => array(
        'id' => '',
        'class' => '',
        'style' => '',
      ),
      'identifier' => 'main-menu_notifications:<front>',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 1,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -47,
    'customized' => 1,
  );
  // Exported menu link: main-menu_quora:home_page.
  $menu_links['main-menu_quora:home_page'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'home_page',
    'router_path' => 'home_page',
    'link_title' => 'Quora',
    'options' => array(
      'attributes' => array(
        'style' => 'color:#BF1901;font-size:20px;font-weight:bold;',
      ),
      'item_attributes' => array(
        'id' => '',
        'class' => '',
        'style' => '',
      ),
      'identifier' => 'main-menu_quora:home_page',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -50,
    'customized' => 1,
  );

  // Translatables
  // Included for use with string extractors like potx.
  t('Answer');
  t('Home');
  t('Log out');
  t('Notifications');
  t('Quora');

  return $menu_links;
}
