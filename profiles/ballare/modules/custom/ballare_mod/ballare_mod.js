(function ($) {

Drupal.behaviors.ballare = {
  attach: function (context) {
    var settings = {
      dateFormat: Drupal.settings.ballare.dateformat,
      autoSize: true,
      changeMonth: true,
      changeYear: true,
      maxDate: '+100y',
      minDate: '-20y',
      yearRange: '-20:+100',
      constrainInput: false,
      firstDay: Drupal.settings.ballare.firstDay
    };

    var noYearSettings = jQuery.extend({}, settings);
    noYearSettings.dateFormat = Drupal.settings.ballare.dateformat_noyear;

    $('.ballare-datepicker', context).datepicker(settings);
    $('.ballare-datepicker-noyear', context).datepicker(noYearSettings);
  }
};

})(jQuery);
