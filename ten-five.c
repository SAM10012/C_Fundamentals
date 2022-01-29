#include<stdio.h>
int main()
{
	float arr[3]={12.32,3.66,7.45};
	float *p1=&arr[0];
	float *p2=p1+2;
	printf("%.2f",*p1);
	printf("%d",p2-p1);
	return 0;
}
