#include "main.h"
/**
 * _islower - checks whether the input is lowercase
 * @c: parameter holding the ascii value of
 * the character being checked
 * Description: Checks if an airgument is in lowercase
 * Return: 1 if the input is lowercase
 * and 0 if it is not
 **/
int _islower(int c)
{
	if (c >= 97 && c <= 122)
		return (1);
	return (0);
}
