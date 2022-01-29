#include<stdio.h>

int main()
{
    int a[10][10], n; 
    scanf("%d", &n); //Size of the matrix is taken from test data
int r,c,sum=0,sum1=0,sum2=0;

for(r=0;r<n;r++)
{
  for(c=0;c<n;c++)
  {
    scanf("\n%d",&a[r][c]);
  }
}

for(r=0;r<n;r++)
{
  for(c=0;c<n;c++)
  {
    if(r==c)
      sum1+=a[r][c];
  }
}

for(r=n-1;r>=0;r--)
{
  for(c=n-1;c>=0;c--)
  {
    if(r==c)
      sum2+=a[r][c];
  }
}
sum=sum1+sum2;
printf("Sum of the diagonal elements is = %d",sum);
return 0;
}
