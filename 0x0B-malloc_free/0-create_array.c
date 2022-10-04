#include "main.h"
#include <stdlib.h>

/**
 * create_array - check the code
 * @size: the characcter to print
 * @c: the character to print
 * Return: Returns a pointer to the array, or NULL if it fails
 */

char *create_array(unsigned int size, char c)
{
	unsigned int i = 0;
	char *s;

	s = malloc(size * sizeof(char));

	if (s == NULL)
		return (NULL);
	if (size == 0)
		return (NULL);

	while (i < size)
	{
		s[i] = c;
		i++;
	}
	return (s);
}
