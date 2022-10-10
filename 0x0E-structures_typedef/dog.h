#ifndef _DOG_H
#define _DOG_H

/**
 * struct dog - Short description
 * @name: first member
 * @age: second member
 * @owner: third member
 *
 * Description: Longer description
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};
void init_dog(struct dog *d, char *name, float age, char *owner);
#endif
