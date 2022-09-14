#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0
 */
int main(void)
{
	int n1=0, n2=1, n, num;
	char c=',';
	printf("%d%c%c%d%c%c",n1,c,' ',n2,c,' ');
	for (n=2; n<=50; n++)
	{
		num= n1+ n2;
		printf("%d",num); 
		printf("%c",c); 
		printf(" ");
		n1= n2;
		n2=num;
	}

	return (0);
}
