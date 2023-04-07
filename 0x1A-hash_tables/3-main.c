#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "hash_tables.h"

/**
 * main - check the code
 *
 * Return: Always EXIT_SUCCESS.
 */
int main(void)
{
    hash_table_t *ht;

    ht = hash_table_create(1024);
    if (hash_table_set(ht, "betty", "cool"))
	    printf("Ok\n");
    else
	    printf("Error eccured\n");
    if (hash_table_set(ht, "betty", "uncool"))
	    printf("Ok\n");
    else
	    printf("Error occured while updating");
    if (hash_table_set(ht, "hetairas", "uncool"))
	    printf("Ok\n");
    else
	    printf("Error occured");
    if (hash_table_set(ht, "mentioner", "nowvalue"))
	    printf("Collision tested Ok\n");
    else
	    printf("Error occured while handling collision");


    return (EXIT_SUCCESS);
}
