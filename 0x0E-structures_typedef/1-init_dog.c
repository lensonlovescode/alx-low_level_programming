#include <stdlib.h>
#include <stdio.h>
#include "dog.h"
/**
 * init_dog - this initializes the details of the dog
 * @d: this points to the specific dog
 * @name: this is the name of the dog
 * @age: this is the age of the dog
 * @owner: this is the name of the owner
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d != NULL)
	{
	(*d).name = name;
	(*d).age = age;
	(*d).owner = owner;
	}
}
