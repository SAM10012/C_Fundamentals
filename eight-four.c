#include<stdio.h>
int fun(int x);
void main()
{
	int r;
	r=fun(95);
	printf("%d",r);
}

int fun(int x)
{
	int result;
	if(x>100)
	result=(x-10);
	else
	result=fun(fun(x+11));
	return result;
}

