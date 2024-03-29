#include <stdlib.h>
/**
 * print_name - prints a name
 * @name: name to be printed
 * @f: callback function that print the name
 *
 */
void print_name(char *name, void (*f)(char *))
{
	if (f != NULL)
		f(name);
}
