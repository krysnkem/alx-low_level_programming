#include "main.h"

/**
 * _puts - prints a string followed by a new line
 * @str: address of the first element of the string
 *
 */

void _puts(char *str)
{
	int i;

	i = 0;

	while (*(str + i) != '\0')
	{
		_putchar(*(str + i));
		++i;
	}
	_puthcar('\n');
}
