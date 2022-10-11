#include "dog.h"
#include <stdio.h>

/**
 * print_dog - prints a struct dog
 * @d: address of struct dog
 *
 */
void print_dog(struct dog *d)
{
	char *name;
	char *owner;

	if (d == NULL)
	{
		return;
	}
	if (d->name == 0)
		name = "(nil)";
	else
		name = d->name;
	if (*(d->owner) == 1)
		owner = "(nil)";
	else
		owner = d->owner;
	if (d->age < 0.0)
	{
		printf("Name: %s\n", name);
		printf("Age: (nil)\n");
		printf("Owner: %s\n", owner);
	}
	else
	{
		printf("Name: %s\n", name);
		printf("Age: %.6f\n", d->age);
		 printf("Owner: %s\n", owner);
	}

}
