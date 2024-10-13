#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "hash_tables.h"

/**
* hash_table_get - Retrieves the value associated with a key in a hash table
* @ht: The hash table to look into
* @key: The key to look for
*
* Return: The value associated with the key, or NULL if the key is not found
*/
char *hash_table_get(const hash_table_t *ht, const char *key)
{
unsigned long int index;
hash_node_t *current_node;

if (ht == NULL || key == NULL || *key == '\0')
return (NULL);

index = hash_djb2((unsigned char *)key) % ht->size;

current_node = ht->array[index];
while (current_node)
{
if (strcmp(current_node->key, key) == 0)
return (current_node->value);
current_node = current_node->next;
}
return (NULL);
}
