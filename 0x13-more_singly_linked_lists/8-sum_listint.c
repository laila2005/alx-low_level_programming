#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
* sum_listint - Returns the sum of all
* the data (n) in a listint_t linked list.
* @head: A pointer to the head of the listint_t list.
*
* Return: The sum of all the data (n)
* in the list. If the list is empty, return 0.
*
* Description: This function iterates
* through the linked list, summing the
* values of the data (n) for each node.
*/
int sum_listint(listint_t *head)
{
int sum = 0;
listint_t *current_node = head;

while (current_node != NULL)
{
sum += current_node->n;
current_node = current_node->next;
}

return (sum);
}
