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
	int i, j, a, c = 0;
	int cent[5] = {25, 10, 5, 2, 1};

	if (argc != 2)
	{
		printf("Error");
		putchar('\n');
		return (1);
	}
	a = atoi(argv[1]);
	if (a <= 0)
	{
		putchar('0');
		putchar('\n');
	}
	else
	{
		for (i = 0; i < 5; i++)
		{
			j = a / cent[i];
			a -= j * cent[i];
			c = c + j;
		}
	}
	printf("%d", c);
	putchar('\n');
	return (0);
}
