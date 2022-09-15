#include "main.h"
#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0
 */
int _isupper(int c)
{

	char u;
	int ret = 0;
	 
	for (u='A'; u<= 'Z'; u++)
	{
		if (c == u)
		{
			ret = 1;
		}
	}
	return (ret);
}
