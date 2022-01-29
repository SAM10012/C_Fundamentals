#include<stdio.h>
#include<conio.h>
void main()
{
	FILE *fp;
	int count=0;
	fp=fopen("myfile1.txt","r");
	if(fp==NULL)
	{
		printf("\nCannot open file");
		exit(1);
	}
	
		while(fgetc(fp)!=EOF)
		count++;
		printf("\nThe no. of characters in the text file is %d",count);
	fclose(fp);
}
