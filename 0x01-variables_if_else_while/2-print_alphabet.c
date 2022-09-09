#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: Prints all the letters of the alphabet
 * in lowercase
 * Return: Always 0 (Success)
 */
int main(void)
{
	int letter;

	letter = 97;
	while (letter < 123)
	{
		putchar((unsigned char)letter);
		++letter;
	}
	putchar('\n');
	return (0);
}
