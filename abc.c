#include<stdio.h>
int main()
{
int N;
float sum = 0.0;
scanf("%d",&N); 
int i;

while(i!=N)
{
 
  sum=sum+(1/i);
  i++;
}

printf("Sum of the series is: %.2f",sum);
return 0;
}
