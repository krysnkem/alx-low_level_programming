#include "main.h"

/**
 * times_table - print 9 times table
 *
 * Description: prints the 9 times table
 * from 0 to 9
 *
 */
void times_table(void)
{
	int num1;
	int num2;

	num1 = 0;

	while (num1 < 10)
	{
		num2 = 0;
		while (num2 < 10)
		{
			if (num2 == 0)
			{
				_putchar('0');
			}
			else
			{
				if ((int)((num1 * num2) / 10) == 0)
				{
					_putchar(' ');
				}
				else
				{
					_putchar((int)((num1 * num2) / 10) + '0');
				}
				_putchar(((num1 * num2) % 10) + '0');
			}

			if (num2 < 9)
			{
				_putchar(',');
				_putchar(' ');
			}
			++num2;

		}
		_putchar('\n');
		++num1;
	}
}
