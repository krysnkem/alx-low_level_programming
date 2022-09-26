/**
 * _memset - fills memory location with a constant byte
 * @s: starting memory location
 * @b: constant byte
 * @n: number of bytes to fill in memory
 *
 * Return: the memory location of the starting address
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int a;

	for (a = 0; a < n; a++)
	{
		*(s + a) = b;

	}

	return (s)
}
