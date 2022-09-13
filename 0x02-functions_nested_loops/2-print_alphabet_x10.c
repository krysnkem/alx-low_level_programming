#include "main.h"

/**
 * print_alphabet_x10 - Prints ten lines of
 * alphabet in small letters
 *
 */
void print_alphabet_x10(void)
{
	int l;
	int alpha;

	l = 10;
	while (l > 0)
	{
		alpha = 97;
		while (alpha < 123)
		{
			_putchar((char) alpha);
			++alpha;

		}
		--l;
		_putchar('\n');
	}
}
