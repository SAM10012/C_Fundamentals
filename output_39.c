#include<stdio.h>
int main()
{
	int a=90;
	void *ptr;
	ptr=&a;
	printf("%d",*ptr);
	return 0;
}
