/**
 * _memcpy - copies memory area
 * @dest: destination memory location
 * @src: source memory location
 * @n: number of bytes to copy
 *
 * Return: the destination Memory location
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		*(dest + i) = *(src + i);
	}

	return (dest);
}
