#include<stdio.h>
int main()
{
	struct book
	{
		int pages;
		char name[10];
	}a;
	a.pages=10;
	strcpy(a.pages,"Cbasics");
	printf("%s=%d",a.name,a.pages);
	return 0;
}
