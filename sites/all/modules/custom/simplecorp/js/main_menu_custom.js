/*
 * @file
 * maiMenuCustom settings.
 *
 * This function does something to the superfish menu.
 * TODO: What does it do?
 */

(function ($) {
	Drupal.behaviors.mainMenuCustom = {
		attach: function() {
	
			jQuery(document).ready(function($) {
	
				if (jQuery("#main-navigation, #main-navigation .content").length && jQuery()) {
					var arrowimages = {
						down: ["downarrowclass", "./images/plus.png", 23],
						right: ["rightarrowclass", "./images/plus-white.png"]
					}
					var jqueryslidemenu = {
						animateduration: {
						over: 200,
						out: 100
					},
				
					//duration of slide in/ out animation, in milliseconds
					buildmenu: function(menuid, arrowsvar) {
	
						jQuery(document).ready(function(jQuery) {
							var jQuerymainmenu = jQuery("#" + menuid + ">ul.menu:not(.sf-menu)")
							var jQueryheaders = jQuerymainmenu.find("ul").parent()
	
							jQueryheaders.each(function(i) {
								var jQuerycurobj = jQuery(this)
								var jQuerysubul = jQuery(this).find("ul:eq(0)")
								this._dimensions = {
									w: this.offsetWidth,
									h: this.offsetHeight,
									subulw: jQuerysubul.outerWidth(),
									subulh: jQuerysubul.outerHeight()
								}
								this.istopheader = jQuerycurobj.parents("ul").length == 1 ? true : false
								jQuerysubul.css({
									top: this.istopheader ? this._dimensions.h + "px" : 0
								})
								jQuerycurobj.children("a:eq(0)").css(this.istopheader ? {
									paddingRight: arrowsvar.down[2]
								} : {}).append("<span class=" + (this.istopheader ? arrowsvar.down[0] : arrowsvar.right[0]) + " />")
	
								jQuerycurobj.hover(
									function(e) {
										var jQuerytargetul = jQuery(this).children("ul:eq(0)")
										this._offsets = {
											left: jQuery(this).offset().left,
											top: jQuery(this).offset().top
										}
										var menuleft = this.istopheader ? 0 : this._dimensions.w
										menuleft = (this._offsets.left + menuleft + this._dimensions.subulw > jQuery(window).width()) ? (this.istopheader ? -this._dimensions.subulw + this._dimensions.w : -this._dimensions.w) : menuleft
										if (jQuerytargetul.queue().length <= 1) //if 1 or less queued animations
											jQuerytargetul.css({
												left: menuleft + "px",
												width: this._dimensions.subulw + "px"
											}).slideDown(jqueryslidemenu.animateduration.over)
									}, function(e) {
										var jQuerytargetul = jQuery(this).children("ul:eq(0)")
										jQuerytargetul.slideUp(jqueryslidemenu.animateduration.out)
									}) //end hover
									jQuerycurobj.click(function() {
										jQuery(this).children("ul:eq(0)").hide()
									})
							}) //end jQueryheaders.each()
	
							jQuerymainmenu.find("ul").css({
								display: "none",
								visibility: "visible"
							})
	
						}) //end document.ready
					}
					}
	
					jqueryslidemenu.buildmenu("main-navigation .content", arrowimages)
					jqueryslidemenu.buildmenu("main-navigation", arrowimages)
				}
			});
		}
	};
}(jQuery));