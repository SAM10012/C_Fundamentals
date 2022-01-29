/*Sum of the squares of the values stored in a 10 element array*/
#include<stdio.h>
void main()
{
	int array[10],i,sum=0;
	for(i=0;i<10;i++)
	{
		printf("Enter the values:\n");
		scanf("%d",&array[i]);
		sum=sum+(array[i]*array[i]);
	}
	printf("The sum of the squares of the inputted values is %d",sum);
}
