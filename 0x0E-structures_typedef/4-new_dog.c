#include "dog.h"
#include <stdlib.h>

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

	nd = malloc(sizeof(dog_t));

	if (nd == NULL)
	{
		return (NULL);
	}

	nd->name = name;
	nd->age = age;
	nd->owner = owner;

	return (nd);
}
