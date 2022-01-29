#include<stdio.h>
#include<conio.h>
int length(char string[25]);
void main()
{
	int len;
	char str[25];
	printf("\nEnter the string: ");
	fflush(stdin);
	gets(str);
	len=length(str);
	printf("\nThe length of %s is %d",str,len);
}
int length(char string[25])
{
	int i=0,sum=0;
	while(string[i]!='\0')
	{
    sum=sum+1;
    i++;
}
return sum;
}
