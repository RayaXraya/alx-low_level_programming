#include "dog.h"
#include <stddef.h>

/**
 * init_dog - intilizes the dog
 * @d: the variable
 * @name: the dog name
 * @age: its age
 * @owner: the owner
 * Return: void
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
