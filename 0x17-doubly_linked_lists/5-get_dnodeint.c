#include "lists.h"


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
