#include<stdio.h>
#include<conio.h>
void main()
{
	FILE *fp;
	char letter;
	fp=fopen("myfile1.txt","w");
	if(fp==NULL)
	{
		printf("\nCannot open file");
		exit(1);
	}
	printf("\nEnter name(press enter to end string): ");
	do{ letter=getchar(); 
	if(letter=='\n')
	break;
	fputc(letter,fp);
	}while(1);
	fclose(fp);
}
