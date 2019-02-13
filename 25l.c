//c program to find H.C.F. of a given number.
#include<stdio.h>
void main()
{
int a,b,hcf=1,i;
printf("enter two no.s : ");
scanf("%d %d",&a,&b);

for(i=1;i<=a && i<=b ;i++)
{
	if(a%i==0 && b%i==0)
	hcf = i;
}
	
printf("hcf of %d and %d is %d",a,b,hcf);

	
}

