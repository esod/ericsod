/*
 * @file
 * Responsive Menu State settings.
 *
 * See @link http://www.no-margin-for-errors.com/projects/prettyphoto-jquery-lightbox-clone/
 * for more settings
 */

(function ($) {
  Drupal.behaviors.responsive_menu_state = {
    attach: function() {
  
      var responsive_menu_switchwidth = Drupal.settings.responsive_menu_state.responsive_menu_switchwidth;
      var responsive_menu_topoptiontext = Drupal.settings.responsive_menu_state.responsive_menu_topoptiontext;

    	$("#main-navigation > ul, #main-navigation .content > ul").mobileMenu({
      	prependTo: "#navigation-wrapper",
      	combine: false,
      	switchWidth: responsive_menu_switchwidth,
      	topOptionText: responsive_menu_topoptiontext
    	});
    }
  };
}(jQuery));

