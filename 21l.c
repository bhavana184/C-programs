//c program to find factorial of a given number
#include<stdio.h>

void main()
{
	int n,i,m=1;
	printf("enter a no. : ");
	scanf("%d",&n);
	
	for(i=n;i>=1;i--)
	{
		m=m*i;
	}
	printf("factorial of %d is %d",n,m);
}
