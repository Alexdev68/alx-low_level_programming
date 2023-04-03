#include "lists.h"
#include <stdio.h>

/**
 * *get_nodeint_at_index - This function returns the nth node of linked list
 * @head: This is the reference to the head of the linked list
 * @index: This is the index to know which node is being indicated to
 * Return: This returns the nth node of listint_t linked list
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int count = 0;
	listint_t *x = head;

	while (x != NULL)
	{
		if (count == index)
		{
			return (x);
		}
		count++;
		x = x->next;
	}
	if (index > count)
	{
		return (NULL);
	}

	return (0);
}
