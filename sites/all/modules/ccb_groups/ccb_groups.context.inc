<?php
/**
 * @file
 * ccb_groups.context.inc
 */

/**
 * Implements hook_context_default_contexts().
 */
function ccb_groups_context_default_contexts() {
  $export = array();

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'childcare';
  $context->description = '';
  $context->tag = 'Groups';
  $context->conditions = array(
    'node_taxonomy' => array(
      'values' => array(
        39 => 39,
      ),
      'options' => array(
        'node_form' => '0',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'block-3' => array(
          'module' => 'block',
          'delta' => 3,
          'region' => 'content',
          'weight' => '-10',
        ),
      ),
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('Groups');
  $export['childcare'] = $context;

  return $export;
}
