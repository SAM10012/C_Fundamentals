#include<stdio.h>
#include<conio.h>
int quad(int a,int b,int c);
void main()
{
	int x,y,z,*roots;
	printf("\nEnter the coefficient of x^2: ");
	scanf("%d",&x);
	printf("\nEnter the coefficient of x: ");
	scanf("%d",&y);
	printf("\nEnter the constant of the quadratic equation: ");
	scanf("%d",&z);
	roots=quad(x,y,z);
	printf("\nThe roots of the equation are: %d and %d",*roots,*(roots+1));
	
}
int quad(int a,int b,int c)
{
	int root1,root2;
	int arr[5];
	if((b^2-4*a*c)>0)
	{
		root1=(-b+(b^2-4*a*c)^(1/2))/2*a;
		root2=(-b-(b^2-4*a*c)^(1/2))/2*a;
	}
	arr[0]=root1;
	arr[1]=root2;
	return &arr;
}
