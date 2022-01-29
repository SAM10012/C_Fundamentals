#include<stdio.h>
#include<conio.h>
void main()
{
	int x,y,z,*px,*py,*pz;
	px=&x;
	py=&y;
	pz=&z;
	printf("Enter two numbers:\n");
	scanf("%d%d",&x,&y);
	*pz=*px+*py;
	printf("The two numbers add up to give %d",*pz);
}
