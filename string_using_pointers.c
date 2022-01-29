#include<stdio.h>

void main()
{
	char string[15];
	char *p;
	int i,j,k;
	printf("Enter the string:\n");
	scanf("%s",string);
	p=string;
	for(k=0;*(p+k)!='\0';k++)
	{
		printf("%c",*(p+k));
		
	}
	printf("\n");
	for(i=0;*(p+i)!='\0';i++)
	{
		if(*(p+i)>=65&&*(p+i)<=90)
		{
			*(p+i)=*(p+i)+32;

		}
		else if(*(p+i)>=97&&*(p+i)<=112)
		{
			*(p+i)=*(p+i)-32;
		}
		
	}
	for(j=0;*(p+j)!='\0';j++)
	{
		printf("%c",*(p+j));
	}
}
