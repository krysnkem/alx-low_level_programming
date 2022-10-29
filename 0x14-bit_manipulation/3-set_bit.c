#include "main.h"


/**
 * set_bit - sets the value of a bit to 1 at a given index
 * @index: the index to set the bit
 * @n: pointer to the number to set the bit
 *
 * Return: 1 (success), -1 (failure)
 */


int set_bit(unsigned long int *n, unsigned int index)
{
	int bit_result = get_bit(*n, index);

	if (bit_result == -1 || bit_result == 1)
		return (-1);
	*n = *n + _pow_recursion(2, index);
	return (1);

}

/**
 * get_bit - get the bit at a position in a number
 * @n: the number to get the bit from
 * @index: the index to get the bit from
 *
 * Return: the value of bit at index
 */
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned long int num = n;
	unsigned int i = 0;

	if (index >= (sizeof(unsigned long int) * 4))
		return (-1);

	while (i < index)
	{
		num >>= 1;
		++i;
	}
	num &= 1;

	return (num);

}

/**
 * _pow_recursion - calculates x raised to power y
 * @x: base integer
 * @y: power
 *
 * Return: 1 (if y == 0) or -1 (if y < 0) or x to power y
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	if (y == 0)
		return (1);
	if (y == 1)
		return (x);
	return (x * _pow_recursion(x, y - 1));
}
