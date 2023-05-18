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
	size_t count = 0, i = 0;

	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);

	new->n = n;
	new->next = NULL;
	if (idx - 1 == 0)
	{
		new->next = current;
		current->prev = new;
		new->prev = NULL;
		current = new;
		return (new);
	}
	while (current != NULL)
	{
		current = current->next;
		count++;
	}
	if (count < idx - 1)
		return (NULL);

	current = *h;
	while (current != NULL)
	{
		if (i == idx - 1)
			break;

		current = current->next;
		i++;
	}
	new->next = current->next;
	new->prev = current;
	current->next = new;

	return (new);
}
