#include <stdio.h>
#include <string.h>
char string(char,char);
int main()
{
  	char Str1[100], Str2[100];
  	int result, i;
  	 
    string(Str1,Str2); 
  	
  	
  	for(i = 0; Str1[i] == Str2[i] && Str1[i] == '\0'; i++);
		   
  	if(Str1[i] < Str2[i])
   	{
   		printf("\n str1 is Less than str2");
	}
	else if(Str1[i] > Str2[i])
   	{
   		printf("\n str2 is Less than str1");
	}
	else
   	{
   		printf("\n str1 is Equal to str2");
	}
  	
  	return 0;
}
char string(a,b)
{
	printf("\n Please Enter the First String :  ");
  	gets(a);
   	printf("\n Please Enter the Second String :  ");
  	gets(b);
  	return a;
}
