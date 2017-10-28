<?php
/**
 * @file
 * panel_quora.pages_default.inc
 */

/**
 * Implements hook_default_page_manager_handlers().
 */
function panel_quora_default_page_manager_handlers() {
  $export = array();

  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'node_edit__panel_context_6aab83dd-4b10-42bb-9ac5-ea2d45aa668e';
  $handler->task = 'node_edit';
  $handler->subtask = '';
  $handler->handler = 'panel_context';
  $handler->weight = 0;
  $handler->conf = array(
    'title' => 'Bg_image',
    'no_blocks' => 0,
    'pipeline' => 'standard',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => '',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
    'name' => '',
  );
  $display = new panels_display();
  $display->layout = 'twocol_bricks';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'top' => NULL,
      'left_above' => NULL,
      'right_above' => NULL,
      'middle' => NULL,
      'left_below' => NULL,
      'right_below' => NULL,
      'bottom' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '';
  $display->uuid = '7750b3a0-8d15-4f4e-b4a8-b215e80a14a2';
  $display->storage_type = 'page_manager';
  $display->storage_id = 'node_edit__panel_context_6aab83dd-4b10-42bb-9ac5-ea2d45aa668e';
  $display->content = array();
  $display->panels = array();
  $pane = new stdClass();
  $pane->pid = 'new-a83d513d-3194-4012-bf64-dbf17a591c1e';
  $pane->panel = 'left_above';
  $pane->type = 'node_form_title';
  $pane->subtype = 'node_form_title';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'context' => 'argument_node_edit_1',
    'override_title' => 0,
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
  $pane->uuid = 'a83d513d-3194-4012-bf64-dbf17a591c1e';
  $display->content['new-a83d513d-3194-4012-bf64-dbf17a591c1e'] = $pane;
  $display->panels['left_above'][0] = 'new-a83d513d-3194-4012-bf64-dbf17a591c1e';
  $pane = new stdClass();
  $pane->pid = 'new-611f22f4-c950-4875-8626-47e38180b358';
  $pane->panel = 'right_above';
  $pane->type = 'entity_form_field';
  $pane->subtype = 'node:body';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'label' => '',
    'formatter' => '',
    'context' => 'argument_node_edit_1',
    'override_title' => 0,
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
  $pane->uuid = '611f22f4-c950-4875-8626-47e38180b358';
  $display->content['new-611f22f4-c950-4875-8626-47e38180b358'] = $pane;
  $display->panels['right_above'][0] = 'new-611f22f4-c950-4875-8626-47e38180b358';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = 'new-a83d513d-3194-4012-bf64-dbf17a591c1e';
  $handler->conf['display'] = $display;
  $export['node_edit__panel_context_6aab83dd-4b10-42bb-9ac5-ea2d45aa668e'] = $handler;

  return $export;
}

/**
 * Implements hook_default_page_manager_pages().
 */
function panel_quora_default_page_manager_pages() {
  $page = new stdClass();
  $page->disabled = FALSE; /* Edit this to true to make a default page disabled initially */
  $page->api_version = 1;
  $page->name = 'home_page';
  $page->task = 'page';
  $page->admin_title = 'home_page';
  $page->admin_description = '';
  $page->path = 'home_page';
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
  $handler->name = 'page_home_page__panel';
  $handler->task = 'page';
  $handler->subtask = 'home_page';
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
  );
  $display = new panels_display();
  $display->layout = 'threecol_33_34_33';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'left' => NULL,
      'middle' => NULL,
      'right' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '';
  $display->uuid = '505a1041-7cca-43d6-88d5-82acdd8b8d22';
  $display->storage_type = 'page_manager';
  $display->storage_id = 'page_home_page__panel';
  $display->content = array();
  $display->panels = array();
  $pane = new stdClass();
  $pane->pid = 'new-7dc70f07-5ced-4775-9504-1bfb470dac4a';
  $pane->panel = 'left';
  $pane->type = 'block';
  $pane->subtype = 'menu-menu-feeds';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'override_title' => 1,
    'override_title_text' => 'Feeds',
    'override_title_heading' => 'h2',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
    'style' => 'rounded_corners',
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = '7dc70f07-5ced-4775-9504-1bfb470dac4a';
  $display->content['new-7dc70f07-5ced-4775-9504-1bfb470dac4a'] = $pane;
  $display->panels['left'][0] = 'new-7dc70f07-5ced-4775-9504-1bfb470dac4a';
  $pane = new stdClass();
  $pane->pid = 'new-b2e8d0dd-2020-4bee-ae75-6ef94aa0d2c1';
  $pane->panel = 'middle';
  $pane->type = 'block';
  $pane->subtype = 'views-related_questions-block';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'override_title' => 0,
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
  $pane->uuid = 'b2e8d0dd-2020-4bee-ae75-6ef94aa0d2c1';
  $display->content['new-b2e8d0dd-2020-4bee-ae75-6ef94aa0d2c1'] = $pane;
  $display->panels['middle'][0] = 'new-b2e8d0dd-2020-4bee-ae75-6ef94aa0d2c1';
  $pane = new stdClass();
  $pane->pid = 'new-c90baa5d-9994-4b08-8146-b0050d040fcc';
  $pane->panel = 'right';
  $pane->type = 'block';
  $pane->subtype = 'menu-menu-improve-your-feeds';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'override_title' => 1,
    'override_title_text' => 'Improve your Feeds',
    'override_title_heading' => 'h2',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
    'style' => 'rounded_corners',
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = 'c90baa5d-9994-4b08-8146-b0050d040fcc';
  $display->content['new-c90baa5d-9994-4b08-8146-b0050d040fcc'] = $pane;
  $display->panels['right'][0] = 'new-c90baa5d-9994-4b08-8146-b0050d040fcc';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = 'new-7dc70f07-5ced-4775-9504-1bfb470dac4a';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $pages['home_page'] = $page;

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
          3 => 5,
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
      5 => array(
        'type' => 'row',
        'contains' => 'region',
        'children' => array(
          0 => 'centerbottom',
        ),
        'parent' => 'main',
        'class' => 'centerbottom',
        'hide_empty' => 0,
      ),
      'centerbottom' => array(
        'type' => 'region',
        'title' => 'centerbottom',
        'width' => 100,
        'width_type' => '%',
        'parent' => '5',
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
      'centerbottom' => NULL,
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
  $pane->panel = 'centerbottom';
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
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = 'ed5b618c-f106-4610-ab60-9e4f24cc1121';
  $display->content['new-ed5b618c-f106-4610-ab60-9e4f24cc1121'] = $pane;
  $display->panels['centerbottom'][0] = 'new-ed5b618c-f106-4610-ab60-9e4f24cc1121';
  $pane = new stdClass();
  $pane->pid = 'new-741f9a74-8777-45f6-a854-fd6ed69c1bbd';
  $pane->panel = 'centerbottom';
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
  $pane->position = 1;
  $pane->locks = array();
  $pane->uuid = '741f9a74-8777-45f6-a854-fd6ed69c1bbd';
  $display->content['new-741f9a74-8777-45f6-a854-fd6ed69c1bbd'] = $pane;
  $display->panels['centerbottom'][1] = 'new-741f9a74-8777-45f6-a854-fd6ed69c1bbd';
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
