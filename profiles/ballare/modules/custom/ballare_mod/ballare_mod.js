(function ($) {

Drupal.behaviors.selectAll = {
  attach: function () {
    $('body.page-node .form-type-checkboxes > label').click(function() {
        $(this).nextAll('.form-checkboxes').find('input[type="checkbox"]').trigger('click');
    });
  }
};

})(jQuery);
