#include "main.h"
/**
 *  _strlen - gets the length of a string.
 * @s: holds the array
 * Return: length of string
 */
int _strlen(char *s)
{
	char tmp;
	int count;

	tmp = *s;
	count = 0;
	while (tmp != '\0')
	{
		++count;
		tmp = *(s + count);
	}
	return (count);
}
