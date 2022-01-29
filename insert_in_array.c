#include<stdio.h>
void insert(int array[],int n,int item,int pos);
void main()
{
	int array[100],n,i,item,pos;
	printf("Enter total number of elements of the array:\n");
	scanf("%d",&n);
	printf("Enter the elements of the array:\n");
	for(i=0;i<n;i++)
		scanf("%d",&array[i]);
	printf("Elements of the array are:\n");
	for(i=0;i<n;i++)
		printf("\n%d",array[i]);
	printf("\nEnter the new element:\n");
	scanf("%d",&item);
	printf("Enter position of the element:\n");
	scanf("%d",&pos);
	insert(array,n,item,pos);
}
void insert(int array[],int n,int item,int pos)
{
	int i;
	for (i=n;i>=pos;i--) 
        array[i]=array[i - 1];
    array[pos-1]=item;
    for (i=0;i<=n;i++) 
        printf("%d ", array[i]); 
    printf("\n");
}

