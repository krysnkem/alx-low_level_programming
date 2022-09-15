#include "main.h"

/**
 * print_square - prints a square
 * @size: the lenght of the square
 *
 * Description: Prints a squre "size" wide and high
 * using '#'
 **/
void print_square(int size)
{
	int width;
	int height;

	height = 0;
	while (height < size)
	{
		width = 0;
		while (width < size)
		{
			_putchar('#');
			++width;
		}
		_putchar('\n');
		++height;
	}
	if (size <= 0)
		_putchar ('\n');
}
