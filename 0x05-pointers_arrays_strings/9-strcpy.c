#include "main.h"

/**
 * _strcpy - function that prints a particular amount of array
 * @dest: parameter that holds the destination location
 * @src: holds the source string
 * Return: returns the string in the new destination
 */
char *_strcpy(char *dest, char *src)
{
	char tmp;
	int count;
	int i;

	tmp = *src;
	count = 0;
	while (tmp != '\0')
	{
		tmp = *(src + count + 1);
		++count;
	}
	i = 0;
	while (i < count + 1)
	{
		*(dest + i) = *(src + i);
		++i;
	}
	return (dest);
}
