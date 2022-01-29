#include<stdio.h>
#include<conio.h>
void main()
{
	FILE *fp;
	char name[20];
	int acc;
	float money;
	fp=fopen("myfile5.txt","w");
	if(fp==NULL)
	{
		printf("\nCannot open file");
		exit(1);
	}

	do{
		printf("\nEnter the name of the account holder(press enter to exit): ");
		fflush(stdin);
		gets(name);
		
		if(strlen(name)==0)
		break;
		printf("\n Enter the account no.(press 0 to exit): ");
		scanf("%d",&acc);
		printf("\n Enter the money amount: ");
		scanf("%f",&money);
		fprintf(fp,"\nThe money amount of %s with account no. %d is %f",name,acc,money);
	}while(1);
		fclose(fp);
	
}
