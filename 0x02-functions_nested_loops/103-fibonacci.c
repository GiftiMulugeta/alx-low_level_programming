#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0
 */
int main(void)
{
	int n1 = 0, n2 = 1, n, num, sum = 0;

	/*printf("%d%c%c%d%c%c", n1, c, ' ', n2, c, ' ');*/
	for (n = 0; n <= 34; n++)
	{
		num = n1 + n2;
		if ((num<=4000000)&&(num%2==0))
		{
			sum=sum+num;
	
		}
		n1 = n2;
		n2 = num;

	}
	printf("%d",sum);
	printf("\n");

	return (0);
}
