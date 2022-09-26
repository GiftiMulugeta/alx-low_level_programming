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
int main(void)
{
	char *s = "hello";
	char *f;

	f = _strchr(s, 'l');

	if (f != NULL)
	{
		printf("%s\n", f);
	}
	return (0);
}
