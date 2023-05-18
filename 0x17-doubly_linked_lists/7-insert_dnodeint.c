#include "lists.h"
#include <stdlib.h>

/**
 * *insert_dnodeint_at_index - This function inserts a node at an index
 * @h: This is a pointer to the head of the node
 * @idx: This is the index at which the node is inserted
 * @n: This is the value to be inserted
 * Return: This return the new node or Null if it fails
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *current = *h;
	dlistint_t *new;
	size_t i = 0, count = 0;

	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
	{
		return (NULL);
	}
	new->n = n;
	new->next = NULL;

	while (current != NULL)
	{
		current = current->next;
		count++;
	}
	if (count < idx)
	{
		return (NULL);
	}

	current = *h;
	while (i < idx - 1)
	{
		current = current->next;
		i++;
	}

	new->next = current->next;
	current->next = new;
	new->prev = current;

	return (new);
}
