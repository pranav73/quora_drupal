<?php
/**
 * @file
 * panel_quora.strongarm.inc
 */

/**
 * Implements hook_strongarm().
 */
function panel_quora_strongarm() {
  $export = array();

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'arrange_fields_position_data_user_register_form';
  $strongarm->value = '';
  $export['arrange_fields_position_data_user_register_form'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'bg_image_attachment';
  $strongarm->value = 'fixed';
  $export['bg_image_attachment'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'bg_image_background_size';
  $strongarm->value = 'cover';
  $export['bg_image_background_size'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'bg_image_background_size_ie8';
  $strongarm->value = 0;
  $export['bg_image_background_size_ie8'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'bg_image_color';
  $strongarm->value = '#FFFFFF';
  $export['bg_image_color'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'bg_image_exclude_admin';
  $strongarm->value = 1;
  $export['bg_image_exclude_admin'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'bg_image_exclude_paths';
  $strongarm->value = 'node/*';
  $export['bg_image_exclude_paths'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'bg_image_important';
  $strongarm->value = 1;
  $export['bg_image_important'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'bg_image_media_query';
  $strongarm->value = 'all';
  $export['bg_image_media_query'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'bg_image_node_field';
  $strongarm->value = 'field_image';
  $export['bg_image_node_field'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'bg_image_node_type';
  $strongarm->value = 'article';
  $export['bg_image_node_type'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'bg_image_repeat';
  $strongarm->value = 'no-repeat';
  $export['bg_image_repeat'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'bg_image_selector';
  $strongarm->value = '.not-logged-in';
  $export['bg_image_selector'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'bg_image_style';
  $strongarm->value = '';
  $export['bg_image_style'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'bg_image_x';
  $strongarm->value = 'center';
  $export['bg_image_x'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'bg_image_y';
  $strongarm->value = 'center';
  $export['bg_image_y'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'cache_class_cache_ctools_css';
  $strongarm->value = 'CToolsCssCache';
  $export['cache_class_cache_ctools_css'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'captcha_add_captcha_description';
  $strongarm->value = 0;
  $export['captcha_add_captcha_description'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'captcha_allow_on_admin_pages';
  $strongarm->value = 0;
  $export['captcha_allow_on_admin_pages'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'captcha_default_challenge';
  $strongarm->value = 'recaptcha/reCAPTCHA';
  $export['captcha_default_challenge'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'captcha_default_challenge_on_nonlisted_forms';
  $strongarm->value = 0;
  $export['captcha_default_challenge_on_nonlisted_forms'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'captcha_default_validation';
  $strongarm->value = '1';
  $export['captcha_default_validation'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'captcha_description';
  $strongarm->value = 'This question is for testing whether or not you are a human visitor and to prevent automated spam submissions.';
  $export['captcha_description'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'captcha_enable_stats';
  $strongarm->value = 0;
  $export['captcha_enable_stats'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'captcha_log_wrong_responses';
  $strongarm->value = 0;
  $export['captcha_log_wrong_responses'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'captcha_persistence';
  $strongarm->value = '1';
  $export['captcha_persistence'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'captcha_placement_map_cache';
  $strongarm->value = array(
    'user_register_form' => array(
      'path' => array(),
      'key' => 'actions',
      'weight' => 99,
    ),
  );
  $export['captcha_placement_map_cache'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'clean_url';
  $strongarm->value = '1';
  $export['clean_url'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_anonymous_question';
  $strongarm->value = 0;
  $export['comment_anonymous_question'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_default_mode_question';
  $strongarm->value = 1;
  $export['comment_default_mode_question'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_default_per_page_question';
  $strongarm->value = '50';
  $export['comment_default_per_page_question'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_form_location_question';
  $strongarm->value = 1;
  $export['comment_form_location_question'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_preview_question';
  $strongarm->value = '1';
  $export['comment_preview_question'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_question';
  $strongarm->value = '2';
  $export['comment_question'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_subject_field_question';
  $strongarm->value = 1;
  $export['comment_subject_field_question'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'default_page_manager_pages';
  $strongarm->value = array();
  $export['default_page_manager_pages'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'email_registration_login_with_username';
  $strongarm->value = 0;
  $export['email_registration_login_with_username'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'field_bundle_settings_node__question';
  $strongarm->value = array(
    'view_modes' => array(),
    'extra_fields' => array(
      'form' => array(
        'title' => array(
          'weight' => '1',
        ),
      ),
      'display' => array(),
    ),
  );
  $export['field_bundle_settings_node__question'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'formblock_show_help_question';
  $strongarm->value = 0;
  $export['formblock_show_help_question'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'hybridauth_debug';
  $strongarm->value = 0;
  $export['hybridauth_debug'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'hybridauth_destination';
  $strongarm->value = '';
  $export['hybridauth_destination'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'hybridauth_destination_error';
  $strongarm->value = '';
  $export['hybridauth_destination_error'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'hybridauth_disable_username_change';
  $strongarm->value = 1;
  $export['hybridauth_disable_username_change'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'hybridauth_display_name';
  $strongarm->value = '[user:hybridauth:firstName] [user:hybridauth:lastName]';
  $export['hybridauth_display_name'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'hybridauth_duplicate_emails';
  $strongarm->value = '1';
  $export['hybridauth_duplicate_emails'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'hybridauth_email_verification';
  $strongarm->value = '0';
  $export['hybridauth_email_verification'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'hybridauth_email_verification_body';
  $strongarm->value = '[user:name],

Thank you for registering at [site:name]. You need to confirm your e-mail address by clicking this link or copying and pasting it to your browser:

[user:one-time-login-url]

This link can only be used once to log in and activate your account.

After that, you will be able to log in at [site:login-url] using your [user:hybridauth:provider] account.

--  [site:name] team';
  $export['hybridauth_email_verification_body'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'hybridauth_email_verification_subject';
  $strongarm->value = 'Account details for [user:name] at [site:name]';
  $export['hybridauth_email_verification_subject'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'hybridauth_forms';
  $strongarm->value = array(
    'user_login' => 0,
    'user_login_block' => 0,
    'user_register_form' => 0,
    'comment_form' => 0,
  );
  $export['hybridauth_forms'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'hybridauth_override_realname';
  $strongarm->value = 0;
  $export['hybridauth_override_realname'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'hybridauth_pictures';
  $strongarm->value = 1;
  $export['hybridauth_pictures'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'hybridauth_providers';
  $strongarm->value = array(
    'Facebook' => 'Facebook',
    'Google' => 'Google',
    'AOL' => 0,
    'Foursquare' => 0,
    'LinkedIn' => 0,
    'Live' => 0,
    'MySpace' => 0,
    'OpenID' => 0,
    'Twitter' => 0,
    'Yahoo' => 0,
    'px500' => 0,
    'Disqus' => 0,
    'FamilySearch' => 0,
    'Geni' => 0,
    'GitHub' => 0,
    'Goodreads' => 0,
    'Identica' => 0,
    'Instagram' => 0,
    'LastFM' => 0,
    'Mailru' => 0,
    'Murmur' => 0,
    'MyHeritage' => 0,
    'Odnoklassniki' => 0,
    'Pixnet' => 0,
    'Plurk' => 0,
    'QQ' => 0,
    'Sina' => 0,
    'Skyrock' => 0,
    'Steam' => 0,
    'Tumblr' => 0,
    'TwitchTV' => 0,
    'Viadeo' => 0,
    'Vimeo' => 0,
    'Vkontakte' => 0,
    'Yandex' => 0,
  );
  $export['hybridauth_providers'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'hybridauth_provider_Facebook_keys_id';
  $strongarm->value = '1983722481916766';
  $export['hybridauth_provider_Facebook_keys_id'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'hybridauth_provider_Facebook_keys_secret';
  $strongarm->value = '●●●●●●●●';
  $export['hybridauth_provider_Facebook_keys_secret'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'hybridauth_provider_Facebook_scope';
  $strongarm->value = array(
    'public_profile' => 'public_profile',
    'email' => 'email',
    'user_friends' => 'user_friends',
    'user_about_me' => 'user_about_me',
    'user_birthday' => 'user_birthday',
    'user_hometown' => 'user_hometown',
    'user_website' => 'user_website',
    'manage_notifications' => 0,
    'manage_pages' => 0,
    'publish_actions' => 0,
    'publish_pages' => 0,
    'read_custom_friendlists' => 0,
    'read_insights' => 0,
    'read_mailbox' => 0,
    'read_page_mailboxes' => 0,
    'read_stream' => 0,
    'rsvp_event' => 0,
    'user_actions.books' => 0,
    'user_actions.fitness' => 0,
    'user_actions.music' => 0,
    'user_actions.news' => 0,
    'user_actions.video' => 0,
    'user_actions:{app_namespace}' => 0,
    'user_education_history' => 0,
    'user_events' => 0,
    'user_games_activity' => 0,
    'user_groups' => 0,
    'user_likes' => 0,
    'user_location' => 0,
    'user_managed_groups' => 0,
    'user_photos' => 0,
    'user_posts' => 0,
    'user_relationship_details' => 0,
    'user_relationships' => 0,
    'user_religion_politics' => 0,
    'user_status' => 0,
    'user_tagged_places' => 0,
    'user_videos' => 0,
    'user_work_history' => 0,
  );
  $export['hybridauth_provider_Facebook_scope'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'hybridauth_provider_Facebook_window_height';
  $strongarm->value = '500';
  $export['hybridauth_provider_Facebook_window_height'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'hybridauth_provider_Facebook_window_type';
  $strongarm->value = 'current';
  $export['hybridauth_provider_Facebook_window_type'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'hybridauth_provider_Facebook_window_width';
  $strongarm->value = '800';
  $export['hybridauth_provider_Facebook_window_width'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'hybridauth_provider_Google_keys_id';
  $strongarm->value = '581572021485-6sij3652l1kqg2f6ecaoofcj6pf55f6a.apps.googleusercontent.com';
  $export['hybridauth_provider_Google_keys_id'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'hybridauth_provider_Google_keys_secret';
  $strongarm->value = 'UWPWRc78xwr2H0iBJtAJtaK3';
  $export['hybridauth_provider_Google_keys_secret'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'hybridauth_provider_Google_scope';
  $strongarm->value = 'https://www.googleapis.com/auth/userinfo.profile https://www.googleapis.com/auth/userinfo.email';
  $export['hybridauth_provider_Google_scope'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'hybridauth_provider_Google_window_height';
  $strongarm->value = '500';
  $export['hybridauth_provider_Google_window_height'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'hybridauth_provider_Google_window_type';
  $strongarm->value = 'current';
  $export['hybridauth_provider_Google_window_type'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'hybridauth_provider_Google_window_width';
  $strongarm->value = '800';
  $export['hybridauth_provider_Google_window_width'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'hybridauth_proxy';
  $strongarm->value = '';
  $export['hybridauth_proxy'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'hybridauth_register';
  $strongarm->value = '0';
  $export['hybridauth_register'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'hybridauth_registration_password';
  $strongarm->value = 0;
  $export['hybridauth_registration_password'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'hybridauth_registration_username_change';
  $strongarm->value = 0;
  $export['hybridauth_registration_username_change'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'hybridauth_remove_password_fields';
  $strongarm->value = 1;
  $export['hybridauth_remove_password_fields'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'hybridauth_required_fields';
  $strongarm->value = array(
    'email' => 'email',
    'firstName' => 0,
    'lastName' => 0,
    'gender' => 0,
  );
  $export['hybridauth_required_fields'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'hybridauth_username';
  $strongarm->value = '[user:hybridauth:firstName] [user:hybridauth:lastName]';
  $export['hybridauth_username'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'menu_options_question';
  $strongarm->value = array(
    0 => 'main-menu',
  );
  $export['menu_options_question'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'menu_parent_question';
  $strongarm->value = 'main-menu:0';
  $export['menu_parent_question'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_options_question';
  $strongarm->value = array(
    0 => 'status',
  );
  $export['node_options_question'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_preview_question';
  $strongarm->value = '1';
  $export['node_preview_question'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_submitted_question';
  $strongarm->value = 1;
  $export['node_submitted_question'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'recaptcha_noscript';
  $strongarm->value = 0;
  $export['recaptcha_noscript'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'recaptcha_secret_key';
  $strongarm->value = '6Lc0PzMUAAAAAF7gnEfNcHuefNc-T0Qm81vCec3J';
  $export['recaptcha_secret_key'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'recaptcha_site_key';
  $strongarm->value = '6Lc0PzMUAAAAAN6t_LCaRVM-rtEPHcblfZcOVMZH';
  $export['recaptcha_site_key'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'recaptcha_size';
  $strongarm->value = '';
  $export['recaptcha_size'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'recaptcha_tabindex';
  $strongarm->value = '0';
  $export['recaptcha_tabindex'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'recaptcha_theme';
  $strongarm->value = 'light';
  $export['recaptcha_theme'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'recaptcha_type';
  $strongarm->value = 'image';
  $export['recaptcha_type'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'save_continue_question';
  $strongarm->value = 'Save and add fields';
  $export['save_continue_question'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'theme_default';
  $strongarm->value = 'quora_theme';
  $export['theme_default'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'theme_quora_theme_settings';
  $strongarm->value = array(
    'toggle_logo' => 0,
    'toggle_name' => 0,
    'toggle_slogan' => 0,
    'toggle_node_user_picture' => 1,
    'toggle_comment_user_picture' => 1,
    'toggle_favicon' => 1,
    'toggle_main_menu' => 0,
    'toggle_secondary_menu' => 1,
    'default_logo' => 1,
    'logo_path' => '',
    'logo_upload' => '',
    'default_favicon' => 1,
    'favicon_path' => '',
    'favicon_upload' => '',
    'quora_theme_tabs' => 1,
    'quora_theme_breadcrumb' => 'yes',
    'quora_theme_breadcrumb_separator' => '»',
    'quora_theme_breadcrumb_home' => 1,
    'quora_theme_breadcrumb_trailing' => 0,
    'quora_theme_breadcrumb_title' => 0,
    'quora_theme_ie_enabled' => 0,
    'quora_theme_ie_enabled_versions' => array(
      'ie8' => 0,
      'ie9' => 0,
    ),
    'clear_registry' => 1,
  );
  $export['theme_quora_theme_settings'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'theme_seven_settings';
  $strongarm->value = array(
    'default_logo' => 1,
    'logo_path' => '',
    'default_favicon' => 1,
    'favicon_path' => '',
    'favicon_mimetype' => 'image/vnd.microsoft.icon',
    'toggle_logo' => 1,
    'toggle_favicon' => 1,
    'toggle_name' => 1,
    'toggle_slogan' => 1,
    'toggle_node_user_picture' => 1,
    'toggle_comment_user_picture' => 1,
    'toggle_comment_user_verification' => 1,
    'toggle_main_menu' => 1,
    'toggle_secondary_menu' => 1,
    'shortcut_module_link' => '1',
    'logo' => 'http://local.quora.com/themes/seven/logo.png',
    'favicon' => 'http://local.quora.com/misc/favicon.ico',
    'jquery_update_jquery_version' => 'default',
  );
  $export['theme_seven_settings'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'update_last_check';
  $strongarm->value = 1509168155;
  $export['update_last_check'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'update_notify_emails';
  $strongarm->value = array(
    0 => 'pranavaeer73@gmail.com',
  );
  $export['update_notify_emails'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'user_admin_role';
  $strongarm->value = '5';
  $export['user_admin_role'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'user_cancel_method';
  $strongarm->value = 'user_cancel_block';
  $export['user_cancel_method'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'user_email_verification';
  $strongarm->value = FALSE;
  $export['user_email_verification'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'user_mail_cancel_confirm_body';
  $strongarm->value = '[user:name],

A request to cancel your account has been made at [site:name].

You may now cancel your account on [site:url-brief] by clicking this link or copying and pasting it into your browser:

[user:cancel-url]

NOTE: The cancellation of your account is not reversible.

This link expires in one day and nothing will happen if it is not used.

--  [site:name] team';
  $export['user_mail_cancel_confirm_body'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'user_mail_cancel_confirm_subject';
  $strongarm->value = 'Account cancellation request for [user:name] at [site:name]';
  $export['user_mail_cancel_confirm_subject'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'user_mail_password_reset_body';
  $strongarm->value = '[user:name],

A request to reset the password for your account has been made at [site:name].

You may now log in by clicking this link or copying and pasting it to your browser:

[user:one-time-login-url]

This link can only be used once to log in and will lead you to a page where you can set your password. It expires after one day and nothing will happen if it\'s not used.

--  [site:name] team';
  $export['user_mail_password_reset_body'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'user_mail_password_reset_subject';
  $strongarm->value = 'Replacement login information for [user:name] at [site:name]';
  $export['user_mail_password_reset_subject'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'user_mail_register_admin_created_body';
  $strongarm->value = '[user:name],

A site administrator at [site:name] has created an account for you. You may now log in by clicking this link or copying and pasting it to your browser:

[user:one-time-login-url]

This link can only be used once to log in and will lead you to a page where you can set your password.

After setting your password, you will be able to log in at [site:login-url] in the future using:

username: [user:name]
password: Your password

--  [site:name] team';
  $export['user_mail_register_admin_created_body'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'user_mail_register_admin_created_subject';
  $strongarm->value = 'An administrator created an account for you at [site:name]';
  $export['user_mail_register_admin_created_subject'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'user_mail_register_no_approval_required_body';
  $strongarm->value = '[user:name],

Thank you for registering at [site:name]. You may now log in by clicking this link or copying and pasting it to your browser:

[user:one-time-login-url]

This link can only be used once to log in and will lead you to a page where you can set your password.

After setting your password, you will be able to log in at [site:login-url] in the future using:

username: [user:name]
password: Your password

--  [site:name] team';
  $export['user_mail_register_no_approval_required_body'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'user_mail_register_no_approval_required_notify';
  $strongarm->value = FALSE;
  $export['user_mail_register_no_approval_required_notify'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'user_mail_register_no_approval_required_subject';
  $strongarm->value = 'Account details for [user:name] at [site:name]';
  $export['user_mail_register_no_approval_required_subject'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'user_mail_register_pending_approval_body';
  $strongarm->value = '[user:name],

Thank you for registering at [site:name]. Your application for an account is currently pending approval. Once it has been approved, you will receive another e-mail containing information about how to log in, set your password, and other details.


--  [site:name] team';
  $export['user_mail_register_pending_approval_body'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'user_mail_register_pending_approval_notify';
  $strongarm->value = FALSE;
  $export['user_mail_register_pending_approval_notify'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'user_mail_register_pending_approval_subject';
  $strongarm->value = 'Account details for [user:name] at [site:name] (pending admin approval)';
  $export['user_mail_register_pending_approval_subject'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'user_mail_status_activated_body';
  $strongarm->value = '[user:name],

Your account at [site:name] has been activated.

You will be able to log in to [site:login-url] in the future using:

username: [user:name]
password: your password.

-- [site:name] team';
  $export['user_mail_status_activated_body'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'user_mail_status_activated_notify';
  $strongarm->value = 1;
  $export['user_mail_status_activated_notify'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'user_mail_status_activated_subject';
  $strongarm->value = 'Account details for [user:name] at [site:name]';
  $export['user_mail_status_activated_subject'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'user_mail_status_blocked_body';
  $strongarm->value = '[user:name],

Your account on [site:name] has been blocked.

--  [site:name] team';
  $export['user_mail_status_blocked_body'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'user_mail_status_blocked_notify';
  $strongarm->value = 0;
  $export['user_mail_status_blocked_notify'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'user_mail_status_blocked_subject';
  $strongarm->value = 'Account details for [user:name] at [site:name] (blocked)';
  $export['user_mail_status_blocked_subject'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'user_mail_status_canceled_body';
  $strongarm->value = '[user:name],

Your account on [site:name] has been canceled.

--  [site:name] team';
  $export['user_mail_status_canceled_body'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'user_mail_status_canceled_notify';
  $strongarm->value = 0;
  $export['user_mail_status_canceled_notify'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'user_mail_status_canceled_subject';
  $strongarm->value = 'Account details for [user:name] at [site:name] (canceled)';
  $export['user_mail_status_canceled_subject'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'user_pages_user_user_register_disabled';
  $strongarm->value = FALSE;
  $export['user_pages_user_user_register_disabled'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'user_pictures';
  $strongarm->value = '1';
  $export['user_pictures'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'user_picture_default';
  $strongarm->value = '';
  $export['user_picture_default'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'user_picture_dimensions';
  $strongarm->value = '1024x1024';
  $export['user_picture_dimensions'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'user_picture_file_size';
  $strongarm->value = '800';
  $export['user_picture_file_size'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'user_picture_guidelines';
  $strongarm->value = '';
  $export['user_picture_guidelines'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'user_picture_path';
  $strongarm->value = 'pictures';
  $export['user_picture_path'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'user_picture_style';
  $strongarm->value = 'thumbnail';
  $export['user_picture_style'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'user_register';
  $strongarm->value = 2;
  $export['user_register'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'user_registrationpassword_registration';
  $strongarm->value = 'with-pass';
  $export['user_registrationpassword_registration'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'user_registrationpassword_user_mail_status_activated_body_original';
  $strongarm->value = '[user:name],

Your account at [site:name] has been activated.

You may now log in by clicking this link or copying and pasting it into your browser:

[user:one-time-login-url]

This link can only be used once to log in and will lead you to a page where you can set your password.

After setting your password, you will be able to log in at [site:login-url] in the future using:

username: [user:name]
password: Your password

--  [site:name] team';
  $export['user_registrationpassword_user_mail_status_activated_body_original'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'user_registrationpassword_user_mail_status_activated_subject_original';
  $strongarm->value = 'Account details for [user:name] at [site:name] (approved)';
  $export['user_registrationpassword_user_mail_status_activated_subject_original'] = $strongarm;

  return $export;
}
