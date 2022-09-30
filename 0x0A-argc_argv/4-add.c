#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
/**
 * main - Entry point
 * @argc: number of arguments
 * @argv: list of arguments
 *
 * Return: Returns the addition of a list of integers
 * or 1(a non number is encountered)
 */
int main(int argc, char *argv[])
{
	int n, answer = 0;
	unsigned long int i;

	n = 1;

	while (n < argc)
	{
		if (strlen(argv[n]) == 1)
		{
			if (!(isdigit(argv[n][0])))
			{
				printf("Error\n");
				return (1);
			}
		}
		else
		{
			i = 0;
			while (i < strlen(argv[n]))
			{
				if (!(isdigit(argv[n][i])))
				{
					printf("Error\n");
					return (1);
				}
				i++;
			}
		}
		if (atoi(argv[n]) < 0)
		{
			printf("Error\n");
			return (1);
		}
		answer += atoi(argv[n]);
		n++;
	}

	printf("%d\n", answer);
	return (0);
}
