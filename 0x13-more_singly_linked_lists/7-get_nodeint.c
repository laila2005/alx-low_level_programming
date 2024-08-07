#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
* get_nodeint_at_index - Returns the nth node of a listint_t linked list.
* @head: A pointer to the head of the listint_t list.
* @index: The index of the node, starting at 0.
*
* Return: A pointer to the nth node, or NULL if the node does not exist.
*
* Description: This function traverses the linked list to find the nth node
* and returns a pointer to it. If the index is out of bounds, it returns NULL.
*/
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
unsigned int current_index = 0;
listint_t *current_node = head;

while (current_node != NULL)
{
if (current_index == index)
{
return (current_node);
}
current_node = current_node->next;
current_index++;
}

return (NULL);
}
