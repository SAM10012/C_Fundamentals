#include<stdio.h>
#include<conio.h>
int main()
{
	int j,z,sum=0;
	
	printf("Enter tne number:\n");
	scanf("%d",&z);
	while(z/10!<0)
	{
		j=z%10;
		z=z/10;
		if(j%2!=0)
		{
		
		sum=sum+j;
	}
	}
	printf("%d",sum);
	return 0;
}


