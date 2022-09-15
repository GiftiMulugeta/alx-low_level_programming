#include "main.h"
#include <stdio.h>

/**
 * print_square- Entry point
 * @size: The character to be print
 *
 * Return: Always 0
 */
void print_square(int size)
{
	int c, i;

	if (size > 0)
	{

		for (i = 0; i < size; i++)
		{
			for (c = 0; c < size; c++)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
	}
	else
		_putchar('\n');
}
