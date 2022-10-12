#include <stdio.h>
#include "3-calc.h"
#include <stdlib.h>



/**
 * main - check the code
 * @argc: character to print
 * @argv: character to print
 * Return: Always 0.
 */
int main(int argc, char *argv[])
{
	int (*op_func)(int, int);

	if (argc < 4)
	{
		printf("Error\n");
		exit(98);
	}
	op_func = get_op_func(argv[2]);
	if (op_func == NULL)
	{
		printf("Error\n");
		exit(98);
	}
	printf("%d\n", op_func(atoi(argv[1]), atoi(argv[3])));
	return (0);
}
