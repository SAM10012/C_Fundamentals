#include<stdio.h>
#include<conio.h>

void main()
{
	int a,b,c,x,y,z;
	printf("Enter the values of a,b and c(usual meanings in quadratic equation):\n");
	scanf("%d%d%d",&a,&b,&c);
	z=b*b-4*a*c;
	if(z==0||z>0)
	{
	x=(-b+sqrt(z))/(2*a);
	y=(-b-sqrt(z))/(2*a);
	printf("The roots are real\n");
	printf("The roots are %d and %d",x,y);
}
	else
	printf("The roots are imaginary");
	getch();
}
	
	
	
		

