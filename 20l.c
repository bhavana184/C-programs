//c program to print table (first ten multiples) of a given number.
#include<stdio.h>

void main()
{
	int n,i,m=1;
	printf("enter a no. : ");
	scanf("%d",&n);
	printf("\nTable of %d : \n",n);
	for(i=1;i<=10;i++)
	{
		m=n*i;
		printf("\n%d * %d = %d",n,i,m);
	}
}
