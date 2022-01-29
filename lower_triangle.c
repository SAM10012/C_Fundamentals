#include <stdio.h>
int main()
{
int matrix[20][20];
int i,j,r;
   
scanf("%d", &r); //Accepts number of rows or columns

    for(i=0;i< r;i++) //Accepts the matrix elements from the test case data
    {
        for(j=0;j<r; j++)
        {
            scanf("%d",&matrix[i][j]);
        }
    }

/* Complete the program to get the desired output. Use the printf() statement as
printf("%d ", matrix[i][j]);
*/
int z=0;
for(i=0;i< r;i++)
    {
        for(j=0;j<r; j++)
        {
          if(j<=i)
            printf("%d ",matrix[i][j]);
          else
            printf("%d ",z);
        }
printf("\n");
}
return 0;
}
            
