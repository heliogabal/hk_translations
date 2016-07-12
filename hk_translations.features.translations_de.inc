<?php
/**
 * @file
 * hk_translations.features.translations_de.inc
 */

/**
 * Implements hook_translations_de_defaults().
 */
function hk_translations_translations_de_defaults() {
  $translations = array();
  $translatables = array();
  $translations['de:default']['14c841eea7774b78caf79c58989f9625'] = array(
    'source' => 'Due Date',
    'context' => '',
    'location' => '/crm-core/agent-central/11',
    'translation' => 'fällig am',
    'plid' => 0,
    'plural' => 0,
  );
  $translatables[] = t('Due Date', array(), array('context' => ''));
  $translations['de:default']['25fd489490b57e6d151178d42e2946be'] = array(
    'source' => '<div class="no-results">There is no meeting scheduled for this week.</div>',
    'context' => '',
    'location' => '/crm-core/agent-central/11',
    'translation' => 'Kein Termin in dieser Woche.',
    'plid' => 0,
    'plural' => 0,
  );
  $translatables[] = t('<div class="no-results">There is no meeting scheduled for this week.</div>', array(), array('context' => ''));
  $translations['de:default']['4260560c2d003723c8a2ca634cb4c67b'] = array(
    'source' => '<h2 class="block-title">My Contacts</h2>',
    'context' => '',
    'location' => '/',
    'translation' => ' <h2 class="block-title">Meine Kontakte</h2> ',
    'plid' => 0,
    'plural' => 0,
  );
  $translatables[] = t('<h2 class="block-title">My Contacts</h2>', array(), array('context' => ''));
  $translations['de:default']['6307dd2f57d3f7f949eca03a2a54f6e0'] = array(
    'source' => 'Last Activity',
    'context' => '',
    'location' => '/crm-core/agent-central/135',
    'translation' => 'Letzte Aktivität',
    'plid' => 0,
    'plural' => 0,
  );
  $translatables[] = t('Last Activity', array(), array('context' => ''));
  $translations['de:default']['87d44570ef774f6fc0e95fdf55d2ab97'] = array(
    'source' => 'There is no buyer for this agent.',
    'context' => '',
    'location' => '/',
    'translation' => 'Keine verwalteten Kaufinteressenten.',
    'plid' => 0,
    'plural' => 0,
  );
  $translatables[] = t('There is no buyer for this agent.', array(), array('context' => ''));
  $translations['de:default']['8fe3c12bc7a7970b3bace1dd4f0fbc93'] = array(
    'source' => '<div class="no-results">There is no meeting scheduled for this year.</div>',
    'context' => '',
    'location' => '/crm-core/agent-central/11',
    'translation' => 'Kein Termin in diesem Jahr.',
    'plid' => 0,
    'plural' => 0,
  );
  $translatables[] = t('<div class="no-results">There is no meeting scheduled for this year.</div>', array(), array('context' => ''));
  $translations['de:default']['bfd8b498aa9a6f44542512fcf7495dea'] = array(
    'source' => 'Mark as completed',
    'context' => '',
    'location' => '/crm-core/activity/193',
    'translation' => 'erledigt',
    'plid' => 0,
    'plural' => 0,
  );
  $translatables[] = t('Mark as completed', array(), array('context' => ''));
  $translations['de:default']['d2bc3e6523fbe8715ab8f48006f145d2'] = array(
    'source' => 'Upcomming meeting & schedule',
    'context' => '',
    'location' => '/crm-core/agent-central/11',
    'translation' => 'Anstehende Termine und Kalender',
    'plid' => 0,
    'plural' => 0,
  );
  $translatables[] = t('Upcomming meeting & schedule', array(), array('context' => ''));
  $translations['de:default']['d55085482b3e8da780755832c17d7d60'] = array(
    'source' => 'Last Date',
    'context' => '',
    'location' => '/crm-core/agent-central/135',
    'translation' => 'Letzter Kontakt',
    'plid' => 0,
    'plural' => 0,
  );
  $translatables[] = t('Last Date', array(), array('context' => ''));
  $translations['de:default']['fe50bf5454ae9af0574c09059d9e8f18'] = array(
    'source' => 'My Contacts',
    'context' => '',
    'location' => '/admin/structure/features',
    'translation' => 'Meine Kontakte',
    'plid' => 0,
    'plural' => 0,
  );
  $translatables[] = t('My Contacts', array(), array('context' => ''));
  $translations['de:views']['0ac9739252c3b0e5e2f5faba418ed184'] = array(
    'source' => 'Kein Termin in diesem Jahr.',
    'context' => 'agent_calender:block_3:empty:views:area:content',
    'location' => 'views:agent_calender:block_3:empty:views:area:content',
    'translation' => 'Kein Termin in diesem Jahr.',
    'plid' => 0,
    'plural' => 0,
  );
  $translatables[] = t('Kein Termin in diesem Jahr.', array(), array('context' => 'agent_calender:block_3:empty:views:area:content'));
  $translations['de:views']['31149bade1f73ed7ba33591efd60ec73'] = array(
    'source' => 'Kein Termin in dieser Woche.',
    'context' => 'agent_calender:block_1:empty:views:area:content',
    'location' => 'views:agent_calender:block_1:empty:views:area:content',
    'translation' => 'Kein Termin in dieser Woche.',
    'plid' => 0,
    'plural' => 0,
  );
  $translatables[] = t('Kein Termin in dieser Woche.', array(), array('context' => 'agent_calender:block_1:empty:views:area:content'));
  $translations['de:views']['87ebc1f7aa01fcecd1e52b0d6196d24d'] = array(
    'source' => 'fällig am',
    'context' => 'unclaimed_leads_table_view:block_4:field:field_data_field_activity_date:field_activity_date:label',
    'location' => 'views:unclaimed_leads_table_view:block_4:field:field_data_field_activity_date:field_activity_date:label',
    'translation' => 'fällig am',
    'plid' => 0,
    'plural' => 0,
  );
  $translatables[] = t('fällig am', array(), array('context' => 'unclaimed_leads_table_view:block_4:field:field_data_field_activity_date:field_activity_date:label'));
  $translations['de:views']['92f789fce66b48b1310bedeb4bba5321'] = array(
    'source' => 'Meine Kontakte',
    'context' => 'agent_central:page:title',
    'location' => 'views:agent_central:page:title',
    'translation' => 'Meine Kontakte',
    'plid' => 0,
    'plural' => 0,
  );
  $translatables[] = t('Meine Kontakte', array(), array('context' => 'agent_central:page:title'));
  $translations['de:views']['c1790eedc7ebc19b037924483e0b87e4'] = array(
    'source' => ' <h2 class="block-title">Meine Kontakte</h2> ',
    'context' => 'agent_central:page:header:views:area:content',
    'location' => 'views:agent_central:page:header:views:area:content',
    'translation' => ' <h2 class="block-title">Meine Kontakte</h2> ',
    'plid' => 0,
    'plural' => 0,
  );
  $translatables[] = t(' <h2 class="block-title">Meine Kontakte</h2> ', array(), array('context' => 'agent_central:page:header:views:area:content'));
  $translations['de:views']['ced25bee2c597b6b9113f7ec707fa854'] = array(
    'source' => 'Meine Kontakte',
    'context' => 'crm_contact_page:block_1:title',
    'location' => 'views:crm_contact_page:block_1:title',
    'translation' => 'Meine Kontakte',
    'plid' => 0,
    'plural' => 0,
  );
  $translatables[] = t('Meine Kontakte', array(), array('context' => 'crm_contact_page:block_1:title'));
  return $translations;
}
