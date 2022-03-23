#include "main.h"
/**
 * _strlen - gets the length of a string.
 * print_rev - reverses the string.
 * @s: holds the array.
 * Return: length of string
 */

void print_rev(char *s)
{
	int alength;
	int count;
	char tempVal;

	alength = _strlen(s);
	for (count = alength - 1; count > -1; count--)
	{
		tempVal = *(s + count);
		_putchar(tempVal);
	}
	_putchar('\n');
}
int _strlen(char *s)
{
	char tmp;
	int count;

	tmp = *s;
	count = 0;
	while (tmp != '\0')
	{
		++count;
		tmp = *(s + count);
	}
	return (count);
}
