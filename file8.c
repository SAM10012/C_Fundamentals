#include<stdio.h>
#include<conio.h>
void main()
{
	FILE *fp;
	int letter;
	fp=fopen("myfile1.txt","r");
	if(fp==NULL)
	{
		printf("\nCannot open file");
		exit(1);
	}
	do{
		letter=fgetc(fp);
		if(letter==EOF)
		break;
		putchar(letter);
	}while(1);
	fclose(fp);
}
