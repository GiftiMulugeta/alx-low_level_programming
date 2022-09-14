#include "main.h"


/**
 * _abs - Entry point
 * @n: The character to be print
 *
 *Return: Always 0
 */
int _abs(int n)
{
	if (n > 0)
	{
		return (n);
	}
	else if (n < 0)
	{
		n = n * -1;
		return (n);
	}
	else
	{
		n = 0;
		return (n);
	}
	return (0);
}
