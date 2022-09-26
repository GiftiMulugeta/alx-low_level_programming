#include "main.h"
#include <stdio.h>

/**
 * *_strchr - check the code
 * @s : prints buffer in hexa
 * @c: the address of memory to print
 *
 * Return: Nothng
 */
char *_strchr(char *s, char c)
{
	if (c == *s)
		return (s);
	while (*s)
	{
		if (c == *s)
			return (s);
		s++;
	}
	return (NULL);
}
