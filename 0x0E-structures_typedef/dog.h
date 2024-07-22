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

/**
 * *dog_t - typedef for struct dog
 */
typedef struct dog dog_t;

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
char *_strcpy(char *dest, char *src);
int _strlen(char *s);
void free_dog(dog_t *d);
#endif
