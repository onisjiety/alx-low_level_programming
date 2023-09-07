#include <stdlib.h>
#include <stdio.h>
#include "main.h"

/**
 * malloc_checked - function that allocates memory using malloc
 * @b: unsigned parameter
 * Return: always on success
 */

void *malloc_checked(unsigned int b)
{
	void *ptr = malloc(b);

	if (ptr == NULL)
	{
		fprintf(stderr, "malloc failed\n");
		exit(98);
	}
	return (ptr);
}

