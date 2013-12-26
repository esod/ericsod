/*
 * @file
 * Flexslider settings.
 *
 * See @link http://www.woothemes.com/flexslider/ for more settings
 */

(function ($) {
  Drupal.behaviors.customSlideshow = {
    attach: function() {
  
      var effect = Drupal.settings.custom_slideshow_array.effect;
      var effect_time = Drupal.settings.custom_slideshow_array.effect_time;
      var slideshow_controls = Drupal.settings.custom_slideshow_array.slideshow_controls;
      var slideshow_random = Drupal.settings.custom_slideshow_array.slideshow_random;
      var slideshow_pause = Drupal.settings.custom_slideshow_array.slideshow_pause;
      var slideshow_touch = Drupal.settings.custom_slideshow_array.slideshow_touch;
    
      $(window).load(function() {

        $(".flexslider").fadeIn("slow");

        $(".flexslider").flexslider({
          useCSS: false,
          animation: effect,
          controlNav: slideshow_controls,
          directionNav: slideshow_controls,
          animationLoop: true,
          touch: slideshow_touch,
          pauseOnHover: slideshow_pause,
          nextText: "&rsaquo;",
          prevText: "&lsaquo;",
          keyboard: true,
          slideshowSpeed: effect_time,
          randomize: slideshow_random,
          start: function(slider) {
            slider.removeClass("loading");
          }
        });
      });
    }
  };
}(jQuery));