#include "lists.h"
#include <stdlib.h>
#include <stdio.h>
#include <string.h>

/**
 * *add_node - This function print adds a new node at the beginning of a list
 * @head: This is the head pointer
 * @str: This is a constant character string
 * Return: This returns 0
 */
list_t *add_node(list_t **head, const char *str)
{
	struct list_s *new_node;

	new_node = malloc(sizeof(struct list_s));

	if (new_node == NULL)
	{
		return (NULL);
	}
	new_node->str = strdup(str);

	new_node->next = (*head);

	(*head) = new_node;

	new_node->len = strlen(str);
	return (0);
}
