#include "main.h"

/**
 * reverse_array - reverses the content of an array of integers
 * @a: array of integers
 * @n: number of elements in the array
 *
 */

void reverse_array(int *a, int n)
{
	int i, arr[100];

	i = 0;
	while (i < n)
	{
		arr[i] = a[n - (i + 1)];
		++i;
	}
	i = 0;
	while (i < n)
	{
		a[i] = arr[i];
		++i;
	}
}
