<?php
/**
 * @file
 * marvin_blog.features.inc
 */

/**
 * Implements hook_node_info().
 */
function marvin_blog_node_info() {
  $items = array(
    'marvin_blog' => array(
      'name' => t('Marvin Blog'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}
