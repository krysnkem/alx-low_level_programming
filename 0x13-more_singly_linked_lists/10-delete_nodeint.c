#include "lists.h"
#include <stdlib.h>
/**
 * delete_nodeint_at_index - deletes the node at index index of
 * a listint_t linked list
 * @head: pointer to the pointer of the first node
 * @index: the position at which to remove the node
 *
 * Return: 1 (success) -1 (failure)
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *h = *head;
	listint_t *nodeAtIndex;
	unsigned int count = 0;

	while (h != NULL)
	{
		if (index == 0)
		{
			*head = h->next;
			free(h);
			return (1);
		}
		if (count == (index - 1))
		{
			nodeAtIndex = h->next;
			h->next = nodeAtIndex->next;
			free(nodeAtIndex);
			return (1);
		}
		count++;
		h = h->next;
	}
	return (-1);
}
