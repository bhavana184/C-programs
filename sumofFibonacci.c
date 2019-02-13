//sum_of_fibonacci
#include<stdio.h>
void main()
{
	int n,a[50],i,s=0;
	printf("Enter no. of terms : ");
	scanf("%d",&n);
	a[0]=0;
	a[1]=1;
	for(i=2;i<=n-1;i++)
	{
		a[i]=a[i-1]+a[i-2];
		
	}
	for(i=0;i<=n-1;i++)
	s=s+a[i];
	printf("sum of series is : %d",s);
}
