#include "main.h"
/**
 * print_rev - reverses the string.
 * @s: holds the array.
 * Return: length of string
 */

void print_rev(char *s)
{
	int alength;
	int countIndex;
	char tempVal;
	char tmp;
	int count;
	
	tmp = *s;
	count = 0;
	while (tmp != '\0')
	{
		++count;
		tmp = *(s + count);
        }

	alength = count;
	for (countIndex = alength - 1; countIndex > -1; countIndex--)
	{
		tempVal = *(s + countIndex);
		_putchar(tempVal);
	}
	_putchar('\n');
}
