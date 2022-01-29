#include<stdio.h>
#include<conio.h>
int power(int base,int index);
void main()
{
	int ans,a,b;
	printf("\nEnter the base of the no.: ");
	scanf("%d",&a);
	printf("\nEnter the power of the no.: ");
	scanf("%d",&b);
	ans=power(a,b);
	printf("\nThe calculated answer is %d",ans);
}
int power(int base,int index)
{
	int result=1;
	while(index!=0)
	{
		result=result*base;
		index--;
	}
	return result;
}
