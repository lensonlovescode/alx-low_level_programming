#include "dog.h"
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
/**
 *
 *
 *
 *
 *
 *
 */
dog_t *new_dog(char *name, float age, char *owner)
{
        dog_t *my_dog;
        int name_len, owner_len;

        if (name == NULL || owner == NULL)
        {
                return (NULL);
        }

        name_len = strlen(name);
        owner_len = strlen(owner);

        my_dog->name = malloc((name_len + 1) * sizeof(char));
        if (my_dog->name == NULL)
        {
                return (NULL);
        }
        my_dog->owner = malloc((owner_len + 1) * sizeof(char));
        if (my_dog->owner == NULL)
        {
                return (NULL);
        }

        strcpy(my_dog->name, name);
        strcpy(my_dog->owner, owner);

        my_dog->age = age;
        my_dog->name = "Picle";
        my_dog->owner = "Lenson";

        return (my_dog);

}
