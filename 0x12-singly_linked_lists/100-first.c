#include <stdio.h>
#include "lists.h"

int prints(void) __attribute__((constructor));
/**
 * prints - print an argument
 *
 * Return: Always 0.
 */
int prints(void)
{
	printf("You're beat! and yet, you must allow,\n");
	printf("I bore my house upon my back!\n");
	return(0);
}
