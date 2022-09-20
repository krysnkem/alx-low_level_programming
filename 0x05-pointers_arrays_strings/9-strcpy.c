#include <stdio.h>
#include "main.h"

/**
 * _strcpy - copies a string
 * @dest: the destination of the copied string
 * @src: the src of the copied string
 *
 * Return: pointer to the destination of the string
 */
char *_strcpy(char *dest, char *src)
{
	int i;
	int len;

	len = _strlen(src);
	i = 0;

	while (i < len && *(s + i) != '\0')
	{
		*(dest + i) = *(s + i);
		++i;
	}
	while (i < len)
	{
		*(dest + i) = '\0';
		++i;
	}
	return (dest);
}

/**
 * _strlen - returns the length of a string
 * @s: the string
 *
 * Return: the length of a string
 */

int _strlen(char *s)
{
	int count;

	count = 0;
	while (*(s + count) != '\0')
	{
		++count;
	}

	return (count);

}
