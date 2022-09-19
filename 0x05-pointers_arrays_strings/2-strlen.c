#include "main.h"
#include "stdio.h"

/**
 *_strlen - Entry point
 *@s: the character to be print
 *
 * Return: Always 0.
 */
int _strlen(char *s)
{
	int c;

	c = 0;
	while (s[c] != '\0')
	{
		c++;
	}
	return (c);
}
