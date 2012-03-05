<?php if (isset($link)): ?>
  <?php print $link ?>
<?php else: ?>
  <span <?php print drupal_attributes($attr) ?>><?php print $content ?></span>
<?php endif; ?>
