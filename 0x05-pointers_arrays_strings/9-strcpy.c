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
	int i=0;

	for(; src[i]!='\0';i++)
		dest[i]=src[i];
	dest[i]='\0';
	return (dest);
}
