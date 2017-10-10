(function ($) {

  Drupal.behaviors.quorauserlogin = {
    attach: function (context) {
      // Hide the register by email block by default
      $('.pane-formblock-user-register').hide();

      // Toggel login by email and social login box.
      $("#show-login-email").click(function() {
        $('.pane-formblock-user-register').show();
        $('.pane-hybridauth-hybridauth,.pane-custom.pane-3').hide();
      });

      $("#show-login-social").click(function() {
        $('.pane-formblock-user-register').toggle();
        $('.pane-hybridauth-hybridauth,.pane-custom.pane-3').toggle();
      });
    }
  };
})(jQuery);
