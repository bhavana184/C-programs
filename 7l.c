/*c Write program(s) to perform following conversions (and vice-versa)
a) Temperature in Celsius to Fahrenheit
b) Height in Centimeters to Feet*/
#include<stdio.h>
void main()
{
	float temp,ht;
	int op,cont;
	printf("Tasks to do:\n1.1.Temperature in Celsius to Fahrenheit\n2.Temperature in Fahrenheit to celsius\n3.Height in Centimeters to Feet\n4.Height in Feet to Centimeters\n");
	
    do{
    	printf("choose an option:");
		scanf("%d",&op);		
    	switch(op)
    	{
    		case 1:printf("assume given temperature is in celsius\n");
    			   printf("Enter temperature: ");
    			   scanf("%f",&temp);
    			   printf("\n celsius = %f",temp);
    			   temp = (temp * 9)/5 +32;
    			   printf("\n fahrenheit = %f",temp);
    			   break;
    		case 2:printf("assume given temperature is in fahrenheit\n");
    			   printf("Enter temperature: ");
    			   scanf("%f",&temp);
    			   printf("\n fahrenheit = %f",temp);
    			   temp = (temp-32)*5/9;
    			   printf("\n celsius = %f",temp);
    			   break;
			case 3:printf("assume given height is in centimeters\n");
    			   printf("Enter height: ");
    			   scanf("%f",&ht);
    			   printf("\n centimeter = %f",ht);
    			   ht = ht/30.48;
    			   printf("\n feet = %f",ht);
    			   break;
			case 4:printf("assume given height is in feet\n");
    			   printf("Enter height: ");
    			   scanf("%f",&ht);
    			   printf("\n feet = %f",ht);
    			   ht = ht*30.48;
    			   printf("\n centimeter = %f",ht);
    			   break;
		 	default:printf("\nooopsss you chose wrong option,pls choose the correct one!!!!"); 	
		}
		printf("\nDo you want to continue,enter 0 for NO and 1 for YES : ");
		scanf("%d",&cont);	
	}while(cont==1);//&& op>1 && op<5
	
}
