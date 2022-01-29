#include<stdio.h>
#include<conio.h>
#include<malloc.h>
int* modify(int *,int);
void main()
{
	int n, *arr,i,*p;
	printf("\n Enter the number of elements in the array: ");
	scanf("%d",&n);
	arr=(int *)malloc(sizeof(int)*n);

printf("\n Enter the elements of the array: ");
for(i=0;i<n;i++) 
{
  printf("\n Enter '%d' element: ",i);
  scanf("%d",&arr[i]);
}
printf("\n The elements of the array before modification are: ");
for(i=0;i<n;i++) 
{
  printf("\n Enter '%d' element is %d",i,arr[i]);
}

p=modify(arr,n);
printf("\n The elements of the array after modification are: ");

for(i=0;i<n;i++,p++) 
{
  printf("\n Enter '%d' element is %d",i,*p);
}

}

int* modify(int *arr,int n)
{
	int j;
	int *array;
    array=(int *)malloc(sizeof(int)*n);
    for(j=0;j<n;j++)
    {
    	array[j]=arr[j]*5;
	}

	return array;
}
