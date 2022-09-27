#include <stddef.h>
/**
 * _strpbrk - searches a string for any of a set of bytes
 * @s: string to be seached
 * @accept: range of characters being searched for
 *
 * Return: pointer to the found character in s
 * or NULL
 */
char *_strpbrk(char *s, char *accept)
{
	unsigned int i, n;

	i = 0;
	while (s[i] != '\0')
	{
		n = 0;
		while (accept[n] != '\0' && accept[n] != s[i])
		{
			++n;
		}

		if (accept[n] == s[i])
			return (&s[i]);
		++i;
	}

	return (NULL);
}
