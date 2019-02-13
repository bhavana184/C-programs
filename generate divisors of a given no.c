//generate divisors of a given no.
#include<stdio.h>
#include<math.h>
int main(){
	int n,i,div;
	printf("enter the number: ");
	scanf("%d",&n);
	printf("divisors of the no. are:\n");
	for(i=1;i<=n;i++){
		if(n%i==0)
		{
			div=i;
		}
			printf(" %d",div);
	}

	getch();
	return 0;
}
