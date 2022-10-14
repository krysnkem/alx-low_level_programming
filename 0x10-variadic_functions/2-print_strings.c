#include "variadic_functions.h"
#include <stdlib.h>
#include <stdarg.h>
/**
 * print_strings - prints strings
 * @separator: string separating each string
 * @n: number of string passed as argument
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	const char *sep;
	va_list ap;
	char *s;

	if (n == 0)
		return;
	if (separator == NULL)
		sep = "";
	else
		sep = separator;

	va_start(ap, n);

	i = 0;
	while (i < n)
	{
		s = va_arg(ap, char *);
		if (s == NULL)
			s = "(nil)";
		printf("%s", s);
		if (i < n - 1)
			printf("%s", sep);
		++i;
	}
	printf("\n");
	va_end(ap);

}
