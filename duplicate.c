#include<stdio.h>
 
int main() 
{
   int array[50], i,j,k,item,flag=0, size;
 
   scanf("%d", &size); /*Accepts the size of array from test case data */

   for (i = 0; i < size; i++)
   scanf("%d", &array[i]); /* Read the array elements from the test case data */

for (i = 0; i < size; i++)
{
	item=array[i];
	for (j = i+1; j < size; j++)
	{
		k=j;
		if(item==array[j])
		{
			flag=flag+1;
			do
			{
				array[k]=array[k+1];
				k++;
			}while(k<size);
		}
		else
		continue;
	}
}

size=size-flag;

for (i = 0; i < size; i++)
   {
      printf("%d\n", array[i]);
   }

}
