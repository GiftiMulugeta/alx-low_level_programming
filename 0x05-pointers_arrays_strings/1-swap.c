#include "main.h"
#include "stdio.h"

/**
 *swap_int - check the code
 *@a: the character to be print
 *@b: the character to print
 *
 * Return: Always 0.
 */
void swap_int(int *a, int *b)
{
	int swap;

	swap = *a;
	*a = *b;
	*b = swap;
}
