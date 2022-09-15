#include "main.h"
#include <stdio.h>

/**
 * print_triangle- Entry point
 * @size: The character to be print
 *
 * Return: Always 0
 */
void print_triangle(int size)
{
	int i, j;

	for (i = 0; i <= size; ++i)
	{
		for (j = i; j < size; ++j)
		{
			_putchar(' ');
		}
		for (j = 1; j <= i; ++j)
		{
			_putchar('#');
		}
	_putchar('\n');
	}
}
