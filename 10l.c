//c program that calculates simple interest given the rate of interest, principal amount and duration (years and months).
#include<stdio.h>

void main()
{
	float r,p,si;
	int t;
	printf("principal amount : ");
	scanf("%f",&p);
	printf("\nrate of interest : ");
	scanf("%f",&r);
	printf("\ntime : ");
	scanf("%d",&t);
	si=(p*r*t)/100;
	printf("\nsimple interest :%f ",si);
	
	
}
