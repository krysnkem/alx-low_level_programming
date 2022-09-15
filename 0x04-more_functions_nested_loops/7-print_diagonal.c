#include "main.h"

/**
 * print_diagonal - prints a diagonal line
 * @n: length of the diagonal
 *
 * Description: prints diagonal using '\'
 **/
void print_diagonal(int n)
{
	int space;
	int line;
	int s;

	line = 0;
	space = 0;
	while (line < n)
	{
		s = 0;
		while (s < space)
		{
			_putchar(' ');
			++s;
		}
		_putchar('\\');
		++line;
		++space;
		_putchar('\n');
		if (line + 1 == n)
			_putchar('\n');
	}
	_putchar('\n');

}
