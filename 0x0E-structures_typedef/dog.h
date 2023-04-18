#ifndef _DOG_H
#define _DOG_H


/**
 * struct dog - info about a a dog parameters
 * @name: name of the dog (first member)
 * @age: age of dog(second member)
 * @owner: owner of the dog (third member)
 *
 */

struct dog
{
	char *name;
	float age;
	char *owner;
};

void init_dog(struct dog *d, char *name, float age, char *owner);

void print_dog(struct dog *d);

dog_t *new_dog(char *name, float age, char *owner);

void free_dog(dog_t *d);

#endif
