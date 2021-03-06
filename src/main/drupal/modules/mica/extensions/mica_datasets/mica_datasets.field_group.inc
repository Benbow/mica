<?php
/**
 * @file
 * mica_datasets.field_group.inc
 */

/**
 * Implements hook_field_group_info().
 */
function mica_datasets_field_group_info() {
  $export = array();

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_categories|node|variable|default';
  $field_group->group_name = 'group_categories';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'variable';
  $field_group->mode = 'default';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Categories',
    'weight' => '3',
    'children' => array(
      0 => 'field_variable_categories',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'description' => '',
        'classes' => '',
      ),
    ),
  );
  $export['group_categories|node|variable|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_categories|node|variable|left_area';
  $field_group->group_name = 'group_categories';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'variable';
  $field_group->mode = 'left_area';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Categories',
    'weight' => '29',
    'children' => array(
      0 => 'field_variable_categories',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'description' => '',
        'classes' => '',
      ),
    ),
  );
  $export['group_categories|node|variable|left_area'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_datasets|node|study|form';
  $field_group->group_name = 'group_datasets';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'study';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_tabs';
  $field_group->data = array(
    'label' => 'Datasets',
    'weight' => '14',
    'children' => array(
      0 => 'mica_dataset',
      1 => 'mica_opal',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'label' => 'Datasets',
      'instance_settings' => array(
        'required_fields' => 1,
        'classes' => '',
        'description' => '',
      ),
      'formatter' => 'collapsible',
    ),
  );
  $export['group_datasets|node|study|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_description|node|variable|default';
  $field_group->group_name = 'group_description';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'variable';
  $field_group->mode = 'default';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Description',
    'weight' => '0',
    'children' => array(
      0 => 'body',
      1 => 'field_dataset',
      2 => 'field_label',
      3 => 'field_repeatable',
      4 => 'field_unit',
      5 => 'field_value_type',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'classes' => '',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_description|node|variable|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_description|node|variable|left_area';
  $field_group->group_name = 'group_description';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'variable';
  $field_group->mode = 'left_area';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Description',
    'weight' => '0',
    'children' => array(
      0 => 'field_dataset',
      1 => 'field_label',
      2 => 'field_repeatable',
      3 => 'field_value_type',
      4 => 'field_unit',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'formatter' => 'open',
      'instance_settings' => array(
        'description' => '',
        'classes' => '',
      ),
    ),
  );
  $export['group_description|node|variable|left_area'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_dimensions|node|variable|form';
  $field_group->group_name = 'group_dimensions';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'variable';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_tabs';
  $field_group->data = array(
    'label' => 'Domains',
    'weight' => '2',
    'children' => array(
      0 => 'field_anthropometric_structures',
      1 => 'field_body_functions',
      2 => 'field_body_structures',
      3 => 'field_data_source',
      4 => 'field_disease_history',
      5 => 'field_early_life',
      6 => 'field_essence',
      7 => 'field_individual_participant_mea',
      8 => 'field_laboratory_measures',
      9 => 'field_life_habits_behaviours',
      10 => 'field_measure',
      11 => 'field_medical_health_interv',
      12 => 'field_medication',
      13 => 'field_perception_of_health',
      14 => 'field_period',
      15 => 'field_physical_environment',
      16 => 'field_reproductive_history',
      17 => 'field_social_environment',
      18 => 'field_sociodemographic_charact',
      19 => 'field_target',
    ),
    'format_type' => 'htab',
    'format_settings' => array(
      'label' => 'Domains',
      'instance_settings' => array(
        'required_fields' => 1,
        'classes' => '',
        'description' => '',
      ),
      'formatter' => 'open',
    ),
  );
  $export['group_dimensions|node|variable|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_dimensions|node|variable|right_area';
  $field_group->group_name = 'group_dimensions';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'variable';
  $field_group->mode = 'right_area';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Domains',
    'weight' => '0',
    'children' => array(
      0 => 'field_anthropometric_structures',
      1 => 'field_body_functions',
      2 => 'field_body_structures',
      3 => 'field_data_source',
      4 => 'field_disease_history',
      5 => 'field_early_life',
      6 => 'field_essence',
      7 => 'field_individual_participant_mea',
      8 => 'field_laboratory_measures',
      9 => 'field_life_habits_behaviours',
      10 => 'field_measure',
      11 => 'field_medical_health_interv',
      12 => 'field_medication',
      13 => 'field_perception_of_health',
      14 => 'field_period',
      15 => 'field_physical_environment',
      16 => 'field_reproductive_history',
      17 => 'field_social_environment',
      18 => 'field_sociodemographic_charact',
      19 => 'field_target',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'description' => '',
        'classes' => '',
      ),
    ),
  );
  $export['group_dimensions|node|variable|right_area'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_general_info|node|variable|form';
  $field_group->group_name = 'group_general_info';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'variable';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_tabs';
  $field_group->data = array(
    'label' => 'General Information',
    'weight' => '1',
    'children' => array(
      0 => 'body',
      1 => 'field_dataset',
      2 => 'field_label',
      3 => 'field_repeatable',
      4 => 'field_unit',
      5 => 'field_value_type',
      6 => 'field_variable_categories',
      7 => 'title_field',
    ),
    'format_type' => 'htab',
    'format_settings' => array(
      'label' => 'General Information',
      'instance_settings' => array(
        'required_fields' => 1,
        'classes' => '',
        'description' => '',
      ),
      'formatter' => 'open',
    ),
  );
  $export['group_general_info|node|variable|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_tabs|node|variable|form';
  $field_group->group_name = 'group_tabs';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'variable';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Tabs',
    'weight' => '0',
    'children' => array(
      0 => 'group_dimensions',
      1 => 'group_general_info',
    ),
    'format_type' => 'htabs',
    'format_settings' => array(
      'formatter' => '',
      'instance_settings' => array(
        'classes' => '',
      ),
    ),
  );
  $export['group_tabs|node|variable|form'] = $field_group;

  return $export;
}
