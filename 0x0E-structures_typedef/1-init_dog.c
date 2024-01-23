#include "dog.h"

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
	*d = (struct dog){ .name = name, .age = age, .owner = owner };
}
