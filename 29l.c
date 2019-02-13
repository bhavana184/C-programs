//c program to print the Fibonacci series
#include<stdio.h>
int main()
{
	int i,n,t0=0,t1=1,nextterm;
	printf("enter no. of terms in series : ");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		printf("%d ",t0);
		nextterm=t0+t1;
		t0=t1;
		t1=nextterm;
	}	
		
	return 0;
}
