//c program(s) to illustrate for various types of storage classes.
//extern
#include<stdio.h>
int i;
void increment();
int main()
{
	printf("%d\n",i);
	increment();
	increment();
	return 0;
}
void increment()
{
	i=i+1;
	printf("%d\n",i);
	
}

