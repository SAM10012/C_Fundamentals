#include<stdio.h>
#include <malloc.h>

int main()
{
int *Array, n, p;
scanf("%d", &n); //Accepts total number of elements from test data
scanf("%d", &p); //Accepts which position to find

//Write the program to accept n elements and then print the element
//at position p after sorting in ascending order
//Use the printf statement as:
//printf("The desired element is %d", variable_name);
int i,j,temp;
Array = (int*)calloc(n, sizeof(int));
 
for(i=0;i<n;i++)
{
  scanf("\n%d",(Array+i));
}
for(i=0;i<n-1;i++)
	{
		for(j=0;j<n-i-1;j++)
		{
			if(*(Array+j)>*(Array+(j+1)))
			{
				temp=*(Array+j);
				*(Array+j)=*(Array+(j+1));
				*(Array+(j+1))=temp;
			}
		}
	}printf("The desired element is %d", *(Array+(p-1)));
return 0;
}
