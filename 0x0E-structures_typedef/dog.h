#ifndef DOG_H
#define DOG_H

/**
 * struct dog - Dog description.
 * @name: Dog name.
 * @age: Dog age.
 * @owner: Dog's owner.
 **/

typedef struct dog
{
	char *name;
	float age;
	char *owner;
} description;

void init_dog(struct dog *d, char *name, float age, char *owner);
int _putchar(char c);
#endif

