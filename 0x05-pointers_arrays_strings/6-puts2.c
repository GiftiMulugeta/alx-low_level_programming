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
	int a;
	c = 0;

/*	while (str[c] != '\0')
	{
		if (c%2==0)
		{
			_putchar(str[c]);
			c = c + 2;
		}

	}
	_putchar('\n');*/
	a=0;

	while(str[c]!='\0')
	{
		c++;
	}
	c-=1;
	for(;a<=c;a+=2)
	{
		_putchar(str[a]);
	}
	_putchar('\n');

}
