#include "main.h"

/**
 * _isdigit - checks for a digit (0 through 9)
 * @c: digit to be checked
 *
 * Description: checks if c is a digit
 * Return: 1 if c is a digit and 0 if c is not
 */

int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
