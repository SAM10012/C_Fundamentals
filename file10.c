#include<stdio.h>
#include<conio.h>
void main()
{
	FILE *fp;
	char string_len[100];
	fp=fopen("myfile3.txt","r");
	if(fp==NULL)
	{
		printf("\nCannot open file");
		exit(1);
	}
	printf("\nThe list of names is as follows:- \n");
	while(fgets(string_len,100,fp)!=NULL)
	printf("\n%s",string_len);
	fclose(fp);
}
