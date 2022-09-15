#include <stdio.h>

/**
 * main - Entry point
 *
 * Description:  prints 1 - 100 but replaces
 * mulitples of 5
 * Return: Always 0 (Success)
 **/
int main(void)
{
	int num;

	num = 1;

	while (num <= 100)
	{
		if ((num % 3 == 0) && (num % 5 == 0))
		{
			printf(" ");
			printf("FizzBuzz");
		}
		else if (num % 3 == 0)
		{
			printf(" ");
			printf("Fizz");
		}
		else if (num % 5 == 0)
		{
			printf(" ");
			printf("Buzz");
		}
		else
		{
			if (num != 1)
				printf(" ");
			printf("%d", num);
		}
		++num;
	}
	printf("\n");
	return (0);
}
