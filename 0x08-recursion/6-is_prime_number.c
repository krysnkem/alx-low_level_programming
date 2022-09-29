/**
 * check_prime_number - checks for prime numbers recursively
 * @n: integer to check if it is a prime number
 * @x: divisor
 *
 * Return: 1 if x > n/2 and 0 if n % 2 == 0
 */
int check_prime_number(int n, int x)
{
	if (x > (n / 2))
		return (1);
	if (n % x == 0)
		return (0);

	return (check_prime_number(n, x + 1));
}

/**
 * is_prime_number - checks if input is a prime number
 * @n: input integer
 *
 * Return: 1 (if n is a prime number) 0 (if n is not a prime number)
 */
int is_prime_number(int n)
{
	if (n <= 1)
		return (0);
	return (check_prime_number(n, 2));
}
