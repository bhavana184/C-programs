//c program that takes as input an alphabet and outputs whether it is a consonant or a vowel, use switch statement.
#include<stdio.h>
void main()
{
	char ch;
	printf("enter a character : ");
	scanf("%c",&ch);
	switch(ch)
	{
		case 'A':
		case 'E':
		case 'I':
		case 'O':
		case 'U':
		case 'a':
		case 'e':
		case 'i':
		case 'o':
		case 'u':printf("%c is a vowel",ch);
				break;
		default:printf("%c is a consonant",ch);
	}
}
