/*
 * @file
 * jQuerycarousel settings.
 *
 * See @link http://onehackoranother.com/projects/jquery/tipsy/ for more settings
 */

(function ($) {
  Drupal.behaviors.headerSocialLinks = {
    attach: function() {
  
      if ($().tipsy) {
        $("#social-01").tipsy({ gravity: "n" });
        $("#social-02").tipsy({ gravity: "n" });
        $("#social-03").tipsy({ gravity: "n" });
        $("#social-04").tipsy({ gravity: "n" });
        $("#social-05").tipsy({ gravity: "n" });
        $("#social-06").tipsy({ gravity: "n" });
        $("#social-07").tipsy({ gravity: "n" });
        $("#social-07").tipsy({ gravity: "n" });
        $("#social-08").tipsy({ gravity: "n" });
        $("#social-09").tipsy({ gravity: "n" });
        $("#social-10").tipsy({ gravity: "n" });
        $("#social-11").tipsy({ gravity: "n" });
        $("#team-01").tipsy({ gravity: "s" });
      }
     
    }
  };
}(jQuery));