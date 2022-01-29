#include<stdio.h>
#include<conio.h>
void main()
{
	char string[100];
	int i=0;
	printf("Enter a string: ");
	fflush(stdin);
	gets(string);

		for(((string[i]>='a')&&(string[i]<='z'));string[i]!='\0';i++)
		{
			string[i]=string[i]-32;
		}
	
	printf("The new string is:");
	for(i=0;string[i]!='\0';i++)
	{
		printf("%c",string[i]);
	}
	printf("\n %s",toupper(string));
}
