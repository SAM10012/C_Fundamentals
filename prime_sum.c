#include<stdio.h>
#include<conio.h>
int main()
{
	int n,i,low,up,check=1;
	printf("lower and upper limits:\n");
	scanf("%d%d",&low,&up);
	for(i=low;i<=up;i++)
	{
		for(n=2;n<i;n++)
		{
		if(i%n==0)
		{
				check=0;
			
			 break;
			 	}
			 	else
			 	check=1;
	}
	if(check!=0)
	printf("%d is prime\n",i);
	
}
return 0;
}
	
