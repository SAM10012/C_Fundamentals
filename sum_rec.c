#include<stdio.h>
#include<conio.h>
int sum(int);
void main()
{
int n,sum1;
printf("\n Enter the nth term upto which sum will be calculated: ");
scanf("%d",&n);
sum1=sum(n);
printf("\n The required sum is %d",sum1);
}

int sum(int n)
{
if(n<=1)
return n;
else
return n + sum(n-1);
}

