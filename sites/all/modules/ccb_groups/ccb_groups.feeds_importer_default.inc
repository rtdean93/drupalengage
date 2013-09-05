<?php
/**
 * @file
 * ccb_groups.feeds_importer_default.inc
 */

/**
 * Implements hook_feeds_importer_default().
 */
function ccb_groups_feeds_importer_default() {
  $export = array();

  $feeds_importer = new stdClass();
  $feeds_importer->disabled = FALSE; /* Edit this to true to make a default feeds_importer disabled initially */
  $feeds_importer->api_version = 1;
  $feeds_importer->id = 'ccbgroups';
  $feeds_importer->config = array(
    'name' => 'Groups',
    'description' => 'CCB Groups',
    'fetcher' => array(
      'plugin_key' => 'FeedsHTTPFetcher',
      'config' => array(
        'auto_detect_feeds' => FALSE,
        'use_pubsubhubbub' => FALSE,
        'designated_hub' => '',
      ),
    ),
    'parser' => array(
      'plugin_key' => 'FeedsQueryPathParser',
      'config' => array(
        'context' => 'group',
        'sources' => array(
          'querypathparser:0' => 'group',
          'querypathparser:1' => 'name:first',
          'querypathparser:2' => 'description',
          'querypathparser:5' => 'meeting_time',
          'querypathparser:9' => 'full_name:first',
          'querypathparser:10' => 'image',
          'querypathparser:11' => 'url:last',
          'querypathparser:18' => 'listed',
          'querypathparser:19' => 'public_search_listed',
          'querypathparser:22' => 'group_type',
          'querypathparser:23' => 'department',
          'querypathparser:24' => 'area',
          'querypathparser:25' => 'meeting_day',
          'querypathparser:26' => 'childcare_provided',
          'querypathparser:27' => 'area',
          'querypathparser:28' => 'street_address',
          'querypathparser:29' => 'city',
          'querypathparser:30' => 'state',
          'querypathparser:31' => 'zip',
          'querypathparser:32' => 'inactive',
          'querypathparser:33' => 'email',
        ),
        'debug' => array(
          'options' => array(
            'context' => 0,
            'querypathparser:0' => 0,
            'querypathparser:1' => 0,
            'querypathparser:2' => 0,
            'querypathparser:5' => 0,
            'querypathparser:9' => 0,
            'querypathparser:10' => 0,
            'querypathparser:11' => 0,
            'querypathparser:18' => 0,
            'querypathparser:19' => 0,
            'querypathparser:22' => 0,
            'querypathparser:23' => 0,
            'querypathparser:24' => 0,
            'querypathparser:25' => 0,
            'querypathparser:26' => 0,
            'querypathparser:27' => 0,
            'querypathparser:28' => 0,
            'querypathparser:29' => 0,
            'querypathparser:30' => 0,
            'querypathparser:31' => 0,
            'querypathparser:32' => 0,
            'querypathparser:33' => 0,
          ),
        ),
        'attrs' => array(
          'querypathparser:0' => 'id',
          'querypathparser:1' => '',
          'querypathparser:2' => '',
          'querypathparser:5' => '',
          'querypathparser:9' => '',
          'querypathparser:10' => '',
          'querypathparser:11' => '',
          'querypathparser:18' => '',
          'querypathparser:19' => '',
          'querypathparser:22' => '',
          'querypathparser:23' => '',
          'querypathparser:24' => '',
          'querypathparser:25' => '',
          'querypathparser:26' => '',
          'querypathparser:27' => '',
          'querypathparser:28' => '',
          'querypathparser:29' => '',
          'querypathparser:30' => '',
          'querypathparser:31' => '',
          'querypathparser:32' => '',
          'querypathparser:33' => '',
        ),
        'rawXML' => array(),
      ),
    ),
    'processor' => array(
      'plugin_key' => 'FeedsNodeProcessor',
      'config' => array(
        'content_type' => 'ccb_group',
        'update_existing' => '2',
        'expire' => '-1',
        'mappings' => array(
          0 => array(
            'source' => 'querypathparser:0',
            'target' => 'guid',
            'unique' => 1,
          ),
          1 => array(
            'source' => 'querypathparser:1',
            'target' => 'title',
            'unique' => FALSE,
          ),
          2 => array(
            'source' => 'querypathparser:2',
            'target' => 'body',
            'unique' => FALSE,
          ),
          3 => array(
            'source' => 'querypathparser:5',
            'target' => 'field_meetingtime',
            'unique' => FALSE,
          ),
          4 => array(
            'source' => 'querypathparser:9',
            'target' => 'field_leader',
            'unique' => FALSE,
          ),
          5 => array(
            'source' => 'querypathparser:10',
            'target' => 'field_image',
            'unique' => FALSE,
          ),
          6 => array(
            'source' => 'querypathparser:18',
            'target' => 'field_listed_ccb',
            'unique' => FALSE,
          ),
          7 => array(
            'source' => 'querypathparser:19',
            'target' => 'field_public_search_listed',
            'unique' => FALSE,
          ),
          8 => array(
            'source' => 'querypathparser:22',
            'target' => 'field_grouptype',
            'unique' => FALSE,
          ),
          9 => array(
            'source' => 'querypathparser:23',
            'target' => 'field_department',
            'unique' => FALSE,
          ),
          10 => array(
            'source' => 'querypathparser:24',
            'target' => 'field_area',
            'unique' => FALSE,
          ),
          11 => array(
            'source' => 'querypathparser:25',
            'target' => 'field_meetingday1',
            'unique' => FALSE,
          ),
          12 => array(
            'source' => 'querypathparser:26',
            'target' => 'field_childcare1',
            'unique' => FALSE,
          ),
          13 => array(
            'source' => 'querypathparser:27',
            'target' => 'field_loc_name:name',
            'unique' => FALSE,
          ),
          14 => array(
            'source' => 'querypathparser:28',
            'target' => 'field_loc_name:street',
            'unique' => FALSE,
          ),
          15 => array(
            'source' => 'querypathparser:29',
            'target' => 'field_loc_name:city',
            'unique' => FALSE,
          ),
          16 => array(
            'source' => 'querypathparser:30',
            'target' => 'field_loc_name:province',
            'unique' => FALSE,
          ),
          17 => array(
            'source' => 'querypathparser:31',
            'target' => 'field_loc_name:postal_code',
            'unique' => FALSE,
          ),
          18 => array(
            'source' => 'querypathparser:32',
            'target' => 'field_inactive',
            'unique' => FALSE,
          ),
          19 => array(
            'source' => 'querypathparser:33',
            'target' => 'field_leaderemail',
            'unique' => FALSE,
          ),
        ),
        'input_format' => 'html',
        'author' => 0,
      ),
    ),
    'content_type' => 'feed',
    'update' => 0,
    'import_period' => '-1',
    'expire_period' => 3600,
    'import_on_create' => 0,
    'process_in_background' => 0,
  );
  $export['ccbgroups'] = $feeds_importer;

  return $export;
}
