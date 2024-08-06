#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
* delete_nodeint_at_index - Deletes the node at a
* specific index in a listint_t linked list.
* @head: A pointer to a pointer to the head of the listint_t list.
* @index: The index of the node to delete (starting at 0).
*
* Return: 1 if the deletion succeeded, -1 if it failed.
*
* Description: This function deletes
* the node at the specified index in the
* linked list and adjusts pointers accordingly.
* It returns 1 if successful
* and -1 if the index is out of bounds or other errors occur.
*/
int delete_nodeint_at_index(listint_t **head,
unsigned int index)
{
listint_t *current_node = *head;
listint_t *prev_node = NULL;
unsigned int current_index = 0;

if (head == NULL || *head == NULL)
return (-1);


if (index == 0)
{
*head = (*head)->next;
free(current_node);
return (1);
}


while (current_node != NULL && current_index < index)
{
prev_node = current_node;
current_node = current_node->next;
current_index++;
}


if (current_node == NULL)
return (-1);


prev_node->next = current_node->next;
free(current_node);

return (1);
}
