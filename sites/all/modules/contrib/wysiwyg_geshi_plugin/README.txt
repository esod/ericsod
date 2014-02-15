// $Id$

INSTALLATION
=============================================================

1) Install as usual "Wysiwyg" from http://drupal.org/project/wysiwyg

2) Install as usual "GeSHi Filter" from http://drupal.org/project/geshifilter

3) Download "GeSHi" library from http://qbnz.com/highlighter/ and copy folder "geshi" from archive to "sites/all/libraries"

4) Install as usual "Wysiwyg Geshi Plugin"

5) Configure "Wysiwyg" module via http://YOUR_SITE/admin/settings/wysiwyg for needed "Input format". Add "GeSHi" button to list.

6) Configure "GeSHi Filter" module via http://YOUR_SITE/admin/config/content/formats/geshifilter for needed "Input format". Add "pre" tag.

7) In file /sites/all/modules/geshifilter/geshifilter.pages.inc add this line:

@@ -248,6 +248,8 @@

   // Undo linebreak and escaping from preparation phase.
   $source_code = decode_entities($source_code);

+  $source_code = htmlspecialchars_decode($source_code, ENT_QUOTES);

   // Initialize to default settings.
   $lang = variable_get('geshifilter_default_highlighting', GESHIFILTER_DEFAULT_PLAINTEXT);
   
8) If you use WYSIWYG Filter enable this tag:

pre[start|fancy|type|linenumbers<off?fancy?normal|title]

9) ???????

10) PROFIT :)

=============================================================