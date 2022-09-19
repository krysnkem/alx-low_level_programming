#include "main.h"

/**
 * print_rev - prints a string in reverse
 * @s: string to be printed
 *
 * Return: nothing
 */
void print_rev(char *s)
{
	int i;

	i = _strlen(s);

	while (i > 0)
	{
		--i;
		_putchar(*(s + i));
	}

	_putchar('\n');
}

/**
 * _strlen - returns the length of a string
 * @s: the string
 *
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
