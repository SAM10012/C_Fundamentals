#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
void main()
{
	char string[10];
	int input, arr1[10],rem,i=0,j,len=0,temp;
	printf("\nEnter the numbers: ");
	scanf("%s",string);
	input = atoi(string);
	do
	{
		rem = input%10;
		arr1[i] = rem;
		i++;
		len++;
		input=input/10;
	}while(input>0);
	
	
	for(i=0;i<len-1;i++)
	{
		for(j=i+1;j<len;j++)
		{
			if(arr1[i]>arr1[j])
			{
				temp= arr1[i];
				arr1[i] = arr1[j];
				arr1[j] = temp;
			}
			
		}
	}
	
	printf("\n The least no. is %d and greatest no. is %d.",arr1[0],arr1[len-1]);
}
