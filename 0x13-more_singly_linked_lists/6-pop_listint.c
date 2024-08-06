#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
* pop_listint - Deletes the head node
* of a listint_t linked list and returns its data.
* @head: A pointer to a pointer to the head of the listint_t list.
*
* Return: The data of the deleted head
* node, or 0 if the list is empty.
*
* Description: This function removes
* the head node from the linked list, updates
* the head pointer, and returns the
* data stored in the removed node. If the list is
* empty, it returns 0.
*/
int pop_listint(listint_t **head)
{
listint_t *temp;
int data;

if (head == NULL || *head == NULL)
return (0);

temp = *head;
data = temp->n;
*head = (*head)->next;
free(temp);

return (data);
}
