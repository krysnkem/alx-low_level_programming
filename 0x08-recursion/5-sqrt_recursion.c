/**
 * count_sub_odd_num - returns the number of times odd numbers
 * could be subtracted
 * @n: the number to subtract odd numbers from
 * @x: how many times to subtract 2
 *
 * Return: returns the number of times odd numbers
 */
int count_sub_odd_num(int n, int x)
{
	if (n == 0)
		return (0);
	if (n == 1)
		return (-1 * (x + 1));
	n = n - (2 * x);
	return (1 + count_sub_odd_num(n - 1, x + 1));
}
/**
 * _sqrt_recursion - gets the natural square root of a number
 * @n: number to find the square root of
 *
 * Return: the square root of n or -1(if n doesn't have a natural square toot)
 */
int _sqrt_recursion(int n)
{
	if (n == 0)
		return (0);
	if (n == 1)
		return (1);
	if (n < 0)
		return (-1);
	return (count_sub_odd_num(n, 0));
}
