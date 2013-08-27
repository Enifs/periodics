README.txt
==========

Advanced Forum Basic Subscriptions

A minimalistic subscription module for Advanced Forums. Subscriptions can be
set at various levels: global, forum or topic.
Users are notified of new forums, new topics and new comments depending on what
they are subscribed to. A subscriptions overview tab is added to the Forum tab
menu, which allows users to view and/or cancel their subscriptions.

This module comes with a modified set of styles to allow the
subscribe/unsubscribe links to be displayed on the Forum pages. After
installing this module configure Advanced Forum to use one of the styles with
subscriptions.

IMPORTANT: Make sure you clear all caches (admin/config/development/performance)
after selecting a style in Advanced Forum.

STYLE NOTES
===========
If you have already developed your own custom style for Advanced Forum you will
need to modify either template advanced-forum.{yourstyle}.forum-list.tpl.php,
or template advanced-forum.naked.forum-list.tpl.php.
You will need to copy lines 58, 75 and 142-144 from the provided template 
advanced-forum.blue_lagoon_plus.forum-list.tpl.php and paste them into the
appropriate places in your template.

AUTHOR/MAINTAINER
=================
anton baggerman <anton.baggerman AT highlandsbiz DOT com DOT au>
http://www.highlandsbiz.com.au
