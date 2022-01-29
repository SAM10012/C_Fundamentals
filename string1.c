#include<stdio.h>
#include<conio.h>
#include<string.h>
#include<ctype.h>
void main()
{
	char str[100],substr[50][50];
	int i,k,count=1,len=0;
	printf("\n Enter a string: ");
	scanf("%[^\n]s",str);
	for(i=0;str[i]!='\0';i++)
	{
		if(isspace(str[i]))
		count++;
		else
		{
			len++;
			
		}
	}
	printf("\n There are %d words in the sentence. ",count);
}
