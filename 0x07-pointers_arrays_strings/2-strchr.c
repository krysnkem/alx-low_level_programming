/**
 * _strchr - locates a character in a string
 * @s: target string
 * @c: character to be found
 *
 */
char *_strchr(char *s, char c)
{
	int i;

	i = 0;
	while (s[i] != c && s[i] != '\0')
		++i;

	if (s[i] == c)
		return (&s[i]);

	return (NULL);
}
