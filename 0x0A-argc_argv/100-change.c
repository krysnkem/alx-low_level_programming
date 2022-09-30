#include <stdio.h>
#include <stdlib.h>

/**
 * main - Entry point
 * @argc: number of arguments
 * @argv: array of arguments
 *
 */
int main(int argc, char *argv[])
{
	int coin[] = {25, 10, 5, 2, 1};
	int count, n, money;

	count = 0;
	n = 0;
	if (argc - 1 != 1)
	{
		printf("Error\n");
		return (1);
	}
	money = atoi(argv[1]);

	while (money != 0)
	{
		if (money >= coin[n])
		{
			money = money - coin[n];
			++count;
		}
		else
			++n;
	}

	printf("%d\n", count);
	return (0);
}
