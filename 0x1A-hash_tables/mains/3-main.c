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
	unsigned long int i;
	const unsigned char *key = (unsigned char *)"betty";

    ht = hash_table_create(1024);
	i = key_index(key, 1024);
    hash_table_set(ht, "betty", "cool");
	printf("betty: %s\n", ht->array[i]->value);
    hash_table_set(ht, "betty", "hello");
	printf("betty: %s\n", ht->array[i]->value);
    return (EXIT_SUCCESS);
}
