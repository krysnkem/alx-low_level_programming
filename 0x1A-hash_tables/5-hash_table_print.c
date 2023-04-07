#include "hash_tables.h"
#include <stdio.h>

/**
 * hash_table_print - prints a hash table
 * @ht: the hash table
 */

void hash_table_print(const hash_table_t *ht)
{
	unsigned long int i = 0;
	hash_node_t *node;
	unsigned int first_comma = 1;

	printf("{");
	if (ht == NULL)
		return;

	while (i < ht->size)
	{
		node = ht->array[i];
		while (node != NULL)
		{
			if (!first_comma)
			{
				printf(", ");
			}
			printf("'%s': '%s'", node->key, node->value);
			node = node->next;
			first_comma = 0;
		}
		++i;
	}
	printf("}\n");

}
