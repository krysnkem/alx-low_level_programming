#include "lists.h"

/**
 * free_list - frees a list_t list
 * @head: pointer to the first node
 *
 */
void free_list(list_t *head)
{
	list_t *node;
	list_t *freenode;

	node = head;

	while (node != NULL)
	{
		freenode = node;
		node = node->next;
		free(freenode->str);
		free(freenode);
	}
}
