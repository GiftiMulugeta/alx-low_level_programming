#include "main.h"
#include <stdio.h>


/**
 * print_to_98 - Entry point
 * @n: The character to be print
 *
 *Return: Always 0
 */
void print_to_98(int n)
{
	int x;

	if (n <= 98)
		for (x = n; x <= 98; x++)
		{
			printf("%d", x);
			if (x != 98)
			{
				printf(",");
				printf(" ");
			}
		}
	else
		for (x = n; x >= 98; x--)
		{
			printf("%d", x);
			if (x != 98)
			{
				printf(",");
				printf(" ");
			}
		}
	printf("\n");
}
