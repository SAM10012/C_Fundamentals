#include<stdio.h>
#include<conio.h>
#include<string.h> 

void main()

{

  char a[30];
  int n,i=0;
  printf("Enter the name ");
  gets(a);
  printf("%c",a[0]);
  while(a[i]!='\0')
  {
   if(a[i]==' ')
   {
     putch('.');
     putch(a[++i]);
     n=i+1;
    }
    i++;
  }
   for(i=n;i<strlen(a);i++)
     printf("%c",a[i]);
}
