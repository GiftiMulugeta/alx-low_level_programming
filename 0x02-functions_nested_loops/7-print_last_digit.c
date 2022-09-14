#include "main.h"


/**
 * print_last_digit - Entry point
 * @n: The character to be print
 *
 *Return: Always 0
 */
int print_last_digit(int n)
{
	int x;
	x = n % 10;

	if (n >= 0)
	{
		x = n % 10;
	}
	else
	{
		x = (-1) * (n % 10);
	}
	_putchar(x + '0');
	return (x);
}
