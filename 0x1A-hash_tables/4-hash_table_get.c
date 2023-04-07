#include "hash_tables.h"
#include <string.h>

/**
 * hash_table_get - retrieves a value associated with a key
 * @ht: the hash table
 * @key: the key who's value we seek
 * Return: the value of the key or NULL on failure
 */

char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int index = 0;
	hash_node_t *temp_node;

	index = key_index((const unsigned char *)key, ht->size);
	temp_node = ht->array[index];
	if (temp_node == NULL)
		return (NULL);
	while (temp_node != NULL)
	{
		if (strcmp(key, temp_node->key) == 0)
			return (temp_node->value);
		temp_node = temp_node->next;
	}

	return (NULL);
}
