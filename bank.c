#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<string.h>
#define MAX 60
void main()
{
	FILE *fp;
	char name[MAX];
	int acc,ch;
	float balance,deposit,withdrawal;
	fp=fopen("bank.txt","w+");
	if(fp==NULL)
	{
		printf("\n Cannot open file");
		exit(1);
	}
	fclose(fp);
	printf("\n Hello Customer!");
	while(1)
	{
		printf("\n Press 1 to create an account \n Press 2 to deposit money \n Press 3 to withdraw money \n Press 4 to display your balance \n Press 0 to exit \n");
		printf("\n Enter your choice: ");
		scanf("%d",&ch);
		switch(ch)
		{
			case 1:
				fp=fopen("BANK.txt","w+");
				printf("\n Enter your name (press ENTER to end your name): ");
				fflush(stdin);
				gets(name);
				if(strlen(name)==0)
				break;
				printf("\n Enter your account no.: ");
				scanf("%d",&acc);
				printf("\n Enter your account balance: ");
				scanf("%f",&balance);
				fputs("\n Your name, account no. and account balance are as follows: ",fp);
				fprintf(fp,"%s\n%d\n%.2f\n",name,acc,balance);
				fclose(fp);
				break;
			case 2:
				fp=fopen("BANK.txt","w+");
				printf("\n Enter your name (press ENTER to end your name): ");
				fflush(stdin);
				gets(name);
				if(strlen(name)==0)
				break;
				printf("\n Enter your account no.: ");
				scanf("%d",&acc);
				fputs("\n Your name and account no.are as follows: ",fp);
				fprintf(fp,"%s\n%d\n",name,acc);
				printf("\n Enter the amount you want to deposit: ");
				scanf("%f",&deposit);
				while(fscanf(fp,"%[^\n]%d\n%f\n",name,&acc,&balance)!=EOF)
				{
					balance=balance+deposit;
					printf("\n Your current balance is %.2f ",balance);
				}
				fputs("\n Your updated name, account no. and account balance are as follows: ",fp);
				fprintf(fp,"%s\n%d\n%.2f\n",name,acc,balance);
				fclose(fp);
				break;
			case 3: 
				fp=fopen("BANK.txt","w+");
				printf("\n Enter your name (press ENTER to end your name): ");
				fflush(stdin);
				gets(name);
				if(strlen(name)==0)
				break;
				printf("\n Enter your account no.: ");
				scanf("%d",&acc);
				fputs("\n Your name and account no.are as follows: ",fp);
				fprintf(fp,"%s\n%d\n",name,acc);
				printf("\n Enter the amount you want to withdraw: ");
				scanf("%f",&withdrawal);
				while(fscanf(fp,"%[^\n]%d\n%f\n",name,&acc,&balance)!=EOF)
				{
					if(withdrawal<=balance)
					{
						balance=balance-withdrawal;
						printf("\n Your current balance is %.2f ",balance);
					}
					else
					{
						printf("\n Insufficient balance");
					}
			
				}
				fputs("\n Updated details: ",fp);
				fprintf(fp,"%s\n%d\n%.2f\n",name,acc,balance);
				fclose(fp);
				break;
			case 4:
				fp=fopen("bank.txt","w+");
				fputs("\n Your updated name, account no. and account balance are as follows: ",fp);
				while(fscanf(fp,"%[^\n]%d\n%f\n",name,&acc,&balance)!=EOF)
				{
				fprintf(fp,"%s\n%d\n%.2f\n",name,acc,balance);
				}
				fclose(fp);
				break;
			case 0:
				printf("\n THE END!");
				
				exit(0);
			default:
				printf("\n Please enter a valid choice...");
				break;
			
				
		}
	}
}
