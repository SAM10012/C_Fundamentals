#include<stdio.h>
#include<conio.h>
void main()
{
	FILE *fp;
	char str[28];
	fp=fopen("myfile11.txt","rb");
	if(fp==NULL)
	{
		printf("\nCannot open file");
		exit(1);
	}
	fread(str,sizeof(str),1,fp);
	printf("\n%s",str);
	fclose(fp);
}
