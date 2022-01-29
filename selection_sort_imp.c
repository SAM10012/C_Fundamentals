#include<stdio.h>
#include<conio.h>
void selection_sort(int[],int);
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

	selection_sort(a,n);
	printf("\n\nAfter sorting:\n\n");
	for(i=0;i<n;i++)
	{
		
		printf("%d\t",a[i]);
	}
}
	void selection_sort(int p[],int size)
	{
		int i,j,k,temp;
		for(i=0;i<size;i++)
		{
			k=i;
			temp=p[i];
		for(j=i+1;j<size;j++)
		{
			if(p[j]<temp)
			{
				temp=p[j];
				k=j;
				
			}
		}
		p[k]=p[i];
		p[i]=temp;
	}

}
	
	
	
	
