#include<stdio.h>
#include<conio.h>
void insertion_sort(int[],int);
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

	insertion_sort(a,n);
	printf("\n\nAfter sorting:\n\n");
	for(i=0;i<n;i++)
	{
		
		printf("%d\t",a[i]);
	}
}
	void insertion_sort(int p[],int size)
	{
		int i,j,temp;
		for(i=1;i<size;i++)
		{
			temp=p[i];
			j=i-1;
				while(j>=0&&p[j]>temp)
				{
					p[j+1]=p[j];
					j--;
				}
				p[j+1]=temp;
			
		}
	}
