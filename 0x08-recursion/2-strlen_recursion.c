/**
 * _strlen_recursion - gets the length of a string
 * @s: address of the first character
 *
 * Return: the length of the string
 */
int _strlen_recursion(char *s)
{
	if (*s == '\0')
		return (0);
	return (1 + _strlen_recursion(s + 1));
}
