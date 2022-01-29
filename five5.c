#include<stdio.h>
int findmax(int arr[],int pos,int maximum);
void main()
{
int a[20],i,n,max;
printf("Enter total number of elements:\n");
scanf("%d",&n);
printf("Enter the elements of the array:\n");
for(i=0;i<n;i++)
scanf("%d",&a[i]);
max=a[0];
printf("Maximum element of the array is %d",findmax(a,n-1,max));
}
int findmax(int arr[],int pos,int maximum)
{
if(pos==0)
return maximum;
if(pos>0)
{
if(arr[pos]>maximum)
maximum=arr[pos];
return findmax(arr,pos-1,maximum);
}
}

