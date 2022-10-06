#include <stdlib.h>

/**
 * malloc_checked - allocates memory
 * @b: the character to print
 *
 * Return: returns a pointer
 */
void *malloc_checked(unsigned int b)
{
	void *space;

	space = malloc(b);
	if (space == NULL)
		exit(98);
	return (space);
}
