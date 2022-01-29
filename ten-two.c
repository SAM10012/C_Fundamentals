#include<stdio.h>
int main()
{
	char *s="corona";
	char *p=s;
	printf("%c\t%c",*(p+2),s[2]);
	return 0;
}
