#include<stdio.h>
#include<conio.h>
void main()
{
	FILE *fp;
	int acc;
	float money;
	fp=fopen("myfile4.txt","w");
	if(fp==NULL)
	{
		printf("\nCannot open file");
		exit(1);
	}

	do{
		printf("\n Enter the account no.(press 0 to exit): ");
		scanf("%d",&acc);
		if(acc==0)
		break;
		printf("\n Enter the money amount: ");
		scanf("%f",&money);
		fprintf(fp,"\nThe money amount of account no. %d is %f",acc,money);
	}while(1);
		fclose(fp);
	
}
