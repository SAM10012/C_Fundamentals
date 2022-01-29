#include<stdio.h>
#define R 3
#define C 4
int main()
{
	int (*p)[R][C];
	printf("%d",sizeof(*p));
	printf("\n%d",sizeof(int));
	return 0;
}
