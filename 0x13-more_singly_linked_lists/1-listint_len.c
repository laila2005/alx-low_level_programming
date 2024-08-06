#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
* listint_len - Returns the number of elements in a listint_t list.
* @h: A pointer to the head of the listint_t list.
*
* Return: The number of elements in the list.
*
* Description: This function iterates through a singly linked list of type
* listint_t, counting each node, and returns the total count.
*/

size_t listint_len(const listint_t *h)
{
size_t node_count = 0;

while (h != NULL)
{
node_count++;
h = h->next;
}

return (node_count);
}
