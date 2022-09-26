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
char *_memcpy(char *dest, char *src, unsigned int n)
{
	char *a = dest;

	while (n--)
	{
		*dest = *src;
		src++;
		dest++;
	}
	return (a);
}
