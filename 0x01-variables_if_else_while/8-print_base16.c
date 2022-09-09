#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: prints all the numbers of base16
 * in lowercase
 * Return: Always 0 (Success)
 *
 *
 **/
int main(void)
{
	int num;

	num = 0;

	while (num < 16)
	{
		if (num < 10)
			putchar(num + '0');
		else
			putchar((char)num + 87);
		++num;
	}
	putchar('\n');

	return (0);
}
