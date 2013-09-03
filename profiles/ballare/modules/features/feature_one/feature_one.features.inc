<?php
/**
 * @file
 * feature_one.features.inc
 */

/**
 * Implements hook_node_info().
 */
function feature_one_node_info() {
  $items = array(
    'audio_gallery' => array(
      'name' => t('Audio gallery'),
      'base' => 'node_content',
      'description' => t('A collection of audio files.'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
    'image_gallery' => array(
      'name' => t('Image gallery'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
    'video_gallery' => array(
      'name' => t('Video gallery'),
      'base' => 'node_content',
      'description' => t('A collection of video files.'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  return $items;
}
