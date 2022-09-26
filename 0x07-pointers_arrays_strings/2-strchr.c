#include "main.h"
#include <stdio.h>

/**
 * _memcpy - check the code
 * @dest : prints buffer in hexa
 * @src: the address of memory to print
 * @n: the size of the memory to print
 *
 * Return: Nothng
 */
char *_strchr(char *s, char c)
{
	
	while(*s)
	{
		if (c==*s)
			return(s);
		s++;
	}


	return (NULL);
}
