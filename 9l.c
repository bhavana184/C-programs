//A n digit number is input by the user, write a c program that calculates the sum of all the digits of the number.
#include<stdio.h>
void main()
{
	int n,s=0,d,temp;
	printf("enter a no. : ");
	scanf("%d",&n);
	temp=n;
	while(temp!=0)
	{
		d=temp%10;
		s=s+d;
		temp=temp/10;
	}
	printf("\nsum of the digits of the %d is %d",n,s);
}
