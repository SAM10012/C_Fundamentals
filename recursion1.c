#include<stdio.h>
void repeat(char name[],int n);
void main()
{
    char name[50];
    int n;
    printf("Enter your name:\n");
    gets(name);
    printf("How many times will it repeat?\n");
    scanf("%d",&n);
    repeat(name,n);
}
void repeat(char name[],int n)
{
    if(n==0)
    printf("Ends\n");
    else
    {
        printf("%s\n",name);
        n--;
        repeat(name,n);
    }
}
