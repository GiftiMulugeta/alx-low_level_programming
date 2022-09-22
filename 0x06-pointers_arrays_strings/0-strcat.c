#include "main.h"
#include <stdio.h>

/**
 * *_strcat- check the code
 * @dest: the character to print
 * @src: the character to print
 *
 * Return: Always 0
 */
char *_strcat(char *dest, char *src)
{
	char *con = dest;
	int i = 0;
	int j = 0;

	while (dest[i] != '\0')
	{
		con[j] = dest[i];
		i++;
		j++;
	}
	i = 0;
	while (src[i] != '\0')
	{
		con[j] = src[i];
		i++;
		j++;
	}
	con[j] = '\0';
	return (con);
}
