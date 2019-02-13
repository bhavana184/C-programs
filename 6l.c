//c program illustrating the garbage values of uninitialized variable.
#include<stdio.h>
void main()
{
	int i,a=2,s;
	float p;
	printf("value of i is %d\nand\nvalue of a is %d\n",i,a);
	s= i+a;
	printf("sum of %d and %d is %d\n",i,a,s);
	printf("value of p is %f",p);
}
