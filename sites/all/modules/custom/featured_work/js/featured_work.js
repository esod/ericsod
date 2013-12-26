/*
 * @file
 * jQuerycarousel settings.
 *
 * See @link http://sorgalla.com/jcarousel/ for more settings
 */

(function ($) {
  Drupal.behaviors.featuredWork = {
    attach: function() {
  
      var carousel_effect_time = Drupal.settings.featured_work_array.carousel_effect_time;
      var carousel_effect = Drupal.settings.featured_work_array.carousel_effect;
  
      var currentWindowWidth = $(window).width();
      $(window).resize(function() {
        currentWindowWidth = $(window).width();
      });
      
      $(window).load(function() {
      
        $("ul#projects-carousel").fadeIn("fast");
        
        // Sets the behavior for the ball drops
        if ($(".portfolio-item-hover-content").length && $()) {
          function hover_effect() {
            $(".portfolio-item-hover-content").hover(function() {
              $(this).find("div,a").stop(0, 0).removeAttr("style");
              $(this).find(".hover-options").animate({
                opacity: 0.9
              }, "fast");
              $(this).find("a").animate({
                "top": "60%"
              });
            }, function() {
              $(this).find(".hover-options").stop(0, 0).animate({
                opacity: 0
              }, "fast");
              $(this).find("a").stop(0, 0).animate({
                "top": "150%"
              }, "slow");
              $(this).find("a.zoom").stop(0, 0).animate({
                "top": "150%"
              }, "slow");
            });
          }
        hover_effect();
        }
        
        // Sets responsive behavior for the scroll
        (function() {
          var jQuerycarousel = $("#projects-carousel");
          if (jQuerycarousel.length) {
            var scrollCount;
            if ($(window).width() < 480) {
              scrollCount = 1;
            } else if ($(window).width() < 768) {
              scrollCount = 1;
            } else if ($(window).width() < 960) {
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