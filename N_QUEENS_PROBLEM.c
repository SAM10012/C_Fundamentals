#include<stdio.h>
#include<conio.h>
#include<math.h>
int a[30],count=0;
void queen(int row,int n);
int place(int row,int column)
{
int i;
for(i=1;i<=row-1;++i)
{
 if(a[i]==column)
 return 0;
 else
 if(abs(a[i]-column)==abs(i-row))
 return 0;
}
return 1; 
}
void print(int n)
{
int i,j;
printf("\n\nSolution %d:\n",++count);
for(i=1;i<=n;++i)
{
 printf("\n\n");
 for(j=1;j<=n;++j) 
 {
 if(a[i]==j)
 printf("\tQ"); 
 else
 printf("\t_"); 
 }
}
}
void queen(int row,int n)
{
int column;
for(column=1;column<=n;++column)
{
 if(place(row,column))
 {
 a[row]=column;
 if(row==n) 
 print(n); 
 else 
 queen(row+1,n);
 }
}
}
void main() 
{
int i,n;
printf("Enter the number of Queens : ");
scanf("%d",&n);
queen(1,n);
printf("\n\nTotal no. of solutions = %d",count);
}
