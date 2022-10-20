#include "lists.h"
#include <string.h>

/**
 * add_node_end - adds a new node at the end of a list_t list
 * @head: pointer to the pointer of the first node
 * @str: string to be copied in to the new node
 *
 * Return: pointer to the new node
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *h;
	list_t *new;

	if (*head == NULL)
	{
		*head = malloc(sizeof(list_t));
		if (*head == NULL)
			return (NULL);
		(*head)->str = strdup(str);
		(*head)->len = strlen(str);
		(*head)->next = NULL;
		return (*head);
	}
	h = *head;
	while (h->next != NULL)
		h = h->next;
	new = malloc(sizeof(list_t));
	if (new == NULL || str == NULL || head == NULL)
		return (NULL);
	new->str = strdup(str);
	new->len = strlen(str);
	new->next = NULL;
	h->next = new;

	return (new);

}
