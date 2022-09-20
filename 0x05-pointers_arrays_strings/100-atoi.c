#include "main.h"

/**
 * _atoi - converts string to integer
 * @s: memory address of first character of string
 *
 *
 * Return: Integer form of string
 */

int _atoi(char *s)
{
	int len, n, minus;
	unsigned int num;

	n = 0;
	num = 0;
	minus = 0;
	len = _strlen(s);
	while (n < len)
	{
		if (!(s[n] >= '0' && s[n] <= '9') && s[n] != '-')
		{
			if (num == 0)
			{
				++n;
				continue;
			}
			else
				break;
		}
		if (s[n] == '-')
		{
			if (num == 0)
			{
				++minus;
				++n;
				continue;
			}
			else
				break;
		}
		num = (num * 10) + (s[n] - '0');
		++n;
	}
	if (minus % 2 != 0)
		return (num * -1);
	return (num);
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
