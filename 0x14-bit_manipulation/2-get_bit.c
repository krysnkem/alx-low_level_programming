
/**
 * get_bit - get the bit at a position in a number
 * @n: the number to get the bit from
 * @index: the index to get the bit from
 *
 * Return: the value of bit at index
 */
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned long int num = n;
	unsigned int i = 0;

	while (num != 0)
	{
		++i;
		num >>= 1;
	}
	if (index >= (sizeof(unsigned long int) * 4))
		return (-1);

	num = n;
	i = 0;

	while (i < index)
	{
		num >>= 1;
		++i;
	}
	num &= 1;

	return (num);

}
