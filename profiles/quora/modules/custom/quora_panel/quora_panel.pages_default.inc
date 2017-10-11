<?php
/**
 * @file
 * quora_panel.pages_default.inc
 */

/**
 * Implements hook_default_page_manager_pages().
 */
function quora_panel_default_page_manager_pages() {
  $page = new stdClass();
  $page->disabled = FALSE; /* Edit this to true to make a default page disabled initially */
  $page->api_version = 1;
  $page->name = 'quora';
  $page->task = 'page';
  $page->admin_title = 'quora';
  $page->admin_description = '';
  $page->path = 'login_page';
  $page->access = array();
  $page->menu = array();
  $page->arguments = array();
  $page->conf = array(
    'admin_paths' => FALSE,
  );
  $page->default_handlers = array();
  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'page_quora__panel';
  $handler->task = 'page';
  $handler->subtask = 'quora';
  $handler->handler = 'panel_context';
  $handler->weight = 0;
  $handler->conf = array(
    'title' => 'Panel',
    'no_blocks' => 0,
    'pipeline' => 'standard',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => '',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
    'name' => 'panel',
    'access' => array(
      'plugins' => array(
        0 => array(
          'name' => 'role',
          'settings' => array(
            'rids' => array(
              0 => 1,
            ),
          ),
          'context' => 'logged-in-user',
          'not' => FALSE,
        ),
      ),
      'logic' => 'and',
    ),
  );
  $display = new panels_display();
  $display->layout = 'flexible';
  $display->layout_settings = array(
    'items' => array(
      'canvas' => array(
        'type' => 'row',
        'contains' => 'column',
        'children' => array(
          0 => 1,
          1 => 'main',
          2 => 2,
        ),
        'parent' => NULL,
      ),
      'main' => array(
        'type' => 'column',
        'width' => '64.80688814818568',
        'width_type' => '%',
        'children' => array(
          0 => 3,
          1 => 'main-row',
          2 => 4,
        ),
        'parent' => 'canvas',
      ),
      'main-row' => array(
        'type' => 'row',
        'contains' => 'region',
        'children' => array(
          0 => 'centerleft',
          1 => 'centerright',
        ),
        'parent' => 'main',
      ),
      1 => array(
        'type' => 'column',
        'width' => '17.133593258177353',
        'width_type' => '%',
        'parent' => 'canvas',
        'children' => array(),
        'class' => 'left',
        'hide_empty' => 0,
      ),
      2 => array(
        'type' => 'column',
        'width' => '18.05951859363698',
        'width_type' => '%',
        'parent' => 'canvas',
        'children' => array(),
        'class' => 'right',
        'hide_empty' => 0,
      ),
      3 => array(
        'type' => 'row',
        'contains' => 'region',
        'children' => array(
          0 => 'top',
        ),
        'parent' => 'main',
        'class' => 'centertop',
        'hide_empty' => 0,
      ),
      'top' => array(
        'type' => 'region',
        'title' => 'top',
        'width' => 100,
        'width_type' => '%',
        'parent' => '3',
        'class' => '',
        'hide_empty' => 0,
      ),
      4 => array(
        'type' => 'row',
        'contains' => 'region',
        'children' => array(
          0 => 'bottom',
        ),
        'parent' => 'main',
        'class' => 'bottom',
        'hide_empty' => 0,
      ),
      'bottom' => array(
        'type' => 'region',
        'title' => 'bottom',
        'width' => 100,
        'width_type' => '%',
        'parent' => '4',
        'class' => '',
        'hide_empty' => 0,
      ),
      'centerleft' => array(
        'type' => 'region',
        'title' => 'centerleft',
        'width' => '52.87095002272695',
        'width_type' => '%',
        'parent' => 'main-row',
        'class' => '',
        'hide_empty' => 0,
      ),
      'centerright' => array(
        'type' => 'region',
        'title' => 'centerright',
        'width' => '47.12904997727305',
        'width_type' => '%',
        'parent' => 'main-row',
        'class' => '',
        'hide_empty' => 0,
      ),
    ),
  );
  $display->panel_settings = array(
    'style_settings' => array(
      'top' => NULL,
      'bottom' => NULL,
      'centerleft' => NULL,
      'centerright' => NULL,
      'default' => NULL,
    ),
    'style' => 'default',
  );
  $display->cache = array();
  $display->title = '';
  $display->uuid = '0b4e8193-672c-4af4-adf1-cde75690badd';
  $display->storage_type = 'page_manager';
  $display->storage_id = 'page_quora__panel';
  $display->content = array();
  $display->panels = array();
  $pane = new stdClass();
  $pane->pid = 'new-5f5d8a6e-17b0-4364-832d-c7ebc6b7f589';
  $pane->panel = 'bottom';
  $pane->type = 'custom';
  $pane->subtype = 'custom';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'admin_title' => '',
    'title' => '',
    'title_heading' => 'h2',
    'body' => '  <a  href="#" class="quora_chinese_language">Quora日本語をお探しですか? ></a>',
    'format' => 'full_html',
    'substitute' => TRUE,
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = '5f5d8a6e-17b0-4364-832d-c7ebc6b7f589';
  $display->content['new-5f5d8a6e-17b0-4364-832d-c7ebc6b7f589'] = $pane;
  $display->panels['bottom'][0] = 'new-5f5d8a6e-17b0-4364-832d-c7ebc6b7f589';
  $pane = new stdClass();
  $pane->pid = 'new-ed5b618c-f106-4610-ab60-9e4f24cc1121';
  $pane->panel = 'bottom';
  $pane->type = 'block';
  $pane->subtype = 'menu-menu-quora-footer';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'override_title' => 1,
    'override_title_text' => '',
    'override_title_heading' => 'h2',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 1;
  $pane->locks = array();
  $pane->uuid = 'ed5b618c-f106-4610-ab60-9e4f24cc1121';
  $display->content['new-ed5b618c-f106-4610-ab60-9e4f24cc1121'] = $pane;
  $display->panels['bottom'][1] = 'new-ed5b618c-f106-4610-ab60-9e4f24cc1121';
  $pane = new stdClass();
  $pane->pid = 'new-741f9a74-8777-45f6-a854-fd6ed69c1bbd';
  $pane->panel = 'bottom';
  $pane->type = 'block';
  $pane->subtype = 'menu-menu-quora-footer2';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'override_title' => 1,
    'override_title_text' => '',
    'override_title_heading' => 'h2',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 2;
  $pane->locks = array();
  $pane->uuid = '741f9a74-8777-45f6-a854-fd6ed69c1bbd';
  $display->content['new-741f9a74-8777-45f6-a854-fd6ed69c1bbd'] = $pane;
  $display->panels['bottom'][2] = 'new-741f9a74-8777-45f6-a854-fd6ed69c1bbd';
  $pane = new stdClass();
  $pane->pid = 'new-f88d6521-c3f0-4acd-be58-552fe5fef709';
  $pane->panel = 'centerleft';
  $pane->type = 'block';
  $pane->subtype = 'hybridauth-hybridauth';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'override_title' => 1,
    'override_title_text' => '',
    'override_title_heading' => 'h2',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = 'f88d6521-c3f0-4acd-be58-552fe5fef709';
  $display->content['new-f88d6521-c3f0-4acd-be58-552fe5fef709'] = $pane;
  $display->panels['centerleft'][0] = 'new-f88d6521-c3f0-4acd-be58-552fe5fef709';
  $pane = new stdClass();
  $pane->pid = 'new-8f9113d2-7c5c-4394-a0ef-efee1133def2';
  $pane->panel = 'centerleft';
  $pane->type = 'block';
  $pane->subtype = 'formblock-user_register';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'override_title' => 1,
    'override_title_text' => 'Sign Up',
    'override_title_heading' => 'h2',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 1;
  $pane->locks = array();
  $pane->uuid = '8f9113d2-7c5c-4394-a0ef-efee1133def2';
  $display->content['new-8f9113d2-7c5c-4394-a0ef-efee1133def2'] = $pane;
  $display->panels['centerleft'][1] = 'new-8f9113d2-7c5c-4394-a0ef-efee1133def2';
  $pane = new stdClass();
  $pane->pid = 'new-2f959925-f873-4ca7-96ba-c20370127638';
  $pane->panel = 'centerleft';
  $pane->type = 'custom';
  $pane->subtype = 'custom';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'admin_title' => 'Login by email content',
    'title' => '',
    'title_heading' => 'h2',
    'body' => '<div class="login-by-email"><a href="#" id ="show-login-email" >Continue With Email</a>. By signing up you indicate that you have read and agree to the Terms of Service and Privacy Policy.</div>',
    'format' => 'full_html',
    'substitute' => TRUE,
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 2;
  $pane->locks = array();
  $pane->uuid = '2f959925-f873-4ca7-96ba-c20370127638';
  $display->content['new-2f959925-f873-4ca7-96ba-c20370127638'] = $pane;
  $display->panels['centerleft'][2] = 'new-2f959925-f873-4ca7-96ba-c20370127638';
  $pane = new stdClass();
  $pane->pid = 'new-75b035d3-9ec8-4faf-a325-e9bfbbc916cc';
  $pane->panel = 'centerright';
  $pane->type = 'block';
  $pane->subtype = 'user-login';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'override_title' => 1,
    'override_title_text' => 'Login',
    'override_title_heading' => 'h2',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = '75b035d3-9ec8-4faf-a325-e9bfbbc916cc';
  $display->content['new-75b035d3-9ec8-4faf-a325-e9bfbbc916cc'] = $pane;
  $display->panels['centerright'][0] = 'new-75b035d3-9ec8-4faf-a325-e9bfbbc916cc';
  $pane = new stdClass();
  $pane->pid = 'new-1f1a7566-5c9c-492f-bc14-4bcbf333dcdc';
  $pane->panel = 'top';
  $pane->type = 'custom';
  $pane->subtype = 'custom';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'admin_title' => '',
    'title' => '',
    'title_heading' => 'h2',
    'body' => '<img class="quora_image" src="/profiles/quora/themes/custom/quora_theme/images/logo1.png" height=70 width=250><br>
<label class="quora_label">A place to share knowledge and better understand the world</label>',
    'format' => 'full_html',
    'substitute' => TRUE,
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = '1f1a7566-5c9c-492f-bc14-4bcbf333dcdc';
  $display->content['new-1f1a7566-5c9c-492f-bc14-4bcbf333dcdc'] = $pane;
  $display->panels['top'][0] = 'new-1f1a7566-5c9c-492f-bc14-4bcbf333dcdc';
  $display->hide_title = PANELS_TITLE_NONE;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $pages['quora'] = $page;

  return $pages;

}
