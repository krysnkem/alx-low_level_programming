#include "main.h"

/**
 * swap_int - swaps two integers
 * @a: the first integer value
 * @b: the second integer value
 */
void swap_int(int *a, int *b)
{
	int temp = *a;
	*a = *b;
	*b = temp;
}
