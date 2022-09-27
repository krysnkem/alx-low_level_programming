#include <stddef.h>

/**
 * _strstr - locates a substring
 * @haystack: string to be searched
 * @needle: substring to be looked for
 *
 * Return: if needle is found the address of
 * the first letter in haystack is returned.
 * if not NULL is returned
 */
char *_strstr(char *haystack, char *needle)
{
	unsigned int i, n;

	i = 0;
	while (haystack[i] != '\0')
	{
		n = 0;
		while (needle[n] != '\0'
				&&
				haystack[i + n] == needle[n])
			++n;
		if (needle[n] == '\0')
			return (&haystack[i]);
		++i;
	}

	return (NULL);
}
