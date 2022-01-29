#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
void main()
{
	char str_input[20];
	int i=0,j,len=0,a,b,count,sum,rem;
	int int_input,arr1[20];
	printf("\n Enter the string: ");
	scanf("%s",str_input);
	printf("\nEnter the sum: ");
	scanf("%d",&sum);
	
	int_input = atoi(str_input);
	do
	{
		rem = int_input%10;
		arr1[i] = rem;
		i++;
		len++;
		int_input = int_input/10;
	}while(int_input>0);
	
	for(i=0;i<len;i++)
	{
		for(j=i+1;j<len;j++)
		{
			a = arr1[i];
			b = arr1[j];
			if(a+b == sum)
			{
				count++;
				printf("(%d,%d) ",a,b);
			}
		}
	}
	printf("are the counting pairs.\n");
	printf(" The reqd. no. of counting pairs is %d.",count);
	
}
