//Word size of the computer refers to the number of bytes that can be stored in a single memory location. Write a c program to find word size of the computer.
#include<stdio.h>
#include<conio.h>
int main()
{
 int a,x;
 //clrscr();
 x=sizeof(a);
 printf(" Size of integer : %d\n",sizeof(a));
 
 if(x==2)
 {
  printf("Word length of host machine is 16 bits");
 }
 else
 {
  printf("It is a 32 bit machine");
 }
 getch();
 return 0;
}
