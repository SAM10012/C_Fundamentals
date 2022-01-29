#include<stdio.h>
#include<conio.h>
void main()
{
	int a,b,c,max;
	printf("Enter the numbers: ");
	scanf("%d%d%d",&a,&b,&c);
	max=((a>b&&a>c)?a:((b>a&&b>c)?b:c));
	printf("The maximum number is: %d",max);

}
