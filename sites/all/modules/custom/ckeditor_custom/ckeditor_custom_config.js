/*
  Custom CKEditor configurations
*/

CKEDITOR.editorConfig = function( config )
{
  // config.styleSet is an array of objects that define each style available
  // in the font styles tool in the ckeditor toolbar
  config.stylesSet =
  [
        /* Block Styles */

        // Each style is an object whose properties define how it is displayed
        // in the dropdown, as well as what it outputs as html into the editor
        // text area.
        { name : 'Paragraph'   , element : 'p' },
        { name : 'Heading 2'   , element : 'h2' },
        { name : 'Heading 3'   , element : 'h3' },
        { name : 'Heading 4'   , element : 'h4' },
        { name : 'Float Right', element : 'div', attributes : { 'style' : 'float:right;' } },
        { name : 'Float Left', element : 'div', attributes : { 'style' : 'float:left;' } },
        { name : 'Preformatted Text', element : 'pre' },
  ];

}

// When opening a dialog, a "definition" is created for it. For
// each editor instance the "dialogDefinition" event is then
// fired. We can use this event to make customizations to the
// definition of existing dialogs.
CKEDITOR.on( 'dialogDefinition', function( event ) {

  // Take the dialog name
  var dialogName = event.data.name;

  // The definition holds the structured data that is used to eventually
  // build the dialog and we can use it to customize just about anything.
  // In Drupal terms, it's sort of like CKEditor's version of a Forms API and
  // what we're doing here is a bit like a hook_form_alter.
  var dialogDefinition = event.data.definition;

  // Uncomment to print the dialogDefinition to the console
  // console.log(dialogDefinition);

  // Check if the definition is from the dialog we're
  // interested in (the "table" dialog).
  if ( dialogName == 'table' ) {

    // .getContents() returns an object reference to a set of fields in the
    // dialog, also referred to as tabs. The Table dialog has two tabs:
    // "Table Properties" and "Advanced". Each of those has an id. In this case,
    // the id we're interested in is 'info' for the Table Properties tab.
    var infoTab = dialogDefinition.getContents( 'info' );

    // Once we have the tab reference, we can use the object's .get() method
    // to get another object reference, this time to the field we want to change
    // Fields also have ids. The border field id is "txtBorder"
    var borderSizeField = infoTab.get("txtBorder");

    // Set the border to 0 (who uses html table borders anyway?)
    borderSizeField['default'] = 0;
  }
});
