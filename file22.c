#include<stdio.h>
#include<conio.h>
struct bank
{
	char name[30];
	int acc;
	float bal;
}Details;
void main()
{
	FILE *fp;
	
	fp=fopen("myfile12.txt","rb");
	if(fp==NULL)
	{
		printf("\nCannot open file");
		exit(1);
	}
	printf("##### BANK ACCOUNT DETAILS #####");
	while(fread(&Details,sizeof(Details),1,fp)==1)
	{
		printf("\nName is %s",Details.name);
		printf("\nAccount no. is %d",Details.acc);
		printf("\nBank Balance is %f",Details.bal);
	}
	fclose(fp);
}
