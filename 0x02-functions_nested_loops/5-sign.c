#include "main.h"

/**
 * print_sign - prints +, 0 or -
 * @n: parameter to check
 *
 * Description: Checks if n is zero, greater than zero
 * or less than zero
 * Return: 1 if n is greater than zero
 * 0 and prints 0 if n is zero
 * -1 and prints - if n is less than zero
 */
int print_sign(int n)
{
	if (n < 0)
	{
		_putchar('-');
		return (-1);
	}
	else if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else
	{
		_putchar('0');
		return (0);
	}
}
