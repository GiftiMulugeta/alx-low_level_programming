#include <stdio.h>

/**
 * main - check the code
 * @argc: the character to print
 * @argv: the character to print
 * Return: Always 0.
 */
int main(int argc, char *argv[])
{
	int i;

	if (argc >= 1)
	{
		for (i = 0; i < argc; i++)
			printf("%s", argv[i]);
	}
	putchar('\n');
	return (0);
}
