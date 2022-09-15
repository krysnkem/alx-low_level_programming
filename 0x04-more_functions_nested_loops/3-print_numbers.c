#include "main.h"

/**
 * print_most_numbers - prints all numbers except 2 and 4
 *
 * Description: prints all natural numbers expept 2 and 4
 */

void print_most_numbers(void)
{
	int num;

	num = '0';
	while (num <= '9')
	{
		if (num == '2' || num == '4')
		{
			++num;
			continue;
		}
		_putchar(num + '0');
		++num;
	}
	_putchar('\n');
}
