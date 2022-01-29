#include<stdio.h>
void printNames(char (*p)[100])
{
if(**p=='\0')
return;
else
{
printf("%s\n",*p);
p++;
printNames(p);
}
}
int main()
{
char
names[20][100]={"Bombay","Delhi","Guwahati","Kanpur","Kharagpur","Madras","Roorkee",""};
printNames(names);
}

