#include "lists.h"

/**
 * get_nodeint_at_index - finds the nth node in linked list
 * @head: pointer to the first node
 * @index: position to be returned
 *
 * Return: the nth node of a listint_t linked list or NULL
 */


listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *h = head;
	unsigned int pos = 0;

	while (h != NULL)
	{
		if (pos == index)
			return (h);
		h = h->next;
		++pos;
	}

	return (NULL);
}
