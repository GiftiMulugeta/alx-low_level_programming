#include <stdio.h>
#include "variadic_functions.h"
#include <stdarg.h>
/**
 * print_strings - return sum of arguments
 * @separator: first parameter
 * @n: an integer
 * @..: other parametrs
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list a;
	unsigned int i;
	char *string;

	va_start(a, n);
	for (i = 0; i < n; i++)
	{
		string = va_arg(a, char*);
		if (string == NULL)
			printf("(nil)");
		else
			printf("%s", string);
		if (separator == NULL)
			continue;
		if (i < n - 1)
			printf("%s", separator);
	}
	printf("\n");
	va_end(a);
}
