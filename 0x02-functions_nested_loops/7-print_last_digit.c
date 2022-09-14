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

	if (n < 0)
	{
		x = (-1) * (n % 10);
	}
	else
	{
		x = n % 10;
	}
	_putchar((n % 10) + '0');
	return (x % 10);
}
