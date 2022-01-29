#include<stdio.h>
#include<string.h>

void reverse(char[], int, int);
    int main()
    {
        char str1[20];
        scanf("%s", str1); //The string is taken as input form the test data. 
     int count=0,i=0,end;
while(str1[i]!='\0')
{
  count++;
  i++;
}
end=count;
count=count+1;
void reverse(char str1[], int count, int end);
 return 0;
      }
      
      

void reverse(char str1[], int count, int end)
{
 int i;
  char str2[20];
  for(i=0;i<=count;i++)
  {
    str2[i]=str1[end];
    end--;
  }
  
  str2[count]='\0';
  
  for(i=0;i<=count;i++)
  {
    str1[i]=str2[i];
}
  
  printf("The string after reversing is: %s\n", str1); 
  
}
	
