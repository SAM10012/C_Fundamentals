#include<stdio.h>
#include<conio.h>
void bubble_sort(int[],int);
void main()
{
	int a[100],n,i;
	printf("Enter the number of elements in the array: ");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		printf("Enter the '%d' element: ",i);
		scanf("%d",&a[i]);
	}
	printf("\nBefore sorting:\n\n");
	for(i=0;i<n;i++)
	{
		
		printf("%d\t",a[i]);
	
	}

	bubble_sort(a,n);
	printf("\n\nAfter sorting:\n\n");
	for(i=0;i<n;i++)
	{
		
		printf("%d\t",a[i]);
	}
}
	void bubble_sort(int p[],int size)
	{
		int i,j,temp;
		for(i=0;i<size-1;i++)
		{
			for(j=0;j<size-i-1;j++)
			{
				if (p[j]>p[j+1])
				{
					temp=p[j];
					p[j]=p[j+1];
					p[j+1]=temp;
				}
			}
		}
	}
