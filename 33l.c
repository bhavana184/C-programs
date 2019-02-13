//c program to find size of various types of pointers (int, float, char)? What are the factors on which size depends?
#include <stdio.h>

void main()
{
	printf("\nsize of integer variable: %d",sizeof(int));
	printf("\nsize of character variable: %d",sizeof(char));
	printf("\nsize of float variable: %d",sizeof(float));
	printf("\nsize of double variable: %d",sizeof(double));
	printf("\nsize of long integer variable: %d",sizeof(long int));
	printf("\n");
    printf("\nsize of char pointer: %d"     ,sizeof(char*));
    printf("\nsize of int pointer: %d"      ,sizeof(int*));
    printf("\nsize of float pointer: %d"    ,sizeof(float*));
    printf("\nsize of long int pointer: %d" ,sizeof(long int*));
    printf("\nsize of double pointer: %d\n" ,sizeof(double*));
    printf("\n");
    printf("~~~ output for the size of pointer variables depends on the system architecture, but each type of pointer will take same memory space ~~~");
    
}


