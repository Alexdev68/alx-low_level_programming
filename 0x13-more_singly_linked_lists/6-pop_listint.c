#include "lists.h"
#include <stdlib.h>

/**
 * pop_listint - This function deletes the head node of a listint_t linked list
 * @head: This is the reference to the head of the linked list
 * Return: This returns the head node’s data (n)
 */
int pop_listint(listint_t **head)
{
	int j;

	listint_t *x = *head;

	if (*head == NULL)
	{
		return (0);
	}

	j = (*head)->n;
	*head = (*head)->next;
	free(x);

	return (j);
}
