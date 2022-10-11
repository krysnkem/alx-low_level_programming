#include "dog.h"

/**
 * free_dog - frees space allocation to dogs
 * @d: pointer to dog instance
 *
 */
void free_dog(dog_t *d)
{
	free(d->name);
	free(d->owner);
	free(d);
}
