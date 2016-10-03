<?php

?>

<article class="node-<?php print $node->nid;?> <?php print $classes; ?>clearfix"<?php print $attributes; ?>>
	<!--<header>
		<h2>
		<?php 
			// print l( $title, $node_url, array(
					// 'attributes' => array(
						// 'title' => t($title),
					// ),
					// 'html' => true
				// )
			// );
		?>
		</h2>
	</header>-->
	<div id="node-author">
		<?php
			print $user_picture;
			print $name;
		?>
	</div>
	<?php 
		print '<strong>mon template de noeud</strong>';
		print render($content);
		dpm($content);
	?>
</article>