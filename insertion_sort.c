#include<stdio.h>
#include<conio.h>
void main()
{
	int arr[10],n,i,j,num;
	printf("Enter the number of elements in the array: ");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		printf("Enter the '%d' element: ",i);
		scanf("%d",&arr[i]);
	}
	printf("Enter the number to be inserted: ");
	scanf("%d",&num);
	printf("Enter the position of insertion:(consider from 0th position) ");
	scanf("%d",&j);
	for(i=(n-1);i>=j;i--)
	{
	arr[i+1]=arr[i];
}
arr[j]=num;
for(i=0;i<=n;i++)
printf("\nindex '%d'element is %d\n",i,arr[i]);
}
	
