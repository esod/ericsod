<!-- portofolio toolbar -->
  <ul class="filterable full-portfolio" id="filterable">
    <li class="active"><a href="#" data-value="all" data-type="all" class="all">All</a></li>
    <li><a href="#" class="web" data-type="web">Web</a></li>
    <li><a href="#" class="illustration" data-type="illustration">Print</a></li>
  </ul>
<!--EOF: portofolio toolbar -->

<!-- portofolio container -->
<div class="portfolio-container">

<!-- portofolio items -->
  <ul id="portfolio-items-one-fourth"  class="portfolio-items clearfix">
    
  <?php
    $result = array();
    $output = '';
      
    foreach ($keys as $id => $key) {
      $result[$key] = array(
        'class_and_data_type' => $class_and_data_type[$id],
        'data_id' => $data_id[$id],
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
      $class_and_data_type = $value['class_and_data_type'];
      $portfolio_image = $value['portfolio_image'];
      $data_id = $value['data_id'];
      $alt_title = $value['alt_title'];
      $thumbnail_image = $value['thumbnail_image'];
      $which_node = $value['which_node'];
      $caption_title = $value['caption_title'];
      $project_type = $value['project_type'];
  
      $output = '<!-- portofolio item -->'."\n";
      $output .= '<li class="item '.$class_and_data_type.'" data-id="'.$data_id.'" data-type="'.$class_and_data_type.'">'."\n";
      $output .= '<div class="portfolio-item ">'."\n";
      $output .= '<div class="item-content">'."\n";
      $output .= '<div class="link-holder">'."\n";
      $output .= '<div class="portfolio-item-holder">'."\n";
      $output .= '<div class="portfolio-item-hover-content">'."\n";
      $output .= '<a href="' . base_path() . drupal_get_path('theme', 'simplecorp') . '/images/sampleimages/'.$portfolio_image.'" alt="'.$alt_title.'" title="'.$alt_title.'" data-rel="prettyPhoto" class="zoom">'."\n";
      $output .= '<img src="" alt="'.$alt_title.'" /></a>'."\n";
      $output .= '<img src="' . base_path() . drupal_get_path('theme', 'simplecorp') . '/images/sampleimages/'.$thumbnail_image.'" alt="'.$alt_title.'" width="220"  class="portfolio-img" />'."\n";
      $output .= '<div class="hover-options"></div>'."\n";
      $output .= '</div>'."\n";
      $output .= '</div>'."\n";
      $output .= '<div class="description">'."\n";
      $output .= '<p><a href="' . base_path() . $which_node.'" title="'.$caption_title.'">'.$caption_title.'</a></p>'."\n";
      $output .= '<span>'.$project_type.'</span>'."\n";
      $output .= '</div>'."\n";
      $output .= '</div>'."\n";
      $output .= '</div>'."\n";
      $output .= '</div>'."\n";
      $output .= '</li>'."\n";
      $output .= '<!--EOF: portofolio item -->'."\n";
      
      print $output;
    }
  ?>

  </ul>
  <!--EOF: portofolio items -->

</div>
<!--EOF: portofolio container -->
