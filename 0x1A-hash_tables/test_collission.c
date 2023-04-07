#include "hash_tables.h"
#include <stdio.h>

int main(void)
{
	printf("%lu\n", key_index((const unsigned char *)"hetairas", 1024));
	printf("%lu\n", key_index((const unsigned char *)"mentioner", 1024));

	return (0);
}
