<?php
/**
 * @file
 * mysite_views_and_blocks.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function mysite_views_and_blocks_user_default_permissions() {
  $permissions = array();

  // Exported permission: 'search content'.
  $permissions['search content'] = array(
    'name' => 'search content',
    'roles' => array(
      'administrator' => 'administrator',
      'anonymous user' => 'anonymous user',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'search',
  );

  return $permissions;
}
