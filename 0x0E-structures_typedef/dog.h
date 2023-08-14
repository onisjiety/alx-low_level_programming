#ifndef DOG_H
#define DOG_H

struct dog
{
	char *name;
	float age;
	char *owner;
};

/**
 * dog_t - typedef for struct dog
 * init_dog - for struct
 * @d: character struct
 * @name: character pointer
 * @age: float
 * @owner: character pointer
 * print_dog - struct pointer
 * @d: varieble name;
 * *new_dog - struct
 */
typedef struct dog dog_t;
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
void free_dog(dog_t *d);
dog_t *new_dog(char *name, float age, char *owner);


#endif
