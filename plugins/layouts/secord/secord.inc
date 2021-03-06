<?php

/**
 * @file
 * Implements core hooks for wet4_panel_layouts.
 */

/**
 * Implements hook_panels_layouts().
 */
function wet4_panel_layouts_secord_panels_layouts() {
  $items['secord'] = array(
    'title'    => t('Secord'),
    'category' => t('Web Experience Toolkit'),
    'icon'     => 'secord.png',
    'theme'    => 'secord',
    'admin css' => 'secord.admin.css',
    'css' => 'secord.css',
    'theme arguments' => array('id', 'content'),
    'regions' => array(
      'secord_top_left'  => t('Top Left'),
      'secord_top_right_1'  => t('Top Right'),
      'secord_mid_left' => t('Middle Left'),
      'secord_mid_center'  => t('Middle Center'),
      'secord_mid_right' => t('Middle Right'),
      'secord_bottom_left' => t('Bottom Left'),
      'secord_bottom_center'  => t('Bottom Center'),
      'secord_bottom_right' => t('Bottom Right'),
    ),
    'bodyid' => 'wb-body',
    'type' => 'three',
    'options' => array(),
    'styles' => array(),
  );

  return $items;
}

/**
 * Preprocess variables for secord.tpl.php.
 */
function template_preprocess_secord(&$vars) {
  $vars['panel_prefix'] = '';
  $vars['panel_suffix'] = '';
}
