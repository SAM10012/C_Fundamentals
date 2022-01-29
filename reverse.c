#include<stdio.h>
#include<conio.h>
#define max 5
void main()
{

int i,j,arr[max],temp;

for(i=0;i<max;i++)
{
printf("The '%d' element is: ",i);
scanf("%d",&arr[i]);
}
for(i=0;i<max;i++)
{
printf("\t %d",arr[i]);
}
for(i=0,j=(max-1);i<(max/2);i++,j--)
{
	temp=arr[i];
	arr[i]=arr[j];
	arr[j]=temp;
}
printf("\n\nThe elements are:\n\n\n");
for(i=0;i<max;i++)
{
printf("\t %d",arr[i]);
}
}
