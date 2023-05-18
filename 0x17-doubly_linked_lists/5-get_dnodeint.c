#include "lists.h"

/**
 * *get_dnodeint_at_index - This function returns the address of a node at idx
 * @head: This is a pointer to the head of the doubly linked list
 * @index: This is the index at which the node is return from
 * Return: This returns the address of a node or NULL if it fails
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *current = head;
	size_t count = 0, i = 0;

	while (current != NULL)
	{
		current = current->next;
		count++;
	}
	if (count < index)
	{
		return (NULL);
	}

	current = head;
	while (i < index)
	{
		current = current->next;
		i++;
	}

	return (current);
}
