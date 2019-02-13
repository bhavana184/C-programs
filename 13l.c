//c program that takes a year as input and outputs whether it is leap year or not.
#include<stdio.h>
void main()
{
	int y;
	printf("enter an year : ");
	scanf("%d",&y);
	if(y%100==0)
	{
		if(y%400==0)printf("\n%d is a leap year",y);
		else printf("\n%d is not a leap year",y);
	}
	else if(y%4==0)printf("\n%d is a leap year",y);
		else printf("\n%d is not a leap year",y);
}
