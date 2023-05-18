#include "lists.h"
#include <stdlib.h>

/**
 * free_dlistint - This function frees a doubly linked list
 * @head: This is a pointer to the head of the list
 */
void free_dlistint(dlistint_t *head)
{
	while (head != NULL)
	{
		free(head);
		head = head->next;
	}
}
