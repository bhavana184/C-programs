//Illustrate with a c program where goto statement can be used.
#include<stdio.h>

void main()
{
	int i,j,k;
	for(i=1;i<=2;i++)
	{
		for(j=1;j<=2;j++)
		{
			for(k=1;k<=2;k++)
			{
				if(i==2&&j==2&&k==2)
				goto out;
				else 
				{printf("%d %d %d",i,j,k);
				printf("\n");
				}
				
			}
		}
	}
	out:printf("\nout of the loop at last!!");
	
}
