//c program(s) to convert a given decimal number into its binary form and vice-versa.
#include<stdio.h>
void main()
{
	int n,base=1,val,d;
	int op,cont;
	printf("Tasks to do:\n1.decimal to binary\n2.Binary to decimal\n");
	
    do{
    	printf("choose an option:");
		scanf("%d",&op);		
    	switch(op)
    	{
    		case 1:val=0;
					printf("Enter decimal no.: ");
    			   scanf("%d",&n);
    			   while(n!=0)
    			   {
    			   	d=n%2;
    			   	val=val+d*base;
    			   	n=n/2;
    			   	base=base*10;
				   }
				   base=1;
				   printf("\n Eqvt. Binary : %d",val);
    			   break;
    		case 2:val=0;
					printf("Enter binary no.: ");
    			   scanf("%d",&n);
    			   while(n!=0)
    			   {
    			   	d=n%10;
    			   	val=val+d*base;
    			   	n=n/10;
    			   	base=base*2;
				   }
				   base=1;
				   printf("\n Eqvt. Decimal : %d",val); 
    			   break;
		
		 	default:printf("\nooopsss you chose wrong option,pls choose the correct one!!!!"); 	
		}
		printf("\nDo you want to continue,enter 0 for NO and 1 for YES : ");
		scanf("%d",&cont);	
	}while(cont==1);//&& op>1 && op<5
	
}
