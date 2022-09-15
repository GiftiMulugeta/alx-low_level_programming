#include "main.h"
#include <stdio.h>

/**
 * print_diagonal- Entry point
 * @n: The character to be print
 *
 * Return: Always 0
 */
void print_diagonal(int n)
{
	int c, i;

	for (i = 0; i < n; i++)
	{
		for (c = 0; c < i; c++)
		{
			if (n <= 0)
				_putchar('\n');
			_putchar('\\');
		}
		_putchar('\n');
	}
}
