#include<stdio.h>
#include<conio.h>
#include<string.h>
void main()
{
	FILE *fp;
	int count;
	char string[15];
	fp=fopen("myfile11.txt","wb");
	if(fp==NULL)
	{
		printf("\nCannot open file");
		exit(1);
	}
	printf("\nEnter a string: ");
	gets(string);
	count=fwrite(string,strlen(string)+1,1,fp);
	if(count==1)
	printf("\nData string successfully written to the binary file");
	else
	printf("\nData writing unsuccessful");
	fclose(fp);
}
