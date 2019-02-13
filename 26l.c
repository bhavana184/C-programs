//c program to find sum of following series:1+ 1/2 + 1/3 + ….. +1/n
#include<stdio.h>
void main()
{
	int n,i;
	float s=0.0f;
	printf("enter n :");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	    s=s + ((float)1/(float)i);
	printf("sum of the series is : %f ",s);
}
