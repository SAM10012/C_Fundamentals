#include<stdio.h>
int main()
{
	int a[][3]={0,1,2,3,4,5};
	int (*ptr)[3]=a;
	printf("%d %d\n",(*ptr)[0],(*ptr)[1]);
	++ptr;
	printf("%d %d\n",(*ptr)[0],(*ptr)[1]);
	return 0;
}
