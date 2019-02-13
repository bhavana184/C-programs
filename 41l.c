//c program that calculates area of a circle using PI as macro.
#include<stdio.h>
# define PI 3.14
int main()
{
	int r;
	printf("enter radius:");
	scanf("%d",&r);
	double area;
	area=PI*r*r;
	printf("Area is :%lf",area);
	return 0;
}

