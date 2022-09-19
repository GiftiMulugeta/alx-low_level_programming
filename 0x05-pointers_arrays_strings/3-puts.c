#include "main.h"
#include "stdio.h"

/**
 *_puts - Entry point
 *@str: the character to be print
 *
 * Return: Always 0.
 */
void _puts(char *str)
{
	int c;

	c = 0;
	while (str[c] != '\0')
	{
		_putchar(str[c]);
		c++;
	}
	_putchar('\n');

}
