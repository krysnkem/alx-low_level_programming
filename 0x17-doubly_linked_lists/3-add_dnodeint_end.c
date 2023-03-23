#include "lists.h"

/**
 * add_dnodeint_end - adds a new node at the end of a dlistint_t list.
 * @head: pointer to pointer of the first node.
 * @n: data that the new node should contain
 * Return: the address of the new node
 */

dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new;
	dlistint_t *prev;
	dlistint_t *h = *head;
	size_t count = 0;

	if (head == NULL)
	{
		return (NULL);
	}

	whilei (h)
	{
		++count;
		prev = h;
		h = h->next;
	}


	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
	{
		return (NULL);
	}

	new->n = n;
	new->next = NULL;
	if (count > 0)
	{
		new->prev = prev;
		prev->next = new;
	}
	else
	{
		*head = new;
		new->prev = NULL;
	}

	return (new);
}
