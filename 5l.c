//c program to swap two integers with using a third variable.
#include<stdio.h>

void main()
{
	int a,b,temp;
	printf("enter two no.s to be swapped: ");
	scanf("%d %d",&a,&b);
	printf("before swap,\n a=%d and b=%d",a,b);
	temp = a;
	a=b;
	b=temp;
	printf("\nafter swap,\n a=%d and b=%d",a,b);
}
