#include <stddef.h>
#include <stdlib.h>
/**
 * _strdup - returns a pointer to a newly allocated space in memory,
 * which contains a copy of the string given as a parameter
 * @str: parameter string
 *
 * Return: NULL (str = NULL or if insufficient memory was available)
 * on Success returns the new memory location with the copied string
 */
char *_strdup(char *str)
{
	int i, n;
	char *s;

	if (str == NULL)
		return (NULL);
	i = 0;
	while (*(str + i) != '\0')
		++i;

	s = malloc(sizeof(*str) * (i + 1));

	if (s == NULL)
		return (NULL);

	n = 0;
	while (n < i)
	{
		s[n] = *(str + n);
		++n;
	}
	*(s + n) = '\0';

	return (s);

}
