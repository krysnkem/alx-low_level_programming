#include "main.h"

/**
 * print_line - prints a line
 * @n: length of the line
 *
 * Description: prints a line by printing '_' n times
 **/
void print_line(int n)
{
	int i;

	i = 0;

	while (i < n)
	{
		_putchar('_');
		++i;
	}
	putchar('\n');
}
