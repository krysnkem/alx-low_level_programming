#include <stdio.h>
/**
 * main - Entry point
 * @argc: number of arguments of the program
 * @argv: arguements list
 *
 * Return: Always 0
 */
int main(int argc, char *argv[] __attribute__((unused)))
{
	printf("%d\n", argc - 1);
	return (0);
}
