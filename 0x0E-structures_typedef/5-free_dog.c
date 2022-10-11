#include "dog.h"

/**
 * free_dog - frees space allocation to dogs
 * @d: pointer to dog instance
 *
 */
void free_dog(dog_t *d)
{
	if (d->name != NULL)
		free(d->name);
	if (d->owner != NULL)
		free(d->owner);
	free(d);
}
