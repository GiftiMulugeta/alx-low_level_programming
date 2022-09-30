#include <stdio.h>

/**
 * main - check the code
 * @argc: the character to print
 * @argv: the character to print
 * Return: Always 0.
 */
int main(int argc, char *argv[])
{
	if (argv[0])
		printf("%d", argc - 1);
	putchar('\n');
	return (0);
}
