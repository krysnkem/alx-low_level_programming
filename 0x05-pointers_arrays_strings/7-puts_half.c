#include "main.h"

/**
 * puts_half - prints the second half of a string
 * @str: address of the first character
 *
 */
void puts_half(char *str)
{
	int len;
	int n;

	len = _strlen(str);
	if (len % 2 == 0)
	{
		n = len / 2;
	}
	else
	{
		n = (len + 1) / 2;
	}

	while (n < len)
	{
		_putchar(*(str + n));
		++n;
	}

	_putchar('\n');

}

/**
 * _strlen - returns the length of a string
 * @s: the string
 *
 * Return: the length of a string
 */
int _strlen(char *s)
{
	int count;

	count = 0;
	while (*(s + count) != '\0')
	{
		++count;
	}

	return (count);
}
