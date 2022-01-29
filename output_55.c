#include<stdio.h>
int main()
{
	struct tree
	{
		int h;
	};
	struct tree tree1;
	tree1.h=10;
	printf("Height=%d",tree1.h);
	return 0;
}
