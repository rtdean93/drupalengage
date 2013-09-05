<?php
/**
 * @file
 * ccb_groups.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function ccb_groups_views_default_views() {
  $export = array();

  $view = new view;
  $view->name = 'CCBGroups_defaults_feed_items';
  $view->description = 'Show items for a CCB Group node.';
  $view->tag = 'Groups';
  $view->base_table = 'node';
  $view->human_name = 'Church Community Builder / Groups';
  $view->core = 0;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Defaults */
  $handler = $view->new_display('default', 'Defaults', 'default');
  $handler->display->display_options['title'] = 'Find a Community Group';
  $handler->display->display_options['access']['type'] = 'none';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['query']['options']['query_comment'] = FALSE;
  $handler->display->display_options['exposed_form']['type'] = 'better_exposed_filters';
  $handler->display->display_options['exposed_form']['options']['submit_button'] = 'Search';
  $handler->display->display_options['exposed_form']['options']['reset_button'] = TRUE;
  $handler->display->display_options['exposed_form']['options']['reset_button_label'] = 'Reset | Show All Groups';
  $handler->display->display_options['exposed_form']['options']['autosubmit'] = 1;
  $handler->display->display_options['exposed_form']['options']['autosubmit_hide'] = 0;
  $handler->display->display_options['exposed_form']['options']['bef'] = array(
    'field_department_tid' => array(
      'bef_format' => 'default',
      'more_options' => array(
        'bef_select_all_none' => 0,
        'bef_collapsible' => 0,
        'bef_filter_description' => '',
      ),
    ),
    'field_meetingday1_tid' => array(
      'bef_format' => 'default',
      'more_options' => array(
        'bef_select_all_none' => 0,
        'bef_collapsible' => 0,
        'bef_filter_description' => '',
      ),
    ),
    'body_value' => array(
      'more_options' => array(
        'bef_filter_description' => 'Example - marriage, etc',
      ),
    ),
    'field_leader_value' => array(
      'more_options' => array(
        'bef_filter_description' => '',
      ),
    ),
  );
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '25';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['pager']['options']['expose']['items_per_page_options_all'] = 0;
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['style_options']['grouping'] = '';
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['row_options']['inline'] = array(
    'field_image' => 'field_image',
    'title' => 'title',
  );
  $handler->display->display_options['row_options']['hide_empty'] = 1;
  $handler->display->display_options['row_options']['default_field_elements'] = 1;
  /* Header: Global: Text area */
  $handler->display->display_options['header']['area']['id'] = 'area';
  $handler->display->display_options['header']['area']['table'] = 'views';
  $handler->display->display_options['header']['area']['field'] = 'area';
  $handler->display->display_options['header']['area']['empty'] = FALSE;
  /* No results behavior: Global: Text area */
  $handler->display->display_options['empty']['text']['id'] = 'area';
  $handler->display->display_options['empty']['text']['table'] = 'views';
  $handler->display->display_options['empty']['text']['field'] = 'area';
  $handler->display->display_options['empty']['text']['empty'] = FALSE;
  $handler->display->display_options['empty']['text']['content'] = 'There are no items for this feed at the moment.';
  $handler->display->display_options['empty']['text']['format'] = '1';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = 'GROUP NAME (Click for details)';
  $handler->display->display_options['fields']['title']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['title']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['title']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['title']['alter']['external'] = 0;
  $handler->display->display_options['fields']['title']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['title']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['title']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['title']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['title']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['title']['alter']['html'] = 0;
  $handler->display->display_options['fields']['title']['element_type'] = 'h4';
  $handler->display->display_options['fields']['title']['element_label_colon'] = 0;
  $handler->display->display_options['fields']['title']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['title']['hide_empty'] = 0;
  $handler->display->display_options['fields']['title']['empty_zero'] = 0;
  $handler->display->display_options['fields']['title']['hide_alter_empty'] = 0;
  $handler->display->display_options['fields']['title']['link_to_node'] = 1;
  /* Field: Content: Image */
  $handler->display->display_options['fields']['field_image']['id'] = 'field_image';
  $handler->display->display_options['fields']['field_image']['table'] = 'field_data_field_image';
  $handler->display->display_options['fields']['field_image']['field'] = 'field_image';
  $handler->display->display_options['fields']['field_image']['label'] = '';
  $handler->display->display_options['fields']['field_image']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_image']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_image']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_image']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_image']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_image']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_image']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_image']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_image']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_image']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_image']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_image']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_image']['element_wrapper_type'] = 'div';
  $handler->display->display_options['fields']['field_image']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_image']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_image']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_image']['hide_alter_empty'] = 0;
  $handler->display->display_options['fields']['field_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_image']['settings'] = array(
    'image_style' => 'medium',
    'image_link' => 'content',
  );
  $handler->display->display_options['fields']['field_image']['group_column'] = 'fid';
  $handler->display->display_options['fields']['field_image']['field_api_classes'] = 0;
  /* Field: Content: Leader */
  $handler->display->display_options['fields']['field_leader']['id'] = 'field_leader';
  $handler->display->display_options['fields']['field_leader']['table'] = 'field_data_field_leader';
  $handler->display->display_options['fields']['field_leader']['field'] = 'field_leader';
  $handler->display->display_options['fields']['field_leader']['label'] = 'Led by';
  $handler->display->display_options['fields']['field_leader']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_leader']['alter']['text'] = '<ul>Leaders: [field_leader]</ul>';
  $handler->display->display_options['fields']['field_leader']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_leader']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_leader']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_leader']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_leader']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_leader']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_leader']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_leader']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_leader']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_leader']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_leader']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_leader']['element_label_type'] = 'strong';
  $handler->display->display_options['fields']['field_leader']['element_label_colon'] = 1;
  $handler->display->display_options['fields']['field_leader']['element_wrapper_type'] = 'div';
  $handler->display->display_options['fields']['field_leader']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_leader']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_leader']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_leader']['hide_alter_empty'] = 0;
  $handler->display->display_options['fields']['field_leader']['group_rows'] = 1;
  $handler->display->display_options['fields']['field_leader']['delta_offset'] = '0';
  $handler->display->display_options['fields']['field_leader']['delta_reversed'] = 0;
  $handler->display->display_options['fields']['field_leader']['field_api_classes'] = 0;
  /* Field: Content: Meeting Day */
  $handler->display->display_options['fields']['field_meetingday1']['id'] = 'field_meetingday1';
  $handler->display->display_options['fields']['field_meetingday1']['table'] = 'field_data_field_meetingday1';
  $handler->display->display_options['fields']['field_meetingday1']['field'] = 'field_meetingday1';
  $handler->display->display_options['fields']['field_meetingday1']['label'] = 'When';
  $handler->display->display_options['fields']['field_meetingday1']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_meetingday1']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_meetingday1']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_meetingday1']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_meetingday1']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_meetingday1']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_meetingday1']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_meetingday1']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_meetingday1']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_meetingday1']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_meetingday1']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_meetingday1']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_meetingday1']['element_label_type'] = 'strong';
  $handler->display->display_options['fields']['field_meetingday1']['element_label_colon'] = 1;
  $handler->display->display_options['fields']['field_meetingday1']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_meetingday1']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_meetingday1']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_meetingday1']['hide_alter_empty'] = 0;
  $handler->display->display_options['fields']['field_meetingday1']['type'] = 'taxonomy_term_reference_plain';
  $handler->display->display_options['fields']['field_meetingday1']['field_api_classes'] = 0;
  /* Field: Content: Meeting time */
  $handler->display->display_options['fields']['field_meetingtime']['id'] = 'field_meetingtime';
  $handler->display->display_options['fields']['field_meetingtime']['table'] = 'field_data_field_meetingtime';
  $handler->display->display_options['fields']['field_meetingtime']['field'] = 'field_meetingtime';
  $handler->display->display_options['fields']['field_meetingtime']['label'] = '';
  $handler->display->display_options['fields']['field_meetingtime']['alter']['alter_text'] = 1;
  $handler->display->display_options['fields']['field_meetingtime']['alter']['text'] = '| [field_meetingtime]';
  $handler->display->display_options['fields']['field_meetingtime']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_meetingtime']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_meetingtime']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_meetingtime']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_meetingtime']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_meetingtime']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_meetingtime']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_meetingtime']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_meetingtime']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_meetingtime']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_meetingtime']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_meetingtime']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_meetingtime']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_meetingtime']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_meetingtime']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_meetingtime']['hide_alter_empty'] = 0;
  $handler->display->display_options['fields']['field_meetingtime']['field_api_classes'] = 0;
  /* Field: Content: Area */
  $handler->display->display_options['fields']['field_area']['id'] = 'field_area';
  $handler->display->display_options['fields']['field_area']['table'] = 'field_data_field_area';
  $handler->display->display_options['fields']['field_area']['field'] = 'field_area';
  $handler->display->display_options['fields']['field_area']['label'] = 'Where';
  $handler->display->display_options['fields']['field_area']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_area']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_area']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_area']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_area']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_area']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_area']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_area']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_area']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_area']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_area']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_area']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_area']['element_label_type'] = 'strong';
  $handler->display->display_options['fields']['field_area']['element_label_colon'] = 1;
  $handler->display->display_options['fields']['field_area']['element_wrapper_type'] = 'div';
  $handler->display->display_options['fields']['field_area']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_area']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_area']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_area']['hide_alter_empty'] = 0;
  $handler->display->display_options['fields']['field_area']['type'] = 'taxonomy_term_reference_plain';
  $handler->display->display_options['fields']['field_area']['field_api_classes'] = 0;
  /* Field: Content: Register Online */
  $handler->display->display_options['fields']['field_registrationurl']['id'] = 'field_registrationurl';
  $handler->display->display_options['fields']['field_registrationurl']['table'] = 'field_data_field_registrationurl';
  $handler->display->display_options['fields']['field_registrationurl']['field'] = 'field_registrationurl';
  $handler->display->display_options['fields']['field_registrationurl']['label'] = '';
  $handler->display->display_options['fields']['field_registrationurl']['alter']['alter_text'] = 1;
  $handler->display->display_options['fields']['field_registrationurl']['alter']['text'] = '<img src="sites/all/modules/ccbapi/images/register_btn.jpg" alt="Register" />';
  $handler->display->display_options['fields']['field_registrationurl']['alter']['make_link'] = 1;
  $handler->display->display_options['fields']['field_registrationurl']['alter']['path'] = '[field_registrationurl]&width=660&height=760&iframe=true';
  $handler->display->display_options['fields']['field_registrationurl']['alter']['absolute'] = 1;
  $handler->display->display_options['fields']['field_registrationurl']['alter']['external'] = 1;
  $handler->display->display_options['fields']['field_registrationurl']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_registrationurl']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_registrationurl']['alter']['alt'] = 'Register for [title]';
  $handler->display->display_options['fields']['field_registrationurl']['alter']['target'] = '_blank';
  $handler->display->display_options['fields']['field_registrationurl']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_registrationurl']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_registrationurl']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_registrationurl']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_registrationurl']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_registrationurl']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_registrationurl']['element_type'] = 'div';
  $handler->display->display_options['fields']['field_registrationurl']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_registrationurl']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_registrationurl']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_registrationurl']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_registrationurl']['hide_alter_empty'] = 0;
  $handler->display->display_options['fields']['field_registrationurl']['click_sort_column'] = 'url';
  $handler->display->display_options['fields']['field_registrationurl']['type'] = 'link_plain';
  $handler->display->display_options['fields']['field_registrationurl']['group_column'] = 'url';
  $handler->display->display_options['fields']['field_registrationurl']['group_rows'] = 0;
  $handler->display->display_options['fields']['field_registrationurl']['delta_limit'] = '1';
  $handler->display->display_options['fields']['field_registrationurl']['delta_offset'] = '0';
  $handler->display->display_options['fields']['field_registrationurl']['delta_reversed'] = 1;
  $handler->display->display_options['fields']['field_registrationurl']['field_api_classes'] = 0;
  /* Field: Global: View result counter */
  $handler->display->display_options['fields']['counter']['id'] = 'counter';
  $handler->display->display_options['fields']['counter']['table'] = 'views';
  $handler->display->display_options['fields']['counter']['field'] = 'counter';
  /* Field: Content: Description */
  $handler->display->display_options['fields']['field_feed_item_description']['id'] = 'field_feed_item_description';
  $handler->display->display_options['fields']['field_feed_item_description']['table'] = 'field_data_field_feed_item_description';
  $handler->display->display_options['fields']['field_feed_item_description']['field'] = 'field_feed_item_description';
  /* Field: Content: Body */
  $handler->display->display_options['fields']['body']['id'] = 'body';
  $handler->display->display_options['fields']['body']['table'] = 'field_data_body';
  $handler->display->display_options['fields']['body']['field'] = 'body';
  $handler->display->display_options['fields']['body']['label'] = '';
  $handler->display->display_options['fields']['body']['exclude'] = TRUE;
  $handler->display->display_options['fields']['body']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['body']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['body']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['body']['alter']['external'] = 0;
  $handler->display->display_options['fields']['body']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['body']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['body']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['body']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['body']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['body']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['body']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['body']['alter']['html'] = 0;
  $handler->display->display_options['fields']['body']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['body']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['body']['hide_empty'] = 0;
  $handler->display->display_options['fields']['body']['empty_zero'] = 0;
  $handler->display->display_options['fields']['body']['hide_alter_empty'] = 0;
  $handler->display->display_options['fields']['body']['field_api_classes'] = 0;
  /* Sort criterion: Content: Sticky */
  $handler->display->display_options['sorts']['sticky']['id'] = 'sticky';
  $handler->display->display_options['sorts']['sticky']['table'] = 'node';
  $handler->display->display_options['sorts']['sticky']['field'] = 'sticky';
  $handler->display->display_options['sorts']['sticky']['order'] = 'DESC';
  /* Sort criterion: Content: Title */
  $handler->display->display_options['sorts']['title']['id'] = 'title';
  $handler->display->display_options['sorts']['title']['table'] = 'node';
  $handler->display->display_options['sorts']['title']['field'] = 'title';
  /* Sort criterion: Content: Meeting Day (field_meetingday) */
  $handler->display->display_options['sorts']['field_meetingday_value']['id'] = 'field_meetingday_value';
  $handler->display->display_options['sorts']['field_meetingday_value']['table'] = 'field_data_field_meetingday';
  $handler->display->display_options['sorts']['field_meetingday_value']['field'] = 'field_meetingday_value';
  /* Sort criterion: Content: Meeting time (field_meetingtime) */
  $handler->display->display_options['sorts']['field_meetingtime_value']['id'] = 'field_meetingtime_value';
  $handler->display->display_options['sorts']['field_meetingtime_value']['table'] = 'field_data_field_meetingtime';
  $handler->display->display_options['sorts']['field_meetingtime_value']['field'] = 'field_meetingtime_value';
  $handler->display->display_options['filter_groups']['groups'] = array(
    1 => 'OR',
    2 => 'AND',
  );
  /* Filter criterion: Search: Search Terms */
  $handler->display->display_options['filters']['keys']['id'] = 'keys';
  $handler->display->display_options['filters']['keys']['table'] = 'search_index';
  $handler->display->display_options['filters']['keys']['field'] = 'keys';
  $handler->display->display_options['filters']['keys']['group'] = 1;
  $handler->display->display_options['filters']['keys']['exposed'] = TRUE;
  $handler->display->display_options['filters']['keys']['expose']['operator_id'] = 'keys_op';
  $handler->display->display_options['filters']['keys']['expose']['label'] = 'Search';
  $handler->display->display_options['filters']['keys']['expose']['operator'] = 'keys_op';
  $handler->display->display_options['filters']['keys']['expose']['identifier'] = 'groupsearch';
  $handler->display->display_options['filters']['keys']['expose']['multiple'] = FALSE;
  /* Filter criterion: Department */
  $handler->display->display_options['filters']['field_department_tid']['id'] = 'field_department_tid';
  $handler->display->display_options['filters']['field_department_tid']['table'] = 'field_data_field_department';
  $handler->display->display_options['filters']['field_department_tid']['field'] = 'field_department_tid';
  $handler->display->display_options['filters']['field_department_tid']['ui_name'] = 'Department';
  $handler->display->display_options['filters']['field_department_tid']['value'] = array(
    32 => '32',
    81 => '81',
    80 => '80',
    50 => '50',
    84 => '84',
    83 => '83',
    93 => '93',
    35 => '35',
    92 => '92',
    85 => '85',
  );
  $handler->display->display_options['filters']['field_department_tid']['group'] = 1;
  $handler->display->display_options['filters']['field_department_tid']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_department_tid']['expose']['operator_id'] = 'field_department_tid_op';
  $handler->display->display_options['filters']['field_department_tid']['expose']['label'] = 'Ministry Department:';
  $handler->display->display_options['filters']['field_department_tid']['expose']['operator'] = 'field_department_tid_op';
  $handler->display->display_options['filters']['field_department_tid']['expose']['identifier'] = 'dept';
  $handler->display->display_options['filters']['field_department_tid']['expose']['multiple'] = 1;
  $handler->display->display_options['filters']['field_department_tid']['expose']['reduce'] = 0;
  $handler->display->display_options['filters']['field_department_tid']['reduce_duplicates'] = 1;
  $handler->display->display_options['filters']['field_department_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_department_tid']['vocabulary'] = 'departments';
  $handler->display->display_options['filters']['field_department_tid']['error_message'] = 1;
  /* Filter criterion: KidZone */
  $handler->display->display_options['filters']['field_childcare1_tid']['id'] = 'field_childcare1_tid';
  $handler->display->display_options['filters']['field_childcare1_tid']['table'] = 'field_data_field_childcare1';
  $handler->display->display_options['filters']['field_childcare1_tid']['field'] = 'field_childcare1_tid';
  $handler->display->display_options['filters']['field_childcare1_tid']['ui_name'] = 'KidZone';
  $handler->display->display_options['filters']['field_childcare1_tid']['value'] = array(
    37 => '37',
    39 => '39',
  );
  $handler->display->display_options['filters']['field_childcare1_tid']['group'] = 1;
  $handler->display->display_options['filters']['field_childcare1_tid']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_childcare1_tid']['expose']['operator_id'] = 'field_childcare1_tid_op';
  $handler->display->display_options['filters']['field_childcare1_tid']['expose']['label'] = 'KidZone:';
  $handler->display->display_options['filters']['field_childcare1_tid']['expose']['operator'] = 'field_childcare1_tid_op';
  $handler->display->display_options['filters']['field_childcare1_tid']['expose']['identifier'] = 'kidzone';
  $handler->display->display_options['filters']['field_childcare1_tid']['expose']['reduce'] = 1;
  $handler->display->display_options['filters']['field_childcare1_tid']['reduce_duplicates'] = 1;
  $handler->display->display_options['filters']['field_childcare1_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_childcare1_tid']['vocabulary'] = 'childcare';
  $handler->display->display_options['filters']['field_childcare1_tid']['error_message'] = 1;
  /* Filter criterion: Content: Area (field_area) */
  $handler->display->display_options['filters']['field_area_tid']['id'] = 'field_area_tid';
  $handler->display->display_options['filters']['field_area_tid']['table'] = 'field_data_field_area';
  $handler->display->display_options['filters']['field_area_tid']['field'] = 'field_area_tid';
  $handler->display->display_options['filters']['field_area_tid']['operator'] = 'not';
  $handler->display->display_options['filters']['field_area_tid']['value'] = array(
    31 => '31',
  );
  $handler->display->display_options['filters']['field_area_tid']['group'] = 1;
  $handler->display->display_options['filters']['field_area_tid']['reduce_duplicates'] = 1;
  $handler->display->display_options['filters']['field_area_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_area_tid']['vocabulary'] = 'area';
  /* Filter criterion: Content: Public Search (field_public_search_listed) */
  $handler->display->display_options['filters']['field_public_search_listed_value_1']['id'] = 'field_public_search_listed_value_1';
  $handler->display->display_options['filters']['field_public_search_listed_value_1']['table'] = 'field_data_field_public_search_listed';
  $handler->display->display_options['filters']['field_public_search_listed_value_1']['field'] = 'field_public_search_listed_value';
  $handler->display->display_options['filters']['field_public_search_listed_value_1']['value'] = 'true';
  $handler->display->display_options['filters']['field_public_search_listed_value_1']['group'] = 1;
  /* Filter criterion: Content: Inactive (field_inactive) */
  $handler->display->display_options['filters']['field_inactive_value']['id'] = 'field_inactive_value';
  $handler->display->display_options['filters']['field_inactive_value']['table'] = 'field_data_field_inactive';
  $handler->display->display_options['filters']['field_inactive_value']['field'] = 'field_inactive_value';
  $handler->display->display_options['filters']['field_inactive_value']['operator'] = '!=';
  $handler->display->display_options['filters']['field_inactive_value']['value'] = 'true';
  $handler->display->display_options['filters']['field_inactive_value']['group'] = 2;
  /* Filter criterion: Content: Public Search (field_public_search_listed) */
  $handler->display->display_options['filters']['field_public_search_listed_value']['id'] = 'field_public_search_listed_value';
  $handler->display->display_options['filters']['field_public_search_listed_value']['table'] = 'field_data_field_public_search_listed';
  $handler->display->display_options['filters']['field_public_search_listed_value']['field'] = 'field_public_search_listed_value';
  $handler->display->display_options['filters']['field_public_search_listed_value']['value'] = 'true';
  $handler->display->display_options['filters']['field_public_search_listed_value']['group'] = 2;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'ccb_group' => 'ccb_group',
  );
  $handler->display->display_options['filters']['type']['group'] = 2;
  $handler->display->display_options['filters']['type']['expose']['operator_id'] = 'type_op';
  $handler->display->display_options['filters']['type']['expose']['label'] = 'Type';
  $handler->display->display_options['filters']['type']['expose']['use_operator'] = FALSE;
  $handler->display->display_options['filters']['type']['expose']['operator'] = 'type_op';
  $handler->display->display_options['filters']['type']['expose']['identifier'] = 'type';
  $handler->display->display_options['filters']['type']['expose']['required'] = FALSE;
  $handler->display->display_options['filters']['type']['expose']['remember'] = FALSE;
  $handler->display->display_options['filters']['type']['expose']['multiple'] = FALSE;
  /* Filter criterion: Content: Body (body) */
  $handler->display->display_options['filters']['body_value']['id'] = 'body_value';
  $handler->display->display_options['filters']['body_value']['table'] = 'field_data_body';
  $handler->display->display_options['filters']['body_value']['field'] = 'body_value';
  $handler->display->display_options['filters']['body_value']['operator'] = 'contains';
  $handler->display->display_options['filters']['body_value']['group'] = 1;
  $handler->display->display_options['filters']['body_value']['exposed'] = TRUE;
  $handler->display->display_options['filters']['body_value']['expose']['operator_id'] = 'body_value_op';
  $handler->display->display_options['filters']['body_value']['expose']['label'] = 'Body (body)';
  $handler->display->display_options['filters']['body_value']['expose']['operator'] = 'body_value_op';
  $handler->display->display_options['filters']['body_value']['expose']['identifier'] = 'body_value';
  $handler->display->display_options['filters']['body_value']['expose']['required'] = 0;
  $handler->display->display_options['filters']['body_value']['expose']['multiple'] = FALSE;
  /* Filter criterion: Content: Leader (field_leader) */
  $handler->display->display_options['filters']['field_leader_value']['id'] = 'field_leader_value';
  $handler->display->display_options['filters']['field_leader_value']['table'] = 'field_data_field_leader';
  $handler->display->display_options['filters']['field_leader_value']['field'] = 'field_leader_value';
  $handler->display->display_options['filters']['field_leader_value']['operator'] = 'contains';
  $handler->display->display_options['filters']['field_leader_value']['group'] = 1;
  $handler->display->display_options['filters']['field_leader_value']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_leader_value']['expose']['operator_id'] = 'field_leader_value_op';
  $handler->display->display_options['filters']['field_leader_value']['expose']['label'] = 'Leader (field_leader)';
  $handler->display->display_options['filters']['field_leader_value']['expose']['operator'] = 'field_leader_value_op';
  $handler->display->display_options['filters']['field_leader_value']['expose']['identifier'] = 'field_leader_value';
  $handler->display->display_options['filters']['field_leader_value']['expose']['required'] = 0;
  $handler->display->display_options['filters']['field_leader_value']['expose']['multiple'] = FALSE;

  /* Display: Default */
  $handler = $view->new_display('page', 'Default', 'page_1');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Community Groups';
  $handler->display->display_options['defaults']['exposed_form'] = FALSE;
  $handler->display->display_options['exposed_form']['type'] = 'better_exposed_filters';
  $handler->display->display_options['exposed_form']['options']['reset_button'] = TRUE;
  $handler->display->display_options['exposed_form']['options']['reset_button_label'] = 'Show All Groups';
  $handler->display->display_options['exposed_form']['options']['autosubmit'] = 1;
  $handler->display->display_options['exposed_form']['options']['autosubmit_hide'] = 1;
  $handler->display->display_options['exposed_form']['options']['bef'] = array(
    'keys' => array(
      'more_options' => array(
        'bef_filter_description' => '',
      ),
    ),
    'field_department_tid' => array(
      'bef_format' => 'bef_links',
      'more_options' => array(
        'bef_select_all_none' => 0,
        'bef_collapsible' => 0,
        'bef_filter_description' => '',
      ),
    ),
    'field_childcare1_tid' => array(
      'bef_format' => 'bef_links',
      'more_options' => array(
        'bef_select_all_none' => 0,
        'bef_collapsible' => 0,
        'bef_filter_description' => '',
      ),
    ),
    'body_value' => array(
      'more_options' => array(
        'bef_filter_description' => '',
      ),
    ),
    'field_leader_value' => array(
      'more_options' => array(
        'bef_filter_description' => '',
      ),
    ),
  );
  $handler->display->display_options['exposed_block'] = TRUE;
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Content: Nid */
  $handler->display->display_options['arguments']['nid']['id'] = 'nid';
  $handler->display->display_options['arguments']['nid']['table'] = 'node';
  $handler->display->display_options['arguments']['nid']['field'] = 'nid';
  $handler->display->display_options['arguments']['nid']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['nid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['path'] = 'groups/list';
  $handler->display->display_options['menu']['type'] = 'default tab';
  $handler->display->display_options['menu']['title'] = 'All Groups';
  $handler->display->display_options['menu']['weight'] = '-9';
  $handler->display->display_options['menu']['name'] = 'menu-groups';
  $handler->display->display_options['tab_options']['title'] = 'Groups';
  $handler->display->display_options['tab_options']['weight'] = '0';

  /* Display: Map */
  $handler = $view->new_display('page', 'Map', 'page_2');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Off Campus Group Locations';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'gmap';
  $handler->display->display_options['style_options']['grouping'] = '';
  $handler->display->display_options['style_options']['macro'] = '[gmap markers=orange::39.403899057495536,-104.91738224016444 |align=Center |zoom=10 |center=39.37040245787161,-104.89334106445312 |width=600px |height=400px |control=Small |type=Hybrid]';
  $handler->display->display_options['style_options']['markers'] = 'nodetype';
  $handler->display->display_options['style_options']['latfield'] = 'field_image';
  $handler->display->display_options['style_options']['lonfield'] = 'field_image';
  $handler->display->display_options['style_options']['markerfield'] = 'title';
  $handler->display->display_options['style_options']['enablermt'] = 0;
  $handler->display->display_options['style_options']['rmtfield'] = 'field_image';
  $handler->display->display_options['style_options']['tooltipenabled'] = 1;
  $handler->display->display_options['style_options']['tooltipfield'] = 'title';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['row_options']['inline'] = array(
    'field_meetingday1' => 'field_meetingday1',
    'field_meetingtime' => 'field_meetingtime',
    'address' => 'address',
  );
  $handler->display->display_options['row_options']['hide_empty'] = 1;
  $handler->display->display_options['row_options']['default_field_elements'] = 1;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['exposed_block'] = TRUE;
  $handler->display->display_options['defaults']['header'] = FALSE;
  /* Header: Global: Text area */
  $handler->display->display_options['header']['area']['id'] = 'area';
  $handler->display->display_options['header']['area']['table'] = 'views';
  $handler->display->display_options['header']['area']['field'] = 'area';
  $handler->display->display_options['header']['area']['empty'] = FALSE;
  $handler->display->display_options['header']['area']['content'] = 'Below is a map of many of our home groups.  We do have more home groups, but not all are listed on this map. <a href="http://missiosolutions.com/therock/?q=groups&dept=50">Click here for a listing of all home groups</a>';
  $handler->display->display_options['header']['area']['format'] = 'filtered_html';
  $handler->display->display_options['header']['area']['tokenize'] = 0;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['title']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['title']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['title']['alter']['external'] = 0;
  $handler->display->display_options['fields']['title']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['title']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['title']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['title']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['title']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['title']['alter']['html'] = 0;
  $handler->display->display_options['fields']['title']['element_type'] = 'h1';
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['title']['hide_empty'] = 0;
  $handler->display->display_options['fields']['title']['empty_zero'] = 0;
  $handler->display->display_options['fields']['title']['hide_alter_empty'] = 0;
  $handler->display->display_options['fields']['title']['link_to_node'] = 0;
  /* Field: Content: Image */
  $handler->display->display_options['fields']['field_image']['id'] = 'field_image';
  $handler->display->display_options['fields']['field_image']['table'] = 'field_data_field_image';
  $handler->display->display_options['fields']['field_image']['field'] = 'field_image';
  $handler->display->display_options['fields']['field_image']['label'] = '';
  $handler->display->display_options['fields']['field_image']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_image']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_image']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_image']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_image']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_image']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_image']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_image']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_image']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_image']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_image']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_image']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_image']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_image']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_image']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_image']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_image']['hide_alter_empty'] = 0;
  $handler->display->display_options['fields']['field_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_image']['settings'] = array(
    'image_style' => 'thumbnail',
    'image_link' => 'content',
  );
  $handler->display->display_options['fields']['field_image']['group_column'] = 'fid';
  $handler->display->display_options['fields']['field_image']['field_api_classes'] = 0;
  /* Field: Content: Meeting Day */
  $handler->display->display_options['fields']['field_meetingday1']['id'] = 'field_meetingday1';
  $handler->display->display_options['fields']['field_meetingday1']['table'] = 'field_data_field_meetingday1';
  $handler->display->display_options['fields']['field_meetingday1']['field'] = 'field_meetingday1';
  $handler->display->display_options['fields']['field_meetingday1']['label'] = 'When';
  $handler->display->display_options['fields']['field_meetingday1']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_meetingday1']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_meetingday1']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_meetingday1']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_meetingday1']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_meetingday1']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_meetingday1']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_meetingday1']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_meetingday1']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_meetingday1']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_meetingday1']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_meetingday1']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_meetingday1']['element_label_type'] = 'strong';
  $handler->display->display_options['fields']['field_meetingday1']['element_label_colon'] = 1;
  $handler->display->display_options['fields']['field_meetingday1']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_meetingday1']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_meetingday1']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_meetingday1']['hide_alter_empty'] = 0;
  $handler->display->display_options['fields']['field_meetingday1']['type'] = 'taxonomy_term_reference_plain';
  $handler->display->display_options['fields']['field_meetingday1']['field_api_classes'] = 0;
  /* Field: Content: Meeting time */
  $handler->display->display_options['fields']['field_meetingtime']['id'] = 'field_meetingtime';
  $handler->display->display_options['fields']['field_meetingtime']['table'] = 'field_data_field_meetingtime';
  $handler->display->display_options['fields']['field_meetingtime']['field'] = 'field_meetingtime';
  $handler->display->display_options['fields']['field_meetingtime']['label'] = '';
  $handler->display->display_options['fields']['field_meetingtime']['alter']['alter_text'] = 1;
  $handler->display->display_options['fields']['field_meetingtime']['alter']['text'] = ' | [field_meetingtime]';
  $handler->display->display_options['fields']['field_meetingtime']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_meetingtime']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_meetingtime']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_meetingtime']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_meetingtime']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_meetingtime']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_meetingtime']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_meetingtime']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_meetingtime']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_meetingtime']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_meetingtime']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_meetingtime']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_meetingtime']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_meetingtime']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_meetingtime']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_meetingtime']['hide_alter_empty'] = 0;
  $handler->display->display_options['fields']['field_meetingtime']['field_api_classes'] = 0;
  /* Field: Location: Address */
  $handler->display->display_options['fields']['address']['id'] = 'address';
  $handler->display->display_options['fields']['address']['table'] = 'location';
  $handler->display->display_options['fields']['address']['field'] = 'address';
  $handler->display->display_options['fields']['address']['label'] = 'Where';
  $handler->display->display_options['fields']['address']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['address']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['address']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['address']['alter']['external'] = 0;
  $handler->display->display_options['fields']['address']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['address']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['address']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['address']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['address']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['address']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['address']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['address']['alter']['html'] = 0;
  $handler->display->display_options['fields']['address']['element_label_type'] = 'strong';
  $handler->display->display_options['fields']['address']['element_label_colon'] = 1;
  $handler->display->display_options['fields']['address']['element_wrapper_type'] = 'div';
  $handler->display->display_options['fields']['address']['element_default_classes'] = 0;
  $handler->display->display_options['fields']['address']['hide_empty'] = 0;
  $handler->display->display_options['fields']['address']['empty_zero'] = 0;
  $handler->display->display_options['fields']['address']['hide_alter_empty'] = 0;
  $handler->display->display_options['fields']['address']['hide'] = array(
    'name' => 'name',
    'additional' => 'additional',
    'country' => 'country',
    'locpick' => 'locpick',
    'province_name' => 'province_name',
    'country_name' => 'country_name',
    'map_link' => 'map_link',
    'coords' => 'coords',
    'street' => 0,
    'city' => 0,
    'province' => 0,
    'postal_code' => 0,
  );
  /* Field: Content: Link */
  $handler->display->display_options['fields']['view_node']['id'] = 'view_node';
  $handler->display->display_options['fields']['view_node']['table'] = 'views_entity_node';
  $handler->display->display_options['fields']['view_node']['field'] = 'view_node';
  $handler->display->display_options['fields']['view_node']['label'] = '';
  $handler->display->display_options['fields']['view_node']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['view_node']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['view_node']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['view_node']['alter']['external'] = 0;
  $handler->display->display_options['fields']['view_node']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['view_node']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['view_node']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['view_node']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['view_node']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['view_node']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['view_node']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['view_node']['alter']['html'] = 0;
  $handler->display->display_options['fields']['view_node']['element_type'] = 'h3';
  $handler->display->display_options['fields']['view_node']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['view_node']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['view_node']['hide_empty'] = 0;
  $handler->display->display_options['fields']['view_node']['empty_zero'] = 0;
  $handler->display->display_options['fields']['view_node']['hide_alter_empty'] = 0;
  $handler->display->display_options['fields']['view_node']['text'] = 'Full details';
  $handler->display->display_options['filter_groups']['groups'] = array(
    1 => 'AND',
    2 => 'AND',
  );
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Inactive (field_inactive) */
  $handler->display->display_options['filters']['field_inactive_value']['id'] = 'field_inactive_value';
  $handler->display->display_options['filters']['field_inactive_value']['table'] = 'field_data_field_inactive';
  $handler->display->display_options['filters']['field_inactive_value']['field'] = 'field_inactive_value';
  $handler->display->display_options['filters']['field_inactive_value']['operator'] = '!=';
  $handler->display->display_options['filters']['field_inactive_value']['value'] = 'true';
  $handler->display->display_options['filters']['field_inactive_value']['group'] = 1;
  /* Filter criterion: Content: Public Search (field_public_search_listed) */
  $handler->display->display_options['filters']['field_public_search_listed_value']['id'] = 'field_public_search_listed_value';
  $handler->display->display_options['filters']['field_public_search_listed_value']['table'] = 'field_data_field_public_search_listed';
  $handler->display->display_options['filters']['field_public_search_listed_value']['field'] = 'field_public_search_listed_value';
  $handler->display->display_options['filters']['field_public_search_listed_value']['value'] = 'true';
  $handler->display->display_options['filters']['field_public_search_listed_value']['group'] = 1;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'ccb_group' => 'ccb_group',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  $handler->display->display_options['filters']['type']['expose']['operator_id'] = 'type_op';
  $handler->display->display_options['filters']['type']['expose']['label'] = 'Type';
  $handler->display->display_options['filters']['type']['expose']['use_operator'] = FALSE;
  $handler->display->display_options['filters']['type']['expose']['operator'] = 'type_op';
  $handler->display->display_options['filters']['type']['expose']['identifier'] = 'type';
  $handler->display->display_options['filters']['type']['expose']['required'] = FALSE;
  $handler->display->display_options['filters']['type']['expose']['remember'] = FALSE;
  $handler->display->display_options['filters']['type']['expose']['multiple'] = FALSE;
  /* Filter criterion: Content: Area (field_area) */
  $handler->display->display_options['filters']['field_area_tid']['id'] = 'field_area_tid';
  $handler->display->display_options['filters']['field_area_tid']['table'] = 'field_data_field_area';
  $handler->display->display_options['filters']['field_area_tid']['field'] = 'field_area_tid';
  $handler->display->display_options['filters']['field_area_tid']['operator'] = 'not';
  $handler->display->display_options['filters']['field_area_tid']['value'] = array(
    31 => '31',
  );
  $handler->display->display_options['filters']['field_area_tid']['group'] = 1;
  $handler->display->display_options['filters']['field_area_tid']['reduce_duplicates'] = 1;
  $handler->display->display_options['filters']['field_area_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_area_tid']['vocabulary'] = 'area';
  $handler->display->display_options['path'] = 'groups/map';
  $handler->display->display_options['menu']['type'] = 'tab';
  $handler->display->display_options['menu']['title'] = 'Off Campus / Map';
  $handler->display->display_options['menu']['weight'] = '0';
  $handler->display->display_options['menu']['name'] = 'menu-groups';
  $handler->display->display_options['tab_options']['title'] = 'Groups';
  $handler->display->display_options['tab_options']['description'] = 'List of Groups';
  $handler->display->display_options['tab_options']['weight'] = '0';

  /* Display: All Groups */
  $handler = $view->new_display('page', 'All Groups', 'page_3');
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['grouping'] = '';
  $handler->display->display_options['style_options']['columns'] = array(
    'title' => 'title',
    'field_meetingday1' => 'field_meetingday1',
    'field_meetingtime' => 'field_meetingday1',
    'field_registrationurl' => 'field_registrationurl',
  );
  $handler->display->display_options['style_options']['default'] = '-1';
  $handler->display->display_options['style_options']['info'] = array(
    'title' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => 'views-align-left',
      'separator' => '',
    ),
    'field_meetingday1' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
    ),
    'field_meetingtime' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
    ),
    'field_registrationurl' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => 'views-align-center',
      'separator' => '',
    ),
  );
  $handler->display->display_options['style_options']['override'] = 0;
  $handler->display->display_options['style_options']['sticky'] = 1;
  $handler->display->display_options['style_options']['empty_table'] = 1;
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['exposed_block'] = TRUE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = 'GROUP NAME (Click for details)';
  $handler->display->display_options['fields']['title']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['title']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['title']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['title']['alter']['external'] = 0;
  $handler->display->display_options['fields']['title']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['title']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['title']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['title']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['title']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['title']['alter']['html'] = 0;
  $handler->display->display_options['fields']['title']['element_type'] = 'h4';
  $handler->display->display_options['fields']['title']['element_label_colon'] = 0;
  $handler->display->display_options['fields']['title']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['title']['hide_empty'] = 0;
  $handler->display->display_options['fields']['title']['empty_zero'] = 0;
  $handler->display->display_options['fields']['title']['hide_alter_empty'] = 0;
  $handler->display->display_options['fields']['title']['link_to_node'] = 1;
  /* Field: Content: Meeting Day */
  $handler->display->display_options['fields']['field_meetingday1']['id'] = 'field_meetingday1';
  $handler->display->display_options['fields']['field_meetingday1']['table'] = 'field_data_field_meetingday1';
  $handler->display->display_options['fields']['field_meetingday1']['field'] = 'field_meetingday1';
  $handler->display->display_options['fields']['field_meetingday1']['label'] = 'When';
  $handler->display->display_options['fields']['field_meetingday1']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_meetingday1']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_meetingday1']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_meetingday1']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_meetingday1']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_meetingday1']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_meetingday1']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_meetingday1']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_meetingday1']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_meetingday1']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_meetingday1']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_meetingday1']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_meetingday1']['element_label_type'] = 'strong';
  $handler->display->display_options['fields']['field_meetingday1']['element_label_colon'] = 1;
  $handler->display->display_options['fields']['field_meetingday1']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_meetingday1']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_meetingday1']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_meetingday1']['hide_alter_empty'] = 0;
  $handler->display->display_options['fields']['field_meetingday1']['type'] = 'taxonomy_term_reference_plain';
  $handler->display->display_options['fields']['field_meetingday1']['field_api_classes'] = 0;
  /* Field: Content: Meeting time */
  $handler->display->display_options['fields']['field_meetingtime']['id'] = 'field_meetingtime';
  $handler->display->display_options['fields']['field_meetingtime']['table'] = 'field_data_field_meetingtime';
  $handler->display->display_options['fields']['field_meetingtime']['field'] = 'field_meetingtime';
  $handler->display->display_options['fields']['field_meetingtime']['label'] = '';
  $handler->display->display_options['fields']['field_meetingtime']['alter']['alter_text'] = 1;
  $handler->display->display_options['fields']['field_meetingtime']['alter']['text'] = ' | [field_meetingtime]';
  $handler->display->display_options['fields']['field_meetingtime']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_meetingtime']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_meetingtime']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_meetingtime']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_meetingtime']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_meetingtime']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_meetingtime']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_meetingtime']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_meetingtime']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_meetingtime']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_meetingtime']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_meetingtime']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_meetingtime']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_meetingtime']['hide_empty'] = 1;
  $handler->display->display_options['fields']['field_meetingtime']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_meetingtime']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['field_meetingtime']['field_api_classes'] = 0;
  /* Field: Content: Leader */
  $handler->display->display_options['fields']['field_leader']['id'] = 'field_leader';
  $handler->display->display_options['fields']['field_leader']['table'] = 'field_data_field_leader';
  $handler->display->display_options['fields']['field_leader']['field'] = 'field_leader';
  $handler->display->display_options['fields']['field_leader']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_leader']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_leader']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_leader']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_leader']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_leader']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_leader']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_leader']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_leader']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_leader']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_leader']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_leader']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_leader']['element_label_colon'] = 0;
  $handler->display->display_options['fields']['field_leader']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_leader']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_leader']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_leader']['hide_alter_empty'] = 0;
  $handler->display->display_options['fields']['field_leader']['type'] = 'text_plain';
  $handler->display->display_options['fields']['field_leader']['group_rows'] = 1;
  $handler->display->display_options['fields']['field_leader']['delta_limit'] = '1';
  $handler->display->display_options['fields']['field_leader']['delta_offset'] = '0';
  $handler->display->display_options['fields']['field_leader']['delta_reversed'] = 0;
  $handler->display->display_options['fields']['field_leader']['field_api_classes'] = 0;
  /* Field: Content: Register Online */
  $handler->display->display_options['fields']['field_registrationurl']['id'] = 'field_registrationurl';
  $handler->display->display_options['fields']['field_registrationurl']['table'] = 'field_data_field_registrationurl';
  $handler->display->display_options['fields']['field_registrationurl']['field'] = 'field_registrationurl';
  $handler->display->display_options['fields']['field_registrationurl']['label'] = '';
  $handler->display->display_options['fields']['field_registrationurl']['alter']['alter_text'] = 1;
  $handler->display->display_options['fields']['field_registrationurl']['alter']['text'] = '<img src="sites/all/modules/ccbapi/images/register_btn.jpg" alt="Register" />';
  $handler->display->display_options['fields']['field_registrationurl']['alter']['make_link'] = 1;
  $handler->display->display_options['fields']['field_registrationurl']['alter']['path'] = '[field_registrationurl]&width=660&height=760&iframe=true';
  $handler->display->display_options['fields']['field_registrationurl']['alter']['absolute'] = 1;
  $handler->display->display_options['fields']['field_registrationurl']['alter']['external'] = 1;
  $handler->display->display_options['fields']['field_registrationurl']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_registrationurl']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_registrationurl']['alter']['alt'] = 'Register for [title]';
  $handler->display->display_options['fields']['field_registrationurl']['alter']['target'] = '_blank';
  $handler->display->display_options['fields']['field_registrationurl']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_registrationurl']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_registrationurl']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_registrationurl']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_registrationurl']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_registrationurl']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_registrationurl']['element_type'] = 'div';
  $handler->display->display_options['fields']['field_registrationurl']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_registrationurl']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_registrationurl']['hide_empty'] = 1;
  $handler->display->display_options['fields']['field_registrationurl']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_registrationurl']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['field_registrationurl']['click_sort_column'] = 'url';
  $handler->display->display_options['fields']['field_registrationurl']['type'] = 'link_plain';
  $handler->display->display_options['fields']['field_registrationurl']['group_column'] = 'url';
  $handler->display->display_options['fields']['field_registrationurl']['group_rows'] = 0;
  $handler->display->display_options['fields']['field_registrationurl']['delta_limit'] = '1';
  $handler->display->display_options['fields']['field_registrationurl']['delta_offset'] = '0';
  $handler->display->display_options['fields']['field_registrationurl']['delta_reversed'] = 1;
  $handler->display->display_options['fields']['field_registrationurl']['field_api_classes'] = 0;
  $handler->display->display_options['filter_groups']['groups'] = array(
    1 => 'OR',
    2 => 'AND',
  );
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Department */
  $handler->display->display_options['filters']['field_department_tid']['id'] = 'field_department_tid';
  $handler->display->display_options['filters']['field_department_tid']['table'] = 'field_data_field_department';
  $handler->display->display_options['filters']['field_department_tid']['field'] = 'field_department_tid';
  $handler->display->display_options['filters']['field_department_tid']['ui_name'] = 'Department';
  $handler->display->display_options['filters']['field_department_tid']['group'] = 1;
  $handler->display->display_options['filters']['field_department_tid']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_department_tid']['expose']['operator_id'] = 'field_department_tid_op';
  $handler->display->display_options['filters']['field_department_tid']['expose']['label'] = 'Ministry Department:';
  $handler->display->display_options['filters']['field_department_tid']['expose']['operator'] = 'field_department_tid_op';
  $handler->display->display_options['filters']['field_department_tid']['expose']['identifier'] = 'dept';
  $handler->display->display_options['filters']['field_department_tid']['expose']['reduce'] = 0;
  $handler->display->display_options['filters']['field_department_tid']['reduce_duplicates'] = 1;
  $handler->display->display_options['filters']['field_department_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_department_tid']['vocabulary'] = 'departments';
  $handler->display->display_options['filters']['field_department_tid']['error_message'] = 1;
  /* Filter criterion: Content: Meeting Day (field_meetingday1) */
  $handler->display->display_options['filters']['field_meetingday1_tid']['id'] = 'field_meetingday1_tid';
  $handler->display->display_options['filters']['field_meetingday1_tid']['table'] = 'field_data_field_meetingday1';
  $handler->display->display_options['filters']['field_meetingday1_tid']['field'] = 'field_meetingday1_tid';
  $handler->display->display_options['filters']['field_meetingday1_tid']['value'] = array(
    45 => '45',
    40 => '40',
    42 => '42',
    38 => '38',
    41 => '41',
    59 => '59',
    43 => '43',
    36 => '36',
    61 => '61',
    48 => '48',
  );
  $handler->display->display_options['filters']['field_meetingday1_tid']['group'] = 1;
  $handler->display->display_options['filters']['field_meetingday1_tid']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_meetingday1_tid']['expose']['operator_id'] = 'field_meetingday1_tid_op';
  $handler->display->display_options['filters']['field_meetingday1_tid']['expose']['label'] = 'Meeting Day';
  $handler->display->display_options['filters']['field_meetingday1_tid']['expose']['operator'] = 'field_meetingday1_tid_op';
  $handler->display->display_options['filters']['field_meetingday1_tid']['expose']['identifier'] = 'field_meetingday1_tid';
  $handler->display->display_options['filters']['field_meetingday1_tid']['expose']['reduce'] = 1;
  $handler->display->display_options['filters']['field_meetingday1_tid']['reduce_duplicates'] = 1;
  $handler->display->display_options['filters']['field_meetingday1_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_meetingday1_tid']['vocabulary'] = 'meeting_day';
  $handler->display->display_options['filters']['field_meetingday1_tid']['error_message'] = 1;
  /* Filter criterion: Content: Body (body) */
  $handler->display->display_options['filters']['body_value']['id'] = 'body_value';
  $handler->display->display_options['filters']['body_value']['table'] = 'field_data_body';
  $handler->display->display_options['filters']['body_value']['field'] = 'body_value';
  $handler->display->display_options['filters']['body_value']['operator'] = 'word';
  $handler->display->display_options['filters']['body_value']['group'] = 1;
  $handler->display->display_options['filters']['body_value']['exposed'] = TRUE;
  $handler->display->display_options['filters']['body_value']['expose']['operator_id'] = 'body_value_op';
  $handler->display->display_options['filters']['body_value']['expose']['label'] = 'Topic';
  $handler->display->display_options['filters']['body_value']['expose']['operator'] = 'body_value_op';
  $handler->display->display_options['filters']['body_value']['expose']['identifier'] = 'body_value';
  $handler->display->display_options['filters']['body_value']['expose']['required'] = 0;
  $handler->display->display_options['filters']['body_value']['expose']['multiple'] = FALSE;
  /* Filter criterion: Content: Leader (field_leader) */
  $handler->display->display_options['filters']['field_leader_value']['id'] = 'field_leader_value';
  $handler->display->display_options['filters']['field_leader_value']['table'] = 'field_data_field_leader';
  $handler->display->display_options['filters']['field_leader_value']['field'] = 'field_leader_value';
  $handler->display->display_options['filters']['field_leader_value']['operator'] = 'contains';
  $handler->display->display_options['filters']['field_leader_value']['group'] = 1;
  $handler->display->display_options['filters']['field_leader_value']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_leader_value']['expose']['operator_id'] = 'field_leader_value_op';
  $handler->display->display_options['filters']['field_leader_value']['expose']['label'] = 'Leader';
  $handler->display->display_options['filters']['field_leader_value']['expose']['operator'] = 'field_leader_value_op';
  $handler->display->display_options['filters']['field_leader_value']['expose']['identifier'] = 'field_leader_value';
  $handler->display->display_options['filters']['field_leader_value']['expose']['required'] = 0;
  $handler->display->display_options['filters']['field_leader_value']['expose']['multiple'] = FALSE;
  /* Filter criterion: Content: Inactive (field_inactive) */
  $handler->display->display_options['filters']['field_inactive_value']['id'] = 'field_inactive_value';
  $handler->display->display_options['filters']['field_inactive_value']['table'] = 'field_data_field_inactive';
  $handler->display->display_options['filters']['field_inactive_value']['field'] = 'field_inactive_value';
  $handler->display->display_options['filters']['field_inactive_value']['operator'] = '!=';
  $handler->display->display_options['filters']['field_inactive_value']['value'] = 'true';
  $handler->display->display_options['filters']['field_inactive_value']['group'] = 2;
  /* Filter criterion: Content: Public Search (field_public_search_listed) */
  $handler->display->display_options['filters']['field_public_search_listed_value']['id'] = 'field_public_search_listed_value';
  $handler->display->display_options['filters']['field_public_search_listed_value']['table'] = 'field_data_field_public_search_listed';
  $handler->display->display_options['filters']['field_public_search_listed_value']['field'] = 'field_public_search_listed_value';
  $handler->display->display_options['filters']['field_public_search_listed_value']['value'] = 'true';
  $handler->display->display_options['filters']['field_public_search_listed_value']['group'] = 2;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'ccb_group' => 'ccb_group',
  );
  $handler->display->display_options['filters']['type']['group'] = 2;
  $handler->display->display_options['filters']['type']['expose']['operator_id'] = 'type_op';
  $handler->display->display_options['filters']['type']['expose']['label'] = 'Type';
  $handler->display->display_options['filters']['type']['expose']['use_operator'] = FALSE;
  $handler->display->display_options['filters']['type']['expose']['operator'] = 'type_op';
  $handler->display->display_options['filters']['type']['expose']['identifier'] = 'type';
  $handler->display->display_options['filters']['type']['expose']['required'] = FALSE;
  $handler->display->display_options['filters']['type']['expose']['remember'] = FALSE;
  $handler->display->display_options['filters']['type']['expose']['multiple'] = FALSE;
  $handler->display->display_options['path'] = 'groups';
  $handler->display->display_options['menu']['type'] = 'normal';
  $handler->display->display_options['menu']['title'] = 'All Groups';
  $handler->display->display_options['menu']['weight'] = '-9';
  $handler->display->display_options['menu']['name'] = 'menu-groups';
  $handler->display->display_options['tab_options']['type'] = 'normal';
  $handler->display->display_options['tab_options']['title'] = 'Groups';
  $handler->display->display_options['tab_options']['weight'] = '0';
  $handler->display->display_options['tab_options']['name'] = 'menu-groups';

  /* Display: Popup Window */
  $handler = $view->new_display('page', 'Popup Window', 'page_4');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '1';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'node';
  $handler->display->display_options['row_options']['links'] = 0;
  $handler->display->display_options['row_options']['comments'] = 0;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['title']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['title']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['title']['alter']['external'] = 0;
  $handler->display->display_options['fields']['title']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['title']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['title']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['title']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['title']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['title']['alter']['html'] = 0;
  $handler->display->display_options['fields']['title']['element_type'] = 'h1';
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['title']['hide_empty'] = 0;
  $handler->display->display_options['fields']['title']['empty_zero'] = 0;
  $handler->display->display_options['fields']['title']['hide_alter_empty'] = 0;
  $handler->display->display_options['fields']['title']['link_to_node'] = 0;
  /* Field: Content: Image */
  $handler->display->display_options['fields']['field_image']['id'] = 'field_image';
  $handler->display->display_options['fields']['field_image']['table'] = 'field_data_field_image';
  $handler->display->display_options['fields']['field_image']['field'] = 'field_image';
  $handler->display->display_options['fields']['field_image']['label'] = '';
  $handler->display->display_options['fields']['field_image']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_image']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_image']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_image']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_image']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_image']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_image']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_image']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_image']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_image']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_image']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_image']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_image']['element_wrapper_type'] = 'div';
  $handler->display->display_options['fields']['field_image']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_image']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_image']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_image']['hide_alter_empty'] = 0;
  $handler->display->display_options['fields']['field_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_image']['settings'] = array(
    'image_style' => 'large',
    'image_link' => 'content',
  );
  $handler->display->display_options['fields']['field_image']['group_column'] = 'fid';
  $handler->display->display_options['fields']['field_image']['field_api_classes'] = 0;
  /* Field: Content: Body */
  $handler->display->display_options['fields']['body']['id'] = 'body';
  $handler->display->display_options['fields']['body']['table'] = 'field_data_body';
  $handler->display->display_options['fields']['body']['field'] = 'body';
  $handler->display->display_options['fields']['body']['label'] = '';
  $handler->display->display_options['fields']['body']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['body']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['body']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['body']['alter']['external'] = 0;
  $handler->display->display_options['fields']['body']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['body']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['body']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['body']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['body']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['body']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['body']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['body']['alter']['html'] = 0;
  $handler->display->display_options['fields']['body']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['body']['element_wrapper_type'] = 'p';
  $handler->display->display_options['fields']['body']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['body']['hide_empty'] = 0;
  $handler->display->display_options['fields']['body']['empty_zero'] = 0;
  $handler->display->display_options['fields']['body']['hide_alter_empty'] = 0;
  $handler->display->display_options['fields']['body']['type'] = 'text_summary_or_trimmed';
  $handler->display->display_options['fields']['body']['settings'] = array(
    'trim_length' => '600',
  );
  $handler->display->display_options['fields']['body']['field_api_classes'] = 0;
  /* Field: Content: Leader */
  $handler->display->display_options['fields']['field_leader']['id'] = 'field_leader';
  $handler->display->display_options['fields']['field_leader']['table'] = 'field_data_field_leader';
  $handler->display->display_options['fields']['field_leader']['field'] = 'field_leader';
  $handler->display->display_options['fields']['field_leader']['label'] = 'Led by';
  $handler->display->display_options['fields']['field_leader']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_leader']['alter']['text'] = '<ul>Leaders: [field_leader]</ul>';
  $handler->display->display_options['fields']['field_leader']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_leader']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_leader']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_leader']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_leader']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_leader']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_leader']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_leader']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_leader']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_leader']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_leader']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_leader']['element_label_type'] = 'strong';
  $handler->display->display_options['fields']['field_leader']['element_label_colon'] = 1;
  $handler->display->display_options['fields']['field_leader']['element_wrapper_type'] = 'div';
  $handler->display->display_options['fields']['field_leader']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_leader']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_leader']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_leader']['hide_alter_empty'] = 0;
  $handler->display->display_options['fields']['field_leader']['group_rows'] = 1;
  $handler->display->display_options['fields']['field_leader']['delta_offset'] = '0';
  $handler->display->display_options['fields']['field_leader']['delta_reversed'] = 0;
  $handler->display->display_options['fields']['field_leader']['field_api_classes'] = 0;
  /* Field: Content: Meeting Day */
  $handler->display->display_options['fields']['field_meetingday1']['id'] = 'field_meetingday1';
  $handler->display->display_options['fields']['field_meetingday1']['table'] = 'field_data_field_meetingday1';
  $handler->display->display_options['fields']['field_meetingday1']['field'] = 'field_meetingday1';
  $handler->display->display_options['fields']['field_meetingday1']['label'] = 'When';
  $handler->display->display_options['fields']['field_meetingday1']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_meetingday1']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_meetingday1']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_meetingday1']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_meetingday1']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_meetingday1']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_meetingday1']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_meetingday1']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_meetingday1']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_meetingday1']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_meetingday1']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_meetingday1']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_meetingday1']['element_label_type'] = 'strong';
  $handler->display->display_options['fields']['field_meetingday1']['element_label_colon'] = 1;
  $handler->display->display_options['fields']['field_meetingday1']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_meetingday1']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_meetingday1']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_meetingday1']['hide_alter_empty'] = 0;
  $handler->display->display_options['fields']['field_meetingday1']['type'] = 'taxonomy_term_reference_plain';
  $handler->display->display_options['fields']['field_meetingday1']['field_api_classes'] = 0;
  /* Field: Content: Meeting time */
  $handler->display->display_options['fields']['field_meetingtime']['id'] = 'field_meetingtime';
  $handler->display->display_options['fields']['field_meetingtime']['table'] = 'field_data_field_meetingtime';
  $handler->display->display_options['fields']['field_meetingtime']['field'] = 'field_meetingtime';
  $handler->display->display_options['fields']['field_meetingtime']['label'] = '';
  $handler->display->display_options['fields']['field_meetingtime']['alter']['alter_text'] = 1;
  $handler->display->display_options['fields']['field_meetingtime']['alter']['text'] = '| [field_meetingtime]';
  $handler->display->display_options['fields']['field_meetingtime']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_meetingtime']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_meetingtime']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_meetingtime']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_meetingtime']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_meetingtime']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_meetingtime']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_meetingtime']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_meetingtime']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_meetingtime']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_meetingtime']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_meetingtime']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_meetingtime']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_meetingtime']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_meetingtime']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_meetingtime']['hide_alter_empty'] = 0;
  $handler->display->display_options['fields']['field_meetingtime']['field_api_classes'] = 0;
  /* Field: Content: Area */
  $handler->display->display_options['fields']['field_area']['id'] = 'field_area';
  $handler->display->display_options['fields']['field_area']['table'] = 'field_data_field_area';
  $handler->display->display_options['fields']['field_area']['field'] = 'field_area';
  $handler->display->display_options['fields']['field_area']['label'] = 'Where';
  $handler->display->display_options['fields']['field_area']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_area']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_area']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_area']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_area']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_area']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_area']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_area']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_area']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_area']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_area']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_area']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_area']['element_label_type'] = 'strong';
  $handler->display->display_options['fields']['field_area']['element_label_colon'] = 1;
  $handler->display->display_options['fields']['field_area']['element_wrapper_type'] = 'div';
  $handler->display->display_options['fields']['field_area']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_area']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_area']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_area']['hide_alter_empty'] = 0;
  $handler->display->display_options['fields']['field_area']['type'] = 'taxonomy_term_reference_plain';
  $handler->display->display_options['fields']['field_area']['field_api_classes'] = 0;
  /* Field: Content: Register Online */
  $handler->display->display_options['fields']['field_registrationurl']['id'] = 'field_registrationurl';
  $handler->display->display_options['fields']['field_registrationurl']['table'] = 'field_data_field_registrationurl';
  $handler->display->display_options['fields']['field_registrationurl']['field'] = 'field_registrationurl';
  $handler->display->display_options['fields']['field_registrationurl']['label'] = '';
  $handler->display->display_options['fields']['field_registrationurl']['alter']['alter_text'] = 1;
  $handler->display->display_options['fields']['field_registrationurl']['alter']['text'] = '<img src="../../../sites/all/modules/ccbapi/images/register_btn.jpg" alt="Register" />';
  $handler->display->display_options['fields']['field_registrationurl']['alter']['make_link'] = 1;
  $handler->display->display_options['fields']['field_registrationurl']['alter']['path'] = '[field_registrationurl]';
  $handler->display->display_options['fields']['field_registrationurl']['alter']['absolute'] = 1;
  $handler->display->display_options['fields']['field_registrationurl']['alter']['external'] = 1;
  $handler->display->display_options['fields']['field_registrationurl']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_registrationurl']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_registrationurl']['alter']['alt'] = 'Register for [title]';
  $handler->display->display_options['fields']['field_registrationurl']['alter']['target'] = '_blank';
  $handler->display->display_options['fields']['field_registrationurl']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_registrationurl']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_registrationurl']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_registrationurl']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_registrationurl']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_registrationurl']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_registrationurl']['element_type'] = 'div';
  $handler->display->display_options['fields']['field_registrationurl']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_registrationurl']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_registrationurl']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_registrationurl']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_registrationurl']['hide_alter_empty'] = 0;
  $handler->display->display_options['fields']['field_registrationurl']['click_sort_column'] = 'url';
  $handler->display->display_options['fields']['field_registrationurl']['type'] = 'link_plain';
  $handler->display->display_options['fields']['field_registrationurl']['group_column'] = 'url';
  $handler->display->display_options['fields']['field_registrationurl']['group_rows'] = 1;
  $handler->display->display_options['fields']['field_registrationurl']['delta_limit'] = '1';
  $handler->display->display_options['fields']['field_registrationurl']['delta_offset'] = '0';
  $handler->display->display_options['fields']['field_registrationurl']['delta_reversed'] = 1;
  $handler->display->display_options['fields']['field_registrationurl']['field_api_classes'] = 0;
  /* Field: Content: Nid */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'node';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  $handler->display->display_options['fields']['nid']['label'] = '';
  $handler->display->display_options['fields']['nid']['alter']['alter_text'] = 1;
  $handler->display->display_options['fields']['nid']['alter']['text'] = 'Click here for full details';
  $handler->display->display_options['fields']['nid']['alter']['make_link'] = 1;
  $handler->display->display_options['fields']['nid']['alter']['path'] = 'node/[nid]';
  $handler->display->display_options['fields']['nid']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['nid']['alter']['external'] = 0;
  $handler->display->display_options['fields']['nid']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['nid']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['nid']['alter']['target'] = '_parent';
  $handler->display->display_options['fields']['nid']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['nid']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['nid']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['nid']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['nid']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['nid']['alter']['html'] = 0;
  $handler->display->display_options['fields']['nid']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['nid']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['nid']['hide_empty'] = 0;
  $handler->display->display_options['fields']['nid']['empty_zero'] = 0;
  $handler->display->display_options['fields']['nid']['hide_alter_empty'] = 0;
  $handler->display->display_options['fields']['nid']['link_to_node'] = 0;
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Content: Nid */
  $handler->display->display_options['arguments']['nid']['id'] = 'nid';
  $handler->display->display_options['arguments']['nid']['table'] = 'node';
  $handler->display->display_options['arguments']['nid']['field'] = 'nid';
  $handler->display->display_options['arguments']['nid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['nid']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['nid']['default_argument_options']['argument'] = '1567';
  $handler->display->display_options['arguments']['nid']['default_argument_skip_url'] = 0;
  $handler->display->display_options['arguments']['nid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['nid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['nid']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['nid']['break_phrase'] = 0;
  $handler->display->display_options['arguments']['nid']['not'] = 0;
  $handler->display->display_options['filter_groups']['groups'] = array(
    1 => 'AND',
    2 => 'AND',
  );
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Public Search (field_public_search_listed) */
  $handler->display->display_options['filters']['field_public_search_listed_value']['id'] = 'field_public_search_listed_value';
  $handler->display->display_options['filters']['field_public_search_listed_value']['table'] = 'field_data_field_public_search_listed';
  $handler->display->display_options['filters']['field_public_search_listed_value']['field'] = 'field_public_search_listed_value';
  $handler->display->display_options['filters']['field_public_search_listed_value']['value'] = 'true';
  $handler->display->display_options['filters']['field_public_search_listed_value']['group'] = 1;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'ccb_group' => 'ccb_group',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  $handler->display->display_options['filters']['type']['expose']['operator_id'] = 'type_op';
  $handler->display->display_options['filters']['type']['expose']['label'] = 'Type';
  $handler->display->display_options['filters']['type']['expose']['use_operator'] = FALSE;
  $handler->display->display_options['filters']['type']['expose']['operator'] = 'type_op';
  $handler->display->display_options['filters']['type']['expose']['identifier'] = 'type';
  $handler->display->display_options['filters']['type']['expose']['required'] = FALSE;
  $handler->display->display_options['filters']['type']['expose']['remember'] = FALSE;
  $handler->display->display_options['filters']['type']['expose']['multiple'] = FALSE;
  $handler->display->display_options['path'] = 'node/%/popup';

  /* Display: Childcare */
  $handler = $view->new_display('page', 'Childcare', 'page_5');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Groups with KidZone Available';
  $handler->display->display_options['defaults']['exposed_form'] = FALSE;
  $handler->display->display_options['exposed_form']['type'] = 'better_exposed_filters';
  $handler->display->display_options['exposed_form']['options']['reset_button'] = TRUE;
  $handler->display->display_options['exposed_form']['options']['reset_button_label'] = 'Show All Groups';
  $handler->display->display_options['exposed_form']['options']['autosubmit'] = 1;
  $handler->display->display_options['exposed_form']['options']['autosubmit_hide'] = 0;
  $handler->display->display_options['exposed_form']['options']['bef'] = array(
    'keys' => array(
      'more_options' => array(
        'bef_filter_description' => '',
      ),
    ),
    'field_department_tid' => array(
      'bef_format' => 'bef_links',
      'more_options' => array(
        'bef_select_all_none' => 0,
        'bef_collapsible' => 0,
        'bef_filter_description' => '',
      ),
    ),
    'field_childcare1_tid' => array(
      'bef_format' => 'bef_links',
      'more_options' => array(
        'bef_select_all_none' => 0,
        'bef_collapsible' => 0,
        'bef_filter_description' => '',
      ),
    ),
  );
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['grouping'] = '';
  $handler->display->display_options['style_options']['columns'] = array(
    'title' => 'title',
    'field_image' => 'field_image',
    'field_leader' => 'field_leader',
    'field_meetingday1' => 'field_meetingday1',
    'field_meetingtime' => 'field_meetingday1',
    'field_area' => 'field_area',
    'field_registrationurl' => 'field_registrationurl',
  );
  $handler->display->display_options['style_options']['default'] = '-1';
  $handler->display->display_options['style_options']['info'] = array(
    'title' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
    ),
    'field_image' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
    ),
    'field_leader' => array(
      'align' => '',
      'separator' => '',
    ),
    'field_meetingday1' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
    ),
    'field_meetingtime' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
    ),
    'field_area' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
    ),
    'field_registrationurl' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
    ),
  );
  $handler->display->display_options['style_options']['override'] = 1;
  $handler->display->display_options['style_options']['sticky'] = 0;
  $handler->display->display_options['style_options']['empty_table'] = 0;
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['exposed_block'] = TRUE;
  $handler->display->display_options['defaults']['header'] = FALSE;
  /* Header: Childcare */
  $handler->display->display_options['header']['area']['id'] = 'area';
  $handler->display->display_options['header']['area']['table'] = 'views';
  $handler->display->display_options['header']['area']['field'] = 'area';
  $handler->display->display_options['header']['area']['ui_name'] = 'Childcare';
  $handler->display->display_options['header']['area']['label'] = 'Childcare';
  $handler->display->display_options['header']['area']['empty'] = FALSE;
  $handler->display->display_options['header']['area']['content'] = '<p><a href="kidzone"><img alt="Childcare Available" src="http://missiosolutions.com/therock/sites/all/modules/ccbapi/images/kidzone.jpg" style="height: 116px; width: 150px; "><br>Click here to register your children for Kidzone</a></p>';
  $handler->display->display_options['header']['area']['format'] = 'html';
  $handler->display->display_options['header']['area']['tokenize'] = 0;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = 'GROUP NAME (Click for details)';
  $handler->display->display_options['fields']['title']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['title']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['title']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['title']['alter']['external'] = 0;
  $handler->display->display_options['fields']['title']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['title']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['title']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['title']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['title']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['title']['alter']['html'] = 0;
  $handler->display->display_options['fields']['title']['element_type'] = 'h4';
  $handler->display->display_options['fields']['title']['element_label_colon'] = 0;
  $handler->display->display_options['fields']['title']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['title']['hide_empty'] = 0;
  $handler->display->display_options['fields']['title']['empty_zero'] = 0;
  $handler->display->display_options['fields']['title']['hide_alter_empty'] = 0;
  $handler->display->display_options['fields']['title']['link_to_node'] = 1;
  /* Field: Content: Meeting Day */
  $handler->display->display_options['fields']['field_meetingday1']['id'] = 'field_meetingday1';
  $handler->display->display_options['fields']['field_meetingday1']['table'] = 'field_data_field_meetingday1';
  $handler->display->display_options['fields']['field_meetingday1']['field'] = 'field_meetingday1';
  $handler->display->display_options['fields']['field_meetingday1']['label'] = 'When';
  $handler->display->display_options['fields']['field_meetingday1']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_meetingday1']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_meetingday1']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_meetingday1']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_meetingday1']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_meetingday1']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_meetingday1']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_meetingday1']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_meetingday1']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_meetingday1']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_meetingday1']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_meetingday1']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_meetingday1']['element_label_type'] = 'strong';
  $handler->display->display_options['fields']['field_meetingday1']['element_label_colon'] = 1;
  $handler->display->display_options['fields']['field_meetingday1']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_meetingday1']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_meetingday1']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_meetingday1']['hide_alter_empty'] = 0;
  $handler->display->display_options['fields']['field_meetingday1']['type'] = 'taxonomy_term_reference_plain';
  $handler->display->display_options['fields']['field_meetingday1']['field_api_classes'] = 0;
  /* Field: Content: Meeting time */
  $handler->display->display_options['fields']['field_meetingtime']['id'] = 'field_meetingtime';
  $handler->display->display_options['fields']['field_meetingtime']['table'] = 'field_data_field_meetingtime';
  $handler->display->display_options['fields']['field_meetingtime']['field'] = 'field_meetingtime';
  $handler->display->display_options['fields']['field_meetingtime']['label'] = '';
  $handler->display->display_options['fields']['field_meetingtime']['alter']['alter_text'] = 1;
  $handler->display->display_options['fields']['field_meetingtime']['alter']['text'] = ' | [field_meetingtime]';
  $handler->display->display_options['fields']['field_meetingtime']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_meetingtime']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_meetingtime']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_meetingtime']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_meetingtime']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_meetingtime']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_meetingtime']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_meetingtime']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_meetingtime']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_meetingtime']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_meetingtime']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_meetingtime']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_meetingtime']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_meetingtime']['hide_empty'] = 1;
  $handler->display->display_options['fields']['field_meetingtime']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_meetingtime']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['field_meetingtime']['field_api_classes'] = 0;
  /* Field: Content: Leader */
  $handler->display->display_options['fields']['field_leader']['id'] = 'field_leader';
  $handler->display->display_options['fields']['field_leader']['table'] = 'field_data_field_leader';
  $handler->display->display_options['fields']['field_leader']['field'] = 'field_leader';
  $handler->display->display_options['fields']['field_leader']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_leader']['alter']['text'] = '<ul>Leaders: [field_leader]</ul>';
  $handler->display->display_options['fields']['field_leader']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_leader']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_leader']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_leader']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_leader']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_leader']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_leader']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_leader']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_leader']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_leader']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_leader']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_leader']['element_label_type'] = 'strong';
  $handler->display->display_options['fields']['field_leader']['element_label_colon'] = 0;
  $handler->display->display_options['fields']['field_leader']['element_wrapper_type'] = 'div';
  $handler->display->display_options['fields']['field_leader']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_leader']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_leader']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_leader']['hide_alter_empty'] = 0;
  $handler->display->display_options['fields']['field_leader']['group_rows'] = 1;
  $handler->display->display_options['fields']['field_leader']['delta_offset'] = '0';
  $handler->display->display_options['fields']['field_leader']['delta_reversed'] = 0;
  $handler->display->display_options['fields']['field_leader']['field_api_classes'] = 0;
  /* Field: Content: Register Online */
  $handler->display->display_options['fields']['field_registrationurl']['id'] = 'field_registrationurl';
  $handler->display->display_options['fields']['field_registrationurl']['table'] = 'field_data_field_registrationurl';
  $handler->display->display_options['fields']['field_registrationurl']['field'] = 'field_registrationurl';
  $handler->display->display_options['fields']['field_registrationurl']['label'] = '';
  $handler->display->display_options['fields']['field_registrationurl']['alter']['alter_text'] = 1;
  $handler->display->display_options['fields']['field_registrationurl']['alter']['text'] = '<img src="sites/all/modules/ccbapi/images/register_btn.jpg" alt="Register" />';
  $handler->display->display_options['fields']['field_registrationurl']['alter']['make_link'] = 1;
  $handler->display->display_options['fields']['field_registrationurl']['alter']['path'] = '[field_registrationurl]&width=660&height=760&iframe=true';
  $handler->display->display_options['fields']['field_registrationurl']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_registrationurl']['alter']['external'] = 1;
  $handler->display->display_options['fields']['field_registrationurl']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_registrationurl']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_registrationurl']['alter']['alt'] = 'Register for [title]';
  $handler->display->display_options['fields']['field_registrationurl']['alter']['link_class'] = 'colorbox-load';
  $handler->display->display_options['fields']['field_registrationurl']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_registrationurl']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_registrationurl']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_registrationurl']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_registrationurl']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_registrationurl']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_registrationurl']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_registrationurl']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_registrationurl']['hide_empty'] = 1;
  $handler->display->display_options['fields']['field_registrationurl']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_registrationurl']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['field_registrationurl']['click_sort_column'] = 'url';
  $handler->display->display_options['fields']['field_registrationurl']['type'] = 'link_url';
  $handler->display->display_options['fields']['field_registrationurl']['group_column'] = 'url';
  $handler->display->display_options['fields']['field_registrationurl']['group_rows'] = 1;
  $handler->display->display_options['fields']['field_registrationurl']['delta_limit'] = '1';
  $handler->display->display_options['fields']['field_registrationurl']['delta_offset'] = '0';
  $handler->display->display_options['fields']['field_registrationurl']['delta_reversed'] = 1;
  $handler->display->display_options['fields']['field_registrationurl']['field_api_classes'] = 0;
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Content: Nid */
  $handler->display->display_options['arguments']['nid']['id'] = 'nid';
  $handler->display->display_options['arguments']['nid']['table'] = 'node';
  $handler->display->display_options['arguments']['nid']['field'] = 'nid';
  $handler->display->display_options['arguments']['nid']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['nid']['summary']['format'] = 'default_summary';
  /* Contextual filter: Search: Search Terms */
  $handler->display->display_options['arguments']['keys']['id'] = 'keys';
  $handler->display->display_options['arguments']['keys']['table'] = 'search_index';
  $handler->display->display_options['arguments']['keys']['field'] = 'keys';
  $handler->display->display_options['arguments']['keys']['title_enable'] = 1;
  $handler->display->display_options['arguments']['keys']['title'] = '%2';
  $handler->display->display_options['arguments']['keys']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['keys']['default_argument_skip_url'] = 0;
  $handler->display->display_options['arguments']['keys']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['keys']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['keys']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['filter_groups']['groups'] = array(
    1 => 'OR',
    2 => 'AND',
  );
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Search: Search Terms */
  $handler->display->display_options['filters']['keys']['id'] = 'keys';
  $handler->display->display_options['filters']['keys']['table'] = 'search_index';
  $handler->display->display_options['filters']['keys']['field'] = 'keys';
  $handler->display->display_options['filters']['keys']['group'] = 1;
  $handler->display->display_options['filters']['keys']['exposed'] = TRUE;
  $handler->display->display_options['filters']['keys']['expose']['operator_id'] = 'keys_op';
  $handler->display->display_options['filters']['keys']['expose']['label'] = 'Search';
  $handler->display->display_options['filters']['keys']['expose']['operator'] = 'keys_op';
  $handler->display->display_options['filters']['keys']['expose']['identifier'] = 'groupsearch';
  $handler->display->display_options['filters']['keys']['expose']['multiple'] = FALSE;
  /* Filter criterion: Department */
  $handler->display->display_options['filters']['field_department_tid']['id'] = 'field_department_tid';
  $handler->display->display_options['filters']['field_department_tid']['table'] = 'field_data_field_department';
  $handler->display->display_options['filters']['field_department_tid']['field'] = 'field_department_tid';
  $handler->display->display_options['filters']['field_department_tid']['ui_name'] = 'Department';
  $handler->display->display_options['filters']['field_department_tid']['group'] = 1;
  $handler->display->display_options['filters']['field_department_tid']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_department_tid']['expose']['operator_id'] = 'field_department_tid_op';
  $handler->display->display_options['filters']['field_department_tid']['expose']['label'] = 'Ministry Department:';
  $handler->display->display_options['filters']['field_department_tid']['expose']['operator'] = 'field_department_tid_op';
  $handler->display->display_options['filters']['field_department_tid']['expose']['identifier'] = 'dept';
  $handler->display->display_options['filters']['field_department_tid']['expose']['multiple'] = 1;
  $handler->display->display_options['filters']['field_department_tid']['expose']['reduce'] = 0;
  $handler->display->display_options['filters']['field_department_tid']['reduce_duplicates'] = 1;
  $handler->display->display_options['filters']['field_department_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_department_tid']['vocabulary'] = 'departments';
  $handler->display->display_options['filters']['field_department_tid']['error_message'] = 1;
  /* Filter criterion: KidZone */
  $handler->display->display_options['filters']['field_childcare1_tid']['id'] = 'field_childcare1_tid';
  $handler->display->display_options['filters']['field_childcare1_tid']['table'] = 'field_data_field_childcare1';
  $handler->display->display_options['filters']['field_childcare1_tid']['field'] = 'field_childcare1_tid';
  $handler->display->display_options['filters']['field_childcare1_tid']['ui_name'] = 'KidZone';
  $handler->display->display_options['filters']['field_childcare1_tid']['value'] = array(
    39 => '39',
  );
  $handler->display->display_options['filters']['field_childcare1_tid']['group'] = 2;
  $handler->display->display_options['filters']['field_childcare1_tid']['expose']['operator_id'] = 'field_childcare1_tid_op';
  $handler->display->display_options['filters']['field_childcare1_tid']['expose']['label'] = 'KidZone:';
  $handler->display->display_options['filters']['field_childcare1_tid']['expose']['operator'] = 'field_childcare1_tid_op';
  $handler->display->display_options['filters']['field_childcare1_tid']['expose']['identifier'] = 'kidzone';
  $handler->display->display_options['filters']['field_childcare1_tid']['expose']['reduce'] = 1;
  $handler->display->display_options['filters']['field_childcare1_tid']['reduce_duplicates'] = 1;
  $handler->display->display_options['filters']['field_childcare1_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_childcare1_tid']['vocabulary'] = 'childcare';
  $handler->display->display_options['filters']['field_childcare1_tid']['error_message'] = 1;
  /* Filter criterion: Content: Inactive (field_inactive) */
  $handler->display->display_options['filters']['field_inactive_value']['id'] = 'field_inactive_value';
  $handler->display->display_options['filters']['field_inactive_value']['table'] = 'field_data_field_inactive';
  $handler->display->display_options['filters']['field_inactive_value']['field'] = 'field_inactive_value';
  $handler->display->display_options['filters']['field_inactive_value']['operator'] = '!=';
  $handler->display->display_options['filters']['field_inactive_value']['value'] = 'true';
  $handler->display->display_options['filters']['field_inactive_value']['group'] = 2;
  /* Filter criterion: Content: Public Search (field_public_search_listed) */
  $handler->display->display_options['filters']['field_public_search_listed_value']['id'] = 'field_public_search_listed_value';
  $handler->display->display_options['filters']['field_public_search_listed_value']['table'] = 'field_data_field_public_search_listed';
  $handler->display->display_options['filters']['field_public_search_listed_value']['field'] = 'field_public_search_listed_value';
  $handler->display->display_options['filters']['field_public_search_listed_value']['value'] = 'true';
  $handler->display->display_options['filters']['field_public_search_listed_value']['group'] = 2;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'ccb_group' => 'ccb_group',
  );
  $handler->display->display_options['filters']['type']['group'] = 2;
  $handler->display->display_options['filters']['type']['expose']['operator_id'] = 'type_op';
  $handler->display->display_options['filters']['type']['expose']['label'] = 'Type';
  $handler->display->display_options['filters']['type']['expose']['use_operator'] = FALSE;
  $handler->display->display_options['filters']['type']['expose']['operator'] = 'type_op';
  $handler->display->display_options['filters']['type']['expose']['identifier'] = 'type';
  $handler->display->display_options['filters']['type']['expose']['required'] = FALSE;
  $handler->display->display_options['filters']['type']['expose']['remember'] = FALSE;
  $handler->display->display_options['filters']['type']['expose']['multiple'] = FALSE;
  $handler->display->display_options['path'] = 'groups/childcare';
  $handler->display->display_options['menu']['type'] = 'tab';
  $handler->display->display_options['menu']['title'] = 'Childcare Available';
  $handler->display->display_options['menu']['weight'] = '9';
  $handler->display->display_options['menu']['name'] = 'menu-groups';
  $handler->display->display_options['tab_options']['title'] = 'Groups';
  $handler->display->display_options['tab_options']['weight'] = '0';

  /* Display: Featured */
  $handler = $view->new_display('block', 'Featured', 'block_1');
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '3';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['header'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Image */
  $handler->display->display_options['fields']['field_image']['id'] = 'field_image';
  $handler->display->display_options['fields']['field_image']['table'] = 'field_data_field_image';
  $handler->display->display_options['fields']['field_image']['field'] = 'field_image';
  $handler->display->display_options['fields']['field_image']['label'] = '';
  $handler->display->display_options['fields']['field_image']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_image']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_image']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_image']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_image']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_image']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_image']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_image']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_image']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_image']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_image']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_image']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_image']['element_default_classes'] = 0;
  $handler->display->display_options['fields']['field_image']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_image']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_image']['hide_alter_empty'] = 0;
  $handler->display->display_options['fields']['field_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_image']['settings'] = array(
    'image_style' => 'medium',
    'image_link' => 'content',
  );
  $handler->display->display_options['fields']['field_image']['group_column'] = 'fid';
  $handler->display->display_options['fields']['field_image']['field_api_classes'] = 0;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['title']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['title']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['title']['alter']['external'] = 0;
  $handler->display->display_options['fields']['title']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['title']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['title']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['title']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['title']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['title']['alter']['html'] = 0;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['element_wrapper_type'] = 'h4';
  $handler->display->display_options['fields']['title']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['title']['hide_empty'] = 0;
  $handler->display->display_options['fields']['title']['empty_zero'] = 0;
  $handler->display->display_options['fields']['title']['hide_alter_empty'] = 0;
  $handler->display->display_options['fields']['title']['link_to_node'] = 1;
  $handler->display->display_options['filter_groups']['groups'] = array(
    1 => 'AND',
    2 => 'AND',
  );
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Inactive (field_inactive) */
  $handler->display->display_options['filters']['field_inactive_value']['id'] = 'field_inactive_value';
  $handler->display->display_options['filters']['field_inactive_value']['table'] = 'field_data_field_inactive';
  $handler->display->display_options['filters']['field_inactive_value']['field'] = 'field_inactive_value';
  $handler->display->display_options['filters']['field_inactive_value']['operator'] = '!=';
  $handler->display->display_options['filters']['field_inactive_value']['value'] = 'true';
  $handler->display->display_options['filters']['field_inactive_value']['group'] = 1;
  /* Filter criterion: Content: Public Search (field_public_search_listed) */
  $handler->display->display_options['filters']['field_public_search_listed_value']['id'] = 'field_public_search_listed_value';
  $handler->display->display_options['filters']['field_public_search_listed_value']['table'] = 'field_data_field_public_search_listed';
  $handler->display->display_options['filters']['field_public_search_listed_value']['field'] = 'field_public_search_listed_value';
  $handler->display->display_options['filters']['field_public_search_listed_value']['value'] = 'true';
  $handler->display->display_options['filters']['field_public_search_listed_value']['group'] = 1;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'ccb_group' => 'ccb_group',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  $handler->display->display_options['filters']['type']['expose']['operator_id'] = 'type_op';
  $handler->display->display_options['filters']['type']['expose']['label'] = 'Type';
  $handler->display->display_options['filters']['type']['expose']['use_operator'] = FALSE;
  $handler->display->display_options['filters']['type']['expose']['operator'] = 'type_op';
  $handler->display->display_options['filters']['type']['expose']['identifier'] = 'type';
  $handler->display->display_options['filters']['type']['expose']['required'] = FALSE;
  $handler->display->display_options['filters']['type']['expose']['remember'] = FALSE;
  $handler->display->display_options['filters']['type']['expose']['multiple'] = FALSE;
  /* Filter criterion: Content: Promoted to front page */
  $handler->display->display_options['filters']['promote']['id'] = 'promote';
  $handler->display->display_options['filters']['promote']['table'] = 'node';
  $handler->display->display_options['filters']['promote']['field'] = 'promote';
  $handler->display->display_options['filters']['promote']['value'] = '1';
  $handler->display->display_options['filters']['promote']['group'] = 1;
  $handler->display->display_options['block_description'] = 'Featured Groups';

  /* Display: Page 6 */
  $handler = $view->new_display('page', 'Page 6', 'page_6');
  $handler->display->display_options['defaults']['exposed_form'] = FALSE;
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['exposed_form']['options']['autosubmit'] = 1;
  $handler->display->display_options['exposed_form']['options']['autosubmit_hide'] = 1;
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['grouping'] = '';
  $handler->display->display_options['style_options']['columns'] = array(
    'title' => 'title',
    'field_meetingday1' => 'field_meetingday1',
    'field_meetingtime' => 'field_meetingday1',
    'field_area' => 'field_area',
    'field_registrationurl' => 'field_registrationurl',
  );
  $handler->display->display_options['style_options']['default'] = '-1';
  $handler->display->display_options['style_options']['info'] = array(
    'title' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
    ),
    'field_meetingday1' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
    ),
    'field_meetingtime' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
    ),
    'field_area' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
    ),
    'field_registrationurl' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
    ),
  );
  $handler->display->display_options['style_options']['override'] = 1;
  $handler->display->display_options['style_options']['sticky'] = 0;
  $handler->display->display_options['style_options']['empty_table'] = 0;
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['title']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['title']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['title']['alter']['external'] = 0;
  $handler->display->display_options['fields']['title']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['title']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['title']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['title']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['title']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['title']['alter']['html'] = 0;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['title']['hide_empty'] = 0;
  $handler->display->display_options['fields']['title']['empty_zero'] = 0;
  $handler->display->display_options['fields']['title']['hide_alter_empty'] = 0;
  $handler->display->display_options['fields']['title']['link_to_node'] = 1;
  /* Field: Content: Meeting Day */
  $handler->display->display_options['fields']['field_meetingday1']['id'] = 'field_meetingday1';
  $handler->display->display_options['fields']['field_meetingday1']['table'] = 'field_data_field_meetingday1';
  $handler->display->display_options['fields']['field_meetingday1']['field'] = 'field_meetingday1';
  $handler->display->display_options['fields']['field_meetingday1']['label'] = 'When';
  $handler->display->display_options['fields']['field_meetingday1']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_meetingday1']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_meetingday1']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_meetingday1']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_meetingday1']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_meetingday1']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_meetingday1']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_meetingday1']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_meetingday1']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_meetingday1']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_meetingday1']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_meetingday1']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_meetingday1']['element_label_type'] = 'strong';
  $handler->display->display_options['fields']['field_meetingday1']['element_label_colon'] = 1;
  $handler->display->display_options['fields']['field_meetingday1']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_meetingday1']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_meetingday1']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_meetingday1']['hide_alter_empty'] = 0;
  $handler->display->display_options['fields']['field_meetingday1']['type'] = 'taxonomy_term_reference_plain';
  $handler->display->display_options['fields']['field_meetingday1']['field_api_classes'] = 0;
  /* Field: Content: Meeting time */
  $handler->display->display_options['fields']['field_meetingtime']['id'] = 'field_meetingtime';
  $handler->display->display_options['fields']['field_meetingtime']['table'] = 'field_data_field_meetingtime';
  $handler->display->display_options['fields']['field_meetingtime']['field'] = 'field_meetingtime';
  $handler->display->display_options['fields']['field_meetingtime']['label'] = '';
  $handler->display->display_options['fields']['field_meetingtime']['alter']['alter_text'] = 1;
  $handler->display->display_options['fields']['field_meetingtime']['alter']['text'] = '| [field_meetingtime]';
  $handler->display->display_options['fields']['field_meetingtime']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_meetingtime']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_meetingtime']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_meetingtime']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_meetingtime']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_meetingtime']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_meetingtime']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_meetingtime']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_meetingtime']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_meetingtime']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_meetingtime']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_meetingtime']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_meetingtime']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_meetingtime']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_meetingtime']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_meetingtime']['hide_alter_empty'] = 0;
  $handler->display->display_options['fields']['field_meetingtime']['field_api_classes'] = 0;
  $handler->display->display_options['filter_groups']['groups'] = array(
    1 => 'OR',
    2 => 'AND',
  );
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Search: Search Terms */
  $handler->display->display_options['filters']['keys']['id'] = 'keys';
  $handler->display->display_options['filters']['keys']['table'] = 'search_index';
  $handler->display->display_options['filters']['keys']['field'] = 'keys';
  $handler->display->display_options['filters']['keys']['group'] = 1;
  $handler->display->display_options['filters']['keys']['exposed'] = TRUE;
  $handler->display->display_options['filters']['keys']['expose']['operator_id'] = 'keys_op';
  $handler->display->display_options['filters']['keys']['expose']['label'] = 'Search';
  $handler->display->display_options['filters']['keys']['expose']['operator'] = 'keys_op';
  $handler->display->display_options['filters']['keys']['expose']['identifier'] = 'groupsearch';
  $handler->display->display_options['filters']['keys']['expose']['multiple'] = FALSE;
  /* Filter criterion: Department */
  $handler->display->display_options['filters']['field_department_tid']['id'] = 'field_department_tid';
  $handler->display->display_options['filters']['field_department_tid']['table'] = 'field_data_field_department';
  $handler->display->display_options['filters']['field_department_tid']['field'] = 'field_department_tid';
  $handler->display->display_options['filters']['field_department_tid']['ui_name'] = 'Department';
  $handler->display->display_options['filters']['field_department_tid']['group'] = 1;
  $handler->display->display_options['filters']['field_department_tid']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_department_tid']['expose']['operator_id'] = 'field_department_tid_op';
  $handler->display->display_options['filters']['field_department_tid']['expose']['label'] = 'Ministry Department:';
  $handler->display->display_options['filters']['field_department_tid']['expose']['operator'] = 'field_department_tid_op';
  $handler->display->display_options['filters']['field_department_tid']['expose']['identifier'] = 'dept';
  $handler->display->display_options['filters']['field_department_tid']['expose']['multiple'] = 1;
  $handler->display->display_options['filters']['field_department_tid']['expose']['reduce'] = 0;
  $handler->display->display_options['filters']['field_department_tid']['reduce_duplicates'] = 1;
  $handler->display->display_options['filters']['field_department_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_department_tid']['vocabulary'] = 'departments';
  $handler->display->display_options['filters']['field_department_tid']['error_message'] = 1;
  /* Filter criterion: Content: Inactive (field_inactive) */
  $handler->display->display_options['filters']['field_inactive_value']['id'] = 'field_inactive_value';
  $handler->display->display_options['filters']['field_inactive_value']['table'] = 'field_data_field_inactive';
  $handler->display->display_options['filters']['field_inactive_value']['field'] = 'field_inactive_value';
  $handler->display->display_options['filters']['field_inactive_value']['operator'] = '!=';
  $handler->display->display_options['filters']['field_inactive_value']['value'] = 'true';
  $handler->display->display_options['filters']['field_inactive_value']['group'] = 2;
  /* Filter criterion: Content: Public Search (field_public_search_listed) */
  $handler->display->display_options['filters']['field_public_search_listed_value']['id'] = 'field_public_search_listed_value';
  $handler->display->display_options['filters']['field_public_search_listed_value']['table'] = 'field_data_field_public_search_listed';
  $handler->display->display_options['filters']['field_public_search_listed_value']['field'] = 'field_public_search_listed_value';
  $handler->display->display_options['filters']['field_public_search_listed_value']['value'] = 'true';
  $handler->display->display_options['filters']['field_public_search_listed_value']['group'] = 2;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'ccb_group' => 'ccb_group',
  );
  $handler->display->display_options['filters']['type']['group'] = 2;
  $handler->display->display_options['filters']['type']['expose']['operator_id'] = 'type_op';
  $handler->display->display_options['filters']['type']['expose']['label'] = 'Type';
  $handler->display->display_options['filters']['type']['expose']['use_operator'] = FALSE;
  $handler->display->display_options['filters']['type']['expose']['operator'] = 'type_op';
  $handler->display->display_options['filters']['type']['expose']['identifier'] = 'type';
  $handler->display->display_options['filters']['type']['expose']['required'] = FALSE;
  $handler->display->display_options['filters']['type']['expose']['remember'] = FALSE;
  $handler->display->display_options['filters']['type']['expose']['multiple'] = FALSE;
  $handler->display->display_options['path'] = 'facebook';
  $export['CCBGroups_defaults_feed_items'] = $view;

  return $export;
}
