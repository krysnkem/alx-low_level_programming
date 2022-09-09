#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: prints all single digits of base 10
 * starting from 0
 * Return: Always 0 (Success)
 */
int main(void)
{
	int num;

	num = 0;

	while (num < 10)
	{
		putchar(num + '0');
		++num;
	}
	putchar('\n');

	return (0);
}
