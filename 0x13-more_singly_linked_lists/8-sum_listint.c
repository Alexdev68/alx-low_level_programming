#include "lists.h"

/**
 * sum_listint - This function sums up all the data(n) of a linked list
 * @head: This is the reference to the head of the linked list
 * Return: This returns the sum of all the data (n) of a listint_t list
 */
int sum_listint(listint_t *head)
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
