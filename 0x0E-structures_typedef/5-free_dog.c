#include "dog.h"
#include <stdlib.h>

/**
 * free_dog - This frees dogs
 * @d: dog pointer
 */
void free_dog(dog_t *d)
{
	free(d->name);
	free(d->owner);

	if (d)
	{
		free(d);
	}
}
