#include <stdlib.h>
#include "dog.h"

/**
 * init_dog - assign a variable of type struct dog
 * @d: pointer to struct dog (assigned)
 * @name: name to be assigned
 * @age: age to age to be assigned
 * @owner: owner to be assigned
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == NULL)
		d = malloc(sizeof(struct dog));
	d->name = name;
	d->age = age;
	d->owner = owner;
}
