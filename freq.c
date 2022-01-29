#include<stdio.h>
#include<string.h>
#define MAX 100 
void main()
{
    char string[MAX];
    int a, length;
    int frequency[26];
    printf("Enter the string:\n");
    gets(string);
	length = strlen(string);
    for(a=0; a<26; a++)
    {
        frequency[a] = 0;
    }
    for(a=0; a<length; a++)
    {
        if(string[a]>='a' && string[a]<='z')
        {
            frequency[string[a] - 97]++;
        }
        else if(string[a]>='A' && string[a]<='Z')
        {
            frequency[string[a] - 65]++;
        }
    }
    printf("\nFrequency of all characters in the given string:\n");
    for(a=0; a<26; a++)
    {
        if(frequency[a] != 0)
        {
            printf("'%c' = %d\n", (a + 97), frequency[a]);
        }
    }

    
}
