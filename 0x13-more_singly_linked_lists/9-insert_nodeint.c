#include "lists.h"
#include <stdlib.h>

/**
 * insert_nodeint_at_index - inserts a new node at a given position
 * @head: pointer to the pointer of the first node
 * @idx: index to insert the new node
 * @n: the data of the new node
 *
 * Return: pointer to the new node
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *h = *head;
	listint_t *newNode;
	unsigned int count = 0;

	if (*head == NULL && idx == 0)
	{
		*head = malloc(sizeof(listint_t));
		(*head)->n = n;
		(*head)->next = NULL;
		return(*head);
	}

	while (h != NULL)
	{
		if (idx == 0)
			return (add_nodeint(head, n));
		if (count == (idx - 1))
		{
			newNode = malloc(sizeof(listint_t));
			if (newNode == NULL)
				return (NULL);
			newNode->next = h->next;
			newNode->n = n;
			h->next = newNode;
			return (newNode);
		}
		h = h->next;
		++count;
	}
	return (NULL);
}



/**
 * add_nodeint - adds a new node at beginning of a listint_t list
 * @n: the data the node should hold
 * @head: pointer to the address pointing to the head node
 *
 * Return: The address of the new node
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new;

	new = malloc(sizeof(listint_t));
	if (new == NULL || head == NULL)
		return (NULL);
	new->n = n;
	new->next = *head;
	*head = new;

	return (new);
}
