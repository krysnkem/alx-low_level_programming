/**
 * _strspn - gets the length of a prefix substring
 * @s: the string to be checked
 * @accept: the accepted characters
 *
 * Return: position where s is found in accept
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int i, n;

	i = 0;
	while (s[i] != '\0')
	{
		n = 0;
		while (accept[n] != '\0' && accept[n] != s[i])
			++n;

		if (accept[n] == s[i])
			++i;
		else
			break;

	}
	return (i);
}
