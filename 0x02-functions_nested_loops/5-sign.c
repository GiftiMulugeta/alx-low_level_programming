#include "main.h"

/**
 * print_sign - Entry point
 *@n: The  character to print
 *
 *Return: Always 0
 *
 */
int print_sign(int n)
{
	int a;

	a = 0;

	if (n > 0)
	{
		_putchar('+');
		a = 1;
	}
	else if (n < 0)
	{
		_putchar('-');
		a = -1;
	}
	else
	{
		_putchar('0');
		a = 0;
	}
	return (a);
}
