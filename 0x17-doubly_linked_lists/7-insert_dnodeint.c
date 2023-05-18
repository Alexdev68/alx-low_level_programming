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
	size_t i = 0;

	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);

	new->n = n;
	new->next = NULL;
	new->prev = NULL;
	if (idx == 0)
	{
		new->next = current;
		if (current != NULL)
			current->prev = new;
		current = new;
		return (new);
	}
	while (current != NULL && i < idx - 1)
	{
		current = current->next;
		i++;
	}

	if (current == NULL)
	{
		free(new);
		return (NULL);
	}

	new->next = current->next;
	if (current->next != NULL)
		current->next->prev = new;
	new->prev = current;
	current->next = new;

	return (new);
}
