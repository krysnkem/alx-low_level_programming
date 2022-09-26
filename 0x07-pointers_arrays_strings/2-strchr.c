#include <stddef.h>
/**
 * _strchr - locates a character in a string
 * @s: target string
 * @c: character to be found
 *
 * Return: address of c found and NUll if no address found
 */
char *_strchr(char *s, char c)
{
	unsigned int i;

	i = 0;
	while (s[i] != c && s[i] != '\0')
		++i;

	if (s[i] == c)
		return (&s[i]);

	return (NULL);
}
