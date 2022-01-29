#include<stdio.h>
#include<conio.h>
void main()
{
	int n,i,j,k=1;
	printf("Enter the no. of rows: ");
scanf("%d",&n);
for(i=0;i<n;i++)
{
	
	for(j=0;j<(n+3);j++)
	{
		
		if(j>=(3-i)&&j<=(i+3))
		{
			
			
			printf("%d",k);
			(j>=4)?k--:k++;
		}
		else
		{
		printf(" ");
		
	}

}  
	printf("\n");
}
}

