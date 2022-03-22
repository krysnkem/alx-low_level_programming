#include "main.h"

/**
 * _puts- prints a string, followed by a new line
 * @str: the string file
 */

void _puts(char *str)
{
	char tmp;
	int count;

	tmp = *str;
	count = 0;
	while (tmp != '\0')
	{
		_putchar(tmp);
		++count;
		tmp = *(str + count);
	}
	_putchar('\n');
}

