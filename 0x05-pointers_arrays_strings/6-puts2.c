#include "main.h"
#include "stdio.h"

/**
 *puts2 - Entry point
 *@str: the character to be print
 *
 * Return: Always 0.
 */
void puts2(char *str)
{
	int c;
	c = 0;

	while (str[c] != '\0')
	{
		_putchar(str[c]);
		c+=2;
	}
	_putchar('\n');
	

}
