(function ($) {
  Drupal.behaviors.featured_work_data = {
    attach: function() {
  
      var carousel_effect_time = Drupal.settings.featured_work_array.carousel_effect_time;
      var carousel_effect = Drupal.settings.featured_work_array.carousel_effect;
  
      var currentWindowWidth = jQuery(window).width();
      jQuery(window).resize(function() {
        currentWindowWidth = jQuery(window).width();
      });
      
      $(window).load(function() {
      
        $("ul#projects-carousel").fadeIn("fast");
        
        // Sets the behavior for the ball drops
        if (jQuery(".portfolio-item-hover-content").length && jQuery()) {
          function hover_effect() {
            jQuery(".portfolio-item-hover-content").hover(function() {
              jQuery(this).find("div,a").stop(0, 0).removeAttr("style");
              jQuery(this).find(".hover-options").animate({
                opacity: 0.9
              }, "fast");
              jQuery(this).find("a").animate({
                "top": "60%"
              });
            }, function() {
              jQuery(this).find(".hover-options").stop(0, 0).animate({
                opacity: 0
              }, "fast");
              jQuery(this).find("a").stop(0, 0).animate({
                "top": "150%"
              }, "slow");
              jQuery(this).find("a.zoom").stop(0, 0).animate({
                "top": "150%"
              }, "slow");
            });
          }
        hover_effect();
        }
        
        // Sets responsive behavior for the scroll
        (function() {
          var jQuerycarousel = jQuery("#projects-carousel");
          if (jQuerycarousel.length) {
            var scrollCount;
            if (jQuery(window).width() < 480) {
              scrollCount = 1;
            } else if (jQuery(window).width() < 768) {
              scrollCount = 1;
            } else if (jQuery(window).width() < 960) {
              scrollCount = 3;
            } else {
              scrollCount = 4;
            }
            jQuerycarousel.jcarousel({
              animation: carousel_effect_time,
              easing: carousel_effect,
              scroll: scrollCount,
              initCallback: function() {
                jQuerycarousel.removeClass("loading")
              },
            });
          }
        })();
      });
    }
  };
}(jQuery));