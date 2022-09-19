#include "main.h"
#include "stdio.h"
#include <string.h>

/**
 *print_array - Entry point
 *@a: the character to be print
 *@n: thecter to be print
 *
 * Return: Always 0.
 */
void print_array(int *a, int n)
{
	int c;
	char b;

	b = ',';

	for (c = 0; c < n; c++)
	{
		printf("%d", a[c]);
		if (c < n - 1)
		{
			printf("%c", b);
		}
	}
	putchar('\n');
}
