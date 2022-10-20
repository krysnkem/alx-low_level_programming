#include "lists.h"
#include <string.h>

/**
 * add_node - adds a new node at the beginning of a list_t list
 * @head: points to the address pointing to the first node of the list
 * @str: the string to be copied into the str member of the list_t
 *
 * Return: pointer to the new node
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *new;

	if (head == NULL || str == NULL)
		return (NULL);
	new = malloc(sizeof(list_t));
	if (new == NULL)
		return (NULL);
	new->str = strdup(str);
	new->len = strlen(str);
	new->next = *head;
	*head = new;

	return (*head);

}
