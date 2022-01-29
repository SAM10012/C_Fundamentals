#include<stdio.h>
#include<conio.h>
void main()
{
	FILE *fp;
	int value;
	fp=fopen("myfile9.txt","rb");
	if(fp==NULL)
	{
		printf("\nCannot open file");
		exit(1);
	}
	while(fread(&value,sizeof(value),1,fp)==1)
	{
		printf("\n%d",value);
	}
	fclose(fp);
}
