#include "lists.h"

/**
 * sum_listint - calculates the sum of all integers in the listint_t
 * linked list
 * @head: pointer to the first node
 *
 * Return: the sum of all node data
 */
int sum_listint(listint_t *head)
{
	int sum = 0;
	listint_t *h = head;

	while (h != NULL)
	{
		sum = sum + h->n;
		h = h->next;
	}
	return (sum);
}
