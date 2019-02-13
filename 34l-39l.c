//c program 34 to 39
#include<stdio.h>
#include<string.h>
void main()
{	

	char str1[10],str2[10],strcpy[10],rev[10],concat[30];
	int op,cont,len,comp;
	printf("Tasks to do:\n1.input a string and display the same as output.\n2.calculate length of a string.\n3.compare two strings.\n4.copy one string into another.\n5.reverse a given input string.\n6.concatenate a string into another string.\n");
	
    do{
    	printf("choose an option:");
		scanf("%d",&op);		
    	switch(op)
    	{
    		case 1:	printf("\nenter a string : ");
    				scanf("%s",&str1);
    				printf("\nentered string is %s ",str1);
			    	break;
    		case 2:printf("\nenter a string : ");
    				scanf("%s",&str1);
    				len=strlen(str1);
    				printf("length of string is %d",len);
    			   break;
			case 3:printf("\nenter 1st string : ");
    				scanf("%s",&str1);
    				printf("\nenter 2nd string : ");
    				scanf("%s",&str2);
    				comp=strcmp(str1,str2);
    				if(comp==0)printf("%s and %s are same",str1,str2);
    				else printf("%s and %s are not same",str1,str2);
    			   break;
			case 4:printf("\nenter a string : ");
    				scanf("%s",&str1);
    				strcpy(str2,str1);//str2=targetstring,str1=source string
    				printf("given string is %s and its copied string is %s",str1,str2);
    			   break;
    		case 5:printf("\nenter a string : ");
    				scanf("%s",&str1);
    				strrev(str1);//str2=targetstring,str1=source string
    				printf(" its reverse string is %s",str1);
    			   break;
    		case 6:printf("\nenter 1st string : ");
    				scanf("%s",&str1);
    				printf("\nenter 2nd string : ");
    				scanf("%s",&str2);
    				strcat(str2,str1);//concatted string is str2str1
    				printf("concat of both strings  is %s",str2);
    			   break;
		 	default:printf("\nooopsss you chose wrong option,pls choose the correct one!!!!"); 	
		}
		printf("\nDo you want to continue,enter 0 for NO and 1 for YES : ");
		scanf("%d",&cont);	
	}while(cont==1);//&& op>1 && op<5
	
}
