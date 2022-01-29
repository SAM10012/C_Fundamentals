/* HCF/GCD OF TWO NUMBERS */
#include<stdio.h>
int recursion(int,int);
void main()
{
	int n,m,hcf;
	printf("\n Enter the no.s whose hcf is to be done: ");
	scanf("%d%d",&n,&m);
	hcf=recursion(n,m);
	printf("\n The hcg/gcd of %d and %d is %d",n,m,hcf);
}

int recursion(int n,int m)
{
	int x,y;
	if(n>m)
	{
	x=n;
	y=m;
}
else
{
	x=m;
	y=n;
}
if(x%y==0)
return y;
else
return recursion(y,x%y);
}
