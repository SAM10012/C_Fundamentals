#include<stdio.h>
int RecursiveArraySum(int *arr,int n);
void main()
{
int arr[20],i,n;
printf("Enter total number of elements to be inserted:\n");
scanf("%d",&n);
printf("Enter the elements of the array:\n");
for(i=0;i<n;i++)
scanf("%d",&arr[i]);
printf("The required sum is %d",RecursiveArraySum(arr,n));
}
int RecursiveArraySum(int *arr,int n)
{
if(n<=0)
return 0;
return (RecursiveArraySum(arr,n-1)+arr[n-1]);
}
