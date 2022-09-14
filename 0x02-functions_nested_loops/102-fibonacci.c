#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0
 */
int main(void)
{
	int n1=1, n2=2, n, num;
	char c=',';
	printf("%d%c%c%d%c%c",n1,c,' ',n2,c,' ');
	for (n=3; n<50; n++)
	{
		num= n1+ n2;
	        printf("%d",num); 
		if (num != -811192543)
		{
			printf("%c",c); 
			printf(" ");
		}
		n1= n2;
		n2=num;
	}
	printf("\n");

	return (0);
}
