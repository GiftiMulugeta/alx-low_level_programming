#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0
 */
int main(void)
{
	long int n1 = 1, n2 = 2, n, num;

	char c = ',';

	printf("%ld%c%c%ld%c%c", n1, c, ' ', n2, c, ' ');
	for (n = 3; n <= 98; n++)
	{
		num = n1 + n2;
		printf("%ld", num);
		if (n != 50)
		{
			printf("%c", c);
			printf(" ");
		}
		n1 = n2;
		n2 = num;
	}
	printf("\n");

	return (0);
}
