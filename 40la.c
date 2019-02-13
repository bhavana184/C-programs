//c program(s) to illustrate for various types of storage classes.
//auto
#include<stdio.h>
int main()
{
	auto int i=1;
	{
		auto int i=2;
		{
			auto int i=3;
			printf("i= %d\n",i);
		}
		printf("i= %d\n",i);
	}
	printf("i= %d\n",i);
	return 0;
}

