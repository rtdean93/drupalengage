<?php
/**
 * @file
 * ccb_groups.field_group.inc
 */

/**
 * Implements hook_field_group_info().
 */
function ccb_groups_field_group_info() {
  $export = array();

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_info|node|ccb_group|default';
  $field_group->group_name = 'group_info';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'ccb_group';
  $field_group->mode = 'default';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Information',
    'weight' => '4',
    'children' => array(
      0 => 'field_leader',
      1 => 'field_grouptype',
      2 => 'field_department',
      3 => 'field_leaderemail',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'classes' => '',
      ),
    ),
  );
  $export['group_info|node|ccb_group|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_when|node|ccb_group|default';
  $field_group->group_name = 'group_when';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'ccb_group';
  $field_group->mode = 'default';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'When',
    'weight' => '3',
    'children' => array(
      0 => 'field_meetingtime',
      1 => 'field_meetingday1',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'classes' => '',
      ),
    ),
  );
  $export['group_when|node|ccb_group|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_when|node|ccb_group|teaser';
  $field_group->group_name = 'group_when';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'ccb_group';
  $field_group->mode = 'teaser';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'When',
    'weight' => '2',
    'children' => array(
      0 => 'field_meetingtime',
      1 => 'field_meetingday1',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'When',
      'instance_settings' => array(
        'classes' => '',
        'description' => '',
        'effect' => 'blind',
        'speed' => 'fast',
      ),
      'formatter' => 'collapsible',
    ),
  );
  $export['group_when|node|ccb_group|teaser'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_where|node|ccb_group|default';
  $field_group->group_name = 'group_where';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'ccb_group';
  $field_group->mode = 'default';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Where',
    'weight' => '5',
    'children' => array(
      0 => 'field_loc_name',
      1 => 'field_area',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'label' => 'Where',
      'instance_settings' => array(
        'classes' => '',
        'description' => '',
      ),
      'formatter' => 'collapsible',
    ),
  );
  $export['group_where|node|ccb_group|default'] = $field_group;

  return $export;
}
