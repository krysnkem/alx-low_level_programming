#include "main.h"
/**
 * print_chessboard - prints the chessboard
 * @a: array of pointers to char
 *
 */
void print_chessboard(char (*a)[8])
{
	unsigned int i, n;

	i = 0;
	while (i < 8)
	{
		n = 0;
		while (n < 8)
		{
			_putchar(*(*(a + i) + n));
			++n;
		}
		_putchar('\n');
		++i;
	}
}
