#include<stdio.h>
#include<conio.h>
#include<string.h>
void main()
{
	FILE *fp;
	char name[30];
	fp=fopen("myfile3.txt","w");
	if(fp==NULL)
	{
		printf("\nCannot open file");
		exit(1);
	}
	printf("\nEnter the names(press enter only for ending): \n");
	do{
	gets(name);
	if(strlen(name)==0)
	break;
	fputs(name,fp);
	fputs("\n",fp);
}while(1);
fclose(fp);
}
