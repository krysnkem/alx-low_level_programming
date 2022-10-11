#include "dog.h"
#include <string.h>
/**
 * new_dog - creates a new dog
 * @name: name of new dog
 * @age: age of new dog
 * @owner: owner of new dog
 *
 * Return: new dog or NULL if fail
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *n_dog;
	char *n_dog_name;
	char *n_dog_owner;
	
	if (name == NULL || owner == NULL)
		return (NULL);

	n_dog = malloc(sizeof(*n_dog));
	if (n_dog == NULL)
		return (NULL);
	n_dog_name = malloc(strlen(name) + 1);
	if (n_dog_name == NULL)
		return (NULL);
	strcpy(n_dog_name, name);
	n_dog_owner = malloc(strlen(owner) + 1);
	if (n_dog_owner == NULL)
		return (NULL);
	strcpy(n_dog_owner, owner);

	n_dog->name = n_dog_name;
	n_dog->age = age;
	n_dog->owner = n_dog_owner;

	return (n_dog);
}
