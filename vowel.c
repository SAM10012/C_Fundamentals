#include<stdio.h>
#include<conio.h>
void main()
{
	char string[100];
	int i,vowels=0,consonants=0;
	printf("Enter a string: ");
	fflush(stdin);
	gets(string);
	for(i=0;string[i]!='\0';i++)
	{
		if(string[i]=='a'||string[i]=='e'||string[i]=='i'||string[i]=='o'||string[i]=='u'||string[i]=='A'||string[i]=='E'||string[i]=='I'||string[i]=='O'||string[i]=='U')
		vowels++;
		else
		consonants++;
	}
	printf("The number of vowels in the string is %d",vowels);
	printf("\nThe number of consonants in the string is %d",consonants);
}
