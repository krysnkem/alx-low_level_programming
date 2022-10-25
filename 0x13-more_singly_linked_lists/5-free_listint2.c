#include "lists.h"
/**
 * free_listint2 - frees a listint_t list
 * @head: address to the pointer to the first node
 *
 */

void free_listint2(listint_t **head)
{
	listint_t *h;
	listint_t *currentNode;

	h = *head;

	while (h != NULL)
	{
		currentNode = h;
		h = h->next;
		free(currentNode);
	}
	*head = NULL;
}
