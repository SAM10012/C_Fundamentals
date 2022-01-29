#include<stdio.h>
#include<conio.h>
void main()
{
	int n1,n2,divisor,dividend,rem,hcf;
	printf("Enter the first no.:\n");
	scanf("%d",&dividend);
	printf("Enter the second no.:\n");
	scanf("%d",&divisor);
	
	do{
		rem=dividend%divisor;
			
			dividend=divisor;
			divisor=rem;
			
			
	
}while(rem!=0);
hcf=dividend;
printf("The H.C.F is %d",hcf);
}
