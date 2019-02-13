//c program to add, subtract, divide and multiply two given numbers and return the corresponding outputs. What will happen if denominator in division is zero?
#include<stdio.h>
#include<conio.h>
void main()
{
	int cont,op,a,b,s=0;
	printf("Tasks to do:\n1.add\n2.subtract\n3.divide\n4.multiply");

	do{
		printf("\nchoose an option : ");
		scanf("%d",&op);
		switch(op)
		{
			case 1:printf("\na : ");
				   scanf("%d",&a);
				   printf("\nb: ");
				   scanf("%d",&b);
				   s=a+b;
				   printf("%d + %d = %d",a,b,s);
				   break;
			case 2:printf("\na : ");
				   scanf("%d",&a);
				   printf("\nb: ");
				   scanf("%d",&b);
				   s=a-b;
				   printf("%d - %d = %d",a,b,s);
				   break;
			case 3:printf("\na : ");
				   scanf("%d",&a);
				   printf("\nb: ");
				   scanf("%d",&b);
				   s=a/b;
				   printf("%d / %d = %d",a,b,s);
				   break;
			case 4:printf("\na : ");
				   scanf("%d",&a);
				   printf("\nb: ");
				   scanf("%d",&b);
				   s=a*b;
				   printf("%d * %d = %d",a,b,s);
				   break;
			default:printf("\noops incorrect option,choose other option!!");
		}
		printf("\nDo you want to continue,enter 0 for NO and 1 for YES : ");
		scanf("%d",&cont);
	}while(cont==1);
	getch();
}
