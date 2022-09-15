#include "main.h"
#include <stdio.h>

/**
 * print_square- Entry point
 * @n: The character to be print
 *
 * Return: Always 0
 */
void print_square(int n)
{
	int c, i;

	if (n > 0)
	{

		for (i = 0; i < n; i++)
			{
				for (c = 0; c < n; c++)
				{
					_putchar('#');
				}
				_putchar('\n');
			}
	}
	else
		_putchar('\n');
}
