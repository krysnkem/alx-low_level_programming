#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: Prints all lower case
 * and uppercase alphabets
 * Return: Always 0 (Success)
 */
int main(void)
{
	int letter;
	int range;

	letter = 97;
	range = 123;

	while (letter < range + 1)
	{
		if (letter == 123)
		{
			letter = 65;
			range = 90;
		}
		putchar((unsigned char)letter);
		++letter;
	}
	putchar('\n');

	return (0);
}
