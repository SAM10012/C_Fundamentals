#include<stdio.h>
#include<conio.h>
#include<string.h>
#define max 30
struct bank
{
	char name[max];
	int acc;
	float balance;
};
void main()
{
	struct bank CalBr;
	FILE *fp;
	fp=fopen("myfile12.txt","wb");
	if(fp==NULL)
	{
		printf("\nCannot open file");
		exit(1);
	}
	printf("\n##### ACCOUNT INFORMATION #####\n");
	do{
		printf("\nEnter name of the account holder(press enter to exit): ");
		fflush(stdin);
		gets(CalBr.name);
		if(strlen(CalBr.name)==0)
		break;
		printf("\nEnter the account no.: ");
		scanf("%d",&CalBr.acc);
		printf("\nEnter the bank balance: ");
		scanf("%f",&CalBr.balance);
		fwrite(&CalBr,sizeof(CalBr),1,fp);
	}while(1);
	fclose(fp);
}
