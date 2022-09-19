#include "main.h"
#include "stdio.h"
#include <string.h>

/**
 *puts_half - Entry point
 *@str: the character to be print
 *
 * Return: Always 0.
 */
void puts_half(char *str)
{
	int c, d, len;

	d = 0;

	len = strlen(str);
	while (str[d] != '\0')
	{
		d++;
	}

	if (len % 2 == 0)
	{
		c = len / 2;
		for (; c < d; c++)
		{
			_putchar(str[c]);
		}
	}
	else if (len % 2 != 0)
	{
		c = (len+1) / 2;
		for (; c < d; c++)
		{
			_putchar(str[c]);
		}
	}
	_putchar('\n');
}
