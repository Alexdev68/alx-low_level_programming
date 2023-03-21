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
	char *mem1, *mem2;
	int i, len1, len2;

	len1 = strlen(name);
	len2 = strlen(owner);
	nd = malloc(sizeof(dog_t));
	if (nd == NULL)
		return (NULL);

	mem1 = malloc(sizeof(char) * len1 + 1);
	if (mem1 == NULL)
	{
		free(nd);
		return (NULL);
	}

	for (i = 0; i < len1; i++)
	{
		mem1[i] = name[i];
	}
	mem1[i] = '\0';

	mem2 = malloc(sizeof(char) * len2 + 1);
	if (mem2 == NULL)
	{
		free(mem1);
		free(nd);
		return (NULL);
	}

	for (i = 0; i < len2; i++)
	{
		mem2[i] = owner[i];
	}
	mem2[i] = '\0';
	nd->name = mem1;
	nd->age = age;
	nd->owner = mem2;
	return (nd);
}
