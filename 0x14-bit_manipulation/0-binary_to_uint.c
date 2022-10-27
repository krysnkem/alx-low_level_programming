#include "main.h"
#include <string.h>

/**
 * binary_to_uint -  converts a binary number to an unsigned int
 * @b: binary string
 *
 * Return: the converted number, or 0 if
 * there is one or more chars in the string b that is not 0 or 1
 * or b is NULL
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int u_int_value = 0;
	int pwr = strlen(b) - 1;
	int i = 0;

	if (b == NULL)
		return (0);
	while (b[i] != '\0')
	{
		if (b[i] != '1' && b[i] != '0')
			return (0);
		if (b[i] == '1')
			u_int_value += _pow_recursion(2, pwr);
		++i;
		--pwr;
	}

	return (u_int_value);

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
