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
int Input();
void Print(int,int);
void main()
{
int i,n;
struct Student stud[i];
n=Input(n);
while((i>=0)&&(i<n))
{
	printf("Student[%d]:\n",i);
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
		i++;
}
for(i=0;i<n;i++)
{
	printf("name:%s\nroll:%d\nsemester:%d\nstream:%s\n",stud[i].name,stud[i].roll,stud[i].semester,stud[i].stream);
}

void Print(int i,int n);
}
int Input(n)
{
	printf("Enter no. of students:\n");
	scanf("%d",&n);
	return n;
}
void Print(i,n)
{
	struct Student stud[i];
	while((i>=0)&&(i<n))
	{
		if((stud[i].name[0]=='A')&&(stud[i].stream=="CSE"))
		{
		
		printf("%s\n%d\n%d\n%s\n",stud[i].name,stud[i].roll,stud[i].semester,stud[i].stream);
	}
	i++;
	}
}

