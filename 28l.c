//c program to find whether a given number is prime or not.
#include<stdio.h>
#include<math.h>
void main()
{	
	int y,i;
	int flag=0;
	printf("Enter number :\n");
	printf("n : ");
	scanf("%d",&y);
	

	for(i=2;i<=y/2;i++){
			if(y%i==0){
			flag=1;
			break;	
			}
		}	
	
	if(flag==0 & y!=1)printf("%d is prime",y);
	else printf("%d is not  prime",y);
	
}
