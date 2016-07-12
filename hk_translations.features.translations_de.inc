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
  $translations['de:views']['0871a93c5c44465f3fc8427b08297622'] = array(
    'source' => '<div class="no-results">There is no meeting scheduled for this week.</div>',
    'context' => 'agent_calender:block_1:empty:views:area:content',
    'location' => 'views:agent_calender:block_1:empty:views:area:content',
    'translation' => 'Kein Termin in dieser Woche.',
    'plid' => 0,
    'plural' => 0,
  );
  $translatables[] = t('<div class="no-results">There is no meeting scheduled for this week.</div>', array(), array('context' => 'agent_calender:block_1:empty:views:area:content'));
  $translations['de:views']['63cf170e28b1b29c19da57da61a6bd89'] = array(
    'source' => 'My Contacts',
    'context' => 'agent_central:page:title',
    'location' => 'views:agent_central:page:title',
    'translation' => 'Meine Kontakte',
    'plid' => 0,
    'plural' => 0,
  );
  $translatables[] = t('My Contacts', array(), array('context' => 'agent_central:page:title'));
  $translations['de:views']['7656c2ea6c2c8098aa326c5d01d2fa8f'] = array(
    'source' => '<div class="no-results">There is no meeting scheduled for this year.</div>',
    'context' => 'agent_calender:block_3:empty:views:area:content',
    'location' => 'views:agent_calender:block_3:empty:views:area:content',
    'translation' => 'Kein Termin in diesem Jahr.',
    'plid' => 0,
    'plural' => 0,
  );
  $translatables[] = t('<div class="no-results">There is no meeting scheduled for this year.</div>', array(), array('context' => 'agent_calender:block_3:empty:views:area:content'));
  $translations['de:views']['acecce89f04e2f13852420c7ee448166'] = array(
    'source' => '<h2 class="block-title">My Contacts</h2>',
    'context' => 'agent_central:page:header:views:area:content',
    'location' => 'views:agent_central:page:header:views:area:content',
    'translation' => ' <h2 class="block-title">Meine Kontakte</h2> ',
    'plid' => 0,
    'plural' => 0,
  );
  $translatables[] = t('<h2 class="block-title">My Contacts</h2>', array(), array('context' => 'agent_central:page:header:views:area:content'));
  $translations['de:views']['b9d4959f7a3d19e719d3367f26a16364'] = array(
    'source' => 'Due Date',
    'context' => 'unclaimed_leads_table_view:block_4:field:field_data_field_activity_date:field_activity_date:label',
    'location' => 'views:unclaimed_leads_table_view:block_4:field:field_data_field_activity_date:field_activity_date:label',
    'translation' => 'fällig am',
    'plid' => 0,
    'plural' => 0,
  );
  $translatables[] = t('Due Date', array(), array('context' => 'unclaimed_leads_table_view:block_4:field:field_data_field_activity_date:field_activity_date:label'));
  $translations['de:views']['fd141640564e2ff08ef7f0f5d3efa038'] = array(
    'source' => 'My Contacts',
    'context' => 'crm_contact_page:block_1:title',
    'location' => 'views:crm_contact_page:block_1:title',
    'translation' => 'Meine Kontakte',
    'plid' => 0,
    'plural' => 0,
  );
  $translatables[] = t('My Contacts', array(), array('context' => 'crm_contact_page:block_1:title'));
  return $translations;
}
