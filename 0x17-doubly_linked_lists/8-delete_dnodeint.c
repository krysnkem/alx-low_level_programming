#include "lists.h"

/**
 * delete_dnodeint_at_index - deletes the node at index index of
 * a dlistint_t linked list.
 * @head: pointer to the pointer of the first node.
 * @index: the index to remove
 */

int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *next, *prev, *current;
	unsigned int i = 0;

	current = *head;
	while (i < index)
	{
		if (current == NULL)
		{
			return (-1);
		}
		current = current->next;
		++i;
	}
	if (current == NULL)
	{
		return (-1);
	}
	if (i == 0)
	{
		next = current->next;
		next->prev = NULL;
	}
	else
	{
		prev = current->prev;
		next = current->next;
		prev->next = next;
	}
	free(current);
	return (-1);
}
