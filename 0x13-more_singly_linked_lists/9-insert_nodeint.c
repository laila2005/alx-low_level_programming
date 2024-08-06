#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
* insert_nodeint_at_index - Inserts a new node at a given position.
* @head: A pointer to a pointer to the head of the listint_t list.
* @idx: The index where the new node should be added (starting at 0).
* @n: The integer value to be added to the new node.
*
* Return: The address of the new node, or NULL if it failed.
*
* Description: This function inserts a new node with the specified integer
* value at the given index in the linked list. If the index is invalid or
* memory allocation fails, it returns NULL.
*/
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
listint_t *new_node;
listint_t *current_node = *head;
unsigned int current_index = 0;

if (head == NULL)
return (NULL);

new_node = malloc(sizeof(listint_t));
if (new_node == NULL)
return (NULL);

new_node->n = n;


if (idx == 0)
{
new_node->next = *head;
*head = new_node;
return (new_node);
}


while (current_node != NULL && current_index < idx - 1)
{
current_node = current_node->next;
current_index++;
}


if (current_node == NULL)
{
free(new_node);
return (NULL);
}

new_node->next = current_node->next;
current_node->next = new_node;

return (new_node);
}
