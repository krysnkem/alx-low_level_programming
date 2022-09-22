#include "main.h"

/**
 * _strcat - concatenates two strings.
 * @dest: destination string
 * @src: source string
 *
 * Return: pointer to resutling string
 */
char *_strcat(char *dest, char *src)
{
	int dest_len;
	int src_len;
	int n;

	dest_len = _strlen(dest);
	src_len = _strlen(src);
	n = 0;
	while (n < src_len)
	{
		dest[dest_len + n] = src[n];
		++n;
	}
	dest[dest_len + n] =  '\0';
	return (dest);
}

/**
 * _strlen - returns the length of a string
 * @s: the string
 *
 * Return: the length of a string
 *
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
