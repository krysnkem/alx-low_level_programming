#include "variadic_functions.h"

/**
 * sum_them_all - sums of all its parameters
 * @n: number of parameters
 *
 * Return: sum of all parameters
 */
int sum_them_all(const unsigned int n, ...)
{
	unsigned int i = 0;
	va_list ap;
	int sum;

	sum = 0;
	if (n == 0)
		return (sum);

	va_start(ap, n);

	while (i < n)
	{
		sum += va_arg(ap, int);
		++i;
	}
	return (sum);
}
