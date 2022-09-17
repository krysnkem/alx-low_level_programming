#include "main.h"

/**
 * print_number - prints a number
 * @n: the number to be printed
 *
 * Description: Prints n one digit at a time;
 *
 */
void print_number(int n)
{
	int digitCount;
	int multiplier;
	int tempNum;
	int digit;
	int i;

	if (n == 0)
	{
		_putchar('0');
		return;
	}
	digitCount = 0;
	tempNum = _abs(n);
	multiplier = 1;
	/*Lets count how many digits we have*/
	while (tempNum != 0)
	{
		++digitCount;
		tempNum = tempNum / 10;
	}
	/*get the our divisior*/
	i = 0;
	while (i < digitCount - 1)
	{
		multiplier = multiplier * 10;
		++i;
	}
	tempNum = _abs(n);
	/*new lets get and print each digit*/
	if (n < 0)
		_putchar('-');
	while (tempNum != 0)
	{
		digit = tempNum / multiplier;
		tempNum = tempNum - (digit * multiplier);
		multiplier = multiplier / 10;
		_putchar(digit + '0');
	}
}

/**
 * _abs - returns absolute value of a n
 * @n: operand parameter
 *
 * Description: Finds the absolute value of n
 * Return: Abolute of value of n
 */

int _abs(int n)
{
	if (n < 0)
		return (n * -1);
	return (n);
}
