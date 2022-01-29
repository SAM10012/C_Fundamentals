#include <stdio.h>
int main()
{
	int a[100],b[100],l,u,n,i,j,s=0,k;
	printf("Enter the limit: ");
	scanf("%d",&n);
	printf("\nEnter the number : ");
	scanf("%d",&k);
	printf("\nEnter the array elements\n");
	for(i=0;i<n;i++)
		scanf("%d",&a[i]);
	for(i=0;i<n;i++)
	{
		for(j=i;j<n;j++)
		{
			s+=a[j];
			if(s==k)
				break;
		}
		if(s==k)
			break;
		s=0;
	}
	l=i;
	u=j;
	k=0;
	for(;i<=j;i++)
	{
		b[k++]=a[i];
	}
	printf("\nThe required sub array is : ");
	for(i=0;i<k;i++)
		printf("%d ",b[i]);
}

