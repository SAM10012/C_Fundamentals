#include<stdio.h>
int main()
{
    char s[100],rev[100],*ps1,*ps2,temp,*ptemp=&temp;
    int i,n=0;
    printf("Enter a string: ");
    scanf("%s",s);
    printf("The string is: %s\n",s);
    for(i=0;s[i]!='\0';i++)
    n++;
    ps1=&s[0];
    ps2=&s[n-1];
    for(i=0;i<n/2;i++)
    {
        *ptemp=*ps1;
        *ps1=*ps2;
        *ps2=*ptemp;
        *ps2--;
        *ps1++;
    }
    printf("The reverse of the string is: %s\n",s);
    return 0;
}
