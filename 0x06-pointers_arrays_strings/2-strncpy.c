#include "main.h"

/**
 * _strncpy - copies a string
 * @dest: Destination string
 * @src: src string
 * @n: number of byte to copy
 *
 * Return: destination string
 */
char *_strncpy(char *dest, char *src, int n)
{
	int src_len, i, max;

	src_len = _strlen(src);
	if (n <= src_len)
		max = n;
	else
		max = src_len;

	i = 0;
	while (i < max)
	{
		dest[i] = src[i];
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
		++count;

	return (count);
}
