#include "main.h"
#include <stdio.h>

/**
 * main -  check the code
 *
 * Return: Always 0
 */

int main(void)
{
	int r;

	r = is_palindrome("leel");
	printf("%d\n", r);
	r = is_palindrome("reder");
	printf("%d\n", r);
	r = is_palindrome("test");
	printf("%d\n", r);
	r = is_palindrome("step on no pes");
	printf("%d\n", r);
	return (0);
}
