#include <stdio.h>
#include "dog.h"
#include <stdlib.h>
/**
 * new_dog - create new dog
 * @name: member1
 * @age: member2
 * @owner: member3
 *
 * Return: Always 0.
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *new_dog;
	char *copyname, *copyowner;
	int i;
	int name_length = 0;
	int owner_length = 0;

	if (name == NULL || owner == NULL)
		return (NULL);
	while (owner[owner_length])
		owner_length++;
	while (name[name_length])
		name_length++;
	new_dog = malloc(sizeof(dog_t));
	if (new_dog == NULL)
		return (NULL);
	copyname = malloc(name_length + 1);
	if (copyname == NULL)
		return (NULL);
	for (i = 0; name[i]; i++)
		copyname[i] = name[i];
	copyname[i] = '\0';
	copyowner = malloc(owner_length + 1);
	if (copyowner == NULL)
		return (NULL);
	for (i = 0; owner[i]; i++)
		copyowner[i] = owner[i];
	copyowner[i] = '\0';
	new_dog->name = copyname;
	new_dog->age = age;
	new_dog->owner = copyowner;
	return (new_dog);
}
