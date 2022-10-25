#include "lists.h"
#include <stdlib.h>
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
