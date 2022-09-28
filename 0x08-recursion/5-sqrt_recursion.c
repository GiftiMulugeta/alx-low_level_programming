#include "main.h"
#include <stdio.h>
int square_root(int root, int square);
/**
 * _sqrt_recursion - return factorial of a number
 * @n: the character to print
 *
 * Return: Always 0
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	return (square_root(1, n));

}

/**
 * square_root - return square root
 * @root: the character to print
 * @square: the character to print
 *
 * Return: Always 0.
 */
int square_root(int root, int square)
{
	if (root > square)
		return (-1);
	if (root * root == square)
		return (root);
	return (square_root(root + 1, square));
}
