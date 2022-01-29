#include<stdio.h>
#include<conio.h>
void main()
{
	int n,max,min,arr[12],i;
	printf("Enter the no. of elements in the array: ");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
	printf("Enter the '%d' element: ",i);
	scanf("%d",&arr[i]);
}
max=arr[0];
for(i=0;i!=n;i++)
{
	if(arr[i]>max)
	{
		max=arr[i];
	}
	
}
min=arr[0];
for(i=0;i!=n;i++)
{
	
	if(arr[i]<min)
	{
		min=arr[i];
	}

}

printf("\nThe maximum element is %d",max);
printf("\nThe minimum element is %d",min);
}
