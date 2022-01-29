#include<stdio.h>
int main()
{
	int arr[5][5][5]={0};
	printf("%d",((&arr+1)-(&arr)));
	return 0;
}
