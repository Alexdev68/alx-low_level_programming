#include "dog.h"
#include <stdlib.h>
#include <string.h>

/**
 * *new_dog - This creates a new dog
 * @name: First member
 * @age: Second member
 * @owner: Third member
 * Return: This returns nd
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *nd;
	char *name_mem, *owner_mem;
	int i, len1, len2;

	len1 = strlen(name);
	len2 = strlen(owner);
	nd = malloc(sizeof(dog_t));
	if (nd == NULL)
		return (NULL);

	name_mem = malloc(sizeof(char) * (len1 + 1));
	if (name_mem == NULL)
	{
		free(nd);
		return (NULL);
	}

	for (i = 0; i < len1; i++)
	{
		name_mem[i] = name[i];
	}
	name_mem[i] = '\0';

	owner_mem = malloc(sizeof(char) * (len2 + 1));
	if (owner_mem == NULL)
	{
		free(nd);
		return (NULL);
	}

	for (i = 0; i < len2; i++)
	{
		owner_mem[i] = owner[i];
	}
	owner_mem[i] = '\0';

	nd->name = name_mem;
	nd->age = age;
	nd->owner = owner_mem;
	return (nd);
}
