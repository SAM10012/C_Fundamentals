#include<stdio.h>
int main()
{
	int arri[]={1,2,3};
	int *ptri=arri;
	char arrc[]={1,2,3};
	char *ptrc=arrc;
	printf("size of arri[]=%d\n",sizeof(arri));
	printf("size of ptri[]=%d\n",sizeof(ptri));
	printf("size of arrc[]=%d\n",sizeof(arrc));
	printf("size of ptrc[]=%d\n",sizeof(ptrc));
	return 0;
}
