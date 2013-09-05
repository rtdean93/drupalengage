<?php
/**
 * @file
 * ccb_groups.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function ccb_groups_ctools_plugin_api() {
  list($module, $api) = func_get_args();
  if ($module == "context" && $api == "context") {
    return array("version" => "3");
  }
  list($module, $api) = func_get_args();
  if ($module == "feeds" && $api == "feeds_importer_default") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function ccb_groups_views_api() {
  return array("version" => "3.0");
}

/**
 * Implements hook_node_info().
 */
function ccb_groups_node_info() {
  $items = array(
    'ccb_group' => array(
      'name' => t('CCB Group'),
      'base' => 'node_content',
      'description' => t('This content type is being used for automatically importing content from Church Community Builder Groups.'),
      'has_title' => '1',
      'title_label' => t('Name'),
      'help' => '',
    ),
  );
  return $items;
}
