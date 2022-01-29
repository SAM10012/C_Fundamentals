#include<stdio.h>
void string(char str1[],char str2[]);
void main()
{
	char str1[100],str2[100];
	printf("Enter the first string:\n");
	gets(str1);
	printf("Enter the second string:\n");
	gets(str2);
	string(str1,str2);
}
void string(char str1[],char str2[])
{
	int i=0,z=0;
	while(str1[i]!='\0' || str2[i]!='\0')
	{
		if(str1[i]!=str2[i])
		{
			z=1;
			break;
		}
		i++;
	}
	if(z==0)
		printf("Strings are same\n");
	else
		printf("Strings are not same\n");
}

