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
void reverse_array(int *a, int n)
{
	int i = 0;

	while(a[i]!='\0')
	{
		i++;
	}
	while(i<n)
	{
		printf("%d",a[i]);
		i--;
	}
}
