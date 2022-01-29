#include<stdio.h>
void func(int* y)
{
	*y=40;
}
int main()
{
	int y=30;
	func(&y);
	printf("%d",y);
	return 0;
}
