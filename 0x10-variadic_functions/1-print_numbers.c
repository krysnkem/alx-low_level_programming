#include "variadic_functions.h"
#include <stdlib.h>
/**
 * print_numbers - prints numbers, followed by a new line
 * @separator: string to be used as a separator between each number
 * @n: the number of numbers to be printed
 *
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list ap;
	const char *sep;

	if (n == 0)
		return;
	if (separator == NULL)
		sep = "";
	else
		sep = separator;
	va_start(ap, n);

	for (i = 0; i < n; i++)
	{
		printf("%d", va_arg(ap, int));
		if (i < (n - 1))
			printf("%s", sep);
	}
	printf("\n");
	va_end(ap);
}
