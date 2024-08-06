#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
* free_listint2 - Frees a listint_t list and sets the head to NULL.
* @head: A pointer to a pointer to the head of the listint_t list.
*
* Description: This function iterates through a singly linked list of type
* listint_t, freeing each node's memory and sets the head to NULL.
*/
void free_listint2(listint_t **head)
{
listint_t *temp;

if (head == NULL)
return;

while (*head != NULL)
{
temp = *head;
*head = (*head)->next;
free(temp);
}

*head = NULL;
}
