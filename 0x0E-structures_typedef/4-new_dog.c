#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "dog.h"

dog_t *new_dog(char *name, float age, char *owner) {
    /* Allocate memory for the new dog structure */
    dog_t *new_dog = malloc(sizeof(dog_t));
    if (new_dog == NULL) {
        /* Memory allocation failed */
        return NULL;
    }

    /* Allocate memory and copy the name string */
    new_dog->name = malloc(strlen(name) + 1);
    if (new_dog->name == NULL) {
        /* Memory allocation failed */
        free(new_dog);
        return NULL;
    }
    strcpy(new_dog->name, name);

    /* Allocate memory and copy the owner string */
    new_dog->owner = malloc(strlen(owner) + 1);
    if (new_dog->owner == NULL) {
        /* Memory allocation failed */
        free(new_dog->name);
        free(new_dog);
        return NULL;
    }
    strcpy(new_dog->owner, owner);

    /* Set the age of the new dog */
    new_dog->age = age;

    return new_dog;
}
