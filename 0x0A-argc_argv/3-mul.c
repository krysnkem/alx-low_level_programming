#include <stdio.h>
#include <stdlib.h>

/**
 * main - Entry point
 * @argc: number of arguments
 * @argv: list of argments
 *
 * Return: 0 (Success) or 1 (Wrong Argments parsed)
 */
int main(int argc, char *argv[])
{
	int n1, n2;

	if (argc < 3)
	{
		printf("Error\n");
		return (1);
	}
	n1 = atoi(argv[1]);
	n2 = atoi(argv[2]);
	printf("%d\n", n1 * n2);
	return (0);
}
