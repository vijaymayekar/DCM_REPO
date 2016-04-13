<?php
/**
 * @file
 * mysite_views_and_blocks.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function mysite_views_and_blocks_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'homepage_movies';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Homepage Movies';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Homepage Movies';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '3';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'grid';
  $handler->display->display_options['style_options']['columns'] = '3';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Field: Content: Movie Image */
  $handler->display->display_options['fields']['field_movie_image']['id'] = 'field_movie_image';
  $handler->display->display_options['fields']['field_movie_image']['table'] = 'field_data_field_movie_image';
  $handler->display->display_options['fields']['field_movie_image']['field'] = 'field_movie_image';
  $handler->display->display_options['fields']['field_movie_image']['label'] = '';
  $handler->display->display_options['fields']['field_movie_image']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_movie_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_movie_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_movie_image']['settings'] = array(
    'image_style' => '',
    'image_link' => 'content',
  );
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['exclude'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  /* Field: Global: Custom text */
  $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['table'] = 'views';
  $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['label'] = '';
  $handler->display->display_options['fields']['nothing']['alter']['text'] = '<div class="offer-unt"><div class="offer-image">
<div class="movie-image">
[field_movie_image]
</div>
<div class="book_ticket">
  <span class="ticket">Book Ticket</span>
  <p>[title]</p>
</div>
</div></div>';
  $handler->display->display_options['fields']['nothing']['element_label_colon'] = FALSE;
  /* Sort criterion: Content: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'movie' => 'movie',
  );
  /* Filter criterion: Content: Release Date (field_release_date) */
  $handler->display->display_options['filters']['field_release_date_value']['id'] = 'field_release_date_value';
  $handler->display->display_options['filters']['field_release_date_value']['table'] = 'field_data_field_release_date';
  $handler->display->display_options['filters']['field_release_date_value']['field'] = 'field_release_date_value';
  $handler->display->display_options['filters']['field_release_date_value']['operator'] = '<=';
  $handler->display->display_options['filters']['field_release_date_value']['form_type'] = 'date_popup';
  $handler->display->display_options['filters']['field_release_date_value']['default_date'] = '12AM today';

  /* Display: Bollywood Movies */
  $handler = $view->new_display('block', 'Bollywood Movies', 'block');
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'movie' => 'movie',
  );
  /* Filter criterion: Content: Release Date (field_release_date) */
  $handler->display->display_options['filters']['field_release_date_value']['id'] = 'field_release_date_value';
  $handler->display->display_options['filters']['field_release_date_value']['table'] = 'field_data_field_release_date';
  $handler->display->display_options['filters']['field_release_date_value']['field'] = 'field_release_date_value';
  $handler->display->display_options['filters']['field_release_date_value']['operator'] = '<=';
  $handler->display->display_options['filters']['field_release_date_value']['default_date'] = '12AM today';
  /* Filter criterion: Content: Movie Category (field_movie_category) */
  $handler->display->display_options['filters']['field_movie_category_value']['id'] = 'field_movie_category_value';
  $handler->display->display_options['filters']['field_movie_category_value']['table'] = 'field_data_field_movie_category';
  $handler->display->display_options['filters']['field_movie_category_value']['field'] = 'field_movie_category_value';
  $handler->display->display_options['filters']['field_movie_category_value']['value'] = array(
    'bollywood' => 'bollywood',
  );
  $handler->display->display_options['block_description'] = 'Bollywood Movies';

  /* Display: Hollywood Movies */
  $handler = $view->new_display('block', 'Hollywood Movies', 'block_1');
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'movie' => 'movie',
  );
  /* Filter criterion: Content: Release Date (field_release_date) */
  $handler->display->display_options['filters']['field_release_date_value']['id'] = 'field_release_date_value';
  $handler->display->display_options['filters']['field_release_date_value']['table'] = 'field_data_field_release_date';
  $handler->display->display_options['filters']['field_release_date_value']['field'] = 'field_release_date_value';
  $handler->display->display_options['filters']['field_release_date_value']['operator'] = '<=';
  $handler->display->display_options['filters']['field_release_date_value']['form_type'] = 'date_popup';
  $handler->display->display_options['filters']['field_release_date_value']['default_date'] = '12AM today';
  /* Filter criterion: Content: Movie Category (field_movie_category) */
  $handler->display->display_options['filters']['field_movie_category_value']['id'] = 'field_movie_category_value';
  $handler->display->display_options['filters']['field_movie_category_value']['table'] = 'field_data_field_movie_category';
  $handler->display->display_options['filters']['field_movie_category_value']['field'] = 'field_movie_category_value';
  $handler->display->display_options['filters']['field_movie_category_value']['value'] = array(
    'hollywood' => 'hollywood',
  );

  /* Display: Upcoming Movies */
  $handler = $view->new_display('block', 'Upcoming Movies', 'block_2');
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '1';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Movie Image */
  $handler->display->display_options['fields']['field_movie_image']['id'] = 'field_movie_image';
  $handler->display->display_options['fields']['field_movie_image']['table'] = 'field_data_field_movie_image';
  $handler->display->display_options['fields']['field_movie_image']['field'] = 'field_movie_image';
  $handler->display->display_options['fields']['field_movie_image']['label'] = '';
  $handler->display->display_options['fields']['field_movie_image']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_movie_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_movie_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_movie_image']['settings'] = array(
    'image_style' => '',
    'image_link' => 'content',
  );
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['exclude'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  /* Field: Global: Custom text */
  $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['table'] = 'views';
  $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['label'] = '';
  $handler->display->display_options['fields']['nothing']['alter']['text'] = '<div class="offer-unt"><div class="offer-image">
<div class="movie-image">
[field_movie_image]
</div>
<div class="book_ticket">
  <span class="ticket">View Details</span>
  <p>[title]</p>
</div>
</div></div>';
  $handler->display->display_options['fields']['nothing']['element_label_colon'] = FALSE;
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'movie' => 'movie',
  );
  /* Filter criterion: Content: Release Date (field_release_date) */
  $handler->display->display_options['filters']['field_release_date_value']['id'] = 'field_release_date_value';
  $handler->display->display_options['filters']['field_release_date_value']['table'] = 'field_data_field_release_date';
  $handler->display->display_options['filters']['field_release_date_value']['field'] = 'field_release_date_value';
  $handler->display->display_options['filters']['field_release_date_value']['operator'] = '>';
  $handler->display->display_options['filters']['field_release_date_value']['form_type'] = 'date_popup';
  $handler->display->display_options['filters']['field_release_date_value']['default_date'] = '12AM today';
  $export['homepage_movies'] = $view;

  $view = new view();
  $view->name = 'movies';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Movies';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Movies';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '10';
  $handler->display->display_options['style_plugin'] = 'grid';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Field: Content: Movie Image */
  $handler->display->display_options['fields']['field_movie_image']['id'] = 'field_movie_image';
  $handler->display->display_options['fields']['field_movie_image']['table'] = 'field_data_field_movie_image';
  $handler->display->display_options['fields']['field_movie_image']['field'] = 'field_movie_image';
  $handler->display->display_options['fields']['field_movie_image']['label'] = '';
  $handler->display->display_options['fields']['field_movie_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_movie_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_movie_image']['settings'] = array(
    'image_style' => 'movies_listing_thumbnail',
    'image_link' => 'content',
  );
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Field: Content: Movie Category */
  $handler->display->display_options['fields']['field_movie_category']['id'] = 'field_movie_category';
  $handler->display->display_options['fields']['field_movie_category']['table'] = 'field_data_field_movie_category';
  $handler->display->display_options['fields']['field_movie_category']['field'] = 'field_movie_category';
  $handler->display->display_options['fields']['field_movie_category']['label'] = '';
  $handler->display->display_options['fields']['field_movie_category']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_movie_category']['group_column'] = 'tid';
  /* Sort criterion: Content: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'movie' => 'movie',
  );

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['path'] = 'movies';
  $export['movies'] = $view;

  $view = new view();
  $view->name = 'related_movies';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Related Movies';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Related Movies';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '2';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Field: Content: Movie Image */
  $handler->display->display_options['fields']['field_movie_image']['id'] = 'field_movie_image';
  $handler->display->display_options['fields']['field_movie_image']['table'] = 'field_data_field_movie_image';
  $handler->display->display_options['fields']['field_movie_image']['field'] = 'field_movie_image';
  $handler->display->display_options['fields']['field_movie_image']['label'] = '';
  $handler->display->display_options['fields']['field_movie_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_movie_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_movie_image']['settings'] = array(
    'image_style' => '',
    'image_link' => 'content',
  );
  /* Sort criterion: Content: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  /* Contextual filter: Content: Nid */
  $handler->display->display_options['arguments']['nid']['id'] = 'nid';
  $handler->display->display_options['arguments']['nid']['table'] = 'node';
  $handler->display->display_options['arguments']['nid']['field'] = 'nid';
  $handler->display->display_options['arguments']['nid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['nid']['default_argument_type'] = 'node';
  $handler->display->display_options['arguments']['nid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['nid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['nid']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['nid']['not'] = TRUE;
  /* Contextual filter: Content: Movie Category (field_movie_category) */
  $handler->display->display_options['arguments']['field_movie_category_value']['id'] = 'field_movie_category_value';
  $handler->display->display_options['arguments']['field_movie_category_value']['table'] = 'field_data_field_movie_category';
  $handler->display->display_options['arguments']['field_movie_category_value']['field'] = 'field_movie_category_value';
  $handler->display->display_options['arguments']['field_movie_category_value']['default_action'] = 'default';
  $handler->display->display_options['arguments']['field_movie_category_value']['default_argument_type'] = 'raw';
  $handler->display->display_options['arguments']['field_movie_category_value']['default_argument_options']['index'] = '1';
  $handler->display->display_options['arguments']['field_movie_category_value']['default_argument_options']['use_alias'] = TRUE;
  $handler->display->display_options['arguments']['field_movie_category_value']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['field_movie_category_value']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['field_movie_category_value']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['field_movie_category_value']['limit'] = '0';
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'movie' => 'movie',
  );

  /* Display: Related Movies */
  $handler = $view->new_display('block', 'Related Movies', 'block');
  $handler->display->display_options['block_description'] = 'Related Movies';
  $export['related_movies'] = $view;

  return $export;
}
