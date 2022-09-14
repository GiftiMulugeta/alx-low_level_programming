#include "main.h"

/**
 * _islower- Entry point
 * @c: The character to print
 *
 * Return: Always 0 (Success)
 */
int _islower(int c)
{
	char l;
	int num=0;

	for (l = 'a'; l <= 'z'; l++)
	{
		if (c==l)
			num=1;
	}
	return (num);
}
