#include "dog.h"
#include <stdlib.h>

/**
 * init_dog - This initializes a variable of type struct dog
 * @d: variable being initialized
 * @name: First member
 * @age: Second member
 * @owner: Third member
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == NULL)
	{
		d = malloc(sizeof(struct dog));
	}

	d->name = name;
	d->age = age;
	d->owner = owner;
}
