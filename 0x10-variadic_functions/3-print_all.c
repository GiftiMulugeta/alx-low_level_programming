#include <stdio.h>
#include "variadic_functions.h"
#include <stdarg.h>
/**
 * print_all - return sum of arguments
 * @format: first paramet
 * @..: other parametrs
 */
void print_all(const char * const format, ...)
{
	va_list a;
	int i = 0;
	char *string;

	va_start(a, format);
	while (format == NULL)
		return;
	while (format[i])
	{
		switch (format[i])
		{
			case 'c':
				printf("%c", (char) va_arg(a, int));
				break;
			case 'i':
				printf("%d", va_arg(a, int));
				break;
			case 'f':
				printf("%f", (float) va_arg(a, double));
				break;
			case 's':
				string = va_arg(a, char*);
				if (string != NULL)
				{
					printf("%s", string);
					break;
				}
				else
					printf("(nil)");
				break;
		}
		if ((format[i] == 'c' || format[i] == 'i' ||
		format[i] == 'f' || format[i] == 's') && format[(i + 1)] != '\0')
			printf(", ");
		i++;
	}
	printf("\n");
	va_end(a);
}
