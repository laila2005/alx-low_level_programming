#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
* free_listint - Frees a listint_t list.
* @head: A pointer to the head of the listint_t list.
*
* Description: This function iterates through a singly linked list of type
* listint_t, freeing each node's memory.
*/
void free_listint(listint_t *head)
{
listint_t *temp;

while (head != NULL)
{
temp = head;
head = head->next;
free(temp);
}
}
