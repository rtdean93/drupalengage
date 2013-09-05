<?php
/**
 * @file
 * ccb_groups.features.taxonomy.inc
 */

/**
 * Implements hook_taxonomy_default_vocabularies().
 */
function ccb_groups_taxonomy_default_vocabularies() {
  return array(
    'area' => array(
      'name' => 'Area',
      'machine_name' => 'area',
      'description' => '',
      'hierarchy' => '0',
      'module' => 'taxonomy',
      'weight' => '0',
    ),
    'childcare' => array(
      'name' => 'Childcare',
      'machine_name' => 'childcare',
      'description' => '',
      'hierarchy' => '0',
      'module' => 'taxonomy',
      'weight' => '0',
    ),
    'departments' => array(
      'name' => 'Departments',
      'machine_name' => 'departments',
      'description' => '',
      'hierarchy' => '1',
      'module' => 'taxonomy',
      'weight' => '0',
    ),
    'group_types' => array(
      'name' => 'Group Types',
      'machine_name' => 'group_types',
      'description' => '',
      'hierarchy' => '0',
      'module' => 'taxonomy',
      'weight' => '0',
    ),
    'meeting_day' => array(
      'name' => 'Meeting Day',
      'machine_name' => 'meeting_day',
      'description' => '',
      'hierarchy' => '0',
      'module' => 'taxonomy',
      'weight' => '0',
    ),
  );
}
