<?php
/**
 * @file
 * gsb_feature_ranking_ct.field_group.inc
 */

/**
 * Implements hook_field_group_info().
 */
function gsb_feature_ranking_ct_field_group_info() {
  $export = array();

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_wrapper_title|node|ranking|news_listing';
  $field_group->group_name = 'group_wrapper_title';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'ranking';
  $field_group->mode = 'news_listing';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Title wrapper',
    'weight' => '1',
    'children' => array(
      0 => 'field_link_single',
      1 => 'media_icon',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Title wrapper',
      'instance_settings' => array(
        'id' => '',
        'classes' => 'group-wrapper-title',
        'description' => '',
        'show_label' => '0',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'none',
      ),
      'formatter' => 'open',
    ),
  );
  $export['group_wrapper_title|node|ranking|news_listing'] = $field_group;

  return $export;
}
