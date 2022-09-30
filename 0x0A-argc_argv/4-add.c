#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
/**
 * main - check the code
 * @argc: the character to print
 * @argv: the character to print
 * Return: Always 0.
 */
int main(int argc, char *argv[])
{
	int sum = 0, i, j;

	for (i = 1; i < argc; i++)
	{
		for (j = 0; argv[i][j] != '\0'; j++)
		{
			if (!isdigit(argv[i][j]))
			{
				printf("Error");
				putchar('\n');
				return (1);
			}
		}
		sum = sum + atoi(argv[i]);
	}
	printf("%d", sum);
	putchar('\n');
	return (sum);
}
