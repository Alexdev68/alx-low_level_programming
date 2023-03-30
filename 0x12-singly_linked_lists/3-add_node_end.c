#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * *add_node_end - This function adds a new node at the end of a list_t list
 * @head: This is the reference to the head of the linked list
 * @str: This is a constant character string
 * Return: This returns the address of the new element, or NULL if it failed
 */
list_t *add_node_end(list_t **head, const char *str)
{
	struct list_s *new_node;
	struct list_s *end = *head;

	new_node = malloc(sizeof(struct list_s));
	if (new_node == NULL)
	{
		return (NULL);
	}

	new_node->str = strdup(str);
	new_node->len = strlen(str);

	new_node->next = NULL;

	if (*head == NULL)
	{
		(*head) = new_node;
		return (new_node);
	}

	while (end->next != NULL)
	{
		end = end->next;
	}

	end->next = new_node;
	return (new_node);
}
