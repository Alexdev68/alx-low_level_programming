#include "lists.h"
#include <stdlib.h>

/**
 * *insert_nodeint_at_index - This func inserts a new node at a given position
 * @head: This is the reference to the head of the linked list
 * @idx: This is the position at which the new node will be added
 * @n: This is the data of the new node
 * Return: This returns the address of the new node, or NULL if it failed
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int count = 0;
	listint_t *x = *head;
	listint_t *new_node;

	new_node = malloc(sizeof(listint_t));
	if (new_node == NULL)
	{
		return (NULL);
	}

	new_node->n = n;
	new_node->next = NULL;

	while (x != NULL || (x == NULL && count == idx - 1))
	{
		if (idx == 0)
		{
			new_node->next = (*head);
			(*head) = new_node;
			return (new_node);
		}
		if (count == idx - 1)
		{
			new_node->next = x->next;
			x->next = new_node;
			return (new_node);
		}
		x = x->next;
		count++;
	}
	return (NULL);
}
