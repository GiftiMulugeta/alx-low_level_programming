#include "main.h"
#include "stdio.h"

/**
 *print_rev - Entry point
 *@s: the character to be print
 *
 * Return: Always 0.
 */
void rev_string(char *s)
{
	int c;

	c = 0;
	while (s[c] != '\0')
		c++;
	while (c >= 0)
	{	

		putchar(s[c]);
		c--;
	}
	putchar('\n');

}
