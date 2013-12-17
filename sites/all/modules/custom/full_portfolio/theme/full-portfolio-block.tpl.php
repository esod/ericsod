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
  
      $output = '<!-- portofolio item -->';
      $output .= '<li class="item '.$class_and_data_type.'" data-id="'.$data_id.'" data-type="'.$class_and_data_type.'">';
      $output .= '<div class="portfolio-item ">';
      $output .= '<div class="item-content">';
      $output .= '<div class="link-holder">';
      $output .= '<div class="portfolio-item-holder">';
      $output .= '<div class="portfolio-item-hover-content">';
      $output .= '<a href="' . base_path() . drupal_get_path('theme', 'simplecorp') . '/images/sampleimages/'.$portfolio_image.'" alt="'.$alt_title.'" title="'.$alt_title.'" data-rel="prettyPhoto" class="zoom">';
      $output .= '<img src="" alt="'.$alt_title.'" /></a>';
      $output .= '<img src="' . base_path() . drupal_get_path('theme', 'simplecorp') . '/images/sampleimages/'.$thumbnail_image.'" alt="'.$alt_title.'" width="220"  class="portfolio-img" />';
      $output .= '<div class="hover-options"></div>';
      $output .= '</div>';
      $output .= '</div>';
      $output .= '<div class="description">';
      $output .= '<p><a href="' . base_path() . $which_node.'" title="'.$caption_title.'">'.$caption_title.'</a></p>';
      $output .= '<span>'.$project_type.'</span>';
      $output .= '</div>';
      $output .= '</div>';
      $output .= '</div>';
      $output .= '</div>';
      $output .= '</li>';
      $output .= '<!--EOF: portofolio item -->';
      
      print $output;
    }
  ?>

  </ul>
  <!--EOF: portofolio items -->

</div>
<!--EOF: portofolio container -->
