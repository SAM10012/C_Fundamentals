#include<stdio.h>
int main()
{
	struct str
	{
		int s1;
		char st[30];
		};
		struct str s[]={{1,"struct 1"},{2,"struct 2"},{3,"struct 3"}};
		printf("%d%s",s[2].s1,(*(s+2)).st);
	}
		
		
		
		
