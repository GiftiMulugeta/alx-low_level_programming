#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0
 */
int main(void)
{
	int n;
	int sum = 0;

	for (n = 0; n < 1024; n++)
	{
		if ((n % 3 == 0) || (n % 5 == 0))
		{
			sum = sum + n;
		}
	}
	printf("%d", sum);
	printf("\n");
	return (0);
}
