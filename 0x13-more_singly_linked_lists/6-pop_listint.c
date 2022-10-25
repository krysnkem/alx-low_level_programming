#include "lists.h"
/**
 * pop_listint - deletes the head node of a listint_t linked list
 * @head: address of pointer to first node
 *
 * Return: the head node’s data (n)
 */

int pop_listint(listint_t **head)
{
	listint_t *h;
	int data;

	if (head == NULL || *head == NULL)
		return (0);
	h = *head;

	data = h->n;
	*head = h->next;
	free(h);
	return (data);
}
