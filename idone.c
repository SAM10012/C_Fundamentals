#include<stdio.h>
void main()
{
	int x=12,a,b,c,d,e;
	
	printf("%d\n",++x + x++ + x-- + --x + x++);
	printf("%d\n",x);
}
