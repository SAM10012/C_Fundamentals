#include<stdio.h>
#define A 5
#define B 8
int main()
{
	int (*x)[A][B],a=1;
	printf("%d\n",sizeof(a));
	printf("%d",sizeof(*x));
	return 0;
}
