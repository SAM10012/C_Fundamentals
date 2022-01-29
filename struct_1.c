#include<stdio.h>
#include<conio.h>
#define max 3
struct student
{
	int roll;
	char name[15];
	char dept[5];
	char course[15];
	int year;
};
void main()
{
	struct student arr[max];
	int i,yr;
	for(i=0;i<max;i++)
	{
		printf("\n STUDENT '%d':\n",i);
		printf("\nRoll: ");
		scanf("%d",&arr[i].roll);
		printf("\nName: ");
		fflush(stdin);
		gets(arr[i].name);
		printf("\nDept.: ");
		gets(arr[i].dept);
		printf("\nCourse: ");
		gets(arr[i].course);
		printf("\nYear(of admission): ");
		scanf("%d",&arr[i].year);
	}
	printf("\nEnter the particular year: ");
	scanf("%d",&yr);
	printf("\n\nThe students who joined in %d are as follows: \n",yr);
	for(i=0;i<max;i++)
	{
		if(arr[i].year==yr)
		{
			printf("\n %s \n",arr[i].name);
		}
	}
}
