#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: Prints alphabets in the reverse
 * Return: Always 0 (Success)
 */
int main(void)
{
	int letter;

	letter = 122;

	while (letter > 96)
	{

		putchar((char)letter);
		--letter;
	}
	putchar('\n');

	return (0);
}
