#include<stdio.h>
struct Student
{
	char name[20],stream[5];
	int roll,semester;
};

void input(struct Student *info,int n);

void print(struct Student *info,int n);

void main()
{
	struct Student info[20];
	int n;
	printf("Enter total number of students:\n");
	scanf("%d",&n);
	input(info,n);
	print(info,n);
}

void input(struct Student *info,int n)
{
	int i;
	for(i=0;i<n;i++)
	{
		printf("%d Student Details:\n",i+1);
		printf("Enter the name:\t");
		fflush(stdin);
		gets((info+i)->name);
		printf("Enter the roll no.:\t");
		scanf("%d",&(info+i)->roll);
		printf("Enter the semester:\t");
		scanf("%d",&(info+i)->semester);
		printf("Enter the stream:\t");
		fflush(stdin);
		gets((info+i)->stream);
	}
}

void print(struct Student *info,int n)
{
	int i,temp=0;
	printf("The required information\n");
	for(i=0;i<n;i++)
	{
		if((info+i)->name[0]=='a' || (info+i)->name[0]=='A' && strcmp((info+i)->stream,"CSE")==0)
		{
			printf("%s\t%d\t%d\t%s\n",(info+i)->name,(info+i)->roll,(info+i)->semester,(info+i)->stream);
			temp=1;
		}
	}
	if(temp==0)
	printf("There are no students of required criteria\n");
}
