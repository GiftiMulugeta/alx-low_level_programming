#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0
 */
int main(void)
{
	int n1 = 1, n2 = 2, n, num, sum = 0;

	char c = ',';

	printf("%d%c%c%d%c%c", n1, c, ' ', n2, c, ' ');
	for (n = 3; n <= 50; n++)
	{
		num = n1 + n2;
		/*printf("%ld", num);
		if (n != 50)
		{
			printf("%c", c);
			printf(" ");
		}*/
		n1 = n2;
		n2 = num;
		if (num< 4000000)
		{
		
			if (n%2==0)
			{
				sum=sum+n;
			}
		}

	}
	printf("%d",sum);
	printf("\n");

	return (0);
}
