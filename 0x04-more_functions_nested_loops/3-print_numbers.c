#include "main.h"

/**
 * print_numbers - prints all numbers except
 *
 * Description: prints all natural numbers expept
 */

void print_numbers(void)
{
	int num;

	num = '0';
	while (num <= '9')
	{
		_putchar((char)num);
		++num;
	}
	_putchar('\n');
}
