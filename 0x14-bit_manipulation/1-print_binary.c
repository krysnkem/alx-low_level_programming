#include "main.h"

/**
 * print_binary - prints the binary representation of a number
 * @n: number in decimal
 *
 */
void print_binary(unsigned long int n)
{
	unsigned long int res_of_div = n >> 1;
	unsigned long int rem = n - (res_of_div * 2);

	if (res_of_div == 0)
	{
		_putchar(rem + '0');
		return;
	}
	print_binary(res_of_div);
	_putchar(rem + '0');
}
