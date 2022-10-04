#include <stdlib.h>
#include <string.h>

/**
 * str_concat - concatenates two strings
 * @s1: first string
 * @s2: second string
 *
 * Return: pointer to the new location of concatenation
 * of the two strings or pointer in the event of failure
 */
char *str_concat(char *s1, char *s2)
{
	 char *dest, *s1_cp, *s2_cp;
	 unsigned long int i, n;

	if (s1 == NULL)
		s1_cp = "";
	else
		s1_cp = s1;
	if (s2 == NULL)
		s2_cp = "";
	else
		s2_cp = s2;

	dest = malloc(sizeof(*s1_cp) * strlen(s1_cp)
			 + sizeof(*s2_cp) * strlen(s2_cp) + 1);
	if (dest == NULL)
		return (NULL);
	i = 0;
	n = 0;
	while (i < strlen(s1_cp))
	{
		*(dest + i) = *(s1_cp + i);
		++i;
	}
	while (n < strlen(s2_cp))
	{
		*(dest + i + n) = *(s2_cp + n);
		++n;
	}
	*(dest + i + n) = '\0';
	return (dest);

}
