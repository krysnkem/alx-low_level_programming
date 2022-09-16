#include "main.h"

/**
 * print_triangle - prints a triangle
 * @size: the size of the triangle
 *
 * Description: prints a triangle using '#
 */
void print_triangle(int size)
{
	int space;
	int i;
	int s;
	int a;

	i = 1;
	while (i <= size)
	{
		space = size - i;
		s = 0;
		while (s < space)
		{
			_putchar(' ');
			++s;
		}
		a = 0;
		while (a < i)
		{
			_putchar('#');
			++a;
		}
		_putchar('\n');
		++i;
	}
	if (size <= 0)
		_putchar('\n');
}
