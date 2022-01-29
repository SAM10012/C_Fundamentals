#include<stdio.h>
int main()
{
	struct xyz{int a;};
	struct xyz obj1 = {110};
	struct xyz obj2=obj1;
	printf("%d",obj2.a);
	obj2.a=11;
	printf("%d",obj1.a);
	printf("%d",obj2.a);
	return 0;
	
}
