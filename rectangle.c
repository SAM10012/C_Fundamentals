#include<stdio.h>
#include<conio.h>

void main()
{
	int l,b,peri,area;
	printf("Enter the length and breadth of rectangle:\n");
	scanf("%d%d",&l,&b);
	if(l==2*b)
	{
		area=l*b;
		printf("The area of the rectangle is %d\n",area);
	}
		else
		{
		
		peri=2*(l+b);
		printf("The perimeter of the rectangle is %d",peri);
	}
		getch();
}
		
	
