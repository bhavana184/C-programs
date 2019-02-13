//c program to swap two integers without using a third variable.
#include<stdio.h>
void main()
{
	int a,b;
	printf("enter two no.s to be swapped: ");
	scanf("%d %d",&a,&b);
	printf("Before swap,\n a=%d and b=%d",a,b);
	a=a+b;
	b=a-b;
	a=a-b;
	printf("\nAfter swap,\n a=%d and b=%d",a,b);
}
