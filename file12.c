#include<stdio.h>
#include<conio.h>
void main()
{
	FILE *fp;
	int num1=123,num2=456,num3=789;
	int num4,num5,num6;
	fp=fopen("myfile6.txt","w");
	if(fp==NULL)
	{
		printf("\nCannot open file");
		exit(1);
	}
	fprintf(fp,"%3d%3d%3d",num1,num2,num3);
	fclose(fp);
	fp=fopen("myfile6.txt","r");
	if(fp==NULL)
	{
		printf("\nCannot open file");
		exit(1);
	}
	fscanf(fp,"%3d%3d%3d",&num4,&num5,&num6);
	printf("\nThe no.s as read from the file are num4=%3d, num5=%3d, num6=%3d",num4,num5,num6);
	rewind(fp);
	fscanf(fp,"%4d%3d%2d",&num4,&num5,&num6);
	printf("\nThe no.s as read from the file are num4=%4d, num5=%3d, num6=%2d",num4,num5,num6);
	fclose(fp);
}
