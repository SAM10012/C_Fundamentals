#include<stdio.h>
void main()
{
	char str[80];
	int i,len,flag=0;
	printf("Enter the string:\n");
	gets(str);
	for(len=0;str[len]!='\0';len++);
	for(i=0;i<(len/2);i++)
	{
		if(str[i]!=str[len-i-1])
		{
			flag=1;
			break;
		}
	}
	if(flag==0)
	printf("\n The string is a palindrome\n");
	else
	printf("\n The string is not a palindrome\n");
	}
