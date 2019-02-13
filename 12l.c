//c program that takes an integer input and outputs whether it is even or not.
#include<stdio.h>
void main()
{
	int a;
	printf("enter an integer : ");
	scanf("%d",&a);
	if(a%2==0)printf("\n%d is even",a);
	else printf("\n%d is odd",a);
}
