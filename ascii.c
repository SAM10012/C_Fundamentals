#include<stdio.h>
#include<conio.h>
void main()
{

	char ch;
	do
	{
		printf("Enter a character from A to Z or a to z:\n");
		fflush(stdin);
		scanf("%c",&ch);
		printf("The ASCII value of %c is %d\n",ch,ch);
	if(ch>=65&&ch<90)
		{
			ch=ch+32;
			printf("The lower case equivalent of %c is %d\n",ch,ch);
			
			}
		else if(ch>=97&&ch<122)
		{
			ch=ch-32;
			printf("The upper case equivalent of %c is %d\n",ch,ch);
			}
	
}while(ch!=90||ch!=122);
}
