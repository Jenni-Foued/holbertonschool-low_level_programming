#include "dog.h"
#include <stdlib.h>

/**
 * copy - Copy a string.
 * @x: String address (destination).
 * @y: String address (source).
 * Return: String address.
 **/
char *copy(char *x, char *y)
{
	int i;

	for (i = 0; y[i] != '\0'; i++)
		x[i] = y[i];
	x[i] = '\0';
	return (x);
}
/**
 * new_dog - Create a new dog.
 * @name: String address (dog name).
 * @age: Float (dog age).
 * @owner: String address (dog owner).
 * Return: Address of new dog.
 **/

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *str;

	str = malloc(sizeof(dog_t));
	if (str == NULL)
		return (NULL);

	str->name = malloc(sizeof(name) + 1);
	if (str->name == NULL)
	{
		free(str);
		return (NULL);
	}

	str->owner = malloc(sizeof(owner) + 1);
	if (str->owner == NULL)
	{
		free(str->name);
		free(str);
	}
	str->age = age;
	str->name = (copy(str->name, name));
	str->owner = (copy(str->owner, owner));
	return (str);
}
