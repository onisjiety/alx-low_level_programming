#include <stdio.h>
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
    d->name = name;
    d->age = age;
    d->owner = owner;
}
