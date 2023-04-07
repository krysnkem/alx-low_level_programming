#include "hash_tables.h"
#include <string.h>
#include <stdlib.h>

void free_node(hash_node_t *node);

/**
 * hash_table_set - adds an element to the hash table
 * @ht: the hash table you want to add or update the key/value to
 * @key: the key
 * @value: the value of the key
 * Return: 1 on sucess and 0 on failure
 */

int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	hash_node_t *node, *node_at_index, *temp_node, *prev_node = NULL;
	unsigned long int key_idx = 0;

	if (ht == NULL)
		return (0);
	if (strcmp(key, "") == 0)
		return (0);
	node = malloc(sizeof(*node));
	if (node == NULL)
		return (0);
	node->key = strdup(key);
	node->value = strdup(value);
	key_idx = key_index((const unsigned char *)key, ht->size);
	node_at_index = ht->array[key_idx];
	if (node_at_index == NULL)
	{
		node->next = NULL;
		ht->array[key_idx] = node;
		return (1);
	}
	temp_node = node_at_index;
	while (temp_node != NULL)
	{
		if (strcmp(key, temp_node->key) == 0)
		{
			node->next = temp_node->next;
			if (prev_node != NULL)
				prev_node->next = node;
			else
				ht->array[key_idx] = node;
			free_node(temp_node);
			return (1);
		}
		prev_node = temp_node;
		temp_node = temp_node->next;
	}
	node->next = node_at_index;
	ht->array[key_idx] = node;
	return (1);
}

/**
 * free_node - frees a hash_node_t
 * @node: the node to be freed
 */

void free_node(hash_node_t *node)
{
	free(node->key);
	free(node->value);
	free(node);
}
