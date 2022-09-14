#include "main.h"

/**
 * _isalpha- Entry point
 * @c: The character to print
 *
 * Return: Always 0 (Success)
 */
int _isalpha(int c)
{
	char  u, l;

	for (l = 'a'; l <= 'z'; l++)
	{
		for (u = 'A'; u <= 'Z'; u++)
		{
			if (c == l || c == u)
				return (1);
		}
	}
	return (0);
}
