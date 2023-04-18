#include "dog.h"
#include <stdio.h>

/**
 * init_dog - function that initialize a variable of type struct dog
 * @d: the pointer to struct dog
 * @name: member of the struct dog to be initialzed
 * @age: member of the struct dog to be initialized
 * @owner: memmber of the struct dog to be initialized
 *
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	d->name = name;
	d->age = age;
	d->owner = owner;
}
