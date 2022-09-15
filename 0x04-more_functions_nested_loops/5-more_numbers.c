#include "main.h"

/**
 * more_numbers - prints numbers 0 - 14
 *
 * Description: prints numbers from 0 to 14,
 * the a new line
 */
void more_numbers(void)
{
	int d1;
	int d2;
	int times;
	int num;

	times = 10;

	while (times > 0)
	{
		num = 0;
		while (num < 15)
		{
			d1 = num / 10;
			d2 = num % 10;

			if (d1 != 0)
				_putchar(d1 + '0');
			_putchar(d2 + '0');

			++num;
		}
		_putchar('\n');
		--times;
	}
}
