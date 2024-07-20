#include "dog.h"
#include <stdlib.h>
#include <string.h>

int _strlen(char *s);
char *_strcpy(char *dest, char *src);

/**
 * new_dog - creates a new dog
 * @name: name of the dog
 * @age: age of the dog
 * @owner: nam of the owner
 * Return: NULL on failure or a pointer to the new dog sruct
 *
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *my_dog;
	int name_len, owner_len;
	char *dog_name, *dog_owner;

	if (name == NULL || owner == NULL)
	{
		return (NULL);
	}

	my_dog = malloc(sizeof(my_dog));
	if (my_dog == NULL)
	{
		return (NULL);
	}

	name_len = _strlen(name);
	owner_len = _strlen(owner);

	dog_name = malloc((name_len + 1) * sizeof(char));
	if (dog_name == NULL)
	{
		free(my_dog);
		return (NULL);
	}
	dog_owner = malloc((owner_len + 1) * sizeof(char));
	if (dog_owner == NULL)
	{
		free(my_dog->name);
		free(my_dog);
		return (NULL);
	}

	_strcpy(dog_name, name);
	_strcpy(dog_owner,  owner);

	my_dog->age = age;
	my_dog->name = dog_name;
	my_dog->owner = dog_name;

	return (my_dog);
}
/**
 * _strcpy - Copy a string
 * @dest: Destination value
 * @src: Source value
 * Return: the pointer to dest
 */
char *_strcpy(char *dest, char *src)
{
	int i;

	for (i = 0; src[i] != '\0'; i++)
	{
		dest[i] = src[i];
	}

	dest[i++] = '\0';

	return (dest);
}
/**
 * _strlen - Returns the length of a string
 * @s: string to count
 * Return: String length
 */
int _strlen(char *s)
{
	int c = 0;

	for (; *s != '\0'; s++)
	{
		c++;
	}

	return (c);
}
