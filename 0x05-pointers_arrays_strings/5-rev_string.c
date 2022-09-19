#include "main.h"

/**
 * rev_string - reverses a string
 * @s: address of the first character of the string
 **/
void rev_string(char *s)
{
	int len;
	int i;
	char str[50];

	len = _strlen(s);


	i = len;

	while (len >= 0)
	{
		--len;
		str[i - (len + 1)] = *(s + len);
	}

	while (len < i)
	{
		*(s + len) = str[len];
		++len;
	}

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
