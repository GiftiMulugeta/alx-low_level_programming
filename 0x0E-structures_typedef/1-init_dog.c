#include <stdio.h>
#include "dog.h"

/**
 * init_dog - initialize struct
 * @d: member1
 * @name: member2
 * @age: eember3
 * @owner: member4
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == NULL)
		return;
	d->name = name;
	d->age = age;
	d->owner = owner;
}
