#include<stdio.h>
#include<conio.h>
void main()
{
	FILE *fp;
	int char_count,blank_count,line_count;
	int letter;
	fp=fopen("myfile3.txt","r");
	if(fp==NULL)
	{
		printf("\nCannot open file");
		exit(1);
	}
	do{
		letter=fgetc(fp);
		if(letter==EOF)
		break;
		char_count++;
		if(letter==' ')
		blank_count++;
		if(letter=='\n')
		line_count++;
	}while(1);
	printf("\nThe no. of characters in the text file is %d",char_count);
	printf("\nThe no. of blanks in the text file is %d",blank_count);
	printf("\nThe no. of lines in the text file is %d",line_count);
	fclose(fp);
}
