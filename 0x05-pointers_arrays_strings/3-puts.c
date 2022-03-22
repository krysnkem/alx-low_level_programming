#include "main.h"
#include <unistd.h>
/**
 * _putchar - writes the character c to stdout
 * @c: The character to print
 * _puts: prints a string, followed by a new line
 * str: the string file
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */

int _putchar(char c);

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
int _putchar(char c)
{
	return (write(1, &c, 1));
}
