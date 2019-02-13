//c program(s) to illustrate for various types of storage classes.
//static
#include<stdio.h>
void increment();
int main()
{
	increment();
	increment();
	increment();
	return 0;
}
void increment()
{
	static int i=1;
	printf("%d\n",i);
	i=i+1;}

