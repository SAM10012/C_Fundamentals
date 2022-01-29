#include<stdio.h>
#include<conio.h>
void main()
{
	int year;
	printf("Enter a year:\n");
	scanf("%d",&year);
	if(year%100==0)
	{
	printf("%d is a centurian year\n",year);
	if(year%400==0)
	printf("%d is a leap year\n",year);
	else
	printf("The centurian year is not a leap year\n");
}
	else
	{
		if(year%4==0)
		printf("%d is a leap year\n",year);
		else
	printf("The non-centurian year is not a leap year\n");
		
	}
	getch();
}
