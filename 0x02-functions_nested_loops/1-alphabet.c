#include "main.h"

/**
 * print_alphabet - prints the alphabet
 *
 * Description: prints all the alphabet
 * in lowercase
 */
void print_alphabet(void)
{
	int alphaAscii;

	alphaAscii = 97;
	while (alphaAscii < 123)
	{
		_putchar((char)alphaAscii);
		++alphaAscii;
	}
	_putchar('\n');
}
