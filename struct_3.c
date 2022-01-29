#include<stdio.h>
#include<conio.h>
#define max 2
struct student
{
	char branch[15];
	char name[25];
	int roll;
	int marks;
};
void main()
{
	struct student arr[max];
	int i;
	for(i=0;i<max;i++)
	{
		printf("\n DETAILS OF STUDENT '%d':",i+1);
		printf("\n Branch: ");
		fflush(stdin);
		gets(arr[i].branch);
		printf("\n Name: ");
		fflush(stdin);
		gets(arr[i].name);
		printf("\n Roll: ");
		scanf("%d",&arr[i].roll);
		printf("\n Marks: ");
		scanf("%d",&arr[i].marks);
		}
		for(i=0;i<max;i++)
	{
		printf("\n\n DETAILS OF STUDENT '%d':",i+1);
		printf("\n Branch: %s",arr[i].branch);
		
		printf("\n Name: %s",arr[i].name);
	
		printf("\n Roll: %d",arr[i].roll);
	
		printf("\n Marks: %d",arr[i].marks);
	
		}
}
