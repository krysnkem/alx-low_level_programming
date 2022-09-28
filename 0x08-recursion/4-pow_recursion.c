/**
 * _pow_recursion - calculates x raised to power y
 * @x: base integer
 * @y: power
 *
 * Return: 1 (if y == 0) or -1 (if y < 0) or x to power y
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	if (y == 0)
		return (1);
	if (y == 1)
		return (x);
	return (x * _pow_recursion(x, y - 1));
}
