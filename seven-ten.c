#include<stdio.h>
int main()
{
	int a[2][4]={1,2,3,4,5,6};
	int i=0,j=0;
	for(i=0;i<2;i++)
	for(j=2;j>=0;j--)
	printf("%d",a[i][j]);
	return 0;
	
}
