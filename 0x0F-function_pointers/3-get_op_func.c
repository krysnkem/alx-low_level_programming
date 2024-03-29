#include "3-calc.h"
#include <string.h>
/**
 * get_op_func - finds the function that corresponds to the
 * operator given as a parameter
 * @s: operator argument
 *
 * Return: pointer to corresponding function
 */
int (*get_op_func(char *s))(int, int)
{
	op_t ops[] = {
		{"+", op_add},
		{"-", op_sub},
		{"*", op_mul},
		{"/", op_div},
		{"%", op_mod},
		{NULL, NULL}
	};
	int i;

	i = 0;
	while (i < 5)
	{
		if (strcmp(ops[i].op, s) == 0)
			return (ops[i].f);
		++i;
	}
	return (ops[i].f);
}
