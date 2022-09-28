#include "main.h"
#include <stdio.h>
/**
 * _pow_recursion - return factorial of a number
 * @x: the character to print
 * @y: the character to print
 *
 * Return: Always 0
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	else if (y == 0)
		return (1);
	return (x * _pow_recursion(x, y - 1));
}
