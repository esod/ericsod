<!-- #slider-container -->
<div id="slider-container">
  <div class="flexslider loading">
    <ul class="slides">

    <?php
      $result = array();
      $output = '';
        
      foreach ($keys as $id => $key) {
        $result[$key] = array(
          'slideshow_image' => $slideshow_image[$id],
          'alt_title' => $alt_title[$id],
          'which_node' => $which_node[$id],
          'caption' => $caption[$id],
        );
        //var_dump($result[$key]);die;
      }
      
      foreach ($result as $key => $value) {
        $slideshow_image = $value['slideshow_image'];
        $alt_title = $value['alt_title'];
        $which_node = $value['which_node'];
        $caption = $value['caption'];
    
        $output = '<!-- SLIDE STARTS -->'."\n";
        $output .= '<li class="slider-item">'."\n";
        $output .= '<div class="slider-image">';
        $output .= '<a href="' . base_path().$which_node.'"><img src="'.base_path().drupal_get_path('theme', 'simplecorp').'/images/sampleimages/'.$slideshow_image.'" alt="'.$alt_title.'" title="'.$alt_title.'" /></a>'."\n";
        $output .= '</div>'."\n";
        $output .= '<div class="flex-caption">'."\n";
        $output .= '<h3>' . $caption . '</h3>'."\n";
        $output .= '</div>'."\n";
        $output .= '</li>'."\n";
        $output .= '<!-- SLIDE ENDS -->'."\n";
        
        print $output;
      }
    ?>
  
    </ul>
  </div>
</div>
<!-- EOF: #slider-container -->