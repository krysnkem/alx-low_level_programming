#include <stdlib.h>

/**
 * malloc_checked -  allocates memory using malloc
 * @b: number of bits to allocate
 *
 * Return: void pointer
 */
void *malloc_checked(unsigned int b)
{
	void *mem;

	mem = malloc(b);
	if (mem == NULL)
		exit(98);
	return (mem);
}
