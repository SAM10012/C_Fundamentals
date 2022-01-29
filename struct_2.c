#include<stdio.h>
#include<conio.h>
#define max 3
struct record
{
	char name[20];
	int id;
	float salary;
	char designation[7];
};
void main()
{
	struct record arr[max];
	int i,flag;
	char str[15];
	for(i=0;i<max;i++)
	{
		printf("\n\nRECORD OF EMPLOYEE '%d': ",i);
		printf("\nName: ");
		fflush(stdin);
		gets(arr[i].name);
		printf("\nId: ");
		scanf("%d",&arr[i].id);
		printf("\nSalary: ");
		scanf("%f",&arr[i].salary);
		printf("\nDesignation: ");
		fflush(stdin);
		gets(arr[i].designation);
	}
	printf("\n\nFor details of salary of an employee, please enter the name: ");
	gets(str);
	for(i=0;i<max;i++)
	{
		flag=strcmp(arr[i].name,str);
		if(flag==0)
		{
			printf("\nThe salary of %s is Rs.%d",arr[i].name,(int)arr[i].salary);
		}
	}
}
