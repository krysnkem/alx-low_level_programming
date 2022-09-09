#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: prints all alphabet in lowercase
 * except e and q
 * Return: Always 0 (Success)
 */
int main(void)
{
	int letter;

	letter = 97;

	while (letter < 123)
	{
		if (letter == 'e' || letter == 'q')
		{
			++letter;
			continue;
		}
		putchar((unsigned char)letter);
		++letter;
	}
	putchar('\n');

	return (0);
}
