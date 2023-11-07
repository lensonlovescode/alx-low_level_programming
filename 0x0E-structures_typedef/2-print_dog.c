#include "dog.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * print_dog - this prints the dog's details
 * @d: this is the pointer to thestruct dog
 * Return: this will return nothing
 */
void print_dog(struct dog *d)
{
	if ((*d).name != NULL)
		printf("Name: %s\n", (*d).name);
	else
		printf("(nil)");
	if ((*d).age >= 0)
		printf("Age: %f\n", (*d).age);
	else
		printf("(nil)");
	if ((*d).owner != NULL)
		printf("Owner: %s\n", (*d).owner);
	else
		printf("(nil)");
}
