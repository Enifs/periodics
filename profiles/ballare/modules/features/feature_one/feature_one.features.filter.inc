<?php
/**
 * @file
 * feature_one.features.filter.inc
 */

/**
 * Implements hook_filter_default_formats().
 */
function feature_one_filter_default_formats() {
  $formats = array();

  // Exported format: Rich text.
  $formats['rich_text'] = array(
    'format' => 'rich_text',
    'name' => 'Rich text',
    'cache' => 1,
    'status' => 1,
    'weight' => 0,
    'filters' => array(),
  );

  return $formats;
}
