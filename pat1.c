#include<stdio.h>
#include<conio.h>
void main()
{
	int i,j,k=1,n;
printf("Enter the no. of rows: ");
scanf("%d",&n);
for(i=0;i<n;i++)
{
	
	for(j=0;j<(n+3);j++)
	{
		
		if(j>=(3-i)&&j<=(i+3)&&k==1)
		{
			printf("*");
			k=0;
		}
		else
		{
		printf(" ");
		k=1;
	}

}  
	printf("\n");
}
}
