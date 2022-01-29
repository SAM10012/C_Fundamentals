#include<stdio.h>
void main()
{
	FILE *fp;
	char letter;
	fp=fopen("myfile1.txt","w");
	if(fp==NULL)
	{
		printf("\nCannot open file\n");
		exit(1);
	}
	printf("Enter name(Press enter to end):\n");
	do{
	letter=getchar();
	if(letter=='\n')
	break;
	fputc(letter,fp);
}while(1);
fclose(fp);
	
}
