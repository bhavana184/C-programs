//c programs to illustrate pointer arithmetic for different types of pointers.
#include<stdio.h>
void main()
{
	int b;
	int a=5,*x,a4=6,*p;//declaring the pointer for integer variable
    char a1='z',*y,*q;//declaring the pointer for char variable
    float a2=2.3,*z;
    double a3=3.3,*w;
    x=&a;y=&a1;z=&a2,w=&a3,p=&a4,q=&a1;
    
	
	printf("int x= %d\n",x);//printing the actual value of x
	printf("char y= %d\n",y);
	printf("float z= %d\n",z);
	printf("double w= %d\n",w);
	printf("int p=%d\n",p);
	printf("char q=%d\n",q);
	
	printf("tasks to do:\n");
	printf("1.incrementing a pointer \n");
	printf("2.decrementing a pointer \n");
	printf("3.addition of a pointer and number \n");
	printf("4.subtraction of a pointer and number \n");
	printf("5.differencing between two pointers \n");
	printf("6.comparison between two pointers \n");
	printf("choose option ( 1,2,3,4,,5 or 6) :: ");
	scanf("%d",&b);
	printf("\n");
	
	switch(b){
		case 1: x++;
    			printf("x++= %d\n",x);//the value gets incremented by 4 bytes because the size of one int variable is 4 bytes
   				y++;
    			printf("y++= %d\n",y);
    			z++;
    			printf("z++= %d\n",z);
    			w++;
    			printf("w++= %d\n",w);
				break;
		case 2: x--;
    			printf("x--= %d\n",x);//the value gets decremented by 4 bytes and changes back to the original value
    			y--;
    			printf("y--= %d\n",y);
    			z--;
    			printf("z--= %d\n",z);
    			w--;
    			printf("w--= %d\n",w);
				break;
		case 3: x=x+3;
    			printf("x+3= %d\n",x);//value is incremented by 3 i.e size of datatype* 3 is added
    			y=y+3;
    			printf("y+3= %d\n",y);
    			z=z+3;
    			printf("z+3= %d\n",z);
    			w=w+3;
    			printf("w+3= %d\n",w);
				break;
		case 4: x=x-3;
    			printf("x-3= %d\n",x);//value is decremented by 3
    			y=y-3;
    			printf("y-3= %d\n",y);
    			z=z-3;
    			printf("z-3= %d\n",z);
    			w=w-3;
    			printf("w-3= %d\n",w);
				break;
		case 5: printf("x-p=%d\n",x-p);
				printf("*x-*p=%d\n",*x-*p);
				break;
		case 6: 
				if(x==p)printf("x and p point to the same location\n") ;
				else if(x!=p)printf("x and p do not point to the same location\n") ;
				if(y==q)printf("y and q point to the same location\n") ;
				else if(y!=q)printf("y and q do not point to the same location\n") ;
				break;
		default: printf("option chosen is not correct");			
	}
}

