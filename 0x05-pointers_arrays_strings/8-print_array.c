#include <stdio.h>
#include "main.h"

/**
 * print_array - prints an integer array
 * @a: address of the first element
 * @n: the number of digits to print
 */

void print_array(int *a, int n)
{
	int l;
	int max;
	int i;

	l = count_int_array(a);
	if (l > n)
	{
		max = n;
	}
	else
	{
		max = l;
	}
	i = 0;
	while (i < max)
	{
		printf("%d", *(a + i));
		if (i < (max - 1))
		{
			printf(", ");
		}
		++i;
	}
	printf("\n");

}

/**
 * count_int_array - counts the length of an integer array
 * @n: the address of the first element of the array
 *
 * Return: the length of the array
 */
int count_int_array(int *n)
{
	int count;

	count = 0;
	while (*(n + count) != '\0')
	{
		++count;
	}
	return (count);
}
