#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "dog.h"

/**
 * init_dog - initialize variable type
 * @d: struct pointer
 * @name: character pointer
 * @age: floating item
 * @owner: character pointer
 * Rerurn: always on success
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	d->name = malloc(strlen(name) + 1);
	strcpy(d->name, name);
	d->age = age;

	d->owner = malloc(strlen(owner) + 1);
	strcpy(d->owner, owner);
}
