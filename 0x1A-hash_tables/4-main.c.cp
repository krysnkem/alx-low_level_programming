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
	    printf("Inserted betty: cool\n");
    else
	    printf("Error eccured\n");
    printf("retreived betty: %s\n", hash_table_get(ht, "betty"));
    if (hash_table_set(ht, "betty", "uncool"))
	    printf("Modified betty to uncool\n");
    else
	    printf("Error occured while updating");
    printf("retreived betty: %s\n", hash_table_get(ht, "betty"));

    if (hash_table_set(ht, "hetairas", "uncool"))
	    printf("Inserted hetairas: uncool\n");
    else
	    printf("Error occured");
    printf("retreived hetairas: %s\n", hash_table_get(ht, "hetairas"));
    if (hash_table_set(ht, "mentioner", "nowvalue"))
	    printf("Tested Coliosion\nInserted mentioner:nowvalue\n");
    else
	    printf("Error occured while handling collision");
    printf("retreived mentioner: %s\n", hash_table_get(ht, "mentioner"));


    return (EXIT_SUCCESS);
}
