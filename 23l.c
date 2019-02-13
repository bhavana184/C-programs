//c program to find reverse of a given number.
#include<stdio.h>
void main()
{
	int n,d,rev=0,temp;
	printf("enter a no. : ");
	scanf("%d",&n);
	temp=n;
	while(temp!=0)
	{
		d=temp%10;
		rev=rev*10+d;
		temp=temp/10;
	}
	
	printf("\nReverse of %d is %d",n,rev);
	
}
