#include "lists.h"

/**
 * insert_dnodeint_at_index -  inserts a new node at a given position.
 * @h: pointer to the pointer to the first node.
 * @idx: index to insert the new node.
 * @n: the data of the new node.
 * Return: the address of the new node.
 */

dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *head, *new, *prev;
	unsigned int i = 0;

	if (h == NULL)
	{
		return (NULL);
	}
	head = *h;
	while (i < idx)
	{
		if (head == NULL)
		{
			return (NULL);
		}
		prev = head;
		head = head->next;
		++i;
	}
	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
	{
		return (NULL);
	}
	new->n = n;
	if (i == 0)
	{
		new->prev = NULL;
		new->next = NULL;
		*h = new;
	}
	else
	{
		new->next = head;
		new->prev = prev;
		head->prev = new;
		prev->next = new;
	}

	return (new);
}
