#include <stdio.h>
int findhcf(int, int);
void main()
{
    int first,second,answer;
    printf("Enter two numbers for finding their HCF:\n");
    scanf("%d%d",&first,&second);
    answer=findhcf(first, second);
    printf("The HCF of %d and %d is %d\n",first,second,answer);
}
 int findhcf(int i, int j)
{
    while (i != j)
    {
        if (i > j)
        {
            return findhcf(i - j, j);
        }
        else
        {
            return findhcf(i, j - i);
        }
    }
    return i;
}

