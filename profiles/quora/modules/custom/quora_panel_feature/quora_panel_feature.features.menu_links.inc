<?php
/**
 * @file
 * quora_panel_feature.features.menu_links.inc
 */

/**
 * Implements hook_menu_default_menu_links().
 */
function quora_panel_feature_menu_default_menu_links() {
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
  // Exported menu link: management_background-image:admin/config/content/background-image.
  $menu_links['management_background-image:admin/config/content/background-image'] = array(
    'menu_name' => 'management',
    'link_path' => 'admin/config/content/background-image',
    'router_path' => 'admin/config/content/background-image',
    'link_title' => 'Background Image',
    'options' => array(
      'attributes' => array(
        'title' => 'Settings for how to apply the background image to the page',
      ),
      'identifier' => 'management_background-image:admin/config/content/background-image',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 0,
    'parent_identifier' => 'management_content-authoring:admin/config/content',
  );
  // Exported menu link: management_background-images:admin/content/background-images.
  $menu_links['management_background-images:admin/content/background-images'] = array(
    'menu_name' => 'management',
    'link_path' => 'admin/content/background-images',
    'router_path' => 'admin/content/background-images',
    'link_title' => 'Background Images',
    'options' => array(
      'attributes' => array(
        'title' => 'Manage your site\'s background images',
      ),
      'identifier' => 'management_background-images:admin/content/background-images',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 0,
    'parent_identifier' => 'management_content:admin/content',
  );
  // Exported menu link: management_feeds:admin/structure/menu/manage/menu-feeds.
  $menu_links['management_feeds:admin/structure/menu/manage/menu-feeds'] = array(
    'menu_name' => 'management',
    'link_path' => 'admin/structure/menu/manage/menu-feeds',
    'router_path' => 'admin/structure/menu/manage/%',
    'link_title' => 'Feeds',
    'options' => array(
      'identifier' => 'management_feeds:admin/structure/menu/manage/menu-feeds',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 0,
    'parent_identifier' => 'management_menus:admin/structure/menu',
  );
  // Exported menu link: management_hybridauth-identities:admin/reports/hybridauth.
  $menu_links['management_hybridauth-identities:admin/reports/hybridauth'] = array(
    'menu_name' => 'management',
    'link_path' => 'admin/reports/hybridauth',
    'router_path' => 'admin/reports/hybridauth',
    'link_title' => 'HybridAuth identities',
    'options' => array(
      'attributes' => array(
        'title' => 'View HybridAuth identities counts grouped by authentication provider.',
      ),
      'identifier' => 'management_hybridauth-identities:admin/reports/hybridauth',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 0,
    'parent_identifier' => 'management_reports:admin/reports',
  );
  // Exported menu link: management_hybridauth:admin/config/people/hybridauth.
  $menu_links['management_hybridauth:admin/config/people/hybridauth'] = array(
    'menu_name' => 'management',
    'link_path' => 'admin/config/people/hybridauth',
    'router_path' => 'admin/config/people/hybridauth',
    'link_title' => 'HybridAuth',
    'options' => array(
      'attributes' => array(
        'title' => 'Manage HybridAuth social sign-on settings.',
      ),
      'identifier' => 'management_hybridauth:admin/config/people/hybridauth',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 0,
    'parent_identifier' => 'management_people:admin/config/people',
  );
  // Exported menu link: management_improve-your-feeds:admin/structure/menu/manage/menu-improve-your-feeds.
  $menu_links['management_improve-your-feeds:admin/structure/menu/manage/menu-improve-your-feeds'] = array(
    'menu_name' => 'management',
    'link_path' => 'admin/structure/menu/manage/menu-improve-your-feeds',
    'router_path' => 'admin/structure/menu/manage/%',
    'link_title' => 'Improve your feeds',
    'options' => array(
      'identifier' => 'management_improve-your-feeds:admin/structure/menu/manage/menu-improve-your-feeds',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 0,
    'parent_identifier' => 'management_menus:admin/structure/menu',
  );
  // Exported menu link: management_main-menu:admin/structure/menu/manage/main-menu.
  $menu_links['management_main-menu:admin/structure/menu/manage/main-menu'] = array(
    'menu_name' => 'management',
    'link_path' => 'admin/structure/menu/manage/main-menu',
    'router_path' => 'admin/structure/menu/manage/%',
    'link_title' => 'Main menu',
    'options' => array(
      'identifier' => 'management_main-menu:admin/structure/menu/manage/main-menu',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 0,
    'parent_identifier' => 'management_menus:admin/structure/menu',
  );
  // Exported menu link: management_menus:admin/structure/menu.
  $menu_links['management_menus:admin/structure/menu'] = array(
    'menu_name' => 'management',
    'link_path' => 'admin/structure/menu',
    'router_path' => 'admin/structure/menu',
    'link_title' => 'Menus',
    'options' => array(
      'attributes' => array(
        'title' => 'Add new menus to your site, edit existing menus, and rename and reorganize menu links.',
      ),
      'identifier' => 'management_menus:admin/structure/menu',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 1,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 0,
    'parent_identifier' => 'management_structure:admin/structure',
  );
  // Exported menu link: management_pages:admin/structure/pages.
  $menu_links['management_pages:admin/structure/pages'] = array(
    'menu_name' => 'management',
    'link_path' => 'admin/structure/pages',
    'router_path' => 'admin/structure/pages',
    'link_title' => 'Pages',
    'options' => array(
      'attributes' => array(
        'title' => 'Add, edit and remove overridden system pages and user defined pages from the system.',
      ),
      'identifier' => 'management_pages:admin/structure/pages',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 1,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 0,
    'parent_identifier' => 'management_structure:admin/structure',
  );
  // Exported menu link: management_panels:admin/structure/panels.
  $menu_links['management_panels:admin/structure/panels'] = array(
    'menu_name' => 'management',
    'link_path' => 'admin/structure/panels',
    'router_path' => 'admin/structure/panels',
    'link_title' => 'Panels',
    'options' => array(
      'attributes' => array(
        'title' => 'Get a bird\'s eye view of items related to Panels.',
      ),
      'identifier' => 'management_panels:admin/structure/panels',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 0,
    'parent_identifier' => 'management_structure:admin/structure',
  );
  // Exported menu link: management_quora:admin/structure/menu/manage/menu-quora.
  $menu_links['management_quora:admin/structure/menu/manage/menu-quora'] = array(
    'menu_name' => 'management',
    'link_path' => 'admin/structure/menu/manage/menu-quora',
    'router_path' => 'admin/structure/menu/manage/%',
    'link_title' => 'Quora',
    'options' => array(
      'identifier' => 'management_quora:admin/structure/menu/manage/menu-quora',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 0,
    'parent_identifier' => 'management_menus:admin/structure/menu',
  );
  // Exported menu link: management_quorafooter2:admin/structure/menu/manage/menu-quora-footer2.
  $menu_links['management_quorafooter2:admin/structure/menu/manage/menu-quora-footer2'] = array(
    'menu_name' => 'management',
    'link_path' => 'admin/structure/menu/manage/menu-quora-footer2',
    'router_path' => 'admin/structure/menu/manage/%',
    'link_title' => 'quora_footer2',
    'options' => array(
      'identifier' => 'management_quorafooter2:admin/structure/menu/manage/menu-quora-footer2',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 0,
    'parent_identifier' => 'management_menus:admin/structure/menu',
  );
  // Exported menu link: management_quorafooter:admin/structure/menu/manage/menu-quora-footer.
  $menu_links['management_quorafooter:admin/structure/menu/manage/menu-quora-footer'] = array(
    'menu_name' => 'management',
    'link_path' => 'admin/structure/menu/manage/menu-quora-footer',
    'router_path' => 'admin/structure/menu/manage/%',
    'link_title' => 'Quora_footer',
    'options' => array(
      'identifier' => 'management_quorafooter:admin/structure/menu/manage/menu-quora-footer',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 0,
    'parent_identifier' => 'management_menus:admin/structure/menu',
  );
  // Exported menu link: management_views:admin/structure/views.
  $menu_links['management_views:admin/structure/views'] = array(
    'menu_name' => 'management',
    'link_path' => 'admin/structure/views',
    'router_path' => 'admin/structure/views',
    'link_title' => 'Views',
    'options' => array(
      'attributes' => array(
        'title' => 'Manage customized lists of content.',
      ),
      'identifier' => 'management_views:admin/structure/views',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 1,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 0,
    'parent_identifier' => 'management_structure:admin/structure',
  );
  // Exported menu link: menu-quora-footer2_:<front>.
  $menu_links['menu-quora-footer2_:<front>'] = array(
    'menu_name' => 'menu-quora-footer2',
    'link_path' => '<front>',
    'router_path' => '',
    'link_title' => '日本語',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'menu-quora-footer2_:<front>',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 1,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 1,
  );
  // Exported menu link: menu-quora-footer_about:http://local.quora.com/node/2.
  $menu_links['menu-quora-footer_about:http://local.quora.com/node/2'] = array(
    'menu_name' => 'menu-quora-footer',
    'link_path' => 'http://local.quora.com/node/2',
    'router_path' => '',
    'link_title' => 'About',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'menu-quora-footer_about:http://local.quora.com/node/2',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 1,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -50,
    'customized' => 1,
  );
  // Exported menu link: menu-quora-footer_business:<front>.
  $menu_links['menu-quora-footer_business:<front>'] = array(
    'menu_name' => 'menu-quora-footer',
    'link_path' => '<front>',
    'router_path' => '',
    'link_title' => 'Business',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'menu-quora-footer_business:<front>',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 1,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -48,
    'customized' => 1,
  );
  // Exported menu link: menu-quora-footer_careers:<front>.
  $menu_links['menu-quora-footer_careers:<front>'] = array(
    'menu_name' => 'menu-quora-footer',
    'link_path' => '<front>',
    'router_path' => '',
    'link_title' => 'Careers',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'menu-quora-footer_careers:<front>',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 1,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -49,
    'customized' => 1,
  );
  // Exported menu link: menu-quora-footer_contact:<front>.
  $menu_links['menu-quora-footer_contact:<front>'] = array(
    'menu_name' => 'menu-quora-footer',
    'link_path' => '<front>',
    'router_path' => '',
    'link_title' => 'contact',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'menu-quora-footer_contact:<front>',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 1,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -44,
    'customized' => 1,
  );
  // Exported menu link: menu-quora-footer_espaol:<front>.
  $menu_links['menu-quora-footer_espaol:<front>'] = array(
    'menu_name' => 'menu-quora-footer',
    'link_path' => '<front>',
    'router_path' => '',
    'link_title' => 'Español',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'menu-quora-footer_espaol:<front>',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 1,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -43,
    'customized' => 1,
  );
  // Exported menu link: menu-quora-footer_franais:<front>.
  $menu_links['menu-quora-footer_franais:<front>'] = array(
    'menu_name' => 'menu-quora-footer',
    'link_path' => '<front>',
    'router_path' => '',
    'link_title' => 'Français',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'menu-quora-footer_franais:<front>',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 1,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -42,
    'customized' => 1,
  );
  // Exported menu link: menu-quora-footer_privacy:node/3.
  $menu_links['menu-quora-footer_privacy:node/3'] = array(
    'menu_name' => 'menu-quora-footer',
    'link_path' => 'node/3',
    'router_path' => 'node/%',
    'link_title' => 'Privacy',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'menu-quora-footer_privacy:node/3',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -46,
    'customized' => 1,
  );
  // Exported menu link: menu-quora-footer_sitemap:<front>.
  $menu_links['menu-quora-footer_sitemap:<front>'] = array(
    'menu_name' => 'menu-quora-footer',
    'link_path' => '<front>',
    'router_path' => '',
    'link_title' => 'Sitemap',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'menu-quora-footer_sitemap:<front>',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 1,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -47,
    'customized' => 1,
  );
  // Exported menu link: menu-quora-footer_terms:node/5.
  $menu_links['menu-quora-footer_terms:node/5'] = array(
    'menu_name' => 'menu-quora-footer',
    'link_path' => 'node/5',
    'router_path' => 'node/%',
    'link_title' => 'Terms',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'menu-quora-footer_terms:node/5',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -45,
    'customized' => 1,
  );
  // Exported menu link: menu-quora_answer:<front>.
  $menu_links['menu-quora_answer:<front>'] = array(
    'menu_name' => 'menu-quora',
    'link_path' => '<front>',
    'router_path' => '',
    'link_title' => 'Answer',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'menu-quora_answer:<front>',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 1,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 1,
  );
  // Exported menu link: menu-quora_home:<front>.
  $menu_links['menu-quora_home:<front>'] = array(
    'menu_name' => 'menu-quora',
    'link_path' => '<front>',
    'router_path' => '',
    'link_title' => 'Home',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'menu-quora_home:<front>',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 1,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 1,
  );
  // Exported menu link: menu-quora_notifications:<front>.
  $menu_links['menu-quora_notifications:<front>'] = array(
    'menu_name' => 'menu-quora',
    'link_path' => '<front>',
    'router_path' => '',
    'link_title' => 'Notifications',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'menu-quora_notifications:<front>',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 1,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 1,
  );
  // Exported menu link: navigation_search:search.
  $menu_links['navigation_search:search'] = array(
    'menu_name' => 'navigation',
    'link_path' => 'search',
    'router_path' => 'search',
    'link_title' => 'Search',
    'options' => array(
      'identifier' => 'navigation_search:search',
    ),
    'module' => 'system',
    'hidden' => 1,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 0,
  );
  // Exported menu link: navigation_share-status:statuses/share.
  $menu_links['navigation_share-status:statuses/share'] = array(
    'menu_name' => 'navigation',
    'link_path' => 'statuses/share',
    'router_path' => 'statuses/share',
    'link_title' => 'Share status',
    'options' => array(
      'attributes' => array(
        'title' => 'Allows users to share statuses.',
      ),
      'identifier' => 'navigation_share-status:statuses/share',
    ),
    'module' => 'system',
    'hidden' => 1,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 0,
  );

  // Translatables
  // Included for use with string extractors like potx.
  t('About');
  t('Answer');
  t('Background Image');
  t('Background Images');
  t('Business');
  t('Careers');
  t('Español');
  t('Feeds');
  t('Français');
  t('Home');
  t('HybridAuth');
  t('HybridAuth identities');
  t('Improve your feeds');
  t('Log out');
  t('Main menu');
  t('Menus');
  t('Notifications');
  t('Pages');
  t('Panels');
  t('Privacy');
  t('Quora');
  t('Quora_footer');
  t('Search');
  t('Share status');
  t('Sitemap');
  t('Terms');
  t('Views');
  t('contact');
  t('quora_footer2');
  t('日本語');

  return $menu_links;
}
