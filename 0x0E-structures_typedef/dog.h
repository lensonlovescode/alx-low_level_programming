#ifndef DOG_H
#define DOG_H

#include <stdlib.h>
#include <stdio.h>

/**
 * struct dog - this is the struct defining the properties of dog
 * @name: this is the dog's name
 * @age: this is the dog's age
 * @owner: this is the dog's owner
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};


void init_dog(struct dog *d, char *name, float age, char *owner);

#endif
