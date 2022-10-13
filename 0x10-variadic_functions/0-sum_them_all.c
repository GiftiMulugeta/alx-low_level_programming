#include <stdio.h>
#include "variadic_functions.h"
#include <stdarg.h>
/**
 * sum_them_all - return sum of arguments
 * @n: first parameter
 * @..: other parametrs
 * Return: Always 0.
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list a;
	unsigned int i;
	unsigned int sum = 0;

	va_start(a, n);
	if (n == 0)
		return (0);
	for (i = 0; i < n; i++)
	{
		sum += va_arg(a, int);
	}
	va_end(a);
	return (sum);
}
