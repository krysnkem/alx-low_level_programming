#include "hash_tables.h"
#include <stdlib.h>

/**
 * free_node - frees a hash_node_t
 * @node: node to be freed
 */

void free_node_2(hash_node_t *node)
{
	free(node->key);
	free(node->value);
	free(node);
}

/**
 * hash_table_delete - deletes a hash table
 * @ht: the hash table to be deleted
 */
void hash_table_delete(hash_table_t *ht)
{
	unsigned int i = 0;
	hash_node_t *node, *temp_node;


	if (ht == NULL)
		return;
	while (i < ht->size)
	{
		node = ht->array[i];
		while (node)
		{
			temp_node = node;
			node = node->next;
			free_node_2(temp_node);
		}
		++i;
	}
	free(ht->array);
	free(ht);
}
