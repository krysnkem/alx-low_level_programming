#include "lists.h"
/**
 * free_listint - frees a listint_t list
 * @head: pointer to the first node
 *
 */
void free_listint(listint_t *head)
{
	listint_t *h;
	listint_t *currentNode;

	h = head;
	while (h != NULL)
	{
		currentNode = h;
		h = h->next;
		free(currentNode);
	}
}
