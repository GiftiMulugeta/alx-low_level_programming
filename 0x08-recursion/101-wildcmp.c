#include "main.h"
#include <stdio.h>
#include <string.h>
/**
 * is_palindrome - return factorial of a number
 * @s: the character to print
 *
 * Return: Always 0
 */
int wildcmp(char *s1, char *s2)
{
	if (s1 != s2)
		return (0);
	return (wildcmp(s1 + 1, s2 + 1));
}
