#include<stdio.h>
int fn(int num);
int main()
{
	int num=10;
	fn(num);
	printf("%d",num);
}
int fn(int num)
{
	return ++num;
}
