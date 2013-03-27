<?php

/**
 * Implementation of hook_views_data_alter().
 */
function crayon_views_data_alter(&$data) {
  // OG: Group.
  if (module_exists('og_views') && isset($data['og_ancestry']['group_nid']['field']['handler'])) {
    if (module_exists('spaces_og')) {
      $data['og_ancestry']['group_nid']['field']['handler'] = 'crayon_views_handler_field_spaces_og';
    }
    else {
      $data['og_ancestry']['group_nid']['field']['handler'] = 'crayon_views_handler_field_og';
    }
  }
  // Casetracker: Project.
  if (module_exists('casetracker') && isset($data['casetracker_case']['pid']['field']['handler'])) {
    $data['casetracker_case']['pid']['field']['handler'] = 'crayon_views_handler_field_project';
  }
}
