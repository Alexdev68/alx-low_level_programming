#include "lists.h"
#include <stdlib.h>

/**
 * delete_nodeint_at_index - This function deletes the node at index link list
 * @head: This is the reference to the head of the linked list
 * @index: This indicates which node should be deleted
 * Return: This returns 1 if it succeeded, -1 if it failed
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned int count = 0;
	listint_t *x;
	listint_t *delt;

	if (head == NULL || *head == NULL)
	{
		return (-1);
	}

	x = *head;

	if (index == 0)
	{
		(*head) = (*head)->next;
		x->next = NULL;
		free(x);
	}
	else
	{
		while (count < index - 1 && x != NULL)
		{
			x = x->next;
			count++;
		}

		if (x == NULL || x->next == NULL)
		{
			return (-1);
		}
		delt = x->next;

		x->next = x->next->next;
		delt->next = NULL;
		free(delt);
	}

	return (1);
}
