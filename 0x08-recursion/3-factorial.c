#include "main.h"
#include <stdio.h>
/**
 * factorial - return factorial of a number
 * @n: the character to print
 *
 * Return: Always 0
 */
int factorial(int n)
{
	if (n < 0)
		return (-1);
	else if (n == 0)
		return (1);
	return (n * factorial(n - 1));

}
