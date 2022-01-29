#include<stdio.h>
#include<conio.h>
void main()
{
	int i,j,k=1,n;
printf("Enter the no. of rows: ");
scanf("%d",&n);
for(i=1;i<=n;i++)
{
	
	for(j=1;j<=(n+4);j++)
	{
		
		if(j>=(4-i)&&j<=(i+4)&&k==1)
		{
			printf("%d",k*i);
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
