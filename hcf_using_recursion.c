#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
int HCF(int, int); //You have to write this function which calculates the HCF. 
	 
int main()
{
   int a, b, c, d, result;
   scanf("%d %d %d %d", &a, &b, &c, &d); /* Takes 4 number as input from the test data */
   result = HCF(HCF(a, b), HCF(c,d));
   printf("The HCF is %d", result);
}

//Complete the rest of the program to calculate HCF
int HCF(int i,int j)
{
	int k;
  if(i>j||i==j)
  {
  	k=j;
    if(i%k==0 && j%k==0)
    {
      return k;
    }
    else
    {
      return HCF(i,j-1);
      k--;
    }
  }
  else
  {
  	k=i;
    if(j%k==0 && i%k==0)
    {
    	
      return k;
    }
    else
    {
      return HCF(i-1,j);
      k--;
    }
  }
}
