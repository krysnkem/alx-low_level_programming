#include <stdio.h>
/**
 * main - Entry point
 * @argc: number of arguments
 * @argv: list of arguements
 *
 * Return: Always 0 (Success)
 */
int main(int argc, char *argv[])
{
	int n = 0;

	while (n < argc)
		printf("%s\n", *(argv + n++));
	return (0);
}
