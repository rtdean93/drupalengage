(function ($) {
  window.FBShare = window.FBShare || { numlinks:0 };
  function async_load(){
    var s = document.createElement("script");
    s.type = "text/javascript";
    s.async = true;
    s.src = "http://static.ak.fbcdn.net/connect.php/js/FB.Share";
    var x = document.getElementsByTagName('script')[0];
    x.parentNode.insertBefore(s, x);
  }
  if (window.attachEvent) {
    window.attachEvent("onload", async_load);
  }
  else {
    window.addEventListener("load", async_load, false);
  }

  $(document).ready(function(){
    $('a.service-links-facebook-share').each(function(){
      $(this).attr('share_url', $(this).attr('rel'));
      $(this).attr('expr:share_url', $(this).attr('rel'));
      $(this).attr('type', Drupal.settings.ws_fs.type);
      $(this).attr('name', 'fb_share');

      $(this).text(Drupal.settings.ws_fs.text);
      $(this).css('vertical-align', 'top');
      $(this).hide()

      window.FBShare.numlinks += 1;
    });

    fix_css = function() {
      if (window.FBShare.numlinks <= $('.FBConnectButton.FBConnectButton_Small').length) {
        window.clearInterval(interval);

        if (Drupal.settings.ws_fs.text == '') {
          $('span.FBConnectButton_Text').each(function(){
            $(this).css('margin', '1px').css('padding', 0)
            .css('padding-top', '2px').css('padding-bottom', '3px')
            .css('margin-left', '17px').css('margin-bottom', '10px');

            $(this).text('');
          });
        }

        $('.FBConnectButton.FBConnectButton_Small').each(function(){
          $(this).css('vertical-align', 'top').next().next().css('vertical-align', 'top');
          $(this).parent().parent().show();
        });

        if (Drupal.settings.ws_fs.fix_count) {
          $(".fb_share_no_count .fb_share_count_inner").text("0");
          $(".fb_share_no_count").removeClass("fb_share_no_count");
        }
      }
    }
    var interval = window.setInterval(fix_css, 500);
  });
})(jQuery);
