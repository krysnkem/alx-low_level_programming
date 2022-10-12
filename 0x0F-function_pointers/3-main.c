#include <stdio.h>
#include <string.h>
#include "3-calc.h"
/**
 * main - Entry point
 * @argc: number of external arguments
 * @argv: array of external arguments
 *
 * Return: 0 or 98 or 99 or 100
 */
int main(int argc, char *argv[])
{
	int answer;

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}
	if (strcmp(argv[2], "+") != 0
		&& strcmp(argv[2], "-") != 0
		&& strcmp(argv[2], "*") != 0
		&& strcmp(argv[2], "/") != 0
		&& strcmp(argv[2], "%") != 0)
	{
		printf("Error\n");
		exit(99);
	}
	if ((strcmp(argv[2], "/") == 0 ||
			strcmp(argv[2], "%") == 0)
			&& atoi(argv[3]) == 0)
	{
		printf("Error\n");
		exit(100);
	}
	answer = get_op_func(argv[2])(atoi(argv[1]), atoi(argv[3]));
		printf("%d\n", answer);
	return (0);
}
