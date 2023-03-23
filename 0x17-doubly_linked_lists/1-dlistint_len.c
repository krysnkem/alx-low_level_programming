#include "lists.h"

/**
 * dlistint_len - calculates the number of elements in a linked dlistint_t list.
 * @h: pointer to the first node
 * Return: the number of nodes
 */

size_t dlistint_len(const dlistint_t *h)
{
	size_t count = 0;

	while(h)
	{
		++count;
		h = h->next;
	}

	return(count);
}
