<h3>My Recent Work</h3>
  <ul id="projects-carousel" class="loading">

  <?php
    $result = array();
    $output = '';
      
    foreach ($keys as $id => $key) {
      $result[$key] = array(
        'portfolio_image' => $portfolio_image[$id],
        'alt_title' => $alt_title[$id],
        'thumbnail_image' => $thumbnail_image[$id],
        'which_node' => $which_node[$id],
        'caption_title' => $caption_title[$id],
        'project_type' => $project_type[$id],
      );
      //var_dump($result[$key]);die;
    }
    
    foreach ($result as $key => $value) {
      $portfolio_image = $value['portfolio_image'];
      $alt_title = $value['alt_title'];
      $thumbnail_image = $value['thumbnail_image'];
      $which_node = $value['which_node'];
      $caption_title = $value['caption_title'];
      $project_type = $value['project_type'];
  
      $output = '<!-- PROJECT ITEM STARTS -->'."\n";
      $output .= '<li>'."\n";
      $output .= '<div class="item-content">'."\n";
      $output .= '<div class="link-holder">'."\n";
      $output .= '<div class="portfolio-item-holder">'."\n";
      $output .= '<div class="portfolio-item-hover-content">';
      $output .= '<a href="' . base_path() . drupal_get_path('theme', 'simplecorp') . '/images/sampleimages/'.$portfolio_image.'" alt="'.$alt_title.'" title="'.$alt_title.'" data-rel="prettyPhoto" class="zoom">'."\n";
      $output .= '<img src="" alt="'.$alt_title.'" /></a>'."\n";
      $output .= '<img src="' . base_path() . drupal_get_path('theme', 'simplecorp') . '/images/sampleimages/'.$thumbnail_image.'" alt="'.$alt_title.'" width="220"  class="portfolio-img" />'."\n";
      $output .= '<div class="hover-options"></div>'."\n";
      $output .= '</div>'."\n";
      $output .= '</div>';
      $output .= '<div class="description">'."\n";
      $output .= '<p><a href="' . base_path() . $which_node . '" title="title"> ' . $caption_title . '</a></p>'."\n";
      $output .= '<span>'.$project_type.'</span>'."\n";
      $output .= '</div>'."\n";
      $output .= '</div>'."\n";
      $output .= '</div>'."\n";
      $output .= '</li>'."\n";
      $output .= '<!-- PROJECT ITEM ENDS -->'."\n";
      
      print $output;
    }
  ?>

  </ul>
    <!-- // optional "view full portfolio" button on homepage featured projects -->
    <a href="<?php print base_path() . 'full-portfolio'; ?>" class="colored" title="portofolio">View full portofolio</a>
