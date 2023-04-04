#include "lists.h"

/**
 * *reverse_listint - This function reverses a listint_t linked list
 * @head: This is the reference to the head of the linked list
 * Return: This returns a pointer to the first node of the reversed list
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *x = NULL;
	listint_t *previous = NULL;

	while (*head != NULL)
	{
		x = (*head)->next;
		(*head)->next = previous;
		previous = (*head);
		(*head) = x;
	}
	(*head) = previous;

	return ((*head));
}
