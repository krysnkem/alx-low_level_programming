#include "lists.h"
/**
 * add_nodeint_end - adds a new node at the end of a listint_t list
 * @head: address of the pointer to the first node
 * @n: data of the new node
 *
 * Return: pointer to the new node
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *h;
	listint_t *new;

	if (head == NULL)
		return (NULL);
	h = *head;
	if (h == NULL)
	{
		h = malloc(sizeof(listint_t));
		if (h == NULL)
			return (NULL);
		h->n = n;
		h->next = NULL;
		*head = h;
		return (h);
	}
	while (h->next != NULL)
		h = h->next;
	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);
	new->n = n;
	new->next = NULL;
	h->next = new;

	return (new);

}
