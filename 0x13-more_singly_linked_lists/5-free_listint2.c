#include "lists.h"
#include <stdlib.h>

/**
 * free_listint2 - This function frees a listint_t list
 * @head: This is the reference to the head of the linked list
 */
void free_listint2(listint_t **head)
{
	listint_t *x, *d;

	if (head == NULL || *head == NULL)
	{
		return;
	}

	x = *head;
	while (x != NULL)
	{
		d = x->next;
		free(x);
		x = d;
	}
	*head = NULL;
}
