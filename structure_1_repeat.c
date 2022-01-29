#include<stdio.h>
#include<conio.h>
int Input(int);

struct Student
{
	char name[20];
	int roll;
	int semester;
	char stream[5];
};
int print(int,int,struct Student);
void main()
{
	int i,j,num,N;
	struct Student stud[i];
	num=Input(N);
	for(i=0;i<num;i++)
	{
		printf("Enter details of stud[%d]:\n",i);
		printf("Enter the name:\n");
		scanf("%s\n",stud[i].name);
		printf("Enter the roll:\n");
		scanf("%d\n",&stud[i].roll);
		printf("Enter the semester:\n");
		scanf("%d\n",&stud[i].semester);
		printf("Enter the stream:\n");
		scanf("%s\n",stud[i].stream);
		
	}
	int print(i,num,(stud[i]));
	}
	
int Input(int n)
{
	printf("Enter the no. of students:\n");
	scanf("%d",&n);
	return n;
}
int print(int i,int num,struct Student stud[i])
{
	for(i=0;i<num;i++)
	{
		if((stud[i].name[0]=='A')&&(stud[i].stream=="CSE"))
		printf("%s\n%d\n%d\n%s\n",stud[i].name,stud[i].roll,stud[i].semester,stud[i].stream);
	}
	return 0;
}
