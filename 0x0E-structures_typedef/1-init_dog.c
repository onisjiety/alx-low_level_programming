#include <stdio.h>
#include <string.h>
#include "dog.h"

/**
 * init_dog - initialize variable type
 * @*d:
 * @*name:
 * @age:
 * @*owner:
 * Rerurn: always 0 on success
 */

void init_dog(struct dog *d, char *name, float age, char *owner) {
    strcpy(d->name, name);
    d->age = age;
    strcpy(d->owner, owner);
}
