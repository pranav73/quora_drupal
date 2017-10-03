<?php
/**
 * @file
 * quora_user.features.user_role.inc
 */

/**
 * Implements hook_user_default_roles().
 */
function quora_user_user_default_roles() {
  $roles = array();

  // Exported role: editor.
  $roles['editor'] = array(
    'name' => 'editor',
    'weight' => 3,
  );

  // Exported role: manager.
  $roles['manager'] = array(
    'name' => 'manager',
    'weight' => 4,
  );

  return $roles;
}
