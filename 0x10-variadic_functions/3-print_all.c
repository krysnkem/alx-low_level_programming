#include "variadic_functions.h"
#include <stdlib.h>
/**
 * print_char - prints characters
 * @ap: variable list of arguments
 * @sep: separator string
 *
 */

void print_char(va_list ap, char *sep)
{
	printf("%s%c", sep, va_arg(ap, int));
}

/**
 * print_int - prints integers
 * @ap: variable list of arguments
 * @sep: separator string
 */


void print_int(va_list ap, char *sep)
{
	printf("%s%d", sep, va_arg(ap, int));
}

/**
 * print_float - prints floating point number
 * @ap: variable list of arguments
 * @sep: separator string
 *
 */

void print_float(va_list ap, char *sep)
{
	printf("%s%f", sep, va_arg(ap, double));
}

/**
 * print_string - prints a string
 * @ap: variable list of arguments
 * @sep: separactor string
 */

void print_string(va_list ap, char *sep)
{
	char *s = va_arg(ap, char *);

	if (s == NULL)
	{
		printf("%s(nil)", sep);
		return;
	}
	printf("%s%s", sep, s);
}

/**
 * print_all - prints any argument
 * @fomat: format string for printing
 *
 */

void print_all(const char * const fomat, ...)
{
	int i = 0;
	int j;
	va_list ap;
	char *sep = "";

	_format fmt_list[] = {
		{'c', print_char},
		{'i', print_int},
		{'f', print_float},
		{'s', print_string}
	};

	va_start(ap, fomat);

	while (fomat != NULL && fomat[i] != '\0')
	{
		j = 0;
		while (j < 4)
		{
			if (fmt_list[j].c == fomat[i])
			{
				fmt_list[j].func(ap, sep);
				sep = ", ";
				break;
			}
			++j;
		}
		++i;
	}
	printf("\n");
}
