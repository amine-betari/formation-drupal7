<?php

/**
 * Implementation hook_default_rules_configuration()
 */
function formation_default_rules_configuration()
{
	$item = array();
	$items['rules_affichage_message_redaction_recette'] = entity_import('rules_config', '{
			"rules_affichage_message_redaction_recette" : {
				"LABEL" : "Affichage Message Pour Redaction Other Recette",
				"PLUGIN" : "reaction rule",
				"OWNER" : "rules",
				"TAGS" : [ "Recette" ],
				"REQUIRES": [ "rules" ],
				"ON" : { "node_insert--recette" : { "bundle" : "recette" } },
				"DO" : [
					{ "drupal_message" : {"message" : "Bravo vous avez ajoute une recette vous-voulez ajouter autre "} }
				]
			}
		}');
	return $items;
}
