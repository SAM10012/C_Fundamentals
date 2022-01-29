#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<string.h>
#define MAX 60
float balance;
void main()
{
	FILE *fa;
	char name[MAX];
	int id,ch;
	float deposit,withdrawal;
	fa=fopen("bank.txt","w+");
	if(fa==NULL)
	{
		printf("\n Cannot open file");
		exit(1);
	}
	fclose(fa);
	printf("\n Hello Customer!");
	printf("\n Please make sure that you create an account first! \n");
	while(1)
	{
		printf("\n Press 1 to create an account \n Press 2 to deposit money \n Press 3 to withdraw money \n Press 4 to display your balance \n Press 0 to exit \n");
		printf("\n Enter your choice: ");
		scanf("%d",&ch);
		switch(ch)
		{
			case 1:
				fa=fopen("bank.txt","r+");
				printf("\n Enter your name (press ENTER to end your name): ");
				fflush(stdin);
				gets(name);
				if(strlen(name)==0)
				break;
				printf("\n Enter your id no.: ");
				scanf("%d",&id);
				printf("\n Enter your account balance: ");
				scanf("%f",&balance);
				fputs("\n Your name, id no. and account balance are as follows: ",fa);
				fprintf(fa,"%s\n%d\n%.2f\n",name,id,balance);
				fclose(fa);
				break;
			case 2:
				fa=fopen("bank.txt","r+");
				printf("\n Enter the amount you want to deposit: ");
				scanf("%f",&deposit);
				while(fscanf(fa,"%[^\n]%d\n%f\n",name,&id,&balance)!=EOF)
				{
					balance=balance+deposit;
					printf("\n Your current balance is Rs.%.2f \n",balance);
					break;
				}
				
				fputs("\n Your name, id no. and account balance are as follows: ",fa);
				fprintf(fa,"%s\n%d\n%.2f\n",name,id,balance);
				fclose(fa);
				break;
			case 3: 
				fa=fopen("bank.txt","r+");
				
				printf("\n Enter the amount you want to withdraw: ");
				scanf("%f",&withdrawal);
				while(fscanf(fa,"%[^\n]%d\n%f\n",name,&id,&balance)!=EOF)
				{
					if(withdrawal<=balance)
					{
						balance=balance-withdrawal;
						printf("\n Your current balance is Rs.%.2f \n",balance);
					}
					else
					{
						printf("\n Insufficient balance \n");
					}
				break;
				}
				fputs("\n Your name, id no. and account balance are as follows: ",fa);
				fprintf(fa,"%s\n%d\n%.2f\n",name,id,balance);
				fclose(fa);
				break;
			case 4:
				fa=fopen("bank.txt","r");
				printf("\n Your updated name, account no. and account balance are as follows: ");
				while(fscanf(fa,"%[^\n]%d\n%f\n",name,&id,&balance)!=EOF)
				{
				printf("\n%s\n%d\n%.2f\n",name,id,balance);
				break;
				}
				fclose(fa);
				break;
			case 0:
				printf("\n THE END!");
				fa=fopen("Bank.txt","w");
				
				
				
				fputs("\n Your updated name, id no., DOB and account balance are as follows: ",fa);
				fprintf(fa,"\n %s\n %d\n %s\n %.2f\n",name,id,dob,balance);
				
				fclose(fa);
				exit(0);
				break;
			default:
				printf("\n Please enter a valid choice...");
				break;
			
				
		}
	}
}
