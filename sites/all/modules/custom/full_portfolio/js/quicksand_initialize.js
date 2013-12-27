/*
 * @file
 * Quicksand settings.
 *
 *
 * See @link http://razorjack.net/quicksand for more information
 */

(function ($) {
	Drupal.behaviors.quicksand = {
		attach: function() {

      if ( $( '.portfolio-item-hover-content' ).length && $() ) {
        function hover_effect() {  
          $('.portfolio-item-hover-content').hover(function() {
            $(this).find('div,a').stop(0,0).removeAttr('style');
            $(this).find('.hover-options').animate({opacity: 0.9}, 'fast');
            $(this).find('a').animate({"top": "60%" });
          }, function() {
            $(this).find('.hover-options').stop(0,0).animate({opacity: 0}, "fast");
            $(this).find('a').stop(0,0).animate({"top": "150%"}, "slow");
            $(this).find('a.zoom').stop(0,0).animate({"top": "150%"}, "slow");
          });
        }
        hover_effect();
      }
      
      var jQueryfilterType = $('#filterable li.active a').attr('class');
      var jQueryholder = $('ul.portfolio-items');
      var jQuerydata = jQueryholder.clone();
      
      $('#filterable li a').click(function(e) {
        $('#filterable li').removeClass('active');
        var jQueryfilterType = $(this).attr('data-type');
        $(this).parent().addClass('active');
      
        if (jQueryfilterType == 'all') {
          var jQueryfilteredData = jQuerydata.find('li');
        } else {
          var jQueryfilteredData = jQuerydata.find('li[data-type~="' + jQueryfilterType + '"]');
        }
      
        jQueryholder.quicksand(jQueryfilteredData, {
          duration: 500,
          useScaling: false,
          adjustHeight:false,
          easing: 'swing',
          enhancement:function(){
            hover_effect(); 
          }
        },
        function() {
          $("a[data-rel^='prettyPhoto'], a.prettyPhoto, a[rel^='prettyPhoto']").prettyPhoto({
            overlay_gallery: false
          });
        }
        );
        return false;
      });
      
    }
  };
}(jQuery));
