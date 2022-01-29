#include<stdio.h>
#include<conio.h>
int main()
{
	char x,*px;
	int i;
	
	for(i=1;i<=3;i++)
	{
		printf("Enter any character from keyboard:\n");
		fflush(stdin);
		scanf("%c",&x);
		px=&x;
		if(((*px>=65)&&(*px<=90))||((*px>=97)&&(*px<=122)))
		printf("%c is an alphabet\n",*px);
		else
		printf("Wrong input\n");
	}
	return 0;
}

