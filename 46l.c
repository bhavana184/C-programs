/*c program to read and write a file using following combinations of functions:
a) fgetc( ) and fputc( )
b) fprintf( ) and fscanf( )
c) fgets( ) and fputs( )
d) fread( ) and fwrite( )*/

#include<stdio.h>
#include<stdlib.h>
int main()
{
	FILE *fs,*ft,*bs,*bt;
	struct emp
	{
		char name[20];
		int id;
		int salary;
	};
	struct emp e;
	fs=fopen("demo.txt","r");
	ft=fopen("demo1.txt","w");
	if(fs==NULL)
	{
		perror("can't open");
		fclose(ft);
		exit(1);
	}
	char ch;
	char str[10];
	while(1)
	{
		ch=fgetc(fs);//
		if(ch==EOF)
		exit(2);
		fputc(ch,ft);//
	}
	
	while((fgets(str,20,fs))!=NULL)//
	fputs(str,ft);//
	
	bs=fopen("binn.dat","rb");
	bt=fopen("binn1.dat","wb");
	if(bs==NULL)
	{
		perror("can't open");
		fclose(bt);
		exit(3);
	}
	
	while(fscanf(bs,"%s,%d,%d",&e.name,&e.id,&e.salary)!=EOF)//
	{
		fprintf(bt,"%s\n,%d\n,%d",e.name,e.id,e.salary);//
	}
	
	while(fread(&e,sizeof(e),1,bs)==1)//
	{
		fwrite(&e,sizeof(e),1,bt);//
	}
	fclose(fs);
	fclose(bs);
	return 0;
}

