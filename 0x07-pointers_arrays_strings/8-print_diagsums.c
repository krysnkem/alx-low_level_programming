#include <stdio.h>

/**
 * sum_left_diagonal - calculates the sum of left diagonal
 * of a square matrix
 * @m: address of the first element of the matrix
 * @n: the size of the square matrix
 *
 * Return: sum of left diagonal
 */
int sum_left_diagonal(int *m, int n)
{
	int result, i;

	result = 0;
	i = 0;

	while (i < (n * n))
	{
		result = result + *(m + i);
		i = i + (n + 1);
	}

	return (result);
}

/**
 * sum_right_diagonal - calculates the sum of right diagonal
 * of a square matrix
 * @m: address of the first element of the matrix
 * @n: the size of the square matrix
 *
 * Return: the sum  of the right diagonal
 */
int sum_right_diagonal(int *m, int n)
{
	int result, i;

	result = 0;
	i = n - 1;
	while (i < (n * n) - 1)
	{
		result = result + *(m + i);
		i = i + (n - 1);
	}
	return (result);
}

/**
 * print_diagsums - prints the sum of the two diagonals
 * of a square matrix of integers
 * @a: the address of the first element
 * @size: the size of the square matrix
 *
 */
void print_diagsums(int *a, int size)
{
	printf("%d, %d\n",
	sum_left_diagonal(a, size),
	sum_right_diagonal(a, size));
}
