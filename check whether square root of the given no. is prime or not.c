//check whether sqrt of the no. is prime or not
#include<stdio.h>
//check whether square root of the given no. is prime or not
#include<math.h>
int main()
{
	int y,i,n;
	//float n;
	int flag=0;
	printf("Enter number :\n");
	printf("n : ");
	scanf("%d",&y);
	n=sqrt(y);
	printf("square root of given no.  is :",n);

	for(i=2;i<=n/2;i++){
			if(n%i==0){
			flag=1;
			break;
			}
		}

	if(flag==0 & n!=1)printf("%d is prime",n);
	else printf("%d is not  prime",n);

		getch();
		return 0;
}
