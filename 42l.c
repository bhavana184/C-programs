//Illustrate pointer to structure using a c program.
#include<stdio.h>
struct emp
{
	char name[10];
	int id;
	int salary;
};
int main()
{
	struct emp e={"surabhi",47,1000.0};	
	struct emp *ep;
	ep= &e;
	printf("name of the employee is :%s\n",ep->name);
	printf("id is :%d\n",ep->id);
	printf("salary is :%d",ep->salary);
	return 0;
}

