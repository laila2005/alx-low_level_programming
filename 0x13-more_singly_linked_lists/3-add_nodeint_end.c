#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
* add_nodeint_end - Adds a new node at the end of a listint_t list.
* @head: A pointer to a pointer to the head of the listint_t list.
* @n: The integer value to be added to the new node.
*
* Return: The address of the new element, or NULL if it failed.
*
* Description: This function allocates memory for a new node, initializes it
* with the given integer, and appends it to the end of the linked list.
*/
listint_t *add_nodeint_end(listint_t **head, const int n)
{
listint_t *new_node = malloc(sizeof(listint_t));
if (new_node == NULL)
return (NULL);

new_node->n = n;
new_node->next = NULL;

if (*head == NULL)
{
*head = new_node;
}
else
{
listint_t *current = *head;
while (current->next != NULL)
{
current = current->next;
}
current->next = new_node;
}

return (new_node);
}
