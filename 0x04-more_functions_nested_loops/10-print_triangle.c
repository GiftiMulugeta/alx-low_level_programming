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
	int i, j, n = size - 1;

	if (size > 0)
	{
		for (i = 0; i < size; i++)
		{
			for (j = 0; j < size; j++)
			{
				if (j < n)
					_putchar(' ');
				else
					putchar('#');
			}
			n--;
			putchar('\n');
		}
	}
	else
	{
		_putchar('\n');
	}
}
