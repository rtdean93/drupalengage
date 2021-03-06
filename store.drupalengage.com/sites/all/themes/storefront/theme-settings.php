<?php
/**
 * @file
 * Controls the Theme Settings form using form api.
 */

/**
 * Alter to create the Theme Settings form.
 */
function storefront_form_system_theme_settings_alter(&$form, &$form_state, $form_id = NULL) {

  // General "alters" use a form id. Settings should not be set here.
  // For if you need to alter form for the running Theme (not theme setting).
  if (isset($form_id)) {
    return;
  }

  // Layout settings.
  $form['sf'] = array(
    '#type' => 'vertical_tabs',
    '#weight' => -10,
    '#default_tab' => 'defaults',
    '#attached' => array(
      'css' => array(drupal_get_path('theme', 'storefront') . '/css/settings.css'),
    ),
  );

  // Dlayout settings.
  $form['sf']['dlayout'] = array(
    '#type' => 'fieldset',
    '#title' => t('Width & Layout'),
    '#description' => '<h3>' . t('Default Layout') . '</h3><p>' . t('Set the page width, sidebar positions, and number of columns') . '</p>',
  );
  $form['sf']['dlayout']['dlayout-layout-wrapper'] = array(
    '#type' => 'fieldset',
    '#title' => t('Choose sidebar layout'),
    '#attributes' => array(
      'class' => array(
        'sf-layout-form',
      ),
    ),
  );
  $form['sf']['dlayout']['dlayout-layout-wrapper']['dlayout_layout'] = array(
    '#type' => 'radios',
    '#title' => '<strong>' . t('Choose sidebar positions') . '</strong>',
    '#default_value' => theme_get_setting('dlayout_layout'),
    '#options' => array(
      'three-col-grail' => t('Standard three column'),
      'three-col-right' => t('Three column, both sidebars on the right'),
      'three-col-left'  => t('Three column, both sidebars on the left'),
    ),
  );
  $form['sf']['dlayout']['dlayout-framing-wrapper'] = array(
    '#type' => 'fieldset',
    '#title' => t('Choose site framing'),
    '#attributes' => array(
      'class' => array(
        'sf-frame-form',
      ),
    ),
  );
  $form['sf']['dlayout']['dlayout-framing-wrapper']['dlayout_framing'] = array(
    '#type' => 'radios',
    '#title' => '<strong>' . t('Choose the site framing') . '</strong>',
    '#default_value' => theme_get_setting('dlayout_framing'),
    '#options' => array(
      'full' => t('Full browser fill'),
      'framed' => t('Padded sides'),
      'float'  => t('Floated content'),
    ),
  );
  $form['sf']['dlayout']['dlayout-width-wrapper'] = array(
    '#type' => 'fieldset',
    '#title' => t('Set the page width'),
    '#description' => '<strong>' . t('Set the page width') . '</strong><p>' . t('100% is recommended if using the "float" style framing selected above.') . '</p>',
  );
  $form['sf']['dlayout']['dlayout-width-wrapper']['dlayout_page_unit'] = array(
    '#type' => 'select',
    '#title' => t('Unit'),
    '#default_value' => theme_get_setting('dlayout_page_unit'),
    '#options' => array(
      'px' => 'px',
      '%' => '%',
      'em' => 'em',
    ),
  );
  $form['sf']['dlayout']['dlayout-width-wrapper']['dlayout_page_width'] = array(
    '#type'  => 'textfield',
    '#title' => t('Page width'),
    '#default_value' => theme_get_setting('dlayout_page_width'),
    '#size' => 4,
    '#maxlenght' => 4,
    '#required' => TRUE,
  );
  $form['sf']['dlayout']['dlayout-maxwidth-wrapper'] = array(
    '#type' => 'fieldset',
    '#title' => t('Set a max width'),
    '#states' => array(
      'visible' => array(
        'select[name="dlayout_page_unit"]' => array('selected' => 'selected', 'value' => '%'),
      ),
    ),
  );
  $form['sf']['dlayout']['dlayout-maxwidth-wrapper']['dlayout_set_max_width'] = array(
    '#type' => 'checkbox',
    '#title' => t('Set a max width'),
    '#default_value' => theme_get_setting('dlayout_set_max_width'),
  );
  $form['sf']['dlayout']['dlayout-maxwidth-wrapper']['dlayout_max_width_unit'] = array(
    '#type' => 'select',
    '#title' => t('Unit'),
    '#default_value' => theme_get_setting('dlayout_max_width_unit'),
    '#options' => array(
      'px' => 'px',
      'em' => 'em',
    ),
    '#states' => array(
      'visible' => array(
        'input[name="dlayout_set_max_width"]' => array('checked' => TRUE),
      ),
    ),
  );
  $form['sf']['dlayout']['dlayout-maxwidth-wrapper']['dlayout_max_width'] = array(
    '#type'  => 'textfield',
    '#title' => t('Max width'),
    '#default_value' => theme_get_setting('dlayout_max_width'),
    '#size' => 4,
    '#maxlenght' => 4,
    '#states' => array(
      'visible' => array(
        'input[name="dlayout_set_max_width"]' => array('checked' => TRUE),
      ),
    ),
  );

  $form['sf']['grid'] = array(
    '#type' => 'fieldset',
    '#title' => t('Grid Settings'),
    '#description' => '<h3>' . t('Grid Settings') . '</h3><p>' . t('Set the number of columns and
    the width of each column') . '</p>',
  );

  $form['sf']['grid']['grid-wrapper'] = array(
    '#type' => 'fieldset',
    '#title' => t('The 960 Grid System Options.'),
    '#description' => t('<p>Columns are generated by percentages, based on 960 grid proportions.</p>'),
  );
  $form['sf']['grid']['grid-wrapper']['grid_columns'] = array(
    '#type' => 'radios',
    '#default_value' => theme_get_setting('grid_columns'),
    '#options' => array(
      'container-0' => t('No Grid'),
      'container-24' => t('24 Columns'),
      'container-16' => t('16 Columns'),
      'container-12' => t('12 Columns'),
    ),
  );
  $form['sf']['grid']['grid-wrapper']['grid-none-wrapper'] = array(
    '#type' => 'fieldset',
    '#title' => t('Set sidebar widths'),
    '#description' => '<strong>' . t('No Grid Is Selected') . '</strong><p>' . t("The sidebar settings should be applied in the theme's CSS folders.") . '</p>',
    '#states' => array(
      'visible' => array(
        'input[name="grid_columns"]' => array('value' => 'container-0'),
      ),
    ),
  );

  // Create variables for 24 column sidebar options.
  $sidebars24 = array(
    '0' => t('Use CSS'),
    '3' => t('3 Columns'),
    '4' => t('4 Columns'),
    '5' => t('5 Columns'),
    '6' => t('6 Columns'),
    '7' => t('7 Columns'),
    '8' => t('8 Columns'),
    '9' => t('9 Columns'),
    '10' => t('10 Columns'),
    '11' => t('11 Columns'),
    '12' => t('12 Columns'),
  );
  $states24 = array(
    'visible' => array(
      'input[name="grid_columns"]' => array('value' => 'container-24'),
    ),
    'disabled' => array(
      'input[name="grid_columns"]' => array('value' => 'container-12'),
      'input[name="grid_columns"]' => array('value' => 'container-16'),
    ),
  );

  // Create variables for 16 column sidebar options.
  $sidebars16 = array(
    '0' => t('Use CSS'),
    '2' => t('2 Columns'),
    '3' => t('3 Columns'),
    '4' => t('4 Columns'),
    '5' => t('5 Columns'),
    '6' => t('6 Columns'),
    '7' => t('7 Columns'),
    '8' => t('8 Columns'),
  );
  $states16 = array(
    'visible' => array(
      'input[name="grid_columns"]' => array('value' => 'container-16'),
    ),
    'disabled' => array(
      'input[name="grid_columns"]' => array('value' => 'container-12'),
      'input[name="grid_columns"]' => array('value' => 'container-24'),
    ),
  );

  // Create variables for 12 column sidebar options.
  $sidebars12 = array(
    '0' => t('Use CSS'),
    '2' => t('2 Columns'),
    '3' => t('3 Columns'),
    '4' => t('4 Columns'),
    '5' => t('5 Columns'),
    '6' => t('6 Columns'),
  );
  $states12 = array(
    'visible' => array(
      'input[name="grid_columns"]' => array('value' => 'container-12'),
    ),
    'disabled' => array(
      'input[name="grid_columns"]' => array('value' => 'container-24'),
      'input[name="grid_columns"]' => array('value' => 'container-16'),
    ),
  );

  $form['sf']['grid']['grid-wrapper']['grid-24-wrapper'] = array(
    '#type' => 'fieldset',
    '#title' => t('Set sidebar widths'),
    '#description' => '<strong>' . t('24 Column Grid (For a 960 width, each column would be 40px wide)') . '</strong>',
    '#states' => $states24,
  );
  $form['sf']['grid']['grid-wrapper']['grid-24-wrapper']['grid_24_first']
    = array(
      '#type' => 'select',
      '#title' => t('Size of First Sidebar'),
      '#default_value' => theme_get_setting('grid_24_sidebar_first'),
      '#options' => $sidebars24,
      '#required' => TRUE,
      '#states' => $states24,
    );
  $form['sf']['grid']['grid-wrapper']['grid-24-wrapper']['grid_24_second']
    = array(
      '#type' => 'select',
      '#title' => t('Size of Second Sidebar'),
      '#default_value' => theme_get_setting('grid_24_sidebar_second'),
      '#options' => $sidebars24,
      '#required' => TRUE,
      '#states' => $states24,
    );
  $form['sf']['grid']['grid-wrapper']['grid-16-wrapper'] = array(
    '#type' => 'fieldset',
    '#title' => t('Set sidebar widths'),
    '#description' => '<strong>' . t('16 Column Grid (Each Column is 60px
    wide)') . '</strong>',
    '#states' => $states16,
  );
  $form['sf']['grid']['grid-wrapper']['grid-16-wrapper']['grid_16_first']
    = array(
      '#type' => 'select',
      '#title' => t('Size of First Sidebar'),
      '#default_value' => theme_get_setting('grid_16_sidebar_first'),
      '#options' => $sidebars16,
      '#required' => TRUE,
      '#states' => $states16,
    );
  $form['sf']['grid']['grid-wrapper']['grid-16-wrapper']['grid_16_second']
    = array(
      '#type' => 'select',
      '#title' => t('Size of Second Sidebar'),
      '#default_value' => theme_get_setting('grid_16_sidebar_second'),
      '#options' => $sidebars16,
      '#required' => TRUE,
      '#states' => $states16,
    );
  $form['sf']['grid']['grid-wrapper']['grid-12-wrapper'] = array(
    '#type' => 'fieldset',
    '#title' => t('Set sidebar widths'),
    '#description' => '<strong>' . t('12 Column Grid (Each Column is 80px
    wide)') . '</strong>',
    '#states' => $states12,
  );
  $form['sf']['grid']['grid-wrapper']['grid-12-wrapper']['grid_12_first']
    = array(
      '#type' => 'select',
      '#title' => t('Size of First Sidebar'),
      '#default_value' => theme_get_setting('grid_12_sidebar_first'),
      '#options' => $sidebars12,
      '#required' => TRUE,
      '#states' => $states12,
    );
  $form['sf']['grid']['grid-wrapper']['grid-12-wrapper']['grid_12_second']
    = array(
      '#type' => 'select',
      '#title' => t('Size of Second Sidebar'),
      '#default_value' => theme_get_setting('grid_12_sidebar_second'),
      '#options' => $sidebars12,
      '#required' => TRUE,
      '#states' => $states12,
    );

  $form['sf']['responsive'] = array(
    '#type' => 'fieldset',
    '#title' => t('Responsive Settings'),
    '#description' => '<h3>' . t('Responsive Settings') . '</h3><p>' . t('Not all
    websites may want responsive layouts, or have time to develop for each context.
    Enable/disable the necessary media query files. These files can be found and
    customized in the theme CSS folder
    .') . '</p><p><em>' . t('Be sure to install respond.js for browsers that
    do not read media queries. See the README.txt for more information.') .
    '</em></p>',
  );
  $form['sf']['responsive']['responsive-wrapper'] = array(
    '#type' => 'fieldset',
    '#title' => t('Enable Responsive Queries'),
    '#attributes' => array(
      'class' => array(
        'sf-responsive-form',
      ),
    ),
  );

  $form['sf']['responsive']['responsive-wrapper']['widescreen']
    = array(
      '#type' => 'checkbox',
      '#title' => t('Wide Screen'),
      '#default_value' => theme_get_setting('widescreen'),
    );
  $form['sf']['responsive']['responsive-wrapper']['tablet']
    = array(
      '#type' => 'checkbox',
      '#title' => t('Tablet'),
      '#default_value' => theme_get_setting('tablet'),
    );
  $form['sf']['responsive']['responsive-wrapper']['smartphone']
    = array(
      '#type' => 'checkbox',
      '#title' => t('Smartphone'),
      '#default_value' => theme_get_setting('smartphone'),
    );
  $form['sf']['responsive']['responsive-wrapper']['mobilemenu']
    = array(
    '#type' => 'radios',
    '#title' => '<strong>' . t('Mobile Menu') . '</strong>',
    '#default_value' => theme_get_setting('mobilemenu'),
    '#options' => array(
      'stack' => t('Basic Stack'),
      'slide' => t('Slide Toggle'),
      'jump' => t('Jump Menu'),
    ),
  );

  // Breadcrumbs settings.
  $form['sf']['breadcrumb'] = array(
    '#type' => 'fieldset',
    '#weight' => '96',
    '#title' => t('Breadcrumbs'),
    '#description' => '<h3>' . t('Breadcrumb Settings') . '</h3>',
  );
  $form['sf']['breadcrumb']['bd'] = array(
    '#type' => 'fieldset',
    '#title' => t('Breadcrumbs'),
  );
  $form['sf']['breadcrumb']['bd']['breadcrumb_display'] = array(
    '#type' => 'select',
    '#title' => t('Show breadcrumbs'),
    '#default_value' => theme_get_setting('breadcrumb_display'),
    '#options' => array(
      'yes' => t('Yes'),
      'no' => t('No'),
    ),
  );
  $form['sf']['breadcrumb']['bd']['breadcrumb_separator'] = array(
    '#type'  => 'textfield',
    '#title' => t('Separator'),
    '#description' => t('Text only. Dont forget to include spaces.'),
    '#default_value' => theme_get_setting('breadcrumb_separator'),
    '#size' => 8,
    '#maxlength' => 10,
    '#states' => array(
      'visible' => array(
        '#edit-breadcrumb-display' => array('value' => 'yes'),
      ),
    ),
  );
  $form['sf']['breadcrumb']['bd']['breadcrumb_home'] = array(
    '#type' => 'checkbox',
    '#title' => t('Show the homepage link'),
    '#default_value' => theme_get_setting('breadcrumb_home'),
    '#states' => array(
      'visible' => array(
        '#edit-breadcrumb-display' => array(
          'value' => 'yes',
        ),
      ),
    ),
  );

  // Content display settings.
  $form['sf']['content_display'] = array(
    '#type' => 'fieldset',
    '#title' => t('Content Displays'),
    '#description' => '<h3>' . t('Content Displays') . '</h3><p>' . t('Display the front page or taxonomy term pages as a grid. You can set the max number of columns to appear. These settings use the normal node teasers and format them as a grid. Article links (such as the') . ' <em>' . t('Read More') . '</em> ' . t('link) are hidden when displayed in the grid. These
    settings will work well with the responsive design, unlike a Views table grid which does not.') . '</p>',
  );
  $form['sf']['content_display']['content_display_grids']['frontpage'] = array(
    '#type' => 'fieldset',
    '#title' => t('Frontpage'),
    '#description' => '<h4>' . t('Frontpage') . '</h4>',
  );
  $form['sf']['content_display']['content_display_grids']['frontpage']['content_display_grids_frontpage'] = array(
    '#type' => 'checkbox',
    '#title' => t('Display front page teasers as a grid'),
    '#default_value' => theme_get_setting('content_display_grids_frontpage'),
  );
  $form['sf']['content_display']['content_display_grids']['frontpage']['content_display_grids_frontpage_colcount'] = array(
    '#type' => 'select',
    '#title' => t('Enter the max number of grid columns'),
    '#default_value' => theme_get_setting('content_display_grids_frontpage_colcount'),
    '#options' => array(
      '2' => t('2'),
      '3' => t('3'),
      '4' => t('4'),
      '5' => t('5'),
      '6' => t('6'),
    ),
    '#states' => array(
      'visible' => array(
        'input[name="content_display_grids_frontpage"]' => array(
          'checked' => TRUE,
        ),
      ),
    ),
  );
  $form['sf']['content_display']['content_display_grids']['taxonomy'] = array(
    '#type' => 'fieldset',
    '#title' => t('Taxonomy'),
    '#description' => '<h4>' . t('Taxonomy Pages') . '</h4>',
  );
  $form['sf']['content_display']['content_display_grids']['taxonomy']['content_display_grids_taxonomy_pages'] = array(
    '#type' => 'checkbox',
    '#title' => t('Display taxonomy page teasers as a grid'),
    '#default_value' => theme_get_setting('content_display_grids_taxonomy_pages'),
  );
  $form['sf']['content_display']['content_display_grids']['taxonomy']['content_display_grids_taxonomy_pages_colcount'] = array(
    '#type' => 'select',
    '#title' => t('Enter the max number of grid columns'),
    '#default_value' => theme_get_setting('content_display_grids_taxonomy_pages_colcount'),
    '#options' => array(
      'tpcc-2' => t('2'),
      'tpcc-3' => t('3'),
      'tpcc-4' => t('4'),
      'tpcc-5' => t('5'),
      'tpcc-6' => t('6'),
      'tpcc-7' => t('7'),
      'tpcc-8' => t('8'),
    ),
    '#states' => array(
      'visible' => array(
        'input[name="content_display_grids_taxonomy_pages"]' => array('checked' => TRUE),
      ),
    ),
  );

  // Menu Links settings.
  $form['sf']['markup'] = array(
    '#type' => 'fieldset',
    '#title' => t('Markup'),
    '#weight' => 101,
    '#description' => '<h3>' . t('Extra Markup Options') . '</h3>',
  );
  $form['sf']['markup']['menu-links'] = array(
    '#type' => 'fieldset',
    '#title' => t('Menu items markup'),
  );

  // Add spans to the menus.
  $form['sf']['markup']['menu-links']['menu_item_span_elements'] = array(
    '#type' => 'checkbox',
    '#title' => t('Wrap menu item text in SPAN tags - useful for certain theme or design related techniques'),
    '#description' => t('Note: this does not work for Superfish menus, which includes its own feature for doing this.'),
    '#default_value' => theme_get_setting('menu_item_span_elements'),
  );

  // Float Node images left or right.
  $form['sf']['markup']['menu-links']['node_image_float'] = array(
    '#type' => 'select',
    '#title' => t('Float image fields to the left or right.'),
    '#default_value' => theme_get_setting('node_image_float'),
    '#options' => array(
      'image-no-float' => t('Do not float image'),
      'image-left' => t('Float image left'),
      'image-right' => t('Float image right'),
    ),
  );

  $form_themes = array();
  $themes = list_themes();
  $_theme = $GLOBALS['theme_key'];
  while (isset($_theme)) {
    $form_themes[$_theme] = $_theme;
    $_theme = isset($themes[$_theme]->base_theme) ? $themes[$_theme]->base_theme : NULL;
  }
  $form_themes = array_reverse($form_themes);

  foreach ($form_themes as $theme_key) {
    if (function_exists($form_settings = "{$theme_key}_form_theme_settings")) {
      $form_settings($form, $form_state);
    }
  }

  // Custom validate and submit functions.
  $form['#validate'][] = 'storefront_theme_settings_validate';
  $form['#submit'][]   = 'storefront_theme_settings_submit';

}

/**
 * Validate the form.
 */
function storefront_theme_settings_validate($form, &$form_state) {

  $values = $form_state['values'];

  // Validate max_width values seperatly.
  if ($values['dlayout_set_max_width'] == 1) {
    if (empty($values['dlayout_max_width']['#default_value'])) {
      form_set_error('dlayout_max_width', t('Standard layout max-width is empty - you forgot to enter a value for the max width!'));
    }
  }
}

/**
 * Custom submit function to generate and save the layout css with media
 * queries.
 */
function storefront_theme_settings_submit($form, &$form_state) {

  $values = $form_state['values'];

  // Standard dlayout layout.
  if ($values['dlayout_layout']) {
    $sidebar_first  = '';
    $sidebar_second = '';
    $media_query    = '';
    $page_width     = $values['dlayout_page_width'];
    $method         = $values['dlayout_layout'];
    $page_unit      = $values['dlayout_page_unit'];
    $layout         = storefront_layout_styles($method, $sidebar_first,
      $sidebar_second);
    $comment        = "/* Standard layout $method */\n";
    $width          = "\n" . '.container {width: ' . $page_width . $page_unit . ';}';

    if ($values['dlayout_set_max_width'] == 1 && $page_unit == '%') {
      $max_width = $values['dlayout_max_width'];
      $max_width_unit = $values['dlayout_max_width_unit'];
      if (!empty($max_width)) {
        $width = "\n" . '.container, #page.container-24,
        #page.container-16, #page.container-12 {width: ' . $page_width . $page_unit . '; max-width: ' . $max_width . $max_width_unit . ';}';
      }
      else {
        $width = "\n" . '.container, #page.container-24,
        #page.container-16, #page.container-12 {width: ' . $page_width . $page_unit . '; max-width: ' . $page_width . $page_unit . ';}';
      }
    }

    $styles = implode("\n", $layout) . $width;
    $css = $comment . "\n" . $styles . "\n";
    $layouts[] = check_plain($css);
  }

  $layout_data = implode("\n", $layouts);
  $theme = $form_state['build_info']['args'][0];
  $file  = $theme . '.responsive.layout.css';
  $path  = "public://sf_css";
  $data  = $layout_data;

  file_prepare_directory($path, FILE_CREATE_DIRECTORY);

  $filepath = $path . '/' . $file;
  file_save_data($data, $filepath, FILE_EXISTS_REPLACE);

  // Set variables so we can retrive them later to load the css file.
  variable_set($theme . '_mediaqueries_path', $path);
  variable_set($theme . '_mediaqueries_css', $file);

}

/**
 * Process layout styles
 */
function storefront_layout_styles($method, $sidebar_first, $sidebar_second) {

  // Set variables for language direction.
  $left = 'left';
  $right = 'right';
  $path = base_path() . path_to_theme() . '/';

  // Build style arrays, params are passed from preprocess_html.
  $styles = array();
  if ($method == 'two-col-stack') {
    $styles[] = '.two-sidebars .content-inner,.sidebar-first .content-inner {margin-' . $left . ': 0;}';
    $styles[] = '.two-sidebars .content-inner {width:72%;}';
    $styles[] = '.sidebar-second .content-inner {margin-right: 0; margin-left: 0;}';
      $styles[] = '#sidebar-first {width: 25% !important; margin-' . $left
          . ': -27%!important;}';
      $styles[] = '#sidebar-second {width: 100%!important; margin-' . $left . ': 0 !important; margin-top: 20px; clear: both; overflow: hidden;}';
      $styles[] = '.region-sidebar-second .block {float: left; clear: none;}';
  }
  if ($method == 'one-col-stack') {
    $styles[] = '.two-sidebars .content-inner,.one-sidebar .content-inner,.region-sidebar-first,.region-sidebar-second {margin-left: 0!important; margin-right: 0!important;}';
    $styles[] = '.two-sidebars .content-inner, .region-sidebar-first, .region-sidebar-second {width: 100%!important; margin-' . $left . ':0!important;clear:both; display:block;}';
    $styles[] = '#sidebar-second {width: 100%!important;}';
    $styles[] = '.content-inner,#sidebar-first,#sidebar-second
        {float: none!important;}';
    $styles[] = '#sidebar-first, #sidebar-second {clear: both;}';
  }
  if ($method == 'one-col-vert') {
    $one_sidebar = $sidebar_first + $sidebar_second;
    $styles[] = '.two-sidebars .content-inner,.one-sidebar .content-inner,.region-sidebar-first,.region-sidebar-second {margin-left: 0; margin-right: 0;}';
    $styles[] = '.two-sidebars .content-inner {width: 100% !important;}';
    $styles[] = '#sidebar-first {width: ' . $sidebar_first . '!important; margin-' . $left . ':0 !important; clear:' . $left . '}';
    $styles[] = '#sidebar-second {width: ' . $sidebar_second . '!important; margin-' . $left . ':0 !important;}';
    $styles[] = '.one-sidebar .sidebar {width: ' . $one_sidebar . ';}';
    $styles[] = '#sidebar-first, #sidebar-second {overflow: hidden;
    margin-top: 20px;}';
    $styles[] = '.region-sidebar-first .block, .region-sidebar-second .block {width: 100%;}';
  }
  return $styles;
}
