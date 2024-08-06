#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
* pop_listint - Deletes the head node of a listint_t linked list.
* @head: A pointer to a pointer to the head of the listint_t list.
*
* Return: The data of the deleted head node (n), or 0 if the list is empty.
*
* Description: This function removes the head node of a linked list, frees its
* memory, and returns its data. If the list is empty, it returns 0.
*/
int pop_listint(listint_t **head)
{
if (head == NULL || *head == NULL)
return (0);

listint_t *temp = *head;
int data = temp->n;

*head = (*head)->next;
free(temp);

return (data);
}
