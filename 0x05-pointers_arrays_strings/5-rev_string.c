#include "main.h"
#include "stdio.h"

/**
 *rev_string - Entry point
 *@s: the character to be print
 *
 * Return: Always 0.
 */
void rev_string(char *s)
{
	int c, a;
	char swap;

	a = 0;
	c = 0;
	while (s[c] != '\0')
		c++;
	while (a < c--)
	{
		swap = s[a];
		s[a++] = s[c];
		s[c] = swap;
	}

}
