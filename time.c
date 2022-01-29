#include<stdio.h>
#include<conio.h>
float time(int hr,int sec);
void main()
{
	int hour,min,second;
	float clock;
	printf("\nEnter the time in hour,minute,second format: ");
	scanf("%d%d%d",&hour,&min,&second);
	clock=time(hour,second);
	printf("\nThe time in minutes is %f m",clock+min);
}
float time(int hr,int sec)
{
	float minutes;
	minutes=((hr*60)+(sec/60));
	return minutes;
	}
