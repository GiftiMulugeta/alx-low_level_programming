#include "main.h"
#include <stdio.h>

/**
 * _isdigit- Entry point
 *@c: The character to print
 *
 * Return: Always 0
 */
int _isdigit(int c)
{
	int u;

	int ret = 0;

	for (u = '0'; u <= '9'; u++)
	{
		if (c == u)
		{
			ret = 1;
		}
	}
	return (ret);
}
