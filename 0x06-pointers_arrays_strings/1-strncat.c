#include "main.h"

/**
 * _strncat - concatenates two strings together
 * @dest: destination string
 * @src: source string
 * @n: bytes to copy
 *
 * Return: destination string
 **/

char *_strncat(char *dest, char *src, int n)
{
	int max, src_len, dest_len;
	int i;

	src_len = _strlen(src);
	dest_len = _strlen(dest);

	if (n >= src_len)
		max = src_len;
	else
		max = n;
	i = 0;
	while (i < max)
	{
		dest[dest_len + i] = src[i];
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
