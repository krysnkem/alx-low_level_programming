#include "main.h"


int main(void)
{
	int m = 10;
	reset_to_98(&m);
	return (0);
}
void reset_to_98(int *n)
{
	*n = 98;
}
