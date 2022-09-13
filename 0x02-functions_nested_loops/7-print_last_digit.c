#include "main.h"

/**
 * print_last_digit - returns and prints last digit of a number
 * @n: operand parameter
 *
 * Description: prints and returns the last digit of n
 * Return: last digit of n
 */
int print_last_digit(int n)
{
	int lastDigit;

	lastDigit = n % 10;
	_putchar(lastDigit + '0');
	return (lastDigit);
}
