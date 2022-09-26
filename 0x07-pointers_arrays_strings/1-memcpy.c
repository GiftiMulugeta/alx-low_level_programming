#include "main.h"
#include <stdio.h>

/**
 * simple_print_buffer - prints buffer in hexa
 * @buffer: the address of memory to print
 * @size: the size of the memory to print
 *
 * Return: Nothng
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	char *a = dest;
	unsigned int i;

	while(i<n)
	{
		*a=src[i];
		i++;
	}
	return(a);
}
