#include<stdio.h>
#include<conio.h>
void main()
{
	int a,b;
	printf("Enter the values of a and b:\n");
	scanf("%d%d",&a,&b);
	printf("The sum of %d and %d is %d\n",a,b,a+b);
	printf("The difference of %d and %d is %d\n",a,b,a-b);
	printf("The product of %d and %d is %d\n",a,b,a*b);
	printf("The quotient of division of %d by %d is %d\n",a,b,a/b);
	printf("The remainder of division of %d by %d is %d\n",a,b,a%b);
	getch();	
	
}
