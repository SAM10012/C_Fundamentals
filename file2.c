#include<stdio.h>
#include<conio.h>
void main()
{
	FILE *fp;
	char string[45];
	fp=fopen("myfile2.txt","w");
	if(fp==NULL)
	{
		printf("\nCannot open file");
		exit(1);
	}
	printf("\nEnter a string: ");
	gets(string);
	fputs(string,fp);
	fputs("\n",fp);
	fclose(fp);
}
