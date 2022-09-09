#include <stdlib.h>
#include <time.h>
/* more headers goes there */
#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: Print whether the last digit of a
 * number is 0, greater than 5 or less than 6 and not 0
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int n;
	int lastDigit;


	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */
	lastDigit = n % 10;
	printf("Last digit of %d is %d", n, lastDigit);
	if (lastDigit > 5)
		printf("and is greater than 5");
	else if (lastDigit < 6 && lastDigit != 0)
		printf("and is less than 6 and not 0");
	else
		printf("and is 0")

	return (0);
}
