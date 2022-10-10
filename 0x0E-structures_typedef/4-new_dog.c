#include <stdio.h>
#include "dog.h"
#include <stdlib.h>

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *new_dog;
	char *copyname, *copyowner;
	int name_length, owner_length, i;
	name_length = 0;
	owner_length = 0;

	if (name == NULL || owner == NULL)
		return (NULL);
	while(owner[owner_length])
		owner_length++;
	while(name[name_length])
		name_length++;
	new_dog = malloc(sizeof(dog_t));
	if (new_dog == NULL)
		return (NULL);
	copyname = malloc(sizeof(name_length+1));
	copyowner = malloc(sizeof(owner_length+1));
	if (copyname ==NULL)
		return (NULL);
	for ( i=0; name[i]; i++)
		copyname[i]=name[i];
	copyname[i]='\0';
	i=0;
	if (copyowner==NULL)
		return (NULL);
	for (i = 0; owner[i]; i++)
		copyowner[i] = owner[i];
	copyowner = '\0';

	new_dog->name=copyname;
	new_dog->age=age;
	new_dog->owner=copyowner;
	return (new_dog);
}
