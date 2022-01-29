#include<stdio.h>
#include<conio.h>
#include<string.h>
#define WORDS 20
#define LMT 20
void main()
{
	
	int i,flag=0;
	char string[LMT];
	char array[WORDS][LMT]={"butterfly","grasshopper","mountains","rivers"};
	
	printf("\n Enter the string to be searched: ");
	gets(string);
	for(i=0;i<WORDS;i++)
	{
		if(strcmp(string,array[i])==0)
		{
			flag=1;
			break;
		}
	}
	if(flag==1)
	printf("\n String is found in the array! ");
	else
	printf("\n String not found in the array! ");
}
