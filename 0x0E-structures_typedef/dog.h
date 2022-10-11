#ifndef DOG_H
#define DOG_H
#include <stdlib.h>
/**
 * struct dog - dog struct type
 * @name: name of dog
 * @age: the age of the dog
 * @owner: name of owner
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
typedef struct dog dog_t;
dog_t *new_dog(char *name, float age, char *owner);
#endif /*DOG_H*/