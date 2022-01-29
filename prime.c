#include<stdio.h>
#include<conio.h>
int main()
{
	int num,i,check=1;
	printf("no.?\n");
	scanf("%d",&num);
	for(i=2;i<num;i++)
	{
		if(num%i==0)
		{
			check=0;
			break;
			
		}
	}
	if(check==1)
	printf("%d is prime",num);
	else
	printf("%d is not prime",num);
	return 0;
}
