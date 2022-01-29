#include<stdio.h>
#include<conio.h>
void main()
{
	int marks;
		printf("Enter the marks obtained:\n");
	scanf("%d",&marks);
	if(marks>=50)
	{
	if(marks>=90)
		printf("The grade is 'O'\n");

else if(marks>=80&&marks<=89)
	printf("The grade is 'E'\n");
	else if(marks>=70&&marks<=79)
		printf("The grade is 'A'\n");
	else if(marks>=60&&marks<=69)
			printf("The grade is 'B'\n");
	else if(marks>=50&&marks<=59)
		printf("The grade is 'C'\n");
	}
	else
			printf("The grade is 'F'\n");
}
