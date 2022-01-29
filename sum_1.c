#include<stdio.h>
#include<conio.h>
int main()
{
	int i,j,k=1,sum=0,m,n;
	printf("Enter a number:\n");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		for(j=1;j<=i;j++)
		{
			sum=sum+k;
			k++;
			m=sum+k;
		
		}
			
}
printf("%d",m);
return 0;	
}                                                         

