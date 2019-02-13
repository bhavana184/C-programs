//c program to find greatest of the three input integers
#include<stdio.h>
void main()
{
	int a,b,c,l;
	printf("a : ");
	scanf("%d",&a);
	printf("\nb : ");
	scanf("%d",&b);
	printf("\nc : ");
	scanf("%d",&c);
	l=(a>b?a:b);
	l=(l>c?l:c);
	printf("\ngreatest of %d , %d and %d is %d",a,b,c,l);
}
