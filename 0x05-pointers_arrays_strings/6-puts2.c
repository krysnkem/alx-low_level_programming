#include "main.h"

/**
 * puts2 - prints every other character
 * starting with the first character of a string
 * @str: address of the first charcter of the string
 */
void puts2(char *str)
{
	int i;

	i = 0;

	while (*(str + i) != '\0')
	{
		if (i % 2 != 0)
		{
			++i;
			continue;
		}
		_putchar(*(str + i));
		++i;
	}
	_putchar('\n');
}
