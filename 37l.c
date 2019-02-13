#include<stdio.h>
#include<string.h>
int main()
{	char str1[10],str2[10];
	/*char source[]="Hello";char target[10];
	strcpy(target,source);
	printf("\n source string= %s",source);
	printf("\n target string found by copying source = %s",target);*/
	printf("\nenter a string : ");
    				scanf("%s",&str1);
    				strcpy(str2,str1);//str2=targetstring,str1=source string
    				printf("given string is %s and its copied string is %s",str1,str2);
	return 0;
}

