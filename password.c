#include <stdio.h>
void main()
{
    char str[100];
    char *p;

    printf("Enter any string: ");
    fgets(str, 100, stdin);
    p=str;
    printf("The input string is: ");
        while(*p!='\0')
        printf("%c",*p++);

}
