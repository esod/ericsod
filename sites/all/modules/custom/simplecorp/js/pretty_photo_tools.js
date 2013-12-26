/*
 * @file
 * Pretty Photo settings.
 *
 * See @link http://www.no-margin-for-errors.com/projects/prettyphoto-jquery-lightbox-clone/
 * for more settings
 */

(function ($) {
  Drupal.behaviors.pretty_photo_tools_data = {
    attach: function() {
  
      var prettyphoto_social_tools = Drupal.settings.pretty_photo_tools.prettyphoto_social_tools;
      var prettyphoto_theme = Drupal.settings.pretty_photo_tools.prettyphoto_theme;

      if (prettyphoto_social_tools.length > 0) {
        $("a[data-rel^=prettyPhoto], a.prettyPhoto, a[rel^=prettyPhoto]").prettyPhoto({
          overlay_gallery: false,
          //deeplinking: true,
          theme: prettyphoto_theme
        });
      } else {
        $("a[data-rel^=prettyPhoto], a.prettyPhoto, a[rel^=prettyPhoto]").prettyPhoto({
          overlay_gallery: false,
          //deeplinking: true,
          theme: prettyphoto_theme,
          social_tools: false
        });
      }  
  
    }
  };
}(jQuery));
