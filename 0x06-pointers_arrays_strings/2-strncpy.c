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
	int i;

	i = 0;
	while (i < n && s[i] != '\0')
	{
		dest[i] = src[i];
		++i;
	}
	while (i < n)
	{
		dest[i] = '\0';
		++i;
	}
	return (dest);
}
