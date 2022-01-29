#include<stdio.h>
 int count(int i);
void main()
{
    int i1;
    int a=0;
    printf("Enter a positive integer number:\n");
    scanf("%d",&i1);
    a=count(i1);
    printf("Total number of digits in the number %d is: %d\n",i1,a);
    
}
int count(int i)
{
    static int a=0;
     
    if(i>0)
    {
        a++;
        count(i/10);
    }
    else
    {
        return a;
    }
}

