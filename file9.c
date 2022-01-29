#include<stdio.h>
#include<conio.h>
void main()
{
	FILE *fp;
	char string_len[45];
	fp=fopen("myfile2.txt","r");
	if(fp==NULL)
	{
		printf("\nCannot open file");
		exit(1);
	}
	fgets(string_len,45,fp);
	printf("\n%s",string_len);
	fclose(fp);
}
