#include<stdio.h>
int main()
{
	char s[20]="Hello World";
	char *const p=s;
	*p='M';
	printf("%s\n",s);
	return 0;
}
