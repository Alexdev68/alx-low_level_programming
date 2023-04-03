#include "lists.h"
#include <stdlib.h>

/**
 * free_listint - This function frees a listint_t list
 * @head: This is the reference to the head of the linked list
 */
void free_listint(listint_t *head)
{
	listint_t *x;

	while (head != NULL)
	{
		x = head;
		head = head->next;
		free(x);
	}
}
