/**
 * cap_string - capitalizes all words of a string
 * @s: the operand string
 *
 * Return: the new string
 */
char *cap_string(char *s)
{
	int i;

	i = 0;
	while (s[i] != '\0')
	{
		if (s[i] >= 'a' && s[i] <= 'z')
		{
			if (s[i - 1] == ','
			|| s[i - 1] == ';'
			|| s[i - 1] == '.'
			|| s[i - 1] == '!'
			|| s[i - 1] == '?'
			|| s[i - 1] == '"'
			|| s[i - 1] == '('
			|| s[i - 1] == ')'
			|| s[i - 1] == '{'
			|| s[i - 1] == '}'
			|| s[i - 1] == ' '
			|| s[i - 1] == '\t'
			|| s[i - 1] == '\n')
				s[i] -= 32;

			if (i == 0)
				s[i] -= 32;
		}
		++i;
	}
	return (s);
}
