#include <stddef.h>
#include <stdlib.h>
/**
 * create_array - creates an array of chars,
 * and initializes it with a specific char
 * @size: the size of the array
 * @c: the character to fill the array with
 *
 * Return: array of that size
 */
char *create_array(unsigned int size, char c)
{
	char *s;
	unsigned int n;

	if (size < 1)
		return (NULL);

	n = 0;
	s = malloc(sizeof(*s) * size);

	while (n < size)
	{
		*(s + n) = c;
		++n;
	}

	return (s);
}
