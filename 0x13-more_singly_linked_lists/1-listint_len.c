#include <stdio.h>
#include "lists.h"

/**
 * listint_len -  counts all elements of a listint_t list
 * @h: pointer to the first node
 *
 * Return: Number of nodes
 */

size_t listint_len(const listint_t *h)
{
	size_t count = 0;

	while (h != NULL)
	{
		h = h->next;
		count++;
	}

	return (count);
}
