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
	char tempString[50];
	int i;

	tmp = *s;
	count = 0;
	while (tmp != '\0')
	{
		tmp = *(s + count);
		++count;
	}
	alength = count;
	for (countIndex = alength - 1; countIndex >= 0; countIndex--)
	{
		tempVal = *(s + countIndex);
		if(tempVal != '\0')
		{
			tempString[alength - (countIndex + 1)] = tempVal;
		}
	}
	for (i = 0; i < alength; i++)
	{
		*(s + i) = tempString[i];
	}
	
	_putchar('\n');
}
