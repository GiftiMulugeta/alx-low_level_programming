#include <stdio.h>
#include <stdlib.h>
/**
 * main - check the code
 * @argc: the character to print
 * @argv: the character to print
 * Return: Always 0.
 */
int main(int argc, char *argv[])
{
	int mul, i;

	if (argc == 3)
	{
		for (i = 1; i < argc; i++)
		{
			mul = atoi(argv[1]) * atoi(argv[2]);
		}
		printf("%d", mul);
	}
	else
	{
		printf("Error\n");
		return (1);
	}

	putchar('\n');
	return (0);
}
