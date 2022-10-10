#include <stdio.h>
#include "dog.h"
#include <stdlib.h>
/**
 * free_dog - free all the dogs
 * @d: memebr1
 */
void free_dog(dog_t *d)
{
	if (d == NULL)
		return;
	if (d->owner != NULL)
		free(d->owner);
	if (d->name != NULL)
		free(d->name);
	free(d);
}
