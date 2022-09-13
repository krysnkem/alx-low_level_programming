#include "main.h"

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
