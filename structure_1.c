#include<stdio.h>
#include<conio.h>
#include<string.h>
struct Student
{
	char name[20];
	int roll;
	int semester;
	char stream[5];
};

void main()
{
	int i=0,j,num,N;
	struct Student stud[i];
	printf("Enter the no. of students:\n");
	scanf("%d",&num);
	while(i<num)
	{
	{
		printf("Enter the name:\n");
		fflush(stdin);
		gets(stud[i].name);
		printf("Enter the roll:\n");
		scanf("%d",&stud[i].roll);
		printf("Enter the semester:\n");
		scanf("%d",&stud[i].semester);
		printf("Enter the stream:\n");
		fflush(stdin);
		gets(stud[i].stream);
	}
	i++;
		
	}
	for(i=0;i<num;i++)
	{
		if((stud[i].name[0]=='A')&&(stud[i].stream=="CSE"))
		printf("%s\n%d\n%d\n%s\n",stud[i].name,stud[i].roll,stud[i].semester,stud[i].stream);
	}
	
	}
	

