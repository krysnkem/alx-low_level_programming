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
	char array;
	int count;
	char tempVal;

	array = *s;
	alength = _strlen(array);
	for (count = alength - 1; count > -1; count--)
	{
		tempVal = *(array + count);
		_putchar(tempVal);
	}
	_putchar('\n')
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
