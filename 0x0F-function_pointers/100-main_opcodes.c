#include <stdio.h>
#include <stdlib.h>

/**
 * main - check the code
 * @argc: character to print
 * @argv: character to print
 * Return: Always 0.
 */
int main(int argc, char *argv[])
{
	unsigned char *func_ptr;
	int bytes, i;

	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}
	bytes = atoi(argv[1]);
	if (bytes < 0)
	{
		printf("Error\n");
		exit(2);
	}
	func_ptr = (unsigned char *)main;

	i = 0;
	if (bytes > 0)
	{
		while (i < (bytes - 1))
			printf("%02hhx ", func_ptr[i++]);
		printf("%hhx\n", func_ptr[i]);
	}
	return (0);
}
