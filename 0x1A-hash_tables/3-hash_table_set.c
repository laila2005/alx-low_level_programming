#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "hash_tables.h"

/**
* hash_table_set - Adds or updates an element in the hash table
* @ht: The hash table to add or update the key/value to
* @key: The key, cannot be an empty string
* @value: The value associated with the key, duplicated
*
* Return: 1 on success, 0 on failure
*/
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
unsigned long int index;
hash_node_t *new_node, *current_node;
char *dup_key, *dup_value;

if (ht == NULL || key == NULL || *key == '\0' || value == NULL)
return (0);
dup_key = strdup(key);
dup_value = strdup(value);
if (dup_key == NULL || dup_value == NULL)
return (0);
index = hash_djb2((unsigned char *)key) % ht->size;
current_node = ht->array[index];
while (current_node)
{
if (strcmp(current_node->key, key) == 0)
{
free(current_node->value);
current_node->value = dup_value;
free(dup_key);
return (1);
}
current_node = current_node->next;
}
new_node = malloc(sizeof(hash_node_t));
if (new_node == NULL)
{
free(dup_key);
free(dup_value);
return (0);
}
new_node->key = dup_key;
new_node->value = dup_value;
new_node->next = ht->array[index];
ht->array[index] = new_node;
return (1);
}
