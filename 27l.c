//c program to find sum of a geometric series, assume input data from user.
#include<stdio.h>
#include<math.h>
void main()
{
int n ,a,t,t1,r,s;
char ch;
printf("enter first term : ");
scanf("%d",&a);
printf("enter second term : ");
scanf("%d",&t);	
n=2;//n=no.of terms
ch='y';
while(ch=='y')
{
	n=n+1;
printf("enter next term : ");
scanf("%d",&t1);
printf("Do you want to enter more terms ? y/n : ");
scanf("%d",&t1);
scanf("%c",&ch);
}
r=t/a;
s=a*(pow(r,n)-1)/(r-1);
printf("sum of geometric series is : %d",s);
}
