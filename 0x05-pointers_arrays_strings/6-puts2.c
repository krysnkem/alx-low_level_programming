#include "main.h"
/**
 * puts2 - reverses the string.
 * @s: holds the array.
 * Return: length of string
*/
void puts2(char *s)
{
	char tmp;
	int count;
	int i;

	tmp = *s;
	count = 0;
	while (tmp != '\0')
	{
		tmp = *(s + count);
		++count;
	}
	i = 0;
	while (i < count)
	{
		if (i % 2 == 0)
		{
			_putchar(s[i]);
		}
		++i;
	}
	_putchar('\n');
}
