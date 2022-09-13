#include "main.h"

/**
 * _isalpha - checks for alphabet
 * @c: parameter of character being checked
 *
 * Description: checks if a character is an alphabet
 * either lower or uppercase
 * Return: 1 (is an alphabet) 0 (is not an alphabet)
 */
int _isalpha(int c)
{
	if (c >= 65 && c <= 90 || c >= 97 && c <= 122)
		return (1);
	return (0);
}
