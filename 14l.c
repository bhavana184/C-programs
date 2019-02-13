// c program that takes coefficients of a quadratic equation as input and outputs the roots of the quadratic equation.
#include<stdio.h>
#include<math.h>
void main()
{	
	int a,b,c,d=0;float x1=0,x2=0,realPart,imaginaryPart;
	printf("a : ");
	scanf("%d",&a);
	printf("\nb : ");
	scanf("%d",&b);
	printf("\nc : ");
	scanf("%d",&c);
	//y=sqrt(b);printf("%d",y);
	d=b*b-4*a*c;
	if(d==0)
	{
		printf("the roots are real and equal\n");
		x1=(-b+sqrt(d))/(2*a);
		x2=(-b-sqrt(d))/(2*a);	
		printf("root1 is %f and root2 is %f",x1,x2);
	}
	else if(d>0)
	{
		printf("the roots are real and unequal\n");
		x1=(-b+sqrt(d))/(2*a);
		x2=(-b-sqrt(d))/(2*a);
		printf("root1 is %f and root2 is %f",x1,x2);
	}
	else if(d<0)
	{
		printf("the roots are imaginary\n");
		/*x1=(-b+sqrt(d))/2*a;x2=(-b-sqrt(d))/2*a;
		printf(" root1 is %f and root2 is %f",x1,x2);*/
		realPart = -b/(2*a);
        imaginaryPart = sqrt(-d)/(2*a);
        printf("root1 = %f+%fi and root2 = %f-%fi", realPart, imaginaryPart, realPart, imaginaryPart);
		
	}
}
