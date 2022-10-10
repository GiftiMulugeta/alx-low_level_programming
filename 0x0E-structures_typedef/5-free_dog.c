#include <stdio.h>
#include "dog.h"
#include <stdlib.h>
void free_dog(dog_t *d)
{
	if (d==NULL)
		return;
	if (d!=	NULL)
		free(d);
	
}
