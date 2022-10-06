#include <stdlib.h>

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

	if (nmemb <= 0 || size <= 0)
		return (NULL);
	array = malloc(size * nmemb);
	if (array == NULL)
		return (NULL);
	return (array);
}
