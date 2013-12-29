<!-- #page-wrapper -->
<div id="page-wrapper">

    <!-- #page -->
    <div id="page">
        
        <!-- header -->
        <header role="header" class="container clearfix">
        
            <!-- #pre-header -->
            <div id="pre-header" class="clearfix">
            
                <?php if ($page['header']) :?>                
                <?php print render($page['header']); ?>
                <?php endif; ?>

            </div>
            <!-- EOF: #pre-header -->
      
            <!-- #header -->
            <div id="header" class="clearfix">
                
                <!-- #header-left -->
                <div id="header-left" class="one-third">
                    
                    <?php if ($logo): ?>
										<a href="<?php print $front_page; ?>" title="<?php print t('Home'); ?>" rel="home" class="custom-logo" alt="<?php print t('Home'); ?>" /> </a>

                    <?php endif; ?>

                    <?php if ($site_name || $site_slogan): ?>
                        <!-- #name-and-slogan -->
                        <hgroup id="name-and-slogan">
							<?php if ($site_name):?>
                            <h1 id="site-name"><a href="<?php print $front_page; ?>" title="<?php print t('Home'); ?>"><?php print $site_name; ?></a></h1>
                            <?php endif; ?>
    
                            <?php if ($site_slogan):?>
                            <h2 id="site-slogan"><?php print $site_slogan; ?></h2>
                            <?php endif; ?>
                        </hgroup> 
                        <!-- EOF:#name-and-slogan -->
                    <?php endif; ?>

                </div>
                <!--EOF: #header-left -->     

                <!-- #header-right -->
                <div id="header-right" class="two-third last">   

                    <!-- #navigation-wrapper -->
                    <div id="navigation-wrapper" class="clearfix">
                        <!-- #main-navigation -->                        
                        <nav id="main-navigation" class="main-menu clearfix" role="navigation">
                        <?php if ($page['navigation']) :?>
                        <?php print drupal_render($page['navigation']); ?>
                        <?php else : ?>
                          
                          <nav id="main-menu"  role="navigation">
                            <a class="nav-toggle" href="#">Navigation</a>
                            <div class="menu-navigation-container">
                              <?php print drupal_render($main_menu_tree); ?>
                            <div class="clear"></div>
                          </nav><!-- end main-menu -->
                            </div>

                        <?php endif; ?>
                        </nav>
                        <!-- EOF: #main-navigation -->
                    </div>
                    <!-- EOF: #navigation-wrapper -->
                    
                </div>
                <!--EOF: #header-right -->

            </div> 
            <!-- EOF: #header -->

        </header>   
        <!-- EOF: header -->

        <div id="content" class="clearfix">

            <?php if ($messages):?>
            <!--messages -->
            <div class="container clearfix">
            <?php print $messages; ?>
            </div>
            <!--EOF: messages -->        
            <?php endif; ?>

            <?php if ($page['top_content']): ?>
            <!-- #top-content -->
            <div id="top-content" class="container clearfix">
              <!-- intro-page -->
              <div class="intro-page">
              <?php print render($page['top_content']); ?>
              </div>
              <!-- EOF: intro-page -->            
            </div>  
            <!--EOF: #top-content -->
            <?php endif; ?>
            
            <!-- #banner -->
            <div id="banner" class="container">

                <?php if ($page['banner']) : ?>
                <!-- #banner-inside -->
                <div id="banner-inside">
                <?php print render($page['banner']); ?>
                </div>
                <!-- EOF: #banner-inside -->        
                <?php endif; ?>
            
            </div>

            <!-- EOF: #banner -->
            <?php if ($breadcrumb && theme_get_setting('breadcrumb_display','simplecorp')):?>
            <!-- #breadcrumb -->
            <div class="container clearfix">
            <?php print $breadcrumb; ?>
            </div>
            <!-- EOF: #breadcrumb -->
            <?php endif; ?>

            <!--#featured -->
            <div id="featured"> 

                <?php if ($page['highlighted']): ?>
                <div class="container clearfix"><?php print render($page['highlighted']); ?></div>
                <?php endif; ?>

            </div>
            <!-- EOF: #featured -->
            
            <!--#main-content -->
						<?php if(!drupal_is_front_page()) : ?>
								<div id="main-content" class="container clearfix">
		
										<?php if ($page['sidebar_first']) :?>
												<!--.sidebar first-->
												<div class="one-fourth">
												<aside class="sidebar">
												<?php print render($page['sidebar_first']); ?>
												</aside>
												</div>
												<!--EOF:.sidebar first-->
										<?php endif; ?>
		
										<?php if ($page['sidebar_first'] && $page['sidebar_second']) { ?>
										<div class="one-half">
										<?php } elseif ($page['sidebar_first']) { ?>
										<div class="three-fourth last">
										<?php } elseif ($page['sidebar_second']) { ?>
										<div class="three-fourth">  
										<?php } else { ?>
										<div class="clearfix">    
										<?php } ?>
												<!--#main-content-inside-->
												<div id="main-content-inside">
												<?php print render($title_prefix); ?>
												<?php if ($title): ?><h1><?php print $title; ?></h1><?php endif; ?>
												<?php print render($title_suffix); ?>
												<?php if ($tabs): ?><div class="tabs"><?php print render($tabs); ?></div><?php endif; ?>
												<?php print render($page['help']); ?>
												<?php if ($action_links): ?><ul class="action-links"><?php print render($action_links); ?></ul><?php endif; ?>
												<?php print render($page['content']); ?>
												</div>
												<!--EOF:#main-content-inside-->
										</div>
		
		
										<?php if ($page['sidebar_second']) :?>
												<!--.sidebar second-->
												<div class="one-fourth last">
												<aside class="sidebar">
												<?php print render($page['sidebar_second']); ?>
												</aside>
												</div>
												<!--EOF:.sidebar second-->
										<?php endif; ?>  
		
								</div>
								<!--EOF: #main-content -->
						<?php endif; ?>

            <!-- #bottom-content -->
            <div id="bottom-content" class="container clearfix">

                <?php if ($page['bottom_content']): ?>
                <?php print render($page['bottom_content']); ?>
                <?php endif; ?>

            </div>
            <!-- EOF: #bottom-content -->

        </div> <!-- EOF: #content -->

        <!-- #footer -->
        <footer id="footer">
            
            <?php if ($page['footer_first'] || $page['footer_second'] || $page['footer_third'] || $page['footer_fourth']) :?>
            <div class="container clearfix">

                <div class="first one-fourth footer-area">
                <?php if ($page['footer_first']) :?>
                <?php print render($page['footer_first']); ?>
                <?php endif; ?>
                </div>

                <div class="one-fourth footer-area">
                <?php if ($page['footer_second']) :?>
                <?php print render($page['footer_second']); ?>
                <?php endif; ?>
                </div>

                <div class="one-fourth footer-area">
                <?php if ($page['footer_third']) :?>
                <?php print render($page['footer_third']); ?>
                <?php endif; ?> 
                </div>

                <div class="one-fourth footer-area last">
                <?php if ($page['footer_fourth']) :?>
                <?php print render($page['footer_fourth']); ?>
                <?php endif; ?> 
                </div>

            </div>
            <?php endif; ?>

            <!-- #footer-bottom -->
            <div id="footer-bottom">
                <div class="container clearfix">
                    <span class="right"><a class="backtotop" href="#">↑</a></span>
                    <?php print theme('links__system_secondary_menu', array('links' => $secondary_menu, 'attributes' => array('class' => array('menu', 'secondary-menu', 'links', 'clearfix')))); ?>
                    
                    <?php if ($page['footer']) :?>
                    <?php print render($page['footer']); ?>
                    <?php endif; ?>
                    
                    <div class="credits">
                    <?php /*Ported to Drupal by <a href="http://www.drupalizing.com">Drupalizing</a> a Project of <a href="http://www.morethanthemes.com">More than Themes</a>. Designed by <a href="http://www.s5themes.com/">Site5 WordPress Themes</a>. */?>
                    </div>

                </div>
            </div>
            <!-- EOF: #footer-bottom -->
            
        </footer> 
        <!-- EOF #footer -->

    </div>
    <!-- EOF: #page -->

</div> 
<!-- EOF: #page-wrapper -->