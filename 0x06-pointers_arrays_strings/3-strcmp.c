#include "main.h"
#include <stdio.h>
#include <string.h>
/**
 * _strcmp- check the code
 * @s1: the character to print
 *@s2: the character to print
 *
 * Return: Always 0
 */
int _strcmp(char *s1, char *s2)
{
	int i = 0;

	char a;

	if (s1[i] < s2[i])
	{
		a = s1[i] - s2[i];
	}
	else if (s1[i] > s2[i])
	{
		a = s1[i] - s2[i];
	}
	else
		a = 0;
	return (a);
}
