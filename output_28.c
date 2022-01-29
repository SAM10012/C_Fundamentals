#include<stdio.h>
int main()
{
	int a=320;
	char *ptr;
	ptr=(char*)&a;
	printf("%d",*ptr);
	return 0;
}/*As we know int is two byte data byte while char is one byte data byte. char pointer can keep the address one byte at time.
Binary value of 320 is 00000001 01000000 (In 16 bit)
Memory representation of int a = 320 is:
So ptr is pointing only first 8 bit whose decimal value is 64.*/
