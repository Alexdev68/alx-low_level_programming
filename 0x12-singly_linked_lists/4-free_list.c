#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * free_list - This function frees a list_t list
 * @head: This is the head of the list
 */
void free_list(list_t *head)
{
	struct list_s *x;

	while (head != NULL)
	{
		x = head;
		head = head->next;
		free(x);
	}
}
