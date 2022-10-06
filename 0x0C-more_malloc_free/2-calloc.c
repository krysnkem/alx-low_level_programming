#include <stdlib.h>
#include <stdio.h>

/**
 * _calloc - allocates memory for an array, using malloc
 * @nmemb: number of members in the array
 * @size: number of bytes of each member of the array
 *
 * Return: pointer to the created array or NULL
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *array;
	char *char_array;
	unsigned int i;

	if (nmemb <= 0 || size <= 0)
		return (NULL);
	array = malloc(size * nmemb);
	if (array == NULL)
		return (NULL);
	char_array = array;
	if (char_array == NULL)
		return (NULL);
	i = 0;
	while (i < size * nmemb)
	{
		*(char_array + i) = 0;
		++i;
	}
	return (array);
}
