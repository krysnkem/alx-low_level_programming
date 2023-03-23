#include "lists.h"

/**
 * get_dnodeint_at_index - calculates the nth node of a dlistint_t
 * linked list.
 * @head: pointer to the first node.
 * @index: the position of the required node
 * Return: the node at the nth index
 */

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int i = 0;

	while (i < index)
	{
		if (head == NULL)
		{
			return (NULL);
		}
		head = head->next;
		++i;
	}
	return (head);
}
