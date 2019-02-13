//WAP to input a no. & print its digits in words.
#include<stdio.h>

void main()
{
	int n,d,nd,i;//n is a no.

//	printf("no. of digit in you no.(nd) : ");
//  scanf("%d",&nd);
	printf("enter a no.(n) : ");
	scanf("%d",&n);

	while(n>0)
	{
		d=n%10;
		n=n/10;
		switch(d)
		{
			case 0 : printf("Zero ");
					 break;
			case 1 : printf("One ");
					 break;
			case 2 : printf("Two ");
					 break;
			case 3 : printf("Three ");
					 break;
			case 4 : printf("Four ");
					 break;
			case 5 : printf("Five ");
					 break;
			case 6 : printf("Six ");
					 break;
			case 7 : printf("Seven ");
					 break;
			case 8 : printf("Eight ");
					 break;
			case 9 : printf("Nine ");
					 break;
			}
	}
	getch();
}
