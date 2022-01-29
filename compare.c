#include<stdio.h>
#include<conio.h>
int compare(char str1[15],char str2[15]);
void main()
{
	int cmp;
	char string1[15], string2[15];
	printf("\nEnter string1: ");
	fflush(stdin);
	gets(string1);
	printf("\nEnter string2: ");
	fflush(stdin);
	gets(string2);
	cmp=compare(string1,string2);
	if(cmp==0)
	printf("\nThe two strings are equal");
	else
	printf("\nThe two strings %s and %s are not equal",string1,string2);
}
int compare(char str1[15],char str2[15])
{
	int i,j;
	for(i=0,j=0;str1[i]!='\0'&&str2[j]!='\0';i++,j++)
	{
		if(str1[i]==str2[j])
		return 0;
		else
		return 1;
	}
}
