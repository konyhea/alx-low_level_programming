#include "dog.h"
#include <stdlib.h>


/**
 * *_strcpy - copy the string pointed to by src
 * @dest: destination of the copied string
 * @src: string to be copied
 *
 * Return: the pointer to dest
 */

char *_strcpy(char *dest, char *src)
{
	int len;
	int i;

	len = 0;

	while (src[len] != '\0')
	{
		len++;
	}

	for (i = 0; i < len; i++)
	{
		dest[i] = src[i];
	}
	dest[i] = '\0';

	return (dest);
}


/**
 * _strlen -find the length of a atring
 * @s: string to be measured
 *
 * Return: the length of a string
 */

int _strlen(char *s)
{
	int i;

	i = 0;

	while (s[i] != '\0')
	{
		i++;
	}

	return (i);
}

/**
 * new_dog - function that creates a new dog
 * @name: member of the struct
 * @age:  member of the struct
 * @owner: member of the struct
 *
 * Return: pointer to return to a new dog
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	int l1, l2;
	dog_t *new_dog;

	l1 = _strlen(name);
	l2 = _strlen(owner);

	new_dog = malloc(sizeof(dog_t));
	if (new_dog == NULL)
	{
		return (NULL);
	}

	new_dog->name = malloc(l1 + 1);
	new_dog->owner = malloc(l2 + 1);

	if (new_dog->name == NULL || new_dog->owner == NULL)
	{
		free(new_dog->name);
		free(new_dog->owner);
		free(new_dog);

		return (NULL);
	}

	_strcpy(new_dog->name, name);
	_strcpy(new_dog->owner, owner);

	new_dog->age = age;

	return (new_dog);
}
