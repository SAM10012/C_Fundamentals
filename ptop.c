#include<stdio.h>
#include<conio.h>
void main()
{
	int x,*px,**ppx;
	px=&x;
	ppx=&px;
	printf("Enter the number:\n");
	scanf("%d",&x);
	printf("The inputted integer using pointer to a pointer is %d",**ppx);
}
