#include<stdio.h>
void main()
{
	
	char temp[20],*name[4];
	int len,i;
	for(i=0;i<4;i++)
	{
		printf("\Enter name-%d:",i+1);
		gets(temp);
		len=strlen(temp);
		name[i]=(char*)malloc((len+1)*sizeof(char));
		strcpy(name[i],temp);
	}
	printf("\nThe entered names are:");
	for(i=0;i<4;i++)
	{
		printf("\n%s",name[i]);
	}
	for(i=0;i<4;i++)
	free(name[i]);
}
