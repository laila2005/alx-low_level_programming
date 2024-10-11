#include <stdio.h>
#include <stdlib.h>
#include "hash_tables.h"

/**
 * main - Test the hash_table_create function
 *
 * Return: Always 0.
 */
int main(void)
{
    hash_table_t *ht;
    unsigned long int size = 1024;

    ht = hash_table_create(size);

    if (ht == NULL)
    {
        printf("Error: Hash table creation failed\n");
        return (1);
    }

    printf("Hash table successfully created with size: %lu\n", ht->size);

    free(ht->array);
    free(ht);

    return (0);
}
