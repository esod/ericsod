<div class="container clearfix ">
  <?php
    // Make the the theme call dynamic.
    $default_theme = variable_get('theme_default', 'simplecorp');
  ?>

<img class="intro-img" alt=" " src="<?php print base_path() . drupal_get_path('theme', $default_theme) ;?>/images/sampleimages/inner-page-bg-6.jpg">
</div>