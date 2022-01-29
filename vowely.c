#include<stdio.h>
#include<conio.h>
void main()
{
	char s;
	printf("\nEnter a character: ");
	scanf("%c",&s);
	if(s=='a'||s=='e'||s=='i'||s=='o'||s=='u'||s=='A'||s=='E'||s=='I'||s=='O'||s=='U')
    printf("\n%c is a vowel",s);
    else
    printf("\n%c is not a vowel",s);
}
