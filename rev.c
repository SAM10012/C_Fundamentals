#include<stdio.h>
 
int main() {
   int arr[20],a[20], i, n;
 
   scanf("%d", &n); /* Accepts the number of elements in the array */

  for (i = 0; i < n; i++) 
     scanf("%d", &arr[i]); /*Accepts the elements of the array */
     
for(i=0;i < n;i++)
  {
    a[i]=arr[n-(i+1)];
  }
  
for (i = 0; i < n; i++) {
      printf("%d\n", a[i]); // For printing the array elements 
   }
 
   return (0);
}

