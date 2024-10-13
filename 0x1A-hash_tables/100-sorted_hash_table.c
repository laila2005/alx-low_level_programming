#include <stdlib.h>
#include "hash_tables.h"
#include <stdio.h>

/**
* shash_table_create - Creates a sorted shash table
* @size: The size of the array
*
* Return: A pointer to the new shash table, or NULL if it fails
*/
shash_table_t *shash_table_create(unsigned long int size)
{
shash_table_t *ht;
unsigned long int i;

ht = malloc(sizeof(shash_table_t));
if (ht == NULL)
return (NULL);

ht->size = size;
ht->array = malloc(sizeof(shash_node_t *) * size);
if (ht->array == NULL)
{
free(ht);
return (NULL);
}

for (i = 0; i < size; i++)
ht->array[i] = NULL;

ht->shead = NULL;
ht->stail = NULL;

return (ht);
}
/**
* insert_sorted - Inserts a node into the sorted linked list by key
* @ht: The shash table
* @new_node: The new node to insert
*/
void insert_sorted(shash_table_t *ht, shash_node_t *new_node)
{
shash_node_t *current;

if (ht->shead == NULL)  /* If sorted list is empty */
{
ht->shead = new_node;
ht->stail = new_node;
return;
}

current = ht->shead;
while (current && strcmp(new_node->key, current->key) > 0)
current = current->next;

if (current == NULL)  /* Insert at the end */
{
ht->stail->next = new_node;
new_node->sprev = ht->stail;
ht->stail = new_node;
}
else if (current == ht->shead)  /* Insert at the beginning */
{
new_node->next = ht->shead;
ht->shead->sprev = new_node;
ht->shead = new_node;
}
else  /* Insert in the middle */
{
new_node->sprev = current->sprev;
new_node->next = current;
current->sprev->next = new_node;
current->sprev = new_node;
}
}

/**
* shash_table_set - Adds or updates an element in a sorted shash table
* @ht: The shash table
* @key: The key (cannot be an empty string)
* @value: The value associated with the key (duplicated)
*
* Return: 1 on success, 0 on failure
*/
int shash_table_set(shash_table_t *ht, const char *key, const char *value)
{
unsigned long int index;
shash_node_t *new_node, *current;
char *dup_value;

if (ht == NULL || key == NULL || *key == '\0' || value == NULL)
return (0);

index = shash_djb2((unsigned char *)key) % ht->size;
current = ht->array[index];

while (current)  /* Update existing key */
{
if (strcmp(current->key, key) == 0)
{
dup_value = strdup(value);
if (dup_value == NULL)
return (0);
free(current->value);
current->value = dup_value;
return (1);
}
current = current->next;
}

/* Create new node */
new_node = malloc(sizeof(shash_node_t));
if (new_node == NULL)
return (0);
new_node->key = strdup(key);
new_node->value = strdup(value);
if (new_node->key == NULL || new_node->value == NULL)
{
free(new_node->key);
free(new_node->value);
free(new_node);
return (0);
}
new_node->next = ht->array[index];
new_node->sprev = NULL;
new_node->next = NULL;
ht->array[index] = new_node;

/* Insert the new node into the sorted linked list */
insert_sorted(ht, new_node);

return (1);
}

/**
* shash_table_get - Retrieves the value associated with a key in a sorted shash table
* @ht: The shash table to look into
* @key: The key to look for
*
* Return: The value associated with the key, or NULL if the key is not found
*/
char *shash_table_get(const shash_table_t *ht, const char *key)
{
unsigned long int index;
shash_node_t *current;

if (ht == NULL || key == NULL || *key == '\0')
return (NULL);

index = shash_djb2((unsigned char *)key) % ht->size;
current = ht->array[index];

while (current)
{
if (strcmp(current->key, key) == 0)
return (current->value);
current = current->next;
}

return (NULL);
}
/**
* shash_table_print - Prints a sorted shash table
* @ht: The shash table to print
*/
void shash_table_print(const shash_table_t *ht)
{
shash_node_t *current;
int first = 1;

if (ht == NULL)
return;

printf("{");
current = ht->shead;
while (current)
{
if (!first)
printf(", ");
printf("'%s': '%s'", current->key, current->value);
first = 0;
current = current->next;
}
printf("}\n");
}

/**
* shash_table_print_rev - Prints a sorted shash table in reverse order
* @ht: The shash table to print
*/
void shash_table_print_rev(const shash_table_t *ht)
{
shash_node_t *current;
int first = 1;

if (ht == NULL)
return;

printf("{");
current = ht->stail;
while (current)
{
if (!first)
printf(", ");
printf("'%s': '%s'", current->key, current->value);
first = 0;
current = current->sprev;
}
printf("}\n");
}


/**
* shash_table_delete - Deletes a sorted shash table
* @ht: The shash table to delete
*/
void shash_table_delete(shash_table_t *ht)
{
shash_node_t *current, *temp;

if (ht == NULL)
return;

current = ht->shead;
while (current)
{
temp = current->next;
free(current->key);
free(current->value);
free(current);
current = temp;
}

free(ht->array);
free(ht);
}
