#include<stdio.h>
#include<conio.h>
void main()
{
	int i=5,j=7,k=9,l;
	i=(++i)+(i++);
	j=(j++)+(++j);
	k=(k++)+(k++);
	l=(++k)+(i++)+(j++);
	printf("i=%d\tj=%d\tk=%d\tl=%d\n",i,j,k,l);
}
