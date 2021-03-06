<?php

/**
 * @file
 * Implements core hooks for wet4_panel_layouts.
 */

/**
 * Implements hook_panels_layouts().
 */
function wet4_panel_layouts_laurier_panels_layouts() {
  $items['laurier'] = array(
    'title' => t('Laurier'),
    'category' => t('Web Experience Toolkit'),
    'icon' => 'laurier.png',
    'theme' => 'laurier',
    'admin css' => 'laurier.admin.css',
    'css' => 'laurier.css',
    'theme arguments' => array('id', 'content'),
    'regions' => array(
      'laurier_top'    => t('Top (conditional)'),
      'laurier_content'  => t('Content'),
      'laurier_bottom' => t('Bottom (conditional)'),
    ),
    'bodyid' => 'wb-body',
    'type' => 'one',
    'options' => array(),
    'styles' => array(),
  );

  return $items;
}

/**
 * Preprocess variables for laurier.tpl.php.
 */
function template_preprocess_laurier(&$vars) {
  $vars['panel_prefix'] = '';
  $vars['panel_suffix'] = '';
}
