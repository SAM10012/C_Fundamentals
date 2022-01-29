#include<stdio.h>
int main()
{
	short num[3][2]={1,2,3,4,5,6};
	printf("%d %d",*(num)[1],**(num+2));
	return 0;
	
}
