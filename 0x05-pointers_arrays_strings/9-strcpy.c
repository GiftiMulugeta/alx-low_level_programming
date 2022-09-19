#include "main.h"
#include "stdio.h"
#include <string.h>

/**
 *_strcpy - Entry point
 *@dest: the character to be print
 *@src: thecter to be print
 *
 * Return: Always 0.
 */
char *_strcpy(char *dest, char *src)
{
	char *c = dest;

	while (*src)
		*dest++ = *src++;
	return (c);
}
