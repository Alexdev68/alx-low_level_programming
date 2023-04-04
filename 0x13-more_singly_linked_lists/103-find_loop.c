#include "lists.h"

/**
 * *find_listint_loop - This function finds the loop in a linked list
 * @head: This is the reference to the head of the linked list
 * Return: This returns the address of the node where the loop starts,
 * or NULL if there is no loop
 */
listint_t *find_listint_loop(listint_t *head)
{
	size_t i, count = loopdetector(head);
	listint_t *x = head;

	if (count == 0)
	{
		return (NULL);
	}
	else
	{
		for (i = 0; i < count; i++)
		{
			x = x->next;
		}

	}
	return (x);
}
