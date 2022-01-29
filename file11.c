#include<stdio.h>
#include<conio.h>
void main()
{
	FILE *fp;
	char name[10];
	int account;
	float money;
	fp=fopen("myfile5.txt","r");
	if(fp==NULL)
	{
		printf("\nCannot open file");
		exit(1);
	}
	printf("\nThe bank details are as follows:- \n");
	while(fscanf(fp,"%[^\n]%d\n%f",name,&account,&money)!=EOF)
	{
		printf("\nThe account holder name is: %s",name);
		printf("\nThe account no. is %d",account);
		printf("\nThe amount of money deposited is Rs.%f",money);
	}
	fclose(fp);
	
}
