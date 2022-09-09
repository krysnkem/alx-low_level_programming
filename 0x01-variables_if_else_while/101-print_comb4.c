#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: Prints all possible pattern of 1..9
 * As double digits
 * Return: Alwasy 0 (Success)
 */
int main(void)
{
	int num1;
	int num2;
	int num3;

	num1 = 0;

	while (num1 < 8)
	{
		num2 = num1 + 1;

		while (num2 < 9)
		{
			num3 = num2 + 1;
			while (num3 < 10)
			{
				putchar(num1 + '0');
				putchar(num2 + '0');
				putchar(num3 + '0');

				if (num1 < 7)
				{
					putchar(',');
					putchar(' ');
				}

				++num3;

			}
			++num2;
		}
		++num1;

	}
	putchar('\n');
	return (0);
}
