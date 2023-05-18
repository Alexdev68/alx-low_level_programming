#include "lists.h"
#include <stdlib.h>

/**
 * delete_dnodeint_at_index - This deletes a node at an index
 * @head: This is a pointer to the head of the linked list
 * @index: This is the index at which the node should be deleted
 * Return: This returns 1 if it succeeded, -1 if it failed
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *curr = *head;
	size_t count = 0;

	if (*head == NULL)
	{
		return (-1);
	}

	if (index == 0)
	{
		(*head) = (*head)->next;
		if (*head != NULL)
			(*head)->prev = NULL;
		free(curr);
		return (1);
	}

	while (curr != NULL && count < index)
	{
		curr = curr->next;
		count++;
	}

	if (curr == NULL)
	{
		return (-1);
	}

	curr->prev->next = curr->next;
	if (curr->next != NULL)
		curr->next->prev = curr->prev;
	free(curr);

	return (1);
}
