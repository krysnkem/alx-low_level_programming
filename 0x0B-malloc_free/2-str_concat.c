#include <stdlib.h>
#include <stddef.h>
#include <string.h>
/**
 * str_concat - joines two strings and copy to a new memory location
 * @s1: first string
 * @s2: second string
 *
 * Return: new location with concatenation of s1 and s2
 */
char *str_concat(char *s1, char *s2)
{
	char *new_dest;
	unsigned long int i, n;

	new_dest = malloc((sizeof(*s1) * strlen(s1))
			+ (sizeof(*s2) * strlen(s2)));
	if (new_dest == NULL)
		return (NULL);
	i = 0;
	n = 0;
	if (s1 != NULL && s2 == NULL)
	{
		while (i < strlen(s1))
		{
			*(new_dest + i) = *(s1 + i);
			i++;
		}
	}
	if (s1 == NULL && s2 != NULL)
	{
		while (i < strlen(s2))
		{
			*(new_dest + i) = *(s2 + i);
			i++;
		}
	}
	if (s1 != NULL && s2 != NULL)
	{
		while (i < strlen(s1))
		{
			*(new_dest + i) = *(s1 + i);
			i++;
		}
		while (n < strlen(s2))
		{
			*(new_dest + i + n) = *(s2 + n);
			n++;
		}
	}
	*(new_dest + (i + n)) = '\0';
	return (new_dest);
}
