/**
 * @file
 * Attaches the behaviors for the the Quiz Results (report) page
 * quiz results pages.*
 */

(function ($) {
  Drupal.behaviors.quizReportForm = {
    attach: function (context, settings) {

      var WURFL = WURFL || {'is_mobile': false};

      // See //wurfl.io/wurfl.js
      if(WURFL.is_mobile) {
        // Hides/shows the other social links in the individual results pages
        $(".curiously-social-links-other").hide();

        $(".curiously-social-links-title").click(function () {
          $(".curiously-social-links-other").slideToggle();
        });

      }
      if(!WURFL.is_mobile) {
        $(".curiously-social-links-title").hide();
      }

       // Twitter
      !function(d,s,id){var js,fjs=d.getElementsByTagName(s)[0],p=/^http:/.test(d.location)?'http':'https';if(!d.getElementById(id)){js=d.createElement(s);js.id=id;js.src=p+'://platform.twitter.com/widgets.js';fjs.parentNode.insertBefore(js,fjs);}}(document, 'script', 'twitter-wjs');

      // Facebook
      window.fbAsyncInit = function() {
        FB.init({
          appId      : '886944881349963',
          xfbml      : true,
          version    : 'v2.2'
        });
      };

      (function(d, s, id){
        var js, fjs = d.getElementsByTagName(s)[0];
        if (d.getElementById(id)) {return;}
        js = d.createElement(s); js.id = id;
        js.src = "//connect.facebook.net/en_US/sdk.js";
        fjs.parentNode.insertBefore(js, fjs);
      }(document, 'script', 'facebook-jssdk'));


    }
  };
}(jQuery));