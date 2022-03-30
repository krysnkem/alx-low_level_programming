#include "main.h"
#include <stdio.h>

/**
 * print_array- function that prints a particular amount of array
 * @a: parameter that holds the int
 * @n: parameter that tells how many elements should be printed
 */
void print_array(int *a, int n)
{
	int tmp;
	int count;
	int i;

	tmp = *a;
	count = 0;
	while (tmp != '\0')
	{
		tmp = *(a + count + 1);
		++count;
	}
	i = 0;
	while (i < n)
	{
		printf("%d", *(a + i));
		if (i != (n - 1))
		{
			printf(", ");
		}
		++i;
	}
	printf("\n");
}
