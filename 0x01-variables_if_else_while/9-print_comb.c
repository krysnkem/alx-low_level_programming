#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: prints numbers separated by
 * space and comma
 * Return: Always 0 (Success)
 *
 *
 */
int main(void)
{
	int num;

	num = 0;

	while (num < 10)
	{
		putchar(num + '0');
		if (num < 9)
		{
			putchar(',');
			putchar(' ');
		}
		++num;
	}
	putchar('\n');
	return (0);
}
