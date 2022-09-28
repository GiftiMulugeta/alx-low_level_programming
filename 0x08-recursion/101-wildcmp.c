#include "main.h"
#include <stdio.h>
#include <string.h>
int palidrome(char *str, int i, int j);
/**
 * is_palindrome - return factorial of a number
 * @s: the character to print
 *
 * Return: Always 0
 */
int is_palindrome(char *s)
{
	if (strlen(s) <= 1)
		return (1);
	return (palidrome(s, 0, strlen(s) - 1));

}

/**
 * palidrome  - return square root
 * @str: the character to print
 * @i: the character to print
 * @j: the character to print
 *
 * Return: Always 0.
 */
int palidrome(char *str, int i, int j)
{
	i =  0;
	j = strlen(str) - 1;
	if (str[i] != str[j])
		return (0);
	else if (i >= j)
		return (1);
	return (palidrome(str, i + 1, j - 1));

}
