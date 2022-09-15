#include "main.h"
#include <stdio.h>

/**
 * print_line- Entry point
 * @n: The character to be print
 *
 * Return: Always 0
 */
void print_line(int n)
{
	int c, i;

	for (i = 0; i < 1; i++)
	{
		for (c = 0; c < n; c++)
		{
			if (n <= 0)
				_putchar('\n');
			_putchar('_');
		}
		_putchar('\n');
	}
}
