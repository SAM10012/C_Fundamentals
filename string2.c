#include<stdio.h>
#include<conio.h>
#include<string.h>
#include<ctype.h>
#include<string.h>
void main()
{
	char str[100],substr[50][50],max_s[50],min_s[50];
	int i,j,k,count=1,max,min;
	max=strlen(substr[0]);
	min=strlen(substr[0]);
	printf("\n Enter the string: ");
	scanf("%[^\n]s",str);
	for(i=0;str[i]!='\0';i++)
	{
		if(isspace(str[i])!=0)
		count++;
	}
	printf("\n The no. of words in the string is %d. \n",count);
	for(j=0,k=0;j<count,k<count;j++,k++)
	{
		if(strlen(substr[j])>max)
		max_s[50]=substr[j];
		if(strlen(substr[k])<min)
		min_s[50]=substr[k];
	}
	
	printf("\n The word with maximum length is %s.\n The word with minimum length is %s.\n",max_s,min_s);
	
}
