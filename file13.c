#include<stdio.h>
#include<conio.h>
void main()
{
	FILE *fs,*ft;
	int letter;
	char source[40],target[40];
	printf("\nEnter the file name along with its path: ");
	gets(source);
	fs=fopen(source,"r");
	if(fs==NULL)
	{
		printf("\nCannot open file");
		exit(1);
	}
	printf("\nEnter the target file along with its path: ");
	gets(target);
	ft=fopen(target,"w");
	if(ft==NULL)
	{
		printf("\nCannot open file");
		exit(1);
	}
	do{
		letter=fgetc(fs);
		if(letter==EOF)
		break;
		fputc(letter,ft);
	}while(1);
	printf("\nFile successfully copied from myfile7.txt to myfile8.txt...");
    fclose(fs);
    fclose(ft);
}
