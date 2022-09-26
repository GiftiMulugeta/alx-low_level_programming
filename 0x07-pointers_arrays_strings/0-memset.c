#include "main.h"
#include <stdio.h>

/**
 * simple_print_buffer - prints buffer in hexa
 * @buffer: the address of memory to print
 * @size: the size of the memory to print
 *
 * Return: Nothng
 */
char *_memset(char *s, char b, unsigned int n)
{
	char *a = s;

	while(n--)
	{
		*s=b;
		s++;
	}
	return(a);
}
