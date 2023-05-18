#include "lists.h"

/**
 * sum_dlistint - This function adds all the data(n) of a linked list
 * @head: This is a pointer to the head of the list
 * Return: This returns the sum of all the data(n) of the linked list
 */
int sum_dlistint(dlistint_t *head)
{
	int sum = 0;

	if (head == NULL)
	{
		return (0);
	}

	while (head != NULL)
	{
		sum += head->n;
		head = head->next;
	}

	return (sum);
}
