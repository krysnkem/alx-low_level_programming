#include "main.h"

/**
 * puts_half- string that prints half of a string
 * @s: parameter that holds the string
 */
void puts_half(char *s)
{
	char tmp;
	int count;
	int n;
	int length_of_the_string;

	tmp = *s;
	count = 0;
	while (tmp != '\0')
	{
		tmp = *(s + count + 1);
		++count;
	}
	length_of_the_string = count;
	if (length_of_the_string % 2 != 0)
	{
		n = (length_of_the_string - 1) / 2;
		n = n + 1;
	}
	else
		n = length_of_the_string / 2;
	while (n < count)
	{
		_putchar(*(s + n));
		++n;
	}
	_putchar('\n');
}
