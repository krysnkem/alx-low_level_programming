#include "main.h"

/**
 * print_most_numbers - prints all numbers except
 *
 * Description: prints all natural numbers expept
 */

void print_most_numbers(void)
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
