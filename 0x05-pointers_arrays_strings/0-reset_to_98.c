#include "main.h"


int main(void)
{
	int n = 402;
	reset_to_98(&n);
	return (0);
}
void reset_to_98(int *n)
{
	*n = 98;
}
