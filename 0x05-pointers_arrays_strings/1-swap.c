/**
 * swap_int - swaps two integer values
 * @a: memory address of integer 1
 * @b: memory address of integer 2
 *
 * Retrun: Nothing
 */
void swap_int(int *a, int *b)
{
	int temp;

	temp = *a;
	*a = *b;
	*b = temp;
}
