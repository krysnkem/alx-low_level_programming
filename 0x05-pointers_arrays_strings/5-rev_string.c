#include "main.h"
/**
 * rev_string - reverses the string.
 * @s: holds the array.
 * Return: length of string
 */

void rev_string(char *s)
{
	int alength;
	int countIndex;
	char tempVal;
	char tmp;
	int count;
	char tempString[] = "";

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
		tempString[alength - countIndex + 1] = tempVal;
	}
	for (count = 0; countIndex > 0; count++)
	{
		*(s + count) = tempString[count];
	}
	_putchar('\n');
}
