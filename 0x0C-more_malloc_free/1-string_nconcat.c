#include <stdlib.h>
#include <string.h>
/**
 * string_nconcat - concatenates two strings
 * @s1: first string
 * @s2: second string
 * @n: number of characters to copy from s2
 *
 * Return: pointer to new string or NULL if failure occurs
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *new_string, *s1_cp, *s2_cp;
	unsigned long int max, i, j;

	if (s1 == NULL)
		s1_cp = "";
	else
		s1_cp = s1;
	if (s2 == NULL)
		s2_cp = "";
	else
		s2_cp = s2;

	if (n <= strlen(s2_cp))
		max = n;
	else
		max = strlen(s2_cp);
	new_string = malloc(strlen(s1_cp) + max + 1);
	if (new_string == NULL)
		return (NULL);
	i = 0;
	while (i < strlen(s1_cp))
	{
		*(new_string + i) = *(s1_cp + i);
		++i;
	}
	j = 0;
	while (j < max)
	{
		*(new_string + i + j) = *(s2_cp + j);
		++j;
	}

	return (new_string);
}
