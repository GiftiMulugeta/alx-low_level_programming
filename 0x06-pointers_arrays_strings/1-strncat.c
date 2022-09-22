#include "main.h"
#include <stdio.h>
#include <string.h>
/**
 * *_strncat- check the code
 * @dest: the character to print
 * @src: the character to print
 *@n: the character to print
 *
 * Return: Always 0
 */
char *_strncat(char *dest, char *src, int n)
{
	char *con = dest;
	int i = 0;
	int j = 0;
	int srclength;
	int s;

	srclength = strlen(src);
	if (n > srclength)
		n = srclength;
	else
		n = n;
	while (dest[i] != '\0')
	{
		con[j] = dest[i];
		i++;
		j++;
	}
	i = 0;
	for (s = 0; s < n; s++)
	{
		con[j] = src[s];
		j++;
	}
	con[j] = '\0';
	return (con);
}
