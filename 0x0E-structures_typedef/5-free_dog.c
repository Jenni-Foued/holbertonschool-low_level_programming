#include "dog.h"
#include <stdlib.h>

/**
 * free_dog - Free the structure dog.
 * @d: Address of d.
 **/
void free_dog(dog_t *d)
{
	if (d != NULL)
	{
		free(d->name);
		free(d->owner);
		free(d);
	}
}
