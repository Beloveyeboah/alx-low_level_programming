#include "dog.h"
#include <stdlib.h>

/**
 * init_dog - init_dog initializes
 * @d: the dog
 * @name: name
 * @age: age
 * @owner: the owner
 * Discreption: imit
 * Return: 0
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d != NULL)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}
