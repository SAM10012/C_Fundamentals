#include<stdio.h>
#include<malloc.h>
void val(char *p);
void main()
{
	char *z;
	z=(char*)malloc(sizeof(char));
	printf("Enter the string:\n");
	gets(z);
	val(z);
}
void val(char *p)
{
	int a=0,b=0;
	char *flag=p;
	while(*flag!='\0')
	{
		if(*flag=='@')
			b=1;
		a++;
		flag++;
	}
	if(a<8||b==0)
		printf("The string is invalid\n");
	else
		printf("The string is valid\n");
}

