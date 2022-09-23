/**
 * leet - encodes a string into 1337
 * @s: the operand string
 *
 * Return: The new String
 *
 */
char *leet(char *s)
{
	char *uAlpha = "aeotl";
	char *lAlpha = "AEOTL";
	char *leet = "43071";
	int i;
	int n;

	i = 0;
	while (s[i] != '\0')
	{
		n = 0;
		while (n < 5)
		{
			if (s[i] == uAlpha[n] || s[i] == lAlpha[n])
			{
				s[i] = leet[n];
				break;
			}
			++n;
		}
		++i;
	}
	return (s);
}
